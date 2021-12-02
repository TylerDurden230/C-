#include "Point.hpp"

float Area(Point const &v1, Point const &v2, Point const &v3)
{
  float det = 0.0f;
  
  float v1x = v1.getX().toFloat(), v2x = v2.getX().toFloat(), v3x = v3.getX().toFloat();
  float v1y = v1.getY().toFloat(), v2y = v2.getY().toFloat(), v3y = v3.getY().toFloat();
  det = ((v1x - v3x) * (v2y - v3y)) - ((v2x - v3x) * (v1y - v3y));
  det = (det < 0) ? det * -1 : det;
  return (det / 2.0f);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
  float totalArea, Area1, Area2, Area3;
	totalArea = Area(a,b,c);
	Area1 = Area(point,b,c);
  Area2 = Area(point,a,c);
  Area3 = Area(point,a,b);

  return !((Area1 + Area2 + Area3) > totalArea);
}