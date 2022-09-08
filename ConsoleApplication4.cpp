

#include <iostream>
using namespace std;

enum enCheckPrimeNotPrime{Prime=1,NotPrime=2};
int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
enCheckPrimeNotPrime CheckPrimeNumber(int Number)
{
    int M = round(Number / 2);
    for (int Counter = 2; Counter <= M;Counter++)
    {
        if (Number % Counter == 0)
            return enCheckPrimeNotPrime::NotPrime;

    }return enCheckPrimeNotPrime::Prime;
   
}
void PrintPrimeNumbersFrom1ToN(int Number)
{
    cout << "\n";
    cout << "Prime Numbers from 1 to " << Number;
    cout << " Are:"<<endl;
    for (int i = 1;i <= Number;i++)
    {
        if (CheckPrimeNumber(i) == enCheckPrimeNotPrime::Prime)
            cout << i << "\t";
    }
}
int main()
{
    system("color 1F");
   PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Enter positive number?"));
}

