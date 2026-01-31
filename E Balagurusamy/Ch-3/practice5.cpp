/*
An election is conducted by five candidates. the candidates are numbered 1 to  5 and the voting is done by making the candidate
number on the ballot paper. Write a program to read the ballot and count the voad cast for each candidate using an array variable
count. In case, a number read is outside the range 1 to 5, the ballot should be considered as a 'spoilt ballot', and the progeam 
should also coiunt the number of spoilet ballots.
*/
#include <iostream>
using namespace std;

int main() {
    int count[5] = {0};  
    int spoilt = 0;      
    int n, vote;

    cout << "Enter number of voters: ";
    cin >> n;

    cout << "Enter the ballot numbers (1 to 5):\n";

    for (int i = 0; i < n; i++) {
        cin >> vote;

        if (vote >= 1 && vote <= 5) {
            count[vote - 1]++;  
        } else {
            spoilt++;           
        }
    }

    cout << "\nElection Results:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Candidate " << i + 1 << " : " << count[i] << " votes\n";
    }

    cout << "Spoilt Ballots : " << spoilt << endl;

    return 0;
}
