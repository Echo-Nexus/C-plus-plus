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
    count += i;
    for ( int j = 0; j <= i; j++)
    {
      cout << count << " ";
    }
    cout << endl;
  }
  return 0;
}