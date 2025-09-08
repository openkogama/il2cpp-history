
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
  bVar5 = 0;
  if (pOVar3 == (Object *)0x0) {
    uVar4 = func_?();
  }
  else {
    pIVar6 = (pOVar3->klass->_0).element_class;
    pIVar7 = (TypeInfo__System__Int32->_0).element_class;
    bVar5 = pIVar6 < pIVar7;
    if (pIVar6 == pIVar7) {
      piVar8 = (int *)func_?(pOVar3);
      pPVar9 = (ProfileSettingButton *)(pPVar1->fields).minValue;
      pPVar10 = (ProfileSettingButton *)
                ((uint)((pPVar1->fields).isIncrease != 0) * 2 + -1 + *piVar8);
      if (((int)pPVar9 <= (int)pPVar10) &&
         (pPVar11 = (ProfileSettingButton *)(pPVar1->fields).maxValue, pPVar9 = pPVar10,
         (int)pPVar11 < (int)pPVar10)) {
        pPVar9 = pPVar11;
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
        this = pPVar9;
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
        pPStack_12 = pPVar9;
        value = (String *)
                func_?(TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel,
                                &pPStack_12);
        break;
      case 5:
        pPStack_13 = pPVar9;
        value = (String *)
                func_?(TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel,&pPStack_13);
        break;
      case 6:
        pPStack_14 = pPVar9;
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
  ppMVar15 = (MethodInfo **)uVar4;
  uVar4 = func_?(uVar4);
  *(longlong *)((int)((ulonglong)uVar4 >> 0x20) + 0x23) = (longlong)ROUND(extraout_ST0);
  bVar16 = (byte)((uint)unaff_EBX >> 8);
  bVar17 = (byte)unaff_EBX + bVar16;
  cVar18 = bVar17 + bVar5;
  iVar19 = CONCAT31((int3)((uint)unaff_EBX >> 8),cVar18);
  if ((POPCOUNT(cVar18) & 1U) == 0) {
    in(0x5e);
    func_?();
    ppMVar15 = &
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
    ;
  }
  else {
    pcVar20 = (char *)(iVar19 + PVar2 * 2);
    *pcVar20 = *pcVar20 + (char)((ulonglong)uVar4 >> 0x20) +
              (CARRY1((byte)unaff_EBX,bVar16) || CARRY1(bVar17,bVar5));
    if ((POPCOUNT((uint)uVar4 + 0xb9efdc85 & 0xff) & 1U) == 0) {
      *(char *)(PVar2 + 0x7b) = *(char *)(PVar2 + 0x7b) + cVar18 + ((uint)uVar4 < 0x4610237b);
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
  }
  func_?(ppMVar15);
  func_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                 );
  func_?(&MethodInfo__ProfileSettingButton__OnChange_System__Object_);
  func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  uRam_? = 1;
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  key = (undefined *)(this->fields).profileSettingKey;
  if (this_00 ==
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    func_?(PVar2,pPVar1,iVar19);
code_?:
    func_?();
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  pDVar22 = (Delegate *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,(Int32Enum__Enum)key,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                      );
  this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<System::Object>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_01,(Object *)this,MethodInfo__ProfileSettingButton__OnChange_System__Object_,
             (MethodInfo *)0x0);
  pDVar22 = mscorlib.dll::System::Delegate::Delegate_Remove
                      (pDVar22,(Delegate *)this_01,(MethodInfo *)0x0);
  this = (ProfileSettingButton *)
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
  ;
  if (pDVar22 == (Delegate *)0x0) {
    pOVar3 = (Object *)0x0;
  }
  else {
    key = &UNK_?;
    pOVar3 = (Object *)func_?();
    if (pOVar3 == (Object *)0x0) goto code_?;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__set_Item
            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,(Int32Enum__Enum)key,pOVar3,
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
    ppTVar1 = &TypeInfo__System__Type;
    in_stack_2 = (TextureQualityLevel__Enum__Class **)&UNK_?;
    func_?();
    cRam_? = '\x01';
    in_stack_3 = (TargetFrameRateValue__Enum__Class **)ppTVar1;
  }
  object = (Enum__Class *)this;
  pBVar4 = (Button *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                     );
  (((ProfileSettingButton *)object)->fields).button = pBVar4;
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
      IStack_5.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar6 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    cVar7 = (int)pAVar6 < 0;
    uVar8 = pAVar6 == (Array *)0x0;
    if (!(bool)uVar8) {
      iVar9 = mscorlib.dll::System::Array::Array_get_Length(pAVar6,(MethodInfo *)0x0);
      iVar10 = iVar9 + -1;
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
      IStack_5.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar6 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    cVar7 = (int)pAVar6 < 0;
    uVar8 = true;
    if (pAVar6 == (Array *)0x0) goto code_?;
    iVar9 = mscorlib.dll::System::Array::Array_get_Length(pAVar6,(MethodInfo *)0x0);
    iVar10 = iVar9 + -2;
    break;
  case 3:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_ESI = (Enum__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle_01,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_5.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar6 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    cVar7 = (int)pAVar6 < 0;
    uVar8 = true;
    if (pAVar6 == (Array *)0x0) goto code_?;
    iVar9 = mscorlib.dll::System::Array::Array_get_Length(pAVar6,(MethodInfo *)0x0);
    iVar10 = iVar9 + -1;
    break;
  case 4:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_ESI = (Enum__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_5.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar6 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    cVar7 = (int)pAVar6 < 0;
    uVar8 = true;
    if (pAVar6 == (Array *)0x0) goto code_?;
    iVar9 = mscorlib.dll::System::Array::Array_get_Length(pAVar6,(MethodInfo *)0x0);
    iVar10 = iVar9 + -1;
    break;
  case 5:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_ESI = (Enum__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle_00,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_5.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar6 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    cVar7 = (int)pAVar6 < 0;
    uVar8 = true;
    if (pAVar6 == (Array *)0x0) goto code_?;
    iVar9 = mscorlib.dll::System::Array::Array_get_Length(pAVar6,(MethodInfo *)0x0);
    iVar10 = iVar9 + -1;
    break;
  case 6:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    unaff_ESI = (Enum__Class *)
                mscorlib.dll::System::Type::Type_GetTypeFromHandle
                          ((RuntimeTypeHandle)handle_02,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      IStack_5.m_value = (int32_t)TypeInfo__System__Enum;
      func_?();
    }
    pAVar6 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)unaff_ESI,(MethodInfo *)0x0);
    cVar7 = (int)pAVar6 < 0;
    uVar8 = true;
    if (pAVar6 == (Array *)0x0) goto code_?;
    iVar9 = mscorlib.dll::System::Array::Array_get_Length(pAVar6,(MethodInfo *)0x0);
    iVar10 = iVar9 + -1;
    break;
  default:
    iVar10 = 1;
  }
  (((ProfileSettingButton *)object)->fields).maxValue = iVar10;
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  IStack_5.m_value = (((ProfileSettingButton *)object)->fields).profileSettingKey;
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  cVar7 = (int)this_00 < 0;
  uVar8 = true;
  if (this_00 ==
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0)
  goto code_?;
  a = (Delegate *)
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__get_Item
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,IStack_5.m_value,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                );
  this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?();
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_01,(Object *)object,MethodInfo__ProfileSettingButton__OnChange_System__Object_,
             (MethodInfo *)0x0);
  pAVar11 = unaff_EDI;
  unaff_ESI = (Enum__Class *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        (a,(Delegate *)this_01,(MethodInfo *)0x0);
  unaff_EDI = TypeInfo__System__Action<System::Object>;
  this = (ProfileSettingButton *)
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
  ;
  if (unaff_ESI == (Enum__Class *)0x0) {
    pOVar12 = (Object *)0x0;
code_?:
    unaff_EDI = pAVar11;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__set_Item
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,IStack_5.m_value,pOVar12,
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
    cVar7 = (int)unaff_ESI < 0;
    uVar8 = true;
    if (unaff_ESI == (Enum__Class *)0x0) {
code_?:
      cVar13 = '\0';
      cVar14 = '\0';
      func_?();
    }
    else {
      pIVar15 = (((Type__Class *)(unaff_ESI->_0).image)->_0).element_class;
      pIVar16 = (TypeInfo__System__Int32->_0).element_class;
      cVar14 = pIVar15 < pIVar16;
      cVar13 = SBORROW4((int)pIVar15,(int)pIVar16);
      cVar7 = (int)pIVar15 - (int)pIVar16 < 0;
      uVar8 = 0;
      if (pIVar15 == pIVar16) {
        pEVar17 = (Enum__Class *)&UNK_?;
        pEVar18 = unaff_ESI;
        piVar19 = (int *)func_?();
        unaff_ESI = pEVar17;
        if ((((ProfileSettingButton *)object)->fields).isIncrease == 0) {
          value_00 = (((ProfileSettingButton *)object)->fields).minValue < *piVar19;
        }
        else {
          value_00 = *piVar19 < (((ProfileSettingButton *)object)->fields).maxValue;
        }
        pBVar4 = (((ProfileSettingButton *)object)->fields).button;
        cVar7 = (int)pBVar4 < 0;
        uVar8 = pBVar4 == (Button *)0x0;
        object = pEVar18;
        if (!(bool)uVar8) {
          UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                    ((Selectable *)pBVar4,value_00,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
    func_?();
  }
  else {
    pOVar12 = (Object *)func_?();
    cVar14 = '\0';
    cVar13 = '\0';
    cVar7 = (int)pOVar12 < 0;
    uVar8 = pOVar12 == (Object *)0x0;
    if (!(bool)uVar8) goto code_?;
  }
  uVar20 = func_?();
  iVar10 = (int)uVar20;
  out((short)((uint6)uVar20 >> 0x20),iVar10);
  if (!(bool)uVar8 && cVar13 == cVar7) {
    pcVar21 = (char *)((int)&(unaff_EDI->_1).genericContainerHandle + 3);
    *pcVar21 = *pcVar21 + extraout_CL + cVar14;
    *(int *)(iVar10 + -0x7f8eefdd) = *(int *)(iVar10 + -0x7f8eefdd) + iVar10;
    swi(4);
    *(byte *)&(object->_0).image = *(byte *)&(object->_0).image & 0x10;
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    in_stack_3 = &TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue;
    func_?();
    in_stack_2 = &TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel;
    func_?();
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  piVar19 = (int *)(this->fields).profileSettingKey;
  switch((this->fields).profileSettingButtonType) {
  case 1:
    if (method == (MethodInfo *)0x0) goto code_?;
    if (*(Il2CppClass **)(method->methodPointer + 0x20) ==
        (TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue->_0).element_class) {
      method_00 = (MethodInfo *)&UNK_?;
      args = (Object__Array *)method;
      pTVar23 = (TargetFrameRateValue__Enum *)func_?();
      value = *pTVar23;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        func_?(&StringLiteral__of_display);
        func_?(&StringLiteral__1_);
        func_?(&StringLiteral_Unlimited);
        func_?(&StringLiteral_Match_display);
        cRam_? = '\x01';
      }
      IStack_5.m_value = 0;
      this = (ProfileSettingButton *)0x0;
      pSVar24 = StringLiteral_Unlimited;
      if ((value == TargetFrameRateValue__Enum_Unlimited) ||
         (pSVar24 = StringLiteral_Match_display, value == TargetFrameRateValue__Enum_SameAsScreenHz)
         ) {
        pSVar24 = TM::TM__(pSVar24,(MethodInfo *)0x0);
        TM::TM__(pSVar24,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        pOVar12 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                  CallSiteBinder_BindDelegate
                            ((CallSiteBinder *)0x0,(CallSite_1_System_Object_ *)in_stack_2,
                             (Object__Array *)in_stack_3,method_00);
        if (pOVar12 != (Object *)0x0) {
          if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pOVar12 = System.Core.dll::System::Runtime::CompilerServices::CallSiteBinder::
                    CallSiteBinder_BindDelegate
                              ((CallSiteBinder *)0x0,(CallSite_1_System_Object_ *)method_00,args,
                               (MethodInfo *)unaff_ESI);
          if ((pOVar12 != (Object *)0x1) || (cVar7 = func_?(), cVar7 != '\0')) {
            if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this = (ProfileSettingButton *)
                   Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                   ProfileSettingsManager_TargetFrameRateToInt(value,(MethodInfo *)0x0);
            pSVar24 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
            TM::TM__(pSVar24,(MethodInfo *)0x0);
            goto code_?;
          }
        }
        if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        IStack_5.m_value =
             Assets::Scripts::ProfileSettings::ProfileSettingsManager::
             ProfileSettingsManager_TargetFrameRateToVSyncValue(value,(MethodInfo *)0x0);
        pSVar24 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_5,(MethodInfo *)0x0);
        str2 = TM::TM__(StringLiteral__of_display,(MethodInfo *)0x0);
        pSVar24 = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral__1_,pSVar24,str2,(MethodInfo *)0x0);
        TM::TM__(pSVar24,(MethodInfo *)0x0);
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
      pSVar24 = mscorlib.dll::System::Enum::Enum_ToString(this_02,(MethodInfo *)0x0);
      TM::TM__(pSVar24,(MethodInfo *)0x0);
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
    if (piVar19 != (int *)0x0) {
      (**(code **)(*piVar19 + 0x318))();
      return;
    }
    goto code_?;
  }
  func_?();
code_?:
  func_?();
  *(byte *)&(object->_0).image = *(byte *)&(object->_0).image & 0x10;
  cVar7 = (char)((uint)object >> 8);
  *(char *)&(object->_0).image = *(char *)&(object->_0).image + cVar7;
  pcVar21 = (char *)(CONCAT22((short)((uint)extraout_ECX >> 0x10),
                             CONCAT11((char)((uint)extraout_ECX >> 8) + cVar7,(char)extraout_ECX))
                   + -0x2befdc7b);
  *pcVar21 = *pcVar21 + (char)extraout_ECX;
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}

