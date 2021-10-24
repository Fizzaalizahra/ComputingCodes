#include <iostream>
using namespace std;

int main()
{
   cout << "Enter the marks from 1-100 to see the grade, 0 input is not accepted\n";
   double m;//initializing m with double
   cin >> m;//taking m as input from user 
   if (m>70)
   {
  cout << "You have a A Grade";
   }
   else if (m >= 60 && m < 70)//declared A from 60 to 70
   {
  cout << "You have a B Grade";//declared B grade from 50 to 60
   }
   else if (m >= 50 && m < 60)
   {
  cout << "You have a C Grade";// declared C from 40 to 50
   }
   else if (m>40 && m<50)
   {
  cout << "You have a D Grade";//declared D if marks are 40
   }
   else if (m == 40 )
   {
  cout << "You have a JUST PASSED Grade";//user got pasing marks if greater than 40 
   }
   else if(m<40 && m!=0)
   {
	   cout << "You have a Fail Grade";
   }
   else 
   {
  cout << "Wrong input";
   }
}