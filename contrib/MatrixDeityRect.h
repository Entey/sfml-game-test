#pragma once

#include <SFML\Graphics.hpp>

using namespace sf;

//================================================================================

// �����-�������� ��������������
// by MatrixDeity
class MatrixDeityRect
{
public:
	MatrixDeityRect(Vector2f& position, Vector2f& size, Color& color); // �����������( ��������� �������, ������ �������, ���� ������� )
	~MatrixDeityRect(); // ����������
	const Vector2f& getSize() const; // ������ ������ �������
	const Vector2f& getPosition() const; // ������ ���������� �������
	const Color& getColor() const; // ������ ���� �������
	const RectangleShape& getShape() const; // ������ SFML-������ �������������

private:
	RectangleShape rect_; // SFML-�������������
};

