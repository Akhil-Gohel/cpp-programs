#include<iostream>
using namespace std;

int main(){
    int n = 2;
    while(1){
        switch(n){
                       case 1 : cout<<"this is 1-block"<<endl;
                                break;
                       case 2 : cout<<"this is 2-block"<<endl;
                                exit(0);
                       default : cout<<"this is default number"<<endl;
                   }
        cout << "this is a while loop" << endl;
    }
}