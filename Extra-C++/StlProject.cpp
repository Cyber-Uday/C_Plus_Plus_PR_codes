#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Person {
    string name;
    string DOB;
    string telephone_number;

    bool operator<(const Person& other) const {
        return name < other.name; // Assuming sorting by name
    }
};

int main() {
    vector<Person> people = {
        // {"Soham", "10/10/1990", "1234567890"},
        {"Uday", "01/01/1990", "1234567890"},
        {"Anu", "02/02/1991", "9876543210"},
        {"Khushi", "03/03/1992", "5555555555"}
        
    };

    sort(people.begin(), people.end());

    string search_name = "Uday";
    for (const Person& person : people) {
        if (person.name == search_name) {
            cout << "Found: " << person.name << ", " << person.DOB << ", " << person.telephone_number << endl;
            break;
        }
    }

    return 0;
}