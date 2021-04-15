## Given a family with extended family members, genders, person name, father name, and mother name. Find the people for a particular person to marry. Output Females for male inut and vice versa.
Sample Case: Input
<Ram,Male,Ramesh,Revathy>
<Bavana,Female,Ramesh,Revathy>
<Agilan,Male,Ram,Darshini>
<Yamini,Female,Elango,Bavana>
<Megala,Female,Elango,Bavana>

Name: Agilan

Output: Yamini, Megala









#include<stdio.h>
#include<string.h>
struct relations{
	char person[30];
	char gender[30];
	char father[30];
	char mother[30];
	char children[30];
	int gender_flag;
}family[100];
void person_can_marry(char *,int);
int main()
{
	
	char name[30];
	int n,i;
	scanf("%d",&n);
	for(i = 0;i<n;i++)
	{

		printf("Enter the person name:");
		scanf("%s",family[i].person);
		printf("Enter the gender:");
		scanf("%s",family[i].gender);
		if(strcmp(family[i].gender,"male") == 0)
		{
			family[i].gender_flag = 1;
		}
		else
		{
			family[i].gender_flag = 0;
		}
		printf("Enter the father's name:");
		scanf("%s",family[i].father);
		printf("Enter the mother's name:");
		scanf("%s",family[i].mother);
	}
	printf("Enter the person's name to find the person he/she can marry:");
	scanf("%s",name);
	
	person_can_marry(name,n);
	return 0;
}


void person_can_marry(char *name,int n)
{
	int j,k = 0,father_flag = 0,mother_flag = 0,i,gender;
	char temp_father[30], temp_mother[30],temp_father1[30],temp_mother1[30];
	
	for(j = 0;j< n;j++)
	{
		if(strcmp(name,family[j].person) == 0)
		{
			strcpy(temp_father,family[j].father);
			strcpy(temp_mother,family[j].mother);
			if(family[j].gender == 0)
			{
				gender = 0;
			}
			else
			{
				gender = 1;
			}
			//printf("%s %s\n",temp_father,temp_mother);
			break;
		}
		
	}
	
	for(j=0;j<n;j++)
	{
		if(strcmp(temp_father,family[j].person) == 0 || strcmp(temp_mother,family[j].person) == 0)
		{
			strcpy(temp_father1,family[j].father);
			strcpy(temp_mother1,family[j].mother);
			//printf("%s %s\n",temp_father1,temp_mother1);
			break;
		}
	}
	
	for(j = 0;j<n;j++)
	{
		if((strcmp(temp_father1,family[j].father) == 0) && (strcmp(temp_mother1,family[j].mother) == 0) )
			strcpy(family[k++].children,family[j].person);
	}
	
	/*for(j = 0;j<k;j++)
	{
		printf("%s ",family[j].children);
	}
	printf("\n");*/
	for(j = 0;j<k;j++)
	{
			if((strcmp(family[j].children,temp_father)) && strcmp(family[j].children,temp_mother)) //|| (strcmp(family[j].children,family[i].mother) == 0))
			{
				for(i = 0;i<n;i++)
				{
					if(strcmp(family[j].children,family[i].father) == 0 || strcmp(family[j].children,family[i].mother) == 0)
					{
						if(gender == 0)
						{
							if(family[i].gender_flag == 1) printf("%s ",family[i].person);
						}
						else
						{
							if(family[i].gender_flag == 0) printf("%s ",family[i].person);
						}
					}
				}
				
			}
		}
}

