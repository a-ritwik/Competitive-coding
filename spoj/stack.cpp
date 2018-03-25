#include <iostream>
#include <stack>
using namespace std;
int main() {
    int j=1;
    while(1) {
        stack<char> stk;
        int converted = 0;
        int numTillNow=0;
        string s;
        getline(std::cin, s);
        if(s.at(0)=='-'){
            break;
        }

        for (int i = 0; i < s.length(); ++i) {

            if (numTillNow == 0 && s.at(i) == '{' && numTillNow < s.length() / 2) {
                stk.push('{');
                numTillNow++;
            } else if (numTillNow == 0 && s.at(i) == '}') {
                stk.push('{');
                converted++;
                numTillNow++;
            } else if (stk.top() == '{' && s.at(i) == '}') {
                stk.pop();
                numTillNow++;
            } else if (stk.top() == '{' && s.at(i) == '{' && numTillNow < s.length() / 2) {
                stk.push('{');
                numTillNow++;
            } else if (numTillNow >= s.length() / 2 && s.at(i) == '{') {
                stk.push('}');
                converted++;numTillNow++;
            }
        }
        cout << j;
        j++;
        cout << ".";
        cout << " ";
        cout << converted;
        cout << "\n";
    }
    return 0;
}