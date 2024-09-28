#include <iostream>
using namespace std;

int main() {
    int X;
    // Read the input value
    cin >> X;

    // Check if the team qualifies
    if (X >= 12) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
