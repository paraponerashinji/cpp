#include "PmergeMe.hpp"

static bool parsePositiveInt(const char *input, int &value)
{
    char *end = NULL;
    long parsed = std::strtol(input, &end, 10);
    if (input[0] == '\0' || *end != '\0' || parsed <= 0 || parsed > 2147483647L)
        return false;
    value = static_cast<int>(parsed);
    return true;
}

bool compareNodes(const Node& a, const Node& b) {
    return a.value < b.value;
}

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other)
{
	(void)other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	(void)other;
	return *this;
}

PmergeMe::~PmergeMe() {}

void addJacobsthalOrder(std::vector<size_t>& order, size_t size)
{
    if (size == 0)
        return;
    order.push_back(0);

    size_t lower = 1;
    size_t previous_limit = 0;
    size_t limit = 2;
    while (lower < size)
    {
        size_t upper = limit;
        if (upper >= size)
            upper = size - 1;
        for (size_t index = upper; index >= lower; --index)
        {
            order.push_back(index);
            if (index == lower)
                break;
        }
        lower = upper + 1;
        size_t currentlimit = limit;
        limit = 2 * limit + previous_limit;
        previous_limit = currentlimit;
    }
}

PmergeMe::PmergeMe(int ac, char **av){

    std::deque<int> inputDeque;
    std::vector<int> inputVector;
    for (int i = 1; i < ac; ++i)
    {
        int value = 0;
        if (!parsePositiveInt(av[i], value))
        {
            std::cerr << "Error: Invalid input value \"" << av[i] << "\"." << std::endl;
			exit(1);
        }
        inputDeque.push_back(value);
        inputVector.push_back(value);

    }
    std::cout << "Before: ";
    display(inputDeque);

    clock_t start1 = clock();
    mergeInsertSortDeque(inputDeque);
    clock_t end1 = clock();
    double time1 = static_cast<double>(end1 - start1) * 1000000.0 / CLOCKS_PER_SEC;
    clock_t start2 = clock();
    mergeInsertSortVector(inputVector);
    clock_t end2 = clock();
    double time2 = static_cast<double>(end2 - start2) * 1000000.0 / CLOCKS_PER_SEC;

    std::cout << "Deque After: ";
    display(inputDeque);
    std::cout << "Time to process a range of " << inputDeque.size() << " elements with std::deque container: " << time1 << " us" << std::endl;
    std::cout << "Vector After: ";
    display(inputVector);
    std::cout << "Time to process a range of " << inputDeque.size() << " elements with std::vector container: " << time2 << " us" << std::endl;
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

void PmergeMe::mergeInsertSortVector(std::vector<int>& arr)
{
    std::vector<Node> nodes;
    for (std::vector<int>::const_iterator it = arr.begin(); it != arr.end(); ++it)
        nodes.push_back(Node(*it, static_cast<int>(nodes.size())));
    fordJohnson(nodes);
    arr.clear();
    for (std::vector<Node>::const_iterator it = nodes.begin(); it != nodes.end(); ++it)
        arr.push_back(it->value);
}