#include <iostream>
#include <string>

using namespace std;


class Product {
public:
    string name;
    int code;
    Product(string name, int code) {
        this->name = name;
        this->code = code;
    }

};

int main() {
   
    Product pro1 = Product("codetree", 50);

    string name_s;
    int code_s;
    cin >> name_s >> code_s;

    Product pro2 = Product(name_s, code_s);
    

    cout << "product " << pro1.code << " is " << pro1.name << endl;
    cout << "product " << pro2.code << " is " << pro2.name;

    return 0;
}