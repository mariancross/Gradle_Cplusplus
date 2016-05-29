#include <iostream>

#include "BlockSegmentation.h"

int main()
{
    std::cout << "This is a main" << std::endl;
    BlockSegmentation* seg = new BlockSegmentation();
    
    delete seg;
    seg = 0;
    
    return 0;
}
