#include<iostream>
using namespace std;

void find(int nums[]){
    int ans[100];
    int z=9;
    for(int i=0;i<z;i++){
        int x=nums[i]%z;
        
        nums[x]+=z;
    }
    for(int i=0;i<z;i++){
        if(nums[i]/z>1){
        ans[i]==i+1;}
    }
    cout << ans;
}

int main(){
    int nums[] = {4,3,2,7,8,2,3,1};
    find(nums);
}