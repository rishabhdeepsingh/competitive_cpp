//
// Created by WhiteKnife on 10/07/22.
//
#include "src/geometry/point.h"

#include <gtest/gtest.h>

namespace rishabhdeep {

namespace competitive_cpp {

TEST(Point, Initialization) {
  rishabhdeep::competitive_cpp::Point<int> p;
  ASSERT_EQ(p.x, 0);
  ASSERT_EQ(p.y, 0);

  rishabhdeep::competitive_cpp::Point<int> q(1);
  ASSERT_EQ(q.x, 1);
  ASSERT_EQ(q.y, 0);

  rishabhdeep::competitive_cpp::Point<int> r(1, 2);
  ASSERT_EQ(r.x, 1);
  ASSERT_EQ(r.y, 2);
}

TEST(Point, Additions) {
  using namespace rishabhdeep::competitive_cpp;
  Point<int> p(1, 2);
  Point<int> q(3, 4);
  Point<int> r = p + q;
  ASSERT_EQ(r.x, 4);
  ASSERT_EQ(r.y, 6);
  ASSERT_EQ(p.x, 1);
  ASSERT_EQ(p.y, 2);
  ASSERT_EQ(q.x, 3);
  ASSERT_EQ(q.y, 4);
}

TEST(Point, AdditonEqual) {
  using namespace rishabhdeep::competitive_cpp;
  Point<int> p(1, 2);
  Point<int> q(3, 4);
  p += q;
  ASSERT_EQ(p.x, 4);
  ASSERT_EQ(p.y, 6);
  ASSERT_EQ(q.x, 3);
  ASSERT_EQ(q.y, 4);
}

TEST(Point, Subtraction) {
  using namespace rishabhdeep::competitive_cpp;
  Point<int> p(3, 4);
  Point<int> q(1, 2);
  Point<int> r = p - q;
  ASSERT_EQ(r.x, 2);
  ASSERT_EQ(r.y, 2);
  ASSERT_EQ(p.x, 3);
  ASSERT_EQ(p.y, 4);
  ASSERT_EQ(q.x, 1);
  ASSERT_EQ(q.y, 2);
}

TEST(Point, SubtractEqual) {
  using namespace rishabhdeep::competitive_cpp;
  Point<int> p(3, 4);
  Point<int> q(1, 2);
  p -= q;
  ASSERT_EQ(p.x, 2);
  ASSERT_EQ(p.y, 2);
  ASSERT_EQ(q.x, 1);
  ASSERT_EQ(q.y, 2);
}

TEST(Point, NegativeOperator) {
  using namespace rishabhdeep::competitive_cpp;
  Point<int> p(3, 4);
  Point<int> q = -p;
  ASSERT_EQ(p.x, 3);
  ASSERT_EQ(p.y, 4);
  ASSERT_EQ(q.x, -3);
  ASSERT_EQ(q.y, -4);
}

TEST(Point, MultiplyScalar) {
  using namespace rishabhdeep::competitive_cpp;
  Point<int> p(3, 4);
  int q = 3;
  Point<int> r = p * q;
  ASSERT_EQ(r.x, 9);
  ASSERT_EQ(r.y, 12);
  ASSERT_EQ(p.x, 3);
  ASSERT_EQ(p.y, 4);
  // commutative property
  r = q * p;
  ASSERT_EQ(r.x, 9);
  ASSERT_EQ(r.y, 12);
  ASSERT_EQ(p.x, 3);
  ASSERT_EQ(p.y, 4);
}

TEST(Point, MultiplyScalarInplace) {
  using namespace rishabhdeep::competitive_cpp;
  Point<int> p(3, 4);
  const int q = 3;
  p *= q;
  ASSERT_EQ(p.x, 9);
  ASSERT_EQ(p.y, 12);
}

TEST(Point, MultiplyPoint) {
  using namespace rishabhdeep::competitive_cpp;
  Point<int> p(3, 4);
  Point<int> q(7, 11);
  Point<int> r = p * q;
  ASSERT_EQ(r.x, 21);
  ASSERT_EQ(r.y, 44);
  ASSERT_EQ(p.x, 3);
  ASSERT_EQ(p.y, 4);
  // commutative property
  r = q * p;
  ASSERT_EQ(r.x, 21);
  ASSERT_EQ(r.y, 44);
  ASSERT_EQ(p.x, 3);
  ASSERT_EQ(p.y, 4);
}

TEST(Point, MultiplyPointInplace) {
  using namespace rishabhdeep::competitive_cpp;
  Point<int> p(3, 4);
  Point<int> q(7, 11);
  p *= q;
  ASSERT_EQ(p.x, 21);
  ASSERT_EQ(p.y, 44);
  ASSERT_EQ(q.x, 7);
  ASSERT_EQ(q.y, 11);
}

TEST(Point, DivideScalarInplace) {
  using namespace rishabhdeep::competitive_cpp;
  Point<int> p(9, 12);
  const int q = 3;
  p /= q;
  ASSERT_EQ(p.x, 3);
  ASSERT_EQ(p.y, 4);
}

TEST(Point, DividePoint) {
  using namespace rishabhdeep::competitive_cpp;
  const Point<int> p(21, 44);
  const Point<int> q(7, 11);
  Point<int> r = p / q;
  ASSERT_EQ(r.x, 3);
  ASSERT_EQ(r.y, 4);
  ASSERT_EQ(p.x, 21);
  ASSERT_EQ(p.y, 44);
  ASSERT_EQ(q.x, 7);
  ASSERT_EQ(q.y, 11);
}

TEST(Point, DividePointInplace) {
  using namespace rishabhdeep::competitive_cpp;
  Point<int> p(21, 44);
  const Point<int> q(7, 11);
  p /= q;
  ASSERT_EQ(p.x, 3);
  ASSERT_EQ(p.y, 4);
  ASSERT_EQ(q.x, 7);
  ASSERT_EQ(q.y, 11);
}

} // namespace competitive_cpp
} // namespace rishabhdeep
