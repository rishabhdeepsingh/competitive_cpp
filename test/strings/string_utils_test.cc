#include "src/strings/string_utils.h"

#include<gtest/gtest.h>

namespace rishabhdeep {
namespace competitive_cpp {
class StringUtilsTest : public ::testing::Test {
 protected:
  void SetUp() override {
  }

  void TearDown() override {
  }
};

TEST(StringUtilsTest, is_digit) {
  using namespace rishabhdeep::competitive;
  ASSERT_TRUE(StringUtils::is_digit('1'));
  ASSERT_TRUE(StringUtils::is_digit('0'));
  ASSERT_TRUE(StringUtils::is_digit('9'));
}
TEST(StringUtilsTest, is_not_digit) {
  using namespace rishabhdeep::competitive;
  ASSERT_FALSE(StringUtils::is_digit('a'));
  ASSERT_FALSE(StringUtils::is_digit('*'));
  ASSERT_FALSE(StringUtils::is_digit('?'));
}

TEST(StringUtilsTest, IsUpper) {
  using namespace rishabhdeep::competitive;
  ASSERT_TRUE(StringUtils::is_upper('A'));
  ASSERT_TRUE(StringUtils::is_upper('R'));
  ASSERT_TRUE(StringUtils::is_upper('Z'));
}

TEST(StringUtilsTest, IsNotUpper) {
  using namespace rishabhdeep::competitive;
  ASSERT_FALSE(StringUtils::is_upper('a'));
  ASSERT_FALSE(StringUtils::is_upper('r'));
  ASSERT_FALSE(StringUtils::is_upper('z'));
}
}
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
