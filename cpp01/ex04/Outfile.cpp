#include "Outfile.hpp"

Outfile::Outfile(const char* name) : filename(name), file(name)
{
    if (file.fail())
    {
        std::cerr << "Error while opening file\n";
        exit(1);
    }
}

Outfile::~Outfile()
{

}

std::ofstream* Outfile::GetFile()
{
    return &file;
}

void Outfile::CloseFile()
{
    file.close();
}
