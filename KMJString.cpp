#include "stdafx.h"
#include "KMJString.h"


CKMJString::CKMJString()
	: m_pszData(NULL)
	, m_nLength(0)
{
}


CKMJString::~CKMJString()
{
}


// ���ڿ��� �����ϴ� �Լ�
int CKMJString::SetString(const char* pszParam)
{
	return 0;
}


// ���ڿ��� ��������(���...?)
const char* CKMJString::GetString()
{
	return nullptr;
}


// ��Ʈ���� �޸� ����
void CKMJString::Release()
{
}
