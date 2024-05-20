#include<iostream>
using namespace std;
int n, X[100];
void Comination1(){
    for(int i = 1; i <= n; i++){
        cout << X[i];
    }
    cout << endl;
}
void Try(int i){
    for(int j = 0; j <= 1; j++){
        X[i] = j;
        if(i == n){
            Comination1();
        }else{
            Try(i + 1);
        }
    }
}
int main(){
    int q;
    cin >> q;
    while(q--){
        cin >> n;
        Try(1);
    }
    return 0;
}