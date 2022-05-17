int strStr(string haystack, string needle) {
        if(haystack.size()==needle.size() && haystack==needle)
                    return 0;
        for(int i = 0; haystack[i]!='\0'; i++){
            if(haystack[i]==needle[0]){
                if(needle[1]=='\0')
                    return i;
                for(int j = 1; needle[j]!='\0'; j++){
                    if(haystack[i+j]!=needle[j])
                        break;
                    if(haystack[i+j]==needle[j] && needle[j+1]=='\0')
                        return i;
                }     
            } 
        }
        return -1;
    }
