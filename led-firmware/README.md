# LED Firmware (embedded example)

Build with ARM GCC toolchain and CMake.

Build steps:

```sh
mkdir build
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=../arm-gcc-toolchain.cmake
cmake --build .
```

Artifacts produced in `build/`:

- `firmware.elf`
- `firmware.hex`
- `firmware.bin`
