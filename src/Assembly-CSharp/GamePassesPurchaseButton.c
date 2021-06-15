
/* Void HideButton() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_HideButton
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  this_00 = (this->fields).purchaseButton;
  if (this_00 != (Button *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize(GamePassTier) */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_Initialize
               (GamePassesPurchaseButton *this,GamePassTier__Enum tierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  object = this;
  (this->fields).tierDisplayed = (uint8_t)tierToDisplay;
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
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
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
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      this = (GamePassesPurchaseButton *)CONCAT31(this._1_3_,(pPVar1->fields).gamePassTier);
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,(GamePassTier__Enum)this,(MethodInfo *)0x0);
      if ((this_01 !=
           (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0
          ) && (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                         GamePassTier,System::Object]::
                         Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                   ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_01,
                                    tierToDisplay,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                   ), pOVar2 != (Object *)0x0)) {
        pOVar3 = pOVar2[1].klass;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          tierToDisplay = (GamePassTier__Enum)TypeInfo__MVGameControllerBase;
          this = (GamePassesPurchaseButton *)&UNK_?;
          func_?();
        }
        pGVar4 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
        if (pGVar4 != (GameSessionData *)0x0) {
          if ((pGVar4->fields).gameMode == 0) {
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            pBVar5 = (object->fields).purchaseButton;
            if ((pBVar5 != (Button *)0x0) &&
               (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)pBVar5,(MethodInfo *)0x0),
               pGVar6 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,0,(MethodInfo *)0x0);
              pDVar7 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                        *)(object->fields).testToggle;
              if ((pDVar7 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                              *)0x0) &&
                 (pGVar6 = (GameObject *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                            ::
                            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                      (pDVar7,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0)) {
                tierToDisplay = GamePassTier__Enum_Tier0;
                this = (GamePassesPurchaseButton *)0x1;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar6,1,(MethodInfo *)0x0);
                pTVar8 = (object->fields).toggleButton;
                if (pTVar8 != (ToggleButtonAnimation *)0x0) {
                  method = (MethodInfo *)&UNK_?;
                  ToggleButtonAnimation::ToggleButtonAnimation_Initialize(pTVar8,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) !=
                       0) && ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
                    func_?();
                  }
                  if (cRam_? == '\0') {
                    func_?(_UNK_?);
                    cRam_? = '\x01';
                  }
                  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) !=
                       0) && ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
                    func_?(TypeInfo__GamePassesManager);
                  }
                  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                  if (pPVar1 != (PlayerPlanetData *)0x0) {
                    if ((pPVar1->fields).gamePassTier != (object->fields).tierDisplayed) {
                      return;
                    }
                    pTVar8 = (object->fields).toggleButton;
                    if (pTVar8 != (ToggleButtonAnimation *)0x0) {
                      ToggleButtonAnimation::ToggleButtonAnimation_SetToggleOnWithoutInterpolation
                                (pTVar8,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
          else if (pOVar3 == (Object__Class *)0x0) {
            pBVar5 = (object->fields).purchaseButton;
            if ((pBVar5 != (Button *)0x0) &&
               (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)pBVar5,(MethodInfo *)0x0),
               pGVar6 != (GameObject *)0x0)) {
              value = 0;
code_?:
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,value,(MethodInfo *)0x0);
code_?:
              if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
                func_?(TypeInfo__GamePassesManager);
              }
              pAVar9 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
              pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?(TypeInfo__System__Action);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar10,(Object *)object,
                         MethodInfo__GamePassesPurchaseButton__UpdatePriceText__,(MethodInfo *)0x0);
              pAVar11 = (Action *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar9,(Delegate *)pUVar10,(MethodInfo *)0x0);
              pAVar9 = (Action *)0x0;
              if (pAVar11 != (Action *)0x0) {
                if (pAVar11->klass == TypeInfo__System__Action) {
                  pAVar9 = pAVar11;
                }
                if (pAVar9 == (Action *)0x0) goto code_?;
              }
              TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar9;
              if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr &
                   0x2000000) != 0) &&
                 ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
                func_?();
              }
              pAVar9 = TypeInfo__GamePassProgressionController->static_fields->
                        OnGamePassesProgressionUpdate;
              pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar10,(Object *)object,
                         MethodInfo__GamePassesPurchaseButton__UpdatePriceText__,(MethodInfo *)0x0);
              pAVar11 = (Action *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar9,(Delegate *)pUVar10,(MethodInfo *)0x0);
              pAVar9 = (Action *)0x0;
              if (pAVar11 == (Action *)0x0) {
code_?:
                TypeInfo__GamePassProgressionController->static_fields->
                OnGamePassesProgressionUpdate = pAVar9;
                return;
              }
              if (pAVar11->klass == TypeInfo__System__Action) {
                pAVar9 = pAVar11;
              }
              if (pAVar9 != (Action *)0x0) goto code_?;
              goto code_?;
            }
          }
          else if (pOVar3 == (Object__Class *)0x1) {
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            pTVar12 = (object->fields).priceText;
            this = (GamePassesPurchaseButton *)0x0;
            pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                     GamePassTier,System::Object]::
                     Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                               ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_01,
                                tierToDisplay,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar2 != (Object *)0x0) {
              this = (GamePassesPurchaseButton *)pOVar2[2].klass;
              uVar13 = func_?(&this,0);
              if (pTVar12 != (Text *)0x0) {
                (*(code *)(pTVar12->klass->vtable).set_text.method)
                          (pTVar12,uVar13,
                           (pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                pGVar6 = (object->fields).freeTryButton;
                if (pGVar6 != (GameObject *)0x0) {
                  value = 1;
                  goto code_?;
                }
              }
            }
          }
          else {
            if (pOVar3 != (Object__Class *)0x2) goto code_?;
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            pBVar5 = (object->fields).purchaseButton;
            this = (GamePassesPurchaseButton *)0x0;
            if ((pBVar5 != (Button *)0x0) &&
               (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject((Component_1 *)pBVar5,(MethodInfo *)0x0),
               pGVar6 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar6,0,(MethodInfo *)0x0);
              pDVar7 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                        *)(object->fields).disabledPurchaseButton;
              if ((pDVar7 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                              *)0x0) &&
                 (pGVar6 = (GameObject *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                            ::
                            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                      (pDVar7,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0)) {
                tierToDisplay = GamePassTier__Enum_Tier0;
                this = (GamePassesPurchaseButton *)0x1;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar6,1,(MethodInfo *)0x0);
                tierToDisplay =
                     (GamePassTier__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                ;
                pTVar12 = (object->fields).disabledPriceText;
                this = (GamePassesPurchaseButton *)
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                ;
                pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                         GamePassTier,System::Object]::
                         Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                   ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_01,
                                    (GamePassTier__Enum)
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                    ,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                   );
                if (pOVar2 != (Object *)0x0) {
                  this = (GamePassesPurchaseButton *)pOVar2[2].klass;
                  uVar13 = func_?();
                  if (pTVar12 != (Text *)0x0) {
                    (*(code *)(pTVar12->klass->vtable).set_text.method)
                              (pTVar12,uVar13,
                               (pTVar12->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
code_?:
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_OnDestroy
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__GamePassesPurchaseButton__UpdatePriceText__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAVar3 != (Action *)0x0) {
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action *)0x0) goto code_?;
  }
  TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar1;
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    pAStack4 = (Action__Class *)TypeInfo__GamePassProgressionController;
    func_?();
  }
  pAStack4 = TypeInfo__System__Action;
  pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__GamePassesPurchaseButton__UpdatePriceText__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAVar3 != (Action *)0x0) {
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action *)0x0) {
code_?:
      pAStack4 = TypeInfo__System__Action;
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar1;
  return;
}


/* Void OnDisabledButtonPressed() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_OnDisabledButtonPressed
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).informationTextBubble;
  this = (GamePassesPurchaseButton *)((this->fields).tierDisplayed - 1);
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&this);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pGVar2 = (GamePassesPurchaseButton *)
           mscorlib.dll::System::String::String_Concat_1
                     ((Object *)StringLiteral_You_need_to_unlock_game_tier_,arg1,
                      (Object *)StringLiteral__first_,(MethodInfo *)0x0);
  if ((pGVar1 != (GamePassesTextBubble *)0x0) &&
     (this_00 = (pGVar1->fields).fader, this_00 != (NotificationFade *)0x0)) {
    NotificationFade::NotificationFade_Activate(this_00,(MethodInfo *)0x0);
    pTVar3 = (pGVar1->fields).text;
    if (pTVar3 != (Text *)0x0) {
      pTVar4 = pTVar3->klass;
      method = (MethodInfo *)(pTVar4->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      this = pGVar2;
      (*(code *)(pTVar4->vtable).set_text.method)();
      (pGVar1->fields).isActive = 1;
      return;
    }
  }
  method = (MethodInfo *)0x0;
  this = (GamePassesPurchaseButton *)&UNK_?;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 == (PlayerPlanetData *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = (pPVar1->fields).gamePassTier;
  uVar4 = (this->fields).tierDisplayed;
  this_00 = (this->fields).toggleButton;
  if (this_00 == (ToggleButtonAnimation *)0x0) goto code_?;
  uVar5 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Byte]
          ::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                    ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)this_00,
                     (MethodInfo *)0x0);
  if ((uVar3 == uVar4) != (bool)uVar5) {
    return;
  }
  if ((this->fields).toggleButton == (ToggleButtonAnimation *)0x0) goto code_?;
  *(bool *)(in_stack_6 + 0x18) = *(char *)(in_stack_6 + 0x18) == '\0';
  uStack7 = 0;
  pSStack_8 = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  pMStack_9 = (MonitorData *)0x0;
  puStack_10 = (undefined *)0x0;
  SStack_11.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_11.monitor = (MonitorData *)0x0;
  SStack_11.fields.value = 0.0;
  SStack_11.fields.OnChange = (Action_1_Single_ *)0x0;
  fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar13 = *(float *)(in_stack_6 + 0x24);
  pRVar14 = *(RectTransform **)(in_stack_6 + 0xc);
  *(float *)(in_stack_6 + 0x44) = fVar12;
  *(float *)(in_stack_6 + 0x30) = fVar13;
  *(float *)(in_stack_6 + 0x2c) = fVar13;
  if (*(char *)(in_stack_6 + 0x18) == '\0') {
    if (pRVar14 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
              ((Rect *)&stack0xffffffb0,pRVar14,(MethodInfo *)0x0);
    fVar12 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value
                      ((SubscribableVariableBase_1_System_Single_ *)&stack0xfffffff0,
                       (MethodInfo *)0x0);
    *(float *)(in_stack_6 + 0x2c) = fVar12 + fVar13;
  }
  else {
    if (pRVar14 == (RectTransform *)0x0) goto code_?;
    pRVar15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffb0,pRVar14,(MethodInfo *)0x0);
    pSStack_8 = (SubscribableVariableBase_1_System_Single___Class *)pRVar15->m_XMin;
    pMStack_9 = (MonitorData *)pRVar15->m_YMin;
    puStack_10 = (undefined *)pRVar15->m_Width;
    fVar12 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value
                      ((SubscribableVariableBase_1_System_Single_ *)&pSStack_8,(MethodInfo *)0x0);
    *(float *)(in_stack_6 + 0x30) = fVar12 + fVar13;
  }
  fVar13 = *(float *)(in_stack_6 + 0x24);
  pRVar14 = *(RectTransform **)(in_stack_6 + 0xc);
  *(float *)(in_stack_6 + 0x38) = fVar13;
  *(float *)(in_stack_6 + 0x34) = fVar13;
  if (*(char *)(in_stack_6 + 0x18) == '\0') {
    if (pRVar14 == (RectTransform *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pRVar15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffb0,pRVar14,(MethodInfo *)0x0);
    SStack_11.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar15->m_XMin;
    SStack_11.monitor = (MonitorData *)pRVar15->m_YMin;
    SStack_11.fields.value = pRVar15->m_Width;
    SStack_11.fields.OnChange = (Action_1_Single_ *)pRVar15->m_Height;
    fVar12 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value(&SStack_11,(MethodInfo *)0x0);
    *(float *)(in_stack_6 + 0x34) = fVar13 - fVar12;
  }
  else {
    if (pRVar14 == (RectTransform *)0x0) goto code_?;
    pRVar15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffb0,pRVar14,(MethodInfo *)0x0);
    fVar12 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value
                      ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffc0,
                       (MethodInfo *)pRVar15->m_XMin);
    *(float *)(in_stack_6 + 0x38) = fVar13 - fVar12;
  }
  fVar13 = *(float *)(in_stack_6 + 0x28);
  *(float *)(in_stack_6 + 0x40) = fVar13;
  *(float *)(in_stack_6 + 0x3c) = fVar13;
  fVar13 = *(float *)(in_stack_6 + 0x20) + fVar13;
  if (*(char *)(in_stack_6 + 0x18) == '\0') {
    *(float *)(in_stack_6 + 0x3c) = fVar13;
    return;
  }
  *(float *)(in_stack_6 + 0x40) = fVar13;
  return;
}


/* Void SetFreeTryActivated(Boolean) */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_SetFreeTryActivated
               (GamePassesPurchaseButton *this,bool isActive,MethodInfo *method)

{
  this_00 = (this->fields).freeTryButton;
  if ((this_00 == (GameObject *)0x0) ||
     (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,isActive ^ 1,(MethodInfo *)0x0),
     (this->fields).freeTryActivated == (GameObject *)0x0)) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)func_?(), pcVar1 == (code *)0x0))
  {
    uVar2 = func_?(&UNK_?);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).purchaseButton;
  if ((this_00 != (Button *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).disabledPurchaseButton;
    if ((this_01 !=
         (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *
         )0x0) &&
       (pGVar1 = (GameObject *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                           (this_01,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
    }
  }
  uStack2 = 0;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pppppuStack_8 = (undefined4 *****)0x0;
  pTVar1 = (this->fields).priceText;
  if (gameTierShopStatus !=
      (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
             GamePassTier,System::Object]::
             Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                       ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)gameTierShopStatus,
                        tierToDisplay,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                       );
    if (pOVar2 != (Object *)0x0) {
      pppppuStack_8 = &pppppuStack_8;
      pppppuStack_8 = (undefined4 *****)func_?();
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
        return;
      }
    }
  }
  pppppuStack_8 = (undefined4 *****)&UNK_?;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetUpTestButton() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_SetUpTestButton
               (GamePassesPurchaseButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).purchaseButton;
  if (this_00 != (Button *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).testToggle;
      if (this_01 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        pGVar1 = (GameObject *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                           (this_01,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          in_stack_2 = (Vector3 *)0x0;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,1,(MethodInfo *)0x0);
          this_02 = (this->fields).toggleButton;
          if (this_02 != (ToggleButtonAnimation *)0x0) {
            in_stack_3 = (Rect *)0x0;
            in_stack_4 = (Transform *)&UNK_?;
            in_stack_5 = this_02;
            ToggleButtonAnimation::ToggleButtonAnimation_Initialize(this_02,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
              _pSStack00000020 = CONCAT44(TypeInfo__GamePassesManager,&UNK_?);
              func_?();
            }
            if (cRam_? == '\0') {
              _pSStack00000020 = CONCAT44(_UNK_?,&UNK_?);
              func_?();
              cRam_? = '\x01';
            }
            if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
              _pSStack00000020 = CONCAT44(TypeInfo__GamePassesManager,&UNK_?);
              func_?();
            }
            fVar6 = in_stack_7;
            pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
            if (pPVar8 != (PlayerPlanetData *)0x0) {
              if ((pPVar8->fields).gamePassTier != (this->fields).tierDisplayed) {
                return;
              }
              if ((this->fields).toggleButton != (ToggleButtonAnimation *)0x0) {
                *(undefined1 *)((int)in_stack_7 + 0x18) = 1;
                if (*(Transform **)((int)in_stack_7 + 0xc) != (Transform *)0x0) {
                  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_localPosition
                                      ((Vector3 *)&stack0x00000014,
                                       *(Transform **)((int)in_stack_7 + 0xc),
                                       (MethodInfo *)0x0);
                  pSStack10 = (SubscribableVariableBase_1_System_Single_ *)pVVar9->x;
                  uStack11 = pVVar9->y;
                  fVar12 = pVVar9->z;
                  puVar13 = (undefined4 *)((int)in_stack_7 + 0xc);
                  in_stack_7 = *(float *)((int)in_stack_7 + 0x24);
                  if ((RectTransform *)*puVar13 != (RectTransform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                              ((Rect *)&stack0x00000010,(RectTransform *)*puVar13,(MethodInfo *)0x0);
                    fVar14 = SubscribableVariableBase`1[System::Single]::
                             SubscribableVariableBase_1_System_Single__get_Value
                                       ((SubscribableVariableBase_1_System_Single_ *)
                                        &stack0x00000000,(MethodInfo *)0x0);
                    _pSStack00000020 = CONCAT44(uStack11,fVar14 + in_stack_7);
                    if (*(Transform **)((int)fVar6 + 0xc) != (Transform *)0x0) {
                      value_01.z = fVar12;
                      value_01.x = fVar14 + in_stack_7;
                      value_01.y = (float)uStack11;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_set_localPosition
                                (*(Transform **)((int)fVar6 + 0xc),value_01,(MethodInfo *)0x0);
                      pTVar15 = *(Transform **)((int)fVar6 + 0x10);
                      if (pTVar15 != (Transform *)0x0) {
                        in_stack_5 = (ToggleButtonAnimation *)0x0;
                        in_stack_2 = (Vector3 *)&stack0x00000014;
                        in_stack_4 = pTVar15;
                        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_localPosition
                                            (in_stack_2,pTVar15,(MethodInfo *)0x0);
                        fVar12 = pVVar9->z;
                        this_03 = *(RectTransform **)((int)fVar6 + 0x10);
                        in_stack_7 = *(float *)((int)fVar6 + 0x24);
                        if (this_03 != (RectTransform *)0x0) {
                          _pSStack00000020 = ZEXT48(this_03);
                          in_stack_3 = (Rect *)&stack0x00000010;
                          in_stack_5 = (ToggleButtonAnimation *)&UNK_?;
                          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                          RectTransform_get_rect(in_stack_3,this_03,(MethodInfo *)0x0);
                          pSStack10 =
                               (SubscribableVariableBase_1_System_Single_ *)&stack0xfffffff0;
                          uStack11 = 0;
                          in_stack_3 = (Rect *)&UNK_?;
                          fVar14 = SubscribableVariableBase`1[System::Single]::
                                   SubscribableVariableBase_1_System_Single__get_Value
                                             (pSStack10,(MethodInfo *)0x0);
                          uVar16 = uStack11;
                          fVar14 = in_stack_7 - fVar14;
                          pTVar15 = *(Transform **)((int)fVar6 + 0x10);
                          if (pTVar15 != (Transform *)0x0) {
                            in_stack_17 = 0;
                            in_stack_18 = uStack11;
                            _pSStack00000020 = CONCAT44(&UNK_?,fVar14);
                            value.y = (float)uVar16;
                            value.x = fVar14;
                            value.z = fVar12;
                            in_stack_19 = pTVar15;
                            in_stack_20 = fVar14;
                            in_stack_7 = fVar12;
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_localPosition(pTVar15,value,(MethodInfo *)0x0);
                            if (*(Transform **)((int)fVar6 + 0x14) != (Transform *)0x0) {
                              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_localPosition
                                                  ((Vector3 *)&stack0x00000014,
                                                   *(Transform **)((int)fVar6 + 0x14),
                                                   (MethodInfo *)0x0);
                              uVar21 = pVVar9->y;
                              fVar12 = *(float *)((int)fVar6 + 0x28) + *(float *)((int)fVar6 + 0x20)
                              ;
                              _pSStack00000020 = CONCAT44(uVar21,fVar12);
                              if (*(Transform **)((int)fVar6 + 0x14) != (Transform *)0x0) {
                                value_00.y = (float)uVar21;
                                value_00.x = fVar12;
                                value_00.z = pVVar9->z;
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_set_localPosition
                                          (*(Transform **)((int)fVar6 + 0x14),value_00,
                                           (MethodInfo *)0x0);
                                if (*(Transform **)((int)fVar6 + 0xc) != (Transform *)0x0) {
                                  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_get_localPosition
                                                      ((Vector3 *)&stack0x00000014,
                                                       *(Transform **)((int)fVar6 + 0xc),
                                                       (MethodInfo *)0x0);
                                  pSStack10 =
                                       (SubscribableVariableBase_1_System_Single_ *)pVVar9->x;
                                  uStack11 = pVVar9->y;
                                  *(SubscribableVariableBase_1_System_Single_ **)((int)fVar6 + 0x30)
                                       = pSStack10;
                                  if (*(Transform **)((int)fVar6 + 0x10) != (Transform *)0x0) {
                                    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_get_localPosition
                                                        ((Vector3 *)&stack0x00000014,
                                                         *(Transform **)((int)fVar6 + 0x10),
                                                         (MethodInfo *)0x0);
                                    pSStack10 =
                                         (SubscribableVariableBase_1_System_Single_ *)pVVar9->x;
                                    uStack11 = pVVar9->y;
                                    *(SubscribableVariableBase_1_System_Single_ **)
                                     ((int)fVar6 + 0x38) = pSStack10;
                                    if (*(Transform **)((int)fVar6 + 0x14) != (Transform *)0x0) {
                                      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                                Transform_get_localPosition
                                                          ((Vector3 *)&stack0x00000014,
                                                           *(Transform **)((int)fVar6 + 0x14),
                                                           (MethodInfo *)0x0);
                                      uVar22 = pVVar9->x;
                                      *(undefined4 *)((int)fVar6 + 0x40) = uVar22;
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
                _pSStack00000020 = 0xADDR;
                func_?();
                pcVar23 = (code *)swi(3);
                (*pcVar23)();
                return;
              }
            }
          }
        }
      }
    }
  }
  _pSStack00000020 = 0xADDR;
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdatePriceText() */

void Assembly-CSharp.dll::GamePassesPurchaseButton::GamePassesPurchaseButton_UpdatePriceText
               (GamePassesPurchaseButton *this,MethodInfo *method)

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
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
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
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      GVar2 = CONCAT31((int3)((uint)in_stack_3 >> 8),(pPVar1->fields).gamePassTier);
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,GVar2,(MethodInfo *)0x0);
      pTVar4 = (this->fields).priceText;
      if (this_01 !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        GVar2 = CONCAT31((int3)(GVar2 >> 8),(this->fields).tierDisplayed);
        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_01,GVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar5 != (Object *)0x0) {
          uVar6 = func_?();
          if (pTVar4 != (Text *)0x0) {
            (*(code *)(pTVar4->klass->vtable).set_text.method)
                      (pTVar4,uVar6,
                       (pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            pTVar4 = (this->fields).disabledPriceText;
            pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                     GamePassTier,System::Object]::
                     Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                               ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_01,
                                CONCAT31((int3)(GVar2 >> 8),(this->fields).tierDisplayed),
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar5 != (Object *)0x0) {
              uVar6 = func_?(&stack0xfffffff4,0);
              if (pTVar4 != (Text *)0x0) {
                (*(code *)(pTVar4->klass->vtable).set_text.method)
                          (pTVar4,uVar6,
                           (pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

