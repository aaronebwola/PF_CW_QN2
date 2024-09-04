#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printDivisors(int n) {
    vector<int> divisors;

    // Find all divisors
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }

    // Sort divisors in decreasing order
    sort(divisors.begin(), divisors.end(), greater<int>());

    // Print divisors
    for (int divisor : divisors) {
        cout << divisor << endl;
    }
}

int main() {
    int num;
    char choice;

    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you." << endl;
    cout << "The program will repeatedly prompt you to enter a positive integer." << endl;
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order." << endl;

    do {
        cout << "Please enter a positive integer: ";
        cin >> num;

        // Check for non-positive integer
        while (num <= 0) {
            cout << num << " is not a positive integer." << endl;
            cout << "Please enter a positive integer: ";
            cin >> num;
        }

        // Print divisors
        printDivisors(num);

        // Ask the user if they want to enter another integer
        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> choice;

        // Ensure the user responds with 'Y', 'y', 'N', or 'n'
        while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> choice;
        }

    } while (choice == 'Y' || choice == 'y');

    cout << "Program terminated. Thank you for using the program!" << endl;

    return 0;
}
