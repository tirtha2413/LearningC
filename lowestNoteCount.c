#include <stdio.h>
void main()
{
    int arr[6]={100,50,10,5,2,1};
    int i,nAmount;
    printf("Enter the amount\n");
    scanf("%d",&nAmount);
    for(i=0;i<=6;i++)
    {
        if(nAmount%arr[i]==0)
        {
            printf("Available Combination is %d x%d\n",nAmount/arr[i],arr[i]);
            break;
        }
        else
        {
          printf("Available Combination is %d x%d\n",nAmount/arr[i],arr[i]);
          nAmount = nAmount - (nAmount/arr[i])*arr[i];
        }

    }

}
