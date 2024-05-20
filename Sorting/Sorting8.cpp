#include<iostream>
#include<algorithm>
using namespace std;
int count(int x, int y[], int n, int mark[]){
    if(x == 0 || x == 1){
        return 0;
    }
    int* index = upper_bound(y, y + n, x);
    int ans = (y + n) - index;
    ans += mark[0] + mark[1];
    if(x == 2){
        ans -= (mark[3] + mark[4]);
//trying to handle all exceptions.
    }else if(x == 3){
        ans += mark[2];
    }
    return ans;
}
int Sorting8(int n, int m, int x[], int y[]){
    int mark[5] = {0};
    for(int i = 0; i < n; i++){
        if(y[i] < 5){
            mark[y[i]]++;
        }
    }
    sort(y, y + n);
    int total = 0;
    for(int i = 0; i < m; i++){
        total += count(x[i], y, n, mark);
    }
    return total;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        cout << Sorting8(n, m, a, b) << endl;
    }
    return 0;
}