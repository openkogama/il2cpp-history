
/* Void HideButton() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_HideButton
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  this_00 = (this->fields).purchaseButton;
  if ((this_00 == (Button *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Boolean Initialize(GamePassTier) */

bool Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_Initialize
               (GamePassesPurchaseButton *this,GamePassTier__Enum tierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassProgressionController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesPurchaseButton__UpdatePriceText__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  (this->fields).tierDisplayed = (uint8_t)tierToDisplay;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 == (PlayerPlanetData *)0x0) goto code_?;
  playerGamePoints = (pPVar2->fields).progressionGamePoints;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 == (PlayerPlanetData *)0x0) goto code_?;
  this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
  bVar3 = (pPVar2->fields).gamePassTier;
  if (this_00 == (PlayerTierStateCalculator *)0x0) goto code_?;
  if ((this_00->fields).gamePointVelocityIsZero == 0) {
    this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
              PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                        (this_00,playerGamePoints,(uint)bVar3,(MethodInfo *)0x0);
  }
  else {
    this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
              PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                        (this_00,(uint)bVar3,(MethodInfo *)0x0);
  }
  if ((this_01 ==
       (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0) ||
     (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                           tierToDisplay & 0xff,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                          ), pOVar4 == (Object *)0x0)) goto code_?;
  iVar5 = *(int *)&pOVar4[1].klass;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar6 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar6 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar6->fields).gameMode == 0) {
    pBVar7 = (this->fields).purchaseButton;
    if ((pBVar7 == (Button *)0x0) ||
       (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pBVar7,(MethodInfo *)0x0), pGVar8 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,0,(MethodInfo *)0x0);
    pGVar8 = (this->fields).testToggle;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,1,(MethodInfo *)0x0);
    pTVar9 = (this->fields).toggleButton;
    if (pTVar9 == (ToggleButtonAnimation *)0x0) goto code_?;
    ToggleButtonAnimation::ToggleButtonAnimation_Initialize(pTVar9,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar2 == (PlayerPlanetData *)0x0) goto code_?;
    if ((pPVar2->fields).gamePassTier == (this->fields).tierDisplayed) {
      pTVar9 = (this->fields).toggleButton;
      if (pTVar9 == (ToggleButtonAnimation *)0x0) goto code_?;
      ToggleButtonAnimation::ToggleButtonAnimation_SetToggleOnWithoutInterpolation
                (pTVar9,(MethodInfo *)0x0);
    }
  }
  else {
    if (iVar5 == 0) {
      pBVar7 = (this->fields).purchaseButton;
      if ((pBVar7 == (Button *)0x0) ||
         (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pBVar7,(MethodInfo *)0x0), pGVar8 == (GameObject *)0x0)
         ) goto code_?;
      bVar10 = 0;
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar8,bVar10,(MethodInfo *)0x0);
    }
    else {
      if (iVar5 == 1) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pTVar11 = (this->fields).priceText;
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                             tierToDisplay & 0xff,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                            );
        if ((pOVar4 == (Object *)0x0) ||
           (pSVar12 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&pOVar4[1].monitor,(MethodInfo *)0x0),
           pTVar11 == (Text *)0x0)) goto code_?;
        (*(pTVar11->klass->vtable).set_text.methodPtr)(pTVar11,pSVar12);
        pGVar8 = (this->fields).freeTryButton;
        if (pGVar8 == (GameObject *)0x0) goto code_?;
        bVar10 = 1;
        goto code_?;
      }
      if (iVar5 == 2) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pBVar7 = (this->fields).purchaseButton;
        if ((pBVar7 == (Button *)0x0) ||
           (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pBVar7,(MethodInfo *)0x0),
           pGVar8 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar8,0,(MethodInfo *)0x0);
        pGVar8 = (this->fields).disabledPurchaseButton;
        if (pGVar8 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar8,1,(MethodInfo *)0x0);
        pTVar11 = (this->fields).disabledPriceText;
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                             tierToDisplay & 0xff,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                            );
        if ((pOVar4 == (Object *)0x0) ||
           (pSVar12 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&pOVar4[1].monitor,(MethodInfo *)0x0),
           pTVar11 == (Text *)0x0)) goto code_?;
        (*(pTVar11->klass->vtable).set_text.methodPtr)
                  (pTVar11,pSVar12,(pTVar11->klass->vtable).set_text.method);
      }
    }
    pAVar13 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    pNVar14 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar14,(Object *)this,MethodInfo__GamePassesPurchaseButton__UpdatePriceText__,
               (MethodInfo *)0x0);
    pAVar15 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar13,(Delegate *)pNVar14,(MethodInfo *)0x0);
    pAVar13 = (Action *)0x0;
    if (pAVar15 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar16 = pAVar13;
      if (pAVar15->klass == TypeInfo__System__Action) {
        pAVar16 = pAVar15;
      }
      if (pAVar16 == (Action *)0x0) {
        FUN_?(pAVar15,TypeInfo__System__Action);
        pcVar17 = (code *)swi(3);
        bVar10 = (*pcVar17)();
        return bVar10;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar16;
      pAVar16 = pAVar13;
      if (pAVar15->klass == TypeInfo__System__Action) {
        pAVar16 = pAVar15;
      }
      if (pAVar16 == (Action *)0x0) {
        FUN_?(pAVar15);
        pcVar17 = (code *)swi(3);
        bVar10 = (*pcVar17)();
        return bVar10;
      }
    }
    if (iRam_? != 0) {
      uVar18 = (uint)((ulonglong)
                      &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc)
      ;
      lVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6) * 8;
      do {
        uVar20 = *(ulonglong *)(lVar19 + 0xADDR);
        puVar21 = (ulonglong *)(lVar19 + 0xADDR);
        LOCK();
        bVar22 = uVar20 == *puVar21;
        if (bVar22) {
          *puVar21 = uVar20 | 1L << (ulonglong)(uVar18 & 0x3f);
        }
        UNLOCK();
      } while (!bVar22);
    }
    pAVar15 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
    pNVar14 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar14,(Object *)this,MethodInfo__GamePassesPurchaseButton__UpdatePriceText__,
               (MethodInfo *)0x0);
    pAVar15 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar15,(Delegate *)pNVar14,(MethodInfo *)0x0);
    if (pAVar15 == (Action *)0x0) {
      TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
           (Action *)0x0;
    }
    else {
      pAVar16 = pAVar13;
      if (pAVar15->klass == TypeInfo__System__Action) {
        pAVar16 = pAVar15;
      }
      if (pAVar16 == (Action *)0x0) {
        FUN_?(pAVar15,TypeInfo__System__Action);
        pcVar17 = (code *)swi(3);
        bVar10 = (*pcVar17)();
        return bVar10;
      }
      TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
           pAVar16;
      if (pAVar15->klass == TypeInfo__System__Action) {
        pAVar13 = pAVar15;
      }
      if (pAVar13 == (Action *)0x0) {
        FUN_?(pAVar15);
        pcVar17 = (code *)swi(3);
        bVar10 = (*pcVar17)();
        return bVar10;
      }
    }
    if (iRam_? != 0) {
      uVar18 = (uint)((ulonglong)
                      &TypeInfo__GamePassProgressionController->static_fields->
                       OnGamePassesProgressionUpdate >> 0xc);
      lVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6) * 8;
      do {
        uVar20 = *(ulonglong *)(lVar19 + 0xADDR);
        puVar21 = (ulonglong *)(lVar19 + 0xADDR);
        LOCK();
        bVar22 = uVar20 == *puVar21;
        if (bVar22) {
          *puVar21 = uVar20 | 1L << (uVar18 & 0x3f);
        }
        UNLOCK();
      } while (!bVar22);
    }
  }
  pBVar7 = (this->fields).purchaseButton;
  if ((pBVar7 != (Button *)0x0) &&
     (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pBVar7,(MethodInfo *)0x0), pGVar8 != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar8 == (GameObject *)0x0) {
      FUN_?();
      pcVar17 = (code *)swi(3);
      bVar10 = (*pcVar17)();
      return bVar10;
    }
    pvVar23 = (pGVar8->fields)._.m_CachedPtr;
    if (pvVar23 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar8,(MethodInfo *)0x0);
      pcVar17 = (code *)swi(3);
      bVar10 = (*pcVar17)();
      return bVar10;
    }
    pcVar17 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
      uVar24 = func_?(&UNK_?);
      FUN_?(uVar24,0);
      pcVar17 = (code *)swi(3);
      bVar10 = (*pcVar17)();
      return bVar10;
    }
    pcRam_? = pcVar17;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar10 = (*pcRam_?)(pvVar23);
    return bVar10;
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  bVar10 = (*pcVar17)();
  return bVar10;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_OnDestroy
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassProgressionController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesPurchaseButton__UpdatePriceText__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__GamePassesPurchaseButton__UpdatePriceText__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAVar3 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
  }
  else {
    pAVar4 = pAVar1;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?(pAVar3,TypeInfo__System__Action);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar4;
    pAVar4 = pAVar1;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?(pAVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated
                  >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  pAVar3 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__GamePassesPurchaseButton__UpdatePriceText__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar3,(Delegate *)pNVar2,(MethodInfo *)0x0);
  if (pAVar3 == (Action *)0x0) {
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
         (Action *)0x0;
  }
  else {
    pAVar4 = pAVar1;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?(pAVar3,TypeInfo__System__Action);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar4;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action *)0x0) {
      FUN_?(pAVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)
                   &TypeInfo__GamePassProgressionController->static_fields->
                    OnGamePassesProgressionUpdate >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  return;
}


/* Void OnDisabledButtonPressed() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_OnDisabledButtonPressed
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__first_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_You_need_to_unlock_game_tier_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).informationTextBubble;
  bVar2 = (this->fields).tierDisplayed;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_3[0]._pointer._value = (void *)0x0;
  aRStack_3[0]._length = 0;
  aRStack_3[0]._12_4_ = 0;
  pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                     (bVar2 - 1,aRStack_3,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::String::String_Concat_5
                     (StringLiteral_You_need_to_unlock_game_tier_,pSVar4,StringLiteral__first_,
                      (MethodInfo *)0x0);
  if (pGVar1 != (GamePassesTextBubble *)0x0) {
    pNVar5 = (pGVar1->fields).fader;
    if (pNVar5 != (NotificationFade *)0x0) {
      this_00 = (pNVar5->fields).group;
      (pNVar5->fields).playing = 1;
      (pNVar5->fields).pauseAt = (pNVar5->fields).duration;
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        (pNVar5->fields).currentTime = 0.0;
        pTVar6 = (pGVar1->fields).text;
        if (pTVar6 != (Text *)0x0) {
          (*(pTVar6->klass->vtable).set_text.methodPtr)
                    (pTVar6,pSVar4,(pTVar6->klass->vtable).set_text.method);
          (pGVar1->fields).isActive = 1;
          return;
        }
      }
    }
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnTestButtonPressed() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_OnTestButtonPressed
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if ((pPVar1 == (PlayerPlanetData *)0x0) ||
     (pTVar2 = (this->fields).toggleButton, pTVar2 == (ToggleButtonAnimation *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((pPVar1->fields).gamePassTier == (this->fields).tierDisplayed) !=
      (bool)(pTVar2->fields).isToggleOn) {
    return;
  }
  (pTVar2->fields).isToggleOn = (pTVar2->fields).isToggleOn == 0;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  fVar5 = (float)(*pcRam_?)();
  fVar6 = (pTVar2->fields).toggleOffOriginalPositionX;
  pRVar7 = (pTVar2->fields).toggleOffMaskTransform;
  (pTVar2->fields).interpolateToggleMaskStartPositionX = fVar6;
  (pTVar2->fields).interpolateToggleMaskNewPositionX = (pTVar2->fields).toggleOffOriginalPositionX;
  (pTVar2->fields).interpolationStartTime = fVar5;
  if ((pTVar2->fields).isToggleOn == 0) {
    if (pRVar7 == (RectTransform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar8 = (pRVar7->fields)._._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar7,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar8);
    (pTVar2->fields).interpolateToggleMaskStartPositionX = fVar6 + 0.0;
  }
  else {
    if (pRVar7 == (RectTransform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar8 = (pRVar7->fields)._._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar7,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar8);
    (pTVar2->fields).interpolateToggleMaskNewPositionX = fVar6 + 0.0;
  }
  fVar6 = (pTVar2->fields).toggleOffOriginalPositionX;
  pRVar7 = (pTVar2->fields).toggleOffMaskTransform;
  (pTVar2->fields).interpolateToggleContentStartPositionX = fVar6;
  (pTVar2->fields).interpolateToggleContentNewPositionX =
       (pTVar2->fields).toggleOffOriginalPositionX;
  if ((pTVar2->fields).isToggleOn == 0) {
    if (pRVar7 == (RectTransform *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_9 = 0;
    puStack_10 = (undefined *)0x0;
    pvVar8 = (pRVar7->fields)._._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar7,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar8,&uStack_9);
    (pTVar2->fields).interpolateToggleContentStartPositionX = fVar6 - puStack_10._0_4_;
  }
  else {
    if (pRVar7 == (RectTransform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_9 = 0;
    puStack_10 = (undefined *)0x0;
    pvVar8 = (pRVar7->fields)._._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar7,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    (*pcRam_?)(pvVar8,&uStack_9);
    (pTVar2->fields).interpolateToggleContentNewPositionX = fVar6 - puStack_10._0_4_;
  }
  fVar6 = (pTVar2->fields).toggleButtonOriginalPositionX;
  (pTVar2->fields).interpolateToggleButtonNewPositionX = fVar6;
  (pTVar2->fields).interpolateToggleButtonStartPositionX = fVar6;
  fVar6 = (pTVar2->fields).toggleButtonMoveAmount + (pTVar2->fields).toggleButtonOriginalPositionX;
  if ((pTVar2->fields).isToggleOn == 0) {
    (pTVar2->fields).interpolateToggleButtonStartPositionX = fVar6;
  }
  else {
    (pTVar2->fields).interpolateToggleButtonNewPositionX = fVar6;
  }
  return;
}


/* Void SetFreeTryActivated(Boolean) */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_SetFreeTryActivated
               (GamePassesPurchaseButton *this,bool isActive,MethodInfo *method)

{
  pGVar1 = (this->fields).freeTryButton;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,isActive ^ 1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).freeTryActivated;
    if (pGVar1 != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,isActive,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar1 == (GameObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (pGVar1->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,isActive);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetUpDisableButton(GamePassTier,
   Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]) */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_SetUpDisableButton
               (GamePassesPurchaseButton *this,GamePassTier__Enum tierToDisplay,
               Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
               *gameTierShopStatus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).purchaseButton;
  if (this_00 != (Button *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).disabledPurchaseButton;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,1,(MethodInfo *)0x0);
        pTVar2 = (this->fields).disabledPriceText;
        if (gameTierShopStatus !=
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) {
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)gameTierShopStatus,
                              tierToDisplay & 0xff,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar3 != (Object *)0x0) {
            pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&pOVar3[1].monitor,(MethodInfo *)0x0);
            if (pTVar2 != (Text *)0x0) {
              UNRECOVERED_JUMPTABLE = (pTVar2->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)
                        (pTVar2,pSVar4,(pTVar2->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE
                        );
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetUpPurchaseButton(GamePassTier,
   Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]) */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_SetUpPurchaseButton
               (GamePassesPurchaseButton *this,GamePassTier__Enum tierToDisplay,
               Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
               *gameTierShopStatus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).priceText;
  if (gameTierShopStatus !=
      (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)gameTierShopStatus,
                        tierToDisplay & 0xff,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                       );
    if (pOVar2 != (Object *)0x0) {
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&pOVar2[1].monitor,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        UNRECOVERED_JUMPTABLE = (pTVar1->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (pTVar1,pSVar3,(pTVar1->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetUpTestButton() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_SetUpTestButton
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  this_00 = (this->fields).purchaseButton;
  if (this_00 != (Button *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).testToggle;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,1,(MethodInfo *)0x0);
        pTVar2 = (this->fields).toggleButton;
        if (pTVar2 != (ToggleButtonAnimation *)0x0) {
          ToggleButtonAnimation::ToggleButtonAnimation_Initialize(pTVar2,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          if (pPVar3 != (PlayerPlanetData *)0x0) {
            if ((pPVar3->fields).gamePassTier != (this->fields).tierDisplayed) {
              return;
            }
            pTVar2 = (this->fields).toggleButton;
            if (pTVar2 != (ToggleButtonAnimation *)0x0) {
              pRVar4 = (pTVar2->fields).toggleOffMaskTransform;
              (pTVar2->fields).isToggleOn = 1;
              if (pRVar4 != (RectTransform *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                uStack_5 = 0;
                uStack_6 = 0;
                pvVar7 = (pRVar4->fields)._._._.m_CachedPtr;
                if (pvVar7 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar4,(MethodInfo *)0x0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcVar8 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                  uVar9 = func_?(&UNK_?);
                  FUN_?(uVar9,0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcRam_? = pcVar8;
                (*pcRam_?)(pvVar7);
                uVar10 = uStack_6;
                uVar9 = uStack_5;
                pRVar4 = (pTVar2->fields).toggleOffMaskTransform;
                fVar11 = (pTVar2->fields).toggleOffOriginalPositionX;
                if (pRVar4 != (RectTransform *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  uStack_12 = 0;
                  uStack_13 = 0;
                  pvVar7 = (pRVar4->fields)._._._.m_CachedPtr;
                  if (pvVar7 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar4,(MethodInfo *)0x0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  (*pcRam_?)(pvVar7);
                  pRVar4 = (pTVar2->fields).toggleOffMaskTransform;
                  uStack_14._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
                  uStack_14 = CONCAT44(uStack_14._4_4_,(float)uStack_13 + fVar11);
                  if (pRVar4 != (RectTransform *)0x0) {
                    uStack_15 = uStack_14;
                    puStack_16 = (undefined *)CONCAT44(puStack_16._4_4_,uVar10);
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar7 = (pRVar4->fields)._._._.m_CachedPtr;
                    if (pvVar7 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar4,(MethodInfo *)0x0);
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    pcVar8 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                      uVar9 = func_?(&UNK_?);
                      FUN_?(uVar9,0);
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    pcRam_? = pcVar8;
                    (*pcRam_?)(pvVar7);
                    pRVar4 = (pTVar2->fields).toggleOffContentTransform;
                    if (pRVar4 != (RectTransform *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      uStack_5 = 0;
                      uStack_6 = 0;
                      pvVar7 = (pRVar4->fields)._._._.m_CachedPtr;
                      if (pvVar7 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pRVar4,(MethodInfo *)0x0);
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                        uVar9 = func_?(&UNK_?);
                        FUN_?(uVar9,0);
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      pcRam_? = pcVar8;
                      (*pcRam_?)(pvVar7);
                      uVar10 = uStack_6;
                      uVar9 = uStack_5;
                      pRVar4 = (pTVar2->fields).toggleOffContentTransform;
                      fVar11 = (pTVar2->fields).toggleOffOriginalPositionX;
                      if (pRVar4 != (RectTransform *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        uStack_12 = 0;
                        uStack_13 = 0;
                        pvVar7 = (pRVar4->fields)._._._.m_CachedPtr;
                        if (pvVar7 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pRVar4,(MethodInfo *)0x0);
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        pcVar8 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                        {
                          uVar9 = func_?(&UNK_?);
                          FUN_?(uVar9,0);
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        pcRam_? = pcVar8;
                        (*pcRam_?)(pvVar7);
                        pRVar4 = (pTVar2->fields).toggleOffContentTransform;
                        uStack_14._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
                        uStack_14 = CONCAT44(uStack_14._4_4_,fVar11 - (float)uStack_13);
                        if (pRVar4 != (RectTransform *)0x0) {
                          uStack_15 = uStack_14;
                          puStack_16 = (undefined *)CONCAT44(puStack_16._4_4_,uVar10);
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pvVar7 = (pRVar4->fields)._._._.m_CachedPtr;
                          if (pvVar7 == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pRVar4,(MethodInfo *)0x0);
                            pcVar8 = (code *)swi(3);
                            (*pcVar8)();
                            return;
                          }
                          pcVar8 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)
                             ) {
                            uVar9 = func_?(&UNK_?);
                            FUN_?(uVar9,0);
                            pcVar8 = (code *)swi(3);
                            (*pcVar8)();
                            return;
                          }
                          pcRam_? = pcVar8;
                          (*pcRam_?)(pvVar7);
                          pRVar4 = (pTVar2->fields).toggleButtonTransform;
                          if (pRVar4 != (RectTransform *)0x0) {
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            uStack_5 = 0;
                            uStack_6 = 0;
                            pvVar7 = (pRVar4->fields)._._._.m_CachedPtr;
                            if (pvVar7 == (void *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException
                                        ((Object *)pRVar4,(MethodInfo *)0x0);
                              pcVar8 = (code *)swi(3);
                              (*pcVar8)();
                              return;
                            }
                            pcVar8 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar8 = (code *)FUN_?(&UNK_?),
                               pcVar8 == (code *)0x0)) {
                              uVar9 = func_?(&UNK_?);
                              FUN_?(uVar9,0);
                              pcVar8 = (code *)swi(3);
                              (*pcVar8)();
                              return;
                            }
                            pcRam_? = pcVar8;
                            (*pcRam_?)(pvVar7);
                            pRVar4 = (pTVar2->fields).toggleButtonTransform;
                            uStack_14._4_4_ = (undefined4)((ulonglong)uStack_5 >> 0x20);
                            uStack_14 = CONCAT44(uStack_14._4_4_,
                                                 (pTVar2->fields).toggleButtonOriginalPositionX +
                                                 (pTVar2->fields).toggleButtonMoveAmount);
                            if (pRVar4 != (RectTransform *)0x0) {
                              uStack_15 = uStack_14;
                              puStack_16 = (undefined *)CONCAT44(puStack_16._4_4_,uStack_6);
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pvVar7 = (pRVar4->fields)._._._.m_CachedPtr;
                              if (pvVar7 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)pRVar4,(MethodInfo *)0x0);
                                pcVar8 = (code *)swi(3);
                                (*pcVar8)();
                                return;
                              }
                              pcVar8 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar8 = (code *)FUN_?(&UNK_?),
                                 pcVar8 == (code *)0x0)) {
                                uVar9 = func_?(&UNK_?);
                                FUN_?(uVar9,0);
                                pcVar8 = (code *)swi(3);
                                (*pcVar8)();
                                return;
                              }
                              pcRam_? = pcVar8;
                              (*pcRam_?)(pvVar7);
                              pRVar4 = (pTVar2->fields).toggleOffMaskTransform;
                              if (pRVar4 != (RectTransform *)0x0) {
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                uStack_5 = 0;
                                uStack_6 = 0;
                                pvVar7 = (pRVar4->fields)._._._.m_CachedPtr;
                                if (pvVar7 == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pRVar4,(MethodInfo *)0x0);
                                  pcVar8 = (code *)swi(3);
                                  (*pcVar8)();
                                  return;
                                }
                                pcVar8 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar8 = (code *)FUN_?(&UNK_?),
                                   pcVar8 == (code *)0x0)) {
                                  uVar9 = func_?(&UNK_?);
                                  FUN_?(uVar9,0);
                                  pcVar8 = (code *)swi(3);
                                  (*pcVar8)();
                                  return;
                                }
                                pcRam_? = pcVar8;
                                (*pcRam_?)(pvVar7);
                                pRVar4 = (pTVar2->fields).toggleOffContentTransform;
                                (pTVar2->fields).interpolateToggleMaskNewPositionX =
                                     (float)uStack_5;
                                if (pRVar4 != (RectTransform *)0x0) {
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pvVar7 = (pRVar4->fields)._._._.m_CachedPtr;
                                  if (pvVar7 == (void *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              ((Object *)pRVar4,(MethodInfo *)0x0);
                                    pcVar8 = (code *)swi(3);
                                    (*pcVar8)();
                                    return;
                                  }
                                  pcVar8 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar8 = (code *)FUN_?(&UNK_?),
                                     pcVar8 == (code *)0x0)) {
                                    uVar9 = func_?(&UNK_?);
                                    FUN_?(uVar9,0);
                                    pcVar8 = (code *)swi(3);
                                    (*pcVar8)();
                                    return;
                                  }
                                  pcRam_? = pcVar8;
                                  (*pcRam_?)(pvVar7);
                                  pRVar4 = (pTVar2->fields).toggleButtonTransform;
                                  (pTVar2->fields).interpolateToggleContentNewPositionX = 0.0;
                                  if (pRVar4 != (RectTransform *)0x0) {
                                    if (cRam_? == '\0') {
                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    uStack_5 = 0;
                                    uStack_6 = 0;
                                    pvVar7 = (pRVar4->fields)._._._.m_CachedPtr;
                                    if (pvVar7 == (void *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper
                                      ::ThrowHelper_2_ThrowNullReferenceException
                                                ((Object *)pRVar4,(MethodInfo *)0x0);
                                      pcVar8 = (code *)swi(3);
                                      (*pcVar8)();
                                      return;
                                    }
                                    pcVar8 = pcRam_?;
                                    if ((pcRam_? == (code *)0x0) &&
                                       (pcVar8 = (code *)FUN_?(&UNK_?),
                                       pcVar8 == (code *)0x0)) {
                                      uVar9 = func_?(&UNK_?);
                                      FUN_?(uVar9,0);
                                      pcVar8 = (code *)swi(3);
                                      (*pcVar8)();
                                      return;
                                    }
                                    pcRam_? = pcVar8;
                                    (*pcRam_?)(pvVar7,&uStack_5);
                                    (pTVar2->fields).interpolateToggleButtonNewPositionX =
                                         (float)uStack_5;
                                    return;
                                  }
                                }
                                goto code_?;
                              }
                            }
                            FUN_?();
                            pcVar8 = (code *)swi(3);
                            (*pcVar8)();
                            return;
                          }
                        }
                        FUN_?();
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      goto code_?;
                    }
                  }
                  FUN_?();
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
code_?:
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetupFreeTryButton() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_SetupFreeTryButton
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  obj = (this->fields).freeTryButton;
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,1);
  return;
}


/* Void UpdatePriceText() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_UpdatePriceText
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
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
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      bVar2 = (pPVar1->fields).gamePassTier;
      if (this_00 != (PlayerTierStateCalculator *)0x0) {
        if ((this_00->fields).gamePointVelocityIsZero == 0) {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                              (this_00,playerGamePoints,(uint)bVar2,(MethodInfo *)0x0);
        }
        else {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                              (this_00,(uint)bVar2,(MethodInfo *)0x0);
        }
        pTVar3 = (this->fields).priceText;
        if (this_01 !=
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) {
          pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                              (uint)(this->fields).tierDisplayed,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar4 != (Object *)0x0) {
            pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&pOVar4[1].monitor,(MethodInfo *)0x0);
            if (pTVar3 != (Text *)0x0) {
              (*(pTVar3->klass->vtable).set_text.methodPtr)
                        (pTVar3,pSVar5,(pTVar3->klass->vtable).set_text.method);
              pTVar3 = (this->fields).disabledPriceText;
              pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       ByteEnum,System::Object]::
                       Dictionary_2_System_ByteEnum_System_Object__get_Item
                                 ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                  (uint)(this->fields).tierDisplayed,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                 );
              if (pOVar4 != (Object *)0x0) {
                pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                                   ((Int32 *)&pOVar4[1].monitor,(MethodInfo *)0x0);
                if (pTVar3 != (Text *)0x0) {
                  UNRECOVERED_JUMPTABLE = (pTVar3->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*UNRECOVERED_JUMPTABLE)
                            (pTVar3,pSVar5,(pTVar3->klass->vtable).set_text.method,
                             UNRECOVERED_JUMPTABLE);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean get_IsPurchaseDisabled() */

bool Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_get_IsPurchaseDisabled
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  obj = (this->fields).disabledPurchaseButton;
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar2 = (*pcRam_?)(pvVar3);
  return bVar2;
}

