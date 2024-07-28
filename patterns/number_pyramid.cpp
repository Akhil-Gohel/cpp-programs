#include<iostream>
using namespace std;

//    1 
//   121
//  12321
// 1234321

int main(){
    int n = 4;
    int i = 1;
    while(i<=n){
        //spaces
        int j = 1;
        while(j<=n-i){
            cout << " ";
            j++;
        }
        //1st part
        int k = 1;
        while(k<=i){
            cout << k;
            k++;
        }
        //2nd part
        int l = i-1;
        while(l>=1){
            cout << l;
            l--;
        }
        cout << endl;
        i++;
    }
}