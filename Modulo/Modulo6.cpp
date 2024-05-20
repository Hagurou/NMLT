#include<iostream>
using namespace std;
typedef long long ll;
ll solve(string n, ll m){
    ll res = 0;
    for(int i = 0; i < n.length(); i++){
        res = (res + n[i] - '0') % m;
    }
    return res;
}
ll powMod(ll a, ll b, ll m){
    ll res = 1;
    while(b > 0){
        if(b & 1){
            res *= (a % m);
            res %= m;
        }
        b >>= 1;
        a *= a;
    }
    return res;
}
int main(){
    int q;
    cin >> q;
    while(q--){
       string a;
       ll b, m;
       cin >> a >> b >> m;
       ll du = solve(a, m);
       cout << powMod(du, b, m) << endl;
    }
    return 0;
}