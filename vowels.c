 int a[5]={'a','e','i','o','u'},count=0;
                char s[100];
                gets(s);
                for(int i=0;s[i]!='\0';i++)
                {
                    for(int j=0;j<5;j++)
                     if(tolower(s[i])==a[j])
                            count++;
                }
               printf("The Number Of Vowels:  %d",count);
