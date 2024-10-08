#include<iostream>
using namespace std;

void printCounting(int num){
    for(int i =1; i<=num; i++){
        cout<< i <<endl;
    }
}

int main(){
    int n;
    cout<<"Enter your no."<<endl;
    cin>>n;
    printCounting(n);
    
    return 0;
}
