#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"input a number: ";
    cin>>a;
    if(a<0){
        cout<<"Negative number"<<endl;
    }
    else if(a>0){
        cout<<"Positive number"<<endl;
    }
    else{
        cout<<"number is neither positive not negative"<<endl;
    }
}