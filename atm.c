#include<stdio.h>

unsigned long amount =1000,deposit,withdraw;
int choice,pin,k;
char var,transaction='y';
void main()
{
    while(pin !=1496)
    {
        printf("Enter the pin number:");
        scanf("%d",&pin);
        if (pin !=1496)
        printf("please enter valid pin\n");

    }
    do
    {
        printf("*********WELCOME TO ATM SERVICE*********\n");
        printf("1. check balance\n");
        printf("2. withdraw cash\n");
        printf("3. deposit cash\n");
        printf("4. quit\n");
        printf("**************?**************?*\n\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
       case 1:
              printf("\n YOUR BALENCE IN Rs ; %lu", amount);
              break;
       case 2:
                printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
                scanf ("%lu", &withdraw);
              if (withdraw % 100 !=0)
              {
                  printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");

              }
              else if (withdraw >(amount - 500))
              {
                  printf("\n INSUFFICENT BALANCE");

              }
              else
              {
                  amount=amount-withdraw;
                  printf("\n\nPLEASE CORRECT CASH");
                  printf("\n YOUR CURRENT BALANCE IS %lu",amount);
              }
              break;

        case 3:
               printf("\n ENTER THE AMOUNT TO DEPOSIT");
               scanf("%lu",&deposit);
               amount = amount + deposit;
               printf("YOUR BALANCE IS %lu",amount);
               break;
        case 4:
                printf("\n THANK YOU FOR USING ATM");
                break;
        default:
                 printf("\n INVALID CHOICE");

               }
               printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSACTION?(y/n):\n");
               fflush(stdin);
               scanf("%c",&transaction);
               if (transaction=='n'||transaction=='N')
                k=1;

    }while(!k);
    printf("\n\n THANKS FOR USING OUR ATM SERVICE \n CREATED BY GOKUL,SUKUSHAM,JATINDER AND MOHIT");
}
