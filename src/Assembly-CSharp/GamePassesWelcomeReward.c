
/* Void ClaimReward() */

void Assembly-CSharp.dll::GamePassesWelcomeReward::GamePassesWelcomeReward_ClaimReward
               (GamePassesWelcomeReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if ((pPVar1 != (PlayerPlanetData *)0x0) &&
     (this_00 = (pPVar1->fields).playerPlanetMetaData, this_00 != (PlayerPlanetMetaDataClient *)0x0)
     ) {
    bVar2 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
            PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday(this_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_ClaimGamePointWelcomeReward_bein);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((pMVar3->fields).gamepointWelcomeClaimed != 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_ClaimGamePointWelcomeReward_bein,(MethodInfo *)0x0);
        return;
      }
      (pMVar3->fields).gamepointWelcomeClaimed = 1;
      pPVar4 = (pMVar3->fields).peer;
      this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
      pMVar5 = 
      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
      ;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar4 != (PhotonPeer *)0x0) {
        (*(pPVar4->klass->vtable).SendOperation.methodPtr)
                  (pPVar4,CONCAT71((int7)((ulonglong)pMVar5 >> 8),0x6d),this_01,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar4->klass->vtable).SendOperation.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GamePassesWelcomeReward::GamePassesWelcomeReward_Initialize
               (GamePassesWelcomeReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DAILY_CRYSTALS_RECEIVED__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_DAILY_CRYSTALS_RECEIVED__,(MethodInfo *)0x0);
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
  if (pPVar2 != (PlayerTierStateCalculator *)0x0) {
    str1 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(pPVar2->fields).welcomeReward,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4(pSVar1,str1,(MethodInfo *)0x0);
    sprite = (this->fields).crystalIcon;
    if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
      FUN_?();
    }
    NotificationController::NotificationController_PushNotification
              (pSVar1,sprite,5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar3 != (PlayerPlanetData *)0x0) &&
       (this_00 = (pPVar3->fields).playerPlanetMetaData,
       this_00 != (PlayerPlanetMetaDataClient *)0x0)) {
      bVar4 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
              PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday(this_00,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return;
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar5 != (MVNetworkGame_OperationRequests *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral_ClaimGamePointWelcomeReward_bein);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((pMVar5->fields).gamepointWelcomeClaimed != 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_ClaimGamePointWelcomeReward_bein,(MethodInfo *)0x0);
          return;
        }
        (pMVar5->fields).gamepointWelcomeClaimed = 1;
        pPVar6 = (pMVar5->fields).peer;
        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        pMVar7 = 
        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
        ;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar6 != (PhotonPeer *)0x0) {
          (*(pPVar6->klass->vtable).SendOperation.methodPtr)
                    (pPVar6,CONCAT71((int7)((ulonglong)pMVar7 >> 8),0x6d),this_01,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar6->klass->vtable).SendOperation.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

