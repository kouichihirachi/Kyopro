#include <iostream>

using namespace std;
int main(void)
{
  int b, c;
  cin >> c >> b;
  int a = b + c;
  if (a >= 15 && b >= 8)
  {
    cout << 1 << endl;
  }
  else if (a >= 10 && b >= 3)
  {
    cout << 2 << endl;
  }
  else if (a >= 3)
  {
    cout << 3 << endl;
  }
  else
  {
    cout << 4 << endl;
  }
  return 0;
}