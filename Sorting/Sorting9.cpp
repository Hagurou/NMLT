#include<iostream>
using namespace std;
int Sorting9(int n, int a[], int k){
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] + a[j] == k){
                count++;
            }
        }
    }
    return count;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << Sorting9(n, a, k) << endl;
    }
    return 0;
}