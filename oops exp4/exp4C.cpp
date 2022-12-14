#include <iostream>

using namespace std;

class base{
    private:
        int value;
    public:
        friend istream &operator >>(istream &in,base &b);
        friend ostream &operator <<(ostream &out,base &b);
};

ostream & operator<<(ostream &out,base &b){
    out<<"value is "<<b.value<<endl;
    return out;
}

istream & operator >>(istream &in,base &b){
    cout<<"enter the value ";
    in>>b.value;
}

int main(){
    base b1,b2;
    cin>>b1;
    cin>>b2;
    cout<<b1;
    cout<<b2;
    
}