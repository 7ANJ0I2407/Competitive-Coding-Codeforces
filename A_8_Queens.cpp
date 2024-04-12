def is_attacking(new_queen, queens):
    x, y = new_queen
    for qx, qy in queens:
        if x == qx or y == qy or abs(x - qx) == abs(y - qy):
            return True
    return False

def can_place_queens(test_cases):
    for i, test_case in enumerate(test_cases, start=1):
        queens = set()
        for j in range(8):
            new_queen = test_case[j]
            if is_attacking(new_queen, queens):
                return f"No\n{i} {j+1}"
            queens.add(new_queen)
    return "Yes"

if __name__ == "__main__":
    t = int(input())
    test_cases = []
    for _ in range(t):
        test_case = []
        for _ in range(8):
            x, y = map(int, input().split())
            test_case.append((x, y))
        test_cases.append(test_case)
    
    print(can_place_queens(test_cases))
