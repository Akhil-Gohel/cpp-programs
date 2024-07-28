#include<iostream>
using namespace std;

// A 
// B c
// D E F

int main(){
    int n = 4;
    int i = 1;
    char ch = 'A';
    while(i<=n){
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