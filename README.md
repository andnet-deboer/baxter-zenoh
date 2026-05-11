## Setup steps

1. 
```
docker build -t baxter_bridge:latest .
```

2. 
```
docker run --rm --network=host -t baxter_bridge:latest .
```