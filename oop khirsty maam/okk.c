#include<stdio.h>
#include<unistd.h>
void bkash()
{
       system("cls");
      int row, col,n=40,count=0;


    for(row=1; row<=n; row++)
    {

        for(col=1; col<=n; col++)
        {


            if(row==1 ||row==n || col==1||col==n)
                {
                       printf("*");
                }
                else if(row==2 && col==2)
                {
                       printf("1.Send Money.");
                       col=col+12;
                }

               else
            {

              printf(" ");
            }

        }
printf("\n");


    }
}
int main()
{
  for(int i=0;i<1;i++)
  {
         printf("\n\n\n      Bkash");

  }
  for(int i=0;i<5;i++)
  {
         printf(".");
         usleep(1000000);
  }
  system("cls");
  char pin[5],pin2[5];

 printf("\nEnter Your pin: ");
 scanf("%s",pin);
 level:
 printf("\nConfirm Your Pin: ");
 scanf("%s",pin2);
 int reusult =strcmp(pin,pin2);
 if(reusult==0)
 {
        printf("\nSuccessfull");
        usleep(1000000);
        bkash();
 }
 else{

       printf("\nTry again");
       goto level;
 }


  getch();
}

