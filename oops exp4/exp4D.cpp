#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string s1,s2,s3;
    cout<<"Give the first string\n";
    cin>>s1;
    cout<<"Give the second string\n";
    cin>>s2;
    cout<<s1<<endl<<s2<<endl;
    s3=s1+s2;
    cout<<s3<<endl;
    if(s1.length()>s2.length()){
        cout<<s1<<" is bigger\n";
    }
    else if(s1.length()<s2.length()){
        cout<<s2<<" is bigger\n";
    }
    else{
        cout<<"both strings have same length\n";
    }
}