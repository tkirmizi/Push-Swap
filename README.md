## Push-Swap
Push_swap is a sorting project aimed at arranging numbers in ascending order using a minimal set of operations on two stacks, 'a' and 'b'.

The main challenge is to achieve this sorting using a restricted set of operations defined as follows:

`swap` Swap the first 2 elements at the top of stack 'a'.

`push` Take the top element of stack 'a' and move it to stack 'b'.

`rotate` Shift all elements of stack 'a' up by one position.

`reverse rotate` Shift all elements of stack 'a' down by one position.

My approach is `Turk Algorithms`

Of course i did not chose this method as because of im Turkish -Dont trust rumors-. This method first transfers all numbers except three to stack 'b'. The remaining three numbers are sorted within stack 'a'. Each number is positioned based on how many rotations or reverse rotations are required to bring it to the top of stack 'a'. Subsequently, each number in stack 'b' is assigned a target — the next higher number if available, or the smallest number if no higher number exists.

A little impelementation of this algorithism

![IMG_0331](https://github.com/tkirmizi/Push-Swap/assets/157286105/f367d8a9-f015-44db-84cd-aa8b0a5c1597)

I did spend approximately 1.5 months to overcome this project.
Understanding and implementing `linked lists`
Proficiency in debugging tools such as `LLDB` and memory management tools like `Valgrind`
Familiarization with `Ubuntu system` within `Docker` for effective debugging and memory leak tracking.

Push_swap was an enjoyable and enriching project that provided significant learning opportunities in algorithmic optimization, data structures, and debugging techniques. And teached me many stuffs to deal with the algorithm.
