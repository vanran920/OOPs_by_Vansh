#include<bits/stdc++.h>
using namespace std;

class Example {
  public:
    int value;
    
    Example& setValue(int v )
    {
        value = v;
        return *this;
    }
    
    Example& increment(int x )
    {
        value+= x;
        return *this;
    }
    
    void display(void)
    {
        cout<<"Value is :- "<<value<<endl;
    }
    
};

int main()
{
    Example ex;
    ex.setValue(10).increment(5).display();
}
