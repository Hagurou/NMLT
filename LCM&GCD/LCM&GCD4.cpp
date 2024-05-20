#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
void solve(){
    ll a;
    string b;
    cin >> a >> b;
    ll mod = 0;
    for(int i = 0; i < b.length(); i++){
        mod = (mod * 10 + b[i] - '0') % a;
    }
    cout << __gcd(a, mod) << endl;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        solve();
    }
    return 0;
}