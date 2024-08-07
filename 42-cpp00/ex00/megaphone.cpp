#include <string>
#include <iostream>

int main(int argc, char* argv[]) {

    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            std::string str = argv[i];
            for (size_t j = 0; j < str.length(); j++)
            {
                std::cout << (char)toupper(str[j]);
            }
            if (i != argc - 1)
                    std::cout << " ";
        }
    }
    return 0;
}