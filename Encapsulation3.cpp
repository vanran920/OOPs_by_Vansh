#include<bits/stdc++.h>
using namespace std;

class student {
    private:
    string name;
    int age ;

   public:
   void setName(string studentName)
   {
       if(!studentName.empty())
       {
          name = studentName;
       }
   }

   string getName()
   {
     return name;
   }

   void setAge(int Studentage)
   {
      if( Studentage > 0 )
      {
        age = Studentage;
      }
   }

   int getAge()
   {
      return age;
   }

};

int main()
{
    student st;
    st.setName("Vansh");
    st.setAge(22);

    cout<<"The name of the student is "<<st.getName()<<" And it's age is "<<st.getAge()<<endl;
}