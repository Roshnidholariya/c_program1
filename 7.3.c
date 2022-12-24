//This program is prepared by 22CE028 Dholariya Roshni
#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,n;

    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("Enter a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("%d\t",a[i][j]);
            //scanf("%d %d",&i,&j);
        }
        printf("\n");
    }
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("Enter b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("%d\t",b[i][j]);
            //scanf("%d %d",&i,&j);
        }
        printf("\n");
    }
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            c[i][j]=0;
            for(k=0; k<=2; k++)
            {

                c[i][j] += (a[i][k] * b[k][j]);
            }

        }
    }
    printf("a*b=\n");
    for(i=0; i<=2; i++)
    {


        for(j=0; j<=2; j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    printf("\n This program is prepared by 22CE028 Roshni G Dholariya");
}
