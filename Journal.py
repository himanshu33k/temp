def journalDetails():
    ISSN = int(input("Enter ISSN number: "))
    publisher = input("Enter Publisher name: ")
    volume = int(input("Enter the voulume: "))
    return [ISSN, publisher, volume]
