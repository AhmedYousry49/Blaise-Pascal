import argparse


VALID_OPERATIONS = {"MUL", "ADD", "SUB", "DIV", "POW", "REM"}

def main():
    
    parser = argparse.ArgumentParser(description="Generate a config.h file with #define macros for selected operations.")
    
    
    parser.add_argument(
        "operations",
        metavar="OP",
        nargs="+",
        help=f"List of operations (valid options: {', '.join(VALID_OPERATIONS)})"
    )
    
    # Parse the arguments
    args = parser.parse_args()
    selected_operations = set(args.operations)

    # Validate operations
    invalid_ops = selected_operations - VALID_OPERATIONS
    if invalid_ops:
        print(f"Error: Invalid operations specified: {', '.join(invalid_ops)}")
        print(f"Valid operations are: {', '.join(VALID_OPERATIONS)}")
        return

    # Generate the config.h content
    config_lines = []
    for operation in VALID_OPERATIONS:
        if operation in selected_operations:
            config_lines.append(f"#define {operation}")
        else:
            config_lines.append(f"// #define {operation}")
    
    # Write to config.h
    with open("config.h", "w") as config_file:
        config_file.write("// Auto-generated config.h file\n")
        config_file.write("// Uncommented macros indicate enabled operations\n")
        config_file.write("\n".join(config_lines) + "\n")
    
    print("config.h file generated successfully!")

if __name__ == "__main__":
    main()
