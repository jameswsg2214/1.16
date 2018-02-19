// Example program
#include <iostream>
#include <string>
using namespace std;
class sample
{
    public:
    int a;
    int calc()
{
if(a%4==0)
cout<<a<<" is leap year";
else 
cout<<a<<" is not leap year";
}
};
int main()
{
  sample s;
  
  cout << "Enter the year ";
  cin>>s.a;
  s.calc();
}
