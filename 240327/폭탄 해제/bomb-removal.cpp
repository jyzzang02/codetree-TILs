#include <iostream>
#include <string>

using namespace std;

class Bom {
public:
    string code;
    char color;
    int second;

    Bom(string code, char color, int second) {
        this->code = code;
        this->color = color;
        this->second = second;
    }
  
};

int main() {
    string code;
    char color;
    int second;
    cin >> code >> color >> second;
    Bom bom = Bom(code, color, second);
    cout << "code : " << bom.code << endl;
    cout << "color : " << bom.color << endl;
    cout << "second : " << bom.second << endl;


    return 0;
}