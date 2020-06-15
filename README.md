I initially set out to create a flocking system using Craig Reynolds' boids algorithm however due to a multitude of reasons I was unable to do so. Throughout this project I have had many technical problems preventing me from doing my work properly and this made it incredibly difficult to create what I had in mind. For instance I have been having problems building NGL projects. I can only build an NGL project with RELEASE mode in visual studio, in QTcreator and DEBUG mode in VS the program will crash and nothing runs. This made checking for bugs and errors extremely difficult for me. 

![3](https://user-images.githubusercontent.com/61700542/84647046-d06bbc80-aefa-11ea-8d53-dc6e09d7a391.jpg)

I feel this would not have been an issue for me had I been able to use the University computers with Linux as I believe the problems I have been having are some kind of compatibility issue with either windows or my computer. It was for this reason that I eventually gave up on trying to create a flocking system from scratch and instead opted to create a particle system using the examples in Brightspace as I knew I wouldn't have been able to come anywhere near close to finishing within the deadline. However due to the reasons mentioned before this was still very difficult. one issue I had was with trying to create the ground plan and assign the checker shader to it. For some reason the checker shader was not loading despite me following that part of the tutorial step by step. This issue reminded me of one Jon had during the initial NGL setup guide where he could not load in the bunny VAOprimitive despite it seemingly being there and working. This was fixed in the tutorial by replacing (ngl::bunny) to simply ("bunny"). I thought I may be able to implement this fix in my own code however this was not the case as the texture would still not load. 

![1](https://user-images.githubusercontent.com/61700542/84647837-e4fc8480-aefb-11ea-883f-f74ba96d4f4e.jpg)

I was very dissapointed with how little I was able to achieve in this project due to all my technical difficulties as I think I should have been able to do much better. Over the past two months I had been doing a lot of reading up on c++, object oriented programming and design as well as openGL. So I have been incredibly irritated by the fact that I don't really have anything to show for it. I followed the particle system tutorial quite closely only making sever changes here and there as well as implementing a couple of my own functions such as this one that decrements the number of particles being drawn on the screen by 100 each time the 'D' key is pressed.

![2](https://user-images.githubusercontent.com/61700542/84648138-753ac980-aefc-11ea-97d2-ab395ed70dba.jpg)

Overall, I am very unhappy with how this project turned out. I was initially excited to create a boids flocking algorithm and put my new found c++ and OOP knowledge to use. I think I could of done a lot better than what I ended up with had I not had so many technical problems restricting me. While programming is definitely not my forte and not something I think I will pursue career wise in the future, it's still an important area of 3DCG and I feel my mowledge of it was not expressed here. Over the summer I plan on seeing if I can perhaps find a fix to some of these major issues I've been having, and if successful, plan on revisiting this project as well as looking at programming a simple game. 

###bibliography

September 6 2001, Craig Reynolds, Boids, USA. (https://www.red3d.com/cwr/boids/)

When I was initially trying to create a flocking system I was using this page written by Craig Reynolds that explains the three basic ideas of the the system works and links to some resources about how one might go about implementing these in code. This was mainly useful to try and get an understanding of the theory behind the subject but not so much as to the actual c++ implementation.

March 6 2018, Kate Gregory, c++17 Fundamentals, USA. (https://app.pluralsight.com/library/courses/cplusplus-fundamentals-c17/table-of-contents)

this was a very useful Pluralsight class that goes over much of modern c++ as well as some basic OOP/OOD theory. 
