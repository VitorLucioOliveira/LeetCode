class Solution {
private:
    int mdc(int dividendo, int divisor)
    {   
            while(dividendo % divisor != 0){
                int resto = dividendo % divisor;
                dividendo = divisor;
                divisor =  resto;
            }

            return divisor;
    }

public:
    string gcdOfStrings(string str1, string str2) {
        
        if (str1 + str2 != str2 + str1) {
            return "";
        }

        int dentro_length = mdc(str1.size(), str2.size());

        return str1.substr(0, dentro_length);
    }
};

