if (temp != NULL) {
        contactIDs = temp; // Successfully expanded
    } else {
        printf("Expansion failed!\n");
        free(contactIDs);
        return 1;
    }

    free(contactIDs);
    contactIDs = NULL;
