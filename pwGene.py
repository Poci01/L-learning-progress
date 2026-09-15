import string
import random

karakter = string.ascii_letters + string.digits

random_pw = "".join(random.choice(karakter) for _ in range(20))

print("Password acak 8 karakter: ", random_pw)
