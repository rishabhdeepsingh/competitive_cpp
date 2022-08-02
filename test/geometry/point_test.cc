//
// Created by WhiteKnife on 10/07/22.
//
#include "src/geometry/point.h"

#include <gtest/gtest.h>

namespace rishabhdeep {

namespace competitive_cpp {
using namespace rishabhdeep::competitive_cpp;

TEST(Point, Initialization) {
    Point<int> p;
    ASSERT_EQ(p, Point<int>(0, 0));

    Point<int> q(1);
    ASSERT_EQ(q, Point<int>(1, 0));

    Point<int> r(1, 2);
    ASSERT_EQ(r, Point<int>(1, 2));
}

TEST(Point, Additions) {
    const Point<int> p(1, 2);
    const Point<int> q(3, 4);
    Point<int> r = p + q;
    ASSERT_EQ(r, Point<int>(4, 6));
}

TEST(Point, AdditonEqual) {
    Point<int> p(1, 2);
    const Point<int> q(3, 4);
    p += q;
    ASSERT_EQ(p, Point<int>(4, 6));
}

TEST(Point, Subtraction) {
    const Point<int> p(3, 4);
    const Point<int> q(1, 2);
    Point<int> r = p - q;
    ASSERT_EQ(r, Point<int>(2, 2));
}

TEST(Point, SubtractEqual) {
    Point<int> p(3, 4);
    const Point<int> q(1, 2);
    p -= q;
    ASSERT_EQ(p, Point<int>(2, 2));
}

TEST(Point, NegativeOperator) {
    const Point<int> p(3, 4);
    Point<int> q = -p;
    ASSERT_EQ(q, Point<int>(-3, -4));
}

TEST(Point, MultiplyScalar) {
    const Point<int> p(3, 4);
    const int q = 3;
    Point<int> r = p * q;
    ASSERT_EQ(r, Point<int>(9, 12));
    // commutative property
    r = q * p;
    ASSERT_EQ(r, Point<int>(9, 12));
}

TEST(Point, MultiplyScalarInplace) {
    Point<int> p(3, 4);
    const int q = 3;
    p *= q;
    ASSERT_EQ(p, Point<int>(9, 12));
}

TEST(Point, MultiplyPoint) {
    const Point<int> p(3, 4);
    const Point<int> q(7, 11);
    Point<int> r = p * q;
    ASSERT_EQ(r, Point<int>(21, 44));
    // commutative property
    r = q * p;
    ASSERT_EQ(r, Point<int>(21, 44));
}

TEST(Point, MultiplyPointInplace) {
    Point<int> p(3, 4);
    const Point<int> q(7, 11);
    p *= q;
    ASSERT_EQ(p.x, 21);
    ASSERT_EQ(p.y, 44);
}

TEST(Point, DivideScalarInplace) {
    Point<int> p(9, 12);
    const int q = 3;
    p /= q;
    ASSERT_EQ(p.x, 3);
    ASSERT_EQ(p.y, 4);
}

TEST(Point, DividePoint) {
    const Point<int> p(21, 44);
    const Point<int> q(7, 11);
    Point<int> r = p / q;
    ASSERT_EQ(r.x, 3);
    ASSERT_EQ(r.y, 4);
}

TEST(Point, DividePointInplace) {
    Point<int> p(21, 44);
    const Point<int> q(7, 11);
    p /= q;
    ASSERT_EQ(p, Point<int>(3, 4));
    ASSERT_EQ(q, Point<int>(7, 11));
}

TEST(Point, ModuloScalarInplace) {
    Point<int> p(4, 2);
    const int q = 3;
    p %= q;
    ASSERT_EQ(p, Point<int>(1, 2));
}

TEST(Point, ModuloPoint) {
    const Point<int> p(4, 7);
    const Point<int> q(3, 5);
    Point<int> r = p % q;
    ASSERT_EQ(r, Point<int>(1, 2));
}

TEST(Point, ModuloPointInplace) {
    Point<int> p(22, 46);
    const Point<int> q(7, 11);
    p %= q;
    ASSERT_EQ(p, Point<int>(1, 2));
}

} // namespace competitive_cpp
} // namespace rishabhdeep
