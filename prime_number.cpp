#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=2;
    while(i<n){
        if(n%i == 0){
            cout << "it is not a Prime Number" << endl;
            break;
        }
        else{
            i++;
        }
    }
    if(i==n){
        cout << "it is a Prime Number" << endl;
    }
}