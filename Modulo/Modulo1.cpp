#include<iostream>
typedef long long ll;
using namespace std;
ll powMod(int x, int y, ll p){
    ll res = 1;
    while(y > 0){
        if(y & 1){
            res *= x;
            res %= p;
        }
        x *= x;
        x %= p;
        y >>= 1;
    }
    return res;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int x, y;
        ll p;
        cin >> x >> y >> p;
        cout << powMod(x, y, p) << endl;
    }
    return 0;
}