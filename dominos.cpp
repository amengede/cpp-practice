/* dominos: how many can be placed?
 input: standard, M,N indicate length and width of board
 output: standard, the number of 2*1 domino pieces which can be placed

 Examples:
 2 4
 4
 3 3
 4 */

#include <iostream>
using namespace std;

int main()
{
    int m, n, area;
    cin >> m;
    cin >> n;
    area = m * n;
    cout << area / 2;
}