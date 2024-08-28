
/* Void OnChange(Object) */

void Assembly-CSharp.dll::ProfileSettingButton::ProfileSettingButton_OnChange
               (ProfileSettingButton *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    pIVar1 = TypeInfo__System__Int32;
    if ((value->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar2 = (int *)func_?(value);
    this_00 = (this->fields).button;
    if ((this->fields).isIncrease == 0) {
      newValue = (this->fields).minValue < *piVar2;
    }
    else {
      newValue = *piVar2 < (this->fields).maxValue;
    }
    if (this_00 != (Button *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__EventSystems__EventSystem,unaff_EBP);
        func_?(&TypeInfo__UnityEngine__Object);
        func_?(&
                        bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<bool>_System__Boolean___bool_
                       );
        cRam_? = '\x01';
      }
      currentValue = &(this_00->fields)._.m_Interactable;
      bVar3 = UnityEngine.UI.dll::UnityEngine::UI::SetPropertyUtility::SetPropertyUtility_SetStruct
                        (currentValue,newValue,
                         bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<bool>_System__Boolean___bool_
                        );
      if (bVar3 != 0) {
        if (*currentValue == 0) {
          if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?(TypeInfo__UnityEngine__EventSystems__EventSystem);
          }
          pEVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                   EventSystem_get_current((MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pEVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor ==
                0) {
              func_?(TypeInfo__UnityEngine__EventSystems__EventSystem);
            }
            pEVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                     EventSystem_get_current((MethodInfo *)0x0);
            if (pEVar4 == (EventSystem *)0x0) {
code_?:
              func_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            x = (pEVar4->fields).m_CurrentSelected;
            y = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)x,(Object_1 *)y,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?();
              }
              pEVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                       EventSystem_get_current((MethodInfo *)0x0);
              if (pEVar4 == (EventSystem *)0x0) goto code_?;
              UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
              EventSystem_SetSelectedGameObject_1(pEVar4,(GameObject *)0x0,(MethodInfo *)0x0);
            }
          }
        }
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_OnSetProperty
                  ((Selectable *)this_00,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  value = extraout_ECX;
  pIVar1 = extraout_EDX;
code_?:
  func_?(value,pIVar1);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnClick() */

void Assembly-CSharp.dll::ProfileSettingButton::ProfileSettingButton_OnClick
               (ProfileSettingButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  PVar2 = (this->fields).profileSettingKey;
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  pOVar3 = Assets::Scripts::ProfileSettings::ProfileSettingsManager::
           ProfileSettingsManager_GetSettingValue(PVar2,(MethodInfo *)0x0);
  uVar4 = CONCAT44(TypeInfo__System__Int32,pOVar3);
  if (pOVar3 == (Object *)0x0) {
    uVar4 = func_?();
  }
  else if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
    piVar5 = (int *)func_?(pOVar3);
    pPVar6 = (ProfileSettingButton *)(pPVar1->fields).minValue;
    pPVar7 = (ProfileSettingButton *)((uint)((pPVar1->fields).isIncrease != 0) * 2 + -1 + *piVar5);
    if (((int)pPVar6 <= (int)pPVar7) &&
       (pPVar8 = (ProfileSettingButton *)(pPVar1->fields).maxValue, pPVar6 = pPVar7,
       (int)pPVar8 < (int)pPVar7)) {
      pPVar6 = pPVar8;
    }
    PVar2 = (pPVar1->fields).profileSettingKey;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel);
      func_?(&TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel);
      func_?(&TypeInfo__UnityEngine__FilterMode);
      func_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
      func_?(&TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
      func_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
      func_?(&StringLiteral_Error);
      cRam_? = '\x01';
    }
    value = StringLiteral_Error;
    switch((pPVar1->fields).profileSettingKey) {
    case 1:
      this = pPVar6;
      value = (String *)
              func_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue,&this);
      break;
    case 2:
      pPStack_9 = pPVar6;
      value = (String *)
              func_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,&pPStack_9);
      break;
    case 3:
      pPStack_10 = pPVar6;
      value = (String *)func_?(TypeInfo__UnityEngine__FilterMode,&pPStack_10);
      break;
    case 4:
      pPStack_11 = pPVar6;
      value = (String *)
              func_?(TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel,
                              &pPStack_11);
      break;
    case 5:
      pPStack_12 = pPVar6;
      value = (String *)
              func_?(TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel,&pPStack_12);
      break;
    case 6:
      pPStack_13 = pPVar6;
      value = (String *)
              func_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,&pPStack_13)
      ;
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_SetSettingValue
              (PVar2,(Object *)value,(MethodInfo *)0x0);
    return;
  }
  func_?(uVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ProfileSettingButton::ProfileSettingButton_OnDestroy
               (ProfileSettingButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                   );
    func_?(&MethodInfo__ProfileSettingButton__OnChange_System__Object_);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  key = (this->fields).profileSettingKey;
  if (this_00 !=
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    pDVar1 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                       );
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<System::Object>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,MethodInfo__ProfileSettingButton__OnChange_System__Object_,
               (MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar1,(Delegate *)this_01,(MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    if (pDVar1 == (Delegate *)0x0) {
      value = (Object *)0x0;
    }
    else {
      value = (Object *)func_?();
      if (value == (Object *)0x0) goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__set_Item
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,value,method_00);
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Object ProfileSettingValueToObj(Int32) */

Object * Assembly-CSharp.dll::ProfileSettingButton::ProfileSettingButton_ProfileSettingValueToObj
                   (ProfileSettingButton *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel);
    func_?(&TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel);
    func_?(&TypeInfo__UnityEngine__FilterMode);
    func_?(&TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel);
    func_?(&TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue);
    func_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
    func_?(&StringLiteral_Error);
    cRam_? = '\x01';
  }
  switch((this->fields).profileSettingKey) {
  case 1:
    this = (ProfileSettingButton *)value;
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue,&this);
    return pOVar1;
  case 2:
    this = (ProfileSettingButton *)value;
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,&this);
    return pOVar1;
  case 3:
    this = (ProfileSettingButton *)value;
    pOVar1 = (Object *)func_?(TypeInfo__UnityEngine__FilterMode,&this);
    return pOVar1;
  case 4:
    this = (ProfileSettingButton *)value;
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel,&this);
    return pOVar1;
  case 5:
    this = (ProfileSettingButton *)value;
    pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel,&this)
    ;
    return pOVar1;
  case 6:
    this = (ProfileSettingButton *)value;
    pOVar1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,&this);
    return pOVar1;
  default:
    return (Object *)StringLiteral_Error;
  }
}


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void Start() */

void Assembly-CSharp.dll::ProfileSettingButton::ProfileSettingButton_Start
               (ProfileSettingButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    in_stack_1 =
         &
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  object = (Enum__Class *)this;
  pBVar2 = (Button *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                     );
  (((ProfileSettingButton *)object)->fields).button = pBVar2;
  func_?();
  (((ProfileSettingButton *)object)->fields).minValue = 0;
  (((ProfileSettingButton *)object)->fields).isIncrease =
       (((ProfileSettingButton *)object)->fields).profileSettingButtonType == 0;
  handle_04 = TypeRef__MV__WorldObject__MetaData__TextureQualityLevel;
  handle_03 = TypeRef__MV__WorldObject__MetaData__TargetFrameRateValue;
  handle_02 = TypeRef__MV__WorldObject__MetaData__LightingQualityLevel;
  handle_01 = TypeRef__UnityEngine__FilterMode;
  handle_00 = TypeRef__MV__WorldObject__MetaData__AntiAliasingLevel;
  handle = TypeRef__MV__WorldObject__MetaData__AnistropicFilteringLevel;
  switch((((ProfileSettingButton *)object)->fields).profileSettingKey) {
  case 1:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_ESI = (Enum__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle_03,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_3.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar4 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar4 != (Array *)0x0) {
      iVar5 = mscorlib.dll::System::Array::Array_get_Length(pAVar4,(MethodInfo *)0x0);
      iVar6 = iVar5 + -1;
      break;
    }
    goto code_?;
  case 2:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_ESI = (Enum__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle_04,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_3.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar4 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar4 == (Array *)0x0) goto code_?;
    iVar5 = mscorlib.dll::System::Array::Array_get_Length(pAVar4,(MethodInfo *)0x0);
    iVar6 = iVar5 + -1;
    break;
  case 3:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_ESI = (Enum__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle_01,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_3.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar4 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar4 == (Array *)0x0) goto code_?;
    iVar5 = mscorlib.dll::System::Array::Array_get_Length(pAVar4,(MethodInfo *)0x0);
    iVar6 = iVar5 + -1;
    break;
  case 4:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_ESI = (Enum__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_3.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar4 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar4 == (Array *)0x0) goto code_?;
    iVar5 = mscorlib.dll::System::Array::Array_get_Length(pAVar4,(MethodInfo *)0x0);
    iVar6 = iVar5 + -1;
    break;
  case 5:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_ESI = (Enum__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle_00,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_3.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar4 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar4 == (Array *)0x0) goto code_?;
    iVar5 = mscorlib.dll::System::Array::Array_get_Length(pAVar4,(MethodInfo *)0x0);
    iVar6 = iVar5 + -1;
    break;
  case 6:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_ESI = (Enum__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle_02,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_3.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar4 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar4 == (Array *)0x0) goto code_?;
    iVar5 = mscorlib.dll::System::Array::Array_get_Length(pAVar4,(MethodInfo *)0x0);
    iVar6 = iVar5 + -1;
    break;
  default:
    iVar6 = 1;
  }
  (((ProfileSettingButton *)object)->fields).maxValue = iVar6;
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  IStack_3.m_value = (((ProfileSettingButton *)object)->fields).profileSettingKey;
  pDVar7 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
           ProfileSettingsChanged;
  if (pDVar7 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)
                0x0) goto code_?;
  pDVar8 = (Delegate *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7,IStack_3.m_value,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                      );
  pEVar9 = (Enum__Class *)TypeInfo__System__Action<System::Object>;
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?();
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)object,MethodInfo__ProfileSettingButton__OnChange_System__Object_,
             (MethodInfo *)0x0);
  pAVar10 = unaff_EDI;
  unaff_ESI = (Enum__Class *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar8,(Delegate *)this_00,(MethodInfo *)0x0);
  unaff_EDI = TypeInfo__System__Action<System::Object>;
  this = (ProfileSettingButton *)
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
  ;
  if (unaff_ESI == (Enum__Class *)0x0) {
    pOVar11 = (Object *)0x0;
code_?:
    unaff_EDI = pAVar10;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__set_Item
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7,IStack_3.m_value,pOVar11,
               (MethodInfo *)this);
    unaff_ESI = (Enum__Class *)
                Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                ProfileSettingsManager_GetSettingValue
                          ((((ProfileSettingButton *)object)->fields).profileSettingKey,
                           (MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (unaff_ESI == (Enum__Class *)0x0) {
code_?:
      func_?();
    }
    else if ((Il2CppClass *)((unaff_ESI->_0).image)->codeGenModule ==
             (TypeInfo__System__Int32->_0).element_class) {
      pEVar9 = (Enum__Class *)&UNK_?;
      pEVar12 = unaff_ESI;
      piVar13 = (int *)func_?();
      unaff_ESI = pEVar9;
      pBVar2 = (((ProfileSettingButton *)object)->fields).button;
      if ((((ProfileSettingButton *)object)->fields).isIncrease == 0) {
        value_00 = (((ProfileSettingButton *)object)->fields).minValue < *piVar13;
      }
      else {
        value_00 = *piVar13 < (((ProfileSettingButton *)object)->fields).maxValue;
      }
      object = pEVar12;
      if (pBVar2 != (Button *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                  ((Selectable *)pBVar2,value_00,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pEVar9 = unaff_ESI;
    func_?();
  }
  else {
    pOVar11 = (Object *)func_?();
    if (pOVar11 != (Object *)0x0) goto code_?;
  }
  uVar14 = func_?();
  bVar15 = (byte)uVar14;
  pbVar16 = (byte *)CONCAT31((int3)((uint6)uVar14 >> 8),bVar15 + 0xbc);
  pcVar17 = (char *)((int)&(unaff_ESI->_0).parent + 1);
  *pcVar17 = *pcVar17 + (char)object + ((byte)(bVar15 - 0x22) < 0x22);
  pEVar12 = (Enum__Class *)0x1e10222d;
  bVar18 = (byte)((uint6)uVar14 >> 0x20) & *pbVar16 & *pbVar16;
  if ((POPCOUNT(bVar18) & 1U) == 0) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  args_00 = (Object__Array *)((int)&(unaff_EDI->_0).image + 1);
  uVar20 = in(CONCAT11((char)((uint6)uVar14 >> 0x28) + (char)((uint)object >> 8) + (bVar15 < 0x22),
                      bVar18));
  *(undefined1 *)&(unaff_EDI->_0).image = uVar20;
  iVar6 = (int)&(object->_0).image +
           *(int *)((int)&object[0x52814f].vtable.System_IConvertible_ToSingle.methodPtr + 1);
  func_?();
  func_?();
  func_?();
  func_?();
  uRam_? = 1;
  piVar13 = (int *)(this->fields).profileSettingKey;
  switch((this->fields).profileSettingButtonType) {
  case 1:
    if (method != (MethodInfo *)0x0) {
      if (*(Il2CppClass **)(method->methodPointer + 0x20) !=
          (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class)
      goto code_?;
      pEVar12 = (Enum__Class *)0x1e10222d;
      site = (CallSite_1_System_Object_ *)&UNK_?;
      args = (Object__Array *)method;
      pTVar21 = (TargetFrameRateValue__Enum *)func_?();
      value = *pTVar21;
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        func_?();
        func_?(&StringLiteral__of_display_frequency);
        cRam_? = '\x01';
      }
      IStack_3.m_value = 0;
      this = (ProfileSettingButton *)0x0;
      if (value == TargetFrameRateValue__Enum_Unlimited) {
        TM::TM__(StringLiteral_Unlimited,(MethodInfo *)0x0);
      }
      else if (value == TargetFrameRateValue__Enum_SameAsScreenHz) {
        TM::TM__(StringLiteral_Match_display_frequency,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar11 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                  CallSiteBinder_BindDelegate((CallSiteBinder *)0x0,site,args,(MethodInfo *)pEVar12)
        ;
        if (pOVar11 != (Object *)0x0) {
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pOVar11 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                    CallSiteBinder_BindDelegate
                              ((CallSiteBinder *)0x0,(CallSite_1_System_Object_ *)pEVar12,args_00,
                               (MethodInfo *)in_stack_1);
          if ((pOVar11 != (Object *)0x1) || (cVar22 = func_?(), cVar22 != '\0')) {
            if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this = (ProfileSettingButton *)
                   Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                   ProfileSettingsManager_TargetFrameRateToInt(value,(MethodInfo *)0x0);
            pSVar23 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
            TM::TM__(pSVar23,(MethodInfo *)0x0);
            pEVar12 = pEVar9;
            goto code_?;
          }
        }
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        IStack_3.m_value =
             Assets::Scripts::ProfileSettings::ProfileSettingsManager::
             ProfileSettingsManager_TargetFrameRateToVSyncValue(value,(MethodInfo *)0x0);
        pSVar23 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
        pSVar23 = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral__1_,pSVar23,StringLiteral__of_display_frequency,
                             (MethodInfo *)0x0);
        TM::TM__(pSVar23,(MethodInfo *)0x0);
        pEVar12 = unaff_EBP;
      }
      goto code_?;
    }
    break;
  case 2:
    if (method != (MethodInfo *)0x0) {
      if (*(Il2CppClass **)(method->methodPointer + 0x20) !=
          (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).element_class)
      goto code_?;
      func_?();
      this_01 = (Enum *)&stack0xffffffec;
code_?:
      pSVar23 = mscorlib.dll::System::Enum::Enum_ToString(this_01,(MethodInfo *)0x0);
      TM::TM__(pSVar23,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 3:
    if (method != (MethodInfo *)0x0) {
      if (*(Il2CppClass **)(method->methodPointer + 0x20) ==
          (TypeInfo__UnityEngine__FilterMode->_0).element_class) {
        func_?();
        this_01 = (Enum *)&stack0xffffffe0;
        goto code_?;
      }
code_?:
      func_?();
    }
    break;
  case 4:
    if (method != (MethodInfo *)0x0) {
      if (*(Il2CppClass **)(method->methodPointer + 0x20) !=
          (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).element_class)
      goto code_?;
      func_?();
      mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffd4,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 5:
    if (method != (MethodInfo *)0x0) {
      if (*(Il2CppClass **)(method->methodPointer + 0x20) !=
          (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).element_class)
      goto code_?;
      func_?();
      mscorlib.dll::System::Enum::Enum_ToString
                ((Enum *)&stack0xffffffc8,
                 (MethodInfo *)TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel);
      goto code_?;
    }
    break;
  case 6:
    if (method != (MethodInfo *)0x0) {
      if (*(Il2CppClass **)(method->methodPointer + 0x20) ==
          (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
        func_?();
        this_01 = (Enum *)&stack0xffffffbc;
        goto code_?;
      }
      goto code_?;
    }
    break;
  default:
code_?:
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 0x318))();
      return;
    }
  }
  uVar24 = func_?();
  pbVar16 = (byte *)((ulonglong)uVar24 >> 0x20);
  *(char *)piVar13 = (char)uVar24;
  *pbVar16 = *pbVar16 ^ (byte)((ulonglong)uVar24 >> 8);
  pbVar16 = (byte *)uVar24 + 0x32;
  bVar15 = (byte)((ulonglong)uVar24 >> 0x20);
  *pbVar16 = *pbVar16 + bVar15;
  puVar25 = (uint *)CONCAT31((int3)((ulonglong)uVar24 >> 0x28),bVar15 & *(byte *)uVar24);
  pAVar10 = (Action_1_Object___Class *)((int)piVar13 + 2);
  pDVar8 = (Delegate *)((int)&(pEVar12->_0).image + 1);
  *(char *)puVar25 = (char)*puVar25 + (char)((ulonglong)uVar24 >> 0x28);
  uVar26 = (uint)&stack0xffffffd8 ^ *puVar25;
  in_stack_27 = in_stack_27 + (char)((uint)iVar6 >> 8);
  *(undefined1 **)(uVar26 - 4) = &stack0xfffffffc;
  puVar28 = (undefined1 *)(uVar26 - 8);
  *(undefined4 *)(uVar26 - 8) = extraout_ECX;
  if (cRam_? == '\0') {
    *(Action_1_Object___Class ***)(uVar26 - 0xc) = &TypeInfo__System__Action<System::Object>;
    puVar29 = (undefined1 *)(uVar26 - 0x10);
    *(undefined **)(uVar26 - 0x10) = &UNK_?;
    func_?();
    *(MethodInfo ***)(puVar29 + -4) =
         &
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
    ;
    puVar30 = puVar29 + -8;
    *(undefined **)(puVar29 + -8) = &UNK_?;
    func_?();
    *(MethodInfo ***)(puVar30 + -4) =
         &
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    puVar31 = puVar30 + -8;
    *(undefined **)(puVar30 + -8) = &UNK_?;
    func_?();
    *(ProfileSettingsManager__Class ***)(puVar31 + -4) =
         &TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager;
    puVar32 = puVar31 + -8;
    *(undefined **)(puVar31 + -8) = &UNK_?;
    func_?();
    *(MethodInfo ***)(puVar32 + -4) = &MethodInfo__ProfileSettingsValue__OnChange_System__Object_;
    puVar33 = puVar32 + -8;
    *(undefined **)(puVar32 + -8) = &UNK_?;
    func_?();
    puVar28 = puVar33 + 0x14;
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    *(ProfileSettingsManager__Class **)(puVar28 + -4) =
         TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager;
    puVar34 = puVar28 + -8;
    *(undefined **)(puVar28 + -8) = &UNK_?;
    func_?();
    puVar28 = puVar34 + 4;
  }
  pPVar35 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields;
  *(int *)(puVar28 + -4) = iVar6;
  *(Delegate **)(puVar28 + -8) = pDVar8;
  *(Action_1_Object___Class **)(puVar28 + -0xc) = pAVar10;
  pDVar7 = pPVar35->ProfileSettingsChanged;
  uVar36 = *(undefined4 *)(*(int *)(uVar26 + 4) + 0x10);
  *(undefined4 *)(uVar26 - 8) = uVar36;
  if (pDVar7 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)
                0x0) {
    puVar37 = puVar28 + -0x10;
    *(undefined **)(puVar28 + -0x10) = &UNK_?;
    func_?();
code_?:
    *(Action_1_Object___Class **)(puVar37 + -4) = pAVar10;
    *(Delegate **)(puVar37 + -8) = pDVar8;
    *(undefined **)(puVar37 + -0xc) = &UNK_?;
    func_?();
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  *(MethodInfo **)(puVar28 + -0x10) =
       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
  ;
  *(undefined4 *)(puVar28 + -0x14) = uVar36;
  *(Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ **)
   (puVar28 + -0x18) = pDVar7;
  *(undefined **)(puVar28 + -0x1c) = &UNK_?;
  pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      (*(Dictionary_2_System_Int32Enum_System_Object_ **)(puVar28 + -0x18),
                       *(Int32Enum__Enum *)(puVar28 + -0x14),*(MethodInfo **)(puVar28 + -0x10));
  *(Action_1_Object___Class **)(puVar28 + -0x10) = TypeInfo__System__Action<System::Object>;
  puVar38 = puVar28 + -0x14;
  *(undefined **)(puVar28 + -0x14) = &UNK_?;
  uVar36 = func_?();
  *(undefined4 *)(puVar38 + -4) = 0;
  *(MethodInfo **)(puVar38 + -8) = MethodInfo__ProfileSettingsValue__OnChange_System__Object_;
  *(undefined4 *)(puVar38 + -0xc) = *(undefined4 *)(uVar26 + 4);
  *(undefined4 *)(puVar38 + -0x10) = uVar36;
  *(undefined **)(puVar38 + -0x14) = &UNK_?;
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (*(DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               **)(puVar38 + -0x10),*(Object **)(puVar38 + -0xc),*(void **)(puVar38 + -8),
             *(MethodInfo **)(puVar38 + -4));
  *(undefined4 *)(puVar38 + -4) = 0;
  *(undefined4 *)(puVar38 + -8) = uVar36;
  *(Object **)(puVar38 + -0xc) = pOVar11;
  *(undefined **)(puVar38 + -0x10) = &UNK_?;
  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Remove
                      (*(Delegate **)(puVar38 + -0xc),*(Delegate **)(puVar38 + -8),
                       *(MethodInfo **)(puVar38 + -4));
  pAVar10 = TypeInfo__System__Action<System::Object>;
  puVar39 = puVar38 + 0x2c;
  *(MethodInfo **)(uVar26 + 4) =
       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
  ;
  if (pDVar8 == (Delegate *)0x0) {
    iVar6 = 0;
  }
  else {
    *(Action_1_Object___Class **)(puVar38 + 0x28) = pAVar10;
    *(Delegate **)(puVar38 + 0x24) = pDVar8;
    puVar40 = puVar38 + 0x20;
    *(undefined **)(puVar38 + 0x20) = &UNK_?;
    iVar6 = func_?();
    puVar39 = puVar40 + 8;
    puVar37 = puVar40 + 8;
    if (iVar6 == 0) goto code_?;
  }
  *(undefined4 *)(puVar39 + -4) = *(undefined4 *)(uVar26 + 4);
  *(int *)(puVar39 + -8) = iVar6;
  *(undefined4 *)(puVar39 + -0xc) = *(undefined4 *)(uVar26 - 8);
  *(Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ **)
   (puVar39 + -0x10) = pDVar7;
  *(undefined **)(puVar39 + -0x14) = &UNK_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__set_Item
            (*(Dictionary_2_System_Int32Enum_System_Object_ **)(puVar39 + -0x10),
             *(Int32Enum__Enum *)(puVar39 + -0xc),*(Object **)(puVar39 + -8),
             *(MethodInfo **)(puVar39 + -4));
  return;
}

