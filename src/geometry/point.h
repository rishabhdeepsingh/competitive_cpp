//
// Created by WhiteKnife on 10/07/22.
//

#ifndef COMPETITIVE_CPP_SRC_GEOMETRY_POINT_H_
#define COMPETITIVE_CPP_SRC_GEOMETRY_POINT_H_

namespace rishabhdeep {

namespace competitive_cpp {

template <typename T>
struct Point {
  T x{}, y{};

  Point() = default;
  Point(const Point &o) = default;
  Point &operator=(const Point &other) = default;
  explicit Point(T _x) : x(_x) {}
  explicit Point(T _x, T _y) : x(_x), y{_y} {}

  Point<T> operator+(Point<T>);
  Point<T> operator-(Point<T>);
  Point<T> &operator+=(Point<T>);
  Point<T> &operator-=(Point<T>);

  template <typename U>
  auto operator*(U o) -> Point<decltype(x + o)> {
    return Point<decltype(x + o)>(this->x * o, this->y * o);
  }

  Point<T> &operator*=(const Point<T>);
  Point<T> &operator/=(const Point<T>);
  Point<T> &operator%=(const Point<T>);
  Point<T> &operator%=(T o);

  static const Point<T> ZERO;
  static const Point<T> ONE;
  static const Point<T> TEN;

};
template <typename T>
Point<T> Point<T>::operator+(Point<T> o) {
  return Point<T>(this->x + o.x, this->y + o.y);
}
template <typename T>
Point<T> &Point<T>::operator+=(const Point<T> o) {
  this->x += o.x;
  this->y += o.y;
  return *this;
}
template <typename T>
Point<T> Point<T>::operator-(Point<T> o) {
  return Point<T>(this->x - o.x, this->y - o.y);
}
template <typename T>
Point<T> &Point<T>::operator-=(Point<T> o) {
  this->x -= o.x;
  this->y -= o.y;
  return *this;
}

template <typename T, typename U>
Point<T> operator*(U o, Point<T> p) {
  return p * o;
}

} // competitive_cpp
} // rishabhdeep

#endif //COMPETITIVE_CPP_SRC_GEOMETRY_POINT_H_