#include <iostream>
using namespace std;
int main()
{
    int sum[100001] = {0};
    int L, R, count;
    for (int i = 1; i <= 50000; i++)
    {
        for (int j = 2 * i; j <= 100000; j += i)
            sum[j] += i;
    }
    while (cin >> L >> R)
    {
        if (L == 0 && R == 0)
            break;
        count = 0;
        for (int i = L; i <= R; i++)
        {
            int j = sum[i];

            if (j > i && j >= L && j <= R)
            {
                if (sum[j] == i)
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}






