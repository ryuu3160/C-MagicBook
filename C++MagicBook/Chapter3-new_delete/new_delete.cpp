//new_delete.cpp
#include "new_delete.h"
#include <stdlib.h>
#include <stdio.h>

//���̏͂ł�new��delete�ɂ��Đ�������
//new��delete�́A�������̊m�ۂƉ�����s�����Z�q�ł���
//��new���Z�q�Adelete���Z�q�ƋL�q����̂����������A���₷�����邽�߁A�ȉ��ł�new,delete�Əȗ����ċL�q����
//�g�p���@�͈ȉ��̂Ƃ���ł���

void NewDelete1(void)
{
	//new�͎w�肵���f�[�^�^�̓��I���������m�ۂ���
	//�|�C���^�Ń������Ԓn���󂯎��

	int* nNum1 = new int;//�������Ȃ�
	int* nNum2 = new int(20);//����������

	//new���g���΁Aint�^�̂悤�ȑg�ݍ��݌^�͂������A�\���́E�N���X�Ƃ������f�[�^�^�̓��I���������m�ۂ��邱�Ƃ��ł���

	//new�̊�{�I�ȏ������́A'new �f�[�^�^��;' 'new �f�[�^�^��(�����l);'�ł���

	*nNum1 = 10;

	//�ϐ��Ɋi�[����Ă���f�[�^�ƁA�m�ۂ����������̃A�h���X��\��
	printf("nNum1 : %d\nnNum1Address : %p\n", *nNum1,nNum1);
	printf("nNum2 : %d\nnNum2Address : %p\n", *nNum2, nNum2);

	//delete�́Anew�Ŋm�ۂ������I���������J������
	delete nNum1;
	delete nNum2;

	//delete�̊�{�I�ȏ������́A'delete �|�C���^�ϐ���;'�ł���

	//���Ȃ݂ɁAnew�Ŋm�ۂ����������́Adelete�ł̂݉���ł���
	//free�֐��ł͉�����邱�Ƃ��ł��Ȃ����߁A�v���ӂ�
	//�t���܂�������ŁAmalloc��calloc�Ŋm�ۂ�����������delete�ŉ�����邱�Ƃ͏o���Ȃ�
	//���̂��߁A����炪������Ȃ��悤��C++�ł�new/delete���g���āAmalloc/free�Ȃǂ͋ɗ͎g��Ȃ��悤�ɂ��邱��


	//new�Edelete�Ŕz����m�ہE���������@
	
	int* nArray = new int[5];//���I�������m��

	//new�ł̔z��m�ۂ̊�{�I�ȏ������́A'new �f�[�^�^��[�v�f��];'�ł���
	//���Ȃ݂ɁA���I�������z��͔C�ӂ̒l�ŏ��������邱�Ƃ͏o���Ȃ����A0�łȂ珉�������邱�Ƃ��ł���
	//���̏������́A'new �f�[�^�^��[�v�f��]();'�ł���
	//���̏�����������Ɗm�ۂ��ꂽ�̈悪�S��0�ŏ����������

	//�z��ւ̊i�[
	for (int i = 0; i < 5; i++)
	{
		nArray[i] = i;
	}
	//�i�[�����l�̏o��
	for (int i = 0; i < 5; i++)
	{
		printf("nArray[%d] : %d  nArrayAddress : %p\n", i, nArray[i], &nArray[i]);
	}

	delete[] nArray;//���I�������z��̉��

	//delete�ł̓��I�������z��̉���̊�{�I�ȏ������́A'delete[] �|�C���^�ϐ���;'�ł���


	//�N���X�I�u�W�F�N�g�ɑ΂���new/delete�̎g�p���@
	//�ȉ���new_delete.h�ɏ����Ă���NewPos�N���X�𓮓I�������Ɋm�ۂ��鏑����

	//�I�u�W�F�N�g�̊m�ہE���
	NewPos* cNP = new NewPos;
	delete cNP;

	//�I�u�W�F�N�g�z��̊m�ہE���
	NewPos* caNP = new NewPos[5];
	delete[] caNP;

	printf("\n");//���Ղ�����̂��߂̉��s

	//�N���X�I�u�W�F�N�g�𓮓I�������Ɋm�ہA������鎞�Anew��delete�̓R���X�g���N�^�ƃf�X�g���N�^���Ăяo���Ă����
	//malloc��calloc�Afree�ł̓R���X�g���N�^�ƃf�X�g���N�^���Ăяo�����Ƃ��o���Ȃ�
	//���ꂪC++��new��delete���g���������������R�ł���


	//�N���X���ł̓��I�������m�ہE���
	DynamicPOS dPos;
	dPos.SetX(10);
	dPos.DisplayPos();
	return;
}

//�N���X�̃����o�ϐ��𓮓I�������Ŋm�ۂ������ꍇ�̏�����
//new_delete.h�������Ɍ���ƕ�����₷���Ǝv����
//���L�ɃR���X�g���N�^�ƃf�X�g���N�^�̋L�q���@������

//�R���X�g���N�^
DynamicPOS::DynamicPOS()
{
	//�R���X�g���N�^���Ń������̊m��
	printf("DynamicPOS�R���X�g���N�^�A�������m��!\n");
	this->x = new int;//�������Ȃ�
	this->y = new int(20);//����������
}

//�f�X�g���N�^
DynamicPOS::~DynamicPOS()
{
	//�f�X�g���N�^���ŕK���������̉��������
	//��������Ȃ��ƃ��������[�N���������Ă��܂�
	printf("DynamicPOS�f�X�g���N�^�A���������!\n");
	delete this->x;
	delete this->y;
}

//x�ɒl������֐�
void DynamicPOS::SetX(int x)
{
	*this->x = x;
}

//�l�\���p�̊֐�
void DynamicPOS::DisplayPos(void)
{
	printf("x : %d\nxAddress : %p\n", *this->x, this->x);
	printf("y : %d\nyAddress : %p\n", *this->y, this->y);
}

//���L�̓e�X�g�p�̒��ߋC�ɂ��Ȃ��Ă��悢
NewPos::NewPos()
{
	this->x = 0;
	this->y = 0;
	printf("�R���X�g���N�^\n");
}
NewPos::~NewPos()
{
	printf("�f�X�g���N�^\n");
}