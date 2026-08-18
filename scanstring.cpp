class Solution {
public:
    bool isNumber(string s) {

        bool digitSeen = false;
        bool dotSeen = false;
        bool exponentSeen = false;
        bool digitAfterExponent = true;

        for (int i = 0; i < s.length(); i++) {

            char c = s[i];

            // Case 1: Digit
            if (isdigit(c)) {

                digitSeen = true;

                if (exponentSeen) {
                    digitAfterExponent = true;
                }
            }

            // Case 2: Decimal point
            else if (c == '.') {

                // Dot cannot appear after exponent
                // and cannot appear more than once
                if (dotSeen || exponentSeen) {
                    return false;
                }

                dotSeen = true;
            }

            // Case 3: Exponent
            else if (c == 'e' || c == 'E') {

                // Exponent needs a number before it
                // and can appear only once
                if (exponentSeen || !digitSeen) {
                    return false;
                }

                exponentSeen = true;

                // We haven't seen a digit after exponent yet
                digitAfterExponent = false;
            }

            // Case 4: Sign
            else if (c == '+' || c == '-') {

                // Sign is valid only at the beginning
                // or immediately after e/E
                if (i != 0 && s[i - 1] != 'e' && s[i - 1] != 'E') {
                    return false;
                }
            }

            // Case 5: Anything else
            else {
                return false;
            }
        }

        // At least one digit must exist
        // and if exponent exists, it must have a digit after it
        return digitSeen && digitAfterExponent;
    }
};