#include "Maths.hpp"
#include <math.h>

using namespace Core;

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
inline Maths::IVec2 Maths::IVec2::operator = (const float& _Sca)
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