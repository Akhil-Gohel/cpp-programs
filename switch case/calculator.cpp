#include<iostream>
using namespace std;

int main(){
    int a,b;
    char ch;
    cout<<"Enter the number 1 :"<<endl;
    cin >> a;
    cout<<"Enter the number 1 :"<<endl;
    cin >> b;
    cout<<"Enter the operation :"<<endl;
    cin >> ch;

    switch(ch){
        case '+' : cout << (a+b) << endl;
                   break;
        case '-' : cout << (a-b) << endl;
                   break;
        case '*' : cout << (a*b) << endl;
                   break;
        case '/' : cout << (a/b) << endl;
                   break;
        case '%' : cout << (a%b) << endl;
                   break;
        default : cout << "Invalid operator" << endl;
    }
}