#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    if(isPrime(n)){
        cout << "this is a prime number" << endl;
    }
    else{
        cout << "this is a not prime number" << endl;
    }
}