#include<iostream>
using namespace std;
typedef long long ll;
bool solve(int n, ll k){
    ll res = 0;
    for(int i = 1; i <= n; i++){
        res += i % k;
    }
    return res == k;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        ll k;
        cin >> n >> k;
        if(solve(n, k)){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}