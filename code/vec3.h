#pragma once
#include <cmath>
#include <ostream>

#ifdef VEC3LIB_EXPORTS
#define VEC3_API __declspec(dllexport)
#else
#define VEC3_API __declspec(dllimport)
#endif

struct VEC3_API Vec3 {
 public:
  Vec3(float x, float y, float z);
  Vec3 operator+(const Vec3& add) const;
  Vec3 operator-(const Vec3& rem) const;
  Vec3 operator*(float mult) const;
  float scalMult(const Vec3& mult) const;
  Vec3 vecMult(const Vec3& mult) const;
  float length() const;
  Vec3 normalize() const;
  friend VEC3_API std::ostream& operator<<(std::ostream& os, const Vec3& v);

 private:
  float x, y, z;
};
