	int isPalindrome(string S)
	{
	    // Your code goes here
	    string t = S;
	    reverse(t.begin() , t.end());
	    return t == S;
	}
