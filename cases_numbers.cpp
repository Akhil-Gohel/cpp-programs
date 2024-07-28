#include<iostream>
using namespace std;

int main(){
    cout << "Enter the charcter" << endl;
    char ch;
    cin >> ch;
    int ascii = int(ch);
    if(ascii>=65 && ascii<=90){
        cout << "This is Upper Case" << endl;
    }
    else if(ascii>=97 && ascii<=122){
        cout << "This is Lower Case" << endl;
    }
    else if(ascii>=48 && ascii<=57){
        cout << "This is Number" << endl;
    }
    else{
        cout << "This is Invalid Character" << endl;
    }
}
