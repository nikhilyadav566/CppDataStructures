#include<iostream>
using namespace std;

void identifyEvenOdd(int k){
    if(k%2==0){
        cout<<"This is even no."<<endl;
    }
    else{
        cout<<"This is odd no."<<endl;
    }
}

int main(){

    int n;
    cout<<"Enter your no."<<endl;
    cin>>n;
    identifyEvenOdd(n);

    return 0;
}
