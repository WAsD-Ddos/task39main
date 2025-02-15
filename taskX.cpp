#include "tasks.h"

/*	Task X. The Next Even Number [��������� ������ �����]
*
*	�� ���� ������ ����������� ����� N.
*	��������� ����������� �������� ��������� �� ��� ������ �����.
*
*	����������
*	��� ����������� ���������� ��������� ������� ������������ ������������
*	������ �������������� �������� ����� C/C++
*
*	������ ������� ������ [input]
*	�� ���� ������ ����� ������������� ����� N.
*
*	������ �������� ������ [output]
*	�������� ���� ����� ����� - ����� �� ������.
*
*	[Sample function input 1]: 1
*	[Sample function output 1]: 2
*
*	[ input 2]: 2
*	[output 2]: 4
*
*	[ input 3]: 3
*	[output 3]: 4
*/

int taskX(int number) {
	if (number % 2 == 0) {
		return number + 2;
	}
	return  number + 1;
}