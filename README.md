
# CCalc - Simple Calculator using GTK

CCalc is a simple calculator application built using the GTK library in C. It provides basic arithmetic operations such as addition, subtraction, multiplication, and division.

Even though it is a simple calculator, programming it wasn't simple at all, compared to pycalc, C was a lot more verbose, and it was new for me the ways C handles memory.
## Features

- Addition
- Subtraction
- Multiplication
- Division
- Clear (C)
- Enter (E)

## Usage

Simply run the compiled executable to launch the calculator interface. You can perform calculations by clicking the buttons provided for each number and operation.

## Compilation

To compile the CCalc application, use the following command:

```bash
gcc -o ccalc app.c `pkg-config --cflags --libs gtk+-3.0`
```

To execute it:
```bash
./ccalc
```

Make sure you have the GTK library installed on your system before compiling the application.

## Dependencies

- GTK+ 3.0

## Usage Example

1. Compile the application using the provided compilation command.
2. Run the compiled executable (`ccalc`).
3. Use the buttons to input numbers and perform calculations.
4. Click "Enter (E)" to display the result.

## License

This project is licensed under the [MIT License](LICENSE).
```
