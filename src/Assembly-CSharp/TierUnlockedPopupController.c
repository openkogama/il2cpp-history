
/* Void Initialize(GamePassTier, Boolean, Boolean) */

void Assembly-CSharp.dll::TierUnlockedPopupController::TierUnlockedPopupController_Initialize
               (TierUnlockedPopupController *this,GamePassTier__Enum unlockedTier,bool wasPurchased,
               bool wasTempUnlocked,MethodInfo *method)

{
  uVar1 = (uint8_t)unlockedTier;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__Add_TierUnlockedPopupContentBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarSpawnRoleCreator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierTempUnlockedInformationPopupContent_MethodInfo__UnityEngine__Object__Instantiate<TierTempUnlockedInformationPopupContent>_TierTempUnlockedInformationPopupContent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierUnlockedPopupContentBase_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentBase>_TierUnlockedPopupContentBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierUnlockedPopupContentSpawnRole_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentSpawnRole>_TierUnlockedPopupContentSpawnRole_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierUnlockedPopupContentTierTempUnlocked_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentTierTempUnlocked>_TierUnlockedPopupContentTierTempUnlocked_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierUnlockedPopupContentTierUnlocked_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentTierUnlocked>_TierUnlockedPopupContentTierUnlocked_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierUnlockedPopupContentXP_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentXP>_TierUnlockedPopupContentXP_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierUnlockedPopupController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).unlockedTier = uVar1;
  pLVar2 = (List_1_TierUnlockedPopupContentBase_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__List__);
  bVar3 = iRam_? != 0;
  (this->fields).popupContentList = pLVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).popupContentList >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  if (wasTempUnlocked == 0) {
    original_00 = (this->fields).PopupContentTierUnlockedPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar8 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original_00,
                         TierUnlockedPopupContentTierUnlocked_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentTierUnlocked>_TierUnlockedPopupContentTierUnlocked_
                        );
    if (pCVar8 == (Component *)0x0) goto code_?;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar8,(MethodInfo *)0x0);
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar9,pTVar10,0,(MethodInfo *)0x0);
    pLVar2 = (this->fields).popupContentList;
    if (pLVar2 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
    FUN_?(pLVar2,pCVar8);
    pCVar8 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)(this->fields).PopupContentXPPrefab,
                         TierUnlockedPopupContentXP_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentXP>_TierUnlockedPopupContentXP_
                        );
    if (pCVar8 == (Component *)0x0) goto code_?;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar8,(MethodInfo *)0x0);
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar9,pTVar10,0,(MethodInfo *)0x0);
    pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (pCVar8,(MethodInfo *)0x0);
    if (pGVar11 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar11,0,(MethodInfo *)0x0);
  }
  else {
    original = (this->fields).popupContentTierTempUnlockPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar8 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         TierUnlockedPopupContentTierTempUnlocked_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentTierTempUnlocked>_TierUnlockedPopupContentTierTempUnlocked_
                        );
    if (pCVar8 == (Component *)0x0) goto code_?;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar8,(MethodInfo *)0x0);
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar9,pTVar10,0,(MethodInfo *)0x0);
  }
  pLVar2 = (this->fields).popupContentList;
  if (pLVar2 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
  FUN_?(pLVar2,pCVar8);
  if (wasPurchased != 0) {
    pTVar12 = (this->fields).PopupContentCreatorSupportPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar8 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pTVar12,
                         TierUnlockedPopupContentBase_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentBase>_TierUnlockedPopupContentBase_
                        );
    if (pCVar8 == (Component *)0x0) goto code_?;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar8,(MethodInfo *)0x0);
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar9,pTVar10,0,(MethodInfo *)0x0);
    pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (pCVar8,(MethodInfo *)0x0);
    if (pGVar11 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar11,0,(MethodInfo *)0x0);
    pLVar2 = (this->fields).popupContentList;
    if (pLVar2 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
    FUN_?(pLVar2,pCVar8);
  }
  if (wasTempUnlocked != 0) {
    original_01 = (this->fields).popupContentTempUnlockInformationPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar8 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original_01,
                         TierTempUnlockedInformationPopupContent_MethodInfo__UnityEngine__Object__Instantiate<TierTempUnlockedInformationPopupContent>_TierTempUnlockedInformationPopupContent_
                        );
    if (pCVar8 == (Component *)0x0) goto code_?;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar8,(MethodInfo *)0x0);
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar9,pTVar10,0,(MethodInfo *)0x0);
    pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (pCVar8,(MethodInfo *)0x0);
    if (pGVar11 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar11,0,(MethodInfo *)0x0);
    pLVar2 = (this->fields).popupContentList;
    if (pLVar2 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto code_?;
    FUN_?(pLVar2,pCVar8);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar13 == (MVGameControllerBase *)0x0) ||
       (pMVar14 = (pMVar13->fields).game, pMVar14 == (MVNetworkGame *)0x0)) ||
      ((pMVar14->fields).worldNetwork == (WorldNetwork *)0x0)) ||
     ((this_00 = (MVWorldObjectClientManager *)
                 (((pMVar14->fields).worldNetwork)->fields)._.worldObjectClientManager,
      this_00 == (MVWorldObjectClientManager *)0x0 ||
      (pLVar15 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                           (this_00,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0),
      pLVar15 == (List_1_MVWorldObjectClient_ *)0x0)))) goto code_?;
  if (0 < (pLVar15->fields)._size) {
    lVar16 = 0x20;
    lVar17 = 0x20;
    pMVar18 = TypeInfo__MVAvatarSpawnRoleCreator;
    for (uVar4 = 0; (int)uVar4 < (pLVar15->fields)._size; uVar4 = uVar4 + 1) {
      if ((uint)(pLVar15->fields)._size <= uVar4) goto code_?;
      pMVar19 = (pLVar15->fields)._items;
      if (pMVar19 == (MVWorldObjectClient__Array *)0x0) goto code_?;
      if ((uint)pMVar19->max_length <= uVar4) goto code_?;
      plVar20 = *(longlong **)((longlong)pMVar19->vector + lVar17 + -0x20);
      if (plVar20 != (longlong *)0x0) {
        lVar21 = *plVar20;
        bVar22 = (pMVar18->_1).naturalAligment;
        if ((bVar22 <= *(byte *)(lVar21 + 0x130)) &&
           (*(MVAvatarSpawnRoleCreator__Class **)
             (*(longlong *)(lVar21 + 200) + -8 + (ulonglong)bVar22 * 8) == pMVar18)) {
          pMVar23 = (MVAvatarSpawnRoleCreator *)FUN_?(pLVar15,uVar4);
          if (pMVar23 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
          bVar22 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
          if (((pMVar23->klass->_1).naturalAligment < bVar22) ||
             ((MVAvatarSpawnRoleCreator__Class *)
              (pMVar23->klass->_1).typeHierarchy[(ulonglong)bVar22 - 1] !=
              TypeInfo__MVAvatarSpawnRoleCreator)) {
            FUN_?(pMVar23,TypeInfo__MVAvatarSpawnRoleCreator);
            pcVar24 = (code *)swi(3);
            (*pcVar24)();
            return;
          }
          GVar25 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                             (pMVar23,(MethodInfo *)0x0);
          pMVar18 = TypeInfo__MVAvatarSpawnRoleCreator;
          if ((uint8_t)GVar25 == uVar1) {
            pTVar26 = (this->fields).popupContentSpawnRolePrefab;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            pTVar26 = (TierUnlockedPopupContentSpawnRole *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)pTVar26,
                                 TierUnlockedPopupContentSpawnRole_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupContentSpawnRole>_TierUnlockedPopupContentSpawnRole_
                                );
            if (pTVar26 == (TierUnlockedPopupContentSpawnRole *)0x0) goto code_?;
            pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pTVar26,(MethodInfo *)0x0);
            pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar9 == (Transform *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (pTVar9,pTVar10,0,(MethodInfo *)0x0);
            pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pTVar26,(MethodInfo *)0x0);
            if (pGVar11 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar11,0,(MethodInfo *)0x0);
            uVar4 = 0;
            pMVar18 = TypeInfo__MVAvatarSpawnRoleCreator;
            goto code_?;
          }
        }
      }
      lVar17 = lVar17 + 8;
    }
  }
code_?:
  TierUnlockedPopupController_StartNewPopupContent(this,0,(MethodInfo *)0x0);
  pLVar2 = (this->fields).popupContentList;
  pIVar27 = (this->fields).Background;
  if (pLVar2 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
    if ((pLVar2->fields)._size == 0) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar24 = (code *)swi(3);
      (*pcVar24)();
      return;
    }
    pTVar28 = (pLVar2->fields)._items;
    if (pTVar28 != (TierUnlockedPopupContentBase__Array *)0x0) {
      if ((int)pTVar28->max_length == 0) {
code_?:
        FUN_?();
        pcVar24 = (code *)swi(3);
        (*pcVar24)();
        return;
      }
      pTVar12 = pTVar28->vector[0];
      if ((pTVar12 != (TierUnlockedPopupContentBase *)0x0) && (pIVar27 != (Image *)0x0)) {
        fStack_29 = (pTVar12->fields).backgroundColor.r;
        fStack_30 = (pTVar12->fields).backgroundColor.g;
        fStack_31 = (pTVar12->fields).backgroundColor.b;
        fStack_32 = (pTVar12->fields).backgroundColor.a;
        (*(pIVar27->klass->vtable).set_color.methodPtr)
                  (pIVar27,&fStack_29,(pIVar27->klass->vtable).set_color.method);
        TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown = uVar1;
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
code_?:
  if ((pLVar15->fields)._size <= (int)uVar4) goto code_?;
  if ((uint)(pLVar15->fields)._size <= uVar4) goto code_?;
  pMVar19 = (pLVar15->fields)._items;
  if (pMVar19 == (MVWorldObjectClient__Array *)0x0) goto code_?;
  if ((uint)pMVar19->max_length <= uVar4) goto code_?;
  plVar20 = *(longlong **)((longlong)pMVar19->vector + lVar16 + -0x20);
  if (plVar20 != (longlong *)0x0) {
    lVar17 = *plVar20;
    bVar22 = (pMVar18->_1).naturalAligment;
    if ((bVar22 <= *(byte *)(lVar17 + 0x130)) &&
       (*(MVAvatarSpawnRoleCreator__Class **)
         (*(longlong *)(lVar17 + 200) + -8 + (ulonglong)bVar22 * 8) == pMVar18)) {
      pMVar23 = (MVAvatarSpawnRoleCreator *)FUN_?(pLVar15,uVar4);
      if (pMVar23 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
      bVar22 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
      if (((pMVar23->klass->_1).naturalAligment < bVar22) ||
         ((MVAvatarSpawnRoleCreator__Class *)
          (pMVar23->klass->_1).typeHierarchy[(ulonglong)bVar22 - 1] !=
          TypeInfo__MVAvatarSpawnRoleCreator)) {
        FUN_?(pMVar23,TypeInfo__MVAvatarSpawnRoleCreator);
        pcVar24 = (code *)swi(3);
        (*pcVar24)();
        return;
      }
      GVar25 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                         (pMVar23,(MethodInfo *)0x0);
      pMVar18 = TypeInfo__MVAvatarSpawnRoleCreator;
      if ((uint8_t)GVar25 == uVar1) {
        pGVar33 = (this->fields).spawnRoleInfoPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pGVar33 = (GamePassesSpawnRoleRewardInfo *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pGVar33,
                             GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo_
                            );
        pMVar23 = (MVAvatarSpawnRoleCreator *)FUN_?(pLVar15,uVar4);
        if (pMVar23 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
        bVar22 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
        if (((pMVar23->klass->_1).naturalAligment < bVar22) ||
           ((MVAvatarSpawnRoleCreator__Class *)
            (pMVar23->klass->_1).typeHierarchy[(ulonglong)bVar22 - 1] !=
            TypeInfo__MVAvatarSpawnRoleCreator)) {
          FUN_?(pMVar23,TypeInfo__MVAvatarSpawnRoleCreator);
          pcVar24 = (code *)swi(3);
          (*pcVar24)();
          return;
        }
        pMVar34 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_AvatarPrototype
                            (pMVar23,(MethodInfo *)0x0);
        if (pMVar34 == (MVPreviewAvatar *)0x0) goto code_?;
        pGVar11 = (pMVar34->fields)._._.gameObject;
        pMVar23 = (MVAvatarSpawnRoleCreator *)FUN_?(pLVar15,uVar4);
        if (pGVar33 == (GamePassesSpawnRoleRewardInfo *)0x0) goto code_?;
        if (pMVar23 != (MVAvatarSpawnRoleCreator *)0x0) {
          bVar22 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
          if (((pMVar23->klass->_1).naturalAligment < bVar22) ||
             ((MVAvatarSpawnRoleCreator__Class *)
              (pMVar23->klass->_1).typeHierarchy[(ulonglong)bVar22 - 1] !=
              TypeInfo__MVAvatarSpawnRoleCreator)) {
            FUN_?(pMVar23);
            pcVar24 = (code *)swi(3);
            (*pcVar24)();
            return;
          }
        }
        in_stack_35 = CONCAT31((int3)(in_stack_35 >> 8),uVar1);
        GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Initialize
                  (pGVar33,uVar4,pGVar11,pMVar23,in_stack_35,(MethodInfo *)0x0);
        TierUnlockedPopupContentSpawnRole::TierUnlockedPopupContentSpawnRole_AddSpawnRoleRewardInfo
                  (pTVar26,pGVar33,(MethodInfo *)0x0);
        pMVar18 = TypeInfo__MVAvatarSpawnRoleCreator;
      }
    }
  }
  uVar4 = uVar4 + 1;
  lVar16 = lVar16 + 8;
  goto code_?;
code_?:
  if ((this->fields).popupContentList == (List_1_TierUnlockedPopupContentBase_ *)0x0)
  goto code_?;
  FUN_?();
  goto code_?;
}


/* Void OnStartingToDissappear() */

void Assembly-CSharp.dll::TierUnlockedPopupController::
     TierUnlockedPopupController_OnStartingToDissappear
               (TierUnlockedPopupController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).popupContentList;
  uVar2 = (this->fields).currentContentBeingShowed + 1;
  (this->fields).currentContentBeingShowed = uVar2;
  pcVar3 = pcRam_?;
  if (pLVar1 == (List_1_TierUnlockedPopupContentBase_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pLVar1->fields)._size <= (int)uVar2) {
    (this->fields).isPoppingCountdownStarted = 1;
    pcVar4 = pcRam_?;
    if ((pcVar3 == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar3, pcVar3 == (code *)0x0))
    {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar4;
    fVar6 = (float)(*pcVar3)();
    (this->fields).popTime = fVar6 + (this->fields).fadeDuration;
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TierUnlockedPopupController__OnStartingToDissappear__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).popupContentList;
  if (pLVar1 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar7 = (pLVar1->fields)._items;
    if (pTVar7 != (TierUnlockedPopupContentBase__Array *)0x0) {
      if ((uint)pTVar7->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pTVar7->vector[(int)uVar2] != (TierUnlockedPopupContentBase *)0x0) &&
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar7->vector[(int)uVar2],(MethodInfo *)0x0),
         this_00 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        pLVar1 = (this->fields).popupContentList;
        if (pLVar1 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
          if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
          pTVar7 = (pLVar1->fields)._items;
          if (pTVar7 != (TierUnlockedPopupContentBase__Array *)0x0) {
            if ((uint)pTVar7->max_length <= uVar2) goto code_?;
            pTVar8 = pTVar7->vector[(int)uVar2];
            bVar9 = (this->fields).unlockedTier;
            this_01 = (NavMesh_OnNavMeshPreUpdate *)
                      FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_01,(Object *)this,
                       MethodInfo__TierUnlockedPopupController__OnStartingToDissappear__,
                       (MethodInfo *)0x0);
            if (pTVar8 != (TierUnlockedPopupContentBase *)0x0) {
              (*(pTVar8->klass->vtable).Initialize.methodPtr)
                        (pTVar8,(ulonglong)bVar9,this_01,(pTVar8->klass->vtable).Initialize.method);
              pcVar3 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar3;
              fVar6 = (float)(*pcRam_?)();
              pcVar3 = pcRam_?;
              (this->fields).interpolateColorStartTime = fVar6;
              pcVar4 = pcRam_?;
              if ((pcVar3 == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar3,
                 pcVar3 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar4;
              fVar6 = (float)(*pcVar3)();
              pcVar3 = pcRam_?;
              (this->fields).bounceEffectStartTime = fVar6;
              pcVar4 = pcRam_?;
              if ((pcVar3 == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar3,
                 pcVar3 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar4;
              fVar6 = (float)(*pcVar3)();
              pcVar3 = pcRam_?;
              pLVar1 = (this->fields).popupContentList;
              if (pLVar1 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
                if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
                pTVar7 = (pLVar1->fields)._items;
                if (pTVar7 != (TierUnlockedPopupContentBase__Array *)0x0) {
                  if ((uint)pTVar7->max_length <= uVar2) goto code_?;
                  if (pTVar7->vector[(int)uVar2] != (TierUnlockedPopupContentBase *)0x0) {
                    pAVar10 = (this->fields).bounceEffect;
                    (this->fields).fadeEffectStartTime =
                         ((pTVar7->vector[(int)uVar2]->fields).displayTime -
                         (this->fields).fadeDuration) + fVar6;
                    pcVar4 = pcRam_?;
                    if ((pcVar3 == (code *)0x0) &&
                       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar3,
                       pcVar3 == (code *)0x0)) {
                      uVar5 = func_?(&UNK_?);
                      FUN_?(uVar5,0);
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    pcRam_? = pcVar4;
                    fVar6 = (float)(*pcVar3)();
                    if (pAVar10 != (AnimationCurve *)0x0) {
                      pvVar11 = (pAVar10->fields).m_Ptr;
                      if (pvVar11 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pAVar10,(MethodInfo *)0x0);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      fVar12 = (this->fields).bounceEffectStartTime;
                      fVar13 = (this->fields).bounceEffectDuration;
                      pcVar3 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0))
                      {
                        uVar5 = func_?(&UNK_?);
                        FUN_?(uVar5,0);
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      pcRam_? = pcVar3;
                      fVar6 = (float)(*pcRam_?)(pvVar11,(fVar6 - fVar12) / fVar13);
                      pLVar1 = (this->fields).popupContentList;
                      if (pLVar1 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
                        uVar2 = (this->fields).currentContentBeingShowed;
                        if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
                        pTVar7 = (pLVar1->fields)._items;
                        if (pTVar7 != (TierUnlockedPopupContentBase__Array *)0x0) {
                          if ((uint)pTVar7->max_length <= uVar2) goto code_?;
                          if (pTVar7->vector[(int)uVar2] != (TierUnlockedPopupContentBase *)0x0) {
                            TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_UpdateScale
                                      (pTVar7->vector[(int)uVar2],fVar6,(MethodInfo *)0x0);
                            pAVar10 = (this->fields).fadeEffect;
                            pcVar3 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar3 = (code *)FUN_?(&UNK_?),
                               pcVar3 == (code *)0x0)) {
                              uVar5 = func_?(&UNK_?);
                              FUN_?(uVar5,0);
                              pcVar3 = (code *)swi(3);
                              (*pcVar3)();
                              return;
                            }
                            pcRam_? = pcVar3;
                            fVar6 = (float)(*pcRam_?)();
                            if (pAVar10 != (AnimationCurve *)0x0) {
                              pvVar11 = (pAVar10->fields).m_Ptr;
                              if (pvVar11 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)pAVar10,(MethodInfo *)0x0);
                                pcVar3 = (code *)swi(3);
                                (*pcVar3)();
                                return;
                              }
                              fVar12 = (this->fields).fadeEffectStartTime;
                              fVar13 = (this->fields).fadeDuration;
                              pcVar3 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar3 = (code *)FUN_?(&UNK_?),
                                 pcVar3 == (code *)0x0)) {
                                uVar5 = func_?(&UNK_?);
                                FUN_?(uVar5,0);
                                pcVar3 = (code *)swi(3);
                                (*pcVar3)();
                                return;
                              }
                              pcRam_? = pcVar3;
                              uVar14 = (*pcRam_?)(pvVar11,(fVar6 - fVar12) / fVar13);
                              pLVar1 = (this->fields).popupContentList;
                              if (pLVar1 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
                                uVar2 = (this->fields).currentContentBeingShowed;
                                if ((uint)(pLVar1->fields)._size <= uVar2)
                                goto code_?;
                                pTVar7 = (pLVar1->fields)._items;
                                if (pTVar7 != (TierUnlockedPopupContentBase__Array *)0x0) {
                                  if ((uint)pTVar7->max_length <= uVar2) goto code_?;
                                  if ((pTVar7->vector[(int)uVar2] !=
                                       (TierUnlockedPopupContentBase *)0x0) &&
                                     (obj = (pTVar7->vector[(int)uVar2]->fields).
                                            mainContentCanvasGroup, obj != (CanvasGroup *)0x0)) {
                                    if (cRam_? == '\0') {
                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                                                  ,uVar14,0);
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    if (obj == (CanvasGroup *)0x0) {
                                      FUN_?();
                                      pcVar3 = (code *)swi(3);
                                      (*pcVar3)();
                                      return;
                                    }
                                    pvVar11 = (obj->fields)._._._.m_CachedPtr;
                                    if (pvVar11 == (void *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper
                                      ::ThrowHelper_2_ThrowNullReferenceException
                                                ((Object *)obj,(MethodInfo *)0x0);
                                      pcVar3 = (code *)swi(3);
                                      (*pcVar3)();
                                      return;
                                    }
                                    pcVar3 = pcRam_?;
                                    if ((pcRam_? == (code *)0x0) &&
                                       (pcVar3 = (code *)FUN_?(&UNK_?),
                                       pcVar3 == (code *)0x0)) {
                                      uVar5 = func_?(&UNK_?);
                                      FUN_?(uVar5,0);
                                      pcVar3 = (code *)swi(3);
                                      (*pcVar3)();
                                      return;
                                    }
                                    pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                    (*pcRam_?)(pvVar11,uVar14);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartNewPopupContent(Int32) */

void Assembly-CSharp.dll::TierUnlockedPopupController::
     TierUnlockedPopupController_StartNewPopupContent
               (TierUnlockedPopupController *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TierUnlockedPopupController__OnStartingToDissappear__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).popupContentList;
  if (pLVar1 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)index) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar3 = (pLVar1->fields)._items;
    if (pTVar3 != (TierUnlockedPopupContentBase__Array *)0x0) {
      if ((uint)pTVar3->max_length <= (uint)index) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pTVar3->vector[index] != (TierUnlockedPopupContentBase *)0x0) &&
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar3->vector[index],(MethodInfo *)0x0),
         this_00 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        pLVar1 = (this->fields).popupContentList;
        if (pLVar1 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
          if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
          pTVar3 = (pLVar1->fields)._items;
          if (pTVar3 != (TierUnlockedPopupContentBase__Array *)0x0) {
            if ((uint)pTVar3->max_length <= (uint)index) goto code_?;
            pTVar4 = pTVar3->vector[index];
            bVar5 = (this->fields).unlockedTier;
            this_01 = (NavMesh_OnNavMeshPreUpdate *)
                      FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_01,(Object *)this,
                       MethodInfo__TierUnlockedPopupController__OnStartingToDissappear__,
                       (MethodInfo *)0x0);
            if (pTVar4 != (TierUnlockedPopupContentBase *)0x0) {
              (*(pTVar4->klass->vtable).Initialize.methodPtr)
                        (pTVar4,(ulonglong)bVar5,this_01,(pTVar4->klass->vtable).Initialize.method);
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar6 = func_?(&UNK_?);
                FUN_?(uVar6,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
              fVar7 = (float)(*pcRam_?)();
              pcVar2 = pcRam_?;
              (this->fields).interpolateColorStartTime = fVar7;
              pcVar8 = pcRam_?;
              if ((pcVar2 == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar8 = pcVar2,
                 pcVar2 == (code *)0x0)) {
                uVar6 = func_?(&UNK_?);
                FUN_?(uVar6,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar8;
              fVar7 = (float)(*pcVar2)();
              pcVar2 = pcRam_?;
              (this->fields).bounceEffectStartTime = fVar7;
              pcVar8 = pcRam_?;
              if ((pcVar2 == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar8 = pcVar2,
                 pcVar2 == (code *)0x0)) {
                uVar6 = func_?(&UNK_?);
                FUN_?(uVar6,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar8;
              fVar7 = (float)(*pcVar2)();
              pcVar2 = pcRam_?;
              pLVar1 = (this->fields).popupContentList;
              if (pLVar1 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
                if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
                pTVar3 = (pLVar1->fields)._items;
                if (pTVar3 != (TierUnlockedPopupContentBase__Array *)0x0) {
                  if ((uint)pTVar3->max_length <= (uint)index) goto code_?;
                  if (pTVar3->vector[index] != (TierUnlockedPopupContentBase *)0x0) {
                    pAVar9 = (this->fields).bounceEffect;
                    (this->fields).fadeEffectStartTime =
                         ((pTVar3->vector[index]->fields).displayTime - (this->fields).fadeDuration)
                         + fVar7;
                    pcVar8 = pcRam_?;
                    if ((pcVar2 == (code *)0x0) &&
                       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar8 = pcVar2,
                       pcVar2 == (code *)0x0)) {
                      uVar6 = func_?(&UNK_?);
                      FUN_?(uVar6,0);
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pcRam_? = pcVar8;
                    fVar7 = (float)(*pcVar2)();
                    if (pAVar9 != (AnimationCurve *)0x0) {
                      pvVar10 = (pAVar9->fields).m_Ptr;
                      if (pvVar10 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pAVar9,(MethodInfo *)0x0);
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      fVar11 = (this->fields).bounceEffectStartTime;
                      fVar12 = (this->fields).bounceEffectDuration;
                      pcVar2 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0))
                      {
                        uVar6 = func_?(&UNK_?);
                        FUN_?(uVar6,0);
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      pcRam_? = pcVar2;
                      fVar7 = (float)(*pcRam_?)(pvVar10,(fVar7 - fVar11) / fVar12);
                      pLVar1 = (this->fields).popupContentList;
                      if (pLVar1 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
                        uVar13 = (this->fields).currentContentBeingShowed;
                        if ((uint)(pLVar1->fields)._size <= uVar13) goto code_?;
                        pTVar3 = (pLVar1->fields)._items;
                        if (pTVar3 != (TierUnlockedPopupContentBase__Array *)0x0) {
                          if ((uint)pTVar3->max_length <= uVar13) goto code_?;
                          if (pTVar3->vector[(int)uVar13] != (TierUnlockedPopupContentBase *)0x0) {
                            TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_UpdateScale
                                      (pTVar3->vector[(int)uVar13],fVar7,(MethodInfo *)0x0);
                            pAVar9 = (this->fields).fadeEffect;
                            pcVar2 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar2 = (code *)FUN_?(&UNK_?),
                               pcVar2 == (code *)0x0)) {
                              uVar6 = func_?(&UNK_?);
                              FUN_?(uVar6,0);
                              pcVar2 = (code *)swi(3);
                              (*pcVar2)();
                              return;
                            }
                            pcRam_? = pcVar2;
                            fVar7 = (float)(*pcRam_?)();
                            if (pAVar9 != (AnimationCurve *)0x0) {
                              pvVar10 = (pAVar9->fields).m_Ptr;
                              if (pvVar10 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)pAVar9,(MethodInfo *)0x0);
                                pcVar2 = (code *)swi(3);
                                (*pcVar2)();
                                return;
                              }
                              fVar11 = (this->fields).fadeEffectStartTime;
                              fVar12 = (this->fields).fadeDuration;
                              pcVar2 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar2 = (code *)FUN_?(&UNK_?),
                                 pcVar2 == (code *)0x0)) {
                                uVar6 = func_?(&UNK_?);
                                FUN_?(uVar6,0);
                                pcVar2 = (code *)swi(3);
                                (*pcVar2)();
                                return;
                              }
                              pcRam_? = pcVar2;
                              uVar14 = (*pcRam_?)(pvVar10,(fVar7 - fVar11) / fVar12);
                              pLVar1 = (this->fields).popupContentList;
                              if (pLVar1 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
                                uVar13 = (this->fields).currentContentBeingShowed;
                                if ((uint)(pLVar1->fields)._size <= uVar13)
                                goto code_?;
                                pTVar3 = (pLVar1->fields)._items;
                                if (pTVar3 != (TierUnlockedPopupContentBase__Array *)0x0) {
                                  if ((uint)pTVar3->max_length <= uVar13) goto code_?;
                                  if ((pTVar3->vector[(int)uVar13] !=
                                       (TierUnlockedPopupContentBase *)0x0) &&
                                     (obj = (pTVar3->vector[(int)uVar13]->fields).
                                            mainContentCanvasGroup, obj != (CanvasGroup *)0x0)) {
                                    if (cRam_? == '\0') {
                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                                                  ,uVar14,0);
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    if (obj == (CanvasGroup *)0x0) {
                                      FUN_?();
                                      pcVar2 = (code *)swi(3);
                                      (*pcVar2)();
                                      return;
                                    }
                                    pvVar10 = (obj->fields)._._._.m_CachedPtr;
                                    if (pvVar10 == (void *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper
                                      ::ThrowHelper_2_ThrowNullReferenceException
                                                ((Object *)obj,(MethodInfo *)0x0);
                                      pcVar2 = (code *)swi(3);
                                      (*pcVar2)();
                                      return;
                                    }
                                    pcVar2 = pcRam_?;
                                    if ((pcRam_? == (code *)0x0) &&
                                       (pcVar2 = (code *)FUN_?(&UNK_?),
                                       pcVar2 == (code *)0x0)) {
                                      uVar6 = func_?(&UNK_?);
                                      FUN_?(uVar6,0);
                                      pcVar2 = (code *)swi(3);
                                      (*pcVar2)();
                                      return;
                                    }
                                    pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                    (*pcRam_?)(pvVar10,uVar14);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TierUnlockedPopupController::TierUnlockedPopupController_Update
               (TierUnlockedPopupController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TierUnlockedPopupContentBase>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TierUnlockedPopupController____c___Update_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierUnlockedPopupController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isPoppingCountdownStarted != 0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    if ((this->fields).popTime <= fVar3) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__TierUnlockedPopupController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TierUnlockedPopupController____c);
      }
      this_01 = TypeInfo__TierUnlockedPopupController____c->static_fields->__9__24_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__TierUnlockedPopupController____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__TierUnlockedPopupController____c);
        }
        object = TypeInfo__TierUnlockedPopupController____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__TierUnlockedPopupController____c___Update_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierUnlockedPopupController____c->static_fields->__9__24_0 = this_01;
        func_?(&TypeInfo__TierUnlockedPopupController____c->static_fields->__9__24_0);
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
  }
  pLVar4 = (this->fields).popupContentList;
  if (pLVar4 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
    if ((pLVar4->fields)._size <= (this->fields).currentContentBeingShowed) {
      return;
    }
    if (0 < (this->fields).currentContentBeingShowed) {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)();
      pLVar4 = (this->fields).popupContentList;
      pIVar5 = (this->fields).Background;
      if (pLVar4 == (List_1_TierUnlockedPopupContentBase_ *)0x0) goto DAT_?;
      iVar6 = (this->fields).currentContentBeingShowed;
      if ((uint)(pLVar4->fields)._size <= iVar6 - 1U) goto code_?;
      pTVar7 = (pLVar4->fields)._items;
      if (pTVar7 == (TierUnlockedPopupContentBase__Array *)0x0) goto DAT_?;
      if ((uint)pTVar7->max_length <= iVar6 - 1U) goto code_?;
      if ((pTVar7->vector[(longlong)iVar6 + -1] == (TierUnlockedPopupContentBase *)0x0) ||
         (pLVar4 = (this->fields).popupContentList,
         pLVar4 == (List_1_TierUnlockedPopupContentBase_ *)0x0)) goto DAT_?;
      uVar8 = (this->fields).currentContentBeingShowed;
      if ((uint)(pLVar4->fields)._size <= uVar8) goto code_?;
      pTVar7 = (pLVar4->fields)._items;
      if (pTVar7 == (TierUnlockedPopupContentBase__Array *)0x0) goto DAT_?;
      if ((uint)pTVar7->max_length <= uVar8) goto code_?;
      if ((pTVar7->vector[(int)uVar8] == (TierUnlockedPopupContentBase *)0x0) ||
         (pIVar5 == (Image *)0x0)) goto DAT_?;
      (*(pIVar5->klass->vtable).set_color.methodPtr)(pIVar5);
    }
    pAVar9 = (this->fields).bounceEffect;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    if (pAVar9 != (AnimationCurve *)0x0) {
      pvVar10 = (pAVar9->fields).m_Ptr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar9,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar11 = (this->fields).bounceEffectStartTime;
      fVar12 = (this->fields).bounceEffectDuration;
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      fVar3 = (float)(*pcRam_?)(pvVar10,(fVar3 - fVar11) / fVar12);
      pLVar4 = (this->fields).popupContentList;
      if (pLVar4 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
        uVar8 = (this->fields).currentContentBeingShowed;
        if ((uint)(pLVar4->fields)._size <= uVar8) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar7 = (pLVar4->fields)._items;
        if (pTVar7 != (TierUnlockedPopupContentBase__Array *)0x0) {
          if ((uint)pTVar7->max_length <= uVar8) {
code_?:
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (pTVar7->vector[(int)uVar8] != (TierUnlockedPopupContentBase *)0x0) {
            TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_UpdateScale
                      (pTVar7->vector[(int)uVar8],fVar3,(MethodInfo *)0x0);
            pAVar9 = (this->fields).fadeEffect;
            pcVar1 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
              uVar2 = func_?(&UNK_?);
              FUN_?(uVar2,0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcRam_? = pcVar1;
            fVar3 = (float)(*pcRam_?)();
            if (pAVar9 != (AnimationCurve *)0x0) {
              pvVar10 = (pAVar9->fields).m_Ptr;
              if (pvVar10 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar9,(MethodInfo *)0x0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              fVar11 = (this->fields).fadeEffectStartTime;
              fVar12 = (this->fields).fadeDuration;
              pcVar1 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                uVar2 = func_?(&UNK_?);
                FUN_?(uVar2,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcRam_? = pcVar1;
              fVar3 = (float)(*pcRam_?)(pvVar10,(fVar3 - fVar11) / fVar12);
              pLVar4 = (this->fields).popupContentList;
              if (pLVar4 != (List_1_TierUnlockedPopupContentBase_ *)0x0) {
                uVar8 = (this->fields).currentContentBeingShowed;
                if ((uint)(pLVar4->fields)._size <= uVar8) goto code_?;
                pTVar7 = (pLVar4->fields)._items;
                if (pTVar7 != (TierUnlockedPopupContentBase__Array *)0x0) {
                  if ((uint)pTVar7->max_length <= uVar8) goto code_?;
                  if ((pTVar7->vector[(int)uVar8] != (TierUnlockedPopupContentBase *)0x0) &&
                     (this_00 = (pTVar7->vector[(int)uVar8]->fields).mainContentCanvasGroup,
                     this_00 != (CanvasGroup *)0x0)) {
                    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                              (this_00,fVar3,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

