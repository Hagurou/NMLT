#include<iostream>
using namespace std;
int Sorting15(int a[], int n, int k){
    int count = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] - a[j] < k){
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
        cout << Sorting15(a, n, k) << endl;
    }
    return 0;
}
//Nếu là abs(a[i] - a[j]) thì test ví dụ đúng
//còn không thì sai đề.
