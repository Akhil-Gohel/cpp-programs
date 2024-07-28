#include<iostream>
using namespace std;

bool isOdd(int n){
    if(n%2==1){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;

    if(isOdd(n)){
        cout << "it is an Odd number." << endl;
    }
    else{
        cout << "it is an Even number." << endl;
    }
}
