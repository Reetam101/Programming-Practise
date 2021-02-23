def travel(m, n, store):
    key = f'{m}, {n}'

    if key in store:
        return store[key]
    if m == 1 and n == 1:
        return 1
    if m == 0 or n == 0:
        return 0
    store[key] = travel(m-1, n, store) + travel(m, n-1, store)
    return store[key]

print(travel(3, 3, {}))    
print(travel(18, 18, {}))