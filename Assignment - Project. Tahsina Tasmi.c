#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//
/*
Assignment - Project:
In a small team, design and implement Blackjack card game. You can
implement one player version against computer (dealer), or multiplayer
version between human players. Design details and applied rules are on
you. Simulating card decks is not required.
*/
//
/*
    The part about "Simulating card decks is not required" is assumed to
    mean a graphical representation of a card deck is not required.

    A card deck consists of 4 suits (categories) of diamonds, clubs,  hearts
    and  spades.

    Each suit consists of cards numbered 1 though 10 and
    jack, queen, king and ace.  A total of 56 cards.
    An unshuffed deck will have values as follows
    first 14 cards diamonds, 15-28 clubs, 29-42 hearts
    and spades 43-56.

    A card would have a value of 1 though 10 plus
    jack=11, queen=12, king=14, ace=14.

    When playing a blackjack game an ace can be 1 or 14.

    In a single player versus a dealer (this program), the dealer
    deals a card to the player until the total value of cards is
    21 which is an automatic win or the  player holds and no
    more cards are delt - the player wins or loses depending
    on the dealer's cards.

    The dealer then issues cards to himself until the dealer's
    card exceeds the player's card value or total value of
    dealer's card is 21 or if over, dealer loses and player
    wins.
*/
// forward declaration
int GetValue(int iCardNum);

// declare Deck of cards as global
DeckOfCards[55]; // remember array index starts at zero

void InitializeDeck() 
{
    for (int iValue = 0; iValue < 56; iValue++) DeckOfCards[iValue] = iValue;
}

// for debug
void ShowDeck() {
    for (int iIndex = 0; iIndex < 56; iIndex++) {
        printf("Card #%d) \t value: %d\t\t", iIndex, DeckOfCards[iIndex]);
        int iSuit = ((DeckOfCards[iIndex]) / 14) % 4;
        switch (iSuit) {
        case 0: {printf("diamonds "); break; }
        case 1: {printf("clubs "); break; }
        case 2: {printf("hearts "); break; }
        case 3: {printf("spades "); break; }
        }
        int iCard = iIndex % 14;
        if (iCard < 10) printf("\t%d", iCard);
        else {
            switch (iCard) {
            case 10: { printf("\tjack"); break; }
            case 11: {printf("\tqueen"); break; }
            case 12: {printf("\tking"); break; }
            case 13: {printf("\tace"); break; }
            }
        }
        printf("\tcard value: %d", GetValue(DeckOfCards[iIndex]));
        printf("\n");
    }
}
void ShowCard(int iCardValue) {

    int iSuit = ((DeckOfCards[iCardValue]) / 14) % 4;
    switch (iSuit) {
    case 0: {printf("diamonds "); break; }
    case 1: {printf("clubs "); break; }
    case 2: {printf("hearts "); break; }
    case 3: {printf("spades "); break; }
    }
    int iCard = iCardValue % 14;
    if (iCard < 10) printf("\t%d", iCard);
    else {
        switch (iCard) {
        case 10: { printf("\tjack"); break; }
        case 11: {printf("\tqueen"); break; }
        case 12: {printf("\tking"); break; }
        case 13: {printf("\tace"); break; }
        }
    }
}
int GetValue(int iCardNum)
{
    int iValue = iCardNum % 14;
    return iValue + 1;
}

// for debug
void ShowDeckValues() {
    for (int iCard = 0; iCard < 56; iCard++) {
        printf("card# %d has a value of %d\n", iCard, GetValue(DeckOfCards[iCard]));
    }
}

void Shuffle01() {
    // This function simulates shuffling of the deck
    // The deck card move from 0 to 55 then
    // selects a random card to switch with (iSwapPosition).
    // If called several times  card deck appears 
    // random enough for this application  
    Sleep(60); // need to wait so time(0) function returns different number
    srand(time(0)); // seed the random generator
    for (int iCard = 0; iCard < 56; iCard++) {
        int iSwapPosition = rand() % 56;
        int iTemp = DeckOfCards[iCard];
        DeckOfCards[iCard] = DeckOfCards[iSwapPosition];
        DeckOfCards[iSwapPosition] = iTemp;
    }
}
void Shuffle() {
    printf("Shuffling the deck.\n");
    for (int i = 0; i < 100; i++) {
        Shuffle01();
    }
}
void OnePlayer() {
    InitializeDeck();
    int iDeckPosition = 0;
    int iPlayerTotal = 0;
    char cHit = 'Y';
    while (cHit == 'Y') {
        if (iDeckPosition < 57) {
            printf("Your card is ");
            ShowCard(DeckOfCards[iDeckPosition]);
            iPlayerTotal += GetValue(DeckOfCards[iDeckPosition]);
            printf("\n");
            iDeckPosition++;
            printf("Your current value is : %d\n", iPlayerTotal);
            if (iPlayerTotal == 21) {
                printf("\nBlackjack! - - - * You won ***\n\n");
                break;
            }
            if (iPlayerTotal > 21) {
                printf("\n Busted.  You lost.\n\n");
                break;
            }
            printf("Another card? (Y or anything else is stay) : ");
            //fflush(stdin);
            while ((cHit = fgetc(stdin)) == EOF); // need to clear cin buffer  
            scanf_s("%c", &cHit);
        }
        else {
            iDeckPosition = 0;
            Shuffle();
        }
    }
    printf("Dealers turn - debug\n");
    
    // now dealer turn, total must less then or equal to  21
    // or until value of cards exceeds player's value.
    if (iPlayerTotal < 21) {
        
        int iEndFlag = 0;
        while (!iEndFlag) {
            int iDealerTotal = 0;
            if (iDeckPosition < 57) {
                iDealerTotal += DeckOfCards[iDeckPosition];
                if (iDealerTotal == 21) {
                    printf("Dealer reached 21, you lost.\n");
                    iEndFlag = 1;
                }
                else if (iDealerTotal > 21) {
                    printf("Dealer busted, exceeds 21, you win\n");
                    iEndFlag = 1;
                }
            }
            else {
                
                // reached end of deck
                iDeckPosition = 0;
                Shuffle();
            }
        }
    }
}
void Application() {
    OnePlayer();
}
int main()
{
    printf("Blackjack card game\n\n");
    Application();
    printf("\n\n-End Application-\n\n");
}