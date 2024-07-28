#include<iostream>
using namespace std;

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

int main(){
    int n = 5;
    int i = 1; 
    while(i<=n){
        //1st part
        int j = 1;
        while(j<=n-i+1){
            cout << j;
            j++;
        }
        //stars
        int k = 1;
        int stars = 2*(i-1);
        while(k<=stars){
            cout << "*";
            k++;
        }
        //2nd part
        int l = n - i + 1;
        while(l>=1){
            cout << l;
            l--;
        }
        cout << endl;
        i++;
    }
}