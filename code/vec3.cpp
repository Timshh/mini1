#include "vec3.h"

Vec3::Vec3(float x, float y, float z) : x(x), y(y), z(z) {}

Vec3 Vec3::operator+(const Vec3& add) const {
  return Vec3(x + add.x, y + add.y, z + add.z);
}

Vec3 Vec3::operator-(const Vec3& rem) const {
  return Vec3(x - rem.x, y - rem.y, z - rem.z);
}

Vec3 Vec3::operator*(float mult) const {
  return Vec3(x * mult, y * mult, z * mult);
}

Vec3 Vec3::scalMult(const Vec3& mult) const {
  return Vec3(x * mult.x, y * mult.y, z * mult.z);
}

Vec3 Vec3::vecMult(const Vec3& mult) const {
  return Vec3(y * mult.z - z * mult.y, z * mult.x - x * mult.z,
              x * mult.y - y * mult.z);
}

float Vec3::length() const { return sqrt(x * x + y * y + z * z); }

Vec3 Vec3::normalize() const {
  float len = length();
  if (len == 0) {
    return Vec3(0, 0, 0);
  }
  return Vec3(x / len, y / len, z / len);
}

std::ostream& operator<<(std::ostream& os, const Vec3& v) {
  os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
  return os;
}
