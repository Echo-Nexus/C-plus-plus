#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number : ";
  cin >> num;
  for ( int i = 0; i < num; i++)
  {
    int count = 1;
    for ( int j = 0; j <= i; j++)
    {
      cout << count << " ";
      count++;
    }
    cout << endl;
  }
  return 0;
}

// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5