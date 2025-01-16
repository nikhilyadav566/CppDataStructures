#include<iostream>
using namespace std;

int getOddSum(int num){
    int sum=0;
    for (int i=1; i<=num; i=i+2){
        sum= sum+i;
    }
        return sum;
}

int main(){
    int  n;
    cout<<"Enter your no."<<endl;
    cin>>n;
    int odd = getOddSum(n);
    cout<<"Odd sum is "<< odd <<endl;
}
