struct Union_Find
{
   std::vector<int> UF;
   
   Union_Find(int sz)
   {
       UF.resize(sz + 1);
      for (int i = 1; i <= sz; i++)
         UF[i] = i;
   }

   int Find(int x)
   {
       if (UF[x] == x) return x;
       else return UF[x] = Find(UF[x]);
   }

   void Union(int x, int y)
   {
      x = Find(x);
      y = Find(y);
      UF[y] = x;
   }
};
