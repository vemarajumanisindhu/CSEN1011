#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? counter;
   ?? n;
   ?? flag;

   raptor_prompt_variable_zzyz ="accept a positive integer greater then 2  number";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> n;
   counter =2;
   flag =false;
   while (!(n % counter==0))
   {
      counter =counter+1;
      if (counter<n)
      {
      }
      else
      {
         cout << "Number is prime" << endl;         flag =true;
      }
   }
   if (flag==true)
   {
   }
   else
   {
      cout << "the number is composite" << endl;   }

   return 0;
}
