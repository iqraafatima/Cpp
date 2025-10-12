/*leetcode 520*/
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int i;
    bool detectCapitalUse(string word) {
        int n = word.length();
        if (n == 1)
            return true;

        if (word[0] <= 122 && word[0] >= 97) {
            for (i = 0; i < n; i++) {
                if (word[i] <= 122 && word[i] >= 97) {
                    cout << "TRUE";
                    return true;
                }
                else
                return false;
            }
        }

        if (word[0] <= 90 && word[0] >= 65) {
            if (word[1] <= 90 && word[1] >= 65) {
                for (i = 2; i < n; i++) {
                    if (word[i] <= 90 && word[i] >= 65) {
                        cout << "true";
                        return true;
                    }
                    else
                    return false;
                }
            }

            else if (word[1] <= 122 && word[1] >= 97) {
                for (i = 1; i < n; i++) {
                    if (word[i] <= 122 && word[i] >= 97) {
                        cout << "TRUE";
                        return true;
                    }
                    else 
                    return false;
                }
            }
        }

        return false;  // added return statement for all code paths
    }
};
int main(){
    Solution obj;
    obj.detectCapitalUse("FlaG");
}