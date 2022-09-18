#include "strings.hpp"

namespace soda {

std::vector<std::string> split_string(const std::string& str, char delim)
{
  int p = 0;
  int c = 0;

  std::vector<std::string> result;

  c = str.find(delim);
  while (c != std::string::npos)
  {
    c = str.find(delim);
    auto sub = str.substr(p, c - p);
    result.push_back(sub);
  }

  return result;
}

}
