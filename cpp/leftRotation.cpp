//https://www.hackerrank.com/challenges/array-left-rotation/problem//

#include <iostream>
using namespace std;


int main() 
{
    int n,d,temp;
    cin>>n>>d;
    int *a =new int[n];
   for(int i=0; i<n;i++)
       cin>>a[(i+n-d)%n];
   
    for(int i=0; i<n;i++)
        cout<<a[i]<<" ";
     

}