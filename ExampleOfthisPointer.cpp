#include<bits/stdc++.h>
using namespace std;

class Box {
   
    public:
        Box( double l = 4.0, double b = 3.0, double h = 6.0 )
        {
            cout<<"The Constructor is called :- "<<endl;
            length = l;
            breath = b;
            height = h;
        }
        
        double volume(void)
        {
            return length*breath*height;
        }
        
        int compare(Box box)
        {
            return this->volume() > box.volume();
        }
        
        private:
            double length;
            double breath;
            double height;
            
};

int main()
{
    Box box1(3.4,5.6,7.8);
    Box box2(12.4,56.8,4.0);
    cout<<"The Volume of the box1 is :- "<<box1.volume()<<endl;
    cout<<"The Volume of the box2 is :- "<<box2.volume()<<endl;
    if(box1.compare(box2))
    {
        cout<<"The Volume of the box1 is bigger than box2 "<<endl;
    }
    else
    {
        cout<<"The Volume of the box2 is bigger than box2 "<<endl;
    }
}
