#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
            scanf("%d",&arr[i]);
        if(i%2==0)
        {
            arr[i]=2*arr[i];
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}