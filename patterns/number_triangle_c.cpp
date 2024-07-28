#include<iostream>
using namespace std;

//    1 
//   23
//  456
// 78910

int main(){
    int n = 4;
    int i = 1;
    int count = 1;
    while(i<=n){
        //spaces
        int j = 1;
        while(j<=n-i){
            cout << " ";
            j++;
        }

        int k = 1;
        while(k<=i){
            cout << count;
            count++;
            k++;
        }
        cout << endl;
        i++;
    }
}