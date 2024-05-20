#include<iostream>
typedef long long ll;
const ll mod = 1e9 + 7;
using namespace std;
void fibonacci(int n){
    ll a[1001];
    a[0] = a[1] = 1;
    for(int i = 2; i <= 1000; i++){
        a[i] = (a[i - 1] + a[i - 2]) % mod; 
    }
        cout << a[n - 1] << endl;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        fibonacci(n);
    }
    return 0;
}