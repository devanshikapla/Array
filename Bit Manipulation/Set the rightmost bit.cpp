int setBit(int N )
    {
        // Write Your Code here
        if((N & (N+1)) == 0) return N;
        return (N | (N+1));
    }
};
