#include<iostream>
using namespace std;

// A B C
// A B C
// A B C

int main(){
    int n = 4;
    int i = 1;
    while(i<=n){
        int j = 1;
        char ch = 'A';
        while(j<=n){
            cout << ch ;
            ch = ch + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}