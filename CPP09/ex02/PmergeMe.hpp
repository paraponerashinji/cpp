#pragma once

#include <iostream>
#include <deque>
#include <list>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <vector>

struct Node
{
	int value;
	int id;
	int partnerId;

	Node(int value, int id)
		: value(value), id(id), partnerId(-1) {}
};

bool compareNodes(const Node& a, const Node& b);
void addJacobsthalOrder(std::vector<size_t>& order, size_t pendingSize);


class PmergeMe
{
	public:
	PmergeMe();
	PmergeMe(int ac, char **av);
	PmergeMe(const PmergeMe& other);
	PmergeMe& operator=(const PmergeMe& other);
	~PmergeMe();
	template <typename T>
	void display(const T& container);
	void mergeInsertSortDeque(std::deque<int>& arr);
	void mergeInsertSortVector(std::vector<int>& arr);
};

template <typename T>
void PmergeMe::display(const T& container)
{
	typename T::const_iterator it;
	bool first = true;
	for (it = container.begin(); it != container.end(); ++it)
	{
		if (!first)
			std::cout << ' ';
		std::cout << *it;
		first = false;
	}
	std::cout << std::endl;
}

template <typename Container>
typename Container::iterator findById(Container& container, int id)
{
	typename Container::iterator it = container.begin();
	while (it != container.end() && it->id != id)
		++it;
	return it;
}

template <typename Container>
void fordJohnson(Container& sequence)
{
	if (sequence.size() <= 1)
		return;

	Container winners;
	Container pending;
	typename Container::iterator it = sequence.begin();
	while (it != sequence.end())
	{
		Node first = *it;
		++it;
		if (it == sequence.end())
		{
			pending.push_back(first);
			break;
		}

		Node second = *it;
		++it;
		Node winner = first;
		Node loser = second;
		if (winner.value < loser.value)
		{
			winner = second;
			loser = first;
		}
		loser.partnerId = winner.id;
		winners.push_back(winner);
		pending.push_back(loser);
	}

	fordJohnson(winners);
	sequence = winners;

	size_t pairCount = pending.size();
	if (!pending.empty() && pending.back().partnerId == -1)
		--pairCount;
	std::vector<size_t> order;
	addJacobsthalOrder(order, pairCount);
	for (size_t i = 0; i < order.size(); ++i)
	{
		Node& node = pending[order[i]];
		typename Container::iterator partner = findById(sequence, node.partnerId);
		typename Container::iterator insertion = std::lower_bound(sequence.begin(), partner, node, compareNodes);
		sequence.insert(insertion, node);
	}

	if (!pending.empty() && pending.back().partnerId == -1)
	{
		Node& odd = pending.back();
		typename Container::iterator oddIt = sequence.begin();
		while (oddIt != sequence.end() && oddIt->value < odd.value)
			++oddIt;
		sequence.insert(oddIt, odd);
	}
}
