
/* Int32 GetMinutes(String) */

int32_t Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
        RoundCubeSettings_GetMinutes(RoundCubeSettings *this,String *value,MethodInfo *method)

{
  if ((value != (String *)0x0) && ((value->fields)._stringLength != 0)) {
    iVar1 = mscorlib.dll::System::Int32::Int32_Parse(value,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__TimeSpan);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__TimeSpan);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?();
    }
    TVar2 = mscorlib.dll::System::TimeSpan::TimeSpan_Interval((double)iVar1,60000,(MethodInfo *)0x0)
    ;
    lVar3 = TVar2._ticks / 600000000;
    lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3),8) + lVar3;
    return (int)lVar3 + ((int)(lVar4 >> 5) - (int)(lVar4 >> 0x3f)) * -0x3c +
           (int)(TVar2._ticks / 36000000000) * 0x3c +
           (int)((TVar2._ticks / 36000000000) / 0x18) * -0x5a0;
  }
  return 0;
}


/* Int32 GetMinutes(Int32) */

int32_t Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
        RoundCubeSettings_GetMinutes_1(RoundCubeSettings *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  TVar1 = mscorlib.dll::System::TimeSpan::TimeSpan_Interval((double)value,60000,(MethodInfo *)0x0);
  lVar2 = TVar1._ticks / 600000000;
  lVar3 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8) + lVar2;
  return (int)lVar2 + ((int)(lVar3 >> 5) - (int)(lVar3 >> 0x3f)) * -0x3c +
         (int)(TVar1._ticks / 36000000000) * 0x3c +
         (int)((TVar1._ticks / 36000000000) / 0x18) * -0x5a0;
}


/* Int32 GetSeconds(String) */

int32_t Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
        RoundCubeSettings_GetSeconds(RoundCubeSettings *this,String *value,MethodInfo *method)

{
  if ((value != (String *)0x0) && ((value->fields)._stringLength != 0)) {
    iVar1 = mscorlib.dll::System::Int32::Int32_Parse(value,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__TimeSpan);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__TimeSpan);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
      FUN_?();
    }
    TVar2 = mscorlib.dll::System::TimeSpan::TimeSpan_Interval((double)iVar1,1000,(MethodInfo *)0x0);
    lVar3 = TVar2._ticks + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(TVar2._ticks),8);
    lVar4 = (lVar3 >> 0x17) - (lVar3 >> 0x3f);
    lVar3 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar4),8) + lVar4;
    return (int)lVar4 + ((int)(lVar3 >> 5) - (int)(lVar3 >> 0x3f)) * -0x3c;
  }
  return 0;
}


/* Int32 GetSeconds(Int32) */

int32_t Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
        RoundCubeSettings_GetSeconds_1(RoundCubeSettings *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
    FUN_?();
  }
  TVar1 = mscorlib.dll::System::TimeSpan::TimeSpan_Interval((double)value,1000,(MethodInfo *)0x0);
  lVar2 = TVar1._ticks + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(TVar1._ticks),8);
  lVar3 = (lVar2 >> 0x17) - (lVar2 >> 0x3f);
  lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar3),8) + lVar3;
  return (int)lVar3 + ((int)(lVar2 >> 5) - (int)(lVar2 >> 0x3f)) * -0x3c;
}


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
     RoundCubeSettings_Initialize
               (RoundCubeSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_interval);
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
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_RoundCube,(MethodInfo *)0x0);
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_03 == (MVWorldObjectClientManager *)0x0) ||
      (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_03,woID,(MethodInfo *)0x0), pMVar2 == (MVWorldObjectClient *)0x0))
     || (this_01 = (pMVar2->fields)._.data,
        this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0)) goto code_?;
  value_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_01,(Object *)StringLiteral_interval,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar3 = mscorlib.dll::System::Convert::Convert_ToInt32(value_00,(MethodInfo *)0x0);
  this_02 = (this->fields).slider;
  if (this_02 == (SettingsSlider *)0x0) goto code_?;
  SettingsSlider::SettingsSlider_Initialize_1
            (this_02,StringLiteral_interval,iVar3,0x1e,0xe10,(MethodInfo *)0x0);
  pIVar4 = (this->fields).minutes;
  value = RoundCubeSettings_GetMinutes_1(this,iVar3 / 0x3c,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar5 = mscorlib.dll::System::Number::Number_FormatInt32
                      (value,(ReadOnlySpan_1_Char_ *)&stack0xffffffffffffffd8,(IFormatProvider *)0x0
                       ,(MethodInfo *)0x0);
  if (pIVar4 == (InputField *)0x0) goto code_?;
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
            (pIVar4,pSVar5,1,(MethodInfo *)0x0);
  pIVar4 = (this->fields).seconds;
  iVar3 = RoundCubeSettings_GetSeconds_1(this,iVar3,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar5 = mscorlib.dll::System::Number::Number_FormatInt32
                      (iVar3,(ReadOnlySpan_1_Char_ *)&stack0xffffffffffffffd8,(IFormatProvider *)0x0
                       ,(MethodInfo *)0x0);
  if (pIVar4 == (InputField *)0x0) goto code_?;
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
  pSVar6 = (pIVar4->fields).m_Text;
  if (pSVar6 == pSVar5) {
    return;
  }
  if (pSVar6 == (String *)0x0) {
code_?:
    if (pSVar5 == (String *)0x0) {
code_?:
      pSVar5 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar5 == (String *)0x0) goto code_?;
    if ((pSVar6->fields)._stringLength == (pSVar5->fields)._stringLength) {
      bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar6->fields)._firstChar,
                         (uint8_t *)&(pSVar5->fields)._firstChar,
                         (longlong)(pSVar6->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar5 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar5,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((pIVar4->fields).m_LineType == 0) {
    if ((pSVar5 == (String *)0x0) ||
       (pSVar5 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar5,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar5 == (String *)0x0)) goto DAT_?;
    pSVar5 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar5,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((pIVar4->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((pIVar4->fields).m_CharacterValidation == 0)) {
    if (0 < (pIVar4->fields).m_CharacterLimit) {
      if (pSVar5 == (String *)0x0) goto DAT_?;
      iVar8 = (pIVar4->fields).m_CharacterLimit;
      if (iVar8 < (pSVar5->fields)._stringLength) {
        pSVar5 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar5,0,iVar8,(MethodInfo *)0x0);
      }
    }
    (pIVar4->fields).m_Text = pSVar5;
    func_?(&(pIVar4->fields).m_Text);
  }
  else {
    bVar9 = iRam_? != 0;
    (pIVar4->fields).m_Text = ::StringLiteral__;
    if (bVar9) {
      uVar10 = (uint)((ulonglong)&(pIVar4->fields).m_Text >> 0xc);
      lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
      do {
        uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
        puVar13 = (ulonglong *)(lVar11 + 0xADDR);
        LOCK();
        bVar9 = uVar12 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pIVar14 = (pIVar4->fields).m_OnValidateInput;
    if (pIVar14 == (InputField_OnValidateInput *)0x0) {
      pIVar14 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar15 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar9 = iRam_? != 0;
      (pIVar14->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar14->fields)._._.method = pMVar15;
      (pIVar14->fields)._._.m_target = (Object *)pIVar4;
      if (bVar9) {
        uVar10 = (uint)((ulonglong)&(pIVar14->fields)._._.m_target >> 0xc);
        lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar9 = uVar12 == *puVar13;
          if (bVar9) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      uVar16 = pMVar15->parameters_count;
      (pIVar14->fields)._._.method_code = pIVar14;
      if ((pMVar15->flags & 0x10) == 0) {
        if (uVar16 != 2) goto code_?;
        pcVar1 = FUN_?;
      }
      else if (uVar16 == 3) {
        pcVar1 = FUN_?;
      }
      else {
code_?:
        (pIVar14->fields)._._.method_code = (pIVar14->fields)._._.m_target;
        pcVar1 = (pIVar14->fields)._._.method_ptr;
      }
      (pIVar14->fields)._._.invoke_impl = pcVar1;
      (pIVar14->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar5 == (String *)0x0) goto DAT_?;
    iVar3 = (pSVar5->fields)._stringLength;
    (pIVar4->fields).m_CaretSelectPosition = iVar3;
    (pIVar4->fields).m_CaretPosition = iVar3;
    if ((pIVar4->fields).m_CharacterLimit < 1) {
      iVar8 = (pSVar5->fields)._stringLength;
    }
    else {
      iVar8 = (pIVar4->fields).m_CharacterLimit;
      iVar17 = (pSVar5->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar17 < iVar8) {
        iVar8 = iVar17;
      }
    }
    uVar10 = 0;
    if (0 < iVar8) {
      puVar18 = &(pSVar5->fields)._firstChar;
      lVar11 = 0;
      do {
        pSVar6 = (pIVar4->fields).m_Text;
        if (pSVar6 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar5->fields)._stringLength <= (longlong)(ulonglong)uVar10) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (pIVar14 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar14->fields)._._.invoke_impl)
                      ((pIVar14->fields)._._.method_code,(pIVar4->fields).m_Text,
                       (pSVar6->fields)._stringLength,*puVar18,(pIVar14->fields)._._.method);
        if (c != 0) {
          pSVar6 = (pIVar4->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar6 = mscorlib.dll::System::String::String_Concat_4(pSVar6,str1,(MethodInfo *)0x0);
          (pIVar4->fields).m_Text = pSVar6;
          func_?(&(pIVar4->fields).m_Text);
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 1;
        puVar18 = puVar18 + 1;
      } while (lVar11 < iVar8);
    }
  }
  if ((pIVar4->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((pIVar4->fields).m_Keyboard,(pIVar4->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar5 = (pIVar4->fields).m_Text;
  if (pSVar5 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar8 = (pSVar5->fields)._stringLength;
  if (iVar8 < (pIVar4->fields).m_CaretPosition) {
    (pIVar4->fields).m_CaretPosition = iVar8;
  }
  else if ((pIVar4->fields).m_CaretSelectPosition <= iVar8) goto code_?;
  (pIVar4->fields).m_CaretSelectPosition = iVar8;
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
            (StringLiteral_InputField_value,(Object_1 *)pIVar4,(MethodInfo *)0x0);
  if ((pIVar4->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(pIVar4->fields).m_OnValueChanged,
               (Object *)(pIVar4->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(pIVar4,(MethodInfo *)0x0);
  return;
}


/* Void OnInputFieldChanged() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
     RoundCubeSettings_OnInputFieldChanged(RoundCubeSettings *this,MethodInfo *method)

{
  pIVar1 = (this->fields).seconds;
  if (pIVar1 == (InputField *)0x0) goto code_?;
  pSVar2 = (pIVar1->fields).m_Text;
  if ((pSVar2 == (String *)0x0) || ((pSVar2->fields)._stringLength == 0)) {
code_?:
    iVar3 = 0;
  }
  else {
    iVar3 = mscorlib.dll::System::Int32::Int32_Parse(pSVar2,(MethodInfo *)0x0);
    iVar3 = RoundCubeSettings_GetSeconds_1(this,iVar3,(MethodInfo *)0x0);
    if (iVar3 < 0) goto code_?;
    if (0x3c < iVar3) {
      iVar3 = 0x3c;
    }
  }
  pIVar1 = (this->fields).minutes;
  if (pIVar1 == (InputField *)0x0) goto code_?;
  pSVar2 = (pIVar1->fields).m_Text;
  if ((pSVar2 == (String *)0x0) || ((pSVar2->fields)._stringLength == 0)) {
code_?:
    iVar4 = 0;
code_?:
    if (iVar3 < 0x1e) {
      iVar3 = 0x1e;
    }
    else if (0x3c < iVar3) {
      iVar3 = 0x3c;
    }
  }
  else {
    iVar4 = mscorlib.dll::System::Int32::Int32_Parse(pSVar2,(MethodInfo *)0x0);
    iVar4 = RoundCubeSettings_GetMinutes_1(this,iVar4,(MethodInfo *)0x0);
    if (iVar4 < 0) goto code_?;
    if (iVar4 < 0x3d) {
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
    iVar4 = 0x3c;
  }
code_?:
  pIVar1 = (this->fields).minutes;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_5[0]._pointer._value = (void *)0x0;
  aRStack_5[0]._length = 0;
  aRStack_5[0]._12_4_ = 0;
  pSVar2 = mscorlib.dll::System::Number::Number_FormatInt32
                     (iVar4,aRStack_5,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (pIVar1 != (InputField *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
              (pIVar1,pSVar2,1,(MethodInfo *)0x0);
    pIVar1 = (this->fields).seconds;
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
    aRStack_5[0]._pointer._value = (void *)0x0;
    aRStack_5[0]._length = 0;
    aRStack_5[0]._12_4_ = 0;
    pSVar2 = mscorlib.dll::System::Number::Number_FormatInt32
                       (iVar3,aRStack_5,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if (pIVar1 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                (pIVar1,pSVar2,1,(MethodInfo *)0x0);
      pSVar6 = (this->fields).slider;
      if ((pSVar6 != (SettingsSlider *)0x0) &&
         (pSVar7 = (pSVar6->fields).slider, pSVar7 != (Slider *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar7->klass->vtable).set_value.methodPtr)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SliderChanged() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::RoundCubeSettings::
     RoundCubeSettings_SliderChanged(RoundCubeSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_interval);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).slider;
  if ((pSVar1 != (SettingsSlider *)0x0) &&
     (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
    fVar3 = (float)(*(pSVar2->klass->vtable).get_value.methodPtr)
                             (pSVar2,(pSVar2->klass->vtable).get_value.method);
    pIVar4 = (this->fields).minutes;
    value_00 = (int)fVar3;
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
    aRStackY_38[0]._pointer._value = (void *)0x0;
    aRStackY_38[0]._length = 0;
    aRStackY_38[0]._12_4_ = 0;
    pSVar5 = mscorlib.dll::System::Number::Number_FormatInt32
                       (value_00 / 0x3c,aRStackY_38,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if ((pSVar5 == (String *)0x0) || ((pSVar5->fields)._stringLength == 0)) {
      iVar6 = 0;
    }
    else {
      iVar6 = mscorlib.dll::System::Int32::Int32_Parse(pSVar5,(MethodInfo *)0x0);
      iVar6 = RoundCubeSettings_GetMinutes_1(this,iVar6,(MethodInfo *)0x0);
    }
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
    aRStackY_38[0]._pointer._value = (void *)0x0;
    aRStackY_38[0]._length = 0;
    aRStackY_38[0]._12_4_ = 0;
    pSVar5 = mscorlib.dll::System::Number::Number_FormatInt32
                       (iVar6,aRStackY_38,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    if (pIVar4 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                (pIVar4,pSVar5,1,(MethodInfo *)0x0);
      pIVar4 = (this->fields).seconds;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStackY_38[0]._pointer._value = (void *)0x0;
      aRStackY_38[0]._length = 0;
      aRStackY_38[0]._12_4_ = 0;
      pSVar5 = mscorlib.dll::System::Number::Number_FormatInt32
                         (value_00,aRStackY_38,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      iVar6 = 0;
      if ((pSVar5 != (String *)0x0) && (iVar6 = 0, (pSVar5->fields)._stringLength != 0)) {
        iVar6 = mscorlib.dll::System::Int32::Int32_Parse(pSVar5,(MethodInfo *)0x0);
        iVar6 = RoundCubeSettings_GetSeconds_1(this,iVar6,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStackY_38[0]._pointer._value = (void *)0x0;
      aRStackY_38[0]._length = 0;
      aRStackY_38[0]._12_4_ = 0;
      pSVar5 = mscorlib.dll::System::Number::Number_FormatInt32
                         (iVar6,aRStackY_38,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      if (pIVar4 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                  (pIVar4,pSVar5,1,(MethodInfo *)0x0);
        pSVar7 = (this->fields).settingsBase;
        aiStackX_8[0] = value_00;
        value = (Object *)FUN_?(uRam_?,aiStackX_8);
        pSVar5 = StringLiteral_interval;
        if (pSVar7 != (SettingsBase *)0x0) {
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
          if ((((pSVar7->fields).woID != -1) && (pSVar5 != (String *)0x0)) &&
             ((pSVar5->fields)._stringLength != 0)) {
            this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (this_01 != (MVWorldObjectClientManager *)0x0) {
              wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (this_01,(pSVar7->fields).woID,(MethodInfo *)0x0);
              if (wo == (MVWorldObjectClient *)0x0) {
                return;
              }
              if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
                FUN_?();
              }
              uVar8 = 0;
              WorldObjectDataValidator::WorldObjectDataValidator_Validate
                        (wo,pSVar5,value,(MethodInfo *)0x0);
              this_00 = (pSVar7->fields).result;
              if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__TryInsert
                          (this_00,(Object *)pSVar5,value,(InsertionBehavior__Enum)uVar8,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                           ->klass->rgctx_data[0x22].method);
                this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                           *)FUN_?(
                                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                          );
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
                Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                          (this_02,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                          );
                if (this_02 !=
                    (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)pSVar5,
                             value,(InsertionBehavior__Enum)
                                   CONCAT71((int7)((ulonglong)uVar8 >> 8),2),
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  (*(wo->klass->vtable).PartialUpdateWOData.methodPtr)
                            (wo,this_02,(wo->klass->vtable).PartialUpdateWOData.method);
                  return;
                }
              }
            }
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

