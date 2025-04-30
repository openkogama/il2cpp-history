
/* Void HideButton() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_HideButton
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  this_00 = (this->fields).purchaseButton;
  if (this_00 != (Button *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean Initialize(GamePassTier) */

bool Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_Initialize
               (GamePassesPurchaseButton *this,GamePassTier__Enum tierToDisplay,MethodInfo *method)

{
  object = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassProgressionController);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__GamePassesPurchaseButton__UpdatePriceText__);
    cRam_? = '\x01';
  }
  (this->fields).tierDisplayed = (uint8_t)tierToDisplay;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 == (PlayerPlanetData *)0x0) {
code_?:
    func_?();
  }
  else {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 == (PlayerPlanetData *)0x0) ||
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 == (PlayerTierStateCalculator *)0x0)) goto code_?;
    this = (GamePassesPurchaseButton *)CONCAT31(this._1_3_,(pPVar1->fields).gamePassTier);
    this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
              PlayerTierStateCalculator_GetTierPricingState
                        (this_00,playerGamePoints,(GamePassTier__Enum)this,(MethodInfo *)0x0);
    if ((this_01 ==
         (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
       || (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,tierToDisplay,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                              ), pOVar2 == (Object *)0x0)) goto code_?;
    pOVar3 = pOVar2[1].klass;
    if (cRam_? == '\0') {
      tierToDisplay = (GamePassTier__Enum)&TypeInfo__MVGameControllerBase;
      func_?();
      cRam_? = '\x01';
    }
    pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar4 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar4->fields).gameMode == 0) {
      pBVar5 = (object->fields).purchaseButton;
      if ((pBVar5 != (Button *)0x0) &&
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pBVar5,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,0,(MethodInfo *)0x0);
        pGVar6 = (object->fields).testToggle;
        if ((pGVar6 != (GameObject *)0x0) &&
           (pGVar6 = (GameObject *)
                     UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                     ::UnsafeUtility_AsRef_1((Void *)pGVar6,(MethodInfo *)0x0),
           pGVar6 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,1,(MethodInfo *)0x0);
          pTVar7 = (object->fields).toggleButton;
          if (pTVar7 != (ToggleButtonAnimation *)0x0) {
            ToggleButtonAnimation::ToggleButtonAnimation_Initialize(pTVar7,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
            if (pPVar1 != (PlayerPlanetData *)0x0) {
              if ((pPVar1->fields).gamePassTier == (object->fields).tierDisplayed) {
                pTVar7 = (object->fields).toggleButton;
                if (pTVar7 == (ToggleButtonAnimation *)0x0) goto code_?;
                ToggleButtonAnimation::ToggleButtonAnimation_SetToggleOnWithoutInterpolation
                          (pTVar7,(MethodInfo *)0x0);
              }
code_?:
              pBVar5 = (object->fields).purchaseButton;
              if ((pBVar5 != (Button *)0x0) &&
                 (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pBVar5,(MethodInfo *)0x0),
                 pGVar6 != (GameObject *)0x0)) {
                bVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_activeSelf(pGVar6,(MethodInfo *)0x0);
                return bVar8;
              }
            }
          }
        }
      }
      goto code_?;
    }
    if (pOVar3 == (Object__Class *)0x0) {
      pBVar5 = (object->fields).purchaseButton;
      if (pBVar5 != (Button *)0x0) {
        method_00 = (MethodInfo *)0x0;
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pBVar5,(MethodInfo *)0x0);
        bVar8 = (bool)pBVar5;
        if (pGVar6 != (GameObject *)0x0) {
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,bVar8,method_00);
          goto code_?;
        }
      }
      goto code_?;
    }
    if (pOVar3 == (Object__Class *)0x1) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                       );
        cRam_? = '\x01';
      }
      pTVar9 = (object->fields).priceText;
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,tierToDisplay,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
      if ((pOVar2 != (Object *)0x0) &&
         (pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)(pOVar2 + 2),(MethodInfo *)0x0), pTVar9 != (Text *)0x0)) {
        (*(code *)(pTVar9->klass->vtable).set_text.method)
                  (pTVar9,pSVar10,(pTVar9->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr
                  );
        pGVar6 = (object->fields).freeTryButton;
        if (pGVar6 != (GameObject *)0x0) {
          method_00 = (MethodInfo *)0x0;
          bVar8 = 1;
          goto code_?;
        }
      }
      goto code_?;
    }
    if (pOVar3 == (Object__Class *)0x2) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                       );
        cRam_? = '\x01';
      }
      pBVar5 = (object->fields).purchaseButton;
      if ((pBVar5 != (Button *)0x0) &&
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pBVar5,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,0,(MethodInfo *)0x0);
        pGVar6 = (object->fields).disabledPurchaseButton;
        if ((pGVar6 != (GameObject *)0x0) &&
           (pGVar6 = (GameObject *)
                     UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility
                     ::UnsafeUtility_AsRef_1((Void *)pGVar6,(MethodInfo *)0x0),
           pGVar6 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,1,(MethodInfo *)0x0);
          pTVar9 = (object->fields).disabledPriceText;
          pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                              (ByteEnum__Enum)
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                              ,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if ((pOVar2 != (Object *)0x0) &&
             (mscorlib.dll::System::Int32::Int32_ToString((Int32 *)(pOVar2 + 2),(MethodInfo *)0x0),
             pTVar9 != (Text *)0x0)) {
            (*(code *)(pTVar9->klass->vtable).set_text.method)();
            goto code_?;
          }
        }
      }
      goto code_?;
    }
code_?:
    pAVar11 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    pNVar12 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar12,(Object *)object,MethodInfo__GamePassesPurchaseButton__UpdatePriceText__,
               (MethodInfo *)0x0);
    pAVar11 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar11,(Delegate *)pNVar12,(MethodInfo *)0x0);
    if (pAVar11 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pAVar11 = TypeInfo__GamePassProgressionController->static_fields->
                OnGamePassesProgressionUpdate;
      pNVar12 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar12,(Object *)object,MethodInfo__GamePassesPurchaseButton__UpdatePriceText__,
                 (MethodInfo *)0x0);
      pAVar11 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar11,(Delegate *)pNVar12,(MethodInfo *)0x0);
      if (pAVar11 == (Action *)0x0) {
        TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
             (Action *)0x0;
      }
      else {
        pAVar13 = (Action *)0x0;
        if (pAVar11->klass == TypeInfo__System__Action) {
          pAVar13 = pAVar11;
        }
        if (pAVar13 == (Action *)0x0) goto code_?;
        TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
             pAVar13;
        pAVar13 = (Action *)0x0;
        if (pAVar11->klass == TypeInfo__System__Action) {
          pAVar13 = pAVar11;
        }
        if (pAVar13 == (Action *)0x0) goto code_?;
      }
      func_?();
      goto code_?;
    }
    pAVar13 = (Action *)0x0;
    if (pAVar11->klass == TypeInfo__System__Action) {
      pAVar13 = pAVar11;
    }
    if (pAVar13 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar13;
    pAVar13 = (Action *)0x0;
    if (pAVar11->klass == TypeInfo__System__Action) {
      pAVar13 = pAVar11;
    }
    if (pAVar13 != (Action *)0x0) goto code_?;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  bVar8 = (*pcVar14)();
  return bVar8;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_OnDestroy
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassProgressionController);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__GamePassesPurchaseButton__UpdatePriceText__);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__GamePassesPurchaseButton__UpdatePriceText__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    pAVar2 = (Action *)0x0;
code_?:
    pAStack3 = (Action__Class *)pAVar2;
    func_?();
    return;
  }
  pAVar2 = (Action *)0x0;
  if (pAVar1->klass == TypeInfo__System__Action) {
    pAVar2 = pAVar1;
  }
  if (pAVar2 == (Action *)0x0) {
    pAStack3 = TypeInfo__System__Action;
    func_?();
    pAStack3 = extraout_EDX;
  }
  else {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar2 != (Action *)0x0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDisabledButtonPressed() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_OnDisabledButtonPressed
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__first_);
    func_?(&StringLiteral_You_need_to_unlock_game_tier_);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).informationTextBubble;
  IStack_1.m_value = (this->fields).tierDisplayed - 1;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_You_need_to_unlock_game_tier_,pSVar2,StringLiteral__first_,
                      (MethodInfo *)0x0);
  if (this_00 != (GamePassesTextBubble *)0x0) {
    GamePassesTextBubble::GamePassesTextBubble_Activate(this_00,pSVar2,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnTestButtonPressed() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_OnTestButtonPressed
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 == (PlayerPlanetData *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = (this->fields).toggleButton;
  if (pTVar3 == (ToggleButtonAnimation *)0x0) goto code_?;
  if (((pPVar1->fields).gamePassTier == (this->fields).tierDisplayed) !=
      (bool)(pTVar3->fields).isToggleOn) {
    return;
  }
  (pTVar3->fields).isToggleOn = (pTVar3->fields).isToggleOn == 0;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar5 = (pTVar3->fields).toggleOffOriginalPositionX;
  pRVar6 = (pTVar3->fields).toggleOffMaskTransform;
  (pTVar3->fields).interpolationStartTime = fVar4;
  (pTVar3->fields).interpolateToggleMaskNewPositionX = fVar5;
  (pTVar3->fields).interpolateToggleMaskStartPositionX = fVar5;
  if ((pTVar3->fields).isToggleOn == 0) {
    if (pRVar6 == (RectTransform *)0x0) goto code_?;
    pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar6,(MethodInfo *)0x0);
    (pTVar3->fields).interpolateToggleMaskStartPositionX = fVar5 + pRVar7->m_Width;
  }
  else {
    if (pRVar6 == (RectTransform *)0x0) goto code_?;
    pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar6,(MethodInfo *)0x0);
    (pTVar3->fields).interpolateToggleMaskNewPositionX = fVar5 + pRVar7->m_Width;
  }
  fVar5 = (pTVar3->fields).toggleOffOriginalPositionX;
  pRVar6 = (pTVar3->fields).toggleOffMaskTransform;
  (pTVar3->fields).interpolateToggleContentNewPositionX = fVar5;
  (pTVar3->fields).interpolateToggleContentStartPositionX = fVar5;
  if ((pTVar3->fields).isToggleOn == 0) {
    if (pRVar6 == (RectTransform *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar6,(MethodInfo *)0x0);
    (pTVar3->fields).interpolateToggleContentStartPositionX = fVar5 - pRVar7->m_Width;
  }
  else {
    if (pRVar6 == (RectTransform *)0x0) goto code_?;
    pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar6,(MethodInfo *)0x0);
    (pTVar3->fields).interpolateToggleContentNewPositionX = fVar5 - pRVar7->m_Width;
  }
  fVar5 = (pTVar3->fields).toggleButtonOriginalPositionX;
  (pTVar3->fields).interpolateToggleButtonNewPositionX = fVar5;
  (pTVar3->fields).interpolateToggleButtonStartPositionX = fVar5;
  fVar5 = (pTVar3->fields).toggleButtonMoveAmount + fVar5;
  if ((pTVar3->fields).isToggleOn == 0) {
    (pTVar3->fields).interpolateToggleButtonStartPositionX = fVar5;
    return;
  }
  (pTVar3->fields).interpolateToggleButtonNewPositionX = fVar5;
  return;
}


/* Void SetFreeTryActivated(Boolean) */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_SetFreeTryActivated
               (GamePassesPurchaseButton *this,bool isActive,MethodInfo *method)

{
  this_00 = (this->fields).freeTryButton;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,isActive ^ 1,(MethodInfo *)0x0);
    if ((this->fields).freeTryActivated != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).purchaseButton;
  if ((this_00 != (Button *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).disabledPurchaseButton;
    if ((pGVar1 != (GameObject *)0x0) &&
       (pGVar1 = (GameObject *)
                 UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                 UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0),
       pGVar1 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      pTVar2 = (this->fields).disabledPriceText;
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)0x1,(ByteEnum__Enum)pGVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
      if ((pOVar3 != (Object *)0x0) &&
         (pSStack4 =
               mscorlib.dll::System::Int32::Int32_ToString((Int32 *)(pOVar3 + 2),(MethodInfo *)0x0),
         pTVar2 != (Text *)0x0)) {
        pTVar5 = pTVar2->klass;
        pIStack6 = (pTVar5->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
        (*(code *)(pTVar5->vtable).set_text.method)();
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).priceText;
  if (gameTierShopStatus !=
      (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)gameTierShopStatus,
                        tierToDisplay,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                       );
    if (pOVar2 != (Object *)0x0) {
      mscorlib.dll::System::Int32::Int32_ToString((Int32 *)(pOVar2 + 2),(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)();
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
        pGVar1 = (GameObject *)
                 UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                 UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,1,(MethodInfo *)0x0);
          this_01 = (this->fields).toggleButton;
          if (this_01 != (ToggleButtonAnimation *)0x0) {
            ToggleButtonAnimation::ToggleButtonAnimation_Initialize(this_01,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
            if (pPVar2 != (PlayerPlanetData *)0x0) {
              if ((pPVar2->fields).gamePassTier != (this->fields).tierDisplayed) {
                return;
              }
              if ((this->fields).toggleButton != (ToggleButtonAnimation *)0x0) {
                uRam_? = 1;
                if (pTRam00000011 != (Transform *)0x0) {
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_localPosition
                                     ((Vector3 *)&stack0xffffffec,pTRam00000011,(MethodInfo *)0x0);
                  fVar4 = fRam00000029;
                  uVar5 = pVVar3->y;
                  fVar6 = pVVar3->z;
                  if (pTRam00000011 != (Transform *)0x0) {
                    pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                              RectTransform_get_rect
                                        ((Rect *)&stack0xffffffe8,(RectTransform *)pTRam00000011,
                                         (MethodInfo *)0x0);
                    if (pTRam00000011 != (Transform *)0x0) {
                      value_01.y = (float)uVar5;
                      value_01.x = pRVar7->m_Width + fVar4;
                      value_01.z = fVar6;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_set_localPosition(pTRam00000011,value_01,(MethodInfo *)0x0);
                      if (pTRam00000015 != (Transform *)0x0) {
                        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                 Transform_get_localPosition
                                           ((Vector3 *)&stack0xffffffec,pTRam00000015,
                                            (MethodInfo *)0x0);
                        uVar8 = pVVar3->y;
                        fVar6 = pVVar3->z;
                        if (pTRam00000015 != (Transform *)0x0) {
                          pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                    RectTransform_get_rect
                                              ((Rect *)&stack0xffffffe8,
                                               (RectTransform *)pTRam00000015,(MethodInfo *)0x0);
                          if (pTRam00000015 != (Transform *)0x0) {
                            value.y = (float)uVar8;
                            value.x = (float)&stack0xffffffe8 - pRVar7->m_Width;
                            value.z = fVar6;
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_localPosition(pTRam00000015,value,(MethodInfo *)0x0);
                            if (pTRam00000019 != (Transform *)0x0) {
                              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                       Transform_get_localPosition
                                                 ((Vector3 *)&stack0xffffffec,pTRam00000019,
                                                  (MethodInfo *)0x0);
                              uVar9 = pVVar3->y;
                              if (pTRam00000019 != (Transform *)0x0) {
                                value_00.y = (float)uVar9;
                                value_00.x = fRam0000002d + fRam00000025;
                                value_00.z = pVVar3->z;
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_set_localPosition
                                          (pTRam00000019,value_00,(MethodInfo *)0x0);
                                if (pTRam00000011 != (Transform *)0x0) {
                                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                           Transform_get_localPosition
                                                     ((Vector3 *)&stack0xffffffec,pTRam00000011,
                                                      (MethodInfo *)0x0);
                                  fRam00000035 = pVVar3->x;
                                  if (pTRam00000015 != (Transform *)0x0) {
                                    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                             Transform_get_localPosition
                                                       ((Vector3 *)&stack0xffffffec,pTRam00000015,
                                                        (MethodInfo *)0x0);
                                    fRam0000003d = pVVar3->x;
                                    if (pTRam00000019 != (Transform *)0x0) {
                                      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                               Transform_get_localPosition
                                                         ((Vector3 *)&stack0xffffffec,pTRam00000019,
                                                          (MethodInfo *)0x0);
                                      fRam00000045 = pVVar3->x;
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
                func_?();
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetupFreeTryButton() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_SetupFreeTryButton
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  this_00 = (this->fields).freeTryButton;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdatePriceText() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_UpdatePriceText
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      playerGamePassTier = CONCAT31((int3)((uint)in_ECX >> 8),(pPVar1->fields).gamePassTier);
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,playerGamePassTier,(MethodInfo *)0x0);
      pTVar2 = (this->fields).priceText;
      if (this_01 !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        key = CONCAT31((int3)(playerGamePassTier >> 8),(this->fields).tierDisplayed);
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar3 != (Object *)0x0) {
          mscorlib.dll::System::Int32::Int32_ToString((Int32 *)(pOVar3 + 2),(MethodInfo *)0x0);
          if (pTVar2 != (Text *)0x0) {
            (*(code *)(pTVar2->klass->vtable).set_text.method)();
            pTVar2 = (this->fields).disabledPriceText;
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                CONCAT31((int3)(key >> 8),(this->fields).tierDisplayed),
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar3 != (Object *)0x0) {
              pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                                 ((Int32 *)(pOVar3 + 2),(MethodInfo *)0x0);
              if (pTVar2 != (Text *)0x0) {
                (*(code *)(pTVar2->klass->vtable).set_text.method)
                          (pTVar2,pSVar4,
                           (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean get_IsPurchaseDisabled() */

bool Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_get_IsPurchaseDisabled
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  pGStack_1 = (GameObject *)&stack0xfffffffc;
  pGVar2 = (this->fields).disabledPurchaseButton;
  if (pGVar2 != (GameObject *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    pGStack_1 = pGVar2;
    bVar3 = (*pcRam_?)();
    return bVar3;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}

