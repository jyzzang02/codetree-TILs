#include <iostream>
using namespace std;

class Person {
public:
    string name, address, city;

    Person(string name, string address, string city) {
        this->name = name;
        this->address = address;
        this->city = city;
    }
};

int main() {
    int n;
    cin >> n;

    Person slowest("", "", "");
    for (int i = 0; i < n; i++) {
        string name, address, city;
        cin >> name >> address >> city;
        Person current(name, address, city);
        if (current.name > slowest.name) {
            slowest = current;
        }
    }

    cout << "name " << slowest.name << endl;
    cout << "addr " << slowest.address << endl;
    cout << "city " << slowest.city << endl;

    return 0;
}