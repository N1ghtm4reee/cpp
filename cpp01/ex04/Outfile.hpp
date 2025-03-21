#ifndef OUTFILE_HPP
#define OUTFILE_HPP

#include "Infile.hpp"

class Outfile {
    private :
        std::ofstream file;
        Infile& infilePtr;
    public :
        Outfile(const char* name, Infile& infilePtr);
        ~Outfile();
        std::ofstream* GetFile();
        void CloseFile();
};


#endif