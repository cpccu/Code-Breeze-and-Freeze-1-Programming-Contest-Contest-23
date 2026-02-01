#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  string an = "First";
  string k = "Second";

  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
      cout << an << endl;
    else if (a < b)
      cout << k << endl;
    else
      cout << ((c % 2 == 0 ? k : an)) << endl;
  }

  return 0;
}