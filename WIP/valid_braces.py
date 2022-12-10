class Stack:
    items = []

    def __init__(self, items: list[str]) -> None:
        for item in items:
            self.items.append(item)

    def __len__(self) -> str:
        return len(self.items)

    def pop(self) -> str:
        last_item = self.items.pop
        return last_item

    def push(self, item) -> None:
        self.items.append(item)

    def peek(self) -> str:
        if len(self.items) == 0:
            raise IndexError
        else:
            return self.items[-1]


def valid_braces(string: str):
    stack = Stack()

    # Iterate through string
    # If char is opening brace. Add to stack
    # If char is closing brace. Compare with top element on stack
    # If matches, pop

    # After iteration, if len(stack) != 0, invalid braces
