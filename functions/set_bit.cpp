#include<iostream>
using namespace std;

int setBitCount(int a,int b){
    int count = 0;

    while(a!=0){
        if(a&1){
            count++;
        }
        a = a>>1;
    }
    while(b!=0){
        if(b&1){
            count++;
        }
        b = b>>1;
    }
    return count;
}

int main(){
    int a = 7;
    int b = 3;

    int count = setBitCount(a,b);
    cout << "total set bit in a and b is = " << count << endl;
}