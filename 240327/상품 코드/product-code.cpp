#include <iostream>
#include <string>

using namespace std;


class Product {
public:
    string name;
    int code;
    Product(string name="", int code=0) {
        this->name = name;
        this->code = code;
    }

};

int main() {
    string name_s;
    int code_s;

    Product pro1 = Product(name_s="", code_s = 0);
    pro1.name = "codetree";
    pro1.code = 50;

    cin >> name_s >> code_s;
    Product pro2 = Product(name_s, code_s);
    

    cout << "product " << pro1.code << " is " << pro1.name << endl;
    cout << "product " << pro2.code << " is " << pro2.name;

    return 0;
}