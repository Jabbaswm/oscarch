## Running the `nextDate` example

These instructions assume you cloned this repository into your local machine using Git.

Software requirements:
* Linux and Mac OS: install `gcc`, `g++` (it may come with gcc), `cmake`, and `make`
* Windows: install [MSYS2 64bits](https://www.msys2.org/), open the MSYS2 terminal, and install the following programs (via the command `pacman -S <prog_name>`:
    * `mingw-w64-x86_64-gcc` 
    * `mingw-w64-x86_64-cmake`
    * `mingw-w64-x86_64-make`
* (Optional) Any system: Install [CLion (Student edition)](https://www.jetbrains.com/student/)

### Running the example on the terminal

On **Linux and Mac OS**, open a terminal, change directory to [next_date_example](next_date_example), and run the script [./build_run_linux.sh](next_date_example/build_run_linux.sh)

Note: doing a clean compilation/building will require deleting the `build-linux` directory (`rm -r build-linux`)

On **Windows**, open the MSYS2 MinGW terminal, change directory to [next_date_example](next_date_example), and run the script [./build_run_win_msys2.sh](next_date_example/build_run_win_msys2.sh)

Note: doing a clean compilation/building will require deleting the `build-win-msys2` directory (`rm -r build-win-msys2`)

### Running the example on CLion

Configuration: once you install CLion it will guide you through configuring MinGW within the IDE. It should work smoothly. However, for any problem, check [this page](https://www.jetbrains.com/help/clion/quick-tutorial-on-configuring-clion-on-windows.html#MinGW), which shows how to configure it step by step.

Follow the next steps after you have configured CLion correctly.

Open CLion, click on `File --> Open...`, select the [next_date_example](next_date_example) directory, and click `OK`.

Then click on `Build --> Build project`, wait until it finishes, and then click on `Run --> Run 'nextdate_exec'`

Note: if there is any problem with the building step, you can reload the project by clicking `File --> Reload CMake project`
