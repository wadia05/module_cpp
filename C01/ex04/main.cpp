#include "main.hpp"
int main (int ac , char **av)
{
    if(ac != 4)
        return (std::cout << "errror input argument"<< std::endl, 1);
    
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ifstream inputfile(filename.c_str());
    if (!inputfile.is_open())
    {
        std::cerr << "Error: cannot open input file: " << filename << std::endl;
        return 1;
    }
     
    if (s1.empty())
    {
        std::cerr << "Error: string to replace cannot be empty" << std::endl;
        return 1;
    }

    std::string outname = filename + ".replace";
    std::ofstream outputfile(outname.c_str());

    if(!outputfile.is_open())
    {
        std::cerr << "Error: cannot open output file: " << filename << std::endl;
        return 1;
    }

    std::string rp_line;
    size_t offset;

    while(std::getline(inputfile, rp_line))
    {
        offset = 0;
        while ((offset = rp_line.find(s1,offset)) != std::string::npos)
        {
            rp_line = rp_line.substr(0,offset) + s2 + rp_line.substr (offset + s1.length());
            offset += s2.length();
        }
        outputfile << rp_line;
        if(!inputfile.eof())
        {
            outputfile << std::endl;
        }
    }
    inputfile.close();
    outputfile.close();
    return 0;
}