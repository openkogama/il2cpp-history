
/* Void CreateBoostImage(Boost) */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_CreateBoostImage
               (BoostEditPopup *this,Boost *boost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostEditPopup::BoosterDef>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostEditPopup::BoosterDef>__get_Item_int_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  index = 0;
  this_00 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
            (this->fields).boosterList;
  do {
    if (this_00 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this_00->fields)._size <= index) {
      return;
    }
    if (this_00 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
    goto code_?;
    XVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
            XmlSchemaObjectTable+XmlSchemaObjectEntry]::
            List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                      (this_00,index,
                       MethodInfo__System__Collections__Generic__List<BoostEditPopup::BoosterDef>__get_Item_int_
                      );
    if (boost == (Boost *)0x0) goto code_?;
    this_00 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
              (this->fields).boosterList;
    if (XVar2.qname == (XmlQualifiedName *)(boost->fields)._Type_k__BackingField) {
      if (this_00 != (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
        XVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                          (this_00,index,
                           MethodInfo__System__Collections__Generic__List<BoostEditPopup::BoosterDef>__get_Item_int_
                          );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        this_01 = (GameObject *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)XVar2.xso,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                            );
        if ((this_01 != (GameObject *)0x0) &&
           (this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (this_01,(MethodInfo *)0x0), this_02 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_02,(Transform *)(this->fields).boostImageParent,0,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    index = index + 1;
  } while( true );
}


/* Void Initialize(Boost, GameBoosterSettingWithGoldSetting, UnityAction`1[System.Object],
   UnityAction`1[System.Int32], UnityAction) */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_Initialize
               (BoostEditPopup *this,Boost *boost,GameBoosterSettingWithGoldSetting *boostSetting,
               UnityAction_1_System_Object_ *settingChangedCallback,
               UnityAction_1_System_Int32_ *priceChangedCallback,UnityAction *submitDataCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                   );
    cRam_? = '\x01';
  }
  ppGVar1 = &(this->fields).boostSetting;
  *ppGVar1 = boostSetting;
  func_?(ppGVar1,boostSetting);
  ppUVar2 = &(this->fields).settingChangedCallback;
  *ppUVar2 = settingChangedCallback;
  func_?(ppUVar2,settingChangedCallback);
  ppUVar3 = &(this->fields).priceChangedCallback;
  *ppUVar3 = priceChangedCallback;
  func_?(ppUVar3,priceChangedCallback);
  ppUVar4 = &(this->fields).submitDataCallback;
  *ppUVar4 = submitDataCallback;
  func_?(ppUVar4,submitDataCallback);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostEditPopup::BoosterDef>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<BoostEditPopup::BoosterDef>__get_Item_int_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pLVar5 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
           (this->fields).boosterList;
  index = 0;
  do {
    if (pLVar5 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pLVar5->fields)._size <= index) {
      if (boost != (Boost *)0x0) {
code_?:
        pTVar7 = (this->fields).headerText;
        if (((((pTVar7 != (Text *)0x0) &&
              ((*(code *)(pTVar7->klass->vtable).set_text.method)
                         (pTVar7,(boost->fields)._EditTitle_k__BackingField,
                          (pTVar7->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr),
              boostSetting != (GameBoosterSettingWithGoldSetting *)0x0)) &&
             (this_02 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes
                        ::GameBoosterSettings::GameBoosterSettingTypes::
                        GameBoosterSettingWithGoldSetting::
                        GameBoosterSettingWithGoldSetting_get_GoldPrice
                                  (boostSetting,(MethodInfo *)0x0),
             this_02 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0)) &&
            ((pKVar8 = (this_02->fields).KogamaSettingNumeric,
             pKVar8 != (KogamaSettingNumeric_1_System_Int32_ *)0x0 &&
             (pRVar9 = (pKVar8->fields).RangeValidator,
             pRVar9 != (RangeValidator_1_System_Int32_ *)0x0)))) &&
           (pSVar10 = (this->fields).priceSlider, pSVar10 != (Slider *)0x0)) {
          UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                    (pSVar10,(float)(pRVar9->fields).max,(MethodInfo *)0x0);
          pKVar8 = (this_02->fields).KogamaSettingNumeric;
          if (((pKVar8 != (KogamaSettingNumeric_1_System_Int32_ *)0x0) &&
              (pRVar9 = (pKVar8->fields).RangeValidator,
              pRVar9 != (RangeValidator_1_System_Int32_ *)0x0)) &&
             (pSVar10 = (this->fields).priceSlider, pSVar10 != (Slider *)0x0)) {
            UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                      (pSVar10,(float)(pRVar9->fields).min,(MethodInfo *)0x0);
            pSVar10 = (this->fields).priceSlider;
            iVar11 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                     KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
                     KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                               (this_02,
                                MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                               );
            if (pSVar10 != (Slider *)0x0) {
              (*(code *)(pSVar10->klass->vtable).set_value.method)
                        (pSVar10,(float)iVar11,
                         (pSVar10->klass->vtable).SetValueWithoutNotify.methodPtr);
              iVar11 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                       KogamaSettingTypes::KogamaSettingNumericBase`1[System::Int32]::
                       KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                                 (this_02,
                                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                                 );
              (this->fields).originalPrice = iVar11;
              (this->fields).isInitialized = 1;
              return;
            }
          }
        }
      }
      goto code_?;
    }
    pLVar5 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
             (this->fields).boosterList;
    if (pLVar5 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
    goto code_?;
    XVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
             XmlSchemaObjectTable+XmlSchemaObjectEntry]::
             List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                       (pLVar5,index,
                        MethodInfo__System__Collections__Generic__List<BoostEditPopup::BoosterDef>__get_Item_int_
                       );
    if (boost == (Boost *)0x0) goto code_?;
    pLVar5 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
             (this->fields).boosterList;
    if (XVar12.qname == (XmlQualifiedName *)(boost->fields)._Type_k__BackingField) {
      if (pLVar5 != (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
        XVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                 XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                 List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                           (pLVar5,index,
                            MethodInfo__System__Collections__Generic__List<BoostEditPopup::BoosterDef>__get_Item_int_
                           );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        this_00 = (GameObject *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)XVar12.xso,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                            );
        if ((this_00 != (GameObject *)0x0) &&
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (this_00,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_01,(Transform *)(this->fields).boostImageParent,0,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      goto code_?;
    }
    index = index + 1;
  } while( true );
}


/* Void OnCancelBoostEdit() */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_OnCancelBoostEdit
               (BoostEditPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__BoostEditPopup____c___OnCancelBoostEdit_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BoostEditPopup____c);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).priceSlider;
  if (pSVar1 != (Slider *)0x0) {
    (*(code *)(pSVar1->klass->vtable).set_value.method)
              (pSVar1,(float)(this->fields).originalPrice,
               (pSVar1->klass->vtable).SetValueWithoutNotify.methodPtr);
    if ((this->fields).isInitialized == 0) {
code_?:
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__BoostEditPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BoostEditPopup____c);
      }
      callbackFunction = TypeInfo__BoostEditPopup____c->static_fields->__9__13_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__BoostEditPopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__BoostEditPopup____c);
        }
        object = TypeInfo__BoostEditPopup____c->static_fields->__9;
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__BoostEditPopup____c___OnCancelBoostEdit_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__BoostEditPopup____c->static_fields->__9__13_0 = callbackFunction;
        func_?(&TypeInfo__BoostEditPopup____c->static_fields->__9__13_0,callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
    pSVar1 = (this->fields).priceSlider;
    pUVar2 = (this->fields).priceChangedCallback;
    if (pSVar1 != (Slider *)0x0) {
      fVar3 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                                 (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
      if (pUVar2 != (UnityAction_1_System_Int32_ *)0x0) {
        (*(pUVar2->fields)._._.invoke_impl)
                  ((pUVar2->fields)._._.method_code,(int)fVar3,(pUVar2->fields)._._.method);
        goto code_?;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnConfirmButtonPressed() */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_OnConfirmButtonPressed
               (BoostEditPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__BoostEditPopup____c___OnConfirmButtonPressed_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BoostEditPopup____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__BoostEditPopup____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BoostEditPopup____c);
  }
  callbackFunction = TypeInfo__BoostEditPopup____c->static_fields->__9__12_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__BoostEditPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BoostEditPopup____c);
    }
    object = TypeInfo__BoostEditPopup____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__BoostEditPopup____c___OnConfirmButtonPressed_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__BoostEditPopup____c->static_fields->__9__12_0 = callbackFunction;
    func_?(&TypeInfo__BoostEditPopup____c->static_fields->__9__12_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pUVar1 = (this->fields).submitDataCallback;
  if (pUVar1 != (UnityAction *)0x0) {
    puStack2 = (pUVar1->fields)._._.method;
    pvStack3 = (pUVar1->fields)._._.method_code;
    (*(pUVar1->fields)._._.invoke_impl)();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PriceInputFieldChange() */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_PriceInputFieldChange
               (BoostEditPopup *this,MethodInfo *method)

{
  pSStack_1 = (Slider *)0x0;
  pIVar2 = (this->fields).priceInputField;
  if (pIVar2 != (InputField *)0x0) {
    mscorlib.dll::System::Single::Single_TryParse
              ((pIVar2->fields).m_Text,(float *)&pSStack_1,(MethodInfo *)0x0);
    pSVar3 = (this->fields).priceSlider;
    if (pSVar3 != (Slider *)0x0) {
      (*(code *)(pSVar3->klass->vtable).set_value.method)(pSVar3);
      BoostEditPopup_UpdatePriceTextInputFieldWithPriceSliderValue(this,(MethodInfo *)0x0);
      if ((this->fields).isInitialized == 0) {
        return;
      }
      pSVar3 = (this->fields).priceSlider;
      pUVar4 = (this->fields).priceChangedCallback;
      if ((pSVar3 != (Slider *)0x0) &&
         (pSStack_1 = pSVar3, fVar5 = (float10)(*(code *)(pSVar3->klass->vtable).get_value.method)()
         , pUVar4 != (UnityAction_1_System_Int32_ *)0x0)) {
        pSStack_1 = (Slider *)(int)fVar5;
        (*(pUVar4->fields)._._.invoke_impl)((pUVar4->fields)._._.method_code);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void PriceSliderValueChanged() */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_PriceSliderValueChanged
               (BoostEditPopup *this,MethodInfo *method)

{
  BoostEditPopup_UpdatePriceTextInputFieldWithPriceSliderValue(this,(MethodInfo *)0x0);
  if ((this->fields).isInitialized == 0) {
    return;
  }
  pSVar1 = (this->fields).priceSlider;
  pUVar2 = (this->fields).priceChangedCallback;
  if ((pSVar1 != (Slider *)0x0) &&
     (fVar3 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                                 (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr),
     pUVar2 != (UnityAction_1_System_Int32_ *)0x0)) {
    (*(pUVar2->fields)._._.invoke_impl)
              ((pUVar2->fields)._._.method_code,(int)fVar3,(pUVar2->fields)._._.method);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdatePriceData() */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_UpdatePriceData
               (BoostEditPopup *this,MethodInfo *method)

{
  if ((this->fields).isInitialized == 0) {
    return;
  }
  pSVar1 = (this->fields).priceSlider;
  pUVar2 = (this->fields).priceChangedCallback;
  if ((pSVar1 != (Slider *)0x0) &&
     (fVar3 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                                 (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr),
     pUVar2 != (UnityAction_1_System_Int32_ *)0x0)) {
    (*(pUVar2->fields)._._.invoke_impl)
              ((pUVar2->fields)._._.method_code,(int)fVar3,(pUVar2->fields)._._.method);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdatePriceSliderValueWithPriceInputFieldText() */

void Assembly-CSharp.dll::BoostEditPopup::
     BoostEditPopup_UpdatePriceSliderValueWithPriceInputFieldText
               (BoostEditPopup *this,MethodInfo *method)

{
  pSStack_1 = (Slider *)0x0;
  pIVar2 = (this->fields).priceInputField;
  if (pIVar2 != (InputField *)0x0) {
    mscorlib.dll::System::Single::Single_TryParse
              ((pIVar2->fields).m_Text,(float *)&pSStack_1,(MethodInfo *)0x0);
    pSVar3 = (this->fields).priceSlider;
    if (pSVar3 != (Slider *)0x0) {
      pSStack_1 = pSVar3;
      (*(code *)(pSVar3->klass->vtable).set_value.method)();
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdatePriceTextInputFieldWithPriceSliderValue() */

void Assembly-CSharp.dll::BoostEditPopup::
     BoostEditPopup_UpdatePriceTextInputFieldWithPriceSliderValue
               (BoostEditPopup *this,MethodInfo *method)

{
  pSVar1 = (this->fields).priceSlider;
  this_00 = (this->fields).priceInputField;
  if (pSVar1 != (Slider *)0x0) {
    fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                               (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    uStack_3 = (double)(float)fVar2;
    fVar2 = (float10)func_?(uStack_3);
    uStack_3 = (double)CONCAT44((int)fVar2,SUB84((double)fVar2,0));
    value = mscorlib.dll::System::Int32::Int32_ToString
                      ((Int32 *)((int)&uStack_3 + 4),(MethodInfo *)0x0);
    if (this_00 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

