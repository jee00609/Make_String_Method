#pragma once
class CKMJString
{
public:
	CKMJString();//����Ʈ ������
	~CKMJString();//����Ʈ �Ҹ���
private:
	// ���ڿ��� �����ϱ� ���� ���� �Ҵ��� �޸𸮸� ����Ű�� ������
	char* m_pszData;
	// ����� ���ڿ��� ����
	int m_nLength;
public:
	// ���ڿ��� �����ϴ� �Լ�
	int SetString(const char* pszParam);
	// ���ڿ��� ��������(���...?)
	const char* GetString();
	// ��Ʈ���� �޸� ����
	void Release();
};

