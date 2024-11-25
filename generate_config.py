import sys

# Define the allowed features
ALLOWED_FEATURES = {"ADD", "SUB", "MUL", "POW", "DIV", "REM"}

def generate_config(features):
    config_lines = ["#ifndef CONFIG_H", "#define CONFIG_H", ""]

    for feature in features:
        # Check if the feature is allowed
        if feature.strip() in ALLOWED_FEATURES:
            config_lines.append(f"#define ENABLE_{feature.strip()}")
        else:
            print(f"Warning: '{feature.strip()}' is not a valid feature and will be ignored.")

    config_lines.append("")
    config_lines.append("#endif // CONFIG_H")

    with open("config.h", "w") as f:
        f.write("\n".join(config_lines))
    
    print("config.h generated successfully!")

if __name__ == "__main__":
    generate_config(sys.argv[1:])
