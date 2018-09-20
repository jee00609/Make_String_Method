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


// 문자열을 저장하는 함수
int CKMJString::SetString(const char* pszParam)
{
	return 0;
}


// 문자열을 내보내기(출력...?)
const char* CKMJString::GetString()
{
	return nullptr;
}


// 스트링의 메모리 삭제
void CKMJString::Release()
{
}
