
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
  profileSetting = (undefined4 *)(this->fields).profileSettingKey;
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  pOVar2 = Assets::Scripts::ProfileSettings::ProfileSettingsManager::
           ProfileSettingsManager_GetSettingValue
                     ((ProfileSettingKey__Enum)profileSetting,(MethodInfo *)0x0);
  uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
  if (pOVar2 == (Object *)0x0) {
    uVar3 = func_?();
  }
  else if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
    piVar4 = (int *)func_?(pOVar2);
    pPVar5 = (ProfileSettingButton *)(pPVar1->fields).minValue;
    pPVar6 = (ProfileSettingButton *)((uint)((pPVar1->fields).isIncrease != 0) * 2 + -1 + *piVar4);
    if (((int)pPVar5 <= (int)pPVar6) &&
       (pPVar7 = (ProfileSettingButton *)(pPVar1->fields).maxValue, pPVar5 = pPVar6,
       (int)pPVar7 < (int)pPVar6)) {
      pPVar5 = pPVar7;
    }
    profileSetting_00 = (pPVar1->fields).profileSettingKey;
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
      this = pPVar5;
      value = (String *)
              func_?(TypeInfo__MV__WorldObject__MetaData__TargetFrameRateValue,&this);
      break;
    case 2:
      pPStack_8 = pPVar5;
      value = (String *)
              func_?(TypeInfo__MV__WorldObject__MetaData__TextureQualityLevel,&pPStack_8);
      break;
    case 3:
      pPStack_9 = pPVar5;
      value = (String *)func_?(TypeInfo__UnityEngine__FilterMode,&pPStack_9);
      break;
    case 4:
      pPStack_10 = pPVar5;
      value = (String *)
              func_?(TypeInfo__MV__WorldObject__MetaData__AnistropicFilteringLevel,
                              &pPStack_10);
      break;
    case 5:
      pPStack_11 = pPVar5;
      value = (String *)
              func_?(TypeInfo__MV__WorldObject__MetaData__AntiAliasingLevel,&pPStack_11);
      break;
    case 6:
      pPStack_12 = pPVar5;
      value = (String *)
              func_?(TypeInfo__MV__WorldObject__MetaData__LightingQualityLevel,&pPStack_12)
      ;
    }
    if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    }
    Assets::Scripts::ProfileSettings::ProfileSettingsManager::ProfileSettingsManager_SetSettingValue
              (profileSetting_00,(Object *)value,(MethodInfo *)0x0);
    return;
  }
  uVar3 = func_?(uVar3);
  puVar13 = (uint *)uVar3;
  uVar14 = (uint)((ulonglong)uVar3 >> 0x20) & *puVar13 & *puVar13 & *puVar13;
  uVar15 = in((short)uVar14);
  *profileSetting = uVar15;
  LOCK();
  *(byte *)(profileSetting + 1) = (byte)uVar14 & (byte)*puVar13;
  UNLOCK();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
    func_?();
    func_?();
    func_?();
    func_?();
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
  func_?();
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
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle_03,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar3 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar2,(MethodInfo *)0x0);
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
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle_04,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar3 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar2,(MethodInfo *)0x0);
    if (pAVar3 == (Array *)0x0) goto code_?;
    iVar4 = mscorlib.dll::System::Array::Array_get_Length(pAVar3,(MethodInfo *)0x0);
    iVar5 = iVar4 + -1;
    break;
  case 3:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle_01,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar3 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar2,(MethodInfo *)0x0);
    if (pAVar3 == (Array *)0x0) goto code_?;
    iVar4 = mscorlib.dll::System::Array::Array_get_Length(pAVar3,(MethodInfo *)0x0);
    iVar5 = iVar4 + -1;
    break;
  case 4:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar3 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar2,(MethodInfo *)0x0);
    if (pAVar3 == (Array *)0x0) goto code_?;
    iVar4 = mscorlib.dll::System::Array::Array_get_Length(pAVar3,(MethodInfo *)0x0);
    iVar5 = iVar4 + -1;
    break;
  case 5:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle_00,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar3 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar2,(MethodInfo *)0x0);
    if (pAVar3 == (Array *)0x0) goto code_?;
    iVar4 = mscorlib.dll::System::Array::Array_get_Length(pAVar3,(MethodInfo *)0x0);
    iVar5 = iVar4 + -1;
    break;
  case 6:
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle_02,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar3 = mscorlib.dll::System::Enum::Enum_GetValues(pTVar2,(MethodInfo *)0x0);
    if (pAVar3 == (Array *)0x0) goto code_?;
    iVar4 = mscorlib.dll::System::Array::Array_get_Length(pAVar3,(MethodInfo *)0x0);
    iVar5 = iVar4 + -1;
    break;
  default:
    iVar5 = 1;
  }
  (this->fields).maxValue = iVar5;
  if ((TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  key = (this->fields).profileSettingKey;
  this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_00 ==
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
code_?:
    bVar6 = 0;
    func_?();
  }
  else {
    pDVar7 = (Delegate *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                        );
    this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (this_01,(Object *)this,MethodInfo__ProfileSettingButton__OnChange_System__Object_,
               (MethodInfo *)0x0);
    pIVar8 = unaff_EDI;
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                        (pDVar7,(Delegate *)this_01,(MethodInfo *)0x0);
    method_00 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    unaff_EDI = (Il2CppClass *)TypeInfo__System__Action<System::Object>;
    if (pDVar7 == (Delegate *)0x0) {
      value = (Object *)0x0;
    }
    else {
      value = (Object *)func_?();
      bVar6 = 0;
      if (value == (Object *)0x0) goto code_?;
    }
    unaff_EDI = pIVar8;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__set_Item
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,value,method_00);
    pIVar8 = (Il2CppClass *)
              Assets::Scripts::ProfileSettings::ProfileSettingsManager::
              ProfileSettingsManager_GetSettingValue
                        ((this->fields).profileSettingKey,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pIVar8 == (Il2CppClass *)0x0) goto code_?;
    pIVar9 = (((Object__Class *)pIVar8->image)->_0).element_class;
    pIVar10 = (TypeInfo__System__Int32->_0).element_class;
    bVar6 = pIVar9 < pIVar10;
    if (pIVar9 == pIVar10) {
      piVar11 = (int *)func_?();
      if ((this->fields).isIncrease == 0) {
        bVar12 = (this->fields).minValue < *piVar11;
      }
      else {
        bVar12 = *piVar11 < (this->fields).maxValue;
      }
      pBVar1 = (this->fields).button;
      this = (ProfileSettingButton *)pIVar8;
      if (pBVar1 != (Button *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                  ((Selectable *)pBVar1,bVar12,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  uVar13 = func_?();
  bVar14 = (byte)uVar13;
  bVar6 = 0x99 < bVar14 | bVar6;
  bVar14 = bVar14 + (9 < (bVar14 & 0xf) | in_AF) * -6 + bVar6 * -0x60;
  puVar15 = &stack0xffffffd0 + -(int)((Il2CppClass *)this)->image;
  bVar12 = (Object__Class *)&stack0xffffffd0 < (Object__Class *)((Il2CppClass *)this)->image ||
           puVar15 < (undefined1 *)(uint)bVar6;
  iVar5 = -(int)(uint)bVar6;
  iVar16 = (int)(unaff_EDI[-0x9c3f6].vtable + 0x20) + 7;
  bVar6 = *(byte *)iVar16;
  cVar17 = *(char *)iVar16;
  *(byte *)iVar16 = cVar17 + extraout_CL + bVar12;
  puVar18 = &(unaff_EDI->this_arg).attrs;
  *(byte *)puVar18 =
       (char)*puVar18 + extraout_CL +
       ((Object__Class *)(puVar15 + iVar5) < (Object__Class *)((Il2CppClass *)this)->image ||
       puVar15 + (iVar5 - (int)((Il2CppClass *)this)->image) <
       (undefined1 *)(uint)(CARRY1(bVar6,extraout_CL) || CARRY1(cVar17 + extraout_CL,bVar12)));
  puVar15 = (undefined1 *)
           ((int)&((Il2CppClass *)((int)this + -0x3333f054))->cctor_finished_or_no_cctor + 3);
  *puVar15 = *puVar15 + extraout_CL +
            (bVar14 < 0x23 ||
            (byte)(bVar14 - 0x23) <
            ((Il2CppImage *)CONCAT31((int3)((uint)uVar13 >> 8),bVar14) <
            ((Il2CppClass_0 *)&unaff_EDI->image)->image));
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}

