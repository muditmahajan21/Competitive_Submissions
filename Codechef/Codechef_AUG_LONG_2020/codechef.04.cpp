#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int test;
	cin>>test;
	while(test--)
	{   
        int i;
		string chef_str,pattern_str;
        cin>>chef_str>>pattern_str;
        
		long long int chef_len = chef_str.size();
        long long int pattern_len = pattern_str.size();
		
        long long int alpha[27];
        
        memset(alpha, 0, sizeof(alpha));

	    long long int  alpha1[27];

		for(i = 0 ; i < chef_len ; i++)
		{
			alpha[chef_str[i] - 'a']++;
		}

		for(i = 0 ; i < pattern_len ; i++)
		{
			alpha[pattern_str[i] - 'a']--;
		}

		for(i = 0; i < 26 ; i++)
		{
            alpha1[i] = alpha[i];
        }
		
        string result1, result2;

		for(i = 0 ; i <= (pattern_str[0] - 'a'); i++)
		{   
			while(alpha[i]>0)
			{
				result1 += (char)(i+97);
				alpha[i]--;
			}
		}
		
		result1 += pattern_str;


		for(i = 0 ; i < 26; i++)
		{
			while(alpha[i] > 0)
			{
				result1 += (char)(i+97);
				alpha[i]--;
			}
		}

		for(i = 0; i < pattern_str[0] - 'a'; i++)
		{
			while(alpha1[i] != 0)
			{
				result2 += (char)(i+97);
				alpha1[i]--;
			}
		}

		result2 += pattern_str;

		for(i = 0 ; i < 26; i++)
		{
			while(alpha1[i] != 0)
			{
				result2 += (char)(i+97);
				alpha1[i]--;
			}
		}

		cout<<min(result1,result2)<<"\n";
	}
return 0;
}

