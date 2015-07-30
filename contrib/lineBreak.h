#ifndef LINEBREAK_H
#define LINEBREAK_H
#include<SFML/Graphics.hpp>

using namespace sf;
//lineBreak() ������� ��� �������� ������
//���������: str1-������ ��� ������� ����� ������������ ��������
//str2-������ � ������� ����� ���������� �������, ������� �� ����������� � str1
//numberOfCharacters ����� �������� � str1 ����� ������ �������.
//������� ���������� ���������� str1
//�����: ������ ������������ � str2 �� ������ ������ ������� ����� �������.
String lineBreak(String &str1, String &str2, int numberOfCharacters);
#endif