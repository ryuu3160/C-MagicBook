//CodeTest.cpp
//���ꂼ��̃`���v�^�[�̃v���O���������s����ꏊ
#include <stdio.h>
#include <stdlib.h>

//===== SAMPLE INCLUDE =====
#include "Chapter1-class/class.h"
#include "Chapter2-namespace/namespace.h"
#include "Chapter3-new_delete/new_delete.h"
#include "Chapter4-enum/enum.h"
#include "Chapter5-cast/cast.h"
#include "Chapter6-overload/overload.h"

void ClassTest();
void ClassTest2();
void NewDeleteTest();
void CastTest();
void OverloadTest();

int main(void)
{
	//----- CLASS -----
	printf("----- CLASS -----\n");
	ClassTest();
	printf("\n");
	printf("----- CLASS�̌p���ɂ��Ă̋��� -----\n");
	ClassTest2();
	printf("\n");

	//----- NEW / DELETE -----
	printf("----- NEW / DELETE -----\n");
	NewDeleteTest();
	printf("\n\n");

	//----- CAST -----
	printf("----- CAST -----\n");
	CastTest();
	printf("\n\n");

	//----- OVER LOAD -----
	printf("----- OVER LOAD -----\n");
	OverloadTest();
	printf("\n");

	printf("\n");
	return 0;
}

void ClassTest()
{
	POS a;
	POS b(20, 30);
	a.SetPos(10, 15);

	printf("a.X:%d a.Y:%d\nb.X:%d b.Y:%d\n", a.GetPosX(), a.GetPosY(), b.GetPosX(), b.GetPosY());
	return;
}

void ClassTest2()
{
	Child child;
	//�h���N���X�̃R���X�g���N�^�����łȂ��A���N���X�̃R���X�g���N�^���Ăяo�����
	//�Ă΂�鏇�Ԃ́A�h���N���X�̃R���X�g���N�^���h���N���X�̃R���X�g���N�^�h�ł���

	child.Hello();
	//�h���N���X�̃C���X�^���X�ŁA���N���X�̊֐����g�����Ƃ��ł���
	child.HelloWorld();
	//������񎩃N���X�̊֐����g�p�ł���

	//return���ɌĂ΂��f�X�g���N�^�́A�h���N���X�����N���X�̏�
	return;
}

void NewDeleteTest()
{
	NewDelete1();
}

void CastTest()
{
	StaticCastTest();
}

void OverloadTest()
{
	printf("�֐��̃I�[�o�[���[�h\n");
	UseFUNC();
	printf("\n���Z�q�̃I�[�o�[���[�h\n");
	UseOverPos();
}