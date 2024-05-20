#include<iostream>
using namespace std;
void Matrix7(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i % 2 == 0){
                cout << a[i][j] << " ";
            }else{
                cout << a[i][n - j - 1] << " ";
            }
        }
        cout << endl;
    }
}
int main(){
    int q;
    cin >> q;
    while(q--){
        Matrix7();
    }
    return 0;
}