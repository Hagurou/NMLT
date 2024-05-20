#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
//naive
bool tonguoc(ll n){
    ll sum = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            sum += i;
            if(i != n / i){
                sum += n / i;
            }
        }
    }
    return sum - n == n;
}
//optimize
bool prime(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return n > 1;
}
bool check(ll n){
    for(int p = 1; p <= 33; p++){
        if(prime(p)){
            ll temp1 = pow(2, p) - 1;
            if(prime(temp1)){
                ll temp2 = pow(2, p - 1);
                if(temp1*temp2 == n){
                    return true;
                }
            }
        }
    }
    return false;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        ll n;
        cin >> n;
        if(check(n)){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}
//Code trên hoạt động phù hợp với n <= 10^12
//Với n <= 10^18, sử dụng thuật toán Euclid-Euler
//Nếu p là số nguyên tố và 2^p - 1 cũng là số nguyên tố thì 2^(p - 1)*2^p - 1 là số nguyên tố
