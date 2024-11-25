cd "$(dirname "$0")"

if [ ! -d "build" ]; then
    mkdir build
fi

cd build
cmake ..
make
echo "创建已完成,请进入build目录中运行:./app"
#若权限不够请终端执行：chmod +x build.sh