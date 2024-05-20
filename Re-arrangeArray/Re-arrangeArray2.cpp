#include<iostream>
using namespace std;
typedef long long ll;
void RearrangeArray2(){
    int n;
    cin >> n;
    ll a[n], b[n], count = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] != 0){
            b[count++] = a[i];
        }
    }
    for(int i = 0; i < count; i++){
        cout << b[i] << " ";
    }
    for(int i = 0; i < n - count; i++){
        cout << 0 << " ";
    }
    cout << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        RearrangeArray2();
    }
    return 0;
}