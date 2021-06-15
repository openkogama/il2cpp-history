
/* Void ClaimReward() */

void Assembly-CSharp.dll::GamePassesWelcomeReward::GamePassesWelcomeReward_ClaimReward
               (GamePassesWelcomeReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if ((pPVar1 != (PlayerPlanetData *)0x0) &&
     (this_00 = (pPVar1->fields).playerPlanetMetaData, this_00 != (PlayerPlanetMetaDataClient *)0x0)
     ) {
    bVar2 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
            PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday(this_00,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ClaimGamePointWelcomeReward
                (this_01,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GamePassesWelcomeReward::GamePassesWelcomeReward_Initialize
               (GamePassesWelcomeReward *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_DAILY_CRYSTALS_RECEIVED__,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
  if (pPVar2 != (PlayerTierStateCalculator *)0x0) {
    piVar3 = &(pPVar2->fields).welcomeReward;
    uVar4 = 0;
    str1 = (String *)func_?(piVar3,0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2(pSVar1,str1,(MethodInfo *)0x0);
    sprite = (this->fields).crystalIcon;
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?(TypeInfo__NotificationController);
    }
    NotificationController::NotificationController_PushNotification
              (pSVar1,sprite,5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar5 != (PlayerPlanetData *)0x0) &&
       (this_00 = (pPVar5->fields).playerPlanetMetaData,
       this_00 != (PlayerPlanetMetaDataClient *)0x0)) {
      bVar6 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerPlanetMetaDataClient::
              PlayerPlanetMetaDataClient_DailyWelcomeRewardClaimedToday(this_00,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        return;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        unaff_EBP = &UNK_?;
        func_?();
      }
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (pMVar7 != (MVNetworkGame_OperationRequests *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?,unaff_EBP);
          cRam_? = '\x01';
        }
        if ((pMVar7->fields).gamepointWelcomeClaimed != 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_ClaimGamePointWelcomeReward_bein,(MethodInfo *)0x0);
          return;
        }
        pPVar8 = (pMVar7->fields).peer;
        (pMVar7->fields).gamepointWelcomeClaimed = 1;
        this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                  func_?(TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                  ,piVar3,uVar4);
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
          func_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        pSVar9 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
        if (pPVar8 != (PhotonPeer *)0x0) {
          uVar4._0_1_ = (pSVar9->SendReliable).Encrypt;
          uVar4._1_1_ = (pSVar9->SendReliable).Channel;
          uVar4._2_2_ = *(undefined2 *)&(pSVar9->SendReliable).field_0x6;
          (*(code *)(pPVar8->klass->vtable).SendOperation.method)
                    (pPVar8,0x6d,this_01,(pSVar9->SendReliable).DeliveryMode,uVar4,
                     pPVar8->klass[1]._0.image);
          return;
        }
        func_?(0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

