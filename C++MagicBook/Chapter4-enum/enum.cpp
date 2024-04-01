//enum.cpp
#include "enum.h"
#include <stdlib.h>
#include <stdio.h>

//C����ɂ���enum�Ƃ͕ʂɁAC++�ł�"enum class"�Ƃ����@�\���������ꂽ
//��enum class��C++11�ȍ~�ɑΉ������R���p�C���ŗ��p�\
//���L��enum class�̎g�p���@������

//������enum�ƈႢ�A�^��`������Ƃ���typedef���K�v�Ȃ�
enum class TEST
{
	hoge,
	boke,
	huge,
	bokeboke
};
//���Ȃ݂ɁAenum class�̒�`�́Aenum struct�Ƃ�������
enum struct TEST_S
{
	HOGE,
	BOKE,
	HUGE,
	BOKEBOKE
};

//��`�̎g����
void UseEnum1()
{
	//�X�R�[�v�������Z�q���g���āA"�^��::�񋓎q"�ƋL�q����
	TEST hogehoge = TEST::hoge;
	TEST_S HOGEHOGE = TEST_S::HOGE;
}

//enum class�ł́A�Ǘ����邽�߂̃f�[�^�^���w��ł���
//���L�����̗�ł���

//������enum��int�^���x�[�X�Ƃ����^�����Aenum class�ł͊Ǘ����邽�߂̃f�[�^�^�������Ō��߂邱�Ƃ��ł���
//�^���̌��ɁA": �����^��"�ƋL�q���邱�ƂŁA�Ǘ�����f�[�^�^�����߂邱�Ƃ��ł���
enum class GAME : short
{
	RPG,
	TRPG,
	FPS,
	TPS
};
//�����Œ��ӂ��Ăق����̂��A�f�[�^�^�̎w��ɂ͂��������[��������Ƃ�������
//1.�w��ł���^�͐����^�݂̂ŁAfloat�^�Ȃǂ̕��������_�^�͎w��ł��Ȃ�
//2.�^�̎w����ȗ������ꍇ��int�^�ɂȂ�
//3.�^�̎w��ŁAunsigned��t�����ꍇ�A�����̒l��ݒ�ł��Ȃ��Ȃ�


//enum class�ł͗񋓎q�ȊO�̒l��ݒ�ł��Ȃ�
//���L�����̗�ł���

enum class NUMBER
{
	ZERO,
	ONE,
	TWO,
	THREE
};

void UseEnum2()
{
	NUMBER num;
	num = NUMBER::ZERO;

	/*
	num = 1;//�r���h�G���[�AONE�̑���ɑ���ł��Ȃ�
	num = 5;//�r���h�G���[�A�͈͊O�̐����l������ł��Ȃ�
	*/
}


//enum class���g�p���鎞�̒��ӓ_
//enum class�ɂ͗l�X�ȗ��_�����邪�Aenum�ŏo���Ă��������o���Ȃ��Ȃ镔��������
//���L�����̗�ł���

enum class EXAMPLE
{
	c,
	cpp,
	java,
	python
};

void UseEnum3()
{
	//�z��C���f�b�N�X�ɗ��p�ł��Ȃ�
	int naNum[4] = {0};
	/*
	naNum[EXAMPLE::cpp] = 10;//�r���h�G���[
	*/


	//�����Z��C���N�������g�A�f�N�������g���o���Ȃ�
	EXAMPLE num = EXAMPLE::c;
	/*
	num += 1;//�r���h�G���[�A�����Z�o���Ȃ�
	num++;//�r���h�G���[�A�C���N�������g�A�f�N�������g�ł��Ȃ�
	*/
}


//enum class�͐������������̂́Aint�^�Ȃǂ̐����^�Ƃ́A������r���o���Ȃ�
//�����������A�L���X�g���g�����ƂŁA�����^�ɕϊ����邱�Ƃ͂ł���
//����ɂ��A�f�̏�Ԃł͏o���Ȃ������z��C���f�b�N�X�ւ̗��p���\�ɂȂ�
//�L���X�g�ɂ��Ă̏ڂ������Ƃ�Chapter5�̐�����ǂ�ŗ~����