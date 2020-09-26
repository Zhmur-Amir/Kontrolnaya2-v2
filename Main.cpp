#include "class.h"

ostream &operator<<(ostream &cout,  ClntN &s){s.print(); return cout;}



ClntN FuncVvoda(const char t)
{
         bool g;
         char s;
         int n,m;
         cout<<"Enter Length of your number: ";
         cin>>n;
         if(cin.fail() || n==0)
         {
             cout<<"Error! Wrong number";
             exit(1);
         }
         cout<<endl;
         int*arr=new int[n];
         cout<<"Enter your number: "<<endl<<"Enter its sign: ";
         cin>>s;
         if(cin.fail())
         {
             cout<<"Error! Wrong sign...";
             exit(2);
         }
         if(s=='+')
            g=true;
         else
         {
             if(s=='-')
             {
                 g=false;
             }
             else
             {
                 cout<<"Error! Wrong sign..."<<endl;
                 exit(3);
             }
         }

         for (int i=0; i<n;i++)
         {
            cout<<"Enter "<<i+1<<" digit: ";
            cin>>m;
            if(cin.fail() || m>9 || m<0)
         {
             cout<<"Error! Wrong digit";
             exit(1);
         }
            arr[i]=m;

         }
         ClntN d(g, n, arr);
         cout<<endl<<"Number "<<t<<"="<<d<<endl<<endl;
         delete[]  arr;
         arr=NULL;
         return d;



}




int main(void)
{
try{
ClntN a,b,c,m,n;
char x='b', y='a';
a=FuncVvoda(y);
b=FuncVvoda(x);
m=a;
n=b;
c=a+b;
cout<<"c=a+b="<<c<<endl;
c=m-n;
cout<<"c=a-b="<<c<<endl;
cout<<endl;
Autotest();
return 0;}
catch(int e)
{
    return -1;
}
}
