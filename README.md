# Laboratory work 1 for "Embedded Design" course
Code for laboratory work 1 of the course PPAZ (embedded programming and design). 

The main objective of this laboratory work is to become familiar with GIT CMS

Student tasks

1. Checkout code from GIT repository using git clone command

2. Initialize local repository by adding user name and email using commands

    	git config --local user.email "you@example.com"
    	git config --local user.name "Your Name"

3. Create new branch named student_surname_name_branch. For example, a new branch for user  *John Doe* will be john_doe_branch. 

   `git checkout -b john_doe_branch`

4. Pull a newly created branch to the repository using the command

   `git push --set-upstream origin john_doe_branch`

5. Run PSoC Creator and create a workbench.

6. Create a new PSoC project with a equivalent to the repository's name (ppaz_lab_1.cydsn in our case)

7. Do the project's tasks according to the [following manual](https://how-i-study-microprocessors.blogspot.com/2015/10/1psoc-hello-world.html)

8. Check changed files using the command 

   `git status`

9. Mark files that will be added to repository using the command 

   `git add file_name1 file_name2`

10. Commit changes to local repository using the command

    `git commit -m"Changes description"`

11. Push the repository to GitHub using the command

    `git push`

    

