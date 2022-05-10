x = 431955503618234519808008749742
y = 176325509039323911968355873643
z = 98486971404861992487294722613
p = 455470209427676832372575348833
a = 429

xi = pow(x, 2298, p)
yi = pow(y, -2929, p)
zi = pow(z, 631, p)

xii = (xi * yi) % p
yii = (xii * zi) % p
ga = pow(yii, a, p)
gaa = pow(yii, -a, p)

print("g :", yii)
zii = pow(yii, p-2, p)
print("g^-1 : ", zii)
print("g^a :", ga)
print("g^-a :", gaa)
pass_op = pow(zii, 429, p)
passw = (pass_op * x) % p
print("Password : ", passw)


"""

OUTPUT:

g : 52565085417963311027694339
g^-1 :  386506431948388234043577899453
g^a : 190938394687872884891831361620
g^-a : 442956820316148690889301696615
Password :  134721542097659029845273957

"""
