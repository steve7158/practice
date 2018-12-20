#include <iostream>
using namespace std;

class B{
  int x,c;
public:
  B(int b){
    x=b;
  }
  friend void show (B b);
  friend B operator + (B b, int t);

};

B operator + (B b,int t){
  B temp;
  temp.c=b.x+t;
  return temp;
}

void show(d){
  cout<<d.c;
}



int main(){
  int t;
  t=30;
  B b(12);
  B c;
  c=b+t;
  show(c);
}
