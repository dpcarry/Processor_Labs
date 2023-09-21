1. What version of cmake is running in your environment?
    3.25.2
2. The paths used by target_sources and target_include_directories are relative, not absolute. What file or folder are they relative to?
    They are relative to the CMakeLists.txt file, located in the root directory.
3. What are some differences between cmake and ninja?
    cmake generates build files, while ninja is a build tool.
    cmake provides high degree of flexibility and customization, while ninja is known for speed and efficiency.
4. Why is it important to run cmake in its own directory?
    This ensures cleanliness and prevents unwanted interference between build and source code.