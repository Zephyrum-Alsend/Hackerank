#include<bits/stdc++.h>

using namespace std;
#include <iostream>
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box {
    private:
        int m_iLength, m_iBreadth, m_iHeight;
        long long m_llVolume;
    
    public:
        Box() {
            m_iLength = m_iBreadth = m_iHeight = m_llVolume = 0;
        }
        Box(int l, int b, int h) {
            m_iLength = l;
            m_iBreadth = b;
            m_iHeight = h;
            m_llVolume = m_iLength * m_iBreadth;
            m_llVolume *= m_iHeight;
        }
        Box(const Box &bx) {
            m_iLength = bx.m_iLength;
            m_iBreadth = bx.m_iBreadth;
            m_iHeight = bx.m_iHeight;
            m_llVolume = m_iLength * m_iBreadth;
            m_llVolume *= m_iHeight;
        }
        
        int getLength() {
            return m_iLength;
        }
        int getBreadth() {
            return m_iBreadth;
        }
        int getHeight() {
            return m_iHeight;
        }
        long long CalculateVolume() {
            return m_llVolume;
        }
        
        friend ostream& operator << (ostream &out, const Box &bx) {
            out << bx.m_iLength << ' ' << bx.m_iBreadth << ' ' << bx.m_iHeight;
            return out;
        }
        
        bool operator<(const Box& bx) {
            if ( m_iLength < bx.m_iLength ) {
                return true;
            }
            else if ( m_iBreadth < bx.m_iBreadth && m_iLength == bx.m_iLength ) {
                return true;
            }
            else if ( m_iBreadth < bx.m_iHeight && m_iLength == bx.m_iLength && m_iBreadth == bx.m_iBreadth)
            {
                return true;
            }
            else {
                return false;
            }
        }
};
