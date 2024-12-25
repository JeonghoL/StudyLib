#include <Windows.h>
#include <DirectXMath.h>
#include <DirectXPackedVector.h>
#include <iostream>

using namespace std;
using namespace DirectX;
using namespace DirectX::PackedVector;

int main()
{
	cout.precision(8);

	if (!XMVerifyCPUSupport())
	{
		cout << "DirectXMath를 지원하지 않음" << endl;
		return 0;
	}

	XMVECTOR u = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);
	XMVECTOR n = XMVector3Normalize(u);

	float LU = XMVectorGetX(XMVector3Length(n));

	cout << LU << endl;
	if (LU == 1.0f)
		cout << "길이 1" << endl;
	else
		cout << "길이 1 아님" << endl;

	float powLU = powf(LU, 1.0e6f);
	cout << "LU^(10^6) = " << powLU << endl;
}