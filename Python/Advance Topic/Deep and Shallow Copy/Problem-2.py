# Problem Example: Undo Feature in a Drawing App
# Problem:
# You're building a drawing app. Each time the user draws, their canvas state is saved to a history list. You want to allow undo. But if you use shallow copy, changing the current drawing will also change the history!


# Solution: Use Deep Copy for Independent Snapshots

import copy

# Simulating a canvas (list of drawn shapes)
canvas = {"shapes": ["circle"]}

# History of canvas states
history = []

# Save current canvas to history using deep copy
history.append(copy.deepcopy(canvas))

# Add new shape
canvas["shapes"].append("square")

# Save again
history.append(copy.deepcopy(canvas))

# Add another shape
canvas["shapes"].append("triangle")

# Undo: go back to the first snapshot
print("Initial:", history[0])  # {'shapes': ['circle']}
print("Current:", canvas)      # {'shapes': ['circle', 'square', 'triangle']}
