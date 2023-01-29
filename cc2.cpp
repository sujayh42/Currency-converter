#include <bits/stdc++.h>
using namespace std;
void USDto()
{
    double ans, amt;
    int curr2;
    cout << "Enter currency in USD:-";
    cin >> amt;
    cout << endl;
    cout << "You want to convert this into:-" << endl;
    cout << endl;
    cout << "Select Currency type :-" << endl;
    cout << "1.United States Dollar (USD)" << endl;
    cout << "2.Indian Rupee (INR)" << endl;
    cout << "3.EURO (EUR)" << endl;
    cout << "4.Japanese Yen (JPY)" << endl;
    cout << "5.Great Britian Pound (GBP)" << endl;
    cout << "6.Canadian Dollar (CAD)" << endl;
    cout << "7.Australian Dollar (AUD)" << endl;
    cout << "8.United Arab Emirates Dirham (AED)" << endl;
    cout << "9.Chinese Yuan (CNY)" << endl;
    cout << "10.Pakistan Rupee (PKR)" << endl;
    cout << endl;
    cout << "Select Any One : ";
    cin >> curr2;
    switch (curr2)
    {
    case 1:
        ans = amt * 1;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 2:
        ans = amt * 81.52;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 3:
        ans = amt * 0.92;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 4:
        ans = amt * 129.88;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 5:
        ans = amt * 0.81;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 6:
        ans = amt * 1.33;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 7:
        ans = amt * 1.41;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 8:
        ans = amt * 3.67;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 9:
        ans = amt * 6.78;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 10:
        ans = amt * 250.62;
        cout << "The Final Amount is = " << ans << endl;
        break;
    default:
        break;
    }
}
void INRto()
{
    double ans, amt;
    int curr2;
    cout << "Enter currency in INR:-";
    cin >> amt;
    cout << endl;
    cout << "You want to convert this into:-" << endl;
    cout << endl;
    cout << "Select Currency type :-" << endl;
    cout << "1.United States Dollar (USD)" << endl;
    cout << "2.Indian Rupee (INR)" << endl;
    cout << "3.EURO (EUR)" << endl;
    cout << "4.Japanese Yen (JPY)" << endl;
    cout << "5.Great Britian Pound (GBP)" << endl;
    cout << "6.Canadian Dollar (CAD)" << endl;
    cout << "7.Australian Dollar (AUD)" << endl;
    cout << "8.United Arab Emirates Dirham (AED)" << endl;
    cout << "9.Chinese Yuan (CNY)" << endl;
    cout << "10.Pakistan Rupee (PKR)" << endl;
    cout << endl;
    cout << "Select Any One : ";
    cin >> curr2;
    switch (curr2)
    {
    case 1:
        ans = amt * 0.012;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 2:
        ans = amt * 1;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 3:
        ans = amt * 0.011;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 4:
        ans = amt * 1.59;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 5:
        ans = amt * 0.0099;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 6:
        ans = amt * 0.016;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 7:
        ans = amt * 0.017;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 8:
        ans = amt * 0.045;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 9:
        ans = amt * 0.083;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 10:
        ans = amt * 3.07;
        cout << "The Final Amount is = " << ans << endl;
        break;
    default:
        break;
    }
}
void EUROto()
{
    double ans, amt;
    int curr2;
    cout << "Enter currency in EUR:-";
    cin >> amt;
    cout << endl;
    cout << "You want to convert this into:-" << endl;
    cout << endl;
    cout << "Select Currency type :-" << endl;
    cout << "1.United States Dollar (USD)" << endl;
    cout << "2.Indian Rupee (INR)" << endl;
    cout << "3.EURO (EUR)" << endl;
    cout << "4.Japanese Yen (JPY)" << endl;
    cout << "5.Great Britian Pound (GBP)" << endl;
    cout << "6.Canadian Dollar (CAD)" << endl;
    cout << "7.Australian Dollar (AUD)" << endl;
    cout << "8.United Arab Emirates Dirham (AED)" << endl;
    cout << "9.Chinese Yuan (CNY)" << endl;
    cout << "10.Pakistan Rupee (PKR)" << endl;
    cout << endl;
    cout << "Select Any One : ";
    cin >> curr2;
    switch (curr2)
    {
    case 1:
        ans = amt * 1.09;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 2:
        ans = amt * 88.63;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 3:
        ans = amt * 1;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 4:
        ans = amt * 141.22;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 5:
        ans = amt * 0.88;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 6:
        ans = amt * 1.45;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 7:
        ans = amt * 1.53;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 8:
        ans = amt * 3.99;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 9:
        ans = amt * 7.38;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 10:
        ans = amt * 272.49;
        cout << "The Final Amount is = " << ans << endl;
        break;
    default:
        break;
    }
}
void JPYto()
{
    double ans, amt;
    int curr2;
    cout << "Enter currency in JPY:-";
    cin >> amt;
    cout << endl;
    cout << "You want to convert this into:-" << endl;
    cout << endl;
    cout << "Select Currency type :-" << endl;
    cout << "1.United States Dollar (USD)" << endl;
    cout << "2.Indian Rupee (INR)" << endl;
    cout << "3.EURO (EUR)" << endl;
    cout << "4.Japanese Yen (JPY)" << endl;
    cout << "5.Great Britian Pound (GBP)" << endl;
    cout << "6.Canadian Dollar (CAD)" << endl;
    cout << "7.Australian Dollar (AUD)" << endl;
    cout << "8.United Arab Emirates Dirham (AED)" << endl;
    cout << "9.Chinese Yuan (CNY)" << endl;
    cout << "10.Pakistan Rupee (PKR)" << endl;
    cout << endl;
    cout << "Select Any One : ";
    cin >> curr2;
    switch (curr2)
    {
    case 1:
        ans = amt * 0.0077;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 2:
        ans = amt * 0.63;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 3:
        ans = amt * 0.0071;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 4:
        ans = amt * 1;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 5:
        ans = amt * 0.0062;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 6:
        ans = amt * 0.010;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 7:
        ans = amt * 0.011;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 8:
        ans = amt * 0.028;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 9:
        ans = amt * 0.052;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 10:
        ans = amt * 1.93;
        cout << "The Final Amount is = " << ans << endl;
        break;
    default:
        break;
    }
}
void GBPto()
{
    double ans, amt;
    int curr2;
    cout << "Enter currency in GBP:-";
    cin >> amt;
    cout << endl;
    cout << "You want to convert this into:-" << endl;
    cout << endl;
    cout << "Select Currency type :-" << endl;
    cout << "1.United States Dollar (USD)" << endl;
    cout << "2.Indian Rupee (INR)" << endl;
    cout << "3.EURO (EUR)" << endl;
    cout << "4.Japanese Yen (JPY)" << endl;
    cout << "5.Great Britian Pound (GBP)" << endl;
    cout << "6.Canadian Dollar (CAD)" << endl;
    cout << "7.Australian Dollar (AUD)" << endl;
    cout << "8.United Arab Emirates Dirham (AED)" << endl;
    cout << "9.Chinese Yuan (CNY)" << endl;
    cout << "10.Pakistan Rupee (PKR)" << endl;
    cout << endl;
    cout << "Select Any One : ";
    cin >> curr2;
    switch (curr2)
    {
    case 1:
        ans = amt * 1.24;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 2:
        ans = amt * 100.92;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 3:
        ans = amt * 1.14;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 4:
        ans = amt * 160.80;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 5:
        ans = amt * 1;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 6:
        ans = amt * 1.65;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 7:
        ans = amt * 1.74;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 8:
        ans = amt * 4.55;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 9:
        ans = amt * 8.40;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 10:
        ans = amt * 310.30;
        cout << "The Final Amount is = " << ans << endl;
        break;
    default:
        break;
    }
}
void CADto()
{
    double ans, amt;
    int curr2;
    cout << "Enter currency in CAD:-";
    cin >> amt;
    cout << endl;
    cout << "You want to convert this into:-" << endl;
    cout << endl;
    cout << "Select Currency type :-" << endl;
    cout << "1.United States Dollar (USD)" << endl;
    cout << "2.Indian Rupee (INR)" << endl;
    cout << "3.EURO (EUR)" << endl;
    cout << "4.Japanese Yen (JPY)" << endl;
    cout << "5.Great Britian Pound (GBP)" << endl;
    cout << "6.Canadian Dollar (CAD)" << endl;
    cout << "7.Australian Dollar (AUD)" << endl;
    cout << "8.United Arab Emirates Dirham (AED)" << endl;
    cout << "9.Chinese Yuan (CNY)" << endl;
    cout << "10.Pakistan Rupee (PKR)" << endl;
    cout << endl;
    cout << "Select Any One : ";
    cin >> curr2;
    switch (curr2)
    {
    case 1:
        ans = amt * 0.75;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 2:
        ans = amt * 61.11;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 3:
        ans = amt * 0.69;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 4:
        ans = amt * 97.37;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 5:
        ans = amt * 0.61;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 6:
        ans = amt * 1;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 7:
        ans = amt * 1.06;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 8:
        ans = amt * 2.75;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 9:
        ans = amt * 0.75;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 10:
        ans = amt * 187.88;
        cout << "The Final Amount is = " << ans << endl;
        break;
    default:
        break;
    }
}
void AUDto()
{
    double ans, amt;
    int curr2;
    cout << "Enter currency in AUD:-";
    cin >> amt;
    cout << endl;
    cout << "You want to convert this into:-" << endl;
    cout << endl;
    cout << "Select Currency type :-" << endl;
    cout << "1.United States Dollar (USD)" << endl;
    cout << "2.Indian Rupee (INR)" << endl;
    cout << "3.EURO (EUR)" << endl;
    cout << "4.Japanese Yen (JPY)" << endl;
    cout << "5.Great Britian Pound (GBP)" << endl;
    cout << "6.Canadian Dollar (CAD)" << endl;
    cout << "7.Australian Dollar (AUD)" << endl;
    cout << "8.United Arab Emirates Dirham (AED)" << endl;
    cout << "9.Chinese Yuan (CNY)" << endl;
    cout << "10.Pakistan Rupee (PKR)" << endl;
    cout << endl;
    cout << "Select Any One : ";
    cin >> curr2;
    switch (curr2)
    {
    case 1:
        ans = amt * 0.72;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 2:
        ans = amt * 58.29;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 3:
        ans = amt * 0.65;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 4:
        ans = amt * 92.30;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 5:
        ans = amt * 0.58;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 6:
        ans = amt * 0.95;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 7:
        ans = amt * 1;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 8:
        ans = amt * 2.63;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 9:
        ans = amt * 4.85;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 10:
        ans = amt * 179.22;
        cout << "The Final Amount is = " << ans << endl;
        break;
    default:
        break;
    }
}
void AEDto()
{
    double ans, amt;
    int curr2;
    cout << "Enter currency in AED:-";
    cin >> amt;
    cout << endl;
    cout << "You want to convert this into:-" << endl;
    cout << endl;
    cout << "Select Currency type :-" << endl;
    cout << "1.United States Dollar (USD)" << endl;
    cout << "2.Indian Rupee (INR)" << endl;
    cout << "3.EURO (EUR)" << endl;
    cout << "4.Japanese Yen (JPY)" << endl;
    cout << "5.Great Britian Pound (GBP)" << endl;
    cout << "6.Canadian Dollar (CAD)" << endl;
    cout << "7.Australian Dollar (AUD)" << endl;
    cout << "8.United Arab Emirates Dirham (AED)" << endl;
    cout << "9.Chinese Yuan (CNY)" << endl;
    cout << "10.Pakistan Rupee (PKR)" << endl;
    cout << endl;
    cout << "Select Any One : ";
    cin >> curr2;
    switch (curr2)
    {
    case 1:
        ans = amt * 0.27;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 2:
        ans = amt * 22.19;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 3:
        ans = amt * 0.25;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 4:
        ans = amt * 35.36;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 5:
        ans = amt * 0.22;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 6:
        ans = amt * 0.36;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 7:
        ans = amt * 0.38;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 8:
        ans = amt * 1;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 9:
        ans = amt * 1.85;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 10:
        ans = amt * 68.24;
        cout << "The Final Amount is = " << ans << endl;
        break;
    default:
        break;
    }
}
void CNYto()
{
    double ans, amt;
    int curr2;
    cout << "Enter currency in CNY:-";
    cin >> amt;
    cout << endl;
    cout << "You want to convert this into:-" << endl;
    cout << endl;
    cout << "Select Currency type :-" << endl;
    cout << "1.United States Dollar (USD)" << endl;
    cout << "2.Indian Rupee (INR)" << endl;
    cout << "3.EURO (EUR)" << endl;
    cout << "4.Japanese Yen (JPY)" << endl;
    cout << "5.Great Britian Pound (GBP)" << endl;
    cout << "6.Canadian Dollar (CAD)" << endl;
    cout << "7.Australian Dollar (AUD)" << endl;
    cout << "8.United Arab Emirates Dirham (AED)" << endl;
    cout << "9.Chinese Yuan (CNY)" << endl;
    cout << "10.Pakistan Rupee (PKR)" << endl;
    cout << endl;
    cout << "Select Any One : ";
    cin >> curr2;
    switch (curr2)
    {
    case 1:
        ans = amt * 0.15;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 2:
        ans = amt * 12.02;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 3:
        ans = amt * 0.14;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 4:
        ans = amt * 19.15;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 5:
        ans = amt * 0.12;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 6:
        ans = amt * 0.20;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 7:
        ans = amt * 0.21;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 8:
        ans = amt * 0.54;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 9:
        ans = amt * 1;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 10:
        ans = amt * 36.95;
        cout << "The Final Amount is = " << ans << endl;
        break;
    default:
        break;
    }
}
void PKRto()
{
    double ans, amt;
    int curr2;
    cout << "Enter currency in PKR:-";
    cin >> amt;
    cout << endl;
    cout << "You want to convert this into:-" << endl;
    cout << endl;
    cout << "Select Currency type :-" << endl;
    cout << "1.United States Dollar (USD)" << endl;
    cout << "2.Indian Rupee (INR)" << endl;
    cout << "3.EURO (EUR)" << endl;
    cout << "4.Japanese Yen (JPY)" << endl;
    cout << "5.Great Britian Pound (GBP)" << endl;
    cout << "6.Canadian Dollar (CAD)" << endl;
    cout << "7.Australian Dollar (AUD)" << endl;
    cout << "8.United Arab Emirates Dirham (AED)" << endl;
    cout << "9.Chinese Yuan (CNY)" << endl;
    cout << "10.Pakistan Rupee (PKR)" << endl;
    cout << endl;
    cout << "Select Any One : ";
    cin >> curr2;
    switch (curr2)
    {
    case 1:
        ans = amt * 0.0040;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 2:
        ans = amt * 0.33;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 3:
        ans = amt * 0.0037;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 4:
        ans = amt * 0.52;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 5:
        ans = amt * 0.0032;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 6:
        ans = amt * 0.0053;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 7:
        ans = amt * 0.0056;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 8:
        ans = amt * 0.015;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 9:
        ans = amt * 0.027;
        cout << "The Final Amount is = " << ans << endl;
        break;
    case 10:
        ans = amt * 1;
        cout << "The Final Amount is = " << ans << endl;
        break;
    default:
        break;
    }
}
int main()
{
    int amt, curr;

    cout << "1.United States Dollar (USD)" << endl;
    cout << "2.Indian Rupee (INR)" << endl;
    cout << "3.Euro (EUR)" << endl;
    cout << "4.Japanese Yen (JPY)" << endl;
    cout << "5.Great Britian Pound (GBP)" << endl;
    cout << "6.Canadian Dollar (CAD)" << endl;
    cout << "7.Australian Dollar (AUD)" << endl;
    cout << "8.United Arab Emirates Dirham (AED)" << endl;
    cout << "9.Chinese Yuan (CNY)" << endl;
    cout << "10.Pakistan Rupee (PKR)" << endl;
    cout << endl;
    cout << "Select Currency type :- " << endl;
    cin >> curr;
    switch (curr)
    {
    case 1:
        USDto();
        break;
    case 2:
        INRto();
        break;
    case 3:
        EUROto();
        break;
    case 4:
        JPYto();
        break;
    case 5:
        GBPto();
        break;
    case 6:
        CADto();
        break;
    case 7:
        AUDto();
        break;
    case 8:
        AEDto();
        break;
    case 9:
        CNYto();
        break;
    case 10:
        PKRto();
        break;

    default:
        break;
    }
    cout<<"ALL THE ABOVE DATA IS FOR THE CONVERSION RATES ON 29 JAN 2023!!!!!"
    return 0;
}