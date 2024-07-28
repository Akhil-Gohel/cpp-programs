#include<iostream>
using namespace std;

int main(){
    float a,b,c;
    cout << "enter sides of the triangle:";
    cin >> a >> b >> c;
    if(b+c>a and a+c>b and a+b>c){
        cout << "this is a valid triangle" << endl;
    }
    else{
        cout << "this is not a valid triangle" << endl;
    }
}