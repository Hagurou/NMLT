#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
void sorting2(int n, int x, int a[]){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(abs(x - a[i]) > abs(x - a[j])){
                swap(a[i], a[j]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sorting2(n, x, a);
    }
    return 0;
}