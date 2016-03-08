#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
struct bds
{
  int a,b;
  char c;
}
using namespace std;
int suiji2()
{
  int b=0;
  while(b<=1||b>=100)
  {
   b=rand(); 
   }
   return b;
}
bds scb()
{
  string d="+-*/";
  bds h;
  h.a=suiji2();
  h.b=suiji2();
  h.c=d[suiji2()%4];
  return h;
}
void main()
{
  int a[100],b=0,c,e;
 
  cin>>a[99]>>a[98]>>a[97]>>a[96];
  while(b<a[99])
  {
	  for(int i=0;i<80;i++)
     {
     	  a[i]=suiji2();
      }
      while(a[0]>a[1])
     {
          a[0]=suiji2();
     }
     while(a[3]>a[4])
     {
          a[3]=suiji2();
     }
     c=a[2]%4;
     e=a[5]%2;
	 if(e==0)
     cout<<"No."<<b+1<<"\t"<<a[1]<<"\t"<<d[c]<<"\t"<<a[4]<<"\t"<<"="<<endl;
	 else
	 cout<<"No."<<b+1<<"\t"<<a[0]<<"/"<<a[1]<<"\t"<<d[c]<<"\t"<<a[3]<<"/"<<a[4]<<"\t"<<"="<<endl;
	 b++;
  }
}