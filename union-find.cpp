struct Union_Find
{
    std::vector<int> UF;
    
    Union_Find(int sz)
    {
        UF.resize(sz + 1);
        for (int i = 1; i <= sz; i++)
            UF[i] = i;
    }
 
    int find(int x)
    {
         if (UF[x] == x) return x;
         else return UF[x] = find(UF[x]);
    }
 
    void union(int x, int y)
    {
        x = find(x);
        y = find(y);
        UF[y] = x;
    }
};
