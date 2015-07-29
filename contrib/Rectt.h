#pragma once
#include <SFML\Graphics.hpp>
using namespace sf;

class Rectt : public sf::Drawable, public sf::Transformable// ����������� ( ��� ������� ���������)
{
public:
	Rectt();
	Rectt(float x, float y, float w, float h, int r, int g, int b); // �������, ������, � ����.
	~Rectt();
private:
	RectangleShape rectangle; // ��� ��������
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

