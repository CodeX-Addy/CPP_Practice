#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, answer = 0;
    cout << "Enter the decimal number: ";
    cin >> n;

    // logic
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        answer = (bit * pow(10, i)) + answer;
        n = n >> 1;
        i++;
    }

    cout << "The binary form is : " << answer << endl;
    return 0;
}