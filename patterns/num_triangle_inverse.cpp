#include<iostream>
using namespace std;

// 1111 
//  222
//   33
//    4

int main(){
    int n = 4;
    int i = 1;
    while(i<=n){
        //spaces
        int j = 1;
        while(j<=i-1){
            cout << " ";
            j++;
        }

        int k = 1;
        while(k<=n-i+1){
            cout << i;
            k++;
        }
        cout << endl;
        i++;
    }
}