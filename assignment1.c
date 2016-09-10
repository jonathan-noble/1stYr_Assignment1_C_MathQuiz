/*Programming Assignment #1
    Program Description:   Mathematical Quiz Game with a Main Menu that includes various features
    Author Name:              Jonathan Noble - DT282(1)
    Due Date:                    13/11/2015
*/  


    #include <stdio.h>
    main ()
    {
        // initialize variables
            int no_of_questions = 0;
            int right_count = 0, wrong_count = 0;
            int answer;        
            int menu;
        
        //do-while loop is used to execute the menu
        do 
        {
            //
            printf("\n              MAIN MENU           \n");
            printf("\n Choose an option from 1-4 please. \n");
            printf("1. Number of questions to be asked for this round (max. 5 questions allowed). \n");
            printf("2. Start the Maths Quiz! \n");
            printf("3. Display the number of questions that were answered correctly and incorrectly. \n");
            printf("4. Exit the Program. \n");
            scanf("%d", &menu);
        
            
            switch (menu)
            {
                // ask the user how many questions there will be for the quiz
                case 1:
                {
                        // These counters will calculate how many answers are right or wrong
                       
                        printf("\n Enter how many questions you desire to be asked: \n");
                        scanf("%d", &no_of_questions);
                        
                    
                        
                        // This if-else statement ensures that user will only choose between 1 - 5 questions
                        if ( no_of_questions <= 0 || no_of_questions > 5)
                        {
                            printf("You have entered an invalid number for questions.\n");
                            printf("Try again! Program will now return to the Main Menu!");
                        }
                        
                        else
                        {
                           
                        printf("Thank you! There will be %d question(s) that will be asked. \n", no_of_questions);
                        printf("Now select option 2 to start the Maths Quiz please. \n\n ");
                        }
                        break;
                        
                } // end case 1
                
                // The user chose option 2 to start the quiz   
                case 2:
                        right_count = 0;
                        wrong_count = 0;
                    
                {
                        // If-else statement is used to make sure the program will only start after case 1
                         if ( no_of_questions <= 0 || no_of_questions > 5)
                        {
                            printf("You have entered an invalid option. Try again!");
                        break;
                        }
                        
                        // Once the desired number of questions are chosen, the quiz will start
                        else
                        {
                            printf("Let's start the Maths Quiz!\n");
                        
                            if( no_of_questions == 1)
                            {
                                {
                                    printf("What is 3 x 5?\n");
                                    scanf("%d", &answer);
                                  
                                    if (answer==15)
                                    {
                                        printf("\n Correct! Next question!\n");
                                        right_count++;
                                    }
                                    else
                                    {
                                        printf("Wrong! The right answer is 15!\n");
                                        wrong_count++;;
                                    }
                                }
                            } // end Q1 if
                            
                            if( no_of_questions == 2)
                            {
                                {
                                     printf("\n What is 10 /2?\n");
                                     scanf("%d", &answer);
                                
                                    if(answer==5)
                                    {  
                                        printf("\n Correct! Next question!\n");
                                        right_count++;
                                    }
                                    else
                                    {
                                        printf("Wrong! The right answer is 5!\n");
                                        wrong_count++;
                                    }
                                }
                                
                                {
                                    printf("What is 3 x 5?\n");
                                    scanf("%d", &answer);
                               
                                
                                    if (answer==15)
                                    {
                                        printf("\n Correct! Next question!\n");
                                        right_count++;
                                    }
                                    else
                                    {
                                        printf("Wrong! The right answer is 15!\n");
                                        wrong_count++;;
                                    }
                                }
                            } // end Q2 if
                            
                            if( no_of_questions == 3)
                            {
                                {
                                    printf("What is 3 x 5?\n");
                                    scanf("%d", &answer);
                                    
                                
                                    if (answer==15)
                                    {
                                        printf("\n Correct! Next question!\n");
                                        right_count++;
                                    }
                                    else
                                    {
                                        printf("Wrong! The right answer is 15!\n");
                                        wrong_count++;;
                                    }
                                }
                                
                                 {
                                     printf("\n What is 10 /2?\n");
                                     scanf("%d", &answer);
                                  
                                    
                                    if(answer==5)
                                    {  
                                        printf("\n Correct! Next question!\n");
                                        right_count++;
                                    }
                                    else
                                    {
                                        printf("Wrong! The right answer is 5!\n");
                                        wrong_count++;
                                    }
                                }
                                
                                 {
                                     printf("\n What is 9 + 10?\n");
                                     scanf("%d", &answer);
                              
                                
                                    if(answer==19)
                                    {  
                                        printf("\n Correct! Next question!\n");
                                        right_count++;
                                    }
                                    else
                                    {
                                        printf("Wrong! The right answer is 19!\n");
                                        wrong_count++;
                                    }
                                }
                            } // end Q3 if 
                            
                            if( no_of_questions == 4)
                            {
                                {
                                     printf("\n What is 9 + 10?\n");
                                     scanf("%d", &answer);
                                     
                                
                                    if(answer==19)
                                    {  
                                        printf("\n Correct! Next question!\n");
                                        right_count++;
                                    }
                                    else
                                    {
                                        printf("Wrong! The right answer is 19!\n");
                                        wrong_count++;
                                    }
                                
                                }
                                
                                 {
                                    printf("What is 3 x 5?\n");
                                    scanf("%d", &answer);
                                   
                                
                                    if (answer==15)
                                    {
                                        printf("\n Correct! Next question!\n");
                                        right_count++;
                                    }
                                    else
                                    {
                                        printf("Wrong! The right answer is 15!\n");
                                        wrong_count++;;
                                    }
                                }
                                
                                {
                                     printf("\n What is 17 - 7?\n");
                                     scanf("%d", &answer);
                                   
                                
                                
                                    if(answer==10)
                                    {  
                                        printf("\n Correct! Next question!\n");
                                        right_count++;
                                    }
                                    else
                                    {
                                        printf("Wrong! The right answer is 10!\n");
                                        wrong_count++;
                                    }
                                }
                                
                                {
                                     printf("\n What is (10/2) - 5?\n");
                                     scanf("%d", &answer);
                                    
                                
                                
                                    if(answer==0)
                                    {  
                                        printf("\n Correct! Next question!\n");
                                        right_count++;
                                    }
                                    else
                                    {
                                        printf("Wrong! The right answer is 0!\n");
                                        wrong_count++;
                                    }
                                
                                    }
                            } // end Q4 if
                            
                            if( no_of_questions == 5) 
                            {
                                 {
                                    printf("What is 3 x 5?\n");
                                    scanf("%d", &answer);
                                   
                                
                                    if (answer==15)
                                    {
                                        printf("\n Correct! Next question!\n");
                                        right_count++;
                                    }
                                    else
                                    {
                                        printf("Wrong! The right answer is 15!\n");
                                        wrong_count++;;
                                    }
                                }
                                
                                {
                                     printf("\n What is (38-10)/7?\n");
                                     scanf("%d", &answer);
                                   
                                
                                    if(answer==4)
                                    {  
                                        printf("\n Correct! Next question!\n");
                                        right_count++;
                                    }
                                    else
                                    {
                                        printf("Wrong! The right answer is 4!\n");
                                        wrong_count++;
                                    }
                                
                                }
                                
                                {
                                     printf("\n What is 9 + 10?\n");
                                     scanf("%d", &answer);
                                    
                                
                                    if(answer==19)
                                    {  
                                        printf("\n Correct! Next question!\n");
                                        right_count++;
                                    }
                                    else
                                    {
                                        printf("Wrong! The right answer is 19!\n");
                                        wrong_count++;
                                    }
                                
                                }
                                
                                {
                                     printf("\n What is 17 - 7?\n");
                                     scanf("%d", &answer);
                                 
                                
                                    if(answer==10)
                                    {  
                                        printf("\n Correct! Next question!\n");
                                        right_count++;
                                    }
                                    else
                                    {
                                        printf("Wrong! The right answer is 10!\n");
                                        wrong_count++;
                                    }
                                }
                                
                                {
                                     printf("\n What is (10/2) - 5?\n");
                                     scanf("%d", &answer);
                                    
                                
                                
                                    if(answer==0)
                                    {  
                                        printf("\n Correct! Next question!\n");
                                        right_count++;
                                    }
                                    else
                                    {
                                        printf("Wrong! The right answer is 0!\n");
                                        wrong_count++;
                                    }
                                }
                            } // end Q5 if
                        } // end outer else
                        
                } // end case 2
                break;
                
                case 3: 
                {
                        printf("Awesome! You got %d correct answer(s)\n", right_count);
                        printf("and %d wrong answer(s). \n", wrong_count);
                
                        break;
                } // end case 3
                
                case 4:
                {
                        printf("Press enter to exit!");
                    
                        break;
                } // end case 4
                
                // Default ensures that user will only choose options 1 - 4
                default: 
                        printf("Please select the options from 1-4.");
                        break;
                
                }
        } // end do loop
            
            while (menu!=4); // When option 4 is pressed, the program will end
            
            getchar();
        
    } // end main()

    