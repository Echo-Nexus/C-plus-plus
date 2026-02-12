#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number : ";
  cin >> num;
  char ch = 'A';
  for ( int i = 0; i < num; i++)
  {
    for ( int j = (i + 1) ; j > 0; j--)
    {
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
  return 0;
}

// A 
// B C
// D E F
// G H I J
// K L M N O