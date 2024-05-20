#include<iostream>
using namespace std;
typedef long long ll;
ll solve(int n, ll k){
    ll res = 0;
    for(int i = 1; i <= n; i++){
        res += i % k;
    }
    return res;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        ll k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}