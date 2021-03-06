#pragma once
class CKMJString
{
public:
	CKMJString();//디폴트 생성자
	~CKMJString();//디폴트 소멸자
private:
	// 문자열을 저장하기 위해 동적 할당한 메모리를 가리키는 포인터
	char* m_pszData;
	// 저장된 문자열의 길이
	int m_nLength;
public:
	// 문자열을 저장하는 함수
	int SetString(const char* pszParam);
	// 문자열을 내보내기(출력...?)
	const char* GetString();
	// 스트링의 메모리 삭제
	void Release();
};

