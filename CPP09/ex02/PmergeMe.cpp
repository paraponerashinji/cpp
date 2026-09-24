#include "PmergeMe.hpp"

void addJacobsthalOrder(std::vector<size_t>& order, size_t pendingSize)
{
    if (pendingSize == 0)
        return;
    order.push_back(0);

    size_t lower = 1;
    size_t previousBoundary = 0;
    size_t boundary = 2;
    while (lower < pendingSize)
    {
        size_t upper = boundary;
        if (upper >= pendingSize)
            upper = pendingSize - 1;
        for (size_t index = upper; index >= lower; --index)
        {
            order.push_back(index);
            if (index == lower)
                break;
        }
        lower = upper + 1;
        size_t currentBoundary = boundary;
        boundary = 2 * boundary + previousBoundary;
        previousBoundary = currentBoundary;
    }
}

PmergeMe::PmergeMe(int ac, char **av){

    std::deque<int> inputDeque;
    std::list<int> inputList;

    for (int i = 1; i < ac; ++i)
    {
        int value = atoi(av[i]);
        if (value <= 0)
        {
            std::cerr << "Error: Invalid input value \"" << av[i] << "\"." << std::endl;
			exit(1);
        }
        inputDeque.push_back(value);
        inputList.push_back(value);
    }
    std::cout << "Before: ";
    display(inputDeque);

    clock_t start1 = clock();
    mergeInsertSortDeque(inputDeque);
    clock_t end1 = clock();
    double time1 = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC * 1000;

    clock_t start2 = clock();
    mergeInsertSortList(inputList);
    clock_t end2 = clock();
    double time2 = static_cast<double>(end2 - start2) / CLOCKS_PER_SEC * 1000;

    std::cout << "After: ";
    display(inputDeque);
    std::cout << "Time to process a range of " << inputDeque.size() << " elements with std::deque container: " << time1 << " us" << std::endl;
    std::cout << "Time to process a range of " << inputList.size() << " elements with std::list container: " << time2 << " us" << std::endl;
    if (inputDeque == std::deque<int>(inputList.begin(), inputList.end()))
        std::cout << "The sorted sequences are equal." << std::endl;
    else
        std::cout << "The sorted sequences are not equal." << std::endl;
}

void PmergeMe::mergeInsertSortDeque(std::deque<int>& arr)
{
    std::deque<Node> nodes;
    for (std::deque<int>::const_iterator it = arr.begin(); it != arr.end(); ++it)
        nodes.push_back(Node(*it, static_cast<int>(nodes.size())));
    fordJohnson(nodes);
    arr.clear();
    for (std::deque<Node>::const_iterator it = nodes.begin(); it != nodes.end(); ++it)
        arr.push_back(it->value);
}

void PmergeMe::mergeInsertSortList(std::list<int>& arr)
{
    std::list<Node> nodes;
    for (std::list<int>::const_iterator it = arr.begin(); it != arr.end(); ++it)
        nodes.push_back(Node(*it, static_cast<int>(nodes.size())));
    fordJohnson(nodes);
    arr.clear();
    for (std::list<Node>::const_iterator it = nodes.begin(); it != nodes.end(); ++it)
        arr.push_back(it->value);
}
