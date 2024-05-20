#include<iostream>
#include<cmath>
typedef long long ll;
using namespace std;
const int N = 1e6+5;
int prime[N];
void sieve(){
    for(int i = 0; i <= N; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(N); i++){
        if(prime[i]){
            for(int j = i*i; j <= N; j+=i){
                prime[j] = 0;
            }
        }
    }
}
int main(){
    int q;
    cin >> q;
    sieve();
    while(q--){
        ll L, R;
        cin >> L >> R;
        int count = 0;
        for(int i = 2; i <= sqrt(R); i++){
            if(prime[i] == 1){
                ll squared = (ll)i * i;
                if(squared >= L && squared <= R){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
//Bình phương 1 số nguyên tố chỉ có đúng 3 ước số.
