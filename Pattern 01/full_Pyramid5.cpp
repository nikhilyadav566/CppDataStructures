#include<iostream>
using namespace std;
int main(){
    
    int i,j,n;
    cout<<"enter your no."<<endl;
    cin>>n;
    for(i=0; i<n; i++){
        //space
        for(j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<i+1; j++ ){
            cout<<"* ";
        }
            cout<<endl;
    }
}
