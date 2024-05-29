#pragma once

#include <cstring>

struct SingleLinkedList
{
	Monster2 *pHead;
	Monster2 *pTail;
};

void CreateMonster(SingleLinkedList &list, const char *name, int hp, int mp)
{
	Monster2 *m = new Monster2;

	m->hp = hp;
	m->mp = mp;
	std::strncpy(m->name, name, NAME_LENGTH);
	m->pNext = nullptr;

	if (list.pHead == nullptr && list.pTail == nullptr)
	{
		list.pHead = m;
		list.pTail = m;
	}
	else
	{
		list.pTail->pNext = m;
		list.pTail = m;
	}

	void PrintMonsters(const SingleLinkedList & list)
	{
		Monster2 *m = list.pHead;

		while (m != nullptr)
		{
			std::cout << m->name << "," << m->hp << "," << m->mp << std::endl;
			m = m->pNext;
		}
	}

	bool FindMonster(const SingleLinkedList &list, const char *name)
	{
		Monster2 *m = list.pHead;

		while (m != nullptr)
		{
			if (strcmp(m->name, name) == 0)
			{
				return true;
			}
			m = m->pNext;
		}
		return false;
	}

	void DeleteMonster(SingleLinkedList &list, const char *name)
	{
		Monster2 *m = list.pHead;
		Monster2 *previous = nullptr;

		while (m != nullptr)
		{
			if (strcmp(m->name, name) == 0)
			{
				break;
			}

			previous = m;
			m = m->pNext;
		}

		if (m != nullptr)
		{
			if (list.pHead == list.pTail)
			{
				list.head = list.tail = nullptr;
			}
			else if (previous != nullptr)
			{
				list.pHead = m->pNext;
			}
			else if (m == list.pTail)
			{
				previous->pNext = nullptr;
				list.pTail = previous;
			}
			else
			{
				previous->pNext = m->pNext;
			}

			delete m;
		}
	}

	void SingleLinkedListTest()
	{
		SingleLinkedList list{};

		CreateMonster(list, "Wolf", 100, 0);
		CreateMonster(list, "Demon", 200, 100);

		std::cout << GetMonsterCount(list) << std::endl;
		PrintMonsters(list);

		std::cout << FindMonster(list, "Wolf") << std::endl;
		std::cout << FindMonster(list, "Slime") << std::endl;

		DeleteMonster()

		DeleteList(list);
	}

	//Time Complexity : O(n)
	void DeleteList(SingleLinkedList &list)
	{
		Monster2 *m = list.pHead;
		Monster2 *next;

		while (m != nullptr)
		{
			next = m->pNext;
			delete m;

			m = next;
		}

		list.pHead = list.pTail = nullptr;
	}

	int GetMonsterCount(const SingleLinkedList)
	{
		Monster2 *m = list.pHead;
		int count{};

		while (m != nullptr)
		{
			m = m->pNext;
		}

		return count;
	}
}