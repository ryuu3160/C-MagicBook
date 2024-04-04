//overload.cpp
#include "overload.h"
#include <stdlib.h>
#include <stdio.h>

//���̏͂ł͊֐��̃I�[�o�[���[�h�Ɖ��Z�q�̃I�[�o�[���[�h�ɂ��ĉ������

//�֐��̃I�[�o�[���[�h
//�֐��̃I�[�o�[���[�h�Ƃ������̂́A�������O�̊֐��𕡐���`�ł���Ƃ������̂�

//�֐��̃I�[�o�[���[�h���悭�g���̂̓R���X�g���N�^�ł���
//Chapter1��class.h�ŏ�����Ă���R�[�h������ƁA"POS"�Ƃ������O�̊֐���2���`����Ă���̂�������

//�֐��̃I�[�o�[���[�h�ɂ͒�`����Ƃ��̏���������
//���̏����Ƃ́A"�����̍\��(�f�[�^�^���)���Ⴄ�ꍇ�ɂ̂݁A����֐������`�ł���"�Ƃ�������
//�����Œ��ӂ������̂��A�߂�l�̃f�[�^�^�́A���̏����ɂ͊܂܂�Ȃ�

//�ȉ�����`��ł���

//1��
void FUNC(int num)
{
	printf("1�ڂ̊֐�\nint:%d\n", num);
}

//2��
void FUNC(float num)
{
	printf("2�ڂ̊֐�\nfloat:%f\n", num);
}

//3��
void FUNC(int num1, float num2)
{
	printf("3�ڂ̊֐�\nint:%d\nfloat:%f\n", num1,num2);
}

void UseFUNC()
{
	FUNC(10);		//1�ڌĂяo��
	FUNC(3.5f);		//2�ڌĂяo��
	FUNC(10, 3.5f);	//3�ڌĂяo��
}

//�֐��̃I�[�o�[���[�h�́A"�����T�v�͓��������A�����ɂ���ē����������ς�����"�Ƃ����Ƃ��ɕ֗��ɂȂ��Ă���


//���Z�q�̃I�[�o�[���[�h
//C++�ɂ����āA+��-�Ƃ��������Z�q�͊֐��Ƃ��Ĉ��������o����
//�܂�A�����̉��Z�q���֐��Ƃ��Ē�`���āA�N���X�Ǝ��̏������s�킹�邱�Ƃ��o����̂�

//C����ł́A�\���̓��m�̑����Z������Z�͏o���Ȃ�
//�ȉ���
typedef struct
{
	int x;
	int y;
}s_POS;

void Use_sPos()
{
	s_POS pos1 = { 100,200 };
	s_POS pos2 = { 200,400 };
	s_POS pos3 = {0,0};

#if 0
	pos3 = pos1 + pos2;//�G���[
#endif
}
//pos1��pos2�𑫂��āApos3(300,600)�Ƃ������ʂ��o���������A���ڂ͑������Ƃ��ł��Ȃ����߁Ax��y���ʂő����K�v������

//C++�ɂ����āA����pos1��pos2���A+���Z�q��p���Ē��ڑ��������\�ɂ���̂����Z�q�̃I�[�o�[���[�h�Ƃ������̂�
//overload.h�ƈȉ��ɗ���L�q����

//���Z�q�̃I�[�o�[���[�h�̒�`
//operator�Ƃ����L�[���[�h�̌��ɁA���Z�q���L�q����
//�����Ɩ߂�l�́A���Z�q�̎�ނ�A�����ǂ���p�����������ɂ���ĕς���Ă���
OverPos OverPos::operator+(OverPos rhs)
{
	OverPos pos;

	pos.x = this->x + rhs.x;
	pos.y = this->y + rhs.y;

	return pos;
}

OverPos::OverPos()
{
	this->x = 0;
	this->y = 0;
}
void OverPos::SetPos(int x, int y)
{
	this->x = x;
	this->y = y;
}

//��`�������Z�q�̃I�[�o�[���C�h�̎g�p���@
void UseOverPos()
{
	OverPos pos1;
	OverPos pos2;
	OverPos pos3;
	OverPos pos4;

	pos1.SetPos(100, 200);
	pos2.SetPos(200, 400);

	//"+"���Z�q�̃I�[�o�[���[�h�ɂ��\�ɂȂ�
	pos3 = pos1 + pos2;

	//���Z�q�̃I�[�o�[���[�h�̌Ăяo����2��
	//�����o�֐����g���p�^�[���̌Ăяo����
	pos4 = pos1.operator+(pos2);

	printf("pos3:\nx:%d,y:%d\n", pos3.x, pos3.y);
	printf("pos4:\nx:%d,y:%d\n", pos4.x, pos4.y);
}

//���Z�q�̃I�[�o�[���[�h�̗��_�́A���Z�q�Ƃ����L�����g�����ƂŁA���������ϓI�Ō��₷���Ȃ�Ƃ����_��
//��L�̂悤�ȁA�����̃����o�ϐ��𑫂������݂����Ȃ��̂́A�֐�������Ă��̂ł͂Ȃ��A���Z�q�̃I�[�o�[���[�h���g��������������₷�����낤

//���̉��Z�q�̃I�[�o�[���[�h���g���ɂ����蒍�ӂ���ׂ����Ƃ́A"�g�����ɂƂ��Ē��ϓI�ɃC���[�W�ł��Ȃ����Z�q�̃I�[�o�[���[�h"�͍T����ׂ��Ƃ�������
//��L��OverPos�N���X�ŗ��������ƁA���W���m�̑��������͊ȒP�ɃC���[�W�ł���Ǝv�����A���W�̊���Z�ƌ�����ƃC���[�W���ɂ����Ǝv��
//���̂悤�ɁA���̉��Z�q�ɂ������炳�����ʂ��A�g����ɂƂ��ăC���[�W���ɂ������̂��ƁA�t�ɍ����������N�������ɂȂ��Ă��܂�

//���Z�q�̃I�[�o�[���[�h���`����Ƃ��́A�������g����̋C�����ɂȂ��āA���̉��Z�q�̌��ʂ����R�Ɏ󂯓�����邩�ǂ������l���Ȃ���΂Ȃ�Ȃ�