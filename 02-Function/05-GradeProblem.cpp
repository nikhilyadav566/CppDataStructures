#include<iostream>
using namespace std;

char getGrade(int num){
    if(num >=90){
        return 'A';
    }
    else if(num>=80){
        return 'B';
    }
    else if(num>=70){
        return 'C';
    }
    else if(num>=60){
        return 'D';
    }
    else
        return 'E';
    

}




int main(){

    int n;
    cout<<"Enter your marks."<<endl;
    cin>>n;
    char grade = getGrade(n);
    cout<<"You got "<< grade << " grade."<<endl;
    return 0;
}
