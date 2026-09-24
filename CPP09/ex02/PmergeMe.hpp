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

void addJacobsthalOrder(std::vector<size_t>& order, size_t pendingSize);


class PmergeMe
{
	public:
	PmergeMe(int ac, char **av);
	template <typename T>
	void display(const T& container);
	void mergeInsertSortDeque(std::deque<int>& arr);
	void mergeInsertSortList(std::list<int>& arr);
};

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
	std::vector<Node> pending;
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

	const bool hasOdd = !pending.empty() && pending.back().partnerId == -1;
	size_t pairCount = pending.size();
	if (hasOdd)
		--pairCount;
	std::vector<size_t> order;
	addJacobsthalOrder(order, pairCount);
	for (size_t i = 0; i < order.size(); ++i)
	{
		const Node& node = pending[order[i]];
		typename Container::iterator partner = findById(sequence, node.partnerId);
		typename Container::iterator insertion = sequence.begin();
		while (insertion != partner && insertion->value < node.value)
			++insertion;
		sequence.insert(insertion, node);
	}

	if (hasOdd)
	{
		const Node& odd = pending.back();
		typename Container::iterator oddIt = sequence.begin();
		while (oddIt != sequence.end() && oddIt->value < odd.value)
			++oddIt;
		sequence.insert(oddIt, odd);
	}
}

template <typename T>
void PmergeMe::display(const T& container)
{
	typename T::const_iterator it;
	for (it = container.begin(); it != container.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}
