#include <iostream>



class patternSearch {

    char* pattern;
    char* text;

public: void search(char *pattern,char *text) {
        int txt = strlen(text);
        int pat = strlen(pattern);

        for (int i = 0; i <= txt - pat; i++) {
            for (int j = 0; j < pat; j++) {
                if (text[i + j] != pattern[j]) {
                    break;
                }
                if(j = pat) {
                    std::cout << "Pattern found" << i << std::endl;
                }
            }
        }

    }


};


int main() {

    char text[] = "asaaddfsdfasd";
    char pat[] = "abs";
    int index = 5;

    patternSearch pattern1;
    pattern1.search(pat , text);

    return 0;
}
