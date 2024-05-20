#include<iostream>
using namespace std;
void Matrix8(int n){
    int m = 8*n*n;
//
    int coil1[m];
    coil1[0] = 8*n*n + 2*n;
//we start from first element in the test case;
    int curr = coil1[0];
    int index = 1;
//Variable to store index of each elements in each coil;
    int mark = 1;
//Variable to change the direction of traversal for next step;
//Like in test case, after 1 path from down to top, we toggled "mark" and it
//went from top to down
    int step = 2;
//Its use to move to the next layer of the coil
    while(index < m){
        for(int i = 0; i < step; i++){
            curr = coil1[index++] = curr - 4*n*mark;
            //to build from top to down and down to top;
            if(index >= m){
                break;
            }
        }
        if(index > m){
            break;
            //check if we filled all elements in a coil;
        }
        for(int i = 0; i < step; i++){
            curr = coil1[index++] = curr + mark;
            //to build from left to right and right to left;
            if(index >= m){
                break;
            }
        }
        mark *= -1;
        //toggled to change direction;
        step += 2;
        //to move to next layer;
    }
    int coil2[m];
    for(int i = 0; i < 8*n*n; i++){
        coil2[i] = 16*n*n + 1 - coil1[i];
    }
    for(int i = 0; i < 8*n*n; i++){
        cout << coil1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 8*n*n; i++){
        cout << coil2[i] << " ";
    }
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        Matrix8(n);
    }
    return 0;
}