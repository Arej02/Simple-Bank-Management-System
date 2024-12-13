#include<iostream>
using namespace std;

class Bank{
    int amount;
    public:
    Bank();
    void deposit(int amount);
    void withdrawal(int amount);
    int balance();
};