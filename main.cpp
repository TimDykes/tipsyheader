#include <string>
#include <fstream>
#include "tipsy_file.h"

int main(int argc, char** argv)
{
    // Check arguments
    if(argc != 2)
    {
        printf("Usage: ./tipsy_header infilename\nExiting...\n");
        exit(0);
    }
    
    // Open tipsy file, read and print header, close it again
    std::string infile(argv[1]);
    TipsyFile file(infile.c_str());
    file.read_header();
    file.report_header();
    file.close();

    return 0;
}

