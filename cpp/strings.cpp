//https://www.hackerrank.com/challenges/c-tutorial-strings/submissions/code/165533772

#include <iostream>
#include <string>
using namespace std;

int main() 
{
   string t,a,b;
   int n,m;
   getline(cin,a);
   getline(cin,b);
   n=a.size();
   m=b.size();
   printf("%d %d\n",n,m);
   cout<<a+b<<endl;
   t[0]=a[0];
   a[0]=b[0];
   b[0]=t[0];
   cout<<a<<" "<<b;



}