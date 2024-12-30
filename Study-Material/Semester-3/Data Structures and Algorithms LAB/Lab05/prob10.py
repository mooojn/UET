import time

numbers = []
append_times = []

for i in range(1, 101):
    start_time = time.perf_counter()  
    numbers.append(i)  
    end_time = time.perf_counter()  

    append_times.append(end_time - start_time)

for index, time_taken in enumerate(append_times):
    print(f"Time to append {index + 1}: {time_taken:.10f} seconds")

increasing_time = all(append_times[i] <= append_times[i + 1] for i in range(len(append_times) - 1))

if increasing_time:
    print("The time taken to append integers is generally increasing as the list grows.")
else:
    print("The time taken to append integers does not consistently increase.")
