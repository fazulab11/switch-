
/* Name: Your Name
   Roll No: Your Roll Number
*/

#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Enter month number (1-12): ";
    cin >> month;

    // First switch: Season
    switch (month) {
    case 12:
    case 1:
    case 2:
        cout << "Season: Winter" << endl;
        break;

    case 3:
    case 4:
    case 5:
        cout << "Season: Spring" << endl;
        break;

    case 6:
    case 7:
    case 8:
        cout << "Season: Summer" << endl;
        break;

    case 9:
    case 10:
    case 11:
        cout << "Season: Autumn" << endl;
        break;

    default:
        cout << "Invalid month" << endl;
    }

    // Second switch: Number of days
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "Days: 31" << endl;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        cout << "Days: 30" << endl;
        break;

    case 2:
        cout << "Days: 28" << endl;
        break;

    default:
        cout << "Invalid month" << endl;
    }

    return 0;
}
