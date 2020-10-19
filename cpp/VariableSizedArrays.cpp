//Problem link : https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a , q ,k;
    cin>>a>>q;
    int** A = new int* [a];
    int* K;
    for(int i = 0 ; i< a ; i++)
    {
        cin>>k;
        K = new int [k];
        A[i] = K;
        for(int j = 0 ; j< k ; j++)
        {
            cin>>K[j];
        }
    }
    int srchad , srch;
    while(q != 0)
    {
        --q;
        cin>>srchad>>srch;

        int b = *(A[srchad]+srch);

        cout<<b<<"\n";

    }

    return 0;
}
