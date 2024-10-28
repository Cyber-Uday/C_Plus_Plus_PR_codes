#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Person {
    string name;
    string DOB;
    string telephone_number;
};

int main() {
    vector<Person> people = {
        {"Uday", "01/01/1990", "1234567890"},
        {"Anisha", "02/02/1991", "9876543210"},
        {"Khushi", "03/03/1992", "5555555555"}
    };

    // Sort by name
    sort(people.begin(), people.end(), [](const Person& a, const Person& b) { return a.name < b.name; });

    // Search for a person by name
    string search_name = "Anisha";
    for (const Person& person : people) {
        if (person.name == search_name) {
            cout << "Found: " << person.name << ", " << person.DOB << ", " << person.telephone_number << endl;
            break;
        }
    }

    // Sort by DOB
    sort(people.begin(), people.end(), [](const Person& a, const Person& b) { return a.DOB < b.DOB; });

    // Sort by telephone number
    sort(people.begin(), people.end(), [](const Person& a, const Person& b) { return a.telephone_number < b.telephone_number; });

    return 0;
}
