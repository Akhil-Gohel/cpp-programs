#include<iostream>
using namespace std;

// A B C
// B C D
// C D E

int main(){
    int n = 4;
    int i = 1;
    while(i<=n){
        char ch = 'A' + i - 1;
        int j = 1;
        while(j<=n){
            cout << ch ;
            ch = ch + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}