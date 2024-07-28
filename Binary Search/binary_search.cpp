#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    int mid = (start + end) / 2;

    // mid = start + (end - start)/2 ; 
    // In case of Int out of range

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        //go to Right part
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = (start + end) / 2;

        // mid = start + (end - start)/2 ; 
        // In case of Int out of range
    }

    return -1;
}

int main(){

    int even[6] = {3,6,9,13,17};
    int odd[5] = {2,4,7,15,20};

    int evenIndex = binarySearch(even, 6, 3);
    cout << "Index of 9 is : " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 21);
    cout << "Index of 20 is : " << oddIndex << endl;

    return 0;
}