#include <iostream>
using namespace std;

//MultiLevel Inheritance
class GrandFather                //Base class Name as Grandfather 
{
  public:
  void display ()
  {
  cout<<"This is a GrandFather Class"<<endl;
  }
};

class Father: public GrandFather      //Derived class Name as Father
{
  public:
  void show()
  {
    cout<<"This is Father class"<<endl;
   }
};

class Son: public Father               //Derived class Name as Son
{
   public:
   void childDisplay()
   {
     cout<<"This is a Child Class"<<endl;
    }
};

int main ()
{
Father f;                            
f.show();
f.display();
return 0;
}
