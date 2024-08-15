#!/bin/bash

# Check if a C++ file path is provided
if [ -z "$1" ]; then
    echo "Usage: $0 <path_to_cpp_file> [output_directory(optional)]"
    exit 1
fi

# Get the C++ file path from the first argument
CPP_FILE="$1"

# Check if the file exists
if [ ! -f "$CPP_FILE" ]; then
    echo "Error: File '$CPP_FILE' not found!"
    exit 1
fi

# Get the output directory from the second argument or default to ./build/
OUTPUT_DIR="./build"

# Create the output directory if it doesn't exist
mkdir -p "$OUTPUT_DIR"

# Get the filename without extension
FILE_NAME=$(basename "$CPP_FILE" .cpp)

# Compile the C++ file
g++ "$CPP_FILE" -o "$OUTPUT_DIR/$FILE_NAME"

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful: $OUTPUT_DIR/$FILE_NAME"
else
    echo "Compilation failed!"
    exit 1
fi
