
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::TimeTriggerSettings::TimeTriggerSettings_Initialize
               (TimeTriggerSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_time);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_duration);
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
  SettingsBase::SettingsBase_Initialize
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_TimeTrigger,(MethodInfo *)0x0);
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_03 == (MVWorldObjectClientManager *)0x0) ||
      (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_03,woID,(MethodInfo *)0x0), pMVar2 == (MVWorldObjectClient *)0x0))
     || (this_01 = (pMVar2->fields)._.data,
        this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0)) goto code_?;
  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (this_01,(Object *)StringLiteral_duration,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
    FUN_?();
  }
  provider = TypeInfo__System__Globalization__CultureInfo->static_fields->invariant_culture_info;
  LOCK();
  UNLOCK();
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar4 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                     (pOVar3,(IFormatProvider *)provider,(MethodInfo *)0x0);
  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (this_01,(Object *)StringLiteral_time,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__System__Globalization__CultureInfo);
  }
  LOCK();
  UNLOCK();
  value = mscorlib.dll::System::Convert::Convert_ToSingle_1
                    (pOVar3,(IFormatProvider *)
                             TypeInfo__System__Globalization__CultureInfo->static_fields->
                             invariant_culture_info,(MethodInfo *)0x0);
  maxValue = _UNK_?;
  pSVar5 = (this->fields).durationSlider;
  if (pSVar5 == (SettingsSlider *)0x0) goto code_?;
  SettingsSlider::SettingsSlider_Initialize
            (pSVar5,StringLiteral_duration,fVar4,_UNK_?,_UNK_?,(MethodInfo *)0x0);
  pSVar6 = (this->fields).durationInputField;
  if (pSVar6 == (SettingsInputFieldSlider *)0x0) goto code_?;
  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
            (pSVar6,StringLiteral_duration,fVar4,(MethodInfo *)0x0);
  pSVar5 = (this->fields).delaySlider;
  if (pSVar5 == (SettingsSlider *)0x0) goto code_?;
  SettingsSlider::SettingsSlider_Initialize
            (pSVar5,StringLiteral_time,value,0.0,maxValue,(MethodInfo *)0x0);
  pSVar6 = (this->fields).delayInputField;
  if (pSVar6 == (SettingsInputFieldSlider *)0x0) goto code_?;
  bVar7 = iRam_? != 0;
  (pSVar6->fields).key = StringLiteral_time;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(pSVar6->fields).key >> 0xc);
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
  fVar4 = SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                     (pSVar6,value,(MethodInfo *)0x0);
  pSVar12 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (fVar4,(MethodInfo *)0x0);
  this_02 = (pSVar6->fields).inputField;
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
      iVar15 = (this_02->fields).m_CharacterLimit;
      if (iVar15 < (pSVar12->fields)._stringLength) {
        pSVar12 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar12,0,iVar15,(MethodInfo *)0x0);
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
      lVar16 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar16 + 0xADDR);
        puVar11 = (ulonglong *)(lVar16 + 0xADDR);
        LOCK();
        bVar7 = uVar9 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar9 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pIVar17 = (this_02->fields).m_OnValidateInput;
    if (pIVar17 == (InputField_OnValidateInput *)0x0) {
      pIVar17 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar18 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar7 = iRam_? != 0;
      (pIVar17->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar17->fields)._._.method = pMVar18;
      (pIVar17->fields)._._.m_target = (Object *)this_02;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(pIVar17->fields)._._.m_target >> 0xc);
        lVar16 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar16 + 0xADDR);
          puVar11 = (ulonglong *)(lVar16 + 0xADDR);
          LOCK();
          bVar7 = uVar9 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar9 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      uVar19 = pMVar18->parameters_count;
      (pIVar17->fields)._._.method_code = pIVar17;
      if ((pMVar18->flags & 0x10) == 0) {
        if (uVar19 != 2) goto code_?;
        pcVar1 = FUN_?;
      }
      else if (uVar19 == 3) {
        pcVar1 = FUN_?;
      }
      else {
code_?:
        (pIVar17->fields)._._.method_code = (pIVar17->fields)._._.m_target;
        pcVar1 = (pIVar17->fields)._._.method_ptr;
      }
      (pIVar17->fields)._._.invoke_impl = pcVar1;
      (pIVar17->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar12 == (String *)0x0) goto DAT_?;
    iVar20 = (pSVar12->fields)._stringLength;
    (this_02->fields).m_CaretSelectPosition = iVar20;
    (this_02->fields).m_CaretPosition = iVar20;
    if ((this_02->fields).m_CharacterLimit < 1) {
      iVar15 = (pSVar12->fields)._stringLength;
    }
    else {
      iVar15 = (this_02->fields).m_CharacterLimit;
      iVar21 = (pSVar12->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar21 < iVar15) {
        iVar15 = iVar21;
      }
    }
    uVar8 = 0;
    if (0 < iVar15) {
      puVar22 = &(pSVar12->fields)._firstChar;
      lVar16 = 0;
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
        if (pIVar17 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar17->fields)._._.invoke_impl)
                      ((pIVar17->fields)._._.method_code,(this_02->fields).m_Text,
                       (pSVar13->fields)._stringLength,*puVar22,(pIVar17->fields)._._.method);
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
        lVar16 = lVar16 + 1;
        puVar22 = puVar22 + 1;
      } while (lVar16 < iVar15);
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
  iVar15 = (pSVar12->fields)._stringLength;
  if (iVar15 < (this_02->fields).m_CaretPosition) {
    (this_02->fields).m_CaretPosition = iVar15;
  }
  else if ((this_02->fields).m_CaretSelectPosition <= iVar15) goto code_?;
  (this_02->fields).m_CaretSelectPosition = iVar15;
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

