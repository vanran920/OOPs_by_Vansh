#include<bits/stdc++.h>
using namespace std;

class Box{
    public:
        static int objectCount;
        
    Box(double l = 1.0, double b = 2.3, double c = 3.6)
    {
        cout<<"Called Value "<<endl;
        length = l;
        breath = b;
        height = c;
    
        objectCount++;
    }    
        double volume(void)
        {
            return length*breath*height;
        }
    private:
        double length;
        double breath;
        double height;
};

int Box :: objectCount = 0;

int main()
{
    
    Box box1(2.2, 5.6, 7.8);
    cout<<box1.volume()<<endl;
    Box box2(3.6,5.6,9.0);
    cout<<box2.volume()<<endl;
    cout<<"The Total object will be :- "<<Box::objectCount<<endl;
}