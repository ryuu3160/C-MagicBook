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
	printf("�f�t�H���g�R���X�g���N�^\n");//�R���X�g���N�^���Ă΂��ꏊ��������悤�ɂ��邽�߂̑[�u
}

//��������R���X�g���N�^�̒�`
POS::POS(int x, int y)
{
	//this�|�C���^���g�p���邱�Ƃŕϐ����ƈ������������ł����v
	//����this�|�C���^�͏ȗ����Ă�OK(�ȗ�����ꍇ�́A��������ς���K�v������)
	this->x = x;
	this->y = y;
	printf("��������R���X�g���N�^\n");//�R���X�g���N�^���Ă΂��ꏊ��������悤�ɂ��邽�߂̑[�u
}

//�f�X�g���N�^�̒�`
POS::~POS()
{
	//���̃R�[�h�ł͉��������K�v���Ȃ�
	printf("�f�X�g���N�^\n");//�f�X�g���N�^���Ă΂��ꏊ��������悤�ɂ��邽�߂̑[�u
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

//----- �p���ɂ��� -----

//���N���X�̃R���X�g���N�^
Base::Base()
{
	printf("Bace�R���X�g���N�^\n");
}
//���N���X�̃f�X�g���N�^
Base::~Base()
{
	printf("Bace�f�X�g���N�^\n");
}
//���N���X�̊֐�
void Base::Hello()
{
	printf("Bace:Hello\n");
}

//�h���N���X�̃R���X�g���N�^
Child::Child()
{
	printf("Child�R���X�g���N�^\n");
}
//�h���N���X�̃f�X�g���N�^
Child::~Child()
{
	printf("Child�f�X�g���N�^\n");
}
//�h���N���X�̊֐�
void Child::HelloWorld()
{
	printf("Child:HelloWorld\n");
}