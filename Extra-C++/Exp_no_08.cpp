//experiment no 8th
#include <iostream>
#include <string>

using namespace std;

class InvalidUserInputException : public exception {
public:
    InvalidUserInputException(const string& message) : message(message) {}

    const char* what() const noexcept {
        return message.c_str();
    }

private:
    string message;
};

bool validate_age(int age) {
    return age >= 18 && age <= 55;
}

bool validate_income(int income) {
    return income >= 50000 && income <= 100000;
}

bool validate_city(const string& city) {
    return city == "Nashik" || city == "Pune" || city == "Mumbai" || city == "Bangalore";
}

bool validate_vehicle(bool has_four_wheeler) {
    return has_four_wheeler;
}

int main() {
    int age, income;
    string city, vehicle_input;

    cout << "Enter your age: ";
    cin >> age;

    if (!validate_age(age)) {
        throw InvalidUserInputException("Age must be between 18 and 55.");
    }

    cout << "Enter your monthly income: ";
    cin >> income;

    if (!validate_income(income)) {
        throw InvalidUserInputException("Monthly income must be between Rs. 50000 and Rs. 100000.");
    }

    cout << "Enter your city: ";
    cin >> city;

    if (!validate_city(city)) {
        throw InvalidUserInputException("City must be Nashik, Pune, Mumbai, or Bangalore.");
    }

    cout << "Do you have a 4-wheeler? (yes/no): ";
    cin >> vehicle_input;

    if (vehicle_input != "yes") {
        throw InvalidUserInputException("You must have a 4-wheeler.");
    }

    cout << "All conditions met!" << endl;

    return 0;
}
