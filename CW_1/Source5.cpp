#include <iostream>

using namespace std;

int main(int argc, char argv[])
{
    int n = 0;
    int m = 0;
    int maximum = -1;
    cin >> n >> m;
    int mas[100000 + 1] = { 0 };

    for (int i = 0; i < n; ++i)
    {

        int x = 0;
        cin >> x;
        if (not(mas[x])) { mas[x] += 1; }

        if (maximum < x) { maximum = x; }

    }
    for (int i = 0; i < m; ++i)
    {
        int x = 0;
        cin >> x;
        if ((mas[x]) == 1)
        {
            mas[x] += 1;

        }
        if (maximum < x) { maximum = x; }
    }
    for (int i = 0; i < maximum + 1; ++i)
    {
        if (mas[i] == 2) 
        {
            cout << i << endl;
            
        }
    }


    return EXIT_SUCCESS;
}