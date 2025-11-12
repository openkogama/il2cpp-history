
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::PulseBoxSettings::PulseBoxSettings_Initialize
               (PulseBoxSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
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
    FUN_?(&StringLiteral_intervalOff);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_intervalOn);
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
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_PulseBox,(MethodInfo *)0x0);
  if (woID == -1) {
    this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_03,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    lStackX_10 = CONCAT44(lStackX_10._4_4_,0x3f000000);
    pOVar3 = (Object *)FUN_?(uRam_?,&lStackX_10);
    if (this_03 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_03,
               (Object *)StringLiteral_intervalOn,pOVar3,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    lStackX_10 = CONCAT44(lStackX_10._4_4_,0x3f000000);
    pOVar3 = (Object *)FUN_?(uRam_?,&lStackX_10);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_03,
               (Object *)StringLiteral_intervalOff,pOVar3,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  else {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_02 == (MVWorldObjectClientManager *)0x0) ||
        (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (this_02,woID,(MethodInfo *)0x0), pMVar4 == (MVWorldObjectClient *)0x0
        )) || (this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                          *)(pMVar4->fields)._.data,
              this_03 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0)) goto code_?;
  }
  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_03,
                       (Object *)StringLiteral_intervalOn,
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
  fVar5 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                     (pOVar3,(IFormatProvider *)provider,(MethodInfo *)0x0);
  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_03,
                       (Object *)StringLiteral_intervalOff,
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
  pSVar6 = (this->fields).enabledSlider;
  if (pSVar6 == (SettingsSlider *)0x0) goto code_?;
  SettingsSlider::SettingsSlider_Initialize
            (pSVar6,StringLiteral_intervalOn,fVar5,_UNK_?,_UNK_?,(MethodInfo *)0x0)
  ;
  pSVar7 = (this->fields).enabledInputField;
  if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
            (pSVar7,StringLiteral_intervalOn,fVar5,(MethodInfo *)0x0);
  pSVar6 = (this->fields).disabledSlider;
  if (pSVar6 == (SettingsSlider *)0x0) goto code_?;
  SettingsSlider::SettingsSlider_Initialize
            (pSVar6,StringLiteral_intervalOff,value,_UNK_?,maxValue,(MethodInfo *)0x0);
  pSVar7 = (this->fields).disabledInputField;
  if (pSVar7 == (SettingsInputFieldSlider *)0x0) goto code_?;
  bVar8 = iRam_? != 0;
  (pSVar7->fields).key = StringLiteral_intervalOff;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&(pSVar7->fields).key >> 0xc);
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
  fVar5 = SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                     (pSVar7,value,(MethodInfo *)0x0);
  pSVar13 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (fVar5,(MethodInfo *)0x0);
  this_01 = (pSVar7->fields).inputField;
  if (this_01 == (InputField *)0x0) {
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
  pSVar14 = (this_01->fields).m_Text;
  if (pSVar14 == pSVar13) {
    return;
  }
  if (pSVar14 == (String *)0x0) {
code_?:
    if (pSVar13 == (String *)0x0) {
code_?:
      pSVar13 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar13 == (String *)0x0) goto code_?;
    if ((pSVar14->fields)._stringLength == (pSVar13->fields)._stringLength) {
      bVar15 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar14->fields)._firstChar,
                         (uint8_t *)&(pSVar13->fields)._firstChar,
                         (longlong)(pSVar14->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar13 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar13,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_01->fields).m_LineType == 0) {
    if ((pSVar13 == (String *)0x0) ||
       (pSVar13 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar13,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar13 == (String *)0x0)) goto DAT_?;
    pSVar13 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar13,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_01->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_01->fields).m_CharacterValidation == 0)) {
    if (0 < (this_01->fields).m_CharacterLimit) {
      if (pSVar13 == (String *)0x0) goto DAT_?;
      iVar16 = (this_01->fields).m_CharacterLimit;
      if (iVar16 < (pSVar13->fields)._stringLength) {
        pSVar13 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar13,0,iVar16,(MethodInfo *)0x0);
      }
    }
    (this_01->fields).m_Text = pSVar13;
    func_?(&(this_01->fields).m_Text);
  }
  else {
    bVar8 = iRam_? != 0;
    (this_01->fields).m_Text = ::StringLiteral__;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(this_01->fields).m_Text >> 0xc);
      lVar17 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar17 + 0xADDR);
        puVar12 = (ulonglong *)(lVar17 + 0xADDR);
        LOCK();
        bVar8 = uVar10 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar10 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pIVar18 = (this_01->fields).m_OnValidateInput;
    if (pIVar18 == (InputField_OnValidateInput *)0x0) {
      pIVar18 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar19 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar8 = iRam_? != 0;
      (pIVar18->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar18->fields)._._.method = pMVar19;
      (pIVar18->fields)._._.m_target = (Object *)this_01;
      if (bVar8) {
        uVar9 = (uint)((ulonglong)&(pIVar18->fields)._._.m_target >> 0xc);
        lVar17 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar17 + 0xADDR);
          puVar12 = (ulonglong *)(lVar17 + 0xADDR);
          LOCK();
          bVar8 = uVar10 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar10 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      uVar20 = pMVar19->parameters_count;
      (pIVar18->fields)._._.method_code = pIVar18;
      if ((pMVar19->flags & 0x10) == 0) {
        if (uVar20 != 2) goto code_?;
        pcVar1 = FUN_?;
      }
      else if (uVar20 == 3) {
        pcVar1 = FUN_?;
      }
      else {
code_?:
        (pIVar18->fields)._._.method_code = (pIVar18->fields)._._.m_target;
        pcVar1 = (pIVar18->fields)._._.method_ptr;
      }
      (pIVar18->fields)._._.invoke_impl = pcVar1;
      (pIVar18->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar13 == (String *)0x0) goto DAT_?;
    iVar21 = (pSVar13->fields)._stringLength;
    (this_01->fields).m_CaretSelectPosition = iVar21;
    (this_01->fields).m_CaretPosition = iVar21;
    if ((this_01->fields).m_CharacterLimit < 1) {
      iVar16 = (pSVar13->fields)._stringLength;
    }
    else {
      iVar16 = (this_01->fields).m_CharacterLimit;
      iVar22 = (pSVar13->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar22 < iVar16) {
        iVar16 = iVar22;
      }
    }
    uVar9 = 0;
    if (0 < iVar16) {
      lStackX_10 = (longlong)iVar16;
      puVar23 = &(pSVar13->fields)._firstChar;
      lVar17 = 0;
      do {
        pSVar14 = (this_01->fields).m_Text;
        if (pSVar14 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar13->fields)._stringLength <= (longlong)(ulonglong)uVar9) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (pIVar18 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar18->fields)._._.invoke_impl)
                      ((pIVar18->fields)._._.method_code,(this_01->fields).m_Text,
                       (pSVar14->fields)._stringLength,*puVar23,(pIVar18->fields)._._.method);
        if (c != 0) {
          pSVar14 = (this_01->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar14 = mscorlib.dll::System::String::String_Concat_4(pSVar14,str1,(MethodInfo *)0x0);
          (this_01->fields).m_Text = pSVar14;
          func_?(&(this_01->fields).m_Text);
        }
        uVar9 = uVar9 + 1;
        lVar17 = lVar17 + 1;
        puVar23 = puVar23 + 1;
      } while (lVar17 < lStackX_10);
    }
  }
  if ((this_01->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_01->fields).m_Keyboard,(this_01->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar13 = (this_01->fields).m_Text;
  if (pSVar13 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar16 = (pSVar13->fields)._stringLength;
  if (iVar16 < (this_01->fields).m_CaretPosition) {
    (this_01->fields).m_CaretPosition = iVar16;
  }
  else if ((this_01->fields).m_CaretSelectPosition <= iVar16) goto code_?;
  (this_01->fields).m_CaretSelectPosition = iVar16;
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

