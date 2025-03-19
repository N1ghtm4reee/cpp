#ifndef OUTFILE_HPP
#define OUTFILE_HPP

#include <iostream>
#include <string>
#include <fstream>

class Outfile {
    private :
        const char* filename;
        std::ofstream file;
    public :
        Outfile(const char* name);
        ~Outfile();
        std::ofstream* GetFile();
        void CloseFile();
};


#endif