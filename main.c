#include<stdio.h>
#include<stdlib.h>
#include "bank.h"

void printmenue()
{
    printf("welecome to MyBank!:\n");
    printf("***********Menue**********\n");
    printf("1)Create an Account.\n");
    printf("2)View all Accounts.\n");
    printf("3)Deposit Money.\n");
    printf("4)Withdrw Money.\n");
    printf("5)Delete Account.\n");
    printf("6)Exit.\n");
    printf("\n");
    printf("enter your choice:\n");
}

int main()
{
    loadAccounts();
    int choice;
    while(1)
    {
    printmenue();
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            CreateAccount();
            break;
        }
        case 2:
        {
            ViewAllAccounts();
            break;
        }
        case 3:
        {
            printf("enter the account number \n");
            int id;
            scanf("%d",&id);
            printf("enter the amount to be deposited:\n");
            float amount;
            scanf("%f",&amount);
            DepositMoney(id,amount);
            break;
        }
        case 4:
        {
            printf("enter the account number \n");
            int id;
            scanf("%d",&id);
            printf("enter the amount to be withdrawn:\n");
            float amount;
            scanf("%f",&amount);
            WithdrawMoney(id,amount);
            break;
        }
        case 5:
        {
            printf("enter the account number \n");
            int id;
            scanf("%d",&id);
            DeleteAccount(id);
            break;
        }
        case 6:
        {
            printf("Exiting:\n");
            return 0;
        }
        default:
        {
            printf("Invalid character entered:\n");
        }
     }
    }
    return 0;
}