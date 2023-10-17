
/* Void ClaimReward() */

void Assembly-CSharp.dll::GamePassesWelcomeReward::GamePassesWelcomeReward_ClaimReward
               (GamePassesWelcomeReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if ((pPVar1 != (PlayerPlanetData *)0x0) &&
     (this_00 = (pPVar1->fields).playerPlanetMetaData, this_00 != (PlayerPlanetMetaDataClient *)0x0)
     ) {
    bVar2 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
            PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday(this_00,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ClaimGamePointWelcomeReward
                (this_01,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GamePassesWelcomeReward::GamePassesWelcomeReward_Initialize
               (GamePassesWelcomeReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    func_?(&TypeInfo__NotificationController);
    func_?(&StringLiteral_DAILY_CRYSTALS_RECEIVED__);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_DAILY_CRYSTALS_RECEIVED__,(MethodInfo *)0x0);
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
  if (pPVar2 != (PlayerTierStateCalculator *)0x0) {
    str1 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(pPVar2->fields).welcomeReward,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,str1,(MethodInfo *)0x0);
    sprite = (this->fields).crystalIcon;
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    NotificationController::NotificationController_PushNotification
              (pSVar1,sprite,5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
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
          func_?();
          func_?();
          func_?(&
                          TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
          func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
          func_?(&StringLiteral_ClaimGamePointWelcomeReward_bein);
          cRam_? = '\x01';
        }
        if (*(char *)(in_stack_6 + 0x18) != '\0') {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_ClaimGamePointWelcomeReward_bein,(MethodInfo *)0x0);
          return;
        }
        piVar7 = *(int **)(in_stack_6 + 0x10);
        *(undefined1 *)(in_stack_6 + 0x18) = 1;
        this_01 = (ParameterOverride_1_System_Object_ *)
                  func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                 );
        if (this_01 != (ParameterOverride_1_System_Object_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                    );
          if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?();
          }
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 0x134))
                      (piVar7,0x6d,this_01,
                       (TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                       SendReliable).DeliveryMode);
            return;
          }
        }
        func_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

