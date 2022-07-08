#include<algorithm>
#include<sstream>
#include<vector>

namespace rishabhdeep {
namespace competitive_cpp {

class StringUtils {
 public:
  static bool is_digit(char x) { return x >= '0' && x <= '9'; }
  static bool is_upper(char x) { return x >= 'A' && x <= 'Z'; }
  static bool is_lower(char x) { return x >= 'a' && x <= 'z'; }
  static bool is_char(char x) { return x == '!' || x == '@' || x == '#' || x == '$' || x == '%' || x == '&'; }

  static void to_upper(std::string &s) { transform(s.begin(), s.end(), s.begin(), ::toupper); }
  static void to_lower(std::string &s) { transform(s.begin(), s.end(), s.begin(), ::tolower); }

 private:
  template <typename Out>
  static void split(const std::string &s, char delim, Out result) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
      *(result++) = item;
    }
  }

/*
 * Note that this solution does not skip empty tokens, so the following
 * will find 4 items, one of which is empty:
 * std::vector<std::string> x = split("one:two::three", ':');
 */
 public:
  static std::vector<std::string> split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, std::back_inserter(elems));
    return elems;
  }

};
}
}

