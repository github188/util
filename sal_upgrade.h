#ifndef __SAL_UPGRADE_H__
#define __SAL_UPGRADE_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif

#include "sal_standard.h"

typedef struct version_s
{
    int bUpdate;       //�Ƿ���Ҫ����
    char local[256];   //��ǰ��ʹ�ð汾
    char remote[256];  //�����������°汾
}version_s;

/*
 �� �� ��: sal_upgrade_init
 ��������: ��ʼ������ģ��
 �������: ��
 �������: ��
 �� �� ֵ: �ɹ�����0,ʧ�ܷ���С��0
*/
int sal_upgrade_init();

/*
 �� �� ��: sal_upgrade_exit
 ��������: ȥ��ʼ������ģ��
 �������: ��
 �������: ��
 �� �� ֵ: �ɹ�����0,ʧ�ܷ���С��0
*/
int sal_upgrade_exit();

/*
 �� �� ��: sal_upgrade_check
 ��������: ��ȡ���������°汾��Ϣ���ⲿ��������
 �������: urlCfg ���������ļ�����������
            timeout ��ʱʱ�䣬��λ����
 �������: version_info �����ذ汾��Ϣ
 �� �� ֵ: �ɹ�����0,ʧ�ܷ���С��0
*/
int sal_upgrade_check(char* urlCfg, int timeout, version_s* version_info);

/*
 �� �� ��: sal_upgrade_enable
 ��������: ʹ���������ܣ����ݵõ�������������Ϣ������������
 �������: enable 0 ��ʹ�ܣ�1ʹ��
 �������: ��
 �� �� ֵ: �ɹ�����0,ʧ�ܷ���С��0
*/
int sal_upgrade_enable(int enable);


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif
