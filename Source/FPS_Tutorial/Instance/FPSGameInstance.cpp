// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameInstance.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineUserCloudInterface.h"

void UFPSGameInstance::Init()
{
  IOnlineSubsystem* OnlineSubsystemInterface = IOnlineSubsystem::Get();
  
  GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, OnlineSubsystemInterface->GetSubsystemName().ToString());
  //UE_LOG(LogTemp, Warning, TEXT("Session name : %s"), );
  if (OnlineSubsystemInterface)
  {
    IOnlineUserCloudPtr UserCloudInteface;
    IOnlineSessionPtr SessionInteface;
    UserCloudInteface = OnlineSubsystemInterface->GetUserCloudInterface();
    SessionInteface = OnlineSubsystemInterface->GetSessionInterface();
    if (UserCloudInteface.IsValid())
    {
      //UserCloudInteface.Get();
      UE_LOG(LogTemp, Warning, TEXT("UserClound is Exist!!"));
      GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("UserClound is Exist!!"));
    }
    else 
    {
      UE_LOG(LogTemp, Warning, TEXT("UserClound is UnExist!!"));
      GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("UserClound is UnExist!!"));
    }
    if (SessionInteface.IsValid())
    {
      //UserCloudInteface.Get();
      UE_LOG(LogTemp, Warning, TEXT("SessionInteface is Exist!!"));
      GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("SessionInteface is Exist!!"));
    }
    else
    {
      UE_LOG(LogTemp, Warning, TEXT("SessionInteface is UnExist!!"));
      GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("SessionInteface is UnExist!!"));
    }

  }
}

void UFPSGameInstance::Test()
{
}
