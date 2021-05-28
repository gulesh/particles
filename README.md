# particles

Implements particle systems using openGL

TODO: Add a representative image for your project here

## How to build

*Windows*

Open git bash to the directory containing this repository.

```
particles $ mkdir build
particles $ cd build
particles/build $ cmake -G "Visual Studio 16 2019" ..
particles/build $ start CS312-Particles.sln
```

Your solution file should contain two projects: `pixmap_art` and `pixmap_test`.
To run from the git bash command shell, 

```
particles/build $ ../bin/Debug/billboard
particles/build $ ../bin/Debug/confetti
particles/build $ ../bin/Debug/demo
```

*macOS*

Open terminal to the directory containing this repository.

```
particles $ mkdir build
particles $ cd build
particles/build $ cmake ..
particles/build $ make
```

To run each program from build, you would type

```
particles/build $ ../bin/billboard
particles/build $ ../bin/confetti
particles/build $ ../bin/demo
```

## Results
1. **Intial Bollboard**

<img width="497" alt="Screen Shot 2021-04-30 at 2 22 10 PM" src="https://user-images.githubusercontent.com/60520906/119915043-9dfe7800-bf2f-11eb-9da2-1cdaccacf9c5.png">

2. **After Implementing position and Scaling**

<img width="500" alt="Screen Shot 2021-04-30 at 2 21 31 PM" src="https://user-images.githubusercontent.com/60520906/119915111-c0909100-bf2f-11eb-9038-3d4f3ab90dde.png">

3. **after applying the view-projection matrix**

https://user-images.githubusercontent.com/60520906/119915279-2c72f980-bf30-11eb-8469-4f9659b5509d.mov

4. **After setting billboard to face the camera**

https://user-images.githubusercontent.com/60520906/119915481-9e4b4300-bf30-11eb-8e21-b57f6fd0ec49.mov

The billboard is moving but since it is always facing camera it appears still.

## Confetti Implementation

1. **one particle movement** 

https://user-images.githubusercontent.com/60520906/119915636-eec2a080-bf30-11eb-95e7-3d7e940c893d.mov

2. **500 particles Movements**

https://user-images.githubusercontent.com/60520906/119915872-67c1f800-bf31-11eb-9743-ec038091a7e5.mov

3. **500 particles with cheap sort**
```
for each particle
   d2 = distance from particle to camera
   d1 = distance from previous particle to camera
   if d2 < d1
      swap(particle, previous particle)
```

https://user-images.githubusercontent.com/60520906/119916046-c25b5400-bf31-11eb-995e-a9c94196b974.mov

## Unique particle implementation: Explosion

https://user-images.githubusercontent.com/60520906/119916220-1c5c1980-bf32-11eb-84b8-d02ad28d685f.mov


