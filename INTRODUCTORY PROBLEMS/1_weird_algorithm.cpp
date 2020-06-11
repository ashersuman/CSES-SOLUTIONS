#include <bits/stdc++.h>

typedef long long ll;

using namespace std;
//naive approach
int main()
{   
    //C and C++ stream sync off
    ios::sync_with_stdio(0);
    //Decoupling cin cout
    cin.tie(0);
    //Speeedy input output

    ll input;
    cin >> input;
    while (input != 1)
    {   
        cout << input << " ";
        if (input % 2 == 0)
        {
            input /= 2;
        }
        else
        {
            input = (input * 3) + 1;
        }       
    }

    cout << "\n";
    return 0;
}

//Point to note: use of long
//"\n" works faster