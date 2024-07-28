#include<iostream>
#include<math.h>
using namespace std;

int power(int x, int n){
    int res = 1;
    if(n==0){
        return 1;
    }
    for(int i=1; i<=n; i++){
        res = res * x;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    int ans = 0;
    int i=0;
    while(n!=0){
       int rem = n%2;
       ans = rem * power(10,i)  + ans;
       n = n/2;
       i++;
    }
    cout << ans <<endl;
}