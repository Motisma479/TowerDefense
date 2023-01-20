#include "Maths.hpp"
#include <math.h>

using namespace Core;

#pragma region Vec2
//CONSTRUCTORS
inline Maths::Vec2::Vec2(void) : x(0), y(0) {}
inline Maths::Vec2::Vec2(const float& xy) : x(xy), y(xy) {}
inline Maths::Vec2::Vec2(const float& x, const float& y) : x(x), y(y) {}
inline Maths::Vec2::Vec2(const Vec2& _Vec2) : x(_Vec2.x), y(_Vec2.y) {}

//DESTRUCTOR
inline Maths::Vec2::~Vec2(void) {}

//UTILS
inline float Maths::Vec2::GetMagnitude()
{
	return (float)sqrt((x * x) + (y * y));
}
inline void Maths::Vec2::Normalize()
{
	operator/=(GetMagnitude());
	//x /= GetMagnitude();
	//y /= GetMagnitude();
}
inline float Maths::Vec2::DotProduct(const Vec2& _VecB)
{
	return (float)(x * _VecB.x + y * _VecB.y);
}
inline float Maths::Vec2::DotProduct(const Vec2& _VecA, const Vec2& _VecB)
{
	return (float)(_VecA.x * _VecB.x + _VecA.y * _VecB.y);
}
inline float* Maths::Vec2::ToFloat2()
{
	return &x;
}

//ASSINGMENT AND EQUALITY OPERATIONS
inline Maths::Vec2 Maths::Vec2::operator = (const Vec2& _Vec)
{
	x = _Vec.x;
	y = _Vec.y;
	return *this;
}
inline Maths::Vec2 Maths::Vec2::operator = (const float& _Sca)
{
	x = _Sca;
	y = _Sca;
	return *this;
}

inline Maths::Vec2 Maths::Vec2::operator - (void)		const
{
	return (Vec2)(-x, -y);
}
inline bool Maths::Vec2::operator == (const Vec2& _Vec)	const
{
	return (x == _Vec.x) && (y == _Vec.y);
}
inline bool Maths::Vec2::operator != (const Vec2& _Vec)	const
{
	return (x != _Vec.x) || (y != _Vec.y);
}
inline bool Maths::Vec2::operator <= (const Vec2& _Vec)	const
{
	return (x <= _Vec.x) && (y <= _Vec.y);
}
inline bool Maths::Vec2::operator >= (const Vec2& _Vec)	const
{
	return (x >= _Vec.x) && (y >= _Vec.y);
}
//Vec2 TO Vec2 OPERATIONS
inline Maths::Vec2 Maths::Vec2::operator + (const Vec2& _Vec) const
{
	return Vec2(x + _Vec.x, y + _Vec.y);
}
inline Maths::Vec2 Maths::Vec2::operator - (const Vec2& _Vec) const
{
	return Vec2(x - _Vec.x, y - _Vec.y);
}
inline Maths::Vec2 Maths::Vec2::operator * (const Vec2& _Vec) const
{
	return Vec2(x * _Vec.x, y * _Vec.y);
}
inline Maths::Vec2 Maths::Vec2::operator / (const Vec2& _Vec) const
{
	return Vec2(x / _Vec.x, y / _Vec.y);
}

//Vec2 TO THIS OPERATIONS
inline Maths::Vec2 Maths::Vec2::operator += (const Vec2& _Vec)
{
	x += _Vec.x;
	y += _Vec.y;
	return *this;
}
inline Maths::Vec2 Maths::Vec2::operator -= (const Vec2& _Vec)
{
	x -= _Vec.x;
	y -= _Vec.y;
	return *this;
}
inline Maths::Vec2 Maths::Vec2::operator *= (const Vec2& _Vec)
{
	x *= _Vec.x;
	y *= _Vec.y;
	return *this;
}
inline Maths::Vec2 Maths::Vec2::operator /= (const Vec2& _Vec)
{
	x /= _Vec.x;
	y /= _Vec.y;
	return *this;
}

//SCALER TO Vec2 OPERATIONS
inline Maths::Vec2 Maths::Vec2::operator + (const float& _Sca) const
{
	return Vec2(x + _Sca, y + _Sca);
}
inline Maths::Vec2 Maths::Vec2::operator - (const float& _Sca) const
{
	return Vec2(x - _Sca, y - _Sca);
}
inline Maths::Vec2 Maths::Vec2::operator * (const float& _Sca) const
{
	return Vec2(x * _Sca, y * _Sca);
}
inline Maths::Vec2 Maths::Vec2::operator / (const float& _Sca) const
{
	return Vec2(x / _Sca, y / _Sca);
}

//SCALER TO THIS OPERATIONS
inline Maths::Vec2 Maths::Vec2::operator += (const float& _Sca)
{
	x += _Sca;
	y += _Sca;
	return *this;
}
inline Maths::Vec2 Maths::Vec2::operator -= (const float& _Sca)
{
	x -= _Sca;
	y -= _Sca;
	return *this;
}
inline Maths::Vec2 Maths::Vec2::operator *= (const float& _Sca)
{
	x *= _Sca;
	y *= _Sca;
	return *this;
}
inline Maths::Vec2 Maths::Vec2::operator /= (const float& _Sca)
{
	x /= _Sca;
	y /= _Sca;
	return *this;
}
#pragma endregion Vec2
#pragma region IVec2
//CONSTRUCTORS
inline Maths::IVec2::IVec2(void) : x(0), y(0) {}
inline Maths::IVec2::IVec2(const int& xy) : x(xy), y(xy) {}
inline Maths::IVec2::IVec2(const int& x, const int& y) : x(x), y(y) {}
inline Maths::IVec2::IVec2(const IVec2& _IVec2) : x(_IVec2.x), y(_IVec2.y) {}

//DESTRUCTOR
inline Maths::IVec2::~IVec2(void) {}

//ASSINGMENT AND EQUALITY OPERATIONS
inline Maths::IVec2 Maths::IVec2::operator = (const IVec2& _IVec)
{
	x = _IVec.x;
	y = _IVec.y;
	return *this;
}
inline Maths::IVec2 Maths::IVec2::operator = (const int& _Sca)
{
	x = _Sca;
	y = _Sca;
	return *this;
}

inline Maths::IVec2 Maths::IVec2::operator - (void)		const
{
	return (IVec2)(-x, -y);
}
inline bool Maths::IVec2::operator == (const IVec2& _IVec)	const
{
	return (x == _IVec.x) && (y == _IVec.y);
}
inline bool Maths::IVec2::operator != (const IVec2& _IVec)	const
{
	return (x != _IVec.x) || (y != _IVec.y);
}

//Vec2 TO Vec2 OPERATIONS
inline Maths::IVec2 Maths::IVec2::operator + (const IVec2& _IVec) const
{
	return IVec2(x + _IVec.x, y + _IVec.y);
}
inline Maths::IVec2 Maths::IVec2::operator - (const IVec2& _IVec) const
{
	return IVec2(x - _IVec.x, y - _IVec.y);
}
inline Maths::IVec2 Maths::IVec2::operator * (const IVec2& _IVec) const
{
	return IVec2(x * _IVec.x, y * _IVec.y);
}
inline Maths::IVec2 Maths::IVec2::operator / (const IVec2& _IVec) const
{
	return IVec2(x / _IVec.x, y / _IVec.y);
}

//Vec2 TO THIS OPERATIONS
inline Maths::IVec2 Maths::IVec2::operator += (const IVec2& _IVec)
{
	x += _IVec.x;
	y += _IVec.y;
	return *this;
}
inline Maths::IVec2 Maths::IVec2::operator -= (const IVec2& _IVec)
{
	x -= _IVec.x;
	y -= _IVec.y;
	return *this;
}
inline Maths::IVec2 Maths::IVec2::operator *= (const IVec2& _IVec)
{
	x *= _IVec.x;
	y *= _IVec.y;
	return *this;
}
inline Maths::IVec2 Maths::IVec2::operator /= (const IVec2& _IVec)
{
	x /= _IVec.x;
	y /= _IVec.y;
	return *this;
}

//SCALER TO Vec2 OPERATIONS
inline Maths::IVec2 Maths::IVec2::operator + (const int& _Sca) const
{
	return IVec2(x + _Sca, y + _Sca);
}
inline Maths::IVec2 Maths::IVec2::operator - (const int& _Sca) const
{
	return IVec2(x - _Sca, y - _Sca);
}
inline Maths::IVec2 Maths::IVec2::operator * (const int& _Sca) const
{
	return IVec2(x * _Sca, y * _Sca);
}
inline Maths::IVec2 Maths::IVec2::operator / (const int& _Sca) const
{
	return IVec2(x / _Sca, y / _Sca);
}

//SCALER TO THIS OPERATIONS
inline Maths::IVec2 Maths::IVec2::operator += (const int& _Sca)
{
	x += _Sca;
	y += _Sca;
	return *this;
}
inline Maths::IVec2 Maths::IVec2::operator -= (const int& _Sca)
{
	x -= _Sca;
	y -= _Sca;
	return *this;
}
inline Maths::IVec2 Maths::IVec2::operator *= (const int& _Sca)
{
	x *= _Sca;
	y *= _Sca;
	return *this;
}
inline Maths::IVec2 Maths::IVec2::operator /= (const int& _Sca)
{
	x /= _Sca;
	y /= _Sca;
	return *this;
}
#pragma endregion IVec2