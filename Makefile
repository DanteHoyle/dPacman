PROJECT = dPacman
CC = g++
SFML-INCLUDE = E:\Code\C++\libs\mingw32\include
SFML-LIB = E:\Code\C++\libs\mingw32\include
CFLAGS = -I -Wall

SRC_FOLDER := ./src

# -- do not edit below --

all: $(BIN)/$(PROJECT)

run: clean all
	clear
	@echo "🚀 Executing..."

$(BIN)/$(PROJECT): $(SRC_FOLDER)/*.cpp
	@echo "🚧 Building..."
	$(CC) -I$(SFML-INCLUDE) -L$(SFML-LIB) $(SFML-PACKAGES) $(SRC_FOLDER)/*.cpp -o $(PROJECT)
