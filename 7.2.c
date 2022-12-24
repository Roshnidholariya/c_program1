//This program is prepared by 22CE028 Roshni G Dholariya
#include <stdio.h>
#define size 20
int main()
{
    int A[size],B[size],asize,bsize,C[size],csize;
    int i=0,j=0,k=0;
    printf("Enter size of A :");
    scanf("%d",&asize);
    for(int i=0; i<asize; i++)
    {
        printf("Enter A[%d] : ",i++);
        scanf("%d",&A[i]);
    }
    printf("\nEnter size of B : ");
    scanf("%d",&bsize);
    printf("\n");
    for(int i=0; i<bsize; i++)
    {
        printf("Enter B[%d] : ",i++);
        scanf("%d",&B[i]);
    }
    csize=asize+bsize;
    while(i<asize && j<bsize && k<csize)
    {
        if(A[i]<B[j])
        {
            C[k]=A[i];
            i++;
            k++;
        }
        else
        {
            C[k]=B[j];
            j++;
            k++;
        }
    }
    while(i<asize)
    {
        C[k]=A[i];
        i++;
        k++;
    }
    while(j<bsize)
    {
        C[k]=B[j];
        j++;
        k++;
    }
    printf("\nmerge and sort of array A and B \n\n");
    for(int i=0; i<csize; i++)
    {
        printf(" %d ",C[i]);
    }
    printf("\n\nThis program is prepared by 22CE028 Roshni G Dholariya");
}
