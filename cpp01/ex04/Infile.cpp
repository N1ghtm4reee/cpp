#include "Infile.hpp"

Infile::Infile(const char* name, char *find, char *replace) : file(name), find(find), replace(replace)
{
    if (file.fail())
    {
        std::cerr << "Error while opening file\n";
        exit(1);
    }
}

Infile::~Infile()
{
    CloseFile();
}

std::ifstream* Infile::GetFile()
{
    return &file;
}

const char* Infile::GetFind()
{
    return find;
}

const char* Infile::GetToReplace()
{
    return replace;
}

void Infile::CloseFile()
{
    file.close();
}
