#include <iostream>

using namespace std;

class vector
{
    private:
        int *element;
        int size;
    public:
        vector(int n)
        {
            size=n;
            element=new int[n];
            for(int i=0;i<n;i++){
                cout<<"Give element in the vector-\n";
                cin>>element[i];
            }
        }
        void display()
        {
            for(int i=0;i<size;i++){
                cout<<element[i]<<" ";
            }
        }
        vector operator +(vector v)
        {
            vector temp=v;
            for(int i=0;i<size;i++){
                temp.element[i]=element[i]+v.element[i];
            }
            return temp;
        }
        friend vector operator *(int scaler,vector v);
};

vector operator *(int scaler,vector v)
{
    vector temp=v;
    for(int i=0;i<v.size;i++)
    {
        temp.element[i]=scaler*v.element[i];
    }
    return temp;
}

int main()
{
    cout<<"Give elements for the first vector-\n";
    vector v1(3);
    cout<<"Give elements for the second vector-\n";
    vector v2(3);
    v1=2*v1;
    cout<<"\n After scalar multiplication of number 2 \n v1 is: ";
    v1.display();
    v2=3*v2;
    cout<<"\n After scalar multiplication of number 3 \n v2 is: ";
    v2.display();
    vector v3=v2+v1;
    cout<<"\n Eddition of vectors v1 and v2 after scalar multiplication \n v3 is: ";
    v3.display();
}