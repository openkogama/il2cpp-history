
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::WindTurbineSettings::WindTurbineSettings_Initialize
               (WindTurbineSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
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
    FUN_?(&StringLiteral_windSize);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_windPitch);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  if (this_00 == (SettingsBase *)0x0) goto code_?;
  uVar1 = 0;
  SettingsBase::SettingsBase_Initialize
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_WindTurbine,(MethodInfo *)0x0);
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
    lVar2 = lRam_?;
    uStackX_8 = (String *)((ulonglong)uStackX_8._4_4_ << 0x20);
    pSVar3 = uStackX_8;
    if ((*(int *)(lRam_? + 0x28) < 0) &&
       ((*(longlong *)(lRam_? + 0x60) == 0 ||
        (pSVar3 = (String *)0x0, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
      pSVar3 = (String *)FUN_?(lRam_?);
      FUN_?(&pSVar3->fields,&uStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar1 = 0xADDR;
        uVar4 = (uint)((ulonglong)&pSVar3->fields >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
    if (this_03 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
    uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_03,
               (Object *)StringLiteral_windPitch,(Object *)pSVar3,(InsertionBehavior__Enum)uVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    lStackX_10 = CONCAT44(lStackX_10._4_4_,10);
    pOVar9 = (Object *)FUN_?(lRam_?,&lStackX_10);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_03,(Object *)StringLiteral_windSize
               ,pOVar9,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pSVar10 = (this->fields).pitchSlider;
  }
  else {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_02,woID,(MethodInfo *)0x0), pMVar11 == (MVWorldObjectClient *)0x0))
    goto code_?;
    this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)(pMVar11->fields)._.data;
    pSVar10 = (this->fields).pitchSlider;
    if (this_03 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
  }
  pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_03,
                       (Object *)StringLiteral_windPitch,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar12 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar9,(MethodInfo *)0x0);
  if (pSVar10 == (SettingsSlider *)0x0) {
code_?:
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  SettingsSlider::SettingsSlider_Initialize_1
            (pSVar10,StringLiteral_windPitch,iVar12,0,0xb4,(MethodInfo *)0x0);
  pSVar14 = (this->fields).pitchInputField;
  pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_03,
                       (Object *)StringLiteral_windPitch,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  iVar12 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar9,(MethodInfo *)0x0);
  if (pSVar14 == (SettingsInputFieldSlider *)0x0) goto code_?;
  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
            (pSVar14,StringLiteral_windPitch,(float)iVar12,(MethodInfo *)0x0);
  pSVar10 = (this->fields).powerSlider;
  pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_03,
                       (Object *)StringLiteral_windSize,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  iVar12 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar9,(MethodInfo *)0x0);
  if (pSVar10 == (SettingsSlider *)0x0) goto code_?;
  SettingsSlider::SettingsSlider_Initialize_1
            (pSVar10,StringLiteral_windSize,iVar12,1,0x14,(MethodInfo *)0x0);
  pSVar14 = (this->fields).powerInputField;
  pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_03,
                       (Object *)StringLiteral_windSize,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  iVar12 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar9,(MethodInfo *)0x0);
  if (pSVar14 == (SettingsInputFieldSlider *)0x0) goto code_?;
  bVar8 = iRam_? != 0;
  (pSVar14->fields).key = StringLiteral_windSize;
  if (bVar8) {
    uVar4 = (uint)((ulonglong)&(pSVar14->fields).key >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  inputFieldValue =
       SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                 (pSVar14,(float)iVar12,(MethodInfo *)0x0);
  pSVar3 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (inputFieldValue,(MethodInfo *)0x0);
  this_01 = (pSVar14->fields).inputField;
  if (this_01 == (InputField *)0x0) {
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
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
  pSVar15 = (this_01->fields).m_Text;
  if (pSVar15 == pSVar3) {
    return;
  }
  if (pSVar15 == (String *)0x0) {
code_?:
    if (pSVar3 == (String *)0x0) {
code_?:
      pSVar3 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar3 == (String *)0x0) goto code_?;
    if ((pSVar15->fields)._stringLength == (pSVar3->fields)._stringLength) {
      bVar16 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar15->fields)._firstChar,
                         (uint8_t *)&(pSVar3->fields)._firstChar,
                         (longlong)(pSVar15->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar16 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar3 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar3,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_01->fields).m_LineType == 0) {
    if ((pSVar3 == (String *)0x0) ||
       (pSVar3 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar3,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar3 == (String *)0x0)) goto DAT_?;
    pSVar3 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar3,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_01->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_01->fields).m_CharacterValidation == 0)) {
    if (0 < (this_01->fields).m_CharacterLimit) {
      if (pSVar3 == (String *)0x0) goto DAT_?;
      iVar17 = (this_01->fields).m_CharacterLimit;
      if (iVar17 < (pSVar3->fields)._stringLength) {
        pSVar3 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar3,0,iVar17,(MethodInfo *)0x0);
      }
    }
    (this_01->fields).m_Text = pSVar3;
    func_?(&(this_01->fields).m_Text);
  }
  else {
    bVar8 = iRam_? != 0;
    (this_01->fields).m_Text = ::StringLiteral__;
    if (bVar8) {
      uVar4 = (uint)((ulonglong)&(this_01->fields).m_Text >> 0xc);
      lVar2 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar7 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar8 = uVar5 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar5 | 1L << (uVar4 & 0x3f);
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
        uVar4 = (uint)((ulonglong)&(pIVar18->fields)._._.m_target >> 0xc);
        lVar2 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar2 + 0xADDR);
          puVar7 = (ulonglong *)(lVar2 + 0xADDR);
          LOCK();
          bVar8 = uVar5 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar5 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      uVar20 = pMVar19->parameters_count;
      (pIVar18->fields)._._.method_code = pIVar18;
      if ((pMVar19->flags & 0x10) == 0) {
        if (uVar20 != 2) goto code_?;
        pcVar13 = FUN_?;
      }
      else if (uVar20 == 3) {
        pcVar13 = FUN_?;
      }
      else {
code_?:
        (pIVar18->fields)._._.method_code = (pIVar18->fields)._._.m_target;
        pcVar13 = (pIVar18->fields)._._.method_ptr;
      }
      (pIVar18->fields)._._.invoke_impl = pcVar13;
      (pIVar18->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar3 == (String *)0x0) goto DAT_?;
    iVar12 = (pSVar3->fields)._stringLength;
    (this_01->fields).m_CaretSelectPosition = iVar12;
    (this_01->fields).m_CaretPosition = iVar12;
    if ((this_01->fields).m_CharacterLimit < 1) {
      iVar17 = (pSVar3->fields)._stringLength;
    }
    else {
      iVar17 = (this_01->fields).m_CharacterLimit;
      iVar21 = (pSVar3->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar21 < iVar17) {
        iVar17 = iVar21;
      }
    }
    uVar4 = 0;
    if (0 < iVar17) {
      lStackX_10 = (longlong)iVar17;
      puVar22 = &(pSVar3->fields)._firstChar;
      lVar2 = 0;
      do {
        pSVar15 = (this_01->fields).m_Text;
        if (pSVar15 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar3->fields)._stringLength <= (longlong)(ulonglong)uVar4) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        if (pIVar18 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar18->fields)._._.invoke_impl)
                      ((pIVar18->fields)._._.method_code,(this_01->fields).m_Text,
                       (pSVar15->fields)._stringLength,*puVar22,(pIVar18->fields)._._.method);
        if (c != 0) {
          uStackX_8 = (this_01->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          pSVar15 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar15 = mscorlib.dll::System::String::String_Concat_4
                              (uStackX_8,pSVar15,(MethodInfo *)0x0);
          (this_01->fields).m_Text = pSVar15;
          func_?(&(this_01->fields).m_Text);
        }
        uVar4 = uVar4 + 1;
        lVar2 = lVar2 + 1;
        puVar22 = puVar22 + 1;
      } while (lVar2 < lStackX_10);
    }
  }
  if ((this_01->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_01->fields).m_Keyboard,(this_01->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar3 = (this_01->fields).m_Text;
  if (pSVar3 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar17 = (pSVar3->fields)._stringLength;
  if (iVar17 < (this_01->fields).m_CaretPosition) {
    (this_01->fields).m_CaretPosition = iVar17;
  }
  else if ((this_01->fields).m_CaretSelectPosition <= iVar17) goto code_?;
  (this_01->fields).m_CaretSelectPosition = iVar17;
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


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::WindTurbineSettings::WindTurbineSettings_OnSettingChanged
               (WindTurbineSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Setting_changed_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  str2 = ::StringLiteral__;
  pSVar1 = StringLiteral_Setting_changed_;
  if (value == (Object *)0x0) {
    str3 = (String *)0x0;
  }
  else {
    str3 = (String *)
           (*(value->klass->vtable).ToString.methodPtr)
                     (value,(value->klass->vtable).ToString.method);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_6(pSVar1,key,str2,str3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pSVar2 = (this->fields).settingsBase;
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
  afStackX_10[0] =
       mscorlib.dll::System::Convert::Convert_ToSingle_1
                 (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
  value_00 = (Object *)FUN_?(uRam_?,afStackX_10);
  if (pSVar2 != (SettingsBase *)0x0) {
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
    if ((((pSVar2->fields).woID != -1) && (key != (String *)0x0)) &&
       ((key->fields)._stringLength != 0)) {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClientManager *)0x0) {
        wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_01,(pSVar2->fields).woID,(MethodInfo *)0x0);
        if (wo == (MVWorldObjectClient *)0x0) {
          return;
        }
        if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
          FUN_?();
        }
        uVar3 = 0;
        WorldObjectDataValidator::WorldObjectDataValidator_Validate
                  (wo,key,value_00,(MethodInfo *)0x0);
        this_00 = (pSVar2->fields).result;
        if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    (this_00,(Object *)key,value_00,(InsertionBehavior__Enum)uVar3,
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
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
            (*(wo->klass->vtable).PartialUpdateWOData.methodPtr)
                      (wo,this_02,(wo->klass->vtable).PartialUpdateWOData.method);
            return;
          }
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

