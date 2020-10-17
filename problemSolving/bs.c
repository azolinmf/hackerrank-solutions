#include<stdio.h>
#include<stdlib.h>
void Exchange(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void SelectionSort(int *a, int n)
{
    int i, j, min;
    for (i=0; i<n; i++)
    {
        min = i;
        for(j=i+1; j<n; j++ )
        {
            if(*(a+j)<*(a+min))
                min = j;
        }
        Exchange((a+min), (a+i));
    }
}
void BubbleSort(int *a, int n)
{
    int i, j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n-i-1; j++)
        {
            if(*(a+j)>*(a+j+1))
                Exchange((a+j), (a+j+1));
        }
    }
}
void InsertionSort(int *a, int n)
{
    int i, j, k;
    for(i=1; i<n; i++)
    {
        k = *(a+i);
        j = i-1;
        while(*(a+j)>k && j>=0)
        {
            *(a+j+1) = *(a+j);
            j = j-1;
        }
        *(a+j+1) = k;
    }

}
void main()
{
    int *a, n, ch, i;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    printf("Enter the elements of the array :\n");
    for(i=0; i<n; i++)
        scanf("%d", a+i);
    printf("Enter :\n1 for Selection Sort\n2 for Bubble Sort\n3 for Insertion Sort\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 :SelectionSort(a, n);
                printf("The sorted array is :\n");
                for(i=0; i<n; i++)
                    printf("%d\n", *(a+i));
                break;
        case 2 :BubbleSort(a, n);
                printf("The sorted array is :\n");
                for(i=0; i<n; i++)
                    printf("%d\n", *(a+i));
                break;
        case 3 :InsertionSort(a, n);
                printf("The sorted array is :\n");
                for(i=0; i<n; i++)
                    printf("%d\n", *(a+i));
                break;
        default :printf("Invalid Choice");
    }
}
