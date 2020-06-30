# bombardier
trafficSignal.cpp

# Usage
Compile using:

```gcc -Wall trafficSignal.cpp -o trafficSignal.out```

will result in a executable file that can be run using:

```./trafficSignal.out```

# Sample Output
```
Signal (E->W) 	Signal (W->E) 	Signal (N->S) 	Signal (S->NS)
Red 		 Red 		 Red 		 Red		 (Retain for 2 Seconds)
Green 		 Green 		 Red 		 Red		 (Retain for 16 Seconds)
Amber 		 Amber 		 Red 		 Red		 (Retain for 2 Seconds)
Red 		 Red 		 Red 		 Red		 (Retain for 2 Seconds)
Red 		 Red 		 Green 		 Green		 (Retain for 16 Seconds)
Red 		 Red 		 Amber 		 Amber		 (Retain for 2 Seconds)
Red 		 Red 		 Red 		 Red		 (Retain for 2 Seconds)
Green 		 Green 		 Red 		 Red		 (Retain for 16 Seconds)
Amber 		 Amber 		 Red 		 Red		 (Retain for 2 Seconds)
Red 		 Red 		 Red 		 Red		 (Retain for 2 Seconds)
Red 		 Red 		 Green 		 Green		 (Retain for 16 Seconds)
Red 		 Red 		 Amber 		 Amber		 (Retain for 2 Seconds)
Red 		 Red 		 Red 		 Red		 (Retain for 2 Seconds)
Green 		 Green 		 Red 		 Red		 (Retain for 16 Seconds
...
```
# Note:
The delay function was created manually as only standard c library should be used. Otherwise other methods of sleep for CPU could also be used.
