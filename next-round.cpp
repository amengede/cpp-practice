/*
    pick the winners
    every player equal to or greater than the kth player's score will win, provided their score is positive.

    input: standard, no. of players, kth player to match, scores of players in ranked order
    output: number of winners

    example:
    8 5
    10 9 8 7 7 7 5 5
    6
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    vector<int> contestants;
    int a;
    int winners = 0;
    //store n,k
    cin >> n;
    cin >> k;
    //store contestants
    for (int i = 0;i < n; i++) {
        cin >> a;
        contestants.push_back(a);
    }
    //test
    for (int i = 1;i <= n; i++) {
        if ((contestants[i - 1] < contestants[k - 1])|| (contestants[i - 1] <= 0)) {
            break;
        }
        else {
            winners++;
        }
    }
    //show no. of winners
    cout << winners;
}