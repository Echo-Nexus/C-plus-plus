#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number : ";
  cin >> num;

  for ( int i = 0; i < num; i++)
  {
    char ch = 'A' + i;
    for ( int j = (i + 1); j > 0; j-- )
    {
      cout << ch << " ";
      ch--;
    }
    cout << endl;
  }
  return 0;
}

// A 
// B A 
// C B A
// D C B A
// E D C B A