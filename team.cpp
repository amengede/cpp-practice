/*
    How many problems to attempt?
    A team has 3 members and is given n problems. For each problem, each team member knows whether they can solve it.
    The team will only attempt a problem if 2 out of 3 of them can solve it. How many problems can they attempt?

    input: standard, no. of problems and the data set where row=problem and column=team member, 0=can't solve, 1=can solve
    output: no. of problems the team can attempt

    example:
    3
    1 1 0
    1 1 1
    1 0 0
    2
*/
#include <iostream>
using namespace std;

int main()
{
    int n, temp, thisP = 0, problems = 0;
    cin >> n;
    for (int i = 0;i < n;i++) {
        int thisP = 0;
        for(int j = 0;j < 3;j++) {
            cin >> temp;
            thisP += temp;
        }
        if (thisP >= 2) {
            problems++;
        }
    }
    cout << problems;
}
