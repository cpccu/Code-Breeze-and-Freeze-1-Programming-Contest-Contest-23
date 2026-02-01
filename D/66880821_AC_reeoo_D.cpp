#include <iostream>
using namespace std;

char where(int x, int y, char a, char b) {
    if (x <= y)
        return a;
    else
        return b;
}

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }

    int ans = 0;
    char current = 'a';
    char gone;

    n -= 1;

    while (n--) {
        if (current == 'a') {
            gone = where(a, b, 'b', 'c');
            ans += (gone == 'b' ? a : b);
        } else if (current == 'b') {
            gone = where(a, c, 'a', 'c');
            ans += (gone == 'a' ? a : c);
        } else {
            gone = where(b, c, 'a', 'b');
            ans += (gone == 'a' ? b : c);
        }
        current = gone;
    }

    cout << ans << endl;
    return 0;
}