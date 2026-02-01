#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  string vn = "First";
  string vo = "Second";

  while (t--) {
    int n;
    cin >> n;

    cout << ((n % 3 == 0) ? vo : vn) << endl;
  }

  return 0;
}