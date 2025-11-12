
/* Void CreateHighlightArrow(GamePassTier) */

void Assembly-CSharp.dll::GamePassesHighlightArrowManager::
     GamePassesHighlightArrowManager_CreateHighlightArrow
               (GamePassesHighlightArrowManager *this,GamePassTier__Enum gamePassTierToHighlight,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
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
    if ((pGVar1->fields).gameMode == 0) {
      return;
    }
    pGVar2 = (this->fields).highlightArrowPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pGVar2 = (GameObject *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar2,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    bVar3 = iRam_? != 0;
    (this->fields).highLightArrow = pGVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).highLightArrow >> 0xc);
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
    pGVar2 = (this->fields).highLightArrow;
    if (pGVar2 != (GameObject *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar2,(MethodInfo *)0x0);
      pLVar8 = (this->fields).progressBarTransfromsList;
      if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
        if ((uint)(pLVar8->fields)._size <=
            (gamePassTierToHighlight & 0xff) - GamePassTier__Enum_Tier1) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar10 = (pLVar8->fields)._items;
        if (pTVar10 != (Transform__Array *)0x0) {
          if ((uint)pTVar10->max_length <=
              (gamePassTierToHighlight & 0xff) - GamePassTier__Enum_Tier1) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (this_00 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (this_00,pTVar10->vector[(ulonglong)(byte)gamePassTierToHighlight - 1],0,
                       (MethodInfo *)0x0);
            (this->fields).currentGamePassTierHighlighted = (byte)gamePassTierToHighlight;
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void DestroyHighlighArrow() */

void Assembly-CSharp.dll::GamePassesHighlightArrowManager::
     GamePassesHighlightArrowManager_DestroyHighlighArrow
               (GamePassesHighlightArrowManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).highLightArrow;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar1 = (this->fields).highLightArrow;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar1,0.0,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (this->fields).highLightArrow = (GameObject *)0x0;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).highLightArrow >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      (this->fields).currentGamePassTierHighlighted = 0;
    }
  }
  return;
}


/* Void HandleUnseenTierUnlockReward() */

void Assembly-CSharp.dll::GamePassesHighlightArrowManager::
     GamePassesHighlightArrowManager_HandleUnseenTierUnlockReward
               (GamePassesHighlightArrowManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesHighlightArrowManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierUnlockedPopupController);
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
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
  bVar2 = (pPVar1->fields).gamePassTier;
  if (TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown < bVar2) {
    GamePassesHighlightArrowManager_DestroyHighlighArrow(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
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
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar3 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar3->fields).gameMode != 0) {
      pGVar4 = (this->fields).highlightArrowPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar4 = (GameObject *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar4,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                          );
      bVar5 = iRam_? != 0;
      (this->fields).highLightArrow = pGVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).highLightArrow >> 0xc);
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
      pGVar4 = (this->fields).highLightArrow;
      if (pGVar4 == (GameObject *)0x0) {
code_?:
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar4,(MethodInfo *)0x0);
      pLVar11 = (this->fields).progressBarTransfromsList;
      if (pLVar11 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
      if ((uint)(pLVar11->fields)._size <= bVar2 - 1) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar12 = (pLVar11->fields)._items;
      if (pTVar12 == (Transform__Array *)0x0) goto code_?;
      if ((uint)pTVar12->max_length <= bVar2 - 1) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (this_00 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_00,pTVar12->vector[(ulonglong)bVar2 - 1],0,(MethodInfo *)0x0);
      (this->fields).currentGamePassTierHighlighted = bVar2;
    }
    TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked = 1;
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::GamePassesHighlightArrowManager::GamePassesHighlightArrowManager_OnEnable
               (GamePassesHighlightArrowManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesHighlightArrowManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesHighlightArrowManager->static_fields->shouldDestroyHighlighArrow != 0) {
    GamePassesHighlightArrowManager_DestroyHighlighArrow(this,(MethodInfo *)0x0);
    TypeInfo__GamePassesHighlightArrowManager->static_fields->shouldDestroyHighlighArrow = 0;
  }
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GamePassesHighlightArrowManager::
     GamePassesHighlightArrowManager_OnPlayerPlanetDataUpdated
               (GamePassesHighlightArrowManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields).gameMode == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesHighlightArrowManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierUnlockedPopupController);
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
  pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar3 == (PlayerPlanetData *)0x0) goto code_?;
  bVar4 = (pPVar3->fields).gamePassTier;
  if (TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown < bVar4) {
    GamePassesHighlightArrowManager_DestroyHighlighArrow(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
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
    if (pGVar1 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar1->fields).gameMode != 0) {
      pGVar5 = (this->fields).highlightArrowPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar5 = (GameObject *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar5,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                          );
      bVar6 = iRam_? != 0;
      (this->fields).highLightArrow = pGVar5;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(this->fields).highLightArrow >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      pGVar5 = (this->fields).highLightArrow;
      if (pGVar5 == (GameObject *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar5,(MethodInfo *)0x0);
      pLVar11 = (this->fields).progressBarTransfromsList;
      if (pLVar11 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
      if ((uint)(pLVar11->fields)._size <= bVar4 - 1) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar12 = (pLVar11->fields)._items;
      if (pTVar12 == (Transform__Array *)0x0) goto code_?;
      if ((uint)pTVar12->max_length <= bVar4 - 1) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (this_00 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_00,pTVar12->vector[(ulonglong)bVar4 - 1],0,(MethodInfo *)0x0);
      (this->fields).currentGamePassTierHighlighted = bVar4;
    }
    TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked = 1;
  }
  return;
}


/* Void OnTierBeingShown(GamePassTier) */

void Assembly-CSharp.dll::GamePassesHighlightArrowManager::
     GamePassesHighlightArrowManager_OnTierBeingShown
               (GamePassesHighlightArrowManager *this,GamePassTier__Enum tierBeingShown,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesHighlightArrowManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((uint8_t)tierBeingShown == (this->fields).currentGamePassTierHighlighted) {
    GamePassesHighlightArrowManager_DestroyHighlighArrow(this,(MethodInfo *)0x0);
    if (TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked != 0) {
      TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked = 0;
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GamePassesHighlightArrowManager::GamePassesHighlightArrowManager_Start
               (GamePassesHighlightArrowManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesHighlightArrowManager__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesHighlightArrowManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__GamePassesHighlightArrowManager__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
  }
  else {
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated
                  >> 0xc);
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
  if (TypeInfo__GamePassesHighlightArrowManager->static_fields->isHighlightingTierUnlocked != 0) {
    GamePassesHighlightArrowManager_HandleUnseenTierUnlockReward(this,(MethodInfo *)0x0);
  }
  return;
}

