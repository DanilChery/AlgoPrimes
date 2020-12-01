#include <iostream>
#include <cmath>

using namespace std;

bool isPrime_1(int x)
{
    if (x == 1)
    {
        return false;
    }

    for (int j = 2; j < x; j++)
    {
        if (x % j == 0)
        {
            return false;
        }
    }

    return true;
}

void variant_1()
{
    int N = 100000;

    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        if (isPrime_1(i))
        {
            count++;
        }
    }

    cout << count << endl;
}






bool isPrime_2(int x)
{
    if (x == 1)
    {
        return false;
    }

    if (x % 2 == 0)
    {
        return false;
    }

    for (int j = 3; j <= (int)(sqrt(x) + 1); j += 2)
    {
        if (x % j == 0)
        {
            return false;
        }
    }

    return true;
}

void variant_2()
{
    int N = 100000;

    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        if (isPrime_2(i))
        {
            count++;
        }
    }

    cout << count << endl;
}


int main(int argc, char* argv[])
{
    variant_2();

    return 0;
}
