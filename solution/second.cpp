#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a character: ";
    cin>>c;
    if(c>='a' && c<='z' || c>='A' && c<='Z'){
        cout<<"Alphabet"<<endl;
    }
    else
        {
        cout<<"not an Alphabet"<<endl;
        }
    return 0;
    }