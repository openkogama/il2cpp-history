
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
  cVar5 = '\0';
  cVar6 = (int)pOVar3 < 0;
  uVar7 = pOVar3 == (Object *)0x0;
  if ((bool)uVar7) {
    uVar4 = func_?();
  }
  else {
    pIVar8 = (pOVar3->klass->_0).element_class;
    pIVar9 = (TypeInfo__System__Int32->_0).element_class;
    cVar5 = SBORROW4((int)pIVar8,(int)pIVar9);
    cVar6 = (int)pIVar8 - (int)pIVar9 < 0;
    uVar7 = 0;
    if (pIVar8 == pIVar9) {
      piVar10 = (int *)func_?(pOVar3);
      pPVar11 = (ProfileSettingButton *)(pPVar1->fields).minValue;
      pPVar12 = (ProfileSettingButton *)
                ((uint)((pPVar1->fields).isIncrease != 0) * 2 + -1 + *piVar10);
      if (((int)pPVar11 <= (int)pPVar12) &&
         (pPVar13 = (ProfileSettingButton *)(pPVar1->fields).maxValue, pPVar11 = pPVar12,
         (int)pPVar13 < (int)pPVar12)) {
        pPVar11 = pPVar13;
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
        this = pPVar11;
        value = (String *)
                func_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue,&this);
        break;
      case 2:
        pPStack_14 = pPVar11;
        value = (String *)
                func_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,&pPStack_14)
        ;
        break;
      case 3:
        pPStack_15 = pPVar11;
        value = (String *)func_?(TypeInfo__UnityEngine__FilterMode,&pPStack_15);
        break;
      case 4:
        pPStack_16 = pPVar11;
        value = (String *)
                func_?(TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel,
                                &pPStack_16);
        break;
      case 5:
        pPStack_17 = pPVar11;
        value = (String *)
                func_?(TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel,&pPStack_17);
        break;
      case 6:
        pPStack_18 = pPVar11;
        value = (String *)
                func_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,
                                &pPStack_18);
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
  uVar4 = func_?(uVar4);
  puVar19 = (uint *)uVar4;
  if ((bool)uVar7 || cVar5 != cVar6) {
    uVar20 = (uint)((ulonglong)uVar4 >> 0x20) & *puVar19;
    bVar21 = *unaff_EBX;
    bVar22 = (byte)((ulonglong)uVar4 >> 8);
    *unaff_EBX = *unaff_EBX + bVar22;
    (&UNK_? + (int)puVar19)[uVar20] =
         (&UNK_? + (int)puVar19)[uVar20] + (char)(uVar20 >> 8) + CARRY1(bVar21,bVar22);
    out(0x10,(char)uVar4);
  }
  (*(code *)*puVar19)();
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
    this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
              func_?(TypeInfo__System__Action<System::Object>);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
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
    func_?();
    pIVar5 = extraout_ECX;
  }
  else {
    pDVar6 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                       );
    this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
              func_?(TypeInfo__System__Action<System::Object>);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (this_01,(Object *)this,MethodInfo__ProfileSettingButton__OnChange_System__Object_,
               (MethodInfo *)0x0);
    pAVar7 = unaff_EDI;
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                          (pDVar6,(Delegate *)this_01,(MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    unaff_EDI = TypeInfo__System__Action<System::Object>;
    if (unaff_ESI == (Delegate *)0x0) {
      value_00 = (Object *)0x0;
    }
    else {
      value_00 = (Object *)func_?(unaff_ESI,TypeInfo__System__Action<System::Object>);
      if (value_00 == (Object *)0x0) goto code_?;
    }
    unaff_EDI = pAVar7;
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
    pIVar5 = TypeInfo__System__Int32;
    if ((((Type__Class *)unaff_ESI->klass)->_0).element_class ==
        (TypeInfo__System__Int32->_0).element_class) {
      pDVar6 = (Delegate *)&UNK_?;
      piVar8 = (int *)func_?(unaff_ESI);
      unaff_ESI = pDVar6;
      if ((this->fields).isIncrease == 0) {
        value = (this->fields).minValue < *piVar8;
      }
      else {
        value = *piVar8 < (this->fields).maxValue;
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
  func_?(unaff_ESI,pIVar5);
code_?:
  func_?(unaff_ESI,unaff_EDI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

