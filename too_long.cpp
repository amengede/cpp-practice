/*
    Word abbreviations:
    If a word is more than 10 characters in length, abbreviate it to the form
    [first letter][no. of letters between first and last][last letter]

    input: standard, number of words followed by a set of words
    output: the same words, abbreviated appropriately

    example:
    4
    word
    localization
    internationalization
    pneumonoultramicroscopicsilicovolcanoconiosis
    word
    l10n
    i18n
    p43s
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string abbreviate(string word) {
    string line = "";
    if (word.length() <= 10) {
        line = word;
    }
    else {
        line.push_back(word[0]);
        line += to_string(word.length() - 2);
        line.push_back(word[word.length() - 1]);
    }
    return line;
}

int main()
{
    int n;
    string word;
    cin >> n;
    vector<string> words;
    //take in words
    for (int i=0;i<n;i++) {
        cin >> word;
        words.push_back(abbreviate(word));
    }
    //output words
    for (int i = 0;i < n;i++) {
        cout<<words[i];
        if (i < (n - 1)) {
            cout << endl;
        }
    }
}
