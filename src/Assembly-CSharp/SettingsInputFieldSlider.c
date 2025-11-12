
/* String ConvertFloatToString(Single) */

String * Assembly-CSharp.dll::SettingsInputFieldSlider::
         SettingsInputFieldSlider_ConvertFloatToString(float inputFieldValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?();
  }
  formatProvider =
       TypeInfo__System__Globalization__CultureInfo->static_fields->invariant_culture_info;
  LOCK();
  UNLOCK();
  if (cRam_? == '\0') {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_1[0]._chars._pointer._value = &UNK_?;
  info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_GetInstance
                   ((IFormatProvider *)formatProvider,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    aVStack_1[0]._chars._pointer._value = &UNK_?;
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number,0,info,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Span<wchar_t>__Span_System__Void___int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aVStack_1[0]._28_4_ = 0;
  aVStack_1[0]._chars._pointer._value = &uStack_2;
  uStack_2 = 0;
  puStack_3 = (undefined *)0x0;
  uStack_4 = 0;
  uStack_5 = 0;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  uStack_9 = 0;
  RStack_10._pointer._value = (void *)0x0;
  RStack_10._length = 0x20;
  RStack_10._12_4_ = 0;
  aVStack_1[0]._arrayToReturnToPool = (Char__Array *)0x0;
  aVStack_1[0]._chars._length = 0x20;
  aVStack_1[0]._chars._12_4_ = 0;
  aVStack_1[0]._pos = 0;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_10._pointer._value = (void *)0x0;
  RStack_10._length = 0;
  RStack_10._12_4_ = 0;
  pSVar11 = mscorlib.dll::System::Number::Number_FormatSingle_1
                     (aVStack_1,inputFieldValue,&RStack_10,info,(MethodInfo *)0x0);
  if (pSVar11 == (String *)0x0) {
    pSVar11 = mscorlib.dll::System::Text::ValueStringBuilder::ValueStringBuilder_ToString
                       (aVStack_1,(MethodInfo *)0x0);
  }
  return pSVar11;
}


/* Single ConvertStringToFloat(String) */

float Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertStringToFloat
                (SettingsInputFieldSlider *this,String *inputFieldText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (inputFieldText == (String *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  bVar3 = mscorlib.dll::System::String::String_Contains
                    (inputFieldText,::StringLiteral__,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    inputFieldText =
         mscorlib.dll::System::String::String_Replace_1
                   (inputFieldText,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
  }
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
  formatProvider =
       TypeInfo__System__Globalization__CultureInfo->static_fields->invariant_culture_info;
  LOCK();
  UNLOCK();
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (inputFieldText != (String *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    mscorlib.dll::System::Globalization::NumberFormatInfo::
    NumberFormatInfo_ValidateParseStyleFloatingPoint
              (NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
               NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,(MethodInfo *)0x0);
    if (inputFieldText != (String *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      RStack_4._pointer._value = &(inputFieldText->fields)._firstChar;
      RStack_4._12_4_ = 0;
      RStack_4._length = (inputFieldText->fields)._stringLength;
      info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_GetInstance
                       ((IFormatProvider *)formatProvider,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      fVar2 = mscorlib.dll::System::Number::Number_ParseSingle
                        (&RStack_4,
                         NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                         NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,info,
                         (MethodInfo *)0x0);
      return fVar2;
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentNullException
              (ExceptionArgument__Enum_s,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  return 0.0;
}


/* Single GetInputFieldValue(Single) */

float Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                (SettingsInputFieldSlider *this,float value,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsSlider;
  if ((this->fields).round == 0) {
    if (pSVar1 == (SettingsSlider *)0x0) goto code_?;
  }
  else {
    if (pSVar1 == (SettingsSlider *)0x0) goto code_?;
    fVar2 = (float)FUN_?(value / (pSVar1->fields).interval);
    pSVar1 = (this->fields).settingsSlider;
    if (pSVar1 == (SettingsSlider *)0x0) goto code_?;
    value = fVar2 * (pSVar1->fields).interval;
  }
  pSVar3 = (pSVar1->fields).slider;
  if ((pSVar3 != (Slider *)0x0) &&
     (pSVar1 = (this->fields).settingsSlider, pSVar1 != (SettingsSlider *)0x0)) {
    fVar2 = (pSVar3->fields).m_MinValue;
    if ((value < fVar2) || (fVar2 = (((pSVar1->fields).slider)->fields).m_MaxValue, fVar2 < value))
    {
      value = fVar2;
    }
    return value;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar2 = (float)(*pcVar4)();
  return fVar2;
}


/* Void Initialize(String, Dictionary`2[System.Object,System.Object],
   Func`2[String,ValueTuple`2[Single,Single]]) */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize
               (SettingsInputFieldSlider *this,String *key,
               Dictionary_2_System_Object_System_Object_ *itemData,
               Func_2_String_ValueTuple_2_Single_Single_ *mimMaxFunc,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((itemData == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (itemData,(Object *)key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar1 == (Object *)0x0)) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar1,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar3 = *(float *)&pOVar1[1].klass;
  if (mimMaxFunc == (Func_2_String_ValueTuple_2_Single_Single_ *)0x0) goto code_?;
  uVar4 = (*(mimMaxFunc->fields)._._.invoke_impl)((mimMaxFunc->fields)._._.method_code,key);
  this_00 = (this->fields).settingsSlider;
  if (this_00 == (SettingsSlider *)0x0) goto code_?;
  fStackX_14 = (float)((ulonglong)uVar4 >> 0x20);
  fStackX_10 = (float)uVar4;
  SettingsSlider::SettingsSlider_Initialize
            (this_00,key,fVar3,fStackX_10,fStackX_14,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  (this->fields).key = key;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).key >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  fVar3 = SettingsInputFieldSlider_GetInputFieldValue(this,fVar3,(MethodInfo *)0x0);
  pSVar10 = SettingsInputFieldSlider_ConvertFloatToString(fVar3,(MethodInfo *)0x0);
  this_01 = (this->fields).inputField;
  if (this_01 == (InputField *)0x0) {
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
  pSVar11 = (this_01->fields).m_Text;
  if (pSVar11 == pSVar10) {
    return;
  }
  if (pSVar11 == (String *)0x0) {
code_?:
    if (pSVar10 == (String *)0x0) {
code_?:
      pSVar10 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar10 == (String *)0x0) goto code_?;
    if ((pSVar11->fields)._stringLength == (pSVar10->fields)._stringLength) {
      bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar11->fields)._firstChar,
                         (uint8_t *)&(pSVar10->fields)._firstChar,
                         (longlong)(pSVar11->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar12 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar10 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar10,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_01->fields).m_LineType == 0) {
    if ((pSVar10 == (String *)0x0) ||
       (pSVar10 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar10,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar10 == (String *)0x0)) goto DAT_?;
    pSVar10 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar10,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_01->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_01->fields).m_CharacterValidation == 0)) {
    if (0 < (this_01->fields).m_CharacterLimit) {
      if (pSVar10 == (String *)0x0) goto DAT_?;
      iVar13 = (this_01->fields).m_CharacterLimit;
      if (iVar13 < (pSVar10->fields)._stringLength) {
        pSVar10 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar10,0,iVar13,(MethodInfo *)0x0);
      }
    }
    (this_01->fields).m_Text = pSVar10;
    func_?(&(this_01->fields).m_Text);
  }
  else {
    bVar5 = iRam_? != 0;
    (this_01->fields).m_Text = ::StringLiteral__;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this_01->fields).m_Text >> 0xc);
      lVar14 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar14 + 0xADDR);
        puVar9 = (ulonglong *)(lVar14 + 0xADDR);
        LOCK();
        bVar5 = uVar7 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar7 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pIVar15 = (this_01->fields).m_OnValidateInput;
    if (pIVar15 == (InputField_OnValidateInput *)0x0) {
      pIVar15 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar16 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar5 = iRam_? != 0;
      (pIVar15->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar15->fields)._._.method = pMVar16;
      (pIVar15->fields)._._.m_target = (Object *)this_01;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(pIVar15->fields)._._.m_target >> 0xc);
        lVar14 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar14 + 0xADDR);
          puVar9 = (ulonglong *)(lVar14 + 0xADDR);
          LOCK();
          bVar5 = uVar7 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar7 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      uVar17 = pMVar16->parameters_count;
      (pIVar15->fields)._._.method_code = pIVar15;
      if ((pMVar16->flags & 0x10) == 0) {
        if (uVar17 != 2) goto code_?;
        pcVar2 = FUN_?;
      }
      else if (uVar17 == 3) {
        pcVar2 = FUN_?;
      }
      else {
code_?:
        (pIVar15->fields)._._.method_code = (pIVar15->fields)._._.m_target;
        pcVar2 = (pIVar15->fields)._._.method_ptr;
      }
      (pIVar15->fields)._._.invoke_impl = pcVar2;
      (pIVar15->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar10 == (String *)0x0) goto DAT_?;
    iVar18 = (pSVar10->fields)._stringLength;
    (this_01->fields).m_CaretSelectPosition = iVar18;
    (this_01->fields).m_CaretPosition = iVar18;
    if ((this_01->fields).m_CharacterLimit < 1) {
      iVar13 = (pSVar10->fields)._stringLength;
    }
    else {
      iVar13 = (this_01->fields).m_CharacterLimit;
      iVar19 = (pSVar10->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar19 < iVar13) {
        iVar13 = iVar19;
      }
    }
    uVar6 = 0;
    if (0 < iVar13) {
      puVar20 = &(pSVar10->fields)._firstChar;
      lVar14 = 0;
      do {
        pSVar11 = (this_01->fields).m_Text;
        if (pSVar11 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar10->fields)._stringLength <= (longlong)(ulonglong)uVar6) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pIVar15 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar15->fields)._._.invoke_impl)
                      ((pIVar15->fields)._._.method_code,(this_01->fields).m_Text,
                       (pSVar11->fields)._stringLength,*puVar20,(pIVar15->fields)._._.method);
        if (c != 0) {
          pSVar11 = (this_01->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar11 = mscorlib.dll::System::String::String_Concat_4(pSVar11,str1,(MethodInfo *)0x0);
          (this_01->fields).m_Text = pSVar11;
          func_?(&(this_01->fields).m_Text);
        }
        uVar6 = uVar6 + 1;
        lVar14 = lVar14 + 1;
        puVar20 = puVar20 + 1;
      } while (lVar14 < iVar13);
    }
  }
  if ((this_01->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_01->fields).m_Keyboard,(this_01->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar10 = (this_01->fields).m_Text;
  if (pSVar10 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar13 = (pSVar10->fields)._stringLength;
  if (iVar13 < (this_01->fields).m_CaretPosition) {
    (this_01->fields).m_CaretPosition = iVar13;
  }
  else if ((this_01->fields).m_CaretSelectPosition <= iVar13) goto code_?;
  (this_01->fields).m_CaretSelectPosition = iVar13;
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
            (StringLiteral_InputField_value,(Object_1 *)this_01,(MethodInfo *)0x0);
  if ((this_01->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_01->fields).m_OnValueChanged,
               (Object *)(this_01->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_01,(MethodInfo *)0x0)
  ;
  return;
}


/* Void Initialize(String, Single) */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
               (SettingsInputFieldSlider *this,String *key,float value,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).key = key;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).key >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  inputFieldValue = SettingsInputFieldSlider_GetInputFieldValue(this,value,(MethodInfo *)0x0);
  pSVar6 = SettingsInputFieldSlider_ConvertFloatToString(inputFieldValue,(MethodInfo *)0x0);
  this_00 = (this->fields).inputField;
  if (this_00 == (InputField *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
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
  pSVar8 = (this_00->fields).m_Text;
  if (pSVar8 == pSVar6) {
    return;
  }
  if (pSVar8 == (String *)0x0) {
code_?:
    if (pSVar6 == (String *)0x0) {
code_?:
      pSVar6 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar6 == (String *)0x0) goto code_?;
    if ((pSVar8->fields)._stringLength == (pSVar6->fields)._stringLength) {
      bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar8->fields)._firstChar,
                         (uint8_t *)&(pSVar6->fields)._firstChar,
                         (longlong)(pSVar8->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar6 = mscorlib.dll::System::String::String_Replace_1
                     (pSVar6,::StringLiteral__,
                      (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_00->fields).m_LineType == 0) {
    if ((pSVar6 == (String *)0x0) ||
       (pSVar6 = mscorlib.dll::System::String::String_Replace_1
                           (pSVar6,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar6 == (String *)0x0)) goto DAT_?;
    pSVar6 = mscorlib.dll::System::String::String_Replace_1
                       (pSVar6,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_00->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_00->fields).m_CharacterValidation == 0)) {
    if (0 < (this_00->fields).m_CharacterLimit) {
      if (pSVar6 == (String *)0x0) goto DAT_?;
      iVar10 = (this_00->fields).m_CharacterLimit;
      if (iVar10 < (pSVar6->fields)._stringLength) {
        pSVar6 = mscorlib.dll::System::String::String_Substring_1(pSVar6,0,iVar10,(MethodInfo *)0x0)
        ;
      }
    }
    (this_00->fields).m_Text = pSVar6;
    func_?(&(this_00->fields).m_Text);
  }
  else {
    bVar1 = iRam_? != 0;
    (this_00->fields).m_Text = ::StringLiteral__;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this_00->fields).m_Text >> 0xc);
      lVar11 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar11 + 0xADDR);
        puVar5 = (ulonglong *)(lVar11 + 0xADDR);
        LOCK();
        bVar1 = uVar3 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar3 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pIVar12 = (this_00->fields).m_OnValidateInput;
    if (pIVar12 == (InputField_OnValidateInput *)0x0) {
      pIVar12 = (InputField_OnValidateInput *)
               FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar13 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar1 = iRam_? != 0;
      (pIVar12->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar12->fields)._._.method = pMVar13;
      (pIVar12->fields)._._.m_target = (Object *)this_00;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(pIVar12->fields)._._.m_target >> 0xc);
        lVar11 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar3 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar5 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar1 = uVar3 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar3 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      uVar14 = pMVar13->parameters_count;
      (pIVar12->fields)._._.method_code = pIVar12;
      if ((pMVar13->flags & 0x10) == 0) {
        if (uVar14 != 2) goto code_?;
        pcVar7 = FUN_?;
      }
      else if (uVar14 == 3) {
        pcVar7 = FUN_?;
      }
      else {
code_?:
        (pIVar12->fields)._._.method_code = (pIVar12->fields)._._.m_target;
        pcVar7 = (pIVar12->fields)._._.method_ptr;
      }
      (pIVar12->fields)._._.invoke_impl = pcVar7;
      (pIVar12->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar6 == (String *)0x0) goto DAT_?;
    iVar15 = (pSVar6->fields)._stringLength;
    (this_00->fields).m_CaretSelectPosition = iVar15;
    (this_00->fields).m_CaretPosition = iVar15;
    if ((this_00->fields).m_CharacterLimit < 1) {
      iVar10 = (pSVar6->fields)._stringLength;
    }
    else {
      iVar10 = (this_00->fields).m_CharacterLimit;
      iVar16 = (pSVar6->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar16 < iVar10) {
        iVar10 = iVar16;
      }
    }
    uVar2 = 0;
    if (0 < iVar10) {
      puVar17 = &(pSVar6->fields)._firstChar;
      lVar11 = 0;
      do {
        pSVar8 = (this_00->fields).m_Text;
        if (pSVar8 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar6->fields)._stringLength <= (longlong)(ulonglong)uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (pIVar12 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar12->fields)._._.invoke_impl)
                      ((pIVar12->fields)._._.method_code,(this_00->fields).m_Text,
                       (pSVar8->fields)._stringLength,*puVar17,(pIVar12->fields)._._.method);
        if (c != 0) {
          pSVar8 = (this_00->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar8 = mscorlib.dll::System::String::String_Concat_4(pSVar8,str1,(MethodInfo *)0x0);
          (this_00->fields).m_Text = pSVar8;
          func_?(&(this_00->fields).m_Text);
        }
        uVar2 = uVar2 + 1;
        lVar11 = lVar11 + 1;
        puVar17 = puVar17 + 1;
      } while (lVar11 < iVar10);
    }
  }
  if ((this_00->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_00->fields).m_Keyboard,(this_00->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar6 = (this_00->fields).m_Text;
  if (pSVar6 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = (pSVar6->fields)._stringLength;
  if (iVar10 < (this_00->fields).m_CaretPosition) {
    (this_00->fields).m_CaretPosition = iVar10;
  }
  else if ((this_00->fields).m_CaretSelectPosition <= iVar10) goto code_?;
  (this_00->fields).m_CaretSelectPosition = iVar10;
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
            (StringLiteral_InputField_value,(Object_1 *)this_00,(MethodInfo *)0x0);
  if ((this_00->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_00->fields).m_OnValueChanged,
               (Object *)(this_00->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_00,(MethodInfo *)0x0)
  ;
  return;
}


/* Void Initialize(String, Int32) */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
               (SettingsInputFieldSlider *this,String *key,int32_t value,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).key = key;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).key >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  inputFieldValue = SettingsInputFieldSlider_GetInputFieldValue(this,(float)value,(MethodInfo *)0x0)
  ;
  pSVar6 = SettingsInputFieldSlider_ConvertFloatToString(inputFieldValue,(MethodInfo *)0x0);
  this_00 = (this->fields).inputField;
  if (this_00 == (InputField *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
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
  pSVar8 = (this_00->fields).m_Text;
  if (pSVar8 == pSVar6) {
    return;
  }
  if (pSVar8 == (String *)0x0) {
code_?:
    if (pSVar6 == (String *)0x0) {
code_?:
      pSVar6 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar6 == (String *)0x0) goto code_?;
    if ((pSVar8->fields)._stringLength == (pSVar6->fields)._stringLength) {
      bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar8->fields)._firstChar,
                         (uint8_t *)&(pSVar6->fields)._firstChar,
                         (longlong)(pSVar8->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar6 = mscorlib.dll::System::String::String_Replace_1
                     (pSVar6,::StringLiteral__,
                      (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_00->fields).m_LineType == 0) {
    if ((pSVar6 == (String *)0x0) ||
       (pSVar6 = mscorlib.dll::System::String::String_Replace_1
                           (pSVar6,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar6 == (String *)0x0)) goto DAT_?;
    pSVar6 = mscorlib.dll::System::String::String_Replace_1
                       (pSVar6,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_00->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_00->fields).m_CharacterValidation == 0)) {
    if (0 < (this_00->fields).m_CharacterLimit) {
      if (pSVar6 == (String *)0x0) goto DAT_?;
      iVar10 = (this_00->fields).m_CharacterLimit;
      if (iVar10 < (pSVar6->fields)._stringLength) {
        pSVar6 = mscorlib.dll::System::String::String_Substring_1(pSVar6,0,iVar10,(MethodInfo *)0x0)
        ;
      }
    }
    (this_00->fields).m_Text = pSVar6;
    func_?(&(this_00->fields).m_Text);
  }
  else {
    bVar1 = iRam_? != 0;
    (this_00->fields).m_Text = ::StringLiteral__;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this_00->fields).m_Text >> 0xc);
      lVar11 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar11 + 0xADDR);
        puVar5 = (ulonglong *)(lVar11 + 0xADDR);
        LOCK();
        bVar1 = uVar3 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar3 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pIVar12 = (this_00->fields).m_OnValidateInput;
    if (pIVar12 == (InputField_OnValidateInput *)0x0) {
      pIVar12 = (InputField_OnValidateInput *)
               FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar13 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar1 = iRam_? != 0;
      (pIVar12->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar12->fields)._._.method = pMVar13;
      (pIVar12->fields)._._.m_target = (Object *)this_00;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(pIVar12->fields)._._.m_target >> 0xc);
        lVar11 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar3 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar5 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar1 = uVar3 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar3 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      uVar14 = pMVar13->parameters_count;
      (pIVar12->fields)._._.method_code = pIVar12;
      if ((pMVar13->flags & 0x10) == 0) {
        if (uVar14 != 2) goto code_?;
        pcVar7 = FUN_?;
      }
      else if (uVar14 == 3) {
        pcVar7 = FUN_?;
      }
      else {
code_?:
        (pIVar12->fields)._._.method_code = (pIVar12->fields)._._.m_target;
        pcVar7 = (pIVar12->fields)._._.method_ptr;
      }
      (pIVar12->fields)._._.invoke_impl = pcVar7;
      (pIVar12->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar6 == (String *)0x0) goto DAT_?;
    iVar15 = (pSVar6->fields)._stringLength;
    (this_00->fields).m_CaretSelectPosition = iVar15;
    (this_00->fields).m_CaretPosition = iVar15;
    if ((this_00->fields).m_CharacterLimit < 1) {
      iVar10 = (pSVar6->fields)._stringLength;
    }
    else {
      iVar10 = (this_00->fields).m_CharacterLimit;
      iVar16 = (pSVar6->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar16 < iVar10) {
        iVar10 = iVar16;
      }
    }
    uVar2 = 0;
    if (0 < iVar10) {
      puVar17 = &(pSVar6->fields)._firstChar;
      lVar11 = 0;
      do {
        pSVar8 = (this_00->fields).m_Text;
        if (pSVar8 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar6->fields)._stringLength <= (longlong)(ulonglong)uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (pIVar12 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar12->fields)._._.invoke_impl)
                      ((pIVar12->fields)._._.method_code,(this_00->fields).m_Text,
                       (pSVar8->fields)._stringLength,*puVar17,(pIVar12->fields)._._.method);
        if (c != 0) {
          pSVar8 = (this_00->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar8 = mscorlib.dll::System::String::String_Concat_4(pSVar8,str1,(MethodInfo *)0x0);
          (this_00->fields).m_Text = pSVar8;
          func_?(&(this_00->fields).m_Text);
        }
        uVar2 = uVar2 + 1;
        lVar11 = lVar11 + 1;
        puVar17 = puVar17 + 1;
      } while (lVar11 < iVar10);
    }
  }
  if ((this_00->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_00->fields).m_Keyboard,(this_00->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar6 = (this_00->fields).m_Text;
  if (pSVar6 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = (pSVar6->fields)._stringLength;
  if (iVar10 < (this_00->fields).m_CaretPosition) {
    (this_00->fields).m_CaretPosition = iVar10;
  }
  else if ((this_00->fields).m_CaretSelectPosition <= iVar10) goto code_?;
  (this_00->fields).m_CaretSelectPosition = iVar10;
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
            (StringLiteral_InputField_value,(Object_1 *)this_00,(MethodInfo *)0x0);
  if ((this_00->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_00->fields).m_OnValueChanged,
               (Object *)(this_00->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_00,(MethodInfo *)0x0)
  ;
  return;
}


/* Void InputFieldValueChanged() */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_InputFieldValueChanged
               (SettingsInputFieldSlider *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inputField;
  if ((pIVar1 == (InputField *)0x0) || (pSVar2 = (pIVar1->fields).m_Text, pSVar2 == (String *)0x0))
  {
    FUN_?();
  }
  else {
    bVar3 = mscorlib.dll::System::String::String_EndsWith
                      (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
    if ((((bVar3 != 0) ||
         (bVar3 = mscorlib.dll::System::String::String_EndsWith
                            (pSVar2,::StringLiteral__,(MethodInfo *)0x0), bVar3 != 0)) ||
        ((pSVar2->fields)._stringLength == 0)) ||
       (fVar4 = SettingsInputFieldSlider_ConvertStringToFloat(this,pSVar2,(MethodInfo *)0x0),
       0x7f800000 < (uint)ABS(fVar4))) {
      return;
    }
    fVar4 = SettingsInputFieldSlider_GetInputFieldValue(this,fVar4,(MethodInfo *)0x0);
    pSVar2 = SettingsInputFieldSlider_ConvertFloatToString(fVar4,(MethodInfo *)0x0);
    pIVar1 = (this->fields).inputField;
    if (pIVar1 == (InputField *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
              (pIVar1,pSVar2,1,(MethodInfo *)0x0);
    pIVar1 = (this->fields).inputField;
    if (pIVar1 != (InputField *)0x0) {
      SettingsInputFieldSlider_ValueChanged(this,(pIVar1->fields).m_Text,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_Reset
               (SettingsInputFieldSlider *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__UI__InputField_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::InputField>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (InputField *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__UI__InputField_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::InputField>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).inputField = pIVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).inputField >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void SetText(String) */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_SetText
               (SettingsInputFieldSlider *this,String *text,MethodInfo *method)

{
  pIVar1 = (this->fields).inputField;
  if (pIVar1 == (InputField *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_contentType
            (pIVar1,InputField_ContentType__Enum_Standard,(MethodInfo *)0x0);
  pIVar1 = (this->fields).inputField;
  if (pIVar1 == (InputField *)0x0) goto code_?;
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
  pSVar3 = (pIVar1->fields).m_Text;
  if (pSVar3 == text) {
    return;
  }
  if (pSVar3 == (String *)0x0) {
code_?:
    if (text == (String *)0x0) {
code_?:
      text = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (text == (String *)0x0) goto code_?;
    if ((pSVar3->fields)._stringLength == (text->fields)._stringLength) {
      bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar3->fields)._firstChar,
                         (uint8_t *)&(text->fields)._firstChar,
                         (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar3 = mscorlib.dll::System::String::String_Replace_1
                     (text,::StringLiteral__,
                      (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((pIVar1->fields).m_LineType == 0) {
    if ((pSVar3 == (String *)0x0) ||
       (pSVar3 = mscorlib.dll::System::String::String_Replace_1
                           (pSVar3,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar3 == (String *)0x0)) goto DAT_?;
    pSVar3 = mscorlib.dll::System::String::String_Replace_1
                       (pSVar3,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((pIVar1->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((pIVar1->fields).m_CharacterValidation == 0)) {
    if (0 < (pIVar1->fields).m_CharacterLimit) {
      if (pSVar3 == (String *)0x0) goto DAT_?;
      iVar5 = (pIVar1->fields).m_CharacterLimit;
      if (iVar5 < (pSVar3->fields)._stringLength) {
        pSVar3 = mscorlib.dll::System::String::String_Substring_1(pSVar3,0,iVar5,(MethodInfo *)0x0)
        ;
      }
    }
    (pIVar1->fields).m_Text = pSVar3;
    func_?(&(pIVar1->fields).m_Text);
  }
  else {
    bVar6 = iRam_? != 0;
    (pIVar1->fields).m_Text = ::StringLiteral__;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&(pIVar1->fields).m_Text >> 0xc);
      lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar6 = uVar9 == *puVar10;
        if (bVar6) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pIVar11 = (pIVar1->fields).m_OnValidateInput;
    if (pIVar11 == (InputField_OnValidateInput *)0x0) {
      pIVar11 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar12 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar6 = iRam_? != 0;
      (pIVar11->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar11->fields)._._.method = pMVar12;
      (pIVar11->fields)._._.m_target = (Object *)pIVar1;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(pIVar11->fields)._._.m_target >> 0xc);
        lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      uVar13 = pMVar12->parameters_count;
      (pIVar11->fields)._._.method_code = pIVar11;
      if ((pMVar12->flags & 0x10) == 0) {
        if (uVar13 != 2) goto code_?;
        pcVar2 = FUN_?;
      }
      else if (uVar13 == 3) {
        pcVar2 = FUN_?;
      }
      else {
code_?:
        (pIVar11->fields)._._.method_code = (pIVar11->fields)._._.m_target;
        pcVar2 = (pIVar11->fields)._._.method_ptr;
      }
      (pIVar11->fields)._._.invoke_impl = pcVar2;
      (pIVar11->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar3 == (String *)0x0) goto DAT_?;
    iVar14 = (pSVar3->fields)._stringLength;
    (pIVar1->fields).m_CaretSelectPosition = iVar14;
    (pIVar1->fields).m_CaretPosition = iVar14;
    if ((pIVar1->fields).m_CharacterLimit < 1) {
      iVar5 = (pSVar3->fields)._stringLength;
    }
    else {
      iVar5 = (pIVar1->fields).m_CharacterLimit;
      iVar15 = (pSVar3->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar15 < iVar5) {
        iVar5 = iVar15;
      }
    }
    uVar7 = 0;
    if (0 < iVar5) {
      puVar16 = &(pSVar3->fields)._firstChar;
      lVar8 = 0;
      do {
        pSVar17 = (pIVar1->fields).m_Text;
        if (pSVar17 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar3->fields)._stringLength <= (longlong)(ulonglong)uVar7) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pIVar11 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar11->fields)._._.invoke_impl)
                      ((pIVar11->fields)._._.method_code,(pIVar1->fields).m_Text,
                       (pSVar17->fields)._stringLength,*puVar16,(pIVar11->fields)._._.method);
        if (c != 0) {
          pSVar17 = (pIVar1->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar17 = mscorlib.dll::System::String::String_Concat_4(pSVar17,str1,(MethodInfo *)0x0);
          (pIVar1->fields).m_Text = pSVar17;
          func_?(&(pIVar1->fields).m_Text);
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
        puVar16 = puVar16 + 1;
      } while (lVar8 < iVar5);
    }
  }
  if ((pIVar1->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((pIVar1->fields).m_Keyboard,(pIVar1->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar3 = (pIVar1->fields).m_Text;
  if (pSVar3 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = (pSVar3->fields)._stringLength;
  if (iVar5 < (pIVar1->fields).m_CaretPosition) {
    (pIVar1->fields).m_CaretPosition = iVar5;
  }
  else if ((pIVar1->fields).m_CaretSelectPosition <= iVar5) goto code_?;
  (pIVar1->fields).m_CaretSelectPosition = iVar5;
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
            (StringLiteral_InputField_value,(Object_1 *)pIVar1,(MethodInfo *)0x0);
  if ((pIVar1->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(pIVar1->fields).m_OnValueChanged,
               (Object *)(pIVar1->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(pIVar1,(MethodInfo *)0x0);
  return;
}


/* Void SliderValueChanged() */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_SliderValueChanged
               (SettingsInputFieldSlider *this,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsSlider;
  if ((pSVar1 != (SettingsSlider *)0x0) &&
     (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
    fVar3 = (float)(*(pSVar2->klass->vtable).get_value.methodPtr)();
    fVar3 = SettingsInputFieldSlider_GetInputFieldValue(this,fVar3,(MethodInfo *)0x0);
    pIVar4 = (this->fields).inputField;
    pSVar5 = SettingsInputFieldSlider_ConvertFloatToString(fVar3,(MethodInfo *)0x0);
    if (pIVar4 != (InputField *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                (pIVar4,pSVar5,1,(MethodInfo *)0x0);
      pIVar4 = (this->fields).inputField;
      if (pIVar4 != (InputField *)0x0) {
        pSVar5 = (pIVar4->fields).m_Text;
        if (cRam_? == '\0') {
          FUN_?(&
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__SettingsInputFieldSlider____c__DisplayClass18_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__SettingsInputFieldSlider____c__DisplayClass18_0);
          LOCK();
          UNLOCK();
          FUN_?(&::StringLiteral__);
          LOCK();
          UNLOCK();
          FUN_?(&::StringLiteral__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        object = (Object *)FUN_?(TypeInfo__SettingsInputFieldSlider____c__DisplayClass18_0);
        if (object != (Object *)0x0) {
          bVar6 = iRam_? != 0;
          object[1].klass = (Object__Class *)this;
          if (bVar6) {
            uVar7 = (uint)((ulonglong)(object + 1) >> 0xc);
            uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
            do {
              uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
              puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
              LOCK();
              bVar6 = uVar9 == *puVar10;
              if (bVar6) {
                *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (!bVar6);
          }
          fVar3 = SettingsInputFieldSlider_ConvertStringToFloat(this,pSVar5,(MethodInfo *)0x0);
          *(float *)&object[1].monitor = fVar3;
          if ((pSVar5 != (String *)0x0) &&
             (pIVar4 = (this->fields).inputField, pIVar4 != (InputField *)0x0)) {
            if ((pIVar4->fields).m_CharacterLimit < (pSVar5->fields)._stringLength) {
              pSVar5 = mscorlib.dll::System::String::String_Remove_1
                                  (pSVar5,(((this->fields).inputField)->fields).m_CharacterLimit,
                                   (MethodInfo *)0x0);
            }
            str1 = ::StringLiteral__;
            pSVar11 = (this->fields).suffix;
            if ((pSVar11 != ::StringLiteral__) &&
               ((((pSVar11 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
                 ((pSVar11->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) ||
                (bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                    ((uint8_t *)&(pSVar11->fields)._firstChar,
                                     (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                                     (longlong)(pSVar11->fields)._stringLength * 2,(MethodInfo *)0x0)
                , bVar12 == 0)))) {
              str1 = mscorlib.dll::System::String::String_Concat_4
                               (::StringLiteral__,(this->fields).suffix,(MethodInfo *)0x0);
            }
            pIVar4 = (this->fields).inputField;
            pSVar5 = mscorlib.dll::System::String::String_Concat_4(pSVar5,str1,(MethodInfo *)0x0);
            if (pIVar4 != (InputField *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                        (pIVar4,pSVar5,1,(MethodInfo *)0x0);
              pSVar1 = (this->fields).settingsSlider;
              if ((pSVar1 != (SettingsSlider *)0x0) &&
                 (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
                (*(pSVar2->klass->vtable).set_value.methodPtr)
                          (pSVar2,*(undefined4 *)&object[1].monitor,
                           (pSVar2->klass->vtable).set_value.method);
                pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                                       );
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System
                ::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                          (this_01,object,
                           MethodInfo__SettingsInputFieldSlider____c__DisplayClass18_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                pMVar14 = 
                UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
                ;
                if ((
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
                    ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                  FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                               );
                  LOCK();
                  UNLOCK();
                  if ((pMVar14->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                    FUN_?(pMVar14);
                  }
                }
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_GetEventChain
                          (pGVar13,(IList_1_UnityEngine_Transform_ *)
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields
                                   ->s_InternalTransformList,(MethodInfo *)0x0);
                pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList;
                if (pLVar15 != (List_1_UnityEngine_Transform_ *)0x0) {
                  lVar16 = (longlong)(pLVar15->fields)._size;
                  uVar7 = 0;
                  if (0 < lVar16) {
                    lVar17 = 0;
                    lVar18 = 0x20;
                    do {
                      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                   field_0x1c == 0) {
                        FUN_?();
                      }
                      pLVar15 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                               s_InternalTransformList;
                      if (pLVar15 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                      if ((uint)(pLVar15->fields)._size <= uVar7) {
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                        pcVar19 = (code *)swi(3);
                        (*pcVar19)();
                        return;
                      }
                      pTVar20 = (pLVar15->fields)._items;
                      if (pTVar20 == (Transform__Array *)0x0) goto code_?;
                      if ((uint)pTVar20->max_length <= uVar7) {
                        FUN_?();
                        pcVar19 = (code *)swi(3);
                        (*pcVar19)();
                        return;
                      }
                      this_00 = *(Component **)((longlong)pTVar20->vector + lVar18 + -0x20);
                      if (this_00 == (Component *)0x0) goto code_?;
                      pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject(this_00,(MethodInfo *)0x0);
                      bVar12 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                               ExecuteEvents_Execute_18
                                         (pGVar13,(BaseEventData *)0x0,this_01,
                                          (pMVar14->field7_0x38).rgctx_data[1].method);
                      if (bVar12 != 0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
                        return;
                      }
                      uVar7 = uVar7 + 1;
                      lVar17 = lVar17 + 1;
                      lVar18 = lVar18 + 8;
                    } while (lVar17 < lVar16);
                  }
                  return;
                }
code_?:
                FUN_?();
                pcVar19 = (code *)swi(3);
                (*pcVar19)();
                return;
              }
            }
          }
        }
        FUN_?();
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
    }
  }
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_Update
               (SettingsInputFieldSlider *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inputField;
  if (pIVar1 == (InputField *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pIVar1->fields).m_AllowInput == 0) {
    return;
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper__InputSuppression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = (MVInputWrapper_InputSuppression *)
           FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
  pIVar4 = (pMVar3->klass->vtable).set_IsSuppressed.methodPtr;
  (*pIVar4)(pMVar3,CONCAT71((int7)((ulonglong)method >> 8),1),
            (pMVar3->klass->vtable).set_IsSuppressed.method,pIVar4,unaff_RBX);
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed = pMVar3;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed >>
                  0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return;
}


/* Void ValueChanged(String) */

void Assembly-CSharp.dll::SettingsInputFieldSlider::SettingsInputFieldSlider_ValueChanged
               (SettingsInputFieldSlider *this,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SettingsInputFieldSlider____c__DisplayClass18_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SettingsInputFieldSlider____c__DisplayClass18_0);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__SettingsInputFieldSlider____c__DisplayClass18_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    fVar6 = SettingsInputFieldSlider_ConvertStringToFloat(this,value,(MethodInfo *)0x0);
    *(float *)&object[1].monitor = fVar6;
    if ((value != (String *)0x0) &&
       (pIVar7 = (this->fields).inputField, pIVar7 != (InputField *)0x0)) {
      if ((pIVar7->fields).m_CharacterLimit < (value->fields)._stringLength) {
        value = mscorlib.dll::System::String::String_Remove_1
                          (value,(((this->fields).inputField)->fields).m_CharacterLimit,
                           (MethodInfo *)0x0);
      }
      str1 = ::StringLiteral__;
      pSVar8 = (this->fields).suffix;
      if ((pSVar8 != ::StringLiteral__) &&
         ((((pSVar8 == (String *)0x0 || (::StringLiteral__ == (String *)0x0)) ||
           ((pSVar8->fields)._stringLength != (::StringLiteral__->fields)._stringLength)) ||
          (bVar9 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar8->fields)._firstChar,
                               (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                               (longlong)(pSVar8->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar9 == 0)))) {
        str1 = mscorlib.dll::System::String::String_Concat_4
                         (::StringLiteral__,(this->fields).suffix,(MethodInfo *)0x0);
      }
      pIVar7 = (this->fields).inputField;
      pSVar8 = mscorlib.dll::System::String::String_Concat_4(value,str1,(MethodInfo *)0x0);
      if (pIVar7 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_SetText
                  (pIVar7,pSVar8,1,(MethodInfo *)0x0);
        pSVar10 = (this->fields).settingsSlider;
        if ((pSVar10 != (SettingsSlider *)0x0) &&
           (pSVar11 = (pSVar10->fields).slider, pSVar11 != (Slider *)0x0)) {
          (*(pSVar11->klass->vtable).set_value.methodPtr)
                    (pSVar11,*(undefined4 *)&object[1].monitor,
                     (pSVar11->klass->vtable).set_value.method);
          pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_01,object,
                     MethodInfo__SettingsInputFieldSlider____c__DisplayClass18_0___ValueChanged_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar13 = 
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
          ;
          if ((
              UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                         );
            LOCK();
            UNLOCK();
            if ((pMVar13->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(pMVar13);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                    (pGVar12,(IList_1_UnityEngine_Transform_ *)
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                             s_InternalTransformList,(MethodInfo *)0x0);
          pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                   s_InternalTransformList;
          if (pLVar14 != (List_1_UnityEngine_Transform_ *)0x0) {
            lVar15 = (longlong)(pLVar14->fields)._size;
            uVar2 = 0;
            if (0 < lVar15) {
              lVar16 = 0;
              lVar17 = 0x20;
              do {
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList;
                if (pLVar14 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
                if ((uint)(pLVar14->fields)._size <= uVar2) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
                pTVar19 = (pLVar14->fields)._items;
                if (pTVar19 == (Transform__Array *)0x0) goto code_?;
                if ((uint)pTVar19->max_length <= uVar2) {
                  FUN_?();
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
                this_00 = *(Component **)((longlong)pTVar19->vector + lVar17 + -0x20);
                if (this_00 == (Component *)0x0) goto code_?;
                pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject(this_00,(MethodInfo *)0x0);
                bVar9 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                         ExecuteEvents_Execute_18
                                   (pGVar12,(BaseEventData *)0x0,this_01,
                                    (pMVar13->field7_0x38).rgctx_data[1].method);
                if (bVar9 != 0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
                  return;
                }
                uVar2 = uVar2 + 1;
                lVar16 = lVar16 + 1;
                lVar17 = lVar17 + 8;
              } while (lVar16 < lVar15);
            }
            return;
          }
code_?:
          FUN_?();
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}

