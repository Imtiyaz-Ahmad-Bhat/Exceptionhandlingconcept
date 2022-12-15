#include<iostream>
#include<dos>
using namespace std;
class Modolo
{
 public:
     int x,y,z;
   void input(int a, int b)
   {
    x=a;
    y=b;
   }
   void output(){
    z=x%y;
   cout<<"==The Modolo operation result of x and y is=="<<(z);

   }
};
int main()
{
 int n1,n2;
 cout<<"Enter the two numbers";
 cin>>n1>>n2;
 Modolo d1;
 try{
 d1.input(n1,n2);
 if(d1.x%d1.y!=0)
   throw(d1.z);
 else
    d1.output();
 }
 catch(int v)
 {
  cerr<<"division Modolo operation should be zero not anything else",<<v;
 }
 catch(char m)
 {
    cerr<<"ERROR OCCURS SERIOUSLY"
 }
 return 0;
}

