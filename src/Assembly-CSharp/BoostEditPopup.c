
/* Void CreateBoostImage(Boost) */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_CreateBoostImage
               (BoostEditPopup *this,Boost *boost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).boosterList;
  do {
    if (pLVar1 == (List_1_BoostEditPopup_BoosterDef_ *)0x0) {
code_?:
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<BoostEditPopup::BoosterDef>__get_Count__
                       );
    if ((int)pOVar3 <= index) {
      return;
    }
    pLVar1 = (this->fields).boosterList;
    if (pLVar1 == (List_1_BoostEditPopup_BoosterDef_ *)0x0) goto code_?;
    BVar4 = mscorlib.dll::System::Collections::Generic::List`1[BoostEditPopup+BoosterDef]::
            List_1_BoostEditPopup_BoosterDef__get_Item
                      (pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<BoostEditPopup::BoosterDef>__get_Item_int_
                      );
    if (boost == (Boost *)0x0) goto code_?;
    pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)boost,(MethodInfo *)0x0);
    pLVar1 = (this->fields).boosterList;
    if ((IList_1_VoxelHit_ *)BVar4.type == pIVar5) {
      if (pLVar1 != (List_1_BoostEditPopup_BoosterDef_ *)0x0) {
        BVar4 = mscorlib.dll::System::Collections::Generic::List`1[BoostEditPopup+BoosterDef]::
                List_1_BoostEditPopup_BoosterDef__get_Item
                          (pLVar1,index,
                           MethodInfo__System__Collections__Generic__List<BoostEditPopup::BoosterDef>__get_Item_int_
                          );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            ((XpBoostParticlePreviewer *)BVar4.iconPrefab,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                            );
        if ((this_00 != (XpBoostParticlePreviewer *)0x0) &&
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                ((GameObject *)this_00,(MethodInfo *)0x0),
           this_01 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_01,(Transform *)(this->fields).boostImageParent,0,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).boostSetting = boostSetting;
  (this->fields).settingChangedCallback = settingChangedCallback;
  (this->fields).priceChangedCallback = priceChangedCallback;
  (this->fields).submitDataCallback = submitDataCallback;
  if (bVar1) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).boosterList;
  index = 0;
  if (pLVar2 != (List_1_BoostEditPopup_BoosterDef_ *)0x0) {
    while (pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                               MethodInfo__System__Collections__Generic__List<BoostEditPopup::BoosterDef>__get_Count__
                              ), index < (int)pOVar3) {
      pLVar2 = (this->fields).boosterList;
      if (pLVar2 == (List_1_BoostEditPopup_BoosterDef_ *)0x0) goto code_?;
      BVar4 = mscorlib.dll::System::Collections::Generic::List`1[BoostEditPopup+BoosterDef]::
               List_1_BoostEditPopup_BoosterDef__get_Item
                         (pLVar2,index,
                          MethodInfo__System__Collections__Generic__List<BoostEditPopup::BoosterDef>__get_Item_int_
                         );
      if (boost == (Boost *)0x0) goto code_?;
      pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)boost,(MethodInfo *)0x0);
      pLVar2 = (this->fields).boosterList;
      if ((IList_1_VoxelHit_ *)BVar4.type == pIVar5) {
        if (pLVar2 != (List_1_BoostEditPopup_BoosterDef_ *)0x0) {
          BVar4 = mscorlib.dll::System::Collections::Generic::List`1[BoostEditPopup+BoosterDef]::
                   List_1_BoostEditPopup_BoosterDef__get_Item
                             (pLVar2,index,
                              MethodInfo__System__Collections__Generic__List<BoostEditPopup::BoosterDef>__get_Item_int_
                             );
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            boostSetting = (GameBoosterSettingWithGoldSetting *)TypeInfo__UnityEngine__Object;
            func_?();
          }
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                              ((XpBoostParticlePreviewer *)BVar4.iconPrefab,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                              );
          if ((this_00 != (XpBoostParticlePreviewer *)0x0) &&
             (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform((GameObject *)this_00,(MethodInfo *)0x0),
             this_01 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (this_01,(Transform *)(this->fields).boostImageParent,0,(MethodInfo *)0x0);
            break;
          }
        }
        goto code_?;
      }
      index = index + 1;
      if (pLVar2 == (List_1_BoostEditPopup_BoosterDef_ *)0x0) goto code_?;
    }
    pTVar6 = (this->fields).headerText;
    if (((((boost != (Boost *)0x0) &&
          (pIVar7 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                    KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                    KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                              ((KogamaSettingNumericBase_1_System_Single_ *)boost,(MethodInfo *)0x0)
          , pTVar6 != (Text *)0x0)) &&
         ((*(code *)(pTVar6->klass->vtable).set_text.method)
                    (pTVar6,pIVar7,
                     (pTVar6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr),
         boostSetting != (GameBoosterSettingWithGoldSetting *)0x0)) &&
        ((this_02 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                    GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting
                    ::GameBoosterSettingWithGoldSetting_get_GoldPrice
                              (boostSetting,(MethodInfo *)0x0),
         this_02 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0 &&
         (pKVar8 = (this_02->fields).KogamaSettingNumeric,
         pKVar8 != (KogamaSettingNumeric_1_System_Int32_ *)0x0)))) &&
       ((pRVar9 = (pKVar8->fields).RangeValidator, pRVar9 != (RangeValidator_1_System_Int32_ *)0x0
        && (pSVar10 = (this->fields).priceSlider, pSVar10 != (Slider *)0x0)))) {
      UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                (pSVar10,(float)(pRVar9->fields).max,(MethodInfo *)0x0);
      pKVar8 = (this_02->fields).KogamaSettingNumeric;
      if (((pKVar8 != (KogamaSettingNumeric_1_System_Int32_ *)0x0) &&
          (pRVar9 = (pKVar8->fields).RangeValidator, pRVar9 != (RangeValidator_1_System_Int32_ *)0x0
          )) && (pSVar10 = (this->fields).priceSlider, pSVar10 != (Slider *)0x0)) {
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
                    (pSVar10,(float)iVar11,(pSVar10->klass->vtable).Rebuild_1.methodPtr);
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
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnCancelBoostEdit() */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_OnCancelBoostEdit
               (BoostEditPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).priceSlider;
  if (pSVar1 != (Slider *)0x0) {
    (*(code *)(pSVar1->klass->vtable).set_value.method)
              (pSVar1,(float)(this->fields).originalPrice,
               (pSVar1->klass->vtable).Rebuild_1.methodPtr);
    BoostEditPopup_UpdatePriceData(this,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__BoostEditPopup->static_fields->__f__am_cache1 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)0x0,
                 MethodInfo__BoostEditPopup___OnCancelBoostEdit_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__BoostEditPopup->static_fields->__f__am_cache1 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__BoostEditPopup->static_fields->__f__am_cache1;
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnConfirmButtonPressed() */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_OnConfirmButtonPressed
               (BoostEditPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__BoostEditPopup->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__BoostEditPopup___OnConfirmButtonPressed_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__BoostEditPopup->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__BoostEditPopup->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if ((this->fields).submitDataCallback == (UnityAction *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(AvatarMotor_OnActiveBounceDelegate **)(in_stack_2 + 0x2c) !=
      (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (*(AvatarMotor_OnActiveBounceDelegate **)(in_stack_2 + 0x2c),in_stack_3)
    ;
  }
  pcVar1 = *(code **)(in_stack_2 + 8);
  method_00 = *(KeyValuePair_2_WinningConditionType_System_Object_ **)(in_stack_2 + 0x14);
  piVar4 = *(int **)(in_stack_2 + 0x10);
  if ((short)method_00[5].key == -1) {
    func_?();
  }
  cVar5 = func_?();
  if (cVar5 == '\0') {
    if (*(char *)((int)&method_00[5].key + 2) == '\0') {
      (*pcVar1)();
      return;
    }
  }
  else if (((short)method_00[5].key != -1) &&
          (((piVar4 == (int *)0x0 || ((*(uint *)(*piVar4 + 0xa0) & 0x100) == 0)) &&
           (*(int *)(in_stack_2 + 0xc) != 0)))) {
    cVar5 = func_?();
    if (cVar5 != '\0') {
      return;
    }
    cVar5 = func_?();
    mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::Object]
    ::KeyValuePair_2_WinningConditionType_System_Object__get_Value
              (method_00,(MethodInfo *)method_00);
    cVar6 = func_?();
    if (cVar5 != '\0') {
      if (cVar6 != '\0') {
        func_?();
        return;
      }
      func_?();
      return;
    }
    if (cVar6 != '\0') {
      mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
      Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                (method_00,in_stack_7);
      func_?();
      return;
    }
    func_?();
    return;
  }
  (*pcVar1)();
  return;
}


/* Void PriceInputFieldChange() */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_PriceInputFieldChange
               (BoostEditPopup *this,MethodInfo *method)

{
  this_00 = (this->fields).priceInputField;
  if (this_00 != (InputField *)0x0) {
    s = (String *)
        TriggerCube::TriggerCube_get_InputSignalReceiver((TriggerCube *)this_00,(MethodInfo *)0x0);
    mscorlib.dll::System::Single::Single_TryParse_1(s,(float *)&stack0xfffffff8,(MethodInfo *)0x0);
    pSVar1 = (this->fields).priceSlider;
    if (pSVar1 != (Slider *)0x0) {
      (*(code *)(pSVar1->klass->vtable).set_value.method)();
      BoostEditPopup_UpdatePriceTextInputFieldWithPriceSliderValue(this,(MethodInfo *)0x0);
      BoostEditPopup_UpdatePriceData(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PriceSliderValueChanged() */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_PriceSliderValueChanged
               (BoostEditPopup *this,MethodInfo *method)

{
  BoostEditPopup_UpdatePriceTextInputFieldWithPriceSliderValue(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (*(char *)(in_stack_1 + 0x24) == '\0') {
    return;
  }
  piVar2 = *(int **)(in_stack_1 + 0x14);
  this_00 = *(Action_1_UIPushOption_ **)(in_stack_1 + 0x30);
  if ((piVar2 != (int *)0x0) &&
     (fVar3 = (float10)(**(code **)(*piVar2 + 0x230))(piVar2,*(undefined4 *)(*piVar2 + 0x234)),
     this_00 != (Action_1_UIPushOption_ *)0x0)) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,(int)fVar3,MethodInfo__UnityEngine__Events__UnityAction<int>__Invoke_int_);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdatePriceData() */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup_UpdatePriceData
               (BoostEditPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isInitialized == 0) {
    return;
  }
  pSVar1 = (this->fields).priceSlider;
  this_00 = (Action_1_UIPushOption_ *)(this->fields).priceChangedCallback;
  if ((pSVar1 != (Slider *)0x0) &&
     (fVar2 = (float10)(*(code *)(pSVar1->klass->vtable).get_value.method)
                                 (pSVar1,(pSVar1->klass->vtable).set_value.methodPtr),
     this_00 != (Action_1_UIPushOption_ *)0x0)) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,(int)fVar2,MethodInfo__UnityEngine__Events__UnityAction<int>__Invoke_int_);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdatePriceSliderValueWithPriceInputFieldText() */

void Assembly-CSharp.dll::BoostEditPopup::
     BoostEditPopup_UpdatePriceSliderValueWithPriceInputFieldText
               (BoostEditPopup *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  this_00 = (this->fields).priceInputField;
  if (this_00 != (InputField *)0x0) {
    s = (String *)
        TriggerCube::TriggerCube_get_InputSignalReceiver((TriggerCube *)this_00,(MethodInfo *)0x0);
    mscorlib.dll::System::Single::Single_TryParse_1(s,&fStack_1,(MethodInfo *)0x0);
    pSVar2 = (this->fields).priceSlider;
    if (pSVar2 != (Slider *)0x0) {
      (*(code *)(pSVar2->klass->vtable).set_value.method)();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdatePriceTextInputFieldWithPriceSliderValue() */

void Assembly-CSharp.dll::BoostEditPopup::
     BoostEditPopup_UpdatePriceTextInputFieldWithPriceSliderValue
               (BoostEditPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  pSVar2 = (this->fields).priceSlider;
  this_00 = (this->fields).priceInputField;
  if (pSVar2 != (Slider *)0x0) {
    fVar3 = (float10)(*(code *)(pSVar2->klass->vtable).get_value.method)
                               (pSVar2,(pSVar2->klass->vtable).set_value.methodPtr);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    iStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                         ((float)fVar3,(MethodInfo *)0x0);
    value = (String *)func_?(&iStack_1,0);
    if (this_00 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <OnCancelBoostEdit>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup__OnCancelBoostEdit_m__1
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


/* Void <OnConfirmButtonPressed>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BoostEditPopup::BoostEditPopup__OnConfirmButtonPressed_m__0
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

