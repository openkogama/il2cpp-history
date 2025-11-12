
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::ShootablePlateSettings::ShootablePlateSettings_Initialize
               (ShootablePlateSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

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
            (this_00,woID,root,MVWorldObjectDocumentationType__Enum_ShootableButton,
             (MethodInfo *)0x0);
  this_05 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((this_05 == (MVWorldObjectClientManager *)0x0) ||
      (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_05,woID,(MethodInfo *)0x0), pMVar2 == (MVWorldObjectClient *)0x0))
     || (this_01 = (pMVar2->fields)._.data,
        this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0)) goto code_?;
  value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__get_Item
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
  fVar3 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                     (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
  this_02 = (this->fields).slider;
  if (this_02 == (SettingsSlider *)0x0) goto code_?;
  SettingsSlider::SettingsSlider_Initialize
            (this_02,StringLiteral_duration,fVar3,_UNK_?,_UNK_?,(MethodInfo *)0x0);
  this_03 = (this->fields).inputField;
  if (this_03 == (SettingsInputFieldSlider *)0x0) goto code_?;
  bVar4 = iRam_? != 0;
  (this_03->fields).key = StringLiteral_duration;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this_03->fields).key >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  fVar3 = SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                     (this_03,fVar3,(MethodInfo *)0x0);
  pSVar9 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                     (fVar3,(MethodInfo *)0x0);
  this_04 = (this_03->fields).inputField;
  if (this_04 == (InputField *)0x0) {
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
  pSVar10 = (this_04->fields).m_Text;
  if (pSVar10 == pSVar9) {
    return;
  }
  if (pSVar10 == (String *)0x0) {
code_?:
    if (pSVar9 == (String *)0x0) {
code_?:
      pSVar9 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar9 == (String *)0x0) goto code_?;
    if ((pSVar10->fields)._stringLength == (pSVar9->fields)._stringLength) {
      bVar11 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar10->fields)._firstChar,
                         (uint8_t *)&(pSVar9->fields)._firstChar,
                         (longlong)(pSVar10->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar11 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar9 = mscorlib.dll::System::String::String_Replace_1
                     (pSVar9,::StringLiteral__,
                      (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_04->fields).m_LineType == 0) {
    if ((pSVar9 == (String *)0x0) ||
       (pSVar9 = mscorlib.dll::System::String::String_Replace_1
                           (pSVar9,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar9 == (String *)0x0)) goto DAT_?;
    pSVar9 = mscorlib.dll::System::String::String_Replace_1
                       (pSVar9,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_04->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_04->fields).m_CharacterValidation == 0)) {
    if (0 < (this_04->fields).m_CharacterLimit) {
      if (pSVar9 == (String *)0x0) goto DAT_?;
      iVar12 = (this_04->fields).m_CharacterLimit;
      if (iVar12 < (pSVar9->fields)._stringLength) {
        pSVar9 = mscorlib.dll::System::String::String_Substring_1(pSVar9,0,iVar12,(MethodInfo *)0x0)
        ;
      }
    }
    (this_04->fields).m_Text = pSVar9;
    func_?(&(this_04->fields).m_Text);
  }
  else {
    bVar4 = iRam_? != 0;
    (this_04->fields).m_Text = ::StringLiteral__;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this_04->fields).m_Text >> 0xc);
      lVar13 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar13 + 0xADDR);
        puVar8 = (ulonglong *)(lVar13 + 0xADDR);
        LOCK();
        bVar4 = uVar6 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar6 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pIVar14 = (this_04->fields).m_OnValidateInput;
    if (pIVar14 == (InputField_OnValidateInput *)0x0) {
      pIVar14 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar15 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar4 = iRam_? != 0;
      (pIVar14->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar14->fields)._._.method = pMVar15;
      (pIVar14->fields)._._.m_target = (Object *)this_04;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(pIVar14->fields)._._.m_target >> 0xc);
        lVar13 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar13 + 0xADDR);
          puVar8 = (ulonglong *)(lVar13 + 0xADDR);
          LOCK();
          bVar4 = uVar6 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar6 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
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
    if (pSVar9 == (String *)0x0) goto DAT_?;
    iVar17 = (pSVar9->fields)._stringLength;
    (this_04->fields).m_CaretSelectPosition = iVar17;
    (this_04->fields).m_CaretPosition = iVar17;
    if ((this_04->fields).m_CharacterLimit < 1) {
      iVar12 = (pSVar9->fields)._stringLength;
    }
    else {
      iVar12 = (this_04->fields).m_CharacterLimit;
      iVar18 = (pSVar9->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar18 < iVar12) {
        iVar12 = iVar18;
      }
    }
    uVar5 = 0;
    if (0 < iVar12) {
      puVar19 = &(pSVar9->fields)._firstChar;
      lVar13 = 0;
      do {
        pSVar10 = (this_04->fields).m_Text;
        if (pSVar10 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar9->fields)._stringLength <= (longlong)(ulonglong)uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (pIVar14 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar14->fields)._._.invoke_impl)
                      ((pIVar14->fields)._._.method_code,(this_04->fields).m_Text,
                       (pSVar10->fields)._stringLength,*puVar19,(pIVar14->fields)._._.method);
        if (c != 0) {
          pSVar10 = (this_04->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar10 = mscorlib.dll::System::String::String_Concat_4(pSVar10,str1,(MethodInfo *)0x0);
          (this_04->fields).m_Text = pSVar10;
          func_?(&(this_04->fields).m_Text);
        }
        uVar5 = uVar5 + 1;
        lVar13 = lVar13 + 1;
        puVar19 = puVar19 + 1;
      } while (lVar13 < iVar12);
    }
  }
  if ((this_04->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_04->fields).m_Keyboard,(this_04->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar9 = (this_04->fields).m_Text;
  if (pSVar9 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar12 = (pSVar9->fields)._stringLength;
  if (iVar12 < (this_04->fields).m_CaretPosition) {
    (this_04->fields).m_CaretPosition = iVar12;
  }
  else if ((this_04->fields).m_CaretSelectPosition <= iVar12) goto code_?;
  (this_04->fields).m_CaretSelectPosition = iVar12;
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

void Assembly-CSharp.dll::ShootablePlateSettings::ShootablePlateSettings_OnSettingChanged
               (ShootablePlateSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).settingsBase;
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
  afStackX_8[0] =
       mscorlib.dll::System::Convert::Convert_ToSingle_1
                 (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
  value_00 = (Object *)FUN_?(uRam_?,afStackX_8);
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

