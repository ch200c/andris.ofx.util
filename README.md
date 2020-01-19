# andris.ofx.util
Utility library for `andris.ofx` plugins.

## Dependencies
* [OpenFX](https://github.com/ofxa/openfx)
* [OpenCV](https://github.com/opencv/opencv)

## How to build (Windows)
* Clone the repository.
* Run `cmake` in this project's root directory with 
    * `-DOPENFX_DIR:PATH` pointing to the root directory of OpenFX source
    * `-DOpenCV_DIR:PATH` pointing to the directory where you have built OpenCV
* Open the generated solution file and build the project.

## Acknowledgements
CMake files adapted from [how-to-export-cpp-library](https://github.com/robotology/how-to-export-cpp-library).
