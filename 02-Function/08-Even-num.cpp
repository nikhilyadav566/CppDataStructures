#include<iostream>
using namespace std;

int getEven(int num){
    for(int i = 2; i<=num; i=i+2){
        cout<< i <<" ";
    }
        cout<< endl;
}


int main(){
    int n;
    cout<<"Enter your no."<<endl;
    cin>>n;
    int even = getEven(n);
    cout<<"These are the even no upto the given no."<<endl;
    return 0;

}
