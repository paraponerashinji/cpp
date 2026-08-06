SRCS = main.cpp
INC = Array.hpp
OBJS = $(SRCS:.cpp=.o)
NAME = Array
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INC)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all