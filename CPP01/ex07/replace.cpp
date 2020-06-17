#include <iostream>
#include <string>
#include <fstream>

std::string replace_line(std::string line, char *chr, char *rpl)
{
    std::string tosearch(chr);
    std::string replace(rpl);

    size_t pos = line.find(tosearch);
    while (pos != std::string::npos)
    {
        line.replace(pos, tosearch.size(), replace);
        pos = line.find(tosearch, pos + replace.size());
    }
    return (line);
}

int sed_for_looser(char *cfile, char *s, char *r)
{
    std::string line;
    std::string buffer;
    std::string newfile = std::string(cfile) + std::string(".replace");
    std::ifstream file(cfile);
    std::ofstream file_replace(newfile);

    if (!(file.is_open()) || !(file_replace.is_open()))
        return (-1);

    while ((std::getline(file, line)))
    {
        line = replace_line(line, s, r);
        file_replace << line << std::endl;
    }
    file_replace.close();
    file.close();
}


int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: arguments: " << argc - 1 << " | expected: 3" << std::endl;
        return (1);
    }
    else if (sed_for_looser(argv[1], argv[2], argv[3]) == -1)
    {
        std::cout << "Cant open file" << std::endl;
        return (1);
    }

    return (0);
}