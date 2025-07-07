#include<bits/stdc++.h>
using namespace std;

class Box {
    public:
    int length;
    int breath;
    int height;
  
   double volumeBox(void);
   void   setLength(int len);
   void   setBreath(int bre);
   void   setHeight(int hei);
};

double Box :: volumeBox(void) // Scope defination 
{
    return length*breath*height;
}

void Box :: setLength(int len)
{
   length = len;
}

void Box :: setBreath(int bre)
{
   breath = bre;
}
void Box :: setHeight(int hei)
{
   height = hei;
}

int main()
{
    Box area;
    area.setLength(24);
    area.setBreath(36);
    area.setHeight(49);

    double vol = area.volumeBox();
    cout<<"The Volume of the Box is :- "<<vol<<endl;
}



