#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number : ";
  cin >> num;

  for ( int i = 0; i < num; i++)
  {
    for ( int j = 0; j < ( i + 1); j++)
    {
      cout << "*";
    }

    for ( int j = ( num - i - 1); j > 0; j--)
    {
      cout << " ";
    }

    for ( int j = ( num - i - 1); j > 0; j--)
    {
      cout << " ";
    }
    
    for ( int j = ( num + i - 3); j > 0; j--)
    {
      cout << "*";
    }
    cout << endl;
  }

  for ( int i = 0; i < num; i++)
   {
    for ( int j = ( num - i); j > 0; j--)
    {
      cout << "*";
    }

    for ( int j = 0; j < i; j++)
    {
      cout << " ";
    }

    for ( int j = 0; j < i; j++)
    {
      cout << " ";
    }

    for ( int j = ( num - i); j > 0; j--)
    {
      cout << "*";
    
    }
    cout << endl;
   }
  return 0;
}