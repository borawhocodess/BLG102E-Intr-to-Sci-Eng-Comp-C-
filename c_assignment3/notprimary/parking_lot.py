size  = int(input("size: "))
while size > 50:
	size = int(input("size: "))

cars = int(input("cars: "))
if cars >= size*size:
	print("best slot : 0 0")
	exit()

parking_lot = [[0 for i in range(size)] for j in range(size)]
car_locations = [[0 for i in range(2)] for j in range(cars)]

for i in range(cars):
	car_x, car_y = input("locations: ").split()
	if int(car_x) > size or int(car_y) > size or int(car_x) < 1 or int(car_y) < 1:
		continue
	parking_lot[size-int(car_y)][int(car_x)-1] = 1
	car_locations[i][0] = size-int(car_y)
	car_locations[i][1] = int(car_x)-1

best_x, best_y, best_value= size, size, 0

for i in range(len(parking_lot)):
	for j in range(len(parking_lot[i])):
		if parking_lot[i][j] == 1:
			continue
		count = 0
		for car in car_locations:
			distance = abs(i - car[0]) + abs(j - car[1])
			if count == 0 or distance < value:
				value = distance
				count += 1
		if value > best_value or (value == best_value and (j+1 < best_x or (j+1 == best_x and size-i < best_y))):
			best_x = j + 1
			best_y = size - i
			best_value = value

print("best slot : {0} {1}".format(best_x, best_y))