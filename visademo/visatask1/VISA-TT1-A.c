#include <visa.h>
#include <stdio.h>

ViStatus status;	  //����״̬����
ViSession  defRM;	  //����ϵͳ��Դ�Ự����
int cnt; //�������������

char inbuf[128];  //�������뻺����
int main()
{

	//��ϵͳ��Դ�Ự
	status = viOpenDefaultRM(&defRM);	 //���ҹ�������216 ����Դ�������� ���ã��ӿ�	 ��ַ
	if( status != VI_SUCCESS )  //Err < 0, Success == 0, Warning > 0
	{
		printf( "ERROR: viOpenDefaultRM failed with error = 0x%lx\n", status );
		printf( "press anykey to exit...");
		getchar();
		return;
	}
	else
	{
		printf( "��ϵͳ��Դ�Ự�ɹ���\n" );
		printf( "press anykey to exit...");
		getchar();
	}
	//��ϵͳ��Դ�Ự�ɹ�
	
	//
	viClose(defRM);  //�ر�ϵͳ��Դ   ��ֵ

}
