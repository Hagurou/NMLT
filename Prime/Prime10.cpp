#include<iostream>
#include<cmath>
using namespace std;
int digitSum(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int tonguoc(int n){
    int sum = 0;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            sum += digitSum(i);
            n /= i;
        }
    }
    if(n  > 1){
        sum += digitSum(n);
    }
    return sum;
}
bool check(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return n > 1;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        if(!check(n) && digitSum(n) == tonguoc(n)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}