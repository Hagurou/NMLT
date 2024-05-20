#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int f[1000001];

bool cmp(int x, int y){
    if(f[x] == f[y]){
        return x < y;
    }else{
        return f[x] > f[y];
    }
}

int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        int a[n];
        memset(f, 0, sizeof (f));
        for(int i = 0; i < n; i++){
            cin >> a[i];
            f[a[i]]++;
        }
        sort(a, a + n, Sorting16);
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
//comparison func for std::sort
