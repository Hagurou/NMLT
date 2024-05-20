#include<iostream>
typedef long long ll;
const ll mod = 1e9 + 7;
using namespace std;
bool fibonacci2(ll n){
    ll a[100];
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i <= 92; i++){
        a[i] = (a[i - 1] + a[i - 2]) % mod;
    }
    for(int i = 0; i <= 92; i++){
        if(a[i] == n){
            return true;
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
        if(fibonacci2(n)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}