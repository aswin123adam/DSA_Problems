#include <bits/stdc++.h>
using namespace std;

int main()
{
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int B;
        cin >> B;
        int found = 0;
        for (int i = 0; i < N; i++)
        {
            if (A[i] == B)
            {
                found = 1;
            }
        }
        cout << found << "\n";
    }
    return 0;
}