#include<iostream>
using namespace std;

int getNumberSum(int num){
    int sum = 0;
    for (int i = 1; i <= num; i++){
        sum = sum+i;
    }
        return sum;
}

int main(){
    int n ;
    cout<<"Enter your no."<<endl;
    cin>>n;
    int sum = getNumberSum(n);
    cout<<"The sum of upto this no. is "<< sum <<endl;
    return 0;
}
