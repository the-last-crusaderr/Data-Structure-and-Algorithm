import os


def disk_usage(path):
    total = os.path.getsize(path)
    if os.path.isdir(path):
        for _ in os.listdir(path):
            child_path = os.path.join(path, _)
            total += os.path.getsize(child_path)

    return total


print(disk_usage("/home/the_last_crusaderr/Desktop/DS"))
