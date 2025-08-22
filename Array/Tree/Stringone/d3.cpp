#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string result = "";
        for (int i = 0; i < address.size(); i++) {
            if (address[i] == '.') {
                result += "[.]";
            } else {
                result += address[i];
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    cout << s.defangIPaddr("192.168.0.1") << endl; // Output: 192[.]168[.]0[.]1
    return 0;
}
