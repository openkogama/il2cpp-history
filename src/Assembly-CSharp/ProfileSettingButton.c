
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
  object = this;
  pBVar1 = (Button *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      ((Component *)this,
                       UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                      );
  (object->fields).button = pBVar1;
  func_?();
  (object->fields).minValue = 0;
  (object->fields).isIncrease = (object->fields).profileSettingButtonType == 0;
  handle_04 = TypeRef__MV__WorldObject__MetaData__TextureQualityLevel;
  handle_03 = TypeRef__MV__WorldObject__MetaData__TargetFrameRateValue;
  handle_02 = TypeRef__MV__WorldObject__MetaData__LightingQualityLevel;
  handle_01 = TypeRef__UnityEngine__FilterMode;
  handle_00 = TypeRef__MV__WorldObject__MetaData__AntiAliasingLevel;
  handle = TypeRef__MV__WorldObject__MetaData__AnistropicFilteringLevel;
  switch((object->fields).profileSettingKey) {
  case 1:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle_03,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_3.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar4 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar2,(MethodInfo *)0x0);
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
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle_04,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_3.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar4 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar2,(MethodInfo *)0x0);
    if (pAVar4 == (Array *)0x0) goto code_?;
    iVar5 = mscorlib.dll::System::Array::Array_get_Length(pAVar4,(MethodInfo *)0x0);
    iVar6 = iVar5 + -1;
    break;
  case 3:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle_01,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_3.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar4 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar2,(MethodInfo *)0x0);
    if (pAVar4 == (Array *)0x0) goto code_?;
    iVar5 = mscorlib.dll::System::Array::Array_get_Length(pAVar4,(MethodInfo *)0x0);
    iVar6 = iVar5 + -1;
    break;
  case 4:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_3.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar4 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar2,(MethodInfo *)0x0);
    if (pAVar4 == (Array *)0x0) goto code_?;
    iVar5 = mscorlib.dll::System::Array::Array_get_Length(pAVar4,(MethodInfo *)0x0);
    iVar6 = iVar5 + -1;
    break;
  case 5:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle_00,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_3.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar4 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar2,(MethodInfo *)0x0);
    if (pAVar4 == (Array *)0x0) goto code_?;
    iVar5 = mscorlib.dll::System::Array::Array_get_Length(pAVar4,(MethodInfo *)0x0);
    iVar6 = iVar5 + -1;
    break;
  case 6:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle_02,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_3.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar4 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar2,(MethodInfo *)0x0);
    if (pAVar4 == (Array *)0x0) goto code_?;
    iVar5 = mscorlib.dll::System::Array::Array_get_Length(pAVar4,(MethodInfo *)0x0);
    iVar6 = iVar5 + -1;
    break;
  default:
    iVar6 = 1;
  }
  (object->fields).maxValue = iVar6;
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  IStack_3.m_value = (object->fields).profileSettingKey;
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_00 ==
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0)
  goto code_?;
  pDVar7 = (Delegate *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,IStack_3.m_value,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                      );
  this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?();
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_01,(Object *)object,MethodInfo__ProfileSettingButton__OnChange_System__Object_,
             (MethodInfo *)0x0);
  pAVar8 = unaff_EDI;
  pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                      (pDVar7,(Delegate *)this_01,(MethodInfo *)0x0);
  unaff_EDI = TypeInfo__System__Action<System::Object>;
  this = (ProfileSettingButton *)
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
  ;
  if (pDVar7 == (Delegate *)0x0) {
    pOVar9 = (Object *)0x0;
code_?:
    unaff_EDI = pAVar8;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__set_Item
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,IStack_3.m_value,pOVar9,
               (MethodInfo *)this);
    pOVar9 = Assets::Scripts::ProfileSettings::ProfileSettingsManager::
              ProfileSettingsManager_GetSettingValue
                        ((object->fields).profileSettingKey,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pOVar9 == (Object *)0x0) {
code_?:
      bVar10 = 0;
      func_?();
    }
    else {
      pIVar11 = (pOVar9->klass->_0).element_class;
      pIVar12 = (TypeInfo__System__Int32->_0).element_class;
      bVar10 = pIVar11 < pIVar12;
      if (pIVar11 == pIVar12) {
        piVar13 = (int *)func_?();
        if ((object->fields).isIncrease == 0) {
          value_00 = (object->fields).minValue < *piVar13;
        }
        else {
          value_00 = *piVar13 < (object->fields).maxValue;
        }
        pBVar1 = (object->fields).button;
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
    pOVar9 = (Object *)func_?();
    bVar10 = 0;
    if (pOVar9 != (Object *)0x0) goto code_?;
  }
  uVar14 = func_?();
  bVar15 = (byte)uVar14;
  in_AF = 9 < (bVar15 & 0xf) | in_AF;
  uVar16 = (undefined3)((uint)uVar14 >> 8);
  bVar10 = 0x99 < bVar15 | bVar10;
  bVar17 = bVar15 + in_AF * -6 + bVar10 * -0x60;
  pIVar18 = (Il2CppImage *)CONCAT31(uVar16,bVar17);
  bVar15 = bRam_?;
  if ((POPCOUNT(bVar17) & 1U) == 0) {
    pbVar19 = (byte *)((int)&unaff_EDI[-0xed94f]._1.thread_static_fields_size + 3);
    bVar20 = *pbVar19;
    bVar21 = *pbVar19;
    *pbVar19 = bVar21 + extraout_CL + bVar10;
    bVar15 = *pbVar19;
    if ((POPCOUNT(*pbVar19) & 1U) == 0) {
      pp_Var1 = &(unaff_EDI->_1).genericContainerHandle;
      *(byte *)pp_Var1 =
           *(char *)pp_Var1 + extraout_CL +
           (CARRY1(bVar20,extraout_CL) || CARRY1(bVar21 + extraout_CL,bVar10));
      if ((int)pIVar18 < (int)(unaff_EDI->_0).image) {
        in_AF = 9 < (bVar17 & 0xf) | in_AF;
        uVar22 = CONCAT31(uVar16,bVar17 + in_AF * '\x06') & 0xffffff0f;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(CONCAT22((short)(uVar22 >> 0x10),
                              CONCAT11((char)((uint)uVar14 >> 8) + in_AF,(char)uVar22)) + 0x1c))();
        return;
      }
      pcVar23 = (char *)((int)&(unaff_EDI->_0).gc_desc * 2 + -0x3333efde);
      *pcVar23 = *pcVar23 + extraout_CL + (pIVar18 < (unaff_EDI->_0).image);
      pcVar24 = (code *)swi(3);
      (*pcVar24)();
      return;
    }
  }
  if (bVar15 == 0) {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?(&TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel);
    func_?(&::StringLiteral__);
    bRam_? = 1;
  }
  piVar13 = (int *)(this->fields).profileSettingKey;
  switch((this->fields).profileSettingButtonType) {
  case 1:
    if (method == (MethodInfo *)0x0) goto code_?;
    if (*(Il2CppClass **)(method->methodPointer + 0x20) ==
        (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class) {
      method_00 = (MethodInfo *)&UNK_?;
      pTVar25 = (TargetFrameRateValue__Enum *)func_?();
      value = *pTVar25;
      if (cRam_? == '\0') {
        func_?();
        func_?(&StringLiteral__1_);
        func_?(&StringLiteral_Unlimited);
        func_?(&StringLiteral_Match_display_frequency);
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
        bVar26 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                 VerticalVirtualizationController`1[System::Object]::
                 VerticalVirtualizationController_1_System_Object__get_alwaysRebindOnRefresh
                           ((VerticalVirtualizationController_1_System_Object_ *)0x0,method_00);
        if ((bVar26 == 1) || ((bVar26 == 2 && (cVar27 = func_?(), cVar27 == '\0')))) {
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          IStack_3.m_value =
               Assets::Scripts::ProfileSettings::ProfileSettingsManager::
               ProfileSettingsManager_TargetFrameRateToVSyncValue(value,(MethodInfo *)0x0);
          pSVar28 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
          pSVar28 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral__1_,pSVar28,StringLiteral__of_display_frequency,
                               (MethodInfo *)0x0);
          TM::TM__(pSVar28,(MethodInfo *)0x0);
        }
        else {
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          this = (ProfileSettingButton *)
                 Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                 ProfileSettingsManager_TargetFrameRateToInt(value,(MethodInfo *)0x0);
          pSVar28 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
          TM::TM__(pSVar28,(MethodInfo *)0x0);
        }
      }
      goto code_?;
    }
    break;
  case 2:
    if (method == (MethodInfo *)0x0) goto code_?;
    if (*(Il2CppClass **)(method->methodPointer + 0x20) ==
        (TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel->_0).element_class) {
      func_?();
      this_02 = (Enum *)&stack0xffffffec;
code_?:
      pSVar28 = mscorlib.dll::System::Enum::Enum_ToString(this_02,(MethodInfo *)0x0);
      TM::TM__(pSVar28,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 3:
    if (method == (MethodInfo *)0x0) goto code_?;
    if (*(Il2CppClass **)(method->methodPointer + 0x20) ==
        (TypeInfo__UnityEngine__FilterMode->_0).element_class) {
      func_?();
      this_02 = (Enum *)&stack0xffffffe0;
      goto code_?;
    }
    break;
  case 4:
    if (method == (MethodInfo *)0x0) goto code_?;
    if (*(Il2CppClass **)(method->methodPointer + 0x20) ==
        (TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel->_0).element_class) {
      func_?();
      mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffd4,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 5:
    if (method == (MethodInfo *)0x0) goto code_?;
    if (*(Il2CppClass **)(method->methodPointer + 0x20) ==
        (TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel->_0).element_class) {
      func_?();
      mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffc8,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case 6:
    if (method == (MethodInfo *)0x0) goto code_?;
    if (*(Il2CppClass **)(method->methodPointer + 0x20) ==
        (TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel->_0).element_class) {
      func_?();
      this_02 = (Enum *)&stack0xffffffbc;
      goto code_?;
    }
    break;
  default:
code_?:
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 0x318))();
      return;
    }
    goto code_?;
  }
  func_?();
code_?:
  func_?();
  *extraout_EDX = *extraout_EDX & 0x22814110;
  *(char *)((int)piVar13 + -0x25efdd7f) = *(char *)((int)piVar13 + -0x25efdd7f) + extraout_CL_00;
  *extraout_EDX = *extraout_EDX & 0xcccccc10;
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}

