#include <stdio.h>

int main()
{
    int num_seats, num_votes, num_lists;
    int quota, idx_list, vote, seat;
    scanf( "Total number of seats: %d",&num_seats);
    scanf("Total number of votes: %d",&num_votes);
    scanf("Total number of lists: %d",&num_lists);
    quota = num_votes / num_seats;
    idx_list = 1;
    while (idx_list <= num_lists) {
        printf("Votes for list %d", idx_list);
		scanf("%d",&vote);
        printf("Automatic seat for list ", idx_list);
        seat = vote / quota;
        printf("seat: ",seat):
        printf("Remainder for list " , idx_list );
        printf("%d", vote - seat * quota );
        idx_list++;
    }
    return 0;     
}
