//overload.h
#ifndef _____OVERLOAD_H_____
#define _____OVERLOAD_H_____

void FUNC(int num);
void FUNC(float num);
void FUNC(int num1, float num2);
void UseFUNC();
void Use_sPos();
void UseOverPos();

//�֐��̃I�[�o�[���[�h�̗�
class OverPos
{
public:
	int x;
	int y;

	OverPos();
	void SetPos(int x,int y);
	OverPos operator+(OverPos rhs);//���Z�q�̃I�[�o�[���[�h�̐錾
};

#endif // !_____OVERLOAD_H_____
