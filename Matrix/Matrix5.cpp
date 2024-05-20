#include<iostream>
#include<limits.h>
using namespace std;
void Matrix5(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += a[i][j];
        }
        if(sum > max){
            max = sum;
        }
    }
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += a[j][i];
        }
        if(sum > max){
            max = sum;
        }
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += a[i][j];
        }
        res += max - sum;
    }
    cout << res << endl;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        Matrix5();
    }
    return 0;
}
//code xấu vl, chưa đủ kiến thức để làm gọn hơn.