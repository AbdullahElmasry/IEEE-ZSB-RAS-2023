int lengthOfLongestSubstring(char *s) {
    int len;
    int start_index = 0;
    int max_length = 0;
    int char_map[256] = {0};

    len = strlen(s);

    for(int i = 0; i < len; i++) 
    {
        while(char_map[s[i]] != 0) {
            char_map[s[start_index]] = 0;
            start_index++;
        }
        char_map[s[i]] = 1;
        if(i - start_index + 1 > max_length) {
            max_length = i - start_index + 1;
        }
    }

    return max_length;
}