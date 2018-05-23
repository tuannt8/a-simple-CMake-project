# A Simple CMake project
Suppose that we want to make an executable project `exec`. This project have a two sub library `lib1` and `lib2`. The library `lib1` depends on the library `lib2`.

To organize the project, we make a sub folder `sub_lib` for each library and a sub folder for the executable code name `main`. So here is the file structure

```
.
|- sub_lib_1
|  |- CMakelists.txt
|  |- code file(s)
|
|- sub_lib_2
|  |- CMakelists.txt
|  |- code file(s)
|
|- main
|  |- code file(s)
|
|- CMakeLists.txt
```

This sample is a minimal working example for starter. 

# How to run

Run these following command

```bash
git clone https://github.com/tuannt8/a-simple-CMake-project
cd a-simple-CMake-project
cmake CMakeLists.txt
make
```

Or use `CMake` GUI to build the project.