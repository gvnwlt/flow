#include <iostream> 

using namespace std; 

int main()
{
  int i; 
  int j; 
  bool keepgoing = true; 
  int answer; 
  while (keepgoing)
  {
    cout << "Enter a number: " << endl; 
    cin >> i; 
    cout << "You entered " << i << ". Enter another number: " << endl; 
    cin >> j; 
    if (i<j) 
    {
      cout << "The first number, " << i << ", is less than " << j << endl; 
    }
    else if (i==j)
    {
      cout << "The first number, " << i << ", is equal to " << j << endl; 
    }
    else
    {
      cout << "The first number, " << i << ", is greater than " << j << endl; 
    }

    cout << "Would you like to keep going (enter '0' for no)? " << endl;
    cin >> answer;
    if (answer == 0)
    {
      keepgoing = false;  
    } 
  }
  return 0;
}
