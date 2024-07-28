#include<iostream>
using namespace std;

void printArray(int num[],int n){
    for(int i=0; i<n; i++){
        cout << num[i] << " " ;
    }
}

void findUnique(int num[],int n){
    for(int i=0; i<n-1; i+=2){
        swap(num[i],num[i+1]);
    }
}

int main(){
    int size;
    cin >> size;

    int num[100];

    for(int i=0; i<size; i++){
        cin >> num[i];
    }
    swapAlternate(num,size);
    printArray(num,size);
}