#include<iostream>
using namespace std;

void printArray(int name[],int n){
    cout<<"Printing the array"<<endl;
    for(int i=0; i<n; i++){
        cout<< name[i] <<" ";
    }
}

int main(){
    int size;
    cin >> size;

    int name[100];

    //input elements
    for(int i=0; i<size; i++){
        cin >> name[i];
    }

    printArray(name,size);

}