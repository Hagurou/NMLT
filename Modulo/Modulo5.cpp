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
int main(){
    int q;
    cin >> q;
    while(q--){
        string n;
        ll m;
        cin >> n >> m;
        cout << solve(n, m) << endl;
    }
    return 0;
}