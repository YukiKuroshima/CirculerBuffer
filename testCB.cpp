// test file for CB
// hopefully it will work as intended.
#include<iostream>
using namespace std;

#include "CirculerBuffer.h"

int main()
{
  cout << "Creating CircullerBuffer with size 4" << endl;

  CircullerBuffer<int> cb(4);
  for(int i = 0; i < 10; i++)
  {
    cb.addElement(i);
    cb.display();
    if(i % 3)
      cb.getArrayInRecentOrder();
  }

  
  cout << "\nCreating CircullerBuffer with size 10" << endl;
  CircullerBuffer<double> cb2(10);
  for(int i = 0; i < 15; i++)
  {
    cb2.addElement(i / 3.333);
    cb2.display();
    if(i % 3)
      cb2.getArrayInRecentOrder();
  }
  cout << endl;
}
