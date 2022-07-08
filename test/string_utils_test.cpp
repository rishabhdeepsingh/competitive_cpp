

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
  using namespace rishabhdeep::competitive_cpp;
  ASSERT_TRUE(rishabhdeep::competitive_cpp::StringUtils::is_digit('1'));
//  ASSERT_TRUE(StringUtils::is_digit('0'));
//  ASSERT_TRUE(StringUtils::is_digit('9'));
}
}
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
