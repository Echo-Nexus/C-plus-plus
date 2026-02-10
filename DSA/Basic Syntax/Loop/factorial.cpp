#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number : ";
  cin >> num;

  int factorial = 1;

  if(num == 0 || num == 1)
  {
    factorial = 1;
  }
  else
  {
    for (int i = 1; i <= num; i++) 
    {
      factorial *= i;
    }

    // Using while loop
    // while(num > 1 )
    // {
    //   factorial *= num;
    //   num--;
    // }
  }
  cout << "This is the factorial : " << factorial << endl;
  return 0;
}