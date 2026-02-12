#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number : ";
  cin >> num;
   
  // Top Part
  for ( int i = 0; i < num; i++)
  {
    for ( int j = 0; j < ( num - i - 1); j++)
    {
      cout << " ";
    }
    cout << "*";
    if(i != 0)
    {  
       for ( int j = 0; j < ( 2 * i - 1); j++)
       {
         cout << " ";
       }
       cout << "*";
    }
    cout << endl;
  }

  // Bottom
  for ( int i = 0; i < (num  - 1); i++)
  {
    for ( int j = 0; j < (i + 1); j++)
    {
      cout << " ";
    }
    cout << "*";
    
    if( i != (num - 2))
    {
      for ( int j = 0; j < (2 * ( num - i) - 5); j++)
      {
        cout << " ";
        
      }
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}