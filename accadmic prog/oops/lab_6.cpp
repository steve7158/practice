#include<iostream>
using namespace std;
class time
{
int hours;
int minutes;
int seconds;
public:
time()
{
hours=0;
minutes=0;
seconds=0;
}
time(int h, int m, int s)
{
hours=h;
minutes=m;
seconds=s;
}
void display()
{
cout<<"Time:"<< hours<<":"<< minutes<<":"<< seconds<<"\n";
}
time add(time t1, time t2)
{
time t3;
t3.hours=t1.hours+t2.hours;
t3.minutes=t1.minutes+t2.minutes;
t3.seconds=t1.seconds+t2.seconds;
if(t3.seconds>=60)
{
int ss=t3.seconds/60;
t3.minutes=t3.minutes+ss;
t3.seconds=t3.seconds-(ss*60);
}
if(t3.minutes>=60)
{
int mm=t3.minutes/60;
t3.hours=t3.minutes+mm;
t3.minutes=t3.minutes-(mm*60);
}
if(t3.hours>=12)
{
int yy=t3.hours/24;
t3.hours=t3.hours-(yy*12);
}
return t3;
}
};
int main()
{
time t1(6,6,2);
time t2(7,4,2);
t1.display();
t2.display();
time t3;
t3=t3.add(t1, t2);
t3.display();
}
