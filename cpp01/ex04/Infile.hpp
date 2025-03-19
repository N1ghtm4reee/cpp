#ifndef INFILE_HPP
#define INFILE_HPP

#include <string>
#include <fstream>
#include <iostream>

class Infile {
    private :
        const char* filename;
        std::ifstream file;
        char *find;
        char *replace;
    public :
        Infile(const char* name, char *find, char *replace);
        ~Infile();
        std::ifstream* GetFile();
        char* GetFind();
        char* GetToReplace();
        void CloseFile();
};

#endif