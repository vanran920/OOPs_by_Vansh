#include<bits/stdc++.h>
using namespace std;

class location {
  private:
    int latitude;
    int longitude;
    
  public:
    location (int lat = 0, int lon = 0)
    {
        this->latitude = lat;
        this->longitude = lon;
    }
    
    location& setLatitude(int l)
    {
        latitude = l;
        return *this;
    }
    
    location& setLongitude(int lo)
    {
        longitude = lo;
        return *this;
    }
    
    void display() const {
        cout<<"The latitude will be :- "<<latitude<<" The Longitude will be :- "<<longitude<<endl;
    }
};

int main()
{
    location degree;
    degree.setLatitude(34).setLongitude(67);
    degree.display();
}









