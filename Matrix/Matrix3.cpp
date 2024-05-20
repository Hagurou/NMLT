#include<iostream>
using namespace std;
void Matrix3(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
    int count = 1;
    while(h1 <= h2 && c1 <= c2){
        for(int i = c1; i <= c2; i++){
            a[h1][i] = count;
            count++;
        }
        h1++;
        for(int i = h1; i <= h2; i++){
            a[i][c2] = count;
            count++;
        }
        c2--;
        for(int i = c2; i >= c1; i--){
            a[h2][i] = count;
            count++;
        }
        h2--;
        for(int i = h2; i >= h1; i--){
            a[i][c1] = count;
            count++;
        }
        c1++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int q;
    cin >> q;
    while(q--){
        Matrix3();
    }
    return 0;
}