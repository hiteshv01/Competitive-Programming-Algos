class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) 
    {
       vector<vector<int>> res ;
        sort(a.begin() , a.end()) ;
        int n = a.size();
        for ( int i=0 ;i < n-2 ; i++)
        {
            if(i==0 || (i >0 && a[i]!=a[i-1]))
            {
            int lo = i+1 ;
            int hi = n-1;
 
            while(lo < hi)
            {
                int val =a[lo] +a[hi] + a[i];
                if(val == 0)
                {
                    vector<int>temp ;
                    temp.push_back(a[i]) ;
                    temp.push_back(a[lo]) ;
                    temp.push_back(a[hi]) ;
                    res.push_back(temp) ;
                
                while(lo < hi && a[lo] == a[lo+1]) lo++ ;
                while(lo < hi && a[hi] == a[hi-1])  hi-- ;
                    lo++ ;
                    hi-- ;
                    
                }
                    
            else  if( val< 0) 
                    lo++ ;
             else
                    hi -- ;  }
            }
        }  
        return res ;   
    }
};
