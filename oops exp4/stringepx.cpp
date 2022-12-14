#include <iostream>


using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<s1<<endl<<s2<<endl;
    cout<<s1+" "+s2<<endl;
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