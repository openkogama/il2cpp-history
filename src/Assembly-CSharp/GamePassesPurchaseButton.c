
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


/* Void Initialize(GamePassTier) */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_Initialize
               (GamePassesPurchaseButton *this,GamePassTier__Enum tierToDisplay,MethodInfo *method)

{
  key = tierToDisplay;
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
    tierToDisplay = CONCAT31(tierToDisplay._1_3_,(pPVar1->fields).gamePassTier);
    tierToDisplay =
         (GamePassTier__Enum)
         MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
         PlayerTierStateCalculator_GetTierPricingState
                   (this_00,playerGamePoints,tierToDisplay,(MethodInfo *)0x0);
    if (((Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
         tierToDisplay ==
         (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
       || (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)tierToDisplay,key,
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
      pBVar5 = (this->fields).purchaseButton;
      if ((pBVar5 != (Button *)0x0) &&
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pBVar5,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,0,(MethodInfo *)0x0);
        pGVar6 = (this->fields).testToggle;
        if ((pGVar6 != (GameObject *)0x0) &&
           (pGVar6 = (GameObject *)
                     mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                               ((Void *)pGVar6,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,1,(MethodInfo *)0x0);
          pTVar7 = (this->fields).toggleButton;
          if (pTVar7 != (ToggleButtonAnimation *)0x0) {
            ToggleButtonAnimation::ToggleButtonAnimation_Initialize(pTVar7,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
            if (pPVar1 != (PlayerPlanetData *)0x0) {
              if ((pPVar1->fields).gamePassTier != (this->fields).tierDisplayed) {
                return;
              }
              pTVar7 = (this->fields).toggleButton;
              if (pTVar7 != (ToggleButtonAnimation *)0x0) {
                ToggleButtonAnimation::ToggleButtonAnimation_SetToggleOnWithoutInterpolation
                          (pTVar7,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    if (pOVar3 == (Object__Class *)0x0) {
      pBVar5 = (this->fields).purchaseButton;
      if (pBVar5 != (Button *)0x0) {
        method_00 = (MethodInfo *)0x0;
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pBVar5,(MethodInfo *)0x0);
        value = (bool)pBVar5;
        if (pGVar6 != (GameObject *)0x0) {
code_?:
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,value,method_00);
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
      pTVar8 = (this->fields).priceText;
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)tierToDisplay,key,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
      if ((pOVar2 != (Object *)0x0) &&
         (pSVar9 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)(pOVar2 + 2),(MethodInfo *)0x0), pTVar8 != (Text *)0x0)) {
        (*(pTVar8->klass->vtable).set_text.methodPtr)
                  (pTVar8,pSVar9,(pTVar8->klass->vtable).set_text.method);
        pGVar6 = (this->fields).freeTryButton;
        if (pGVar6 != (GameObject *)0x0) {
          method_00 = (MethodInfo *)0x0;
          value = 1;
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
      pBVar5 = (this->fields).purchaseButton;
      if ((pBVar5 != (Button *)0x0) &&
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pBVar5,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,0,(MethodInfo *)0x0);
        pGVar6 = (this->fields).disabledPurchaseButton;
        if ((pGVar6 != (GameObject *)0x0) &&
           (pGVar6 = (GameObject *)
                     mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                               ((Void *)pGVar6,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar6,1,(MethodInfo *)0x0);
          pTVar8 = (this->fields).disabledPriceText;
          pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                              ,key,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if ((pOVar2 != (Object *)0x0) &&
             (mscorlib.dll::System::Int32::Int32_ToString((Int32 *)(pOVar2 + 2),(MethodInfo *)0x0),
             pTVar8 != (Text *)0x0)) {
            (*(pTVar8->klass->vtable).set_text.methodPtr)();
            goto code_?;
          }
        }
      }
      goto code_?;
    }
code_?:
    pAVar10 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    pNVar11 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (pNVar11 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar11,(Object *)this,MethodInfo__GamePassesPurchaseButton__UpdatePriceText__,
               (MethodInfo *)0x0);
    pAVar10 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar10,(Delegate *)pNVar11,(MethodInfo *)0x0);
    if (pAVar10 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pAVar10 = TypeInfo__GamePassProgressionController->static_fields->
                OnGamePassesProgressionUpdate;
      pNVar11 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      if (pNVar11 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar11,(Object *)this,MethodInfo__GamePassesPurchaseButton__UpdatePriceText__,
                 (MethodInfo *)0x0);
      pAVar10 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar10,(Delegate *)pNVar11,(MethodInfo *)0x0);
      if (pAVar10 == (Action *)0x0) {
        TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
             (Action *)0x0;
code_?:
        func_?();
        return;
      }
      pAVar12 = (Action *)0x0;
      if (pAVar10->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar10;
      }
      if (pAVar12 == (Action *)0x0) goto code_?;
      TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
           pAVar12;
      pAVar12 = (Action *)0x0;
      if (pAVar10->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar10;
      }
      if (pAVar12 != (Action *)0x0) goto code_?;
    }
    else {
      pAVar12 = (Action *)0x0;
      if (pAVar10->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar10;
      }
      if (pAVar12 == (Action *)0x0) goto code_?;
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar12;
      pAVar12 = (Action *)0x0;
      if (pAVar10->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar10;
      }
      if (pAVar12 != (Action *)0x0) goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
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
  if (this_00 == (NavMesh_OnNavMeshPreUpdate *)0x0) {
    func_?();
    pAStack2 = extraout_EDX;
  }
  else {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__GamePassesPurchaseButton__UpdatePriceText__,
               (MethodInfo *)0x0);
    pAVar1 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar1 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
      pAVar3 = (Action *)0x0;
code_?:
      pAStack2 = (Action__Class *)pAVar3;
      func_?();
      return;
    }
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    pAStack2 = TypeInfo__System__Action;
    if (pAVar3 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    pAStack2 = TypeInfo__System__Action;
    if (pAVar3 != (Action *)0x0) goto code_?;
  }
  pAStack2 = (Action__Class *)func_?();
code_?:
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
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    pTVar2 = (this->fields).toggleButton;
    if (pTVar2 != (ToggleButtonAnimation *)0x0) {
      if (((pPVar1->fields).gamePassTier == (this->fields).tierDisplayed) ==
          (bool)(pTVar2->fields).isToggleOn) {
        ToggleButtonAnimation::ToggleButtonAnimation_Toggle
                  ((this->fields).toggleButton,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
                 mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                           ((Void *)pGVar1,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
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
        pMStack6 = (pTVar5->vtable).set_text.method;
        (*(pTVar5->vtable).set_text.methodPtr)();
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
        (*(pTVar1->klass->vtable).set_text.methodPtr)();
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
                 mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                           ((Void *)pGVar1,(MethodInfo *)0x0);
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
                if (pTRam0000000d != (Transform *)0x0) {
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_localPosition
                                     ((Vector3 *)&stack0xffffffec,pTRam0000000d,(MethodInfo *)0x0);
                  fVar4 = fRam00000025;
                  uVar5 = pVVar3->y;
                  fVar6 = pVVar3->z;
                  if (pTRam0000000d != (Transform *)0x0) {
                    pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                             RectTransform_get_rect
                                       ((Rect *)&stack0xffffffe8,(RectTransform *)pTRam0000000d,
                                        (MethodInfo *)0x0);
                    fVar8 = SubscribableVariableBase`1[System::Single]::
                             SubscribableVariableBase_1_System_Single__get_Value
                                       ((SubscribableVariableBase_1_System_Single_ *)
                                        &stack0xffffffd8,(MethodInfo *)pRVar7->m_XMin);
                    if (pTRam0000000d != (Transform *)0x0) {
                      value_01.y = (float)uVar5;
                      value_01.x = fVar8 + fVar4;
                      value_01.z = fVar6;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_set_localPosition(pTRam0000000d,value_01,(MethodInfo *)0x0);
                      if (pTRam00000011 != (Transform *)0x0) {
                        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                 Transform_get_localPosition
                                           ((Vector3 *)&stack0xffffffec,pTRam00000011,
                                            (MethodInfo *)0x0);
                        uVar9 = pVVar3->y;
                        fVar6 = pVVar3->z;
                        if (pTRam00000011 != (Transform *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                          RectTransform_get_rect
                                    ((Rect *)&stack0xffffffe8,(RectTransform *)pTRam00000011,
                                     (MethodInfo *)0x0);
                          fVar4 = SubscribableVariableBase`1[System::Single]::
                                   SubscribableVariableBase_1_System_Single__get_Value
                                             ((SubscribableVariableBase_1_System_Single_ *)
                                              &stack0xffffffd8,(MethodInfo *)0x0);
                          if (pTRam00000011 != (Transform *)0x0) {
                            value.y = (float)uVar9;
                            value.x = 0.0 - fVar4;
                            value.z = fVar6;
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_localPosition(pTRam00000011,value,(MethodInfo *)0x0);
                            if (pTRam00000015 != (Transform *)0x0) {
                              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                       Transform_get_localPosition
                                                 ((Vector3 *)&stack0xffffffec,pTRam00000015,
                                                  (MethodInfo *)0x0);
                              uVar10 = pVVar3->y;
                              if (pTRam00000015 != (Transform *)0x0) {
                                value_00.y = (float)uVar10;
                                value_00.x = fRam00000029 + fRam00000021;
                                value_00.z = pVVar3->z;
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_set_localPosition
                                          (pTRam00000015,value_00,(MethodInfo *)0x0);
                                if (pTRam0000000d != (Transform *)0x0) {
                                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                           Transform_get_localPosition
                                                     ((Vector3 *)&stack0xffffffec,pTRam0000000d,
                                                      (MethodInfo *)0x0);
                                  fRam00000031 = pVVar3->x;
                                  if (pTRam00000011 != (Transform *)0x0) {
                                    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                             Transform_get_localPosition
                                                       ((Vector3 *)&stack0xffffffec,pTRam00000011,
                                                        (MethodInfo *)0x0);
                                    fRam00000039 = pVVar3->x;
                                    if (pTRam00000015 != (Transform *)0x0) {
                                      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                               Transform_get_localPosition
                                                         ((Vector3 *)&stack0xffffffec,pTRam00000015,
                                                          (MethodInfo *)0x0);
                                      fRam00000041 = pVVar3->x;
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
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
            (*(pTVar2->klass->vtable).set_text.methodPtr)();
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
                (*(pTVar2->klass->vtable).set_text.methodPtr)
                          (pTVar2,pSVar4,(pTVar2->klass->vtable).set_text.method);
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

