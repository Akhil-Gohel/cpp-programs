#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    switch(100){
        case 100 : cout << "no. of 100rs notes = "<< n/100 <<endl;
                   n = n%100;
        case 50 : cout << "no. of 50rs notes = "<< n/50 <<endl;
                   n = n%50;
        case 20 : cout << "no. of 20rs notes = "<< n/20 <<endl;
                   n = n%20;
        case 1 : cout << "no. of 1rs notes = "<< n/1 <<endl;
                   n = n%1;
                   break;
    }
}