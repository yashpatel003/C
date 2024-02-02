
    scanf("%d",&l);
    ptr=(char*)malloc((l+1)*sizeof(char));
    printf("enter employ id :");
    scanf("%s",ptr);
    printf("employe id:%s\n",ptr);
}

free(ptr);