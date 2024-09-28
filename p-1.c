#include <stdio.h>

int main()
{
    int N, num , i,rem;
    int sum=0;
    printf("enter number of inputs:");
    scanf("%d",&N);
    i=1;
    while(i<=N)
    {
        printf("enter the number:");
        scanf("%d",&num);
        
        int rem= num%2;
        
        if(rem==0)
        {
            sum= sum+num;
        }
        i++;
    }
    
    printf("the sum is : %d",sum);
    return 0;
}