#include<iostream>
using namespace std;

void printArray(int name[],int n){
    cout<<"Printing the array"<<endl;
    for(int i=0; i<n; i++){
        cout<< name[i] <<" ";
    }
}

void reverseArray(int num[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(num[start],num[end]);
        start++;
        end--;
    }
}

int main(){
    int size;
    cin >> size;

    int num[100];

    for(int i=0; i<size; i++){
        cin >> num[i];
    }

    reverseArray(num,size);
    printArray(num,size);
}