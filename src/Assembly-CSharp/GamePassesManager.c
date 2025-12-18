
/* Void HandleNewTierUnlocked(PlayerPlanetData) */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_HandleNewTierUnlocked
               (PlayerPlanetData *newPlayerPlanetData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar2 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar2->fields).gameMode != 4) {
        if ((newPlayerPlanetData == (PlayerPlanetData *)0x0) ||
           (pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData,
           pPVar3 == (PlayerPlanetData *)0x0)) goto code_?;
        bVar4 = (newPlayerPlanetData->fields).gamePassTier;
        if ((pPVar3->fields).gamePassTier < bVar4) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__NotificationController);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
            this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                    *)FUN_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
            Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                      (this,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,4);
            key = (Object *)FUN_?(uRam_?,auStackX_18);
            auStackX_18[0] = (uint)bVar4;
            value = (Object *)FUN_?(uRam_?,auStackX_18);
            if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                         *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this,key,value,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pGVar1 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
              FUN_?();
            }
            NotificationController::NotificationController_PushNotification_2
                      (NotificationType__Enum_TierUnlocked,
                       (Dictionary_2_System_Object_System_Object_ *)this,
                       NotificationLifetime__Enum_High,(MethodInfo *)0x0);
          }
        }
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SendCompleteStatus() */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_SendCompleteStatus
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__rgp_for_reset_player_datau000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
            (MVGameMsgType__Enum_AdminMsg,StringLiteral__rgp_for_reset_player_datau000A,
             (MethodInfo *)0x0);
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    message = (String *)
              (*(pPVar1->klass->vtable).ToString.methodPtr)
                        (pPVar1,(pPVar1->klass->vtable).ToString.method);
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,message,(MethodInfo *)0x0);
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (pPVar2 != (PlayerTierStateCalculator *)0x0) {
      value = (Object *)
              (*(pPVar2->klass->vtable).ToString.methodPtr)
                        (pPVar2,(pPVar2->klass->vtable).ToString.method);
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      ,value,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
              *)FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      auStackX_10[0] = 5;
      key = (Object *)FUN_?(uRam_?,auStackX_10);
      if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,key,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase,this,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg !=
            (MVGameControllerBase_OnReceivedGameMsgDelegate *)0x0) {
          pMVar3 = TypeInfo__MVGameControllerBase->static_fields->OnReceivedGameMsg;
          (*(pMVar3->fields)._._.invoke_impl)
                    ((pMVar3->fields)._._.method_code,3,this,(pMVar3->fields)._._.method,unaff_RDI);
        }
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SendTierUnlockedNotification(GamePassTier) */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_SendTierUnlockedNotification
               (GamePassTier__Enum unlockedTier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    aGStackX_18[0] = CONCAT31(aGStackX_18[0]._1_3_,4);
    key = (Object *)FUN_?(uRam_?,aGStackX_18);
    aGStackX_18[0] = unlockedTier & 0xff;
    value = (Object *)FUN_?(uRam_?,aGStackX_18);
    if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,key,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
      FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__GamePassTier);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0____1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)0x0;
  DStack_1._version = 0;
  DStack_1._index = 0;
  DStack_1._current.key = 0;
  DStack_1._current._1_7_ = 0;
  DStack_1._current.value = (Object *)0x0;
  DStack_1._getEnumeratorRetType = 0;
  DStack_1._36_4_ = 0;
  GamePassesManager_HandleNewTierUnlocked(playerPlanetData,(MethodInfo *)0x0);
  TypeInfo__GamePassesManager->static_fields->playerPlanetData = playerPlanetData;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__GamePassesManager->static_fields->playerPlanetData >> 0xc)
    ;
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__GamePasses__TogglePreviewState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar7 = (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x16) & 1;
  if (TypeInfo__GamePassesManager->static_fields->togglePreviewState != (TogglePreviewState *)0x0) {
    bVar7 = (TypeInfo__GamePassesManager->static_fields->togglePreviewState->fields).freeTry;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar8 != (PlayerPlanetData *)0x0) {
    uVar9 = (pPVar8->fields).previewGamePassTier;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar8 != (PlayerPlanetData *)0x0) {
      uVar10 = (pPVar8->fields).gamePassTier;
      pTVar11 = (TogglePreviewState *)
                FUN_?(TypeInfo__Assets__Scripts__GamePasses__TogglePreviewState);
      (pTVar11->fields).freeTry = bVar7;
      (pTVar11->fields).previewTier = uVar9;
      (pTVar11->fields).currentTier = uVar10;
      TypeInfo__GamePassesManager->static_fields->togglePreviewState = pTVar11;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&TypeInfo__GamePassesManager->static_fields->togglePreviewState
                       >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__GamePassesManager->static_fields->showGamePassDataInConsole == 0) {
code_?:
        if (TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated != (Action *)0x0)
        {
          pAVar12 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
          (*(pAVar12->fields)._._.invoke_impl)
                    ((pAVar12->fields)._._.method_code,(pAVar12->fields)._._.method);
        }
        return;
      }
      if (playerPlanetData != (PlayerPlanetData *)0x0) {
        pSVar13 = (String *)
                  (*(playerPlanetData->klass->vtable).ToString.methodPtr)
                            (playerPlanetData,(playerPlanetData->klass->vtable).ToString.method);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar13,(MethodInfo *)0x0);
        this = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
        bVar14 = (playerPlanetData->fields).gamePassTier;
        if (this != (PlayerTierStateCalculator *)0x0) {
          if ((this->fields).gamePointVelocityIsZero == 0) {
            pDVar15 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator
                      ::PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                                (this,(playerPlanetData->fields).progressionGamePoints,(uint)bVar14,
                                 (MethodInfo *)0x0);
          }
          else {
            pDVar15 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator
                      ::PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                                (this,(uint)bVar14,(MethodInfo *)0x0);
          }
          if (pDVar15 !=
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) {
            uStack_16 = 0;
            uStack_17 = 0;
            if (iRam_? != 0) {
              uVar2 = (uint)((ulonglong)&pDStack_18 >> 0xc);
              lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
              do {
                uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
                puVar5 = (ulonglong *)(lVar3 + 0xADDR);
                LOCK();
                bVar6 = uVar4 == *puVar5;
                if (bVar6) {
                  *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar6);
            }
            uStack_19 = (ulonglong)(uint)(pDVar15->fields)._version;
            uStack_20 = 2;
            DStack_1._version = (undefined4)uStack_19;
            DStack_1._index = uStack_19._4_4_;
            DStack_1._current.key = 0;
            DStack_1._current._1_7_ = 0;
            DStack_1._current.value = (Object *)0x0;
            DStack_1._getEnumeratorRetType = 2;
            DStack_1._36_4_ = 0;
            DStack_1._dictionary = (Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15;
            pDStack_18 = pDVar15;
            do {
              bVar7 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
                       Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                                 (&DStack_1,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__MoveNext__
                                 );
              arg1 = DStack_1._current.value;
              if (bVar7 == 0) goto code_?;
              if (DStack_1._current.value == (Object *)0x0) goto code_?;
            } while (*(int *)&DStack_1._current.value[1].klass != 1);
            auStackX_8[0] = DStack_1._current.key;
            arg0 = (Object *)FUN_?(TypeInfo__MV__Common__GamePassTier,auStackX_8);
            pSVar13 = mscorlib.dll::System::String::String_Format_1
                                (StringLiteral__0____1_,arg0,arg1,(MethodInfo *)0x0);
            MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                      (MVGameMsgType__Enum_AdminMsg,pSVar13,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void UpdateToggleState() */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_UpdateToggleState(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__GamePasses__TogglePreviewState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 0x16) & 1;
  if (TypeInfo__GamePassesManager->static_fields->togglePreviewState != (TogglePreviewState *)0x0) {
    bVar1 = (TypeInfo__GamePassesManager->static_fields->togglePreviewState->fields).freeTry;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 != (PlayerPlanetData *)0x0) {
    uVar3 = (pPVar2->fields).previewGamePassTier;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar2 != (PlayerPlanetData *)0x0) {
      uVar4 = (pPVar2->fields).gamePassTier;
      pTVar5 = (TogglePreviewState *)
               FUN_?(TypeInfo__Assets__Scripts__GamePasses__TogglePreviewState);
      (pTVar5->fields).freeTry = bVar1;
      (pTVar5->fields).previewTier = uVar3;
      (pTVar5->fields).currentTier = uVar4;
      TypeInfo__GamePassesManager->static_fields->togglePreviewState = pTVar5;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&TypeInfo__GamePassesManager->static_fields->togglePreviewState
                       >> 0xc);
        puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar8 = *puVar7;
          LOCK();
          uVar9 = *puVar7;
          if (uVar8 == uVar9) {
            *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (uVar8 != uVar9);
      }
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean get_GamePassesActive() */

bool Assembly-CSharp.dll::GamePassesManager::GamePassesManager_get_GamePassesActive
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField;
}


/* PlayerPlanetData get_PlayerPlanetData() */

PlayerPlanetData *
Assembly-CSharp.dll::GamePassesManager::GamePassesManager_get_PlayerPlanetData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__GamePassesManager->static_fields->playerPlanetData;
}


/* Boolean get_ShowGamePassDataInConsole() */

bool Assembly-CSharp.dll::GamePassesManager::GamePassesManager_get_ShowGamePassDataInConsole
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__GamePassesManager->static_fields->showGamePassDataInConsole;
}


/* TogglePreviewState get_TogglePreviewState() */

TogglePreviewState *
Assembly-CSharp.dll::GamePassesManager::GamePassesManager_get_TogglePreviewState(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__GamePasses__TogglePreviewState);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GamePassesActive_is_false__Retur);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_GamePassesActive_is_false__Retur,(MethodInfo *)0x0);
    return (TogglePreviewState *)0x0;
  }
  if (TypeInfo__GamePassesManager->static_fields->togglePreviewState != (TogglePreviewState *)0x0) {
code_?:
    return TypeInfo__GamePassesManager->static_fields->togglePreviewState;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    uVar2 = (pPVar1->fields).previewGamePassTier;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      uVar3 = (pPVar1->fields).gamePassTier;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVClientSettings);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar4 = TypeInfo__MVClientSettings->static_fields->flags;
      pTVar5 = (TogglePreviewState *)
               FUN_?(TypeInfo__Assets__Scripts__GamePasses__TogglePreviewState);
      (pTVar5->fields).freeTry = (byte)(uVar4 >> 0x16) & 1;
      (pTVar5->fields).currentTier = uVar3;
      (pTVar5->fields).previewTier = uVar2;
      TypeInfo__GamePassesManager->static_fields->togglePreviewState = pTVar5;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&TypeInfo__GamePassesManager->static_fields->togglePreviewState >>
                      0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pTVar5 = (TogglePreviewState *)(*pcVar9)();
  return pTVar5;
}


/* Void set_GamePassesActive(Boolean) */

void Assembly-CSharp.dll::GamePassesManager::GamePassesManager_set_GamePassesActive
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__GamePassesManager->static_fields->playerPlanetData = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__GamePassesManager->static_fields->playerPlanetData >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField =
       pPVar5 != (PlayerPlanetData *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVClientSettings->static_fields->flags & 0x100U) != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
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
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = 0;
  if (TypeInfo__GamePassesManager->static_fields->showGamePassDataInConsole == 0) {
    bVar1 = value;
  }
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral__rgp_for_reset_player_datau000A);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
              (MVGameMsgType__Enum_AdminMsg,StringLiteral__rgp_for_reset_player_datau000A,
               (MethodInfo *)0x0);
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar2 != (PlayerPlanetData *)0x0) {
      pSVar3 = (String *)
               (*(pPVar2->klass->vtable).ToString.methodPtr)
                         (pPVar2,(pPVar2->klass->vtable).ToString.method);
      MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
      pPVar4 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      if (pPVar4 != (PlayerTierStateCalculator *)0x0) {
        pSVar3 = (String *)
                 (*(pPVar4->klass->vtable).ToString.methodPtr)
                           (pPVar4,(pPVar4->klass->vtable).ToString.method);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar3,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
code_?:
  TypeInfo__GamePassesManager->static_fields->showGamePassDataInConsole = 1;
  return;
}

