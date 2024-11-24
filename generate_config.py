import sys

def generate_config(features):
    config_lines = ["#ifndef CONFIG_H", "#define CONFIG_H", ""]
    for feature in features:
        config_lines.append(f"#define ENABLE_{feature}")
    config_lines.append("")
    config_lines.append("#endif // CONFIG_H")

    with open("config.h", "w") as f:
        f.write("\n".join(config_lines))
    print("config.h generated successfully!")

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python generate_config.py <FEATURE1> <FEATURE2> ...")
        sys.exit(1)
    generate_config(sys.argv[1:])
