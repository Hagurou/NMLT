#include<iostream>
#include<algorithm>
using namespace std;
void sorting1(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int i = 0, j = n - 1;
    while(i < j){
        cout << a[j] << " " << a[i] << " ";
        i++;
        j--;
    }
    cout << endl;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        sorting1();
    }
    return 0;
}
//two pointer technique + std::sort