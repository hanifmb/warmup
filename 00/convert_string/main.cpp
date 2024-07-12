#include <iostream>
#include <cstring> 
#include <cctype>

int main(int argc, char* argv[]) {

    if(argc < 2){
        std::cout << "Please input text message!\n";
        return 0;
    }

    // Acquiring the full string 
    std::string str;
    for (int i = 2; i < argc; ++i) {
        str += std::string(argv[i]);
        if (i < argc - 1) {
            str += " ";  
        }
    }

    if (strcmp(argv[1], "up") == 0){
        // Iterate through every char and convert to capital if it is an alphabet
        for (size_t i = 0; i < str.length(); ++i) {
            if (std::isalpha(str[i])) {
                str[i] = std::toupper(str[i]);
            }
        }
    } 
    else if(strcmp(argv[1], "down") == 0)
    {
        // Iterate through every char and convert to non-capital if it is an alphabet
        for (size_t i = 0; i < str.length(); ++i) {
            if (std::isalpha(str[i])) {
                str[i] = std::tolower(str[i]);
            }
        }
    }
    else{
        std::cout << "Command is not recognized!\n";
    }

    std::cout << str;
    return 0;
}
