
/* Void Initialize(Int32, GameObject, String) */

void Assembly-CSharp.dll::KillLimitSettings::KillLimitSettings_Initialize
               (KillLimitSettings *this,int32_t woID,GameObject *root,String *header,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_killLimit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = 0;
  SettingsBase::SettingsBase_Initialize
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_PlayerKillWinCondition,
             (MethodInfo *)0x0);
  pTVar3 = (this->fields).killLimitHeader;
  if (pTVar3 == (Text *)0x0) goto code_?;
  (*(pTVar3->klass->vtable).set_text.methodPtr)(pTVar3,header);
  if (woID == -1) {
    this_04 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_04,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    lStackX_10 = CONCAT44(lStackX_10._4_4_,5);
    pOVar4 = (Object *)FUN_?(lRam_?,&lStackX_10);
    if (this_04 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_04,
               (Object *)StringLiteral_killLimit,pOVar4,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    this_05 = (this->fields).killLimitSlider;
  }
  else {
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_03 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_03,woID,(MethodInfo *)0x0), pMVar5 == (MVWorldObjectClient *)0x0))
    goto code_?;
    this_04 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)(pMVar5->fields)._.data;
    this_05 = (this->fields).killLimitSlider;
    if (this_04 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
  }
  pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_04,
                       (Object *)StringLiteral_killLimit,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if ((this_05 == (SettingsSlider *)0x0) || (pOVar4 == (Object *)0x0)) goto code_?;
  if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar4,lRam_?);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SettingsSlider::SettingsSlider_Initialize_1
            (this_05,StringLiteral_killLimit,*(int32_t *)&pOVar4[1].klass,1,200,(MethodInfo *)0x0);
  this_01 = (this->fields).killLimitInputField;
  pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_04,
                       (Object *)StringLiteral_killLimit,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if ((this_01 == (SettingsInputFieldSlider *)0x0) || (pOVar4 == (Object *)0x0))
  goto code_?;
  if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar4,lRam_?);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar6 = *(int *)&pOVar4[1].klass;
  bVar7 = iRam_? != 0;
  (this_01->fields).key = StringLiteral_killLimit;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(this_01->fields).key >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  inputFieldValue =
       SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                 (this_01,(float)iVar6,(MethodInfo *)0x0);
  pSVar12 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (inputFieldValue,(MethodInfo *)0x0);
  this_02 = (this_01->fields).inputField;
  if (this_02 == (InputField *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u0009);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar13 = (this_02->fields).m_Text;
  if (pSVar13 == pSVar12) {
    return;
  }
  if (pSVar13 == (String *)0x0) {
code_?:
    if (pSVar12 == (String *)0x0) {
code_?:
      pSVar12 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar12 == (String *)0x0) goto code_?;
    if ((pSVar13->fields)._stringLength == (pSVar12->fields)._stringLength) {
      bVar14 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar13->fields)._firstChar,
                         (uint8_t *)&(pSVar12->fields)._firstChar,
                         (longlong)(pSVar13->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar14 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar12 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar12,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_02->fields).m_LineType == 0) {
    if ((pSVar12 == (String *)0x0) ||
       (pSVar12 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar12,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar12 == (String *)0x0)) goto DAT_?;
    pSVar12 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar12,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_02->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_02->fields).m_CharacterValidation == 0)) {
    if (0 < (this_02->fields).m_CharacterLimit) {
      if (pSVar12 == (String *)0x0) goto DAT_?;
      iVar6 = (this_02->fields).m_CharacterLimit;
      if (iVar6 < (pSVar12->fields)._stringLength) {
        pSVar12 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar12,0,iVar6,(MethodInfo *)0x0);
      }
    }
    (this_02->fields).m_Text = pSVar12;
    func_?(&(this_02->fields).m_Text);
  }
  else {
    bVar7 = iRam_? != 0;
    (this_02->fields).m_Text = ::StringLiteral__;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(this_02->fields).m_Text >> 0xc);
      lVar15 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar15 + 0xADDR);
        puVar11 = (ulonglong *)(lVar15 + 0xADDR);
        LOCK();
        bVar7 = uVar9 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar9 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pIVar16 = (this_02->fields).m_OnValidateInput;
    if (pIVar16 == (InputField_OnValidateInput *)0x0) {
      pIVar16 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar17 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar7 = iRam_? != 0;
      (pIVar16->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar16->fields)._._.method = pMVar17;
      (pIVar16->fields)._._.m_target = (Object *)this_02;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(pIVar16->fields)._._.m_target >> 0xc);
        lVar15 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar15 + 0xADDR);
          puVar11 = (ulonglong *)(lVar15 + 0xADDR);
          LOCK();
          bVar7 = uVar9 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar9 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      uVar18 = pMVar17->parameters_count;
      (pIVar16->fields)._._.method_code = pIVar16;
      if ((pMVar17->flags & 0x10) == 0) {
        if (uVar18 != 2) goto code_?;
        pcVar1 = FUN_?;
      }
      else if (uVar18 == 3) {
        pcVar1 = FUN_?;
      }
      else {
code_?:
        (pIVar16->fields)._._.method_code = (pIVar16->fields)._._.m_target;
        pcVar1 = (pIVar16->fields)._._.method_ptr;
      }
      (pIVar16->fields)._._.invoke_impl = pcVar1;
      (pIVar16->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar12 == (String *)0x0) goto DAT_?;
    iVar19 = (pSVar12->fields)._stringLength;
    (this_02->fields).m_CaretSelectPosition = iVar19;
    (this_02->fields).m_CaretPosition = iVar19;
    if ((this_02->fields).m_CharacterLimit < 1) {
      iVar6 = (pSVar12->fields)._stringLength;
    }
    else {
      iVar6 = (this_02->fields).m_CharacterLimit;
      iVar20 = (pSVar12->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar20 < iVar6) {
        iVar6 = iVar20;
      }
    }
    uVar8 = 0;
    if (0 < iVar6) {
      lStackX_10 = (longlong)iVar6;
      puVar21 = &(pSVar12->fields)._firstChar;
      lVar15 = 0;
      do {
        pSVar13 = (this_02->fields).m_Text;
        if (pSVar13 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar12->fields)._stringLength <= (longlong)(ulonglong)uVar8) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (pIVar16 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar16->fields)._._.invoke_impl)
                      ((pIVar16->fields)._._.method_code,(this_02->fields).m_Text,
                       (pSVar13->fields)._stringLength,*puVar21,(pIVar16->fields)._._.method);
        if (c != 0) {
          pSVar13 = (this_02->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar13 = mscorlib.dll::System::String::String_Concat_4(pSVar13,str1,(MethodInfo *)0x0);
          (this_02->fields).m_Text = pSVar13;
          func_?(&(this_02->fields).m_Text);
        }
        uVar8 = uVar8 + 1;
        lVar15 = lVar15 + 1;
        puVar21 = puVar21 + 1;
      } while (lVar15 < lStackX_10);
    }
  }
  if ((this_02->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_02->fields).m_Keyboard,(this_02->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar12 = (this_02->fields).m_Text;
  if (pSVar12 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar6 = (pSVar12->fields)._stringLength;
  if (iVar6 < (this_02->fields).m_CaretPosition) {
    (this_02->fields).m_CaretPosition = iVar6;
  }
  else if ((this_02->fields).m_CaretSelectPosition <= iVar6) goto code_?;
  (this_02->fields).m_CaretSelectPosition = iVar6;
code_?:
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InputField_value);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  UnityEngine.UIModule.dll::UnityEngine::UISystemProfilerApi::UISystemProfilerApi_AddMarker
            (StringLiteral_InputField_value,(Object_1 *)this_02,(MethodInfo *)0x0);
  if ((this_02->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_02->fields).m_OnValueChanged,
               (Object *)(this_02->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_02,(MethodInfo *)0x0)
  ;
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::KillLimitSettings::KillLimitSettings_OnSettingChanged
               (KillLimitSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  aiStackX_8[0] = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
  pSVar1 = (this->fields).settingsBase;
  value_00 = (Object *)FUN_?(uRam_?,aiStackX_8);
  if (pSVar1 != (SettingsBase *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((((pSVar1->fields).woID != -1) && (key != (String *)0x0)) &&
       ((key->fields)._stringLength != 0)) {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClientManager *)0x0) {
        wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_01,(pSVar1->fields).woID,(MethodInfo *)0x0);
        if (wo == (MVWorldObjectClient *)0x0) {
          return;
        }
        if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar2 = 0;
        WorldObjectDataValidator::WorldObjectDataValidator_Validate
                  (wo,key,value_00,(MethodInfo *)0x0);
        this_00 = (pSVar1->fields).result;
        if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (this_00,(Object *)key,value_00,(InsertionBehavior__Enum)uVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)FUN_?(
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
          Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                    (this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          if (this_02 !=
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)key,value_00,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            (*(wo->klass->vtable).PartialUpdateWOData.methodPtr)
                      (wo,this_02,(wo->klass->vtable).PartialUpdateWOData.method);
            return;
          }
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

