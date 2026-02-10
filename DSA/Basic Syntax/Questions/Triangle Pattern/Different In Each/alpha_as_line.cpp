#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number : ";
  cin >> num;

  for ( int i = 0; i < num; i++)
  {
    char ch = 'A';
    ch += i;
    for ( int j = 0; j <= i; j++)
    {
      cout << ch << " ";
    }
    cout << endl;
  }
  return 0;
}

// A 
// B B
// C C C
// D D D D
// E E E E E