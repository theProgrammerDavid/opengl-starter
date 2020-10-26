
# opengl-starter

Starter project for OpenGL in C++. Uses GLEW and GLFW

## Dependencies

* CMake
    ``sudo apt install cmake``

* GLEW
    ```sudo apt-get install -y libglew-dev```

* GLFW
    ```sudo apt-get install -y libglfw3-dev```


## Instructions

* Source files (```.cpp```) go in ```src/```

* Header files go in ```include/```

* Modify the ``CMakeLists.txt`` file as per your project's requirements

* Create a ``build`` folder and ``cd`` into it and run ``cmake ..``     (pass cmake args as needed)

### Support for GLUT 
Add these to your ``CMakeLists.txt``
```cmake
find_package(GLUT REQUIRED)
include_directories( ... ${GLUT_INCLUDE_DIRS})
target_link_libraries(... ${GLUT_LIBRARY})
```
### Docs
* [CMake Tutorial](http://derekmolloy.ie/hello-world-introductions-to-cmake/)
* [GLFW Docs](https://www.glfw.org/docs/3.3/)
