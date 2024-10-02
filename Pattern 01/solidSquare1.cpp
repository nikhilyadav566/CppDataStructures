#include<iostream>
using namespace std;
int main(){
    int n ,i,j ;
    cout<<"Enter your no of row"<<endl;
    cin>>n;
     for(i=1; i<=n; i++){     // where i = rows and j = columns
        for(j=1; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}
