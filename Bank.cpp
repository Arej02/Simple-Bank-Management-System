#include "Bank.h"

Bank::Bank(){
    this->amount=0;
}
void Bank::deposit(int amount){
    if(amount<0){
        cout<<"Invalid amount";
    }else{
        this->amount+=amount;
        cout<<"The transaction is succesful!Your amount is:"<<this->amount;
    }
}
void Bank::withdrawal(int amount){
    if(amount<0){
        cout<<"Invalid amount.Please enter a valid amount.";
    }
    if(this->amount<amount){
        cout<<"You donot have enough balance.Your balance is:"<<amount;
    }else{
        this->amount-=amount;
    }
}
int Bank::balance(){
    return this->amount;
}