def full_name(first, last):
    name =f'{first} {last}'
    return name

#Take parameters in Order(serial wise)
# name = full_name('Rahim','Khan')
# print(name)

name =full_name(last='Khan',first='Rahim')
print(name)