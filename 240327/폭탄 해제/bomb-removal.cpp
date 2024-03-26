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
    string S_code;
    char S_color;
    int S_second;
    cin >> S_code >> S_color >> S_second;
    Bom bom = Bom(S_code, S_color, S_second);
    cout << "code : " << bom.code << endl;
    cout << "color : " << bom.color << endl;
    cout << "second : " << bom.second << endl;


    return 0;
}