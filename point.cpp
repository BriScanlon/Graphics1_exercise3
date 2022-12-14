#include "point.h"

point::point()
{
    _x = 0;
    _y = 0;
    _startOfLine = false;
}

point::point(short x, short y, bool startOfLine)
{
    _x = x;
    _y = y;
    _startOfLine = startOfLine;
}

point::point(const point& p)
{
    _x = p._x;
    _y = p._y;
    _startOfLine = p._startOfLine;
}

short point::getX() const
{
    return _x;
}

void point::setX(const short x)
{
    _x = x;
}

short point::getY() const
{
    return _y;
}

void point::setY(const short y)
{
    _y = y;
}

bool point::isStartOfLine() const
{
    return _startOfLine;
}



point& point::operator=(const point& other)
{
    // Only do the assignment if we are not assigning
    // to ourselves
    if (this != &other)
    {
        _x = other._x;
        _y = other._y;
    }
    return *this;

}

bool point::operator==(const point& other) const
{
    if (_x == other._x && _y == other._y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
