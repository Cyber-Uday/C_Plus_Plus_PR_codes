//Experiment no 5th 
#include <iostream>
using namespace std;

long calculate_electricity_bill(const string & name, int units_consumed) {
    double base_charge = 50.00;  // Minimum charge

    if (units_consumed <= 100) {
        float total_charge = units_consumed * 0.60;
    } else if (units_consumed <= 200) {
        float total_charge = 100 * 0.60 + (units_consumed - 100) * 0.80;
    } else if (units_consumed <= 300) {
        float total_charge = 100 * 0.60 + 100 * 0.80 + (units_consumed - 200) * 0.90;
    } else {
        float total_charge = 100 * 0.60 + 100 * 0.80 + 100 * 0.90 + (units_consumed - 300) * 1.10;
    }

    float total_charge = max(total_charge, base_charge);

    double surcharge = 0.15 * total_charge if total_charge > 300.00 else 0.00;
    total_charge += surcharge;

    return total_charge;
}

int main() {
    string user_names[] = {"Alice", "Bob", "Charlie"};
    int units_consumed[] = {150, 250, 350};

    for (int i = 0; i < 3; i++) {
        double total_bill = calculate_electricity_bill(user_names[i], units_consumed[i]);
        cout << user_names[i] << ": Total bill = Rs. " << total_bill << endl;
    }

    return 0;
}
