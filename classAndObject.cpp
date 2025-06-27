#include<bits/stdc++.h>
using namespace std;

class Car 
{   
    // Attributes ( Data Members )
    public :
        string brand;
        string color;
    
    
    // Attomatically run when object is  created
    Car(string b, string c )
    {
        brand = b;
        color = c;
    }

    // Behaviour ( Member Function )
    void drive()
    {
        cout<<" The "<<color<<" "<<brand<<" "<<"is diriving "<<endl;
    }
};

int main()
{
    //Intialization ( Create a object  )
    Car car1("Toyata","Black");
    Car car2("Ferrari","Red");
    
   // Accesing a attribute . 
   cout<<"Car 1 brand "<<car1.brand<<" , Car 1 color "<<car1.color<<endl;
   cout<<"Car 2 brand "<<car2.brand<<" , Car 1 color "<<car2.color<<endl;

  // Method call
  car1.drive();
  car2.drive();

}