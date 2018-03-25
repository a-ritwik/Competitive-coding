#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    for (int k = 0; k < testCases; ++k) {
        long long num;
        cin >> num;
        if(num%2!=0){
            cout << num;
            cout <<"\n";
        }else {

            string binary = bitset<24>(num).to_string();
//    cout << binary;
//    cout << "\n";
            long long posFirstOne;
            for (long long i = 0; i < binary.length(); ++i) {
                if (binary.at(i) == 49) {
                    posFirstOne = i;
                    break;
                }
            }
//    cout << posFirstOne;
//    cout << "\n";


            string abc = "";
            for (long long j = binary.length() - 1; j >= posFirstOne; --j) {
                abc = abc + binary.at(j);
            }
//    cout << abc;
//    cout << "\n";


            long long decimal = bitset<24>(abc).to_ulong();
            cout << decimal;
            cout << "\n";
        }
    }

}
