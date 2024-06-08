# --------------------------------------------------------
#? @file      makefile
#? @author    @ZouariOmar (zouariomar20@gmail.com)
#? @brief     IDE__VSC
#? @version   0.1
#? @date      2024-06-06
#? @copyright Copyright (c) 2024
# --------------------------------------------------------

# Define the C compiler to use
CC = gcc

# Define the source file
SRC_DIR = project/src/main.c

# Define the output directory
OUT_DIR = bin/build

# Choose the name of the executable
NAME = app

# Full path to the output executable
APP = $(OUT_DIR)/$(NAME)

# 'make' build executable file 'app'
# app > run
app:
	@$(CC) $(SRC_DIR) -o $(APP)
	@echo --- Executing 'app' build complete ! --- & pause
	@echo.  & echo.

# run cmd option ::: make run <NAME=app_name>
run: app
	@./$(APP)
	@echo.  & echo.
	@echo --- Executing 'run: app' complete ! --- & pause

# move option ::: make move <NAME=app_name>
move:
	@echo --- Moving "$(NAME).exe" from "$(OUT_DIR)" to "bin\release" ---
	@move "bin\debug\$(NAME).exe" "bin\release"
	@echo --- Moving complete ! --- & pause

# clean option ::: make clean <NAME=app_name> <OUT_DIR=path>
clean:
	@echo --- Deleting "$(NAME).exe" from "$(OUT_DIR)" ---
	@cd $(OUT_DIR) & del "$(NAME).exe"
	@echo --- Cleanup complete ! --- & pause

# cleanAll option ::: make cleanAll <OUT_DIR=path>
cleanAll:
	@echo --- Deleting all files in "$(OUT_DIR)" ---
	@cd $(OUT_DIR) & dir
	@del "$(OUT_DIR)\*"
	@echo --- All_Cleanup complete ! --- & pause