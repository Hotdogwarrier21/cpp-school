#!/bin/bash

# Check if the src directory exists
if [ ! -d "src" ]; then
    echo "Error: 'src' directory not found!"
    exit 1
fi

# Check if build.sh exists and is executable
if [ ! -f "build.sh" ] || [ ! -x "build.sh" ]; then
    echo "Error: 'build.sh' not found or not executable!"
    exit 1
fi

# Walk through the src directory
find src -type f -name '*.cpp' | while read -r cpp_file; do
    # Call build.sh with the path to the cpp file
    ./build.sh "$cpp_file"
    
    # Check if the build failed and print an error message
    if [ $? -ne 0 ]; then
        echo "Failed to build: $cpp_file"
        exit 1
    fi
done
