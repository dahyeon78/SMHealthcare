//
//  main.c
//  Calorie Diary
//
//  Created by Eunju Cha
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cal_exercise.h"
#include "cal_diets.h"
#include "cal_healthdata.h"

#define EXERCISEFILEPATH "exercises.txt" //EXERCISEFILEPATH changes to exercise. txt
#define DIETFILEPATH "diets.txt" //DIETFILEPATH changes to exercise.txt
#define HEALTHFILEPATH "health_data.txt" //HEALTHFILEPATH changes to exercise.txt

static int choice; // Global variable, but within that file

int main() {
	// To initialize the health data object
    HealthData health_data = {0};
    
    // Tocode: to read the list of the exercises and diets
    

    // ToCode: to run the "Healthcare Management Systems" until all calories are used up or the user wants to exit the system
    do {
    	if ( ){
            printf("You have consumed all your calories for today! \n");
		} 
		else{
			printf("\n=======================================================================\n");
        	printf("[Healthcare Management Systems] \n");
        	printf("1. Exercise \n");
        	printf("2. Diet \n");
        	printf("3. Show logged information \n");
        	printf("4. Exit \n");
        	printf("Select the desired number: ");
        	scanf("%d", &choice);
        	printf("=======================================================================\n");
        }
        
		// ToCode: to run the sysmtem based on the user's choice
        switch (choice) {
            case 1:
            	
                break;
                
            case 2:
            	
                break;
                
            case 3:
            	
                break;
                
            case 4:
            	
    			printf("Exit the system.\n");
    			printf("=======================================================================\n");
                break;
                
            default:
                printf("[Error] Invalid option. \n");
                printf("Please try again! \n");
        }
    } while ( );

    return 0;
}

//1. 시작 화면 표시하기
//2. 2번 선택하면 diet.txt로부터 후보군 가져오기 -> 고른 후보군의 칼로리를 더해야 함
//2(2).1번 선택하면 exercise.txt로부터 후보군 가져오기 -> 고른 후보군의 칼로리를 빼야 함
//2(3). 한번 행동할때마다 health_data.txt 파일을 백업해야 할 듯
//3. 저장된 정보 확인 시 현재 칼로리 세부 사항 출력과 함께 현재 기준으로 
사용자에게 추천사항 출력(3가지 경우로 나눠야 함)
//4. 남은 칼로리가 0이거나 4번을 눌렀을 때 종료하도록 하기
