//namespace.cpp
#include "namespace.h"
//namespace�͖{���w�b�_�t�@�C���Ŏg�p���邱�Ƃ��قƂ�ǂ��Ǝv�����A����͗�Ȃǂ���������cpp�őS�ď����Ă���

//���L��2�̊֐��͖��O���d�����邽�߁A�R���p�C���G���[�ɂȂ�

// FILE1.cpp
/*
void func(void)
{
    //����
}
// FILE2.cpp
void func(void)
{
    //����
}
*/

//���L�̂悤�ɏ������ƂŖ��O���d�����Ă��G���[�ɂȂ�Ȃ�

//FILE1.cpp
namespace name1
{
    void func(int n);//�v���g�^�C�v�錾�̓w�b�_�t�@�C���ɏ������Ƃ��]�܂���
    void func(int n)
    {
        // ...
    }
}
//FILE2.cpp
namespace name2
{
    void func(float f);//�v���g�^�C�v�錾�̓w�b�_�t�@�C���ɏ������Ƃ��]�܂���
    void func(float f)
    {
        // ...
    }
}

//namespace�̓l�X�g���邱�Ƃ��o����
namespace a
{
    namespace b
    {
        namespace c
        {
            int d;
        }
    }
}
//namespace�̃l�X�g�ł́A���L�̃R�[�h����L�Ɠ����Ӗ��ɂȂ�(C++17�ȍ~)
//1�N���Ɏg�p���Ă���C++�̃o�[�W������14�Ȃ̂ŁA����͋C�ɂ��Ȃ��Ă��悢
//����ɂ��̏��������Â炢����ˁA�ꉞ�m������
/*
namespace aa::bb::cc{
    int dd;
}
*/

//namespace���ɋL�q�����֐��̎g����
int UseNamespace(void)
{
    int n = 1;
    float f = 1.1f;

    name2::func(f);
    name1::func(n);

    //�l�X�g���ꂽ���O��Ԃ̎g����
    a::b::c::d = 0;

    return 0;
}

//namespace�̕ʖ���`
//namespace�͑���namespace�Ƃ̏Փ˂�h�����߁A�\���Ƀ��j�[�N�Ȗ��O��t���Ȃ���΂Ȃ�Ȃ�
//���̂��߁Anamespace�̖��O���ƂĂ������Ȃ邱�Ƃ�����
//namespace���̕ϐ���֐����g���Ƃ��ɂƂĂ��������O�𖈉񏑂��͖̂ʓ|�Ȃ̂ŁA�ʖ����`���邱�Ƃ��o����
//���L�����̗�ł���

//�ƂĂ��������O��namespace
namespace SooooooooooooooooooLongerrrrrrrrrNaaaaaaaaaaaaaaame
{
    int x;
}

//�l�X�g���ꂽ�������O��namespace
namespace SooooooooooLongName
{
    namespace SecondLongName
    {
        int y;
    }
}

void UseLongNamespace(void)
{
    //Soooo...��SLN�Ƃ����ʖ����`
    namespace SLN = SooooooooooooooooooLongerrrrrrrrrNaaaaaaaaaaaaaaame;

    //SLN���g����I
    SLN::x = 0;

    //�l�X�g���ꂽnamespace��SSLN�Ƃ����ʖ����`
    namespace SSLN = SooooooooooLongName::SecondLongName;

    //SSLN���g����I
    SSLN::y = 0;

    //�ʖ��̕ʖ����`���邱�Ƃ��\
    namespace S = SSLN;

    //S���g����I
    S::y = 0;
}

//using�錾
//using�錾�͐錾��������Ă���錾�̈�ɁA�w�肵�����O�𓱓�����
//����ɂ�薾���I�ɖ��O��Ԗ���::���Z�q���g��Ȃ��Ă��A���̐錾�̈�Ŗ��O���g����悤�ɂȂ�
//using�錾���A���O��Ԃ̃����o�[�Ɏg���ꍇ�Ausing�錾��������Ă���X�R�[�v��::���Z�q�ɂ�閾���I�ȃX�R�[�v�̎w��Ȃ��ɁA���̖��O���g�����Ƃ��ł���
//���L�����̗�ł���
namespace N1
{
    int n;
}

void UsingDeclaration(void)
{
    // n = 0; //�����_��n�͐錾����Ă��Ȃ��̂ŃG���[

    using N1::n;
    n = 0;//N1::n�Ɖ��߂����
    N1::n = 0;//�����I�ȃX�R�[�v�̎w��
}

//using�f�B���N�e�B�u
//using�f�B���N�e�B�u�́A���̋L�q�ȍ~�̃X�R�[�v�ɂ������C�����O�T���ɁA�w�肳�ꂽ���O��ԓ��̃����o�[��ǉ����邽�߂̎w�����ł���
//using�f�B���N�e�B�u���g���ƁA�w�肳�ꂽ���O��ԓ��̃����o�[���A::���Z�q��p���Ȃ��Ŏg�p�ł���
//���L�����̗�ł���
namespace N2
{
    void func1();//�v���g�^�C�v�錾
    int n;
    int y;
    int z;
    void func1() {/*����*/}
}

void UsingDirectiv(void)
{
    using namespace N2;

    n = 0;//N2::n�Ɖ���
    y = 0;//N2::y�Ɖ���
    z = 0;//N2::z�Ɖ���
    func1();//N2::func1�Ɖ���
}

//�N���X��namespace�ɓ����
//�ϐ���֐��݂̂ł͂Ȃ��A�N���X��namespace�ɓ���邱�Ƃ��ł���
//�������̏�����������̂ŁA���L�Ɏ���
//�����L�̃R���X�g���N�^�̏��������Y��Ȃ��̂ł͂Ȃ��̂ŁA�ڍׂ�Chapter1��class���Q�Ƃ��Ă�������

//����������1
namespace c1
{
    class Class1
    {
    public:
        Class1() { nn = 0; }//�R���X�g���N�^
        int nn;
        //�F�X
    };
}

//����������2(namespace�ł̃C���f���g�����Ă��Ȃ�����)
namespace c2
{
class Class2
{
public:
    Class2() { ny = 0; }//�R���X�g���N�^
    int ny;
    //�F�X
};
}

//����������3
namespace c3
{
    class Class3;
}

class c3::Class3
{
public:
    Class3() { nz = 0; }//�R���X�g���N�^
    int nz;
    //�F�X
};

//namespace���̃N���X�̎g�p���@
void UseNamespaceClass(void)
{
    c1::Class1 CC1;
    c2::Class2 CC2;
    c3::Class3 CC3;
    CC1.nn = 0;
    CC2.ny = 0;
    CC3.nz = 0;
}