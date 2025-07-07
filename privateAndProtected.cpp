#include<bits/stdc++.h>
using namespace std;

class heiWei {
    public:
    double length = 10.0;
    double getlenght(void);
    void setWidth(double wid);
    double getWidth(void);

    private:
    double width;
};

double heiWei :: getlenght()
{
    return length;
}

void heiWei :: setWidth(double wid)
{
    width = wid;
}

double heiWei :: getWidth()
{
    return width;
}

int main()
{
    heiWei change;
    change.length = 23.67; // Public
    double valLen = change.getlenght();
    cout<<"The New Length will be :- "<<valLen<<endl;

    change.setWidth(89.45); // Private
    double valWid = change.getWidth();
    cout<<"The New Width will be :- "<<valWid<<endl;
}

