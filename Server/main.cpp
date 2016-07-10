//cccssssseee2222   b2
#include "windows.h"
#include "stdio.h"
#include "Multiprotoclserver.h"


void main()
{
	CMultiProtoclServer mps;
	mps.InitServer();
	mps.StartWork();
	mps.EndWork();
}
