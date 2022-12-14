#include <iostream>
using namespace std;

class ABC {
   private:
      int a;
   public:
   ABC(int x)
   {a=x;
   }
   void operator -()
   {a=-a;
   }
   void operator ++(int)
   {a=a+1;
   }
    void operator --(int)
   {a=a-1;
   }
   void display()
   {cout<<a<<endl;
   }
};

int main() {
   ABC t(5),t1(6),t2(7);
   -t;
   t.display();
   t1++;
   t1.display();
   t2--;
   t2.display();
}
