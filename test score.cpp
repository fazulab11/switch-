

#include <iostream>
using namespace std;

int main() {
    int testScore;
    int matricMarks;
    int interMarks;

    cout << "Enter entry test score (out of 100): ";
    cin >> testScore;

    cout << "Enter matric marks (out of 1100): ";
    cin >> matricMarks;

    cout << "Enter intermediate marks (out of 1100): ";
    cin >> interMarks;

    if (testScore >= 50) {
        if (matricMarks >= 660) {
            if (interMarks >= 660) {
                cout << "Admission granted" << endl;

                if (testScore >= 90) {
                    cout << "Scholarship: 50%" << endl;
                }
                else {
                    if (testScore >= 75) {
                        cout << "Scholarship: 25%" << endl;
                    }
                    else {
                        cout << "Scholarship: None" << endl;
                    }
                }

            }
            else {
                cout << "Rejected: intermediate marks are below 660" << endl;
            }
        }
        else {
            cout << "Rejected: matric marks are below 660" << endl;
        }
    }
    else {
        cout << "Rejected: entry test score is below 50" << endl;
    }

    return 0;
}
