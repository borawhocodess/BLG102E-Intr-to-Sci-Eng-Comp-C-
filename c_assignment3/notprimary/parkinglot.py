from dataclasses import dataclass

@dataclass(frozen=True, order=True)
class Slot:
    x: int
    y: int


def mh(p1, p2):
    # returns Manhatten Distance between two points
    return abs(p1.x - p2.x) + abs(p1.y - p2.y)


def best_of_equals(slots):
    # returns the best among equals; min x, than min y
    # also undo zero-based indexing.
    best = sorted(slots)[0]
    return Slot(best.x + 1, best.y + 1)


def calculate_best_slot(cars, size):
    # returns the best Slot and distance
    best_slots = [] 
    best_distance = 0 

    for x in range(size):
        for y in range(size):
            distance = min([mh(car, Slot(x,y)) for car in cars])
            if distance > best_distance:
                best_distance = distance
                best_slots = [Slot(x, y)]
            elif distance == best_distance:
                best_slots.append(Slot(x, y))

    return best_of_equals(best_slots), best_distance

# this is the input, length of the carpark and number of cars 
# already parked and their positions.
size = 5
cars_parked = [
    Slot(3, 2), Slot(5, 2), Slot(5, 3), Slot(4, 3), Slot(2, 2),  # valid inputs
    Slot(6, 6), Slot(0, -1)  # invalid inputs
]

# get rid of the cars outside the boundry and adjust positions
# for zero based index
cars = [
    Slot(car.x-1, car.y-1) for car in cars_parked if 0 < car.x <= size and 0 < car.y <= size
]

best_slot, best_distance = calculate_best_slot(cars, size)

print(f"Best slot: {best_slot}, best distance: {best_distance}")


