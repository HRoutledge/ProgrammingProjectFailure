# ProgrammingProjectFailure

Initially on the programming project I set out to create a basic flocking system using Craig Reyblds' boids algorithm. Unfortunately I ran into problems very early on in the project that ultimatley prevented me from completing my initial ideas. I am not too sure why these technical problems were occuring as I believe I had set everything up correctly on my Windows PC, I had verified I had all NGL/OPENGL files on my computer working and I could build NGL projects using release mode inside of Visual studio 2019. However whenever I tried to build the project with either QT or Visual Studios DEBUG mode I would always get a crash and the program would not run nor would it let me properly check for bugs. This was a repeatable problem and it happened on every project I tried to use it with. I would of prefered to create my program on a university computer with Linux as this would have been *almost* guarenteed to work. After giving up on the boids flocking system knowing I would not be able to produce any kind of result on time I decided to follow along with the particle system project posted to Brightspace. However with this too I encountered many strange issues. For example when treying to create a ground plane with the checkershader I could not get the checkershader to load despite following that part of the tutorial exactly as it was shown. It reminded me of an error Jon was having with the introduction to NGL series posted on Brightspace where when trying to load ngl::VAOPrimitives::instance()->draw(ngl::bunny); he was unable to even though the bunny primitive existed. After changing the code to ngl::VAOPrimitives::instance()->draw("bunny"); it began to work. I sought to apply this fix to the nglCheckerShader but it was to no avail as the issue was not fixed, and as it was impossible for me to run the program in DEBUG mode due to technical problems I could not figure out why. 

![1](https://user-images.githubusercontent.com/61700542/84642606-9eeff280-aef4-11ea-870b-984a475112c7.jpg)

I was very dissapointed and annoyed that I wasn't able to create any kind of good quality functioning tool as I's spent quite a bit of time over the last couple of months reading up on the c++ and openGL languages as well as object oriented design theory as the whole subject is  new to me. I feel as if I have nothing to actually show for the knowledge I gained.

I followed the particle system project very closely only modifying slight bits of the code and implementing a cople of my own functions such as the ability to remove 100 particles at a time using a simlpe for loop as seen here. ![2](https://user-images.githubusercontent.com/61700542/84643515-dd39e180-aef5-11ea-9372-d7b3e98c402c.jpg) 
There's not much else to show or say. My project was a disaster and I'm very dissapointed in myself for not being able to get anything working properly. I feel as if I should of been able to do a lot better. Programming is obviously not my forte and is not something I particularly plan to pursue as a career however I feel this project does not accuratley represent my ability. Over the summer I plan on looking back at this and seeing if I can find a fix to all the technical problems I've been having and perhaps trying to create a fresh project from scratch if I can get everything working.  
