#include <iostream>
#include <string>
#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
        return 1;
    }
    
    Harl harl;

    harl.complain(argv[1]);
}