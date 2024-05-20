#include<iostream>
using namespace std;
int n, X[100], k;
void Comination2(){
    for(int i = 1; i <= k; i++){
        cout << X[i];
    }
    cout << endl;
}
void Try(int i){
    for(int j = X[i - 1] + 1; j <= n - k + i; j++){
        X[i] = j;
        if(i == k){
            Comination2();
        }else{
            Try(i + 1);
        }
    }
}
int main(){
    int q;
    cin >> q;
    while(q--){
        cin >> n >> k;
        Try(1);
    }
    return 0;
}
