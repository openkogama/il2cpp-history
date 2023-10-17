
/* Void Initialize(GamePassesXpRewardInfo, GamePassTier) */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_Initialize
               (GamePassesXPRewardOption *this,GamePassesXpRewardInfo *rewardInfo,
               GamePassTier__Enum gpt,MethodInfo *method)

{
  GVar1 = gpt;
  (this->fields).gamePassTier = (uint8_t)gpt;
  pRVar2 = GamePassProgressionController::GamePassProgressionController_GetXPRewardRangeValidator
                     (gpt,(MethodInfo *)0x0);
  GVar3 = gpt;
  if ((pRVar2 != (RangeValidator_1_System_Int32_ *)0x0) &&
     (pSVar4 = (this->fields).slider, pSVar4 != (Slider *)0x0)) {
    UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
              (pSVar4,(float)(pRVar2->fields).min,(MethodInfo *)0x0);
    pSVar4 = (this->fields).slider;
    GVar3 = gpt;
    if (pSVar4 != (Slider *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                (pSVar4,(float)(pRVar2->fields).max,(MethodInfo *)0x0);
      GVar3 = GamePassProgressionController::GamePassProgressionController_GetXPReward
                        (GVar1,(MethodInfo *)0x0);
      gpt = (GamePassTier__Enum)(this->fields).slider;
      if ((Slider *)gpt != (Slider *)0x0) {
        method = (MethodInfo *)(float)(int)GVar3;
        (*(((Slider *)gpt)->klass->vtable).set_value.methodPtr)();
        this_00 = (this->fields).inputField;
        value = (MethodInfo *)
                mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&gpt,(MethodInfo *)0x0);
        GVar3 = gpt;
        if (this_00 != (InputField *)0x0) {
          gpt = (GamePassTier__Enum)this_00;
          method = value;
          UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                    (this_00,(String *)value,(MethodInfo *)0x0);
          GVar1 = gpt;
          method = (MethodInfo *)gpt;
          gpt = (GamePassTier__Enum)this;
          GamePassesXPRewardOption_UpdateBonusXpAmountText(this,GVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  gpt = GVar3;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnInputFieldChange() */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_OnInputFieldChange
               (GamePassesXPRewardOption *this,MethodInfo *method)

{
  this_00 = this;
  pGStack_1 = (GamePassesXPRewardOption *)0x0;
  pIVar2 = (this->fields).inputField;
  if (pIVar2 != (InputField *)0x0) {
    bVar3 = mscorlib.dll::System::Single::Single_TryParse
                      ((pIVar2->fields).m_Text,(float *)&pGStack_1,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pSVar4 = (this->fields).slider;
    if (pSVar4 != (Slider *)0x0) {
      pGVar5 = (GamePassesXPRewardOption *)(pSVar4->fields).m_MinValue;
      this = pGStack_1;
      if (((float)pGVar5 <= (float)pGStack_1) &&
         (pGVar6 = (GamePassesXPRewardOption *)(pSVar4->fields).m_MaxValue, pGVar5 = this,
         (float)pGVar6 < (float)pGStack_1)) {
        pGVar5 = pGVar6;
      }
      this = pGVar5;
      pGStack_1 = this;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar7 = (float10)func_?((double)(float)this);
      pIVar2 = (this_00->fields).inputField;
      value = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
      if (pIVar2 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (pIVar2,value,(MethodInfo *)0x0);
        pSVar4 = (this_00->fields).slider;
        if (pSVar4 != (Slider *)0x0) {
          xpRewardAmount = (pSVar4->klass->vtable).set_value.method;
          (*(pSVar4->klass->vtable).set_value.methodPtr)(pSVar4,(float)(int)fVar7);
          GamePassesXPRewardOption_UpdateBonusXpAmountText
                    (this_00,(int32_t)xpRewardAmount,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnOkayPressed() */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_OnOkayPressed
               (GamePassesXPRewardOption *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?();
    func_?(&TypeInfo__GamePassesXPRewardOption____c);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    pIVar2 = (pSVar1->klass->vtable).get_value.methodPtr;
    fVar3 = (float10)(*pIVar2)(pSVar1,(pSVar1->klass->vtable).get_value.method);
    fVar4 = (float)fVar3;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pGVar5 = &this->fields;
    this = (GamePassesXPRewardOption *)CONCAT31((int3)((uint)pIVar2 >> 8),pGVar5->gamePassTier);
    fVar3 = (float10)func_?((double)fVar4);
    pOVar6 = (Object *)(int)fVar3;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                     );
      func_?(&TypeInfo__GamePassProgressionController);
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
      GamePassProgressionController::GamePassProgressionController_Initialize((MethodInfo *)0x0);
    }
    pRVar7 = GamePassProgressionController::GamePassProgressionController_GetXPRewardRangeValidator
                       ((GamePassTier__Enum)this,(MethodInfo *)0x0);
    if (pRVar7 != (RangeValidator_1_System_Int32_ *)0x0) {
      value_00 = (Object *)(pRVar7->fields).min;
      if (((int)value_00 <= (int)pOVar6) &&
         (pOVar8 = (Object *)(pRVar7->fields).max, value_00 = pOVar6, (int)pOVar8 < (int)pOVar6)) {
        value_00 = pOVar8;
      }
      pMVar9 = TypeInfo__GamePassProgressionController->static_fields->progressionDataObject;
      if ((((pMVar9 != (MVGamePassProgressionDataObject *)0x0) &&
           (value = MVGamePassProgressionDataObject::
                    MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectShared
                              (pMVar9,(MethodInfo *)0x0),
           value != (GamePassProgressionDataObjectShared *)0x0)) &&
          (pGVar10 = (value->fields).xpTierRewards,
          pGVar10 != (GamePassProgressionDataObjectShared_XPTierRewards *)0x0)) &&
         (this_00 = (Dictionary_2_System_Object_System_Object_ *)(pGVar10->fields).xpTierRewards,
         this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (this_00,(Object *)this,value_00,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                  );
        pMVar9 = TypeInfo__GamePassProgressionController->static_fields->progressionDataObject;
        if (pMVar9 != (MVGamePassProgressionDataObject *)0x0) {
          MVGamePassProgressionDataObject::
          MVGamePassProgressionDataObject_set_GamePassProgressionDataObjectShared
                    (pMVar9,value,(MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
          if ((TypeInfo__GamePassesXPRewardOption____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          callbackFunction = TypeInfo__GamePassesXPRewardOption____c->static_fields->__9__8_0;
          if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if ((TypeInfo__GamePassesXPRewardOption____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            object = TypeInfo__GamePassesXPRewardOption____c->static_fields->__9;
            callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
            if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
            goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                       (Object *)object,
                       MethodInfo__GamePassesXPRewardOption____c___OnOkayPressed_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__GamePassesXPRewardOption____c->static_fields->__9__8_0 = callbackFunction;
            func_?(&TypeInfo__GamePassesXPRewardOption____c->static_fields->__9__8_0,
                            callbackFunction);
          }
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnSliderChange() */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_OnSliderChange
               (GamePassesXPRewardOption *this,MethodInfo *method)

{
  this_01 = this;
  pSVar1 = (this->fields).slider;
  if (pSVar1 != (Slider *)0x0) {
    fVar2 = (float10)(*(pSVar1->klass->vtable).get_value.methodPtr)
                               (pSVar1,(pSVar1->klass->vtable).get_value.method);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar2 = (float10)func_?((double)(float)fVar2);
    this_00 = (this_01->fields).inputField;
    this = (GamePassesXPRewardOption *)(int)fVar2;
    value = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
    if (this_00 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (this_00,value,(MethodInfo *)0x0);
      GamePassesXPRewardOption_UpdateBonusXpAmountText(this_01,(int32_t)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateBonusXpAmountText(Int32) */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_UpdateBonusXpAmountText
               (GamePassesXPRewardOption *this,int32_t xpRewardAmount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&StringLiteral__XP_for_Elites);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  iVar1 = SubscriberRewardDataManager::SubscriberRewardDataManager_GetBaseXpAmount
                    ((MethodInfo *)0x0);
  pTVar2 = (this->fields).bonusXPAmountText;
  fVar3 = (float)iVar1 / _UNK_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar3 = fVar3 + _UNK_?;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  uStack_4 = (double)(fVar3 * (float)xpRewardAmount);
  fVar5 = (float10)func_?(uStack_4);
  uStack_4._0_4_ = SUB84((double)fVar5,0);
  uStack_4 = (double)CONCAT44((int)fVar5,(undefined4)uStack_4);
  str0 = mscorlib.dll::System::Int32::Int32_ToString
                   ((Int32 *)((int)&uStack_4 + 4),(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_3(str0,StringLiteral__XP_for_Elites,(MethodInfo *)0x0)
  ;
  if (pTVar2 != (Text *)0x0) {
    uStack_4 = (double)CONCAT44(&UNK_?,(undefined4)uStack_4);
    (*(pTVar2->klass->vtable).set_text.methodPtr)();
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateXPData(Int32) */

void Assembly-CSharp.dll::GamePassesXPRewardOption::GamePassesXPRewardOption_UpdateXPData
               (GamePassesXPRewardOption *this,int32_t xpAmount,MethodInfo *method)

{
  this = (GamePassesXPRewardOption *)CONCAT31(this._1_3_,(this->fields).gamePassTier);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_int>__set_Item_MV__Common__GamePassTier__int_
                   );
    func_?(&TypeInfo__GamePassProgressionController);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassProgressionController->static_fields->isInitialized == 0) {
    GamePassProgressionController::GamePassProgressionController_Initialize((MethodInfo *)0x0);
  }
  pRVar1 = GamePassProgressionController::GamePassProgressionController_GetXPRewardRangeValidator
                     ((GamePassTier__Enum)this,(MethodInfo *)0x0);
  if (pRVar1 != (RangeValidator_1_System_Int32_ *)0x0) {
    value_00 = (Object *)(pRVar1->fields).min;
    if (((int)value_00 <= xpAmount) &&
       (pOVar2 = (Object *)(pRVar1->fields).max, value_00 = (Object *)xpAmount,
       (int)pOVar2 < xpAmount)) {
      value_00 = pOVar2;
    }
    pMVar3 = TypeInfo__GamePassProgressionController->static_fields->progressionDataObject;
    if ((((pMVar3 != (MVGamePassProgressionDataObject *)0x0) &&
         (value = MVGamePassProgressionDataObject::
                  MVGamePassProgressionDataObject_get_GamePassProgressionDataObjectShared
                            (pMVar3,(MethodInfo *)0x0),
         value != (GamePassProgressionDataObjectShared *)0x0)) &&
        (pGVar4 = (value->fields).xpTierRewards,
        pGVar4 != (GamePassProgressionDataObjectShared_XPTierRewards *)0x0)) &&
       (this_00 = (Dictionary_2_System_Object_System_Object_ *)(pGVar4->fields).xpTierRewards,
       this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)this,value_00,
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
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

