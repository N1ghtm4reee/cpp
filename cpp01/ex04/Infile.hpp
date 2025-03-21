#ifndef INFILE_HPP
#define INFILE_HPP

#include <string>
#include <fstream>
#include <iostream>
#include <cstdlib>

class Infile {
    private :
        std::ifstream file;
        char *find;
        char *replace;
    public :
        Infile(const char* name, char *find, char *replace);
        ~Infile();
        std::ifstream* GetFile();
        const char* GetFind();
        const char* GetToReplace();
        void CloseFile();
};

#endif