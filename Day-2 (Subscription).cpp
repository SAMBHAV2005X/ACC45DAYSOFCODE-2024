#include <iostream>
using namespace std;

int main() {
    int T;  // Number of test cases
    cin >> T;
    
    while (T--) {
        int N, X;  // N = number of friends, X = cost of one subscription
        cin >> N >> X;
        
        // Calculate the minimum number of subscriptions required
        int subscriptions_needed = (N + 5) / 6;  // Equivalent to ceil(N / 6)
        
        // Calculate the total cost
        int total_cost = subscriptions_needed * X;
        
        // Output the result
        cout << total_cost << endl;
    }
    
    return 0;
}
