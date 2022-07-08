//
// Created by WhiteKnife on 08/07/22.
//

#include "string_utils.h"
bool rishabhdeep::competitive::StringUtils::is_digit(char c) {
  return '0' <= c and c <= '9';
}

bool rishabhdeep::competitive::StringUtils::is_upper(char c) {
  return 'A' <= c and c <= 'Z';
}
