#include <iostream>
using namespace std;
int main()
{
    char startValue;
    char selectAgain;
    float converter(void);
start:
    cout << "***************Welcome to Currency Converter Application***************" << endl;
    cout << "***************Please follow the instructions" << endl;
    cout << "You can have any CRYPTOCURRENCIES Bitcoin, Ethereum, Litecoin, Ripple, Cardano" << endl;
    cout << "You can have B, E, L, X, A tokens for Bitcoin, Ethereum, Litecoin, Ripple, Cardano respectively" << endl;
    cout << "Enter Currency_1 which you want to convert" << endl;
    cout << "Enter value for Currency_1" << endl;
    cout << "Enter Currency_2 which you want to convert Currency_1" << endl;
    cout << "(B) Bitcoin, (E) Ethereum, (L) Litecoin, (X) Ripple, (A) Cardano" << endl;
    cout << "Now please 'S' to start" << endl;
selectChoice:
    cin >> startValue;
    if (startValue == 's' || startValue == 'S')
    {
        float finalValue = converter();
        cout << "Result is " << finalValue << endl;
        cout << "Do you want to use the conversion again? yes or no?" << endl;
    typeAgain:
        cin >> selectAgain;
        if (selectAgain == 'YES' || selectAgain == 'yes')
        {
            goto start;
        }
        else if (selectAgain == 'NO' || selectAgain == 'no')
        {
            cout << "Thank you" << endl;
            cout << "Mutual Fund investments are subject to market risks, read all scheme related documents carefully." << endl;
        }
        else
        {
            cout << "You have entered wrong value, please type again" << endl;
            goto typeAgain;
        }
    }
    else
    {
        cout << "You have entered wrong value" << endl;
        cout << "Please type 'S'" << endl;
        goto selectChoice;
    }
}
float converter()
{
    char cur1;
    char cur2;
    float currr1;
    float currr2;
currLevel:
    cout << "Enter Currency_1 name:" << endl;
    cin >> cur1;
    cout << "Enter Currency_1 value:" << endl;
    cin >> currr1;
    switch (cur1)
    {
    case 'B':
    currLevel1:
        cout << "Enter Currency_2 name:" << endl;
        cin >> cur2;
        if (cur2 == 'B')
        {
            currr2 = currr1 * 1;
        }
        else if (cur2 == 'E')
        {
            currr2 = currr1 * 0.061;
        }
        else if (cur2 == 'L')
        {
            currr2 = currr1 * 0.0032;
        }
        else if (cur2 == 'X')
        {
            currr2 = currr1 * 0.00001541;
        }
        else if (cur2 == 'A')
        {
            currr2 = currr1 * 0.00000924;
        }
        else
        {
            cout << "You have entered wrong value, please type again" << endl;
            goto currLevel1;
        }
        break;
    case 'E':
    currLevel2:
        cout << "Enter Currency_2 name:" << endl;
        cin >> cur2;
        if (cur2 == 'B')
        {
            currr2 = currr1 * 16.28;
        }
        else if (cur2 == 'E')
        {
            currr2 = currr1 * 1;
        }
        else if (cur2 == 'L')
        {
            currr2 = currr1 * 0.0524;
        }
        else if (cur2 == 'X')
        {
            currr2 = currr1 * 0.00025087;
        }
        else if (cur2 == 'A')
        {
            currr2 = currr1 * 0.0001506;
        }
        else
        {
            cout << "You have entered wrong value, please type again" << endl;
            goto currLevel2;
        }
        break;
    case 'L':
    currLevel3:
        cout << "Enter Currency_2 name:" << endl;
        cin >> cur2;
        if (cur2 == 'B')
        {
            currr2 = currr1 * 307.5460;
        }
        else if (cur2 == 'E')
        {
            currr2 = currr1 * 18.9311;
        }
        else if (cur2 == 'L')
        {
            currr2 = currr1 * 1;
        }
        else if (cur2 == 'X')
        {
            currr2 = currr1 * 0.004808;
        }
        else if (cur2 == 'A')
        {
            currr2 = currr1 * 0.00287002;
        }
        else
        {
            cout << "You have entered wrong value, please type again" << endl;
            goto currLevel3;
        }
        break;
    case 'X':
    currLevel4:
        cout << "Enter Currency_2 name:" << endl;
        cin >> cur2;
        if (cur2 == 'B')
        {
            currr2 = currr1 * 64, 736.89;
        }
        else if (cur2 == 'E')
        {
            currr2 = currr1 * 3, 981.252;
        }
        else if (cur2 == 'L')
        {
            currr2 = currr1 * 207.5139;
        }
        else if (cur2 == 'X')
        {
            currr2 = currr1 * 1;
        }
        else if (cur2 == 'A')
        {
            currr2 = currr1 * 0.597414;
        }
        else
        {
            cout << "You have entered wrong value, please type again" << endl;
            goto currLevel4;
        }
        break;
    case 'A':
    currLevel5:
        cout << "Enter Currency_2 name:" << endl;
        cin >> cur2;
        if (cur2 == 'B')
        {
            currr2 = currr1 * 107, 600.18770;
        }
        else if (cur2 == 'E')
        {
            currr2 = currr1 * 6, 541.84884;
        }
        else if (cur2 == 'L')
        {
            currr2 = currr1 * 341.4146;
        }
        else if (cur2 == 'X')
        {
            currr2 = currr1 * 1.6544258;
        }
        else if (cur2 == 'A')
        {
            currr2 = currr1 * 1;
        }
        else
        {
            cout << "You have entered wrong value, please type again" << endl;
            goto currLevel5;
        }
        break;
    default:
    {
        cout << "You have entered wrong value, please type again" << endl;
        goto currLevel;
        break;
    }
    }
    return currr2;
}