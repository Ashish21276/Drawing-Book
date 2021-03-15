#include <bits/stdc++.h>

using namespace std;

int pageCount(int n, int p)
{
    int x = 0;
    for (int i = 1; i < n; i++)
    {
        if (p == i || p == i - 1)
            break;
        x++;
        i++;
    }
    int y = 0;
    if (n % 2 == 0)
    {
        for (int i = n+1; i > 0; i--)
        {
            if (p == i || p == i - 1)
                break;
            y++;
            i--;
        }
    }
    else
    {

        for (int i = n; i > 0; i--)
        {
            if (p == i || p == i - 1)
                break;
            y++;
            i--;
        }
    }
    if (x > y)
        return y;
    return x;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
