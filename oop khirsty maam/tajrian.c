#include<stdio.h>
int main()
{
    int row, col,n=40,count=0;


    for(row=1; row<=n; row++)
    {

        for(col=1; col<=n; col++)
        {


            if(row==1 ||row==n || col==1||col==n)
                {
                       printf("*");
                }

               else
            {

              printf(" ");
            }

        }
printf("\n");


    }
    return 0;
}
