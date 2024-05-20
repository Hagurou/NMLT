#include<iostream>
#include<algorithm>
using namespace std;
//[L,R]:[2,9];
//sorted: [2,3,5,6,7,9]
int Sorting14(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    bool check[a[n - 1] - a[0] + 1] = {false};
    for(int i = 0; i < n; i++){
        if(a[i] >= a[0] && a[i] <= a[n - 1]){
            check[a[i] - a[0]] = true;
        }
    }
    int count = 0;
    for(bool x : check){
        if(!x){
            count++;
        }
    }
    return count;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        cout << Sorting14() << endl;
    }
    return 0;
}