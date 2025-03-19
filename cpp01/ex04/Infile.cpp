#include "Infile.hpp"

Infile::Infile(const char* name, char *find, char *replace) : filename(name), file(name), find(find), replace(replace)
{
    if (file.fail())
    {
        std::cerr << "Error while opening file\n";
        exit(1);
    }
}

Infile::~Infile()
{

}

std::ifstream* Infile::GetFile()
{
    return &file;
}

char* Infile::GetFind()
{
    return find;
}

char* Infile::GetToReplace()
{
    return replace;
}

void Infile::CloseFile()
{
    file.close();
}
