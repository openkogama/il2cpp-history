
/* Void Initialize(GamePassesXpRewardInfo, GamePassTier) */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_Initialize
               (GamePassesXPRewardOption *this,GamePassesXpRewardInfo *rewardInfo,
               GamePassTier__Enum gamePassTier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).gamePassTier = (uint8_t)gamePassTier;
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassProgressionController);
  }
  pRVar1 = GamePassProgressionController::GamePassProgressionController_GetXPRewardRangeValidator
                     (gamePassTier,(MethodInfo *)0x0);
  if ((pRVar1 != (RangeValidator_1_System_Int32_ *)0x0) &&
     (pSVar2 = (this->fields).slider, pSVar2 != (Slider *)0x0)) {
    UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
              (pSVar2,(float)(pRVar1->fields).min,(MethodInfo *)0x0);
    pSVar2 = (this->fields).slider;
    if (pSVar2 != (Slider *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                (pSVar2,(float)(pRVar1->fields).max,(MethodInfo *)0x0);
      xpRewardAmount =
           GamePassProgressionController::GamePassProgressionController_GetXPReward
                     (gamePassTier,(MethodInfo *)0x0);
      pSVar2 = (this->fields).slider;
      if (pSVar2 != (Slider *)0x0) {
        (*(code *)(pSVar2->klass->vtable).set_value.method)();
        this_00 = (this->fields).inputField;
        value = (String *)func_?();
        if (this_00 != (InputField *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                    (this_00,value,(MethodInfo *)0x0);
          GamePassesXPRewardOption_UpdateBonusXpAmountText(this,xpRewardAmount,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnInputFieldChange() */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_OnInputFieldChange
               (GamePassesXPRewardOption *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  pIVar2 = (this->fields).inputField;
  if (pIVar2 != (InputField *)0x0) {
    pSVar3 = (String *)
             TriggerCube::TriggerCube_get_InputSignalReceiver
                       ((TriggerCube *)pIVar2,(MethodInfo *)0x0);
    bVar4 = mscorlib.dll::System::Single::Single_TryParse_1
                      (pSVar3,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    pSVar5 = (this->fields).slider;
    if (pSVar5 != (Slider *)0x0) {
      min = ThemeSkybox::ThemeSkybox_get_MoonLightIntensity((ThemeSkybox *)pSVar5,(MethodInfo *)0x0)
      ;
      pSVar5 = (this->fields).slider;
      if (pSVar5 != (Slider *)0x0) {
        this = (GamePassesXPRewardOption *)
               ThemeSkybox::ThemeSkybox_get_CloudsHeight((ThemeSkybox *)pSVar5,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          this = (GamePassesXPRewardOption *)&UNK_?;
          func_?();
        }
        fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                          (fVar1,min,(float)this,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt(fVar1,(MethodInfo *)0x0);
        pIVar2 = (this_00->fields).inputField;
        pSVar3 = (String *)func_?();
        if (pIVar2 != (InputField *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                    (pIVar2,pSVar3,(MethodInfo *)0x0);
          pSVar5 = (this_00->fields).slider;
          if (pSVar5 != (Slider *)0x0) {
            (*(code *)(pSVar5->klass->vtable).set_value.method)();
            GamePassesXPRewardOption_UpdateBonusXpAmountText(this_00,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnOkayPressed() */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_OnOkayPressed
               (GamePassesXPRewardOption *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                               (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    xpAmount = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                         ((float)fVar2,(MethodInfo *)0x0);
    GamePassesXPRewardOption_UpdateXPData(this,xpAmount,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__GamePassesXPRewardOption->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__GamePassesXPRewardOption___OnOkayPressed_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__GamePassesXPRewardOption->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__GamePassesXPRewardOption->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnSliderChange() */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_OnSliderChange
               (GamePassesXPRewardOption *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  pSVar2 = (this->fields).slider;
  if (pSVar2 != (Slider *)0x0) {
    fVar3 = (float10)(*(code *)(pSVar2->klass->vtable).get_value.method)
                               (pSVar2,(pSVar2->klass->vtable).set_value.methodPtr);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    iStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                         ((float)fVar3,(MethodInfo *)0x0);
    this_00 = (this->fields).inputField;
    value = (String *)func_?(&iStack_1,0);
    if (this_00 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (this_00,value,(MethodInfo *)0x0);
      GamePassesXPRewardOption_UpdateBonusXpAmountText(this,iStack_1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateBonusXpAmountText(Int32) */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_UpdateBonusXpAmountText
               (GamePassesXPRewardOption *this,int32_t xpRewardAmount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SubscriberRewardDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SubscriberRewardDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__SubscriberRewardDataManager);
  }
  iVar1 = SubscriberRewardDataManager::SubscriberRewardDataManager_GetBaseXpAmount
                    ((MethodInfo *)0x0);
  pTVar2 = (this->fields).bonusXPAmountText;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
            (((float)iVar1 / _UNK_? + _UNK_?) * (float)xpRewardAmount,
             (MethodInfo *)0x0);
  str0 = (String *)func_?(&stack0xfffffff8,0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  mscorlib.dll::System::String::String_Concat_2(str0,StringLiteral__XP_for_Elites,(MethodInfo *)0x0)
  ;
  if (pTVar2 != (Text *)0x0) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)();
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateXPData(Int32) */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_UpdateXPData
               (GamePassesXPRewardOption *this,int32_t xpAmount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (GamePassesXPRewardOption *)CONCAT31(this._1_3_,(this->fields).gamePassTier);
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassProgressionController);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassProgressionController);
  }
  if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
    if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassProgressionController);
    }
    GamePassProgressionController::GamePassProgressionController_Initialize((MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__GamePassProgressionController->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__GamePassProgressionController->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassProgressionController);
  }
  pRVar1 = GamePassProgressionController::GamePassProgressionController_GetXPRewardRangeValidator
                     ((GamePassTier__Enum)this,(MethodInfo *)0x0);
  if (pRVar1 != (RangeValidator_1_System_Int32_ *)0x0) {
    iVar2 = (pRVar1->fields).max;
    min = (pRVar1->fields).min;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                      (xpAmount,min,iVar2,(MethodInfo *)0x0);
    pMVar3 = TypeInfo__GamePassProgressionController->static_fields->progressionDataObject;
    if (pMVar3 != (MVGamePassProgressionDataObject *)0x0) {
      value = MVGamePassProgressionDataObject::
              MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectShared
                        (pMVar3,(MethodInfo *)0x0);
      if (((value != (GamePassProgressionDataObjectShared *)0x0) &&
          (pGVar4 = (value->fields).xpTierRewards,
          pGVar4 != (GamePassProgressionDataObjectShared_XPTierRewards *)0x0)) &&
         (this_00 = (pGVar4->fields).xpTierRewards,
         this_00 != (Dictionary_2_MV_Common_GamePassTier_System_Int32_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::
        Int32]::Dictionary_2_MV_Common_GamePassTier_System_Int32__set_Item
                  (this_00,(GamePassTier__Enum)pMVar3,iVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                  );
        pMVar3 = TypeInfo__GamePassProgressionController->static_fields->progressionDataObject;
        if (pMVar3 != (MVGamePassProgressionDataObject *)0x0) {
          MVGamePassProgressionDataObject::
          MVGamePassProgressionDataObject_set_GamePassProgressionDataObjectShared
                    (pMVar3,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <OnOkayPressed>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption__OnOkayPressed_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

