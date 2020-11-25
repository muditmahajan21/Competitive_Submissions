

def wrap(string, max_width):
    res = ""
    for i in range(0, len(string) + 1, max_width):
        res += string[i:i + max_width]
        res += "\n"
    return res

