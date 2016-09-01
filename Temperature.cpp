/****************************
Simple Temperature Program System
Developed by Mista Pidaus
Copyright 2016
****************************/
#include <iostream>
#include <string>

using namespace std;
int main()
{
   // declate variable (as in my case double because there's might be point in input)
   double t_d1, total_d, t_d2, t_d4, t_d3, t_d5, avrg, t_d7, t_d6;
  
  // Tell the user to input temperature
   cout << "Temperature Day 1" << endl;
   cin >> t_d1;
   cout << "Temperature Day 2" << endl;
   cin >> t_d2;
   cout << "Temperature Day 3" << endl;
   cin >> t_d3;
   cout << "Temperature Day 4" << endl;
   cin >> t_d4;
   cout << "Temperature Day 5" << endl;
   cin >> t_d5;
   cout << "Temperature Day 6" << endl;
   cin >> t_d6;
   cout << "Temperature Day 7" << endl;
   cin >> t_d7;
   // Calculate Process
   total_d =t_d1+t_d2+t_d3+t_d4+t_d5+t_d6+t_d7;
   avrg =total_d/7;
   // Lets display output
   if (avrg>=60)
   {
      cout << "HOT" << endl;   }
   else
   {
      if (avrg>=20)
      {
         cout << "MEDIUM" << endl;      }
      else
      {
         cout << "AVERAGE" << endl;      }
   }

   return 0;
}
