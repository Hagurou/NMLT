#include<iostream>
using namespace std;
void Matrix10(){
    int n, m;
    cin >> n >> m;
    int a[n][m], c[n][m] = {};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1){
                for(int k = 0; k < n; k++){
                    for(int k = 0; k < m; k++){
                        c[i][k] = 1;
                        c[k][j] = 1;
                    }
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int q;
    cin >> q;
    while(q--){
        Matrix10();
    }
    return 0;
}