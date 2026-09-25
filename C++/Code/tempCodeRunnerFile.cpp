#include<iostream>
using namespace std;

int printreverse(int n){
    if(n==0) return 0;
    cout<<n<<" ";
    return printreverse(n-1);
}
int main(){
    cout<<printreverse(12)<<endl;
    return 0;
}   