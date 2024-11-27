
# Blaise Pascal Calculator

This project implements a basic calculator application with modular functionality for addition, subtraction, multiplication, division, power, and remainder calculations. You can configure which features are included at compile time.

<p align='center'>
<img width="95%" src="./images/Blaise Pascal_ITI.png"/>
</p> 


## Features

The calculator supports the following operations:

* **ADD:** Addition
* **SUB:** Subtraction
* **MUL:** Multiplication
* **DIV:** Division
* **POW:** Power
* **REM:** Remainder

## Configuration

You can choose which features to enable when building the project using the `FEATURES` CMake variable.  Here's how:

1. **Configure:** Use the following command to configure the project with CMake, specifying the desired features:

   ```bash
   cmake -S . -B build -G "MinGW Makefiles" -DFEATURES="<FEATURES>"
   ```

   Replace `<FEATURES>` with a space-separated list of the features you want to include. **For example**:

   ```bash
   cmake -S . -B build -G "MinGW Makefiles" -DFEATURES="ADD SUB MUL"  # Enables addition, subtraction, and multiplication
   cmake -S . -B build -G "MinGW Makefiles" -DFEATURES="POW DIV REM" # Enables power, division, and remainder
   cmake -S . -B build -G "MinGW Makefiles" -DFEATURES="ADD SUB MUL DIV POW REM" # Enables all features
   ```
   The `-B build` part creates a separate build directory, keeping your source tree clean.  The `-G "MinGW Makefiles"` part tells cmake to use MinGW as the compiler.

2. **Build:** After configuring, build the project using:

   ```bash
   cmake --build build
   ```

This will compile the code with the selected features enabled.

## Running

After building, the executable will be located in the `build` directory. You can run it from the command line:

```bash
build/BlaisePascal  
```


The calculator will present a menu of available operations based on your configuration. Follow the prompts to perform calculations.

## Example Usage

Here's an example of how to configure and build the calculator with addition, subtraction, and multiplication enabled:

```bash
cmake -S . -B build -G "MinGW Makefiles" -DFEATURES="ADD SUB MUL"
cmake --build build
build/BlaisePascal # Run the calculator on Windows.
```

## Important Considerations

* **Feature Names:** Ensure you use the correct feature names (ADD, SUB, MUL, DIV, POW, REM) in all uppercase.
* **Spaces:** Use spaces to separate the feature names in the `FEATURES` variable.

