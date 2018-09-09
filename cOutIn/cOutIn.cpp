#include <iostream>

using namespace std;

int x = 50;

int main()
{
  int x;
  cout << "輸入一個數字給 x: ";
  cin >> x;
  cout << "現在 x 為 " << x << "\n";
  cout << dec << x << "\n"
       << oct << x << "\n"
       << hex << x << "\n";
  cout << x << "\n" << ::x;

  return 0;
}
