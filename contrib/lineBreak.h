#ifndef LINEBREAK_H
#define LINEBREAK_H
#include<SFML/Graphics.hpp>

using namespace sf;
//lineBreak() ������� ��� �������� ������
//���������: str1-������ ��� ������� ����� ������������ ��������
//numberOfCharacters ����� �������� � str1 ����� ������ �������.
//������� ���������� ���������� str1
String lineBreak(String &str1, int numberOfCharacters);
#endif