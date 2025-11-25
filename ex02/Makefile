NAME = FragTrap
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -Wshadow 

SOURCES = main.cpp ClapTrap.cpp Scavtrap.cpp FragTrap.cpp
		
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJECTS) 

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all