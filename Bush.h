#pragma once
#ifndef __Bush__
#define __Bush__
namespace Shubin
{
	// �������������
	struct bush {
		enum Month
		{
			JANUARY = 1,
			FEBRUARY,
			MARCH,
			APRIL,
			MAY,
			JUNE,
			JULY,
			AUGUST,
			SEPTEMBER,
			OCTOBER,
			NOVEMBER,
			DECEMBER,
		};
		Month mof; // Month of flowering - ����� ��������
		char name[50]; // ��������
	};
}
#endif