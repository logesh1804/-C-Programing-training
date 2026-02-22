#include<stdio.h>
#include<string.h>

struct BankAccount{
int accNumber;
char name[50];
float balance;
};

void deposit(struct BankAccount *acc,float amount){
if(amount>0)
acc->balance=acc->balance+amount;
}

void withdraw(struct BankAccount *acc,float amount){
if(amount>0 && amount<=acc->balance)
acc->balance=acc->balance-amount;
else
printf("Insufficient balance\n");
}

void display(struct BankAccount acc){
printf("Account Number: %d\n",acc.accNumber);
printf("Name: %s\n",acc.name);
printf("Balance: %.2f\n",acc.balance);
}

int main(){

struct BankAccount acc;

printf("Enter account number: ");
scanf("%d",&acc.accNumber);

printf("Enter name: ");
scanf("%s",acc.name);

printf("Enter initial balance: ");
scanf("%f",&acc.balance);

deposit(&acc,1000);
withdraw(&acc,500);

display(acc);

return 0;
}
