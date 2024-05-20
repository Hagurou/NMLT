#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;
bool isFibonacci(int n){
    ll a[100];
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i <= 92; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    for(int i = 0; i <= 92; i++){
        if(a[i] == n){
            return true;
        }
    }
    return false;
}
vector<int> fibonacci3(vector<int>& v){
    vector<int> maxSubArray;
    vector<int> currentSubArray;
    for(int i = 0; i < v.size(); i++){
        if(isFibonacci(v[i])){
            currentSubArray.push_back(v[i]);
            if(currentSubArray.size() > maxSubArray.size()){
                maxSubArray = currentSubArray;
            }
        }else{
            currentSubArray.clear();
        }
    }
    return maxSubArray;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        vector<int> res = fibonacci3(v);
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
//Damn, tưởng đề bài yêu cầu in ra dãy con dài nhất chỉ chứa toàn các số Fibo
//thì mới code thế này. Chứ yêu cầu như kia thì dễ quá. Kiểm tra Fibo rồi
//lặp mà in ra thôi :v