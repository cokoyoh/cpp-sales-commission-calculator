#include <iostream>
#include <iomanip>
#include "SalesPerson.h"

using namespace std;

int main() {
    cout << "Sales Commission Calculator" << endl;
    cout << setprecision(2) << fixed;

    double weeklySales{0.00};

    cout << "\nEnter sales in dollars (or -1 to end): ";
    cin >> weeklySales;

    while (weeklySales != -1) {
        SalesPerson salesPerson{weeklySales};

        cout << "Salary is: $" << salesPerson.commission();

        cout << "\n\nEnter sales in dollars (or -1 to end): ";
        cin >> weeklySales;
    }

    return 0;
}
