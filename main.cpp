#include "Bank.h"

int main(){
    int pin=1234;
    int amount;
    int choice;
    int count=4;
while(count!=0){
    cout<<"\nEnter the pin number:";
    cin>>pin;
    count--;
    cout<<"\nThis is a wrong pin number.You have "<<count<<" attempt left";
}
if(count==0){
    cout<<"\nYour account is locked for 24 hours.If urgent you can contact the bank office";
}   
if(pin==1234){
    Bank Account1;
    cout<<"\n------------------BANK APPLICATION--------------------";
    cout<<"\n------------------------------------------------------";
    do{
        cout<<"\n1.DEPOSIT";
        cout<<"\n2.WITHDRAWAL";
        cout<<"\n3.CHECK BALANCE";
        cout<<"\n4.Exit"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:{
            cout<<"Enter the amount you want to deposit:"<<endl;
            cin>>amount;
            Account1.deposit(amount);
            break;
        }  
        case 2:{
            cout<<"Enter the amount you want to withdraw:"<<endl;
            cin>>amount;
            Account1.withdrawal(amount);
            break;
        }
        case 3:{
            cout<<"Your balance is:"<<Account1.balance();
            break;
        }
        case 4:{
            cout<<"Thank you for using this application.Goodbye!";
            break;
        }
        default:{
            cout<<"Please choose a valid option";
            break;
        }
        }
    }while (choice!=4);
}else{
    cout<<"Incorrect pin.Please try again."<<endl;
}
    return 0;
}