#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> peopleNames ;
	int people = peopleNames.size();
	int min = peopleNames[0].length();
	for(int i = 0 ; i < peopleNames.size() ; i++)
	{
		transform(peopleNames[i].begin(), peopleNames[i].end(), peopleNames[i].begin(), ::tolower);	
		int k = peopleNames[i].length();
		if( k < min )
			min = k ;
	}
	int i  ;
    for( i = 0 ; i < min ; i++ )
	{
		char ch = peopleNames[0][i];
		int j ;
		for( j = 1 ; j < people ; j++ )
		{
			if(peopleNames[j][i] != ch)
				break ;
		}
		if( j != people )
			break ;
	}
	string answer = peopleNames[0].substr(0,i);
    return 0 ;
}