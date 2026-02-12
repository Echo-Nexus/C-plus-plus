#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "Enter a number : ";
  cin >> num;
  char ch = 'A';
  for( int i = 0; i < num; i++)
  {
    
    for ( int j = 0; j < i; j++)
    {
      cout << " ";
    }

    for ( int k = (num - i); k > 0; k--)
    {
      
      cout << ch;
    }
    ch += 1;
    cout << endl;
  }
  
  return 0;
}


// AAAAA
//  BBBB
//   CCC
//    DD
//     E