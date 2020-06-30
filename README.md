# bombardier
trafficSignal.cpp

# Usage
Compile using:

```gcc -Wall trafficSignal.cpp -o trafficSignal.out```

will result in a executable file that can be run using:

```./trafficSignal.out```

# Sample Output
```
Signal 1(E->W)  Signal 2(W->E)  Signal 3(N->S)  Signal 4(S->NS)
Red              Red             Red             Red             (Retain for 2 seconds) 
Amber            Amber           Red             Red             (Retain for 2 seconds) 
Green            Green           Red             Red             (Retain for 14 seconds) 
Amber            Amber           Red             Red             (Retain for 2 seconds) 
Red              Red             Red             Red             (Retain for 2 seconds) 
Red              Red             Amber           Amber           (Retain for 2 seconds) 
Red              Red             Green           Green           (Retain for 14 seconds) 
Red              Red             Amber           Amber           (Retain for 2 seconds) 
Red              Red             Red             Red             (Retain for 2 seconds) 
Amber            Amber           Red             Red             (Retain for 2 seconds) 
Green            Green           Red             Red             (Retain for 14 seconds) 
Amber            Amber           Red             Red             (Retain for 2 seconds) 
Red              Red             Red             Red             (Retain for 2 seconds) 
Red              Red             Amber           Amber           (Retain for 2 seconds) 
Red              Red             Green           Green           (Retain for 14 seconds) 
Red              Red             Amber           Amber           (Retain for 2 seconds) 
Red              Red             Red             Red             (Retain for 2 seconds) 
Amber            Amber           Red             Red             (Retain for 2 seconds) 
Green            Green           Red             Red             (Retain for 14 seconds)
...
```
# Note:
The delay function was created manually as only standard c library should be used. Otherwise other methods of sleep for CPU could also be used.
