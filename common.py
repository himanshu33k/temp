import Book as bk
import Journal as jn
def getDetails(type_book):
    name = input("Enter the name: ")
    year = int(input("Enter the year: "))
    if (type_book == 1):
        return_list = bk.ReadBook()
        return_list.append("book")
        return_list.append(name)
        return_list.append(year)
    else:
        return_list = jn.journalDetails()
        return_list.append("journal")
        return_list.append(name)
        return_list.append(year)
    return return_list
def print_details(Records):
    for i in Records:
        if (i[3] == "book"):
            print("Book isbn: ", i[0])
            print("Book author: ", i[1])
            print("Book edition: ", i[2])
            print("Book name: ", i[4])
            print("Book year: ", i[5])
        else:
            print("Journal issn: ", i[0])
            print("Journal author: ", i[1])
            print("Journal edition: ", i[2])
            print("Journal name: ", i[4])
            print("Journal year: ", i[5])
opt = -1
L = []
while(opt != 4):
    opt = int(input("Enter 1- add book, 2- add journal, 3- print, 4- exit: "))
    if (opt == 1):
        L.append(getDetails(1))
        print("record inserted")
    elif (opt == 2):
        L.append(getDetails(2))
        print("record inserted")
    elif (opt == 3):
        print_details(L)