// 표준 입출력(standard Input/Output)을 하기 위한 헤더 파일
# include <stdio.h>

/*
* File Name : File02-output.c
*/

int main() {
	// 출력(Output) 
	// - 프로그램 내에서 외부로 데이터가 전달되는 모든 과정
	// - 모니터(콘솔 console), 파일 저장, 네트워크 상의 데이터 전달

	// 표준 출력(standard output; stdout)
	// - 컴퓨터 시스템 상에서 가장 기본이 되는 출력
	// - 기본적으로 모니터 장치를 의미

	// 표준 출력을 하기 위한 함수 : printf()
	// printf() 함수는 문자열을 출력하는 함수
	// 표준 출력을 하기 위해서는 <stdio.h> 헤더 파일을 소스 코드에 포함해야한다.
	printf("Hello World!\n");
	printf("Hello World!\n");
	printf("Hello World!\n\n");

	printf("Number : %d\n", 1000);
	printf("Number : %d\n\n", 1000+2000);

	printf("Decimal : %d\n", 215); // 10 진수 출력
	printf("Hexa Decimal : %x\n", 215); // 16진수 출력
	printf("Floating Point : %f\n", 31.24); // 실수 출력
	printf("Character : %c\n", 'A'); // 문자 출력
	printf("String : %s\n\n", "C Programming"); // 문자열 출력

	// 서식 지정자 활용 안했을 때
	printf("%d : %d : %d\n", 12, 50, 12);
	printf("%d : %d : %d\n", 2, 5, 7);
	printf("%d : %d : %d\n\n", 12, 9, 27);


	// 서식 지정자 활용
	// 출력되는 출력문의 길이를 맞추기 위해 삽입되는 데이터의 최소 길이를 지정
	// - 지정된 최소 길이보다 짧은 데이터인 경우
	// 왼쪽에 공백을 채운다. == 오른쪽 정렬
	printf("%2d : %2d : %2d\n", 2, 50, 12); // 아무것도 안하면 그냥 오른쪽 정렬
	printf("%02d : %02d : %02d\n", 2, 5, 7); // 빈 공백을 0으로 채움
	printf("%-2d : %-2d : %-2d\n\n", 12, 9, 27); // 왼쪽 정렬

	// 부호 출력
	// - 서식 지정자에 '+'는 숫자 앞의 '-'와 '+'를 표시하기 위한 문자
	printf("Positive = %d, Negative = %d\n", 10, -10);
	printf("Positive = %+d, Negative = %+d\n", 10, -10);

	// 소수점 길이 지정
	// - 지정된 길이까지 표시가 되어지며, 반올림된 값이 출력
	printf("Data = %f\n", 1.24);
	printf("Data = %.2f\n", 1.246);

	return 0;
}