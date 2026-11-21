#include <iostream>
#include <string>
#include <fstream>

std::string replaceOccurrences(std::string line, const std::string &s1, const std::string &s2)
{
    std::string result;
    size_t pos = 0;
    size_t prevPos = 0;

    while ((pos = line.find(s1, prevPos)) != std::string::npos)
    {
        result.append(line, prevPos, pos - prevPos);
        result += s2;
        prevPos = pos + s1.length();
    }
    result.append(line, prevPos, std::string::npos);
    return result;
}

void ReplaceInFile(std::string &filename, std::string &s1, std::string s2)
{
    std::ifstream ifs(filename.c_str());
    if (!ifs.is_open())
    {
        std::cerr << "Error : Could not open file" << filename << std::endl;
        return;
    }
    std::ofstream ofs((filename + ".replace").c_str());
    if (!ofs.is_open())
    {
        std::cerr << "Error : Could not create output file" << std::endl;
        ifs.close();
        return;
    }
    std::string line;
    while (std::getline(ifs, line))
    {
        ofs << replaceOccurrences(line, s1, s2);
        if (!ifs.eof())
            ofs << "\n";
    }
    ifs.close();
    ofs.close();
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Error : Wrong number of arguments" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    if (s1.empty())
    {
        std::cerr << "Error : S1 is empty" << std::endl;
        return (1);
    }
    std::string s2 = argv[3];
    ReplaceInFile(filename, s1, s2);
    return (0);
}