#!/bin/bash

cd ./src

# create the externals folder and move over the recently made d2x_cpp binary
mkdir -p externals

wget https://github.com/akai-katto/dandere2x_externals_static/releases/download/0.0.0/dandere2x_cpp -p externals

# download waifu2x-ncnn-vulkan and extract it the way d2x expects it
cd externals
wget https://github.com/nihui/waifu2x-ncnn-vulkan/releases/download/20210210/waifu2x-ncnn-vulkan-20210210-macos.zip
unzip waifu2x-ncnn-vulkan-20210210-macos.zip
mv waifu2x-ncnn-vulkan-20210210-macos ./waifu2x-ncnn-vulkan
rm waifu2x-ncnn-vulkan-20210210-macos.zip
cd ..

# create workspace folder (this needs to exist I think?)
mkdir -p workspace
echo success, be sure to install requirements and you should be good to go with "python3 main.py" now. 
