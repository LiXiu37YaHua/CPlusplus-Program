from datetime import date

name = input('What is your name? ')
age = int(input('How old are you? '))
current_yr = date.today().year
print('Hello {0}! You were born in {1}'.format(name, current_yr - age))

