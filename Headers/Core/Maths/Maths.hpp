#pragma once
namespace Core::Maths
{
    class Vec2
    {
    public:
        //MEMBERS
        float x, y;

        //CONSTRUCTORS
        inline Vec2(void);
        inline Vec2(const float& xy);
        inline Vec2(const float& x, const float& y);
        inline Vec2(const Vec2& _Vec2);

        //DESTRUCTOR
        inline ~Vec2(void);

        //UTILS
        inline float GetMagnitude();
        inline void Normalize();
        inline float DotProduct(const Vec2& _VecB);
        static float DotProduct(const Vec2& _VecA, const Vec2& _VecB);
        inline float* ToFloat2();

        //ASSINGMENT AND EQUALITY OPERATIONS
        inline Vec2 operator = (const Vec2& _Vec);
        inline Vec2 operator = (const float& _Sca);

        inline Vec2 operator - (void)               const;
        inline bool operator == (const Vec2& _Vec)  const;
        inline bool operator != (const Vec2& _Vec)  const;
        inline bool operator <= (const Vec2& _Vec)  const;
        inline bool operator >= (const Vec2& _Vec)  const;

        //Vec2 TO Vec2 OPERATIONS
        inline Vec2 operator + (const Vec2& _Vec)   const;
        inline Vec2 operator - (const Vec2& _Vecv)  const;
        inline Vec2 operator * (const Vec2& _Vec)   const;
        inline Vec2 operator / (const Vec2& _Vec)   const;

        //Vec2 TO THIS OPERATIONS
        inline Vec2 operator += (const Vec2& _Vec);
        inline Vec2 operator -= (const Vec2& _Vec);
        inline Vec2 operator *= (const Vec2& _Vec);
        inline Vec2 operator /= (const Vec2& _Vec);

        //SCALER TO Vec2 OPERATIONS
        inline Vec2 operator + (const float& _Sca) const;
        inline Vec2 operator - (const float& _Sca) const;
        inline Vec2 operator * (const float& _Sca) const;
        inline Vec2 operator / (const float& _Sca) const;

        //SCALER TO THIS OPERATIONS
        inline Vec2 operator += (const float& _Sca);
        inline Vec2 operator -= (const float& _Sca);
        inline Vec2 operator *= (const float& _Sca);
        inline Vec2 operator /= (const float& _Sca);
    };
    class IVec2
    {
    public:
        //MEMBERS
        int x, y;

        //CONSTRUCTORS
        inline IVec2(void);
        inline IVec2(const int& xy);
        inline IVec2(const int& x, const int& y);
        inline IVec2(const IVec2& _IVec2);

        //DESTRUCTOR
        inline ~IVec2(void);

        //ASSINGMENT AND EQUALITY OPERATIONS
        inline IVec2 operator = (const IVec2& _IVec);
        inline IVec2 operator = (const int& _Sca);

        inline IVec2 operator - (void)               const;
        inline bool operator == (const IVec2& _IVec)  const;
        inline bool operator != (const IVec2& _IVec)  const;

        //Vec2 TO Vec2 OPERATIONS
        inline IVec2 operator + (const IVec2& _IVec)   const;
        inline IVec2 operator - (const IVec2& _IVec)  const;
        inline IVec2 operator * (const IVec2& _IVec)   const;
        inline IVec2 operator / (const IVec2& _IVec)   const;

        //Vec2 TO THIS OPERATIONS
        inline IVec2 operator += (const IVec2& _IVec);
        inline IVec2 operator -= (const IVec2& _IVec);
        inline IVec2 operator *= (const IVec2& _IVec);
        inline IVec2 operator /= (const IVec2& _IVec);

        //SCALER TO Vec2 OPERATIONS
        inline IVec2 operator + (const int& _Sca) const;
        inline IVec2 operator - (const int& _Sca) const;
        inline IVec2 operator * (const int& _Sca) const;
        inline IVec2 operator / (const int& _Sca) const;

        //SCALER TO THIS OPERATIONS
        inline IVec2 operator += (const int& _Sca);
        inline IVec2 operator -= (const int& _Sca);
        inline IVec2 operator *= (const int& _Sca);
        inline IVec2 operator /= (const int& _Sca);
    };
}
#include "Maths.inl"