#include<iostream>
using namespace std;

// C 
// B C
// A B C

int main(){
    int n = 4;
    int i = 1;
    while(i<=n){
        char ch = 'A' + n - i;
        int j = 1;
        while(j<=i){
            cout << ch ;
            ch = ch + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}