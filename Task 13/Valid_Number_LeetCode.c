bool isNumber(char * s){
    int i;
    int len;
    int decimal_count = 0;
    int valid = 1;
    int e_count = 0;

    // check if input is "."
    if (s[0] == '.' && s[1] == '\0') {
        valid = 0;
    } else {
        len = strlen(s);
        if (len == 0) {
            return false;
        }
        // checking every character in the input using this loop
        for (i = 0; i < len; i++) {
            if (s[i] == '+' || s[i] == '-') {
                if (i != 0 && s[i-1] != 'e' && s[i-1] != 'E') {
                    valid = 0;
                    break;
                }
            }
            else if (s[i] == '.') {
                decimal_count++;
                if (decimal_count > 1 || e_count > 0) {
                    valid = 0;
                    break;
                }
            }
            else if (s[i] == 'e' || s[i] == 'E') {
                e_count++;
                if (i == 0 || i == len-1 || e_count > 1) {
                    valid = 0;
                    break;
                }
                if (s[i+1] == '+' || s[i+1] == '-') {
                    if (i+1 == len-1) {
                        valid = 0;
                        break;
                    }
                    i++;
                }
                // check if the "e" or "E" is followed by a valid integer
                else if (!isdigit(s[i+1])) {
                    valid = 0;
                    break;
                }
            }
            else if (!isdigit(s[i])) {
                valid = 0;
                break;
            }
        }
    }
    return valid;
}