//LeetCode 28 -> Find The Index of the First Occurence of the Sring 
class Solution {
public:
    int strStr(string haystack, string needle) {
         for(int i=0; i<haystack.size();i++){
           
              if(haystack.substr(i,needle.size())==needle){
              return i;
          
          }
          
         
      
      }
        return -1;
    }
};
