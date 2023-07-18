bool checkKthBit(int n, int k)
    {
        
        //i can left shift n k times and can and it with n if it's 1 i can return true else i can return false
        
        if((n & (1 << k)) != 0) return true;
        
        return false;
    }
