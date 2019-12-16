#include<stdio.h>

void delete(int *a,int num)
{
      int n, i, ar[20], count=0;

      printf("\n\t---To search and delete the key elemet in the array---\n");
      printf("Enter the element to be deleted:\n");
      scanf("%d",&n);

      for(i=0;i<num;i++)
          if(*(a+i)!=n)
              ar[count++]=*(a+i);

      printf("After deletion of the key element:\n");
      for(i=0;i<count;i++)
      		printf("%d ",*(ar+i));
}

void duplicate(int *m,int num)
{
	int ar[50], j, i, count=0;

	for(i=0;i<num;i++)
		ar[i]=*(m+i);

	 for(i=0;i<num-count;i++)
      		for(j=0;j<num-count;j++)
            	{
                	if(i!=j)
                  		if(ar[i]==ar[j])
                          	{
                            		count++;
                            		while(j<num-1)
                                	{
                                  		ar[j]=ar[j+1];
                                  		j++;
                                	}
                          	}
            	}	
      
	 printf("\nThe array after deletion of dulpicates is:\n");
         for(i=0;i<num-count;i++)
         	printf("%d ",*(ar+i));
}

void union1(int *m,int num)
{
      int arr[20],arr2[30],temp,count=0,nu,i=0,j=0;

      printf("\nEnter the elements in 2nd array:");
      scanf("%d",&nu);
      printf("\nEnter the elements in the array:\n");
      for(i=0;i<nu;i++)
      		scanf("%d",arr+i);

      for(i=0;i<num;i++)
      		arr2[count++]=*(m+i);

      for(i=count;i<num+nu;i++)
      		arr2[i]=arr[j++];

      printf("\nThe array after merging is:\n");
      for(i=0;i<num+nu;i++)
              printf("%d ",*(arr2+i));

      count=0;
      for(i=0;i<num+nu-1;i++)
       		for(j=0;j<num+nu-1;j++)
                {
                        if(arr2[j]>arr2[j+1])
                        {
                                temp=arr2[j];
                                arr2[j]=arr2[j+1];
                                arr2[j+1]=temp;
                        }
		}

      printf("\nThe sorted array:\n");
      for(i=0;i<num+nu;i++)
	      printf("%d ",arr2[i]);

      for(i=0;i<num+nu-count;i++)
      		for(j=0;j<nu+num-count;j++)
            	{
                	if(i!=j)
                  		if(arr2[i]==arr2[j])
                          	{
                            		count++;
                            		while(j<num+nu-1)
                                	{
                                  		arr2[j]=arr2[j+1];
                                  		j++;
                                	}
                          	}
            	}
      
      printf("\nThe array:\n");
      for(i=0;i<num+nu-count;i++)
      		printf("%d ",*(arr2+i));
}

void even_odd(int *m,int num)
{
    int ar1[30],ar2[30],count1=0,count2=0,i;

    printf("\n\t---To check even numbers and odd numbers present in an array---\n");
    for(i=0;i<num;i++)
        if(*(m+i)%2==0)
            count1++;
        else
            count2++;
    
    printf("\nEven numbers present in an array are:");
    printf("%d",count1);
    printf("\nOdd numbers present in array are:");
    printf("%d",count2);
}

void copy(int *m,int num)
{
  int ar1[30],ar2[30],count1=0,count2=0,i;

  printf("\n\t---To copy even numbers to one array and odd numbers to another array---\n");
  for(i=0;i<num;i++)
      if(*(m+i)%2==0)
          ar1[count1++]=*(m+i);
        else
            ar2[count2++]=*(m+i);
  
  printf("\nThe even numbers are:\n");
  for(i=0;i<count1;i++)
        printf("%d ",*(ar1+i));

  printf("\nThe odd numbers are:\n");
  for(i=0;i<count2;i++)
         printf("%d ",*(ar2+i));
}

void count(int *k,int num)
{
  int count=0,i;

  printf("\n\t---To count number of elements divisible by 3---\n");
  for( i=0;i<num;i++)
        if(*(k+i)%3==0)
            count++;

  printf("\nThe odd numbers divisible by 3:");
      printf("%d",count);
}

int main()
{
  int arr[100],num,i;

  printf("Enter the size of the array:\n");
  scanf("%d",&num);
  
  printf("\nEnter the elemets of the array:\n");
  for(i=0;i<num;i++)
        scanf("%d",arr+i);
  
  printf("\nThe elements are:\n");
  for(i=0;i<num;i++)
        printf("%d ",*(arr+i));
  
  count(arr,num);
  even_odd(arr,num);
  copy(arr,num);
  union1(arr,num);
  delete(arr,num);
  duplicate(arr,num);
  
  return 0;
}
