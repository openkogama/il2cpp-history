
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
    if ((pPVar3->fields).gamePassTier < (newPlayerPlanetData->fields).gamePassTier) {
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
        this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
        value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
        if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this,key,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        NotificationController::NotificationController_PushNotification_2
                  (NotificationType__Enum_TierUnlocked,
                   (Dictionary_2_System_Object_System_Object_ *)this,NotificationLifetime__Enum_High
                   ,(MethodInfo *)0x0);
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
    pSVar2 = (String *)(*(code *)(pPVar1->klass->vtable).ToString.method)();
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,pSVar2,(MethodInfo *)0x0);
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (pPVar3 != (PlayerTierStateCalculator *)0x0) {
      pSVar2 = (String *)(*(code *)(pPVar3->klass->vtable).ToString.method)();
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
    this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
    value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    NotificationController::NotificationController_PushNotification_2
              (NotificationType__Enum_TierUnlocked,(Dictionary_2_System_Object_System_Object_ *)this
               ,NotificationLifetime__Enum_High,(MethodInfo *)0x0);
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
  DStack_6._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current._0_4_ = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
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
    bStack_9 = (playerPlanetData->fields).gamePassTier;
    pPVar10 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar10 == (PlayerPlanetData *)0x0) goto code_?;
    if ((pPVar10->fields).gamePassTier < bStack_9) {
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
        this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        playerPlanetData = (PlayerPlanetData *)CONCAT13(4,playerPlanetData._0_3_);
        pDStack_11 = (Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *)
                     func_?(TypeInfo__System__Byte,(int)&playerPlanetData + 3);
        GStack_12 = (GamePassTier__Enum)bStack_9;
        pOVar13 = (Object *)func_?(TypeInfo__System__Int32,&GStack_12);
        if (this_00 ==
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)pDStack_11,pOVar13,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        unaff_EDI = (MethodInfo *)0x1f;
        NotificationController::NotificationController_PushNotification_2
                  (NotificationType__Enum_TierUnlocked,
                   (Dictionary_2_System_Object_System_Object_ *)this_00,
                   NotificationLifetime__Enum_High,(MethodInfo *)0x0);
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
  bVar14 = MVClientSettings::MVClientSettings_get_FirstPreviewTierFreeEnabled((MethodInfo *)0x0);
  if (TypeInfo__GamePassesManager->static_fields->togglePreviewState != (TogglePreviewState *)0x0) {
    bVar14 = (TypeInfo__GamePassesManager->static_fields->togglePreviewState->fields).freeTry;
  }
  playerPlanetData = (PlayerPlanetData *)CONCAT31(playerPlanetData._1_3_,bVar14);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar10 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar10 != (PlayerPlanetData *)0x0) {
    GStack_12 = CONCAT31(GStack_12._1_3_,(pPVar10->fields).previewGamePassTier);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar10 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar10 != (PlayerPlanetData *)0x0) {
      pDStack_11 = (Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *)
                   CONCAT31(pDStack_11._1_3_,(pPVar10->fields).gamePassTier);
      this_01 = (TogglePreviewState *)
                func_?(TypeInfo__Assets__Scripts__GamePasses__TogglePreviewState);
      Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState__ctor
                (this_01,GStack_12,(GamePassTier__Enum)pDStack_11,(bool)playerPlanetData,
                 (MethodInfo *)0x0);
      TypeInfo__GamePassesManager->static_fields->togglePreviewState = this_01;
      func_?(&TypeInfo__GamePassesManager->static_fields->togglePreviewState,this_01);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      if (TypeInfo__GamePassesManager->static_fields->showGamePassDataInConsole == 0) {
code_?:
        if (TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated != (Action *)0x0)
        {
          (*(TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated->fields)._._.
            invoke_impl)();
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (pPVar7 != (PlayerPlanetData *)0x0) {
        pSVar15 = (String *)
                 (*(code *)(pPVar7->klass->vtable).ToString.method)
                           (pPVar7,pPVar7->klass[1]._0.image);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar15,(MethodInfo *)0x0);
        this = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
        playerPlanetData =
             (PlayerPlanetData *)CONCAT31(playerPlanetData._1_3_,(pPVar7->fields).gamePassTier);
        if (this != (PlayerTierStateCalculator *)0x0) {
          this_02 = (Dictionary_2_System_UInt32_System_Object_ *)
                    MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingState
                              (this,(pPVar7->fields).progressionGamePoints,
                               (GamePassTier__Enum)playerPlanetData,(MethodInfo *)0x0);
          if (this_02 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
            pDVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System
                     ::Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                               ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                                &stack0xffffffa4,this_02,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__GetEnumerator__
                               );
            uStack_17 = 0;
            DStack_6._dictionary =
                 (Dictionary_2_System_ByteEnum_System_Object_ *)pDVar16->_dictionary;
            DStack_6._version = pDVar16->_version;
            DStack_6._index = pDVar16->_index;
            DStack_6._current._0_4_ = (pDVar16->_current).key;
            DStack_6._16_8_ = *(undefined8 *)&(pDVar16->_current).value;
            uStack_1 = 1;
            pDStack_11 = &DStack_6;
            do {
              bVar14 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
                      Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                                (&DStack_6,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__MoveNext__
                                );
              if (bVar14 == 0) goto code_?;
              pOVar13 = DStack_6._current.value;
              if (DStack_6._current.value == (Object *)0x0) goto code_?;
            } while (DStack_6._current.value[1].klass != (Object__Class *)0x1);
            playerPlanetData =
                 (PlayerPlanetData *)CONCAT13(DStack_6._current.key,playerPlanetData._0_3_);
            arg0 = (Object *)
                   func_?(TypeInfo__MV__Common__GamePassTier,(int)&playerPlanetData + 3);
            pSVar15 = mscorlib.dll::System::String::String_Format_1
                               (StringLiteral__0____1_,arg0,pOVar13,(MethodInfo *)0x0);
            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                      (MVGameMsgType__Enum_AdminMsg,pSVar15,(MethodInfo *)0x0);
code_?:
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
      Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState__ctor
                (this,unaff_ESI,GStack_2,freeFirstTry,(MethodInfo *)0x0);
      TypeInfo__GamePassesManager->static_fields->togglePreviewState = this;
      func_?(&TypeInfo__GamePassesManager->static_fields->togglePreviewState,this);
      return;
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
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
        Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState__ctor
                  (pTVar4,GStack_2,GStack_3,freeFirstTry,(MethodInfo *)0x0);
        TypeInfo__GamePassesManager->static_fields->togglePreviewState = pTVar4;
        func_?(&TypeInfo__GamePassesManager->static_fields->togglePreviewState,pTVar4);
        goto code_?;
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
      pSVar3 = (String *)(*(code *)(pPVar2->klass->vtable).ToString.method)(pPVar2);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
      pPVar4 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      if (pPVar4 != (PlayerTierStateCalculator *)0x0) {
        pSVar3 = (String *)(*(code *)(pPVar4->klass->vtable).ToString.method)(pPVar4);
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

