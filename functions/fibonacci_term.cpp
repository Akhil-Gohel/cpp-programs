#include<iostream>
using namespace std;

int fibonacci(int n){
    int a = 0;
    int b = 1;
    if(n = 1){
        return 1;
    }
    int ans = 0;
    for(int i=3;i<=n;i++){
        ans = a + b;
        a = b;
        b = ans;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int ans = fibonacci(n);
    cout << "The nth term is = "<< ans << endl;
}