#include<iostream>
using namespace std;

//    1 
//   22
//  333
// 4444

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

        int k = 1;
        while(k<=i){
            cout << i;
            k++;
        }
        cout << endl;
        i++;
    }
}