#include<iostream>
using namespace std;

int getEvenSum(int num){
    int sum =0;
    for(int i=2; i<=num; i=i+2){
        sum = sum+i;
    }
        return sum;
}


int main(){
    int n ;
    cout<<"Enter your no. "<<endl;
    cin>>n;
    int sum = getEvenSum(n);
    cout<<"Even Sum is " <<sum << endl;
    return 0;
}
