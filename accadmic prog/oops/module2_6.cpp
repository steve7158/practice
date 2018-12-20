#include<iostream>
using namespace std;

class A{
protected:
  int x;
public:
  A(){
    x=10;

  }

};
class B{
protected:
  int x;
public:
  B(){
    x=20;
  }
};

class C: public A, public B{
public:
  void fun(){
    cout<<"As x is: "<<A::x;
    cout<<"Bs x is: "<<B::x;
  }
};

int main(){
  A a;
  B b;
  C c;
  c.fun();
  
}
