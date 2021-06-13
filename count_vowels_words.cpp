#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char A[1000];
    cout<<"Enter String:";
    gets(A);
    int vcount=0;
    int ccount=0;
    int digit=0;
    int space=0;
    int word=0;
    int special=0;
    for(int i=0;A[i]!='\0';i++){
        if (A[i]==' '&& A[i+1]!=' '){
            word++;
            }
        if(A[i]==' '){
            space++;
        }
        else if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='v'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U'||A[i]=='V'){
            vcount++;
        }
        else if((A[i]>='a' && A[i]<='z')||(A[i]>='A' && A[i]<='Z')){
            ccount++;
        }
        else if(A[i]>='0' && A[i]<='9'){
            digit++;
        }
        else if(A[i]>=33 && A[i]<=47 || A[i]>=58 && A[i]<=64 ){
            special++;
        }
        
    }
    cout<<"No. of vowels present in string:"<<vcount<<endl;
    cout<<"No. of consonants present in string:"<<ccount<<endl;
    cout<<"No. of digit present in string:"<<digit<<endl;
    cout<<"No. of spaces present in string:"<<space<<endl;
    cout<<"No. of words present in string:"<<word+1<<endl;
    cout<<"No. of special characters present:"<<special<<endl;
    
    return 0;   

}