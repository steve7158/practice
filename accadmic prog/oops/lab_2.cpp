#include<iostream>
using namespace std;
class date{
  int days, months, year;
  public:
    void input(){
      cout<<"enter day month year: ";
      cin>>days>>months>>year;
    }
friend date age(date d1);
void output(){
  cout<<"age on 1/4/2019= "<<year<<" years "<<months<<" months "<<days<<" days.";
  }
};
date age(date d1){
  date d3;
  d3.year=2019-d1.year;
  if(d1.months>4){
    d3.months=12-d1.months+4;
    d3.year--;
  }
  else
    d3.months=4-d1.months;
  d3.days=31-d1.days+1;
  d3.months--;
  return d3;
}

int main()
{
date d2, a;
d2.input();
a=age(d2);
a.output();
return 0;
}
