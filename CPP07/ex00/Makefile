SRCS = main.cpp
INC = whatever.hpp
OBJS = $(SRCS:.cpp=.o)
NAME = whatever
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