#include<iostream>
using namespace std;

int getOdd(int num){
    for(int i = 1; i<=num; i=i+2){
        cout<< i <<" ";
    }
        cout<< endl;
}

int main(){
    int n;
    cout<<"Enter your no."<<endl;
    cin>>n;
    int odd = getOdd(n);
    cout<< "These are the odd no upto the given no."<<endl;
    return 0;
}
