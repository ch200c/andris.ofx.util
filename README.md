# andris.ofx.util
Utility library for `andris.ofx` plugins.

## Dependencies
* [OpenFX](https://github.com/ofxa/openfx)
* [OpenCV](https://github.com/opencv/opencv)

## How to build
* Clone the repository
* Run `cmake` in this project's root folder with `-DOPENFX_DIR:PATH` pointing to the root folder of OpenFX source and `-DOpenCV_DIR:PATH` pointing to the directory where you have built OpenCV, e.g. `cmake -DOPENFX_DIR:PATH=YOUR_OPENFX_ROOT_DIR -DOpenCV_DIR:PATH=YOUR_OPENCV_BUILD_DIR`

## Acknowledgements
CMake files adapted from [how-to-export-cpp-library](https://github.com/robotology/how-to-export-cpp-library)