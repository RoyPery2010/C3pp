# Variables
ANTLR_JAR=/usr/local/lib/antlr-4.13.2-complete.jar
GRAMMAR=C3pp.g4
GENERATED_DIR=generated
SRC=src
BUILD=build
BIN=c3++c

CXX=g++
CXXFLAGS=-std=c++17 -I$(GENERATED_DIR) -I/usr/local/include/antlr4-runtime
LDFLAGS=-lantlr4-runtime
ANTLR_CPP_SRCS=$(wildcard $(GENERATED_DIR)/*.cpp)
SRC_SRCS=$(wildcard $(SRC)/*.cpp)
OBJS=$(patsubst $(SRC)/%.cpp,$(BUILD)/%.o,$(SRC_SRCS)) $(patsubst $(GENERATED_DIR)/%.cpp,$(BUILD)/%.o,$(ANTLR_CPP_SRCS))

# Rules
all: antlr $(BIN) 

$(BIN): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

$(BUILD)/%.o: $(SRC)/%.cpp
	mkdir -p $(BUILD)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD)/%.o: $(GENERATED_DIR)/%.cpp
	mkdir -p $(BUILD)
	$(CXX) $(CXXFLAGS) -c $< -o $@

antlr: $(GRAMMAR)
	mkdir -p $(GENERATED_DIR)
	java -jar $(ANTLR_JAR) -Dlanguage=Cpp -visitor -o $(GENERATED_DIR) $(GRAMMAR)

clean:
	rm -rf $(BUILD) $(BIN) $(GENERATED_DIR)/*.cpp $(GENERATED_DIR)/*.h

.PHONY: all clean
