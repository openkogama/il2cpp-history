
/* Void HandleNewTierUnlocked(PlayerPlanetData) */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_HandleNewTierUnlocked
               (PlayerPlanetData *newPlayerPlanetData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return;
    }
    if (newPlayerPlanetData != (PlayerPlanetData *)0x0) {
      bVar2 = (newPlayerPlanetData->fields).gamePassTier;
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        if (bVar2 <= (pPVar3->fields).gamePassTier) {
          return;
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
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__GamePassesManager);
        }
        if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
          return;
        }
        data = (Dictionary_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        key = (String *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
        value = (CrossPlatformInputManager_VirtualButton *)
                func_?(TypeInfo__System__Int32,&stack0xfffffff4);
        if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)data,key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
            func_?();
          }
          NotificationController::NotificationController_PushNotification_2
                    (NotificationType__Enum_TierUnlocked,data,NotificationLifetime__Enum_High,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SendCompleteStatus() */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_SendCompleteStatus
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
            (MVGameMsgType__Enum_AdminMsg,StringLiteral__rgp_for_reset_player_datau000A,
             (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    pGStack1 = TypeInfo__GamePassesManager;
    func_?();
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 != (PlayerPlanetData *)0x0) {
    pPVar3 = pPVar2->klass;
    pGStack1 = (GamePassesManager__Class *)pPVar3[1]._0.image;
    pSVar4 = (String *)(*(code *)(pPVar3->vtable).ToString.method)();
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar4,(MethodInfo *)0x0);
    pPVar5 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (pPVar5 != (PlayerTierStateCalculator *)0x0) {
      pPVar6 = pPVar5->klass;
      pGStack1 = (GamePassesManager__Class *)pPVar6[1]._0.image;
      pSVar4 = (String *)(*(code *)(pPVar6->vtable).ToString.method)();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar4,(MethodInfo *)0x0);
      return;
    }
  }
  pGStack1 = (GamePassesManager__Class *)0x0;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SendTierUnlockedNotification(GamePassTier) */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_SendTierUnlockedNotification
               (GamePassTier__Enum unlockedTier,MethodInfo *method)

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
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    data = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    key = (String *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
    value = (CrossPlatformInputManager_VirtualButton *)
            func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)data,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?();
    }
    NotificationController::NotificationController_PushNotification_2
              (NotificationType__Enum_TierUnlocked,data,NotificationLifetime__Enum_High,
               (MethodInfo *)0x0);
  }
  return;
}


/* Void UpdatePlayerPlanetData(PlayerPlanetData) */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
               (PlayerPlanetData *playerPlanetData,MethodInfo *method)

{
  pPVar1 = playerPlanetData;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  GamePassesManager_HandleNewTierUnlocked(playerPlanetData,(MethodInfo *)0x0);
  TypeInfo__GamePassesManager->static_fields->playerPlanetData = playerPlanetData;
  GamePassesManager_UpdateToggleState((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__GamePassesManager->static_fields->showGamePassDataInConsole != 0) {
    if (playerPlanetData == (PlayerPlanetData *)0x0) goto code_?;
    pSVar5 = (String *)(*(code *)(playerPlanetData->klass->vtable).ToString.method)();
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?();
    }
    this = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    playerPlanetData =
         (PlayerPlanetData *)
         CONCAT31(playerPlanetData._1_3_,(playerPlanetData->fields).gamePassTier);
    if ((this == (PlayerTierStateCalculator *)0x0) ||
       (this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                  PlayerTierStateCalculator_GetTierPricingState
                            (this,(pPVar1->fields).progressionGamePoints,
                             (GamePassTier__Enum)playerPlanetData,(MethodInfo *)0x0),
       this_01 ==
       (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0))
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
               &pDStack_6,(Dictionary_2_WinningConditionType_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__GetEnumerator__
              );
    uStack_2 = 0;
    do {
      cVar7 = func_?();
      if (cVar7 == '\0') goto code_?;
      LevelRewardsManager::LevelRewardsManager_get_NextReward
                ((LevelRewardsManager *)&stack0xffffffc8,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Current__
                );
      iVar8 = func_?();
      if (iVar8 == 0) goto code_?;
    } while (*(int *)(iVar8 + 8) != 1);
    func_?();
    arg0 = (Object *)func_?();
    arg1 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar5 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral__0____1_,arg0,arg1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar5,(MethodInfo *)0x0);
code_?:
    uStack_2 = 0xffffffff;
    func_?();
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  if (TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated != (Action *)0x0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = (JumpState_OnWallJumpDelegate *)
              TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    if (this_00 == (JumpState_OnWallJumpDelegate *)0x0) {
code_?:
      func_?();
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  *unaff_FS_OFFSET = uStack_4;
  return;
}


/* Void UpdateToggleState() */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_UpdateToggleState(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  freeFirstTry = MVClientSettings::MVClientSettings_get_FirstPreviewTierFreeEnabled
                           ((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (TypeInfo__GamePassesManager->static_fields->togglePreviewState != (TogglePreviewState *)0x0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    this = (GoldRewardManager *)TypeInfo__GamePassesManager->static_fields->togglePreviewState;
    if (this == (GoldRewardManager *)0x0) goto code_?;
    freeFirstTry = GoldRewardManager::GoldRewardManager_get_IsGoldRewardDone(this,(MethodInfo *)0x0)
    ;
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
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData != (PlayerPlanetData *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      GStack_2 = CONCAT31(GStack_2._1_3_,(pPVar1->fields).gamePassTier);
      this_00 = (TogglePreviewState *)
                func_?(TypeInfo__Assets__Scripts__GamePasses__TogglePreviewState);
      Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState__ctor
                (this_00,unaff_ESI,GStack_2,freeFirstTry,(MethodInfo *)0x0);
      TypeInfo__GamePassesManager->static_fields->togglePreviewState = this_00;
      return;
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean get_GamePassesActive() */

bool Assembly-CSharp.dll::GamePassesManager::GamePassesManager_get_GamePassesActive
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  return TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField;
}


/* PlayerPlanetData get_PlayerPlanetData() */

PlayerPlanetData *
Assembly-CSharp.dll::GamePassesManager::GamePassesManager_get_PlayerPlanetData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  return TypeInfo__GamePassesManager->static_fields->playerPlanetData;
}


/* Boolean get_ShowGamePassDataInConsole() */

bool Assembly-CSharp.dll::GamePassesManager::GamePassesManager_get_ShowGamePassDataInConsole
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  return TypeInfo__GamePassesManager->static_fields->showGamePassDataInConsole;
}


/* TogglePreviewState get_TogglePreviewState() */

TogglePreviewState *
Assembly-CSharp.dll::GamePassesManager::GamePassesManager_get_TogglePreviewState(MethodInfo *method)

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
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_GamePassesActive_is_false__Retur,(MethodInfo *)0x0);
    return (TogglePreviewState *)0x0;
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (TypeInfo__GamePassesManager->static_fields->togglePreviewState == (TogglePreviewState *)0x0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar1 = GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      pPVar1 = GamePassesManager_get_PlayerPlanetData
                         ((MethodInfo *)(uint)(pPVar1->fields).previewGamePassTier);
      if (pPVar1 != (PlayerPlanetData *)0x0) {
        if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVClientSettings);
        }
        freeFirstTry = MVClientSettings::MVClientSettings_get_FirstPreviewTierFreeEnabled
                                 ((MethodInfo *)0x0);
        previewTier = TypeInfo__Assets__Scripts__GamePasses__TogglePreviewState;
        pTVar2 = (TogglePreviewState *)func_?();
        Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState__ctor
                  (pTVar2,(GamePassTier__Enum)previewTier,unaff_ESI,freeFirstTry,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->togglePreviewState = pTVar2;
        goto code_?;
      }
    }
    func_?(0);
    pcVar3 = (code *)swi(3);
    pTVar2 = (TogglePreviewState *)(*pcVar3)();
    return pTVar2;
  }
code_?:
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  return TypeInfo__GamePassesManager->static_fields->togglePreviewState;
}


/* Void set_GamePassesActive(Boolean) */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_set_GamePassesActive
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
    TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField = value;
    return;
  }
  TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField = value;
  return;
}


/* Void set_PlayerPlanetData(PlayerPlanetData) */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_set_PlayerPlanetData
               (PlayerPlanetData *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  bVar1 = cRam_? == '\0';
  TypeInfo__GamePassesManager->static_fields->playerPlanetData = value;
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (bVar1) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField =
       pPVar2 != (PlayerPlanetData *)0x0;
  if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVClientSettings);
  }
  bVar3 = MVClientSettings::MVClientSettings_IsFlagSet
                    (ClientSettingFlags__Enum_GamePassSilentReleaseEnabled,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?();
      TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField =
           in_stack_4;
      return;
    }
    TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField =
         in_stack_4;
    return;
  }
  return;
}


/* Void set_ShowGamePassDataInConsole(Boolean) */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_set_ShowGamePassDataInConsole
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if ((TypeInfo__GamePassesManager->static_fields->showGamePassDataInConsole == 0) && (value != 0))
  {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,StringLiteral__rgp_for_reset_player_datau000A,
               (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      pSVar2 = (String *)(*(code *)(pPVar1->klass->vtable).ToString.method)();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar2,(MethodInfo *)0x0);
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      if (pPVar3 != (PlayerTierStateCalculator *)0x0) {
        pSVar2 = (String *)(*(code *)(pPVar3->klass->vtable).ToString.method)();
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar2,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
code_?:
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  TypeInfo__GamePassesManager->static_fields->showGamePassDataInConsole = 1;
  return;
}

