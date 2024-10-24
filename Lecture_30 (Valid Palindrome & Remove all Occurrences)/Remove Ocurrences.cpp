// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         while(s.length() > 0 && s.find(part) < s.length())
//         {
//             int st = s.find(part) ;
//             int del = part.length() ;
//             s.erase(st, del) ;
//         }
//         return s ;
//     }
// };