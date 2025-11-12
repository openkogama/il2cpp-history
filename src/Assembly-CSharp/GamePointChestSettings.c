
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::GamePointChestSettings::GamePointChestSettings_Initialize
               (GamePointChestSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Crystal_Reward);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gamePointAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Crystal_Reward;
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = (this_00->fields).headerText;
  (this_00->fields).woID = woID;
  if (pTVar3 == (Text *)0x0) goto code_?;
  (*(pTVar3->klass->vtable).set_text.methodPtr)
            (pTVar3,pSVar1,(pTVar3->klass->vtable).set_text.method);
  uVar4 = 0;
  SettingsBase::SettingsBase_InitializeHierarchy(this_00,woID,root,(MethodInfo *)0x0);
  this_05 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_05 == (MVWorldObjectClientManager *)0x0) ||
      (pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_05,woID,(MethodInfo *)0x0), pMVar5 == (MVWorldObjectClient *)0x0))
     || (this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)(pMVar5->fields)._.data,
        this_01 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0)) goto code_?;
  iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this_01,(Object *)StringLiteral_gamePointAmount,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if (iVar6 < 0) {
    lStackX_10 = CONCAT44(lStackX_10._4_4_,0x1e);
    pOVar7 = (Object *)FUN_?(lRam_?,&lStackX_10);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_01,
               (Object *)StringLiteral_gamePointAmount,pOVar7,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,
                       (Object *)StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar7 == (Object *)0x0) goto code_?;
  if ((pOVar7->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar7,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_02 = (this->fields).gamePointsAwardedSlider;
  if (this_02 == (SettingsSlider *)0x0) goto code_?;
  iVar6 = *(int32_t *)&pOVar7[1].klass;
  SettingsSlider::SettingsSlider_Initialize_1
            (this_02,StringLiteral_gamePointAmount,iVar6,2,100,(MethodInfo *)0x0);
  this_03 = (this->fields).gamePointsAwardedInputField;
  if (this_03 == (SettingsInputFieldSlider *)0x0) goto code_?;
  bVar8 = iRam_? != 0;
  (this_03->fields).key = StringLiteral_gamePointAmount;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&(this_03->fields).key >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar11 == *puVar12;
      if (bVar8) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  inputFieldValue =
       SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                 (this_03,(float)iVar6,(MethodInfo *)0x0);
  pSVar1 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (inputFieldValue,(MethodInfo *)0x0);
  this_04 = (this_03->fields).inputField;
  if (this_04 == (InputField *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
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
  pSVar13 = (this_04->fields).m_Text;
  if (pSVar13 == pSVar1) {
    return;
  }
  if (pSVar13 == (String *)0x0) {
code_?:
    if (pSVar1 == (String *)0x0) {
code_?:
      pSVar1 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar1 == (String *)0x0) goto code_?;
    if ((pSVar13->fields)._stringLength == (pSVar1->fields)._stringLength) {
      bVar14 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar13->fields)._firstChar,
                         (uint8_t *)&(pSVar1->fields)._firstChar,
                         (longlong)(pSVar13->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar14 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar1 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar1,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_04->fields).m_LineType == 0) {
    if ((pSVar1 == (String *)0x0) ||
       (pSVar1 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar1,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar1 == (String *)0x0)) goto DAT_?;
    pSVar1 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar1,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_04->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_04->fields).m_CharacterValidation == 0)) {
    if (0 < (this_04->fields).m_CharacterLimit) {
      if (pSVar1 == (String *)0x0) goto DAT_?;
      iVar15 = (this_04->fields).m_CharacterLimit;
      if (iVar15 < (pSVar1->fields)._stringLength) {
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar1,0,iVar15,(MethodInfo *)0x0);
      }
    }
    (this_04->fields).m_Text = pSVar1;
    func_?(&(this_04->fields).m_Text);
  }
  else {
    bVar8 = iRam_? != 0;
    (this_04->fields).m_Text = ::StringLiteral__;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(this_04->fields).m_Text >> 0xc);
      lVar16 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar16 + 0xADDR);
        puVar12 = (ulonglong *)(lVar16 + 0xADDR);
        LOCK();
        bVar8 = uVar10 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar10 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pIVar17 = (this_04->fields).m_OnValidateInput;
    if (pIVar17 == (InputField_OnValidateInput *)0x0) {
      pIVar17 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar18 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar8 = iRam_? != 0;
      (pIVar17->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar17->fields)._._.method = pMVar18;
      (pIVar17->fields)._._.m_target = (Object *)this_04;
      if (bVar8) {
        uVar9 = (uint)((ulonglong)&(pIVar17->fields)._._.m_target >> 0xc);
        lVar16 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar16 + 0xADDR);
          puVar12 = (ulonglong *)(lVar16 + 0xADDR);
          LOCK();
          bVar8 = uVar10 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar10 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      uVar19 = pMVar18->parameters_count;
      (pIVar17->fields)._._.method_code = pIVar17;
      if ((pMVar18->flags & 0x10) == 0) {
        if (uVar19 != 2) goto code_?;
        pcVar2 = FUN_?;
      }
      else if (uVar19 == 3) {
        pcVar2 = FUN_?;
      }
      else {
code_?:
        (pIVar17->fields)._._.method_code = (pIVar17->fields)._._.m_target;
        pcVar2 = (pIVar17->fields)._._.method_ptr;
      }
      (pIVar17->fields)._._.invoke_impl = pcVar2;
      (pIVar17->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar1 == (String *)0x0) goto DAT_?;
    iVar6 = (pSVar1->fields)._stringLength;
    (this_04->fields).m_CaretSelectPosition = iVar6;
    (this_04->fields).m_CaretPosition = iVar6;
    if ((this_04->fields).m_CharacterLimit < 1) {
      iVar15 = (pSVar1->fields)._stringLength;
    }
    else {
      iVar15 = (this_04->fields).m_CharacterLimit;
      iVar20 = (pSVar1->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar20 < iVar15) {
        iVar15 = iVar20;
      }
    }
    uVar9 = 0;
    if (0 < iVar15) {
      lStackX_10 = (longlong)iVar15;
      puVar21 = &(pSVar1->fields)._firstChar;
      lVar16 = 0;
      do {
        pSVar13 = (this_04->fields).m_Text;
        if (pSVar13 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar9) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pIVar17 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar17->fields)._._.invoke_impl)
                      ((pIVar17->fields)._._.method_code,(this_04->fields).m_Text,
                       (pSVar13->fields)._stringLength,*puVar21,(pIVar17->fields)._._.method);
        if (c != 0) {
          pSVar13 = (this_04->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar13 = mscorlib.dll::System::String::String_Concat_4(pSVar13,str1,(MethodInfo *)0x0);
          (this_04->fields).m_Text = pSVar13;
          func_?(&(this_04->fields).m_Text);
        }
        uVar9 = uVar9 + 1;
        lVar16 = lVar16 + 1;
        puVar21 = puVar21 + 1;
      } while (lVar16 < lStackX_10);
    }
  }
  if ((this_04->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_04->fields).m_Keyboard,(this_04->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar1 = (this_04->fields).m_Text;
  if (pSVar1 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar15 = (pSVar1->fields)._stringLength;
  if (iVar15 < (this_04->fields).m_CaretPosition) {
    (this_04->fields).m_CaretPosition = iVar15;
  }
  else if ((this_04->fields).m_CaretSelectPosition <= iVar15) goto code_?;
  (this_04->fields).m_CaretSelectPosition = iVar15;
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
            (StringLiteral_InputField_value,(Object_1 *)this_04,(MethodInfo *)0x0);
  if ((this_04->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_04->fields).m_OnValueChanged,
               (Object *)(this_04->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_04,(MethodInfo *)0x0)
  ;
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::GamePointChestSettings::GamePointChestSettings_OnSettingChanged
               (GamePointChestSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_gamePointAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != StringLiteral_gamePointAmount) {
    if (key == (String *)0x0) {
      return;
    }
    if (StringLiteral_gamePointAmount == (String *)0x0) {
      return;
    }
    if ((key->fields)._stringLength != (StringLiteral_gamePointAmount->fields)._stringLength) {
      return;
    }
    bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                      ((uint8_t *)&(key->fields)._firstChar,
                       (uint8_t *)&(StringLiteral_gamePointAmount->fields)._firstChar,
                       (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
  }
  if (value != (Object *)0x0) {
    if ((value->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(value);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    value_00 = FUN_?(*(undefined4 *)&value[1].klass);
    pSVar3 = (this->fields).gamePointsAwardedInputField;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_4[0]._pointer._value = (void *)0x0;
    aRStack_4[0]._length = 0;
    aRStack_4[0]._12_4_ = 0;
    value_01 = mscorlib.dll::System::Number::Number_FormatInt32
                         (value_00,aRStack_4,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if ((pSVar3 != (SettingsInputFieldSlider *)0x0) &&
       (pIVar5 = (pSVar3->fields).inputField, pIVar5 != (InputField *)0x0)) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_contentType
                (pIVar5,InputField_ContentType__Enum_Standard,(MethodInfo *)0x0);
      pIVar5 = (pSVar3->fields).inputField;
      if (pIVar5 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                  (pIVar5,value_01,1,(MethodInfo *)0x0);
        this_00 = (this->fields).settingsBase;
        aiStackX_10[0] = value_00;
        value_02 = (Object *)FUN_?(uRam_?,aiStackX_10);
        if (this_00 != (SettingsBase *)0x0) {
          SettingsBase::SettingsBase_OnSettingChanged
                    (this_00,StringLiteral_gamePointAmount,value_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

