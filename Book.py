def ReadBook():
    ISBN = int(input("Read ISBN Number:"))
    author = input("Enter the author name:")
    edition = int(input("Enter the edition:"))
    return [ISBN, author, edition]

