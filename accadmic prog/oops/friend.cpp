#include<iostream.h>
// #inc
using namespace std;
class B;
class A{
private:
  int a;
public:

  void showb(B b){
    cout<<"B:b"<<b.b;

  }

}
class B{
private:
  int b;
public:

  B{
    b=4;
  }
  friend void A::showb(B b);

}


int main(){
  A a;
  B b;
  a.showb(b);

}
