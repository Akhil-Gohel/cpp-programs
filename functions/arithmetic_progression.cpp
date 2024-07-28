#include<iostream>
using namespace std;

int nthTerm(int a, int d,int n){
    int ans = a + ((n-1)*d);
    return ans;
}

int main(){
    int a,d,n;
    cout << "enter the first term a :" << endl;
    cin >> a;
    cout << "enter the difference d :" << endl;
    cin >> d;
    cout << "enter the term no. :" << endl;
    cin >> n;

    int ans = nthTerm(a,d,n);
    cout << "the nth term is = " << ans << endl;
}