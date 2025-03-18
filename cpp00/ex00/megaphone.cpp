#include <iostream>
#include <string>

int main(int ac, char **av)
{
	std::string s;
	std::string tmp;

    if (ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
	else {
		for (int i = 1; i < ac; i++)
		{
			tmp = av[i];
			for(size_t j = 0; j < tmp.size() ; j++)
				tmp[j] = toupper(tmp[j]);
			s += tmp;
		}
		std::cout << s << std::endl;
	}
}
