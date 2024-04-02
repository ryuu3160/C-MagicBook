//cast.cpp
#include "cast.h"
#include <stdlib.h>
#include <stdio.h>

//static_cast�ɂ���
//"static_cast"�Ƃ́A�^�ϊ��𖾎��I�ɍs�����߂̃L���X�g
//�K�v������Βl��ς���
//���L���g�����ł���

void StaticCastTest()
{
	float fNum = 5.56f;
	int nNum;

	//�g�p��
	//"static_cast<�ϊ�����^��>(�ϊ��������l);"�ƋL�q����
	nNum = static_cast<int>(fNum);
	//�ϊ�����^���ɂ́A�����ō�����^������邱�Ƃ��\
	typedef int ImINTEGER;
	ImINTEGER inNum;
	inNum = static_cast<ImINTEGER>(fNum);

	//���ʂ�\��
	printf("fNum : %f\nnNum : %d\ninNum : %d\n", fNum, nNum,inNum);


	//static_cast�ł́A�񋓌^�Ɛ����^�̕ϊ��Ȃǂ́A�ÖٓI�ɕϊ�����Ȃ��^�ϊ����s�����Ƃ��\
	//����ɂ��Aenum class��z��C���f�b�N�X�Ȃǂɗ��p���邱�Ƃ��ł���
	//���L�����̗�ł���

	enum class CAST
	{
		A,//0
		B,//1
		C,//2
		D,//3
		E,//4
		F,//5
		G,//6
		H,//7
		I,//8
		J,//9
	};

	CAST cast1 = static_cast<CAST>(0);//CAST cast1 = CAST::A;�Ɠ����Ӗ��ɂȂ�
	int cast2 = static_cast<int>(CAST::B);//int cast2 = 1;�Ɠ����Ӗ��ɂȂ�

	int cast3[10] = { 0 };
	cast3[static_cast<int>(CAST::A)] = 10;//CAST::A(�����Ă���l��0)�𐮐��ɃL���X�g���Ă�����΁A�z��C���f�b�N�X�Ƃ��ė��p�ł���

	//�l�̕\��
	printf("cast1 : %d\ncast2 : %d\ncast3 : ", cast1, cast2);
	for (int i = 0; i < 10; i++)
	{
		printf("%d,", cast3[i]);
	}
}