#pragma once
namespace Core::Maths
{
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
        inline IVec2 operator = (const float& _Sca);

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