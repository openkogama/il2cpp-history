
/* Void OnChange(Object) */

void Assembly-CSharp.dll::ProfileSettingButton::ProfileSettingButton_OnChange
               (ProfileSettingButton *this,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (value != (Object *)0x0) {
    if ((value->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    func_?();
    if ((this->fields).button != (Button *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      bVar2 = UnityEngine.UI.dll::UnityEngine::UI::SetPropertyUtility::SetPropertyUtility_SetStruct
                        (&(in_stack_3->fields).m_Interactable,in_stack_4,
                         bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<bool>_System__Boolean___bool_
                        );
      if (bVar2 != 0) {
        if ((in_stack_3->fields).m_Interactable == 0) {
          if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor == 0
             ) {
            func_?();
          }
          pEVar5 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                   EventSystem_get_current((MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pEVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor ==
                0) {
              func_?();
            }
            pEVar5 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                     EventSystem_get_current((MethodInfo *)0x0);
            if (pEVar5 == (EventSystem *)0x0) goto code_?;
            x = (pEVar5->fields).m_CurrentSelected;
            y = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)in_stack_3,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)x,(Object_1 *)y,(MethodInfo *)0x0);
            if (bVar2 != 0) {
              if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor
                  == 0) {
                func_?();
              }
              pEVar5 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                       EventSystem_get_current((MethodInfo *)0x0);
              if (pEVar5 == (EventSystem *)0x0) goto code_?;
              UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
              EventSystem_SetSelectedGameObject_1(pEVar5,(GameObject *)0x0,(MethodInfo *)0x0);
            }
          }
        }
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_OnSetProperty
                  (in_stack_3,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  uVar6 = func_?(&puStack_7);
  func_?(uVar6);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnClick() */

void Assembly-CSharp.dll::ProfileSettingButton::ProfileSettingButton_OnClick
               (ProfileSettingButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
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
  bVar4 = 0;
  if (pOVar3 == (Object *)0x0) {
    pOVar3 = (Object *)func_?();
  }
  else {
    pIVar5 = (pOVar3->klass->_0).element_class;
    pIVar6 = (TypeInfo__System__Int32->_0).element_class;
    bVar4 = pIVar5 < pIVar6;
    if (pIVar5 == pIVar6) {
      piVar7 = (int *)func_?(pOVar3);
      pPVar8 = (ProfileSettingButton *)(pPVar1->fields).minValue;
      pPVar9 = (ProfileSettingButton *)
                ((uint)((pPVar1->fields).isIncrease != 0) * 2 + -1 + *piVar7);
      if (((int)pPVar8 <= (int)pPVar9) &&
         (pPVar10 = (ProfileSettingButton *)(pPVar1->fields).maxValue, pPVar8 = pPVar9,
         (int)pPVar10 < (int)pPVar9)) {
        pPVar8 = pPVar10;
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
        this = pPVar8;
        value = (String *)
                func_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue,&this);
        break;
      case 2:
        pPStack_11 = pPVar8;
        value = (String *)
                func_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,&pPStack_11)
        ;
        break;
      case 3:
        pPStack_12 = pPVar8;
        value = (String *)func_?(TypeInfo__UnityEngine__FilterMode,&pPStack_12);
        break;
      case 4:
        pPStack_13 = pPVar8;
        value = (String *)
                func_?(TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel,
                                &pPStack_13);
        break;
      case 5:
        pPStack_14 = pPVar8;
        value = (String *)
                func_?(TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel,&pPStack_14);
        break;
      case 6:
        pPStack_15 = pPVar8;
        value = (String *)
                func_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,
                                &pPStack_15);
      }
      if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      Assets::Scripts::ProfileSettings::ProfileSettingsManager::
      ProfileSettingsManager_SetSettingValue(PVar2,(Object *)value,(MethodInfo *)0x0);
      return;
    }
  }
  uVar16 = func_?(pOVar3);
  puVar17 = (undefined4 *)((ulonglong)uVar16 >> 0x20);
  LOCK();
  uVar18 = *puVar17;
  *puVar17 = &stack0xffffffe4;
  UNLOCK();
  bVar19 = *unaff_EBX;
  bVar20 = (byte)((uint)unaff_EBX >> 8);
  bVar21 = *unaff_EBX + bVar20;
  *unaff_EBX = bVar21 + bVar4;
  LOCK();
  *puVar17 = uVar18;
  UNLOCK();
  pcVar22 = (char *)(PVar2 + 0x22 + (int)uVar16 * 4);
  *pcVar22 = *pcVar22 + (char)((ulonglong)uVar16 >> 0x20) +
            (CARRY1(bVar19,bVar20) || CARRY1(bVar21,bVar4));
  LOCK();
  *(char *)(PVar2 + 0x879f1022) = (char)uVar16;
  UNLOCK();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
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


/* Void Start() */

void Assembly-CSharp.dll::ProfileSettingButton::ProfileSettingButton_Start
               (ProfileSettingButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::Object>);
    func_?(&TypeRef__MV__WorldObject__MetaData__AnistropicFilteringLevel);
    func_?(&TypeRef__MV__WorldObject__MetaData__AntiAliasingLevel);
    func_?(&
                    UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                   );
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeRef__UnityEngine__FilterMode);
    func_?(&TypeRef__MV__WorldObject__MetaData__LightingQualityLevel);
    func_?(&MethodInfo__ProfileSettingButton__OnChange_System__Object_);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&TypeRef__MV__WorldObject__MetaData__TargetFrameRateValue);
    func_?(&TypeRef__MV__WorldObject__MetaData__TextureQualityLevel);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pBVar1 = (Button *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this,
                       UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                      );
  (this->fields).button = pBVar1;
  func_?(&(this->fields).button,pBVar1);
  (this->fields).minValue = 0;
  (this->fields).isIncrease = (this->fields).profileSettingButtonType == 0;
  handle_04 = TypeRef__MV__WorldObject__MetaData__TextureQualityLevel;
  handle_03 = TypeRef__MV__WorldObject__MetaData__TargetFrameRateValue;
  handle_02 = TypeRef__MV__WorldObject__MetaData__LightingQualityLevel;
  handle_01 = TypeRef__UnityEngine__FilterMode;
  handle_00 = TypeRef__MV__WorldObject__MetaData__AntiAliasingLevel;
  handle = TypeRef__MV__WorldObject__MetaData__AnistropicFilteringLevel;
  switch((this->fields).profileSettingKey) {
  case 1:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    unaff_ESI = (Delegate *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle_03,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Enum);
    }
    pAVar2 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar2 != (Array *)0x0) {
      iVar3 = mscorlib.dll::System::Array::Array_get_Length(pAVar2,(MethodInfo *)0x0);
      iVar4 = iVar3 + -1;
      break;
    }
    goto code_?;
  case 2:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    unaff_ESI = (Delegate *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle_04,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Enum);
    }
    pAVar2 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar2 == (Array *)0x0) goto code_?;
    iVar3 = mscorlib.dll::System::Array::Array_get_Length(pAVar2,(MethodInfo *)0x0);
    iVar4 = iVar3 + -1;
    break;
  case 3:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    unaff_ESI = (Delegate *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle_01,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Enum);
    }
    pAVar2 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar2 == (Array *)0x0) goto code_?;
    iVar3 = mscorlib.dll::System::Array::Array_get_Length(pAVar2,(MethodInfo *)0x0);
    iVar4 = iVar3 + -1;
    break;
  case 4:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    unaff_ESI = (Delegate *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Enum);
    }
    pAVar2 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar2 == (Array *)0x0) goto code_?;
    iVar3 = mscorlib.dll::System::Array::Array_get_Length(pAVar2,(MethodInfo *)0x0);
    iVar4 = iVar3 + -1;
    break;
  case 5:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    unaff_ESI = (Delegate *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle_00,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Enum);
    }
    pAVar2 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar2 == (Array *)0x0) goto code_?;
    iVar3 = mscorlib.dll::System::Array::Array_get_Length(pAVar2,(MethodInfo *)0x0);
    iVar4 = iVar3 + -1;
    break;
  case 6:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    unaff_ESI = (Delegate *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle_02,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Enum);
    }
    pAVar2 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar2 == (Array *)0x0) goto code_?;
    iVar3 = mscorlib.dll::System::Array::Array_get_Length(pAVar2,(MethodInfo *)0x0);
    iVar4 = iVar3 + -1;
    break;
  default:
    iVar4 = 1;
  }
  (this->fields).maxValue = iVar4;
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  key = (this->fields).profileSettingKey;
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_00 ==
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
code_?:
    bVar5 = 0;
    func_?();
    pIVar6 = extraout_ECX;
  }
  else {
    pDVar7 = (Delegate *)
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
    pAVar8 = unaff_EDI;
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar7,(Delegate *)this_01,(MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    unaff_EDI = TypeInfo__System__Action<System::Object>;
    if (unaff_ESI == (Delegate *)0x0) {
      value_00 = (Object *)0x0;
    }
    else {
      value_00 = (Object *)func_?(unaff_ESI,TypeInfo__System__Action<System::Object>);
      bVar5 = 0;
      if (value_00 == (Object *)0x0) goto code_?;
    }
    unaff_EDI = pAVar8;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__set_Item
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,value_00,method_00);
    unaff_ESI = (Delegate *)
                Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                ProfileSettingsManager_GetSettingValue
                          ((this->fields).profileSettingKey,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Int32);
      cRam_? = '\x01';
    }
    if (unaff_ESI == (Delegate *)0x0) goto code_?;
    pIVar9 = (((Type__Class *)unaff_ESI->klass)->_0).element_class;
    pIVar10 = (TypeInfo__System__Int32->_0).element_class;
    bVar5 = pIVar9 < pIVar10;
    pIVar6 = TypeInfo__System__Int32;
    if (pIVar9 == pIVar10) {
      pDVar7 = (Delegate *)&UNK_?;
      piVar11 = (int *)func_?(unaff_ESI);
      unaff_ESI = pDVar7;
      if ((this->fields).isIncrease == 0) {
        value = (this->fields).minValue < *piVar11;
      }
      else {
        value = *piVar11 < (this->fields).maxValue;
      }
      pBVar1 = (this->fields).button;
      if (pBVar1 != (Button *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                  ((Selectable *)pBVar1,value,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?(unaff_ESI,pIVar6);
code_?:
  uVar12 = func_?(unaff_ESI,unaff_EDI);
  bVar13 = (byte)uVar12;
  bVar5 = 0x99 < bVar13 | bVar5;
  pIVar14 = (Il2CppImage *)
            CONCAT31((int3)((ulonglong)uVar12 >> 8),
                     bVar13 + (9 < (bVar13 & 0xf) | in_AF) * -6 + bVar5 * -0x60);
  pbVar15 = (byte *)((int)&unaff_EDI[-0xed94f]._1.property_count + 1);
  bVar13 = *pbVar15;
  bVar16 = (byte)extraout_ECX_00;
  bVar17 = *pbVar15;
  *pbVar15 = bVar17 + bVar16 + bVar5;
  puVar18 = &unaff_EDI[-1]._1.interfaces_count;
  *(byte *)puVar18 = (char)*puVar18 + bVar16 + (CARRY1(bVar13,bVar16) || CARRY1(bVar17 + bVar16,bVar5))
  ;
  pIVar19 = (unaff_EDI->_0).image;
  *(undefined2 *)
   CONCAT31((int3)((ulonglong)uVar12 >> 0x28),
            (byte)((ulonglong)uVar12 >> 0x20) & *(byte *)&pIVar14->name) = in_FS;
  pcVar20 = (char *)(extraout_ECX_00 * 4 + -0x3333efde);
  *pcVar20 = *pcVar20 + bVar16 + (pIVar14 < pIVar19);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}

