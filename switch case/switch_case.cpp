#include<iostream>
using namespace std;

int main(){
    int n = 2;
    char ch = 'b';

    switch(ch){
        case 'a' : cout<<"this is a-block"<<endl;
                   break;
        
        case 'b' : cout<<"this is b-block"<<endl;
                   switch(n){
                       case 1 : cout<<"this is 1-block"<<endl;
                                break;
                       case 2 : cout<<"this is 2-block"<<endl;
                                break;
                       default : cout<<"this is default number"<<endl;
                   }
                   break;

        default : cout<<"this is default character"<<endl;
    }
}