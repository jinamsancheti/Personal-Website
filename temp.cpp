#include<bits/stdc++.h>
using namespace std;

int main()
{
    string stringSent = "abcdef", stringRec = "Abcd";
    sort(stringSent.begin(),stringSent.end());
    sort(stringRec.begin(),stringRec.end());

    int n = stringRec.length();
    for(int i = 0 ; i < n ; i++ )
    {
        if(stringSent[i] != stringRec[i])
            cout << stringSent[i] ;
    }
    cout << stringSent[n];
    return 0 ;
}

