# GNL - Get Next Line

<h1 name ="content" align = "center">📋 Table of contents</h1>
<p align = "center">
  <a href = "#intro">Intro</a> -
  <a href = "#goal">Goal</a> -
  <a href = "#tec">Tecnology</a> -
  <a href = "#function">Functionality</a> -
  <a href = "#how">How to use</a> -
  <a href = "#test">Tests</a> -
  <a href = "#update">Update</a> -
  <a href = "#author">Author</a>
</p>

<a name="intro"/> <h2> Intro </h2> </a>
- This was my second project at école 42.
- It is an introduction to the concepts File descriptors, Static Variables.
- It is also the first project where I had to create a structure for my code.
- I used tests created by other people to guide me, find errors and leaks.
<p></p>
<a href = "#content">📋</a>

<a name="goal"/> <h2> 🎯 Goal </h2> </a>
- GNL goal is to create a function that will read a line of a File descriptor:
  - Uses concepts learned on Libft project. 
  - Introduces new concepts of static variable and file descriptor.
<p></p>
<a href = "#content">📋</a>

<a name="tec"/> <h2> 🛠️ Tecnology </h2> </a>
- Language: C
- VS code
- WSL ubuntu
- Norminette 42 (code norm used by école 42)
<p></p>
<a href = "#content">📋</a>

<a name="function"/> <h2> 📚 Functionality </h2> </a>

⚠️🚧 I will add a flow chart of the basic of the function ⚠️🚧

<p></p>
<a href = "#content">📋</a>

<a name="how"/> <h2> 📖 How to use </h2> </a>

- Clone the repository
```bash
git clone https://github.com/GitFlaviobc/GNL.git
```
Example:

- Main function that will open and read the file
```c
int	main(int argc, char **argv)
{
	int		fd;

	fd = ft_open_file(argv);
	ft_read_file(fd);
	return (0);
}
```

- Function to open the file descriptor
```c
int	ft_open_file(char **argv)
{
	int	fd;

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		printf("Error.\nFile descriptor error.\n");
	}
	return (fd);
}
```

- Use the GNL in a loop to read the File Descriptor
```c
void	ft_read_file(int fd)
{
	char	*read_line;
	int		reading;

	reading = 1;
	while (reading == 1)
	{
		reading = get_next_line(fd, &read_line);
		free(read_line);
	}
	close(fd);
}
```
- Inside this example, you can get the information from the file descriptor add some logic and use it.

<p></p>
<a href = "#content">📋</a>

<a name="test"/> <h2> 👨‍💻 Tests </h2> </a>
- Note: I didn't created any of the test, I just used them to check my project. All credit goes to their creators. <p></p>
  - [Tripouille](https://github.com/Tripouille/gnlTester) <p></p>
  - [Get_Next_Line_Tester](https://github.com/Hellio404/Get_Next_Line_Tester) <p></p>
  - [42cursus_gnl_tests](https://github.com/mrjvs/42cursus_gnl_tests) <p></p>
  - [GNL_lover](https://github.com/charMstr/GNL_lover)
<p></p>

###### *42 changes the projects from time to time, and the test keep being updated to follow it. So this project may be outdated for the tests.

<p></p>
<a href = "#content">📋</a>

<a name="update"/> <h2> 🆙 Updates </h2> </a>
- The code I sent to evaluation will be kept the same. Any update will be on the update folder.⚠️🚧
<p></p>
<a href = "#content">📋</a>

<a name="author"/> <h2> 😀 Author </h2> </a>
Name: Flávio Bonini Campos
<p></p>

[![Linkedin](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/flaviobc88/)
<p></p>
<a href = "#content">📋</a>
<p></p>
