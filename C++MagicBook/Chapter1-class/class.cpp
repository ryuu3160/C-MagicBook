//class.cpp
#include "class.h"
#include <stdlib.h>
#include <stdio.h>

//�����o�֐��̒�`�͑S�āA"�N���X��::�֐���(����)"�ƂȂ�

//�R���X�g���N�^�̒�`
POS::POS()
{
	//this�|�C���^�͎��g�̃����o���w�肵�Ă���
	this->x = 0;
	this->y = 0;
}

//��������R���X�g���N�^�̒�`
POS::POS(int x, int y)
{
	//this�|�C���^���g�p���邱�Ƃŕϐ����ƈ������������ł����v
	this->x = x;
	this->y = y;
}

//�f�X�g���N�^�̒�`
POS::~POS()
{
	//���̃R�[�h�ł͉��������K�v���Ȃ�
}

//�����o�֐��̒�`
int POS::GetPosX(void) const
{
	return this->x;
}

int POS::GetPosY(void) const
{
	return this->y;
}

void POS::SetPos(int x, int y)
{
	this->x = x;
	this->y = y;
}