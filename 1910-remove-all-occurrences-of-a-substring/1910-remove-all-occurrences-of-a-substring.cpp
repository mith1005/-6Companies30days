class Solution {
public:
    string removeOccurrences(string s, string part) {
        // int partLength=part.length();
        // for(int i=0; i<=(s.length()-partLength);i++){
        //     if(s.substr(i,partLength)==part){
                
        //         s.erase(i,partLength);
        //     }

        // }
        
        // for(int i=0; i<=(s.length()-partLength);i++){
        //     if(s.substr(i,partLength)==part){
                
        //         s.erase(i,i+partLength);
        //     }

        // }


         int partLength = part.length();
        while (s.find(part) != string::npos) { 
            int i = s.find(part);
            s.erase(i, partLength); 
        }
        return s;

        

        
    }
};