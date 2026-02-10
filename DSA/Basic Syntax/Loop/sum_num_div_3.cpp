#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number : ";
  cin >> num;
  int sum = 0;
  for(int i = 1; i <= num; i++)
  {
    if( i % 3 == 0)
    {
      sum += i;
    }
  }
  cout << sum << " is the sum of " << num << " numbers." << endl;
  return 0;
}