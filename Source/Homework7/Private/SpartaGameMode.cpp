#include "SpartaGameMode.h"
#include "SpartaCharacter.h"
#include "SpartaPlayerController.h"
#include "SpartaGameStateBase.h"

ASpartaGameMode::ASpartaGameMode()
{
	DefaultPawnClass = ASpartaCharacter::StaticClass();//“게임 시작 시 기본 Pawn을 ASpartaCharacter로 설정한다”
	PlayerControllerClass = ASpartaPlayerController::StaticClass(); //기본 플레이어 컨트롤러 설정
	GameStateClass = ASpartaGameStateBase::StaticClass();

}

