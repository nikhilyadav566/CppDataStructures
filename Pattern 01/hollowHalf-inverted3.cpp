// Hollow inverted half pyramid
# include <iostream>
using namespace std;
int main(){
    int n,i,j;
        cout<<"enter your no."<<endl;
        cin>>n;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i==1||j==1||j==(n-i+1)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
            cout<<endl;
    }
}
