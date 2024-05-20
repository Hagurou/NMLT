#include<iostream>
#include<map>
using ll = long long;
using namespace std;
void RearrangeArray1(){
    int n;
    cin >> n;
    map<ll, bool> m;
    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        m[x] = true;
    }
    for(ll i = 0; i < n; i++){
        if(m[i]){
            cout << i << " ";
        }else{
            cout << -1 << " ";
        }
    }
}
int main(){
    int q;
    cin >> q;
    while(q--){
        RearrangeArray1();
        cout << endl;
    }
    return 0;
}