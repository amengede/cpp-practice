/* petya compares two strings, which is larger?
    input: two strings of equal length, with mixed case characters
    output: -1 indicates first string is less, 0 indicates equal and 1 indicates first string greater

    examples:
    aaaa
    aaaA
    0

    abs
    Abz
    -1

    abcdefg
    AbCdEfF
    1
*/

#include <iostream>
#include <string>
using namespace std;

int compare(char c1, char c2) {
    int n1 = tolower(c1);
    int n2 = tolower(c2);
    if (n1 == n2) {
        return 0;
    }
    else if (n1 < n2) {
        return -1;
    }
    else {
        return 1;
    }
}

int main()
{
    string s1, s2;
    int result = 0;
    cin >> s1;
    cin >> s2;
    for (int i = 0;i < s1.length();i++) {
        result = compare(s1[i], s2[i]);
        if (result != 0) {
            break;
        }
    }
    cout << result;
}