# import argparse
# import sys

# #!/usr/bin/env python3

# def prompt_int(prompt, default=None):
#     try:
#         value = input(f"{prompt}{' ['+str(default)+']' if default is not None else ''}: ").strip()
#         if value == "" and default is not None:
#             return default
#         return int(value)
#     except (ValueError, EOFError):
#         print("Invalid number.", file=sys.stderr)
#         sys.exit(1)

# def print_table_for(n, upto):
#     for i in range(1, upto + 1):
#         print(f"{n} x {i} = {n * i}")

# def print_full_table(n):
#     # Print header
#     row = ["   "] + [f"{i:4d}" for i in range(1, n + 1)]
#     print("".join(row))
#     for i in range(1, n + 1):
#         line = [f"{i:3d}"] + [f"{i*j:4d}" for j in range(1, n + 1)]
#         print("".join(line))

# def main():
#     parser = argparse.ArgumentParser(description="Multiplication table utility")
#     parser.add_argument("number", nargs="?", type=int, help="number to show table for (omit to be prompted)")
#     parser.add_argument("upto", nargs="?", type=int, help="upto multiplier (default 10)", default=10)
#     parser.add_argument("--full", "-f", action="store_true", help="print full NxN table where N is the first argument or prompted")
#     args = parser.parse_args()

#     if args.full:
#         n = args.number if args.number is not None else prompt_int("Enter N for full NxN table", 10)
#         if n <= 0:
#             print("N must be positive.", file=sys.stderr)
#             sys.exit(1)
#         print_full_table(n)
#         return

#     n = args.number if args.number is not None else prompt_int("Enter number", 1)
#     upto = args.upto if args.number is not None else prompt_int("Enter upto (multiplier)", args.upto)
#     if upto <= 0:
#         print("upto must be positive.", file=sys.stderr)
#         sys.exit(1)
#     print_table_for(n, upto)

# if __name__ == "__main__":
#     main()


# n = int(input("Enter number: "))

# i = 1
# while i <= 10:
#     print(i*n)
#     i += 1


# i = 1
# while i <= 10:
#     if i % 8 == 0:
#         break
#     print(i)
#     i += 1

i = 2
while i <= 10:
    print(i)
    i += 2