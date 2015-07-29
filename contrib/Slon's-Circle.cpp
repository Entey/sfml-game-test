#include<SFML/Graphics.hpp>
#include"Slon's-Circle.h"

using namespace sf;
// ����������� ������ SlonCircle
SlonCircle::SlonCircle(float X, float Y, float R){
	x = X; y = Y; r = R;
	shape.setFillColor(Color(128,21,46));
	shape.setRadius(r);
	shape.setPosition(x,y);
}
// ������� ��������� SlonCircle
void SlonCircle::draw(RenderWindow &window){
	window.draw(shape);
}
