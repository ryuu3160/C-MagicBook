//new_delete.h
#ifndef _____NEW_DELETE_H_____
#define _____NEW_DELETE_H_____

#include <stdio.h>

void NewDelete1(void);

//�e�X�g�p�N���X
class NewPos
{
public:
	int x;
	int y;

	NewPos();
	~NewPos();
};

//�����o�ϐ��𓮓I�������Ŋm�ۂ���ꍇ�̃N���X
class DynamicPOS
{
private:
	//�|�C���^�^�̃����o�ϐ�
	int* x;
	int* y;
public:
	DynamicPOS();//�R���X�g���N�^
	~DynamicPOS();//�f�X�g���N�^
	void SetX(int x);//x�ɒl������֐�
	void DisplayPos(void);//�ϐ��\���p�����o�֐�
};

#endif // !_____NEW_DELETE_H_____
