#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

void write_replace(std::string line, std::string s1, std::string s2, std::ofstream &newfile)
{
  size_t pos = 0;
  size_t current = 0;
  while ((pos = line.find(s1, pos)) != std::string::npos)
  {
    if (pos > current)
    {
      newfile << line.substr(current, pos - current);
    }
    newfile << s2;
    pos += s1.length();
    current = pos;
  }
  if (current < line.length())
  {
    newfile << line.substr(current, line.length() - current);
  }
  newfile << std::endl;
}

int main(int argc, char **argv)
{
  if (argc != 4)
  {
    std::cerr << "Usage: " << argv[0] << " <filename> <string1> <replaceString>" << std::endl;
    return 1;
  }
  if (strcmp(argv[2], "") == 0)
	return 0;  
  std::string filename = argv[1];
  std::string s1 = argv[2];
  std::string s2 = argv[3];

  std::ifstream file(filename.c_str());
  if (!file.is_open())
  {
    std::cerr << "Error: could not open file " << filename << std::endl;
    return 1;
  }
  std::string line;
  std::ofstream newfile((filename + ".replace").c_str());
  if (!newfile.is_open())
  {
    std::cerr << "Error: could not create file " << filename + ".replace" << std::endl;
    return 1;
  }
  while (std::getline(file, line))
  {
    write_replace(line, s1, s2, newfile);
  }
  file.close();
  newfile.close();
}
