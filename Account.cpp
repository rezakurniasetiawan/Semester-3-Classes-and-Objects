#include<iostream>
#include <string>
using namespace std;

class Account
{
 public:
  Account( int);
  void credit(int );
  void debit(int );
  int getAccountBalance();
 private:
  int accountBalance;
};
Account::Account( int balance)
{
 if(balance>=0)
  accountBalance=balance;
 else
 {
  accountBalance=0;
  cout<<"Saldo awal tidak valid"<<endl;
 }
}
void Account::credit( int balance)
{
 accountBalance = accountBalance + balance;
}
void Account::debit( int balance)
{
 if(accountBalance>=balance)
 {
  accountBalance = accountBalance - balance;
 }
 else
 {
  cout<<"Debit amount exceeded account balance."<<endl;
 }
}
int Account::getAccountBalance()
{
 return accountBalance;
}
int main()
{
 Account Account1(89);
 Account Account2(-76);
 cout << "Saldo awal akun 1 adalah : "<< Account1.getAccountBalance()<< "\nSaldo awal akun 2 adalah: "<< Account2.getAccountBalance() << endl;
 Account1.credit(200);
 Account2.credit(34);
 cout << "\nSaldo Akun 1 adalah: "<< Account1.getAccountBalance()<< "\nSaldo Akun 2 adalah: "<< Account2.getAccountBalance() << endl;
 Account1.debit(50);
 Account2.debit(34);
 cout << "\nSaldo Akun 1 adalah: "<< Account1.getAccountBalance()<< "\nSaldo Akun 2 adalah: "<< Account2.getAccountBalance() << endl;
}
