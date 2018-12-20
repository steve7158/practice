#include <iostream>
using namespace std;
struct time
{
int hr, min, sec;
void input()
{
 cout<<"hr,min,sec: ";
cin>>hr>>min>>sec;
}
long totalsec()
{
return hr*3600+min*60+sec;
}
void convert( long tsec)
{
hr=tsec/3600;
tsec=tsec%3600;
min=tsec/60;
sec=tsec%60;
}
void output()
{
cout<<"hr: "<<hr<<" min: "<<min<<" sec: "<<sec;
}
};
struct time add(struct time t1, struct time t2)
{
struct time t3;
long tsec;
tsec=t1.totalsec()+t2.totalsec();
t3.convert(tsec);
return t3;
}

int main()
{
struct time t1, t2, t3;
t1.input();
t2.input();
t3=add(t1,t2);
t3.output();
return 0;
}
