

#include <iostream>
#include "DynamicArray.h"

//배열을 대체
//1. 생성 및 추가
//2. 삭제
//3. 삽입

//4. 개수
//5. 탐색(검색)
//6. 출력


int main()
{
	DynamicArray array{};

	CreateMonster(array, "Wolf", 100, 0);
	CreateMonster(array, "Demon", 200, 100);

	std::cout << GetMonsterCount(array) << std::endl;
	PrintMonsters(array);

	std::cout << FindMonsters(array, "Wolf") << std::endl;

	DeleteMonster(array, "Wolf");
	PrintMonsters(array);

	DeleteMonster(array, "Demon");
}



// LIFO : Last In First Out - STACK
// FIFO : First In First Out - QUEUE

//int main()
//{
//	int last{ 0 };
//	int type{ 0 };
//	int value[999];
//
//	while (true)
//	{
//		std::cout << "1. push, 2: pop >";
//		std::cin >> type;
//		if (type == 1)
//		{
//			std::cout << "value?";
//			std::cin >> value[last];
//			last++;
//			std::cout << "--STACK--" << std::endl;
//			for (int i = 0; i < last; i++)
//			{
//
//			}
//		}
//	}
//}