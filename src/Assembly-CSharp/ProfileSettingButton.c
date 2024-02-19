
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
  uVar5 = 0;
  uVar6 = pOVar3 == (Object *)0x0;
  if ((bool)uVar6) {
    uVar4 = func_?();
  }
  else {
    pIVar7 = (pOVar3->klass->_0).element_class;
    pIVar8 = (TypeInfo__System__Int32->_0).element_class;
    uVar5 = pIVar7 < pIVar8;
    uVar6 = 0;
    if (pIVar7 == pIVar8) {
      piVar9 = (int *)func_?(pOVar3);
      pPVar10 = (ProfileSettingButton *)(pPVar1->fields).minValue;
      pPVar11 = (ProfileSettingButton *)
                ((uint)((pPVar1->fields).isIncrease != 0) * 2 + -1 + *piVar9);
      if (((int)pPVar10 <= (int)pPVar11) &&
         (pPVar12 = (ProfileSettingButton *)(pPVar1->fields).maxValue, pPVar10 = pPVar11,
         (int)pPVar12 < (int)pPVar11)) {
        pPVar10 = pPVar12;
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
        this = pPVar10;
        value = (String *)
                func_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue,&this);
        break;
      case 2:
        value = (String *)
                func_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,
                                &stack0xfffffff8);
        break;
      case 3:
        value = (String *)func_?(TypeInfo__UnityEngine__FilterMode,&stack0xfffffff4);
        break;
      case 4:
        value = (String *)
                func_?(TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel,
                                &stack0xfffffff0);
        break;
      case 5:
        pPStack_13 = pPVar10;
        value = (String *)
                func_?(TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel,&pPStack_13);
        break;
      case 6:
        pPStack_14 = pPVar10;
        value = (String *)
                func_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,
                                &pPStack_14);
      }
      if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
      }
      Assets::Scripts::ProfileSettings::ProfileSettingsManager::
      ProfileSettingsManager_SetSettingValue(PVar2,(Object *)value,(MethodInfo *)0x0);
      return;
    }
  }
  uVar15 = func_?(uVar4);
  piVar9 = (int *)uVar15;
  if ((bool)uVar5 || (bool)uVar6) {
    bVar16 = *unaff_EBX;
    bVar17 = (byte)((uint)unaff_EBX >> 8);
    bVar18 = *unaff_EBX + bVar17;
    bVar19 = CARRY1(bVar16,bVar17) || CARRY1(bVar18,uVar5);
    *unaff_EBX = bVar18 + uVar5;
    if ((CARRY1(bVar16,bVar17) || CARRY1(bVar18,uVar5)) || *unaff_EBX == 0) {
      pbVar20 = (byte *)(PVar2 + 0x22 + (int)pPVar1 * 2);
      bVar16 = *pbVar20;
      bVar17 = (byte)((uint6)uVar15 >> 0x20);
      bVar18 = *pbVar20 + bVar17;
      *pbVar20 = bVar18 + bVar19;
      in_stack_21 =
           in_stack_21 + extraout_CH + (CARRY1(bVar16,bVar17) || CARRY1(bVar18,bVar19));
      LOCK();
      *(char *)(PVar2 + 0x22) = (char)((uint6)uVar15 >> 0x28);
      UNLOCK();
      *(char *)(PVar2 + 0xcc102277) = *(char *)(PVar2 + 0xcc102277) + (char)unaff_EBX;
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
code_?:
    func_?(&TypeInfo__System__Action<System::Object>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                   );
    func_?(&MethodInfo__ProfileSettingButton__OnChange_System__Object_);
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    uRam_? = 1;
  }
  else {
    *piVar9 = (int)piVar9 + (uint)(byte)uVar5 + *piVar9;
    if (*piVar9 == 0) goto code_?;
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_00 ==
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    func_?(PVar2,pPVar1);
code_?:
    func_?();
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  pDVar23 = (Delegate *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,
                       (this->fields).profileSettingKey,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                      );
  this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<System::Object>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_01,(Object *)this,MethodInfo__ProfileSettingButton__OnChange_System__Object_,
             (MethodInfo *)0x0);
  pDVar23 = mscorlib.dll::System::Delegate::Delegate_Remove
                      (pDVar23,(Delegate *)this_01,(MethodInfo *)0x0);
  this = (ProfileSettingButton *)
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
  ;
  if (pDVar23 == (Delegate *)0x0) {
    value_00 = 0;
  }
  else {
    value_00 = func_?();
    if (value_00 == 0) goto code_?;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__set_Item
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,value_00,(Object *)value_00,
             (MethodInfo *)this);
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


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
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
  pBVar1 = (Button *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this,
                       UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                      );
  (((ProfileSettingButton *)object)->fields).button = pBVar1;
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
      IStack_2.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar3 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar3 != (Array *)0x0) {
      iVar4 = mscorlib.dll::System::Array::Array_get_Length(pAVar3,(MethodInfo *)0x0);
      iVar5 = iVar4 + -1;
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
      IStack_2.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar3 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar3 == (Array *)0x0) goto code_?;
    iVar4 = mscorlib.dll::System::Array::Array_get_Length(pAVar3,(MethodInfo *)0x0);
    iVar5 = iVar4 + -1;
    break;
  case 3:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_ESI = (Enum__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle_01,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_2.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar3 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar3 == (Array *)0x0) goto code_?;
    iVar4 = mscorlib.dll::System::Array::Array_get_Length(pAVar3,(MethodInfo *)0x0);
    iVar5 = iVar4 + -1;
    break;
  case 4:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_ESI = (Enum__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_2.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar3 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar3 == (Array *)0x0) goto code_?;
    iVar4 = mscorlib.dll::System::Array::Array_get_Length(pAVar3,(MethodInfo *)0x0);
    iVar5 = iVar4 + -1;
    break;
  case 5:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_ESI = (Enum__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle_00,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_2.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar3 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar3 == (Array *)0x0) goto code_?;
    iVar4 = mscorlib.dll::System::Array::Array_get_Length(pAVar3,(MethodInfo *)0x0);
    iVar5 = iVar4 + -1;
    break;
  case 6:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_ESI = (Enum__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle_02,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_2.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar3 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    if (pAVar3 == (Array *)0x0) goto code_?;
    iVar4 = mscorlib.dll::System::Array::Array_get_Length(pAVar3,(MethodInfo *)0x0);
    iVar5 = iVar4 + -1;
    break;
  default:
    iVar5 = 1;
  }
  (((ProfileSettingButton *)object)->fields).maxValue = iVar5;
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  IStack_2.m_value = (((ProfileSettingButton *)object)->fields).profileSettingKey;
  pDVar6 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
           ProfileSettingsChanged;
  if (pDVar6 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)
                0x0) goto code_?;
  pDVar7 = (Delegate *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,IStack_2.m_value,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                      );
  pDVar8 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?();
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (pDVar8,(Object *)object,MethodInfo__ProfileSettingButton__OnChange_System__Object_,
             (MethodInfo *)0x0);
  pAVar9 = unaff_EDI;
  unaff_ESI = (Enum__Class *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar7,(Delegate *)pDVar8,(MethodInfo *)0x0);
  unaff_EDI = TypeInfo__System__Action<System::Object>;
  this = (ProfileSettingButton *)
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
  ;
  if (unaff_ESI == (Enum__Class *)0x0) {
    pOVar10 = (Object *)0x0;
code_?:
    unaff_EDI = pAVar9;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__set_Item
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,IStack_2.m_value,pOVar10,
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
      bVar11 = 0;
      func_?();
    }
    else {
      pIVar12 = (((Type__Class *)(unaff_ESI->_0).image)->_0).element_class;
      pIVar13 = (TypeInfo__System__Int32->_0).element_class;
      bVar11 = pIVar12 < pIVar13;
      if (pIVar12 == pIVar13) {
        pEVar14 = (Enum__Class *)&UNK_?;
        pEVar15 = unaff_ESI;
        piVar16 = (int *)func_?();
        unaff_ESI = pEVar14;
        if ((((ProfileSettingButton *)object)->fields).isIncrease == 0) {
          value_00 = (((ProfileSettingButton *)object)->fields).minValue < *piVar16;
        }
        else {
          value_00 = *piVar16 < (((ProfileSettingButton *)object)->fields).maxValue;
        }
        pBVar1 = (((ProfileSettingButton *)object)->fields).button;
        object = pEVar15;
        if (pBVar1 != (Button *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                    ((Selectable *)pBVar1,value_00,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
    func_?();
  }
  else {
    pOVar10 = (Object *)func_?();
    bVar11 = 0;
    if (pOVar10 != (Object *)0x0) goto code_?;
  }
  pEVar14 = unaff_ESI;
  uVar17 = func_?();
  bVar18 = (byte)uVar17;
  in_AF = 9 < (bVar18 & 0xf) | in_AF;
  uVar19 = (undefined3)((uint)uVar17 >> 8);
  bVar11 = 0x99 < bVar18 | bVar11;
  bVar20 = bVar18 + in_AF * -6 + bVar11 * -0x60;
  pIVar21 = (Il2CppImage *)CONCAT31(uVar19,bVar20);
  bVar18 = bRam_?;
  if ((POPCOUNT(bVar20) & 1U) == 0) {
    pbVar22 = (byte *)((int)&unaff_EDI[-0xed94f]._1.thread_static_fields_size + 3);
    bVar23 = *pbVar22;
    bVar24 = *pbVar22;
    *pbVar22 = bVar24 + extraout_CL + bVar11;
    bVar18 = *pbVar22;
    if ((POPCOUNT(*pbVar22) & 1U) == 0) {
      pp_Var1 = &(unaff_EDI->_1).genericContainerHandle;
      *(byte *)pp_Var1 =
           *(char *)pp_Var1 + extraout_CL +
           (CARRY1(bVar23,extraout_CL) || CARRY1(bVar24 + extraout_CL,bVar11));
      if ((int)pIVar21 < (int)(unaff_EDI->_0).image) {
        in_AF = 9 < (bVar20 & 0xf) | in_AF;
        uVar25 = CONCAT31(uVar19,bVar20 + in_AF * '\x06') & 0xffffff0f;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(CONCAT22((short)(uVar25 >> 0x10),
                              CONCAT11((char)((uint)uVar17 >> 8) + in_AF,(char)uVar25)) + -0x14))();
        return;
      }
      pcVar26 = (char *)((int)&(unaff_EDI->_0).gc_desc * 2 + -0x3333efde);
      *pcVar26 = *pcVar26 + extraout_CL + (pIVar21 < (unaff_EDI->_0).image);
      pcVar27 = (code *)swi(3);
      (*pcVar27)();
      return;
    }
  }
  if (bVar18 == 0) {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
    func_?(&::StringLiteral__);
    bRam_? = 1;
  }
  piVar16 = (int *)(this->fields).profileSettingKey;
  switch((this->fields).profileSettingButtonType) {
  case 1:
    if (method != (MethodInfo *)0x0) {
      if (*(Il2CppClass **)(method->methodPointer + 0x20) !=
          (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class)
      goto code_?;
      site = (CallSite_1_System_Object_ *)&UNK_?;
      args = (Object__Array *)method;
      pTVar28 = (TargetFrameRateValue__Enum *)func_?();
      value = *pTVar28;
      if (cRam_? == '\0') {
        func_?();
        func_?(&StringLiteral__1_);
        func_?(&StringLiteral_Unlimited);
        func_?(&StringLiteral_Match_display_frequency);
        func_?(&StringLiteral__of_display_frequency);
        cRam_? = '\x01';
      }
      IStack_2.m_value = 0;
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
        pOVar10 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                  CallSiteBinder_BindDelegate
                            ((CallSiteBinder *)0x0,site,args,(MethodInfo *)unaff_ESI);
        if (pOVar10 != (Object *)0x0) {
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pOVar10 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                    CallSiteBinder_BindDelegate
                              ((CallSiteBinder *)0x0,(CallSite_1_System_Object_ *)unaff_ESI,
                               (Object__Array *)unaff_EDI,(MethodInfo *)pEVar14);
          if ((pOVar10 != (Object *)0x1) || (cVar29 = func_?(), cVar29 != '\0')) {
            if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this = (ProfileSettingButton *)
                   Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                   ProfileSettingsManager_TargetFrameRateToInt(value,(MethodInfo *)0x0);
            pSVar30 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
            TM::TM__(pSVar30,(MethodInfo *)0x0);
            goto code_?;
          }
        }
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        IStack_2.m_value =
             Assets::Scripts::ProfileSettings::ProfileSettingsManager::
             ProfileSettingsManager_TargetFrameRateToVSyncValue(value,(MethodInfo *)0x0);
        pSVar30 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
        pSVar30 = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral__1_,pSVar30,StringLiteral__of_display_frequency,
                             (MethodInfo *)0x0);
        TM::TM__(pSVar30,(MethodInfo *)0x0);
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
      this_00 = (Enum *)&stack0xffffffec;
code_?:
      pSVar30 = mscorlib.dll::System::Enum::Enum_ToString(this_00,(MethodInfo *)0x0);
      TM::TM__(pSVar30,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 3:
    if (method != (MethodInfo *)0x0) {
      if (*(Il2CppClass **)(method->methodPointer + 0x20) ==
          (TypeInfo__UnityEngine__FilterMode->_0).element_class) {
        func_?();
        this_00 = (Enum *)&stack0xffffffe0;
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
      mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 6:
    if (method != (MethodInfo *)0x0) {
      if (*(Il2CppClass **)(method->methodPointer + 0x20) ==
          (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
        func_?();
        this_00 = (Enum *)&stack0xffffffbc;
        goto code_?;
      }
      goto code_?;
    }
    break;
  default:
code_?:
    if (piVar16 != (int *)0x0) {
      (**(code **)(*piVar16 + 0x318))();
      return;
    }
  }
  uVar31 = func_?();
  bVar11 = *(byte *)((int)piVar16 + 0x22);
  *(byte *)extraout_EDX = (byte)*extraout_EDX & 0x10;
  *extraout_EDX = *extraout_EDX & 0x22817410;
  puVar32 = (uint *)CONCAT31((int3)((uint)extraout_EDX >> 8),
                             (char)extraout_EDX +
                             (char)uVar31 + (char)((ushort)uVar31 >> 8) +
                             ((byte)((uint)object >> 8) < bVar11));
  *puVar32 = *puVar32 & 0x22820d10;
  in((short)puVar32);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    func_?(&MethodInfo__ProfileSettingsValue__OnChange_System__Object_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pDVar6 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
           ProfileSettingsChanged;
  IStack_2.m_value = (this->fields).profileSettingButtonType;
  if (pDVar6 == (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)
                0x0) {
    func_?();
code_?:
    func_?();
    pcVar27 = (code *)swi(3);
    (*pcVar27)();
    return;
  }
  pDVar7 = (Delegate *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,IStack_2.m_value,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                      );
  pDVar8 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<System::Object>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (pDVar8,(Object *)this,MethodInfo__ProfileSettingsValue__OnChange_System__Object_,
             (MethodInfo *)0x0);
  pDVar7 = mscorlib.dll::System::Delegate::Delegate_Remove
                      (pDVar7,(Delegate *)pDVar8,(MethodInfo *)0x0);
  this = (ProfileSettingButton *)
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
  ;
  if (pDVar7 == (Delegate *)0x0) {
    pOVar10 = (Object *)0x0;
  }
  else {
    pOVar10 = (Object *)func_?();
    if (pOVar10 == (Object *)0x0) goto code_?;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__set_Item
            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,IStack_2.m_value,pOVar10,
             (MethodInfo *)this);
  return;
}

