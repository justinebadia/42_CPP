#include "Replace.hpp"
//copier filename dans filename.replace

int main (int argc, char **argv)
{
    std::string str;
    
    if (argc != 4)
        return (1);

    ifstream filename(argv[1].c_str());
    ofstream filename_replace(., ios::app);
    if (!filename || !filename_replace)
        return (1);
    while (getline(filename, str))
    {
        for(int i = 0; i < str.size(); i++)
        {
            //je remplace s1 par s2 dans str

        }
    }
    
}