#include<bits/stdc++.h>
using namespace std;

class Box {
  protected:
  double width;  
};

class smallBox : Box {
    public:
    void setWidth(double wid);
    double getWidth(void);
};

void smallBox :: setWidth(double wid)
{
    width = wid;
}

double smallBox :: getWidth()
{
  return width;
}

int main()
{
    smallBox changeW;
    changeW.setWidth(23.567);
    cout<<"The Width will be :- "<<changeW.getWidth()<<endl;
}