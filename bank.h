#ifndef BANK_H
#define BANK_H
typedef struct
{
    int id;
    char name[50];
    float balance;
}Account;
extern Account *accounts;
extern int accountCount;
void loadAccounts();
void SaveAccounts();
void CreateAccount();
void ViewAllAccounts();
void DepositMoney(int id,float amount);
void WithdrawMoney(int id,float amount);
void DeleteAccount(int id);
int FindAccountById(int id);
int isuniqueId(int id);
#endif
