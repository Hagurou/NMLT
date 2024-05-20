#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//lưu phần tử đã sort vào vector b(n) rồi so sánh với mảng ban đầu.
void Sorting7(int n, int a[]){
    vector<int> b;
    for(int i = 0; i < n; i++){
        b.push_back(a[i]);
    }
    sort(a, a + n);
    int start = -1, end = -1;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            if(start == -1){
                start = i;
            }
            end = i;
        }
    }
    if(start != -1 && end != -1){
        cout << start << " " << end;
    }
    cout << endl;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        Sorting7(n, a);
    }
    return 0;
}
//test case trong đề bị sai. Hình như đếm mảng từ 1.
