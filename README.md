# verseGEO P2E API Guide

## Introduction
verseGEO는 검증된 게임 플랫폼 및 서비스를 기반으로 실증 사용이 가능한 Token과 NFT 모델을 제공합니다. 또한 단계적으로 추가 오픈 예정인 각 게임의 세계관과 빅데이터가 통합되는 메타버스와 현실세계가 통합 가능한 디지털 생태계를 제공합니다.
  -	VERSEGEO는 다양한 게임 및 블록체인 비즈니스를 지원합니다.
  -	Game 또는 Contents 서비스의 포인트 또는 리워드에 대한 Tokenization을 통해 다양한 채널에서 사용 가능합니다.
  -	NFT에 대한 발행 및 유통/판매가 가능한 내부 NFT Marketplace와 외부 NFT Marketplace를 지원합니다.

   <img src="https://github.com/verseGEO/verseGEO.json.api/blob/main/eco.png">


## WEB 3.0 Infra
verseGEO P2E API는 블록체인의 태생적 이슈와 문제점인 느린 네트워크, DAPP개발의 기능적 제한 등 인프라 구성의 접근성을 해결함과 기존 서비스 및 시스템(게임, 쇼핑, SNS등)가 블록체인에 용이하게 참여할 수 있도록 지원함을 목적으로 합니다. 

   <img src="https://github.com/verseGEO/verseGEO.json.api/blob/main/web30.svg">

verseGEO Blockchain Platform은 지속적으로 발전하고 있는 블록체인과 기존 기술 및 서비스에 대한 수용과 적용을 통해 WEB3.0기반 제공과 다양한 블록체인 플랫폼 수용을 용이하게 합니다.


## P2E Interface
총 7개의 API를 제공합니다. API는 성능을 고려하여 Sync 타입과 Async 타입으로 분류됩니다. 제휴사는 각 API에 해당되는 기능을 구축하여 연동처리 하게 됩니다.
| API | 요청 | 처리 | 기능 | 비고 |
|-----|--------|--------|------|------|
|Exchange Rate 조회|제휴사|verseGEO|Game Item 및 Point를 Play Token(내부 토큰)으로 변환하기 위한 교환 환율조회||
|Exchange 요청|제휴사|verseGEO|Game Item 또는 Point를 지정된 환율에 따라 Play Token(내부 토큰)으로 전환|Async|
|출금주소 검증 요청|제휴사|verseGEO|거래소 등에서 사용할 수 있는 사용자 개인이 보유한 Ethereum 주소에 대한 검증||
|비밀번호 등록 요청|제휴사|verseGEO|출금요청의 정당성을 검증하기 위한 비밀번호 등록 ||
|출금 요청|제휴사|verseGEO|Play Token(내부 토큰)을 기 등록한 출금주소로 출금 요청|Async|
|처리결과 전송|verseGEO|제휴사|Exchange 요청 및 출금 요청 전문에 대한 수행 결과의 처리내역 전송|Async|


