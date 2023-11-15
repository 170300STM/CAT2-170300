// Admission number:170300
// course:DBIT sep-dec 2023
// Strathmore University

#include <iostream>

using namespace std;
int main()
{
    char let1;

    cout << "what letter do u want to enter: ";
    cin >> let1;
    int t = isalpha(let1);
    if (t == 0)
    {
        cout << "This is not a letter";
    }
    else
    {

        tolower(let1);
        if (let1 == 'a' || let1 == 'e' || let1 == 'i' || let1 == 'o' || let1 == 'u')
        {
            cout << "this is a vowel";
        }
        else
        {
            cout << "\nthis is a consonant";
        }
    }

    return 0;
}