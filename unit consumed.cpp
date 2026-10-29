
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int units, surchargePercent;
    double ratePerUnit, energyCharges, surcharge, totalBill;

    cout << "Enter units consumed: ";
    cin >> units;

    if (units > 0) {

        if (units <= 100) {
            ratePerUnit = 10;
        }
        else {
            if (units <= 300) {
                ratePerUnit = 15;
            }
            else {
                ratePerUnit = 20;
            }
        }

        energyCharges = units * ratePerUnit;

        if (energyCharges > 5000) {
            surchargePercent = 10;
        }
        else {
            if (energyCharges > 3000) {
                surchargePercent = 5;
            }
            else {
                surchargePercent = 0;
            }
        }

        surcharge = energyCharges * surchargePercent / 100;
        totalBill = energyCharges + surcharge;

        cout << fixed << setprecision(2);

        cout << "Units: " << units << endl;
        cout << "Rate per unit: Rs. " << ratePerUnit << endl;
        cout << "Energy charges: Rs. " << energyCharges << endl;
        cout << "Surcharge (" << surchargePercent << "%): Rs. "
            << surcharge << endl;
        cout << "Total bill: Rs. " << totalBill << endl;

    }
    else {
        cout << "Invalid units" << endl;
    }

    return 0;
}
