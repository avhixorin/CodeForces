#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;

        vector<vector<int>> input(size, vector<int>(2));
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> input[i][j];
            }
        }

        int maxW = 0, maxH = 0;
        for (const auto &row : input)
        {
            maxW = max(maxW, row[0]);
            maxH = max(maxH, row[1]);
        }

        cout << 2 * (maxW + maxH) << endl;
    }

    return 0;
}