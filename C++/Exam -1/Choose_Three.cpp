#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N, S;
        cin >> N >> S;

        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }

        int flag = 0;

        for (int i = 0; i < N - 2; i++)
        {
            for (int j = i + 1; j < N - 1; j++)
            {
                for (int k = j + 1; k < N; k++)
                {
                    if (a[i] + a[j] + a[k] == S)
                    {
                        flag= 1;
                        break;
                    }
                }
                if (flag==1)
                {
                    break;
                }
            }
            if (flag==1)
            {
                break;
            }
        }

        if (flag==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
