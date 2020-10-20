/** https://www.hackerrank.com/challenges/arrays-ds/problem **/

#include <iostream>
using namespace std;
int main()
{
  int size,i;
  cin>>size;
  int a[size];
  for(i=0;i<size;i++)
  {
   cin>>a[i];
  } 
  for(i=size-1;i>=0;i--)
  {
   cout<<a[i]<<" ";
  }
}
