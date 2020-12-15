bool isLongPressedName(string name, string typed) {
    int pos = 0;
    for(int i = 0; i < typed.size(); i++){
        if(name[pos] == typed[i]){
            pos++;
        } else if(pos == 0 || name[pos - 1] != typed[i]){
            pos = 0;
        }
    }
    return pos == (name.size() - 1);
}

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j = 0;
        while (j < typed.length()) {
            if (i < name.length() && name[i] == typed[j]) {
                i++;
                j++;
            } else if (j > 0 && typed[j] == typed[j - 1]) {
                j++;
            } else {
                return false;
            }
        }
        return i == name.length();
    }
};
