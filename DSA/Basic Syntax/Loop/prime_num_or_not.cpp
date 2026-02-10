#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number : ";
  cin >> num;
  int i = 2;
  bool isPrime = true;
  while ( i*i < (num)) // We can write i*i < num or i <= (num - 1)
  {
    if(num % i == 0)
    {
      isPrime = false;
      break;
    }
    i++;
  }

  if(isPrime)
  {
    cout << num << " is a prime number." << endl;
  }
  else
  {
    cout << num << " is not a prime number." << endl;
  }

  return 0;
}