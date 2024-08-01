#include <iostream>
#include <fstream>
#include <string>

void	Remplace_string(std::string &content, std::string s1, std::string s2)
{
	size_t	pos = 0;

	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.replace(pos, s1.length(), s2);
		pos += s2.length();
	}
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
	}
	std::string	buffer;
	std::string	file_name(av[1]);

	file_name.append(".replace");
	if (ac != 4)
		return (1);

	std::ifstream	read_file(av[1]);
	std::ofstream	write_file(file_name);
	if (!read_file.is_open() || !write_file.is_open())
	{
		std::cerr << "File issue" << std::endl;
		return (1);
	}
	std::string		content((std::istreambuf_iterator<char>(read_file) ), (std::istreambuf_iterator<char>()));
	Remplace_string(content, av[2], av[3]);
}
