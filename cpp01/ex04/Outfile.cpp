#include "Outfile.hpp"
#include "Infile.hpp"

Outfile::Outfile(const char* name, Infile& infilePtr) : file(name), infilePtr(infilePtr)
{
    if (file.fail())
    {
        std::cerr << "Error while opening file\n";
        infilePtr.GetFile()->close();
        exit(1);
    }
}

Outfile::~Outfile()
{
    infilePtr.GetFile()->close();
    CloseFile();
}

std::ofstream* Outfile::GetFile()
{
    return &file;
}

void Outfile::CloseFile()
{
    file.close();
}
