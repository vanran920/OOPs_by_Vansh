#include<bits/stdc++.h>
using namespace std;

class Bank{
    public:
    string name;
    int money;

    Bank(string n, int m )
    {
        name = n;
        money = m;
    }

    void withdraw( int a)
    {
       money-= a;
    }

};



int main()
{
    // Adding money to a account 
    Bank holder("Amit", 100 );
    cout<<" Before Withdraw "<<endl;
    cout<<"The "<<holder.name<<" has "<<holder.money<<" in his account "<<endl;

    // Withdraw 10 rupees;
    cout<<" After Withdraw "<<endl;
    holder.withdraw(10);
    cout<<"The "<<holder.name<<" has "<<holder.money<<" in his account "<<endl;

}