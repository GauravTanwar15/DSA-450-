#include <iostream>
using namespace std;
int main(){
    class Solution
{
    public:	
	int isPlaindrome(string S)
	{
	    int i = 0;
	    int j = S.size() - 1;
	    
	    while(i < j)
	    {
	        if(S[i] != S[j])
	        {
	            return 0;
	        }
	        
	        i++;
	        j--;
	    }
	    
	    return 1;
	}
};

return 0;
}