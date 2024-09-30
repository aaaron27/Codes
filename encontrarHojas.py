def encontrarHojas(tree, hojas):
    if not tree: return []

    r, L, R = tree

    if not L and not R: hojas.append(r)

    if L: encontrarHojas(L, hojas)
    if R: encontrarHojas(R, hojas)
    return hojas;

def encontrarNodosInternos(tree, nodos):
    if not tree: return []

    r, L, R = tree
    if L and R: nodos.append(r)

    if L: encontrarNodosInternos(L, nodos)
    if R: encontrarNodosInternos(R, nodos)
    return nodos

def esCompleto(tree):
    if not tree: return True
    r, L, R = tree

    if L and not R: return False
    elif R and not L: return False

    return esCompleto(L) and esCompleto(R)

tree = [50, [25, [15, [13, [], []], []],[26, [],[]]], [75,[74, [],[]],[78,[],[]]]]

print(encontrarHojas(tree, []))
print(encontrarNodosInternos(tree, []))
print(esCompleto(tree))
