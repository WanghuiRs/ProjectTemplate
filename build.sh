#!/bin/bash

rm -rf cmake_build_folder
mkdir cmake_build_folder

cd cmake_build_folder

cmake ..


# dir="$(dirname "$0")"

# ./CodeMlcs ../data/ gen.txt 6_75.txt