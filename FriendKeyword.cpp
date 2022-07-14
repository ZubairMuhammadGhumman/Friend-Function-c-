#include <iostream>
using namespace std;
class A
{
  private:
  int a;
  public:
  A();
  A(int);
  friend void display(A obj); //friend function is made when we use friend keyword for that which we want to change.
};
A::A(){a=0;}
A::A(int a){this->a=a;}
void display(A obj)// defination of friend fuction
{
  obj.a=47;
  cout<<obj.a;
}
int main()
 {
  A obj;
  display(obj);
}
//Friend method is use to access the class private data members and private method and change it out side the also