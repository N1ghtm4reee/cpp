#include "Infile.hpp"
#include "Outfile.hpp"

void Replace(Infile* Infile, Outfile* Outfile)
{
    std::string to_find = Infile->GetFind();
    std::string to_replace = Infile->GetToReplace();
    std::string line;
    while (std::getline(*Infile->GetFile(), line))
    {
        size_t i;
        while ((i = line.find(to_find)) != std::string::npos)
        {
            line.erase(i, to_find.length());
            line.insert(i, to_replace);
        }
        *Outfile->GetFile() << line << "\n";
    }
}

int main(int ac, char **av)
{
    if (ac != 4)
        return 1;
    remove("newfile");
    Infile Infile((const char *)av[1], av[2], av[3]);
    Outfile NewFile("newfile", Infile);
    Replace(&Infile, &NewFile);
}
