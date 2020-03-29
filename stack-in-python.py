# STACK IMPLEMENTATION USING LIST

# initially declare a empty list
stack = []

# push elements into stack using append() method
stack.append('s')
stack.append('t')
stack.append('a')
stack.append('c')
stack.append('k')

# display stack elements after push
print('Stack after push elements')
print(stack)

# pop element from the stack in LIFO order then display poped elements
print('Element pop form stack')
print(stack.pop())
print(stack.pop())
print(stack.pop())
print(stack.pop())
print(stack.pop())

# display stack after removing all element from the stack
print('Empty stack after pop all the elements from stack')
print(stack)
