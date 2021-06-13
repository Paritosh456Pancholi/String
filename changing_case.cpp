#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char A[1000];
    cout<<"Enter string:";
    cin>>A;
    
    for(int i=0;A[i]!='\0';i++){
        if(A[i]>=65 && A[i]<=90){
            A[i]=A[i]+32;
        }
        else if(A[i]>='a' && A[i]<=122){
            A[i]=A[i]-32;
        }
        
    }
    cout<<"converted string:"<<A;
}