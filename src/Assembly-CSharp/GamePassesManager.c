
/* Void HandleNewTierUnlocked(PlayerPlanetData) */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_HandleNewTierUnlocked
               (PlayerPlanetData *newPlayerPlanetData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields).gameMode != 0) {
    if ((newPlayerPlanetData == (PlayerPlanetData *)0x0) ||
       (pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData,
       pPVar3 == (PlayerPlanetData *)0x0)) goto code_?;
    bVar4 = (newPlayerPlanetData->fields).gamePassTier;
    if ((pPVar3->fields).gamePassTier < bVar4) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Byte);
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                       );
        func_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
        func_?(&TypeInfo__System__Int32);
        func_?(&TypeInfo__NotificationController);
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
        this = (Dictionary_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
        if (this == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        uStack_5 = (undefined *)CONCAT13(4,(undefined3)uStack_5);
        key = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_5 + 3);
        uStack_6 = (uint)bVar4;
        value = (Object *)func_?(TypeInfo__System__Int32,&uStack_6);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this,key,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        NotificationController::NotificationController_PushNotification_2
                  (NotificationType__Enum_TierUnlocked,this,NotificationLifetime__Enum_High,
                   (MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void SendCompleteStatus() */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_SendCompleteStatus
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    func_?(&StringLiteral__rgp_for_reset_player_datau000A);
    cRam_? = '\x01';
  }
  MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
            (MVGameMsgType__Enum_AdminMsg,StringLiteral__rgp_for_reset_player_datau000A,
             (MethodInfo *)0x0);
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    pSVar2 = (String *)(*(pPVar1->klass->vtable).ToString.methodPtr)();
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar2,(MethodInfo *)0x0);
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (pPVar3 != (PlayerTierStateCalculator *)0x0) {
      pSVar2 = (String *)(*(pPVar3->klass->vtable).ToString.methodPtr)();
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
  uVar4 = func_?(&stack0x00000000);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SendTierUnlockedNotification(GamePassTier) */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_SendTierUnlockedNotification
               (GamePassTier__Enum unlockedTier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    this = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
    if (this == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
    puStack_2 = (undefined *)(unlockedTier & 0xff);
    value = (Object *)func_?(TypeInfo__System__Int32,&puStack_2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    NotificationController::NotificationController_PushNotification_2
              (NotificationType__Enum_TierUnlocked,this,NotificationLifetime__Enum_High,
               (MethodInfo *)0x0);
  }
  return;
}


/* Void UpdatePlayerPlanetData(PlayerPlanetData) */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_UpdatePlayerPlanetData
               (PlayerPlanetData *playerPlanetData,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Current__
                   );
    func_?(&TypeInfo__MV__Common__GamePassTier);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Value__
                   );
    func_?(&StringLiteral__0____1_);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6.klass = (Dictionary_2_System_Object_System_Object___Class *)0x0;
  DStack_6.monitor = (MonitorData *)0x0;
  DStack_6.fields._buckets = (Int32__Array *)0x0;
  DStack_6.fields._entries =
       (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)0x0;
  DStack_6.fields._count = 0;
  DStack_6.fields._freeList = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pPVar7 = playerPlanetData;
  pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar8 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar8->fields).gameMode != 0) {
    if (playerPlanetData == (PlayerPlanetData *)0x0) goto code_?;
    DStack_6.fields._syncRoot._3_1_ = (playerPlanetData->fields).gamePassTier;
    pPVar9 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar9 == (PlayerPlanetData *)0x0) goto code_?;
    if ((pPVar9->fields).gamePassTier < DStack_6.fields._syncRoot._3_1_) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Byte);
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                       );
        func_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
        func_?(&TypeInfo__System__Int32);
        func_?(&TypeInfo__NotificationController);
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
        DStack_6.fields._comparer =
             (IEqualityComparer_1_System_Object_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
        if ((Dictionary_2_System_Object_System_Object_ *)DStack_6.fields._comparer ==
            (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)DStack_6.fields._comparer,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        playerPlanetData = (PlayerPlanetData *)CONCAT13(4,playerPlanetData._0_3_);
        pOVar10 = (Object *)func_?(TypeInfo__System__Byte,(int)&playerPlanetData + 3);
        DStack_6.fields._values =
             (Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ *)
             (uint)DStack_6.fields._syncRoot._3_1_;
        value = (Object *)func_?(TypeInfo__System__Int32,&DStack_6.fields._values);
        data = DStack_6.fields._comparer;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)DStack_6.fields._comparer,pOVar10,
                   value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__NotificationController);
        }
        NotificationController::NotificationController_PushNotification_2
                  (NotificationType__Enum_TierUnlocked,
                   (Dictionary_2_System_Object_System_Object_ *)data,NotificationLifetime__Enum_High
                   ,(MethodInfo *)0x0);
      }
    }
  }
  TypeInfo__GamePassesManager->static_fields->playerPlanetData = pPVar7;
  func_?(&TypeInfo__GamePassesManager->static_fields->playerPlanetData,pPVar7);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    func_?(&TypeInfo__Assets__Scripts__GamePasses__TogglePreviewState);
    cRam_? = '\x01';
  }
  bVar11 = MVClientSettings::MVClientSettings_get_FirstPreviewTierFreeEnabled((MethodInfo *)0x0);
  if (TypeInfo__GamePassesManager->static_fields->togglePreviewState != (TogglePreviewState *)0x0) {
    bVar11 = (TypeInfo__GamePassesManager->static_fields->togglePreviewState->fields).freeTry;
  }
  playerPlanetData = (PlayerPlanetData *)CONCAT31(playerPlanetData._1_3_,bVar11);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar9 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar9 != (PlayerPlanetData *)0x0) {
    DStack_6.fields._values =
         (Dictionary_2_TKey_TValue_ValueCollection_System_Object_System_Object_ *)
         CONCAT31(DStack_6.fields._values._1_3_,(pPVar9->fields).previewGamePassTier);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar9 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar9 != (PlayerPlanetData *)0x0) {
      DStack_6.fields._comparer =
           (IEqualityComparer_1_System_Object_ *)
           CONCAT31(DStack_6.fields._comparer._1_3_,(pPVar9->fields).gamePassTier);
      this_00 = (TogglePreviewState *)
                func_?(TypeInfo__Assets__Scripts__GamePasses__TogglePreviewState);
      if (this_00 != (TogglePreviewState *)0x0) {
        Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState__ctor
                  (this_00,(GamePassTier__Enum)DStack_6.fields._values,
                   (GamePassTier__Enum)DStack_6.fields._comparer,(bool)playerPlanetData,
                   (MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->togglePreviewState = this_00;
        func_?(&TypeInfo__GamePassesManager->static_fields->togglePreviewState,this_00);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePassesManager);
          cRam_? = '\x01';
        }
        if (TypeInfo__GamePassesManager->static_fields->showGamePassDataInConsole == 0) {
code_?:
          if (TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated != (Action *)0x0
             ) {
            (*(TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated->fields)._._.
              invoke_impl)();
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (pPVar7 != (PlayerPlanetData *)0x0) {
          pSVar12 = (String *)
                   (*(pPVar7->klass->vtable).ToString.methodPtr)
                             (pPVar7,(pPVar7->klass->vtable).ToString.method);
          MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                    (MVGameMsgType__Enum_AdminMsg,pSVar12,(MethodInfo *)0x0);
          this = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
          playerPlanetData =
               (PlayerPlanetData *)CONCAT31(playerPlanetData._1_3_,(pPVar7->fields).gamePassTier);
          if (this != (PlayerTierStateCalculator *)0x0) {
            this_01 = (Dictionary_2_System_Object_System_Object_ *)
                      MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator
                      ::PlayerTierStateCalculator_GetTierPricingState
                                (this,(pPVar7->fields).progressionGamePoints,
                                 (GamePassTier__Enum)playerPlanetData,(MethodInfo *)0x0);
            if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::
                       Dictionary_2_System_Object_System_Object__GetEnumerator
                                 (&DStack_14,this_01,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__GetEnumerator__
                                 );
              DStack_6.fields._version = 0;
              DStack_6.klass =
                   (Dictionary_2_System_Object_System_Object___Class *)pDVar13->_dictionary;
              DStack_6.monitor = (MonitorData *)pDVar13->_version;
              DStack_6.fields._buckets = (Int32__Array *)pDVar13->_index;
              DStack_6.fields._entries =
                   (Dictionary_2_TKey_TValue_Entry_System_Object_System_Object___Array *)
                   (pDVar13->_current).key;
              DStack_6.fields._8_8_ = *(undefined8 *)&(pDVar13->_current).value;
              uStack_1 = 1;
              DStack_6.fields._comparer = (IEqualityComparer_1_System_Object_ *)&DStack_6;
              do {
                bVar11 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
                        Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                                  ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_
                                    *)&DStack_6,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__MoveNext__
                                  );
                if (bVar11 == 0) goto code_?;
                arg1 = DStack_6.fields._count;
                if ((Object *)DStack_6.fields._count == (Object *)0x0) goto code_?;
              } while (((Object *)(DStack_6.fields._count + 8))->klass != (Object__Class *)0x1);
              playerPlanetData =
                   (PlayerPlanetData *)
                   CONCAT13(DStack_6.fields._entries._0_1_,playerPlanetData._0_3_);
              pOVar10 = (Object *)
                       func_?(TypeInfo__MV__Common__GamePassTier,(int)&playerPlanetData + 3
                                      );
              pSVar12 = mscorlib.dll::System::String::String_Format_1
                                 (StringLiteral__0____1_,pOVar10,(Object *)arg1,(MethodInfo *)0x0);
              MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                        (MVGameMsgType__Enum_AdminMsg,pSVar12,(MethodInfo *)0x0);
code_?:
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)&DStack_6,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dispose__
                         ,unaff_EDI);
              uStack_1 = 0xffffffff;
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void UpdateToggleState() */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_UpdateToggleState(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    func_?(&TypeInfo__Assets__Scripts__GamePasses__TogglePreviewState);
    cRam_? = '\x01';
  }
  freeFirstTry = MVClientSettings::MVClientSettings_get_FirstPreviewTierFreeEnabled
                           ((MethodInfo *)0x0);
  if (TypeInfo__GamePassesManager->static_fields->togglePreviewState != (TogglePreviewState *)0x0) {
    freeFirstTry = (TypeInfo__GamePassesManager->static_fields->togglePreviewState->fields).freeTry;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData != (PlayerPlanetData *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      GStack_2 = CONCAT31(GStack_2._1_3_,(pPVar1->fields).gamePassTier);
      this = (TogglePreviewState *)
             func_?(TypeInfo__Assets__Scripts__GamePasses__TogglePreviewState);
      if (this != (TogglePreviewState *)0x0) {
        Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState__ctor
                  (this,GamePassTier__Enum_Tier0,GStack_2,freeFirstTry,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->togglePreviewState = this;
        func_?(&TypeInfo__GamePassesManager->static_fields->togglePreviewState,this);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean get_GamePassesActive() */

bool Assembly-CSharp.dll::GamePassesManager::GamePassesManager_get_GamePassesActive
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  return TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField;
}


/* PlayerPlanetData get_PlayerPlanetData() */

PlayerPlanetData *
Assembly-CSharp.dll::GamePassesManager::GamePassesManager_get_PlayerPlanetData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  return TypeInfo__GamePassesManager->static_fields->playerPlanetData;
}


/* Boolean get_ShowGamePassDataInConsole() */

bool Assembly-CSharp.dll::GamePassesManager::GamePassesManager_get_ShowGamePassDataInConsole
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  return TypeInfo__GamePassesManager->static_fields->showGamePassDataInConsole;
}


/* TogglePreviewState get_TogglePreviewState() */

TogglePreviewState *
Assembly-CSharp.dll::GamePassesManager::GamePassesManager_get_TogglePreviewState(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&TypeInfo__Assets__Scripts__GamePasses__TogglePreviewState);
    func_?(&StringLiteral_GamePassesActive_is_false__Retur);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_GamePassesActive_is_false__Retur,(MethodInfo *)0x0);
    return (TogglePreviewState *)0x0;
  }
  if (TypeInfo__GamePassesManager->static_fields->togglePreviewState == (TogglePreviewState *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      GStack_2 = CONCAT31(GStack_2._1_3_,(pPVar1->fields).previewGamePassTier);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar1 != (PlayerPlanetData *)0x0) {
        GStack_3 = CONCAT31(GStack_3._1_3_,(pPVar1->fields).gamePassTier);
        freeFirstTry = MVClientSettings::MVClientSettings_get_FirstPreviewTierFreeEnabled
                                 ((MethodInfo *)0x0);
        pTVar4 = (TogglePreviewState *)
                 func_?(TypeInfo__Assets__Scripts__GamePasses__TogglePreviewState);
        if (pTVar4 != (TogglePreviewState *)0x0) {
          Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState__ctor
                    (pTVar4,GStack_2,GStack_3,freeFirstTry,(MethodInfo *)0x0);
          TypeInfo__GamePassesManager->static_fields->togglePreviewState = pTVar4;
          func_?(&TypeInfo__GamePassesManager->static_fields->togglePreviewState,pTVar4);
          goto code_?;
        }
      }
    }
    func_?();
    pcVar5 = (code *)swi(3);
    pTVar4 = (TogglePreviewState *)(*pcVar5)();
    return pTVar4;
  }
code_?:
  return TypeInfo__GamePassesManager->static_fields->togglePreviewState;
}


/* Void set_GamePassesActive(Boolean) */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_set_GamePassesActive
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField = value;
  return;
}


/* Void set_PlayerPlanetData(PlayerPlanetData) */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_set_PlayerPlanetData
               (PlayerPlanetData *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  TypeInfo__GamePassesManager->static_fields->playerPlanetData = value;
  func_?(&TypeInfo__GamePassesManager->static_fields->playerPlanetData,value);
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField =
       pPVar1 != (PlayerPlanetData *)0x0;
  bVar2 = MVClientSettings::MVClientSettings_IsFlagSet
                    (ClientSettingFlags__Enum_GamePassSilentReleaseEnabled,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField = 0;
  }
  return;
}


/* Void set_ShowGamePassDataInConsole(Boolean) */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_set_ShowGamePassDataInConsole
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  bVar1 = 0;
  if (TypeInfo__GamePassesManager->static_fields->showGamePassDataInConsole == 0) {
    bVar1 = value;
  }
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      func_?(&StringLiteral__rgp_for_reset_player_datau000A);
      cRam_? = '\x01';
    }
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,StringLiteral__rgp_for_reset_player_datau000A,
               (MethodInfo *)0x0);
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar2 != (PlayerPlanetData *)0x0) {
      pSVar3 = (String *)(*(pPVar2->klass->vtable).ToString.methodPtr)(pPVar2);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
      pPVar4 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      if (pPVar4 != (PlayerTierStateCalculator *)0x0) {
        pSVar3 = (String *)(*(pPVar4->klass->vtable).ToString.methodPtr)(pPVar4);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
code_?:
  TypeInfo__GamePassesManager->static_fields->showGamePassDataInConsole = 1;
  return;
}

