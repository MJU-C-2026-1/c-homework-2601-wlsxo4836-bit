/*
	작성자: 60231919 김진태
	파일명: main.c
	하는일: 환전 및 해외 직구 계산기
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("chcp 65001"); 
    system("cls"); // 인코딩 변경 메시지 삭제 
	// 1. 변수 선언 (5개 이상, 자료형 혼합)
    char item;          // 상품 이름의 첫 글자
    int price_usd;         // 상품 가격 (달러)
    double exchange_rate;       // 현재 환율 (1달러당 원화)
    double fee_rate = 0.02;     // 해외 결제 수수료 (2%)
    int shipping_fee = 15000;   // 국제 배송비 (원)
    double final_krw;     // 최종 결제 금액 (원)

    // 2. 입력 단계 (printf, scanf 사용)
    printf("--- 해외 직구 비용 계산기 ---\n");
    
    printf("구매할 상품의 첫 글자를 입력하세요: ");
    scanf(" %c", &item); // %c 앞에 공백을 두어 버퍼 오류 방지

    printf("상품 가격($)을 입력하세요: ");
    scanf("%d", &price_usd);

    printf("현재 환율(1$당 원화)을 입력하세요: ");
    scanf("%lf", &exchange_rate);

    // 3. 연산 단계 (산술 연산 1개 이상)
    // 공식: (물건값 * 환율) + (물건값 * 환율 * 수수료2%)+ 배송비 15000원
    final_krw = (price_usd* exchange_rate) * (1 + fee_rate) + shipping_fee;

    // 4. 출력 단계
    printf("\n--- 계산 결과 ---\n");
    printf("상품 기호: [%c]\n", item);
    printf("상품 가격: %d 달러\n", price_usd);
    printf("적용 환율: %.2f 원\n", exchange_rate);
    printf("수수료율: %.1f%%\n", fee_rate * 100);
    printf("최종 결제 예정 금액: %.0f 원 (배송비 포함)\n", final_krw);
    printf("--------------------------\n");

    return 0;
}
