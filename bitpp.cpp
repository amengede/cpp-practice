/*  bit++ : instruction parser
    input: standard, number of instructions to expect, and a list of instructions
    output: standard, final value of x

    examples:
    1
    ++X
    1

    2
    X++
    --X
    0
*/

#include <iostream>
#include <string>
using namespace std;

int parse(string instruction) {
    if ((instruction == "X++") || (instruction == "++X")) {
        return 1;
    }
    else {
        return -1;
    }
}

int main()
{
    int n, x = 0;
    string instruction;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> instruction;
        x += parse(instruction);
    }
    cout << x;
    return 0;
}
