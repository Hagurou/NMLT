#include<iostream>
#include<set>
using namespace std;
void Sorting10(){
    set<int> s;
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        while(a[i]){
            s.insert(a[i] % 10);
            a[i] /= 10;
        }
    }
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        Sorting10();
    }
    return 0;
}