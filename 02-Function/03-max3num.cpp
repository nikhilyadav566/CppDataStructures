#include <iostream>
using namespace std;

int findMax(int num1, int num2, int num3){
    if(num1>num2 && num1>num3){
        return num1;
    }
    else if(num2>num1 && num2>num3){
        return num2;
    }
    else{
        return num3;
    }
}

int main(){

    int a,b,c;
    cout<<"Enter first no."<<endl;
    cin>>a;
    cout<<"Enter second no."<<endl;
    cin>>b;
    cout<<"Enter third no."<<endl;
    cin>>c;
    int max=findMax(a,b,c);
    cout<< max << " is the maximum no of the given input."<<endl;
    return 0;
}
