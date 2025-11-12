
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::
     ObjectTransparencySettings::ObjectTransparencySettings_Initialize
               (ObjectTransparencySettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (this->fields).settingsBase;
  if (this_01 == (SettingsBase *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SettingsBase::SettingsBase_Initialize
            (this_01,woID,root,MVWorldObjectDocumentationType__Enum_ModelTransparency,
             (MethodInfo *)0x0);
  if (woID == -1) {
    if (*(int *)&(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData);
    }
    this_07 = TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData->
              static_fields->DefaultValues;
  }
  else {
    this_06 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_06 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (this_06,woID,(MethodInfo *)0x0), pMVar2 == (MVWorldObjectClient *)0x0))
    goto code_?;
    this_02 = (pMVar2->fields)._.data;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys)
      ;
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSStackX_8 = (String *)0x0;
    pOStackX_18 = (Object *)0x0;
    if (*(int *)&(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData->_1).
                 field_0x1c == 0) {
      FUN_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData);
    }
    this_07 = TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData->
              static_fields->DefaultValues;
    if (*(int *)&(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1
                 ).field_0x1c == 0) {
      FUN_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys);
    }
    if (this_02 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
    ;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (this_02,(Object *)
                               TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                               ->static_fields->ShowOutline,(Object **)&pSStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar4 != 0) {
      if (*(int *)&(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
                   _1).field_0x1c == 0) {
        FUN_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                     );
      }
      if (this_07 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (this_07,(Object *)
                         TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                         ->static_fields->ShowOutline,(Object *)pSStackX_8,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar3 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    if (*(int *)&(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1
                 ).field_0x1c == 0) {
      FUN_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys);
    }
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
    ;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (this_02,(Object *)
                               TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                               ->static_fields->Alpha,&pOStackX_18,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar4 != 0) {
      if (*(int *)&(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
                   _1).field_0x1c == 0) {
        FUN_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                     );
      }
      if (this_07 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (this_07,(Object *)
                         TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                         ->static_fields->Alpha,pOStackX_18,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar3 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
  }
  this_03 = (this->fields).toggle;
  if (*(int *)&(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys);
  }
  pSVar5 = TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
           static_fields->ShowOutline;
  if (((this_07 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
      (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_07,(Object *)pSVar5,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), this_03 == (SettingsToggle *)0x0)) || (pOVar6 == (Object *)0x0))
  goto code_?;
  if ((pOVar6->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar6);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SettingsToggle::SettingsToggle_Initialize
            (this_03,pSVar5,*(bool *)&pOVar6[1].klass,(MethodInfo *)0x0);
  this_04 = (this->fields).alphaSlider;
  pSVar5 = TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
           static_fields->Alpha;
  pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (this_07,(Object *)pSVar5,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  fVar7 = _UNK_?;
  if ((this_04 == (SettingsSlider *)0x0) || (pOVar6 == (Object *)0x0)) goto code_?;
  if ((pOVar6->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar6);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SettingsSlider::SettingsSlider_Initialize
            (this_04,pSVar5,*(float *)&pOVar6[1].klass * _UNK_?,0.0,_UNK_?,
             (MethodInfo *)0x0);
  this_05 = (this->fields).alphaInputField;
  pSVar5 = TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
           static_fields->Alpha;
  pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (this_07,(Object *)pSVar5,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if ((this_05 == (SettingsInputFieldSlider *)0x0) || (pOVar6 == (Object *)0x0))
  goto code_?;
  if ((pOVar6->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar6);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar8 = *(float *)&pOVar6[1].klass;
  bVar9 = iRam_? != 0;
  (this_05->fields).key = pSVar5;
  if (bVar9) {
    uVar10 = (uint)((ulonglong)&(this_05->fields).key >> 0xc);
    uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
    do {
      uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
      puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar12 == *puVar13;
      if (bVar9) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  fVar7 = SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                     (this_05,fVar8 * fVar7,(MethodInfo *)0x0);
  pSVar5 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                     (fVar7,(MethodInfo *)0x0);
  this_00 = (this_05->fields).inputField;
  if (this_00 == (InputField *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pOStackX_18 = (Object *)CONCAT71(pOStackX_18._1_7_,1);
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
  pSVar14 = (this_00->fields).m_Text;
  if (pSVar14 == pSVar5) {
    return;
  }
  if (pSVar14 == (String *)0x0) {
code_?:
    if (pSVar5 == (String *)0x0) {
code_?:
      pSVar5 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar5 == (String *)0x0) goto code_?;
    if ((pSVar14->fields)._stringLength == (pSVar5->fields)._stringLength) {
      bVar4 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar14->fields)._firstChar,
                         (uint8_t *)&(pSVar5->fields)._firstChar,
                         (longlong)(pSVar14->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar5 = mscorlib.dll::System::String::String_Replace_1
                     (pSVar5,::StringLiteral__,
                      (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_00->fields).m_LineType == 0) {
    if ((pSVar5 == (String *)0x0) ||
       (pSVar5 = mscorlib.dll::System::String::String_Replace_1
                           (pSVar5,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar5 == (String *)0x0)) goto DAT_?;
    pSVar5 = mscorlib.dll::System::String::String_Replace_1
                       (pSVar5,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_00->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_00->fields).m_CharacterValidation == 0)) {
    if (0 < (this_00->fields).m_CharacterLimit) {
      if (pSVar5 == (String *)0x0) goto DAT_?;
      iVar15 = (this_00->fields).m_CharacterLimit;
      if (iVar15 < (pSVar5->fields)._stringLength) {
        pSVar5 = mscorlib.dll::System::String::String_Substring_1(pSVar5,0,iVar15,(MethodInfo *)0x0)
        ;
      }
    }
    (this_00->fields).m_Text = pSVar5;
    func_?(&(this_00->fields).m_Text);
    cVar16 = '\x01';
  }
  else {
    bVar9 = iRam_? != 0;
    (this_00->fields).m_Text = ::StringLiteral__;
    if (bVar9) {
      uVar10 = (uint)((ulonglong)&(this_00->fields).m_Text >> 0xc);
      lVar17 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar17 + 0xADDR);
        puVar13 = (ulonglong *)(lVar17 + 0xADDR);
        LOCK();
        bVar9 = uVar11 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar11 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pIVar18 = (this_00->fields).m_OnValidateInput;
    if (pIVar18 == (InputField_OnValidateInput *)0x0) {
      pIVar18 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar3 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar9 = iRam_? != 0;
      (pIVar18->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar18->fields)._._.method = pMVar3;
      (pIVar18->fields)._._.m_target = (Object *)this_00;
      if (bVar9) {
        uVar10 = (uint)((ulonglong)&(pIVar18->fields)._._.m_target >> 0xc);
        lVar17 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar17 + 0xADDR);
          puVar13 = (ulonglong *)(lVar17 + 0xADDR);
          LOCK();
          bVar9 = uVar11 == *puVar13;
          if (bVar9) {
            *puVar13 = uVar11 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      uVar19 = pMVar3->parameters_count;
      (pIVar18->fields)._._.method_code = pIVar18;
      if ((pMVar3->flags & 0x10) == 0) {
        if (uVar19 != 2) goto code_?;
        pcVar1 = FUN_?;
      }
      else if (uVar19 == 3) {
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
    if (pSVar5 == (String *)0x0) goto DAT_?;
    iVar20 = (pSVar5->fields)._stringLength;
    (this_00->fields).m_CaretSelectPosition = iVar20;
    (this_00->fields).m_CaretPosition = iVar20;
    if ((this_00->fields).m_CharacterLimit < 1) {
      iVar15 = (pSVar5->fields)._stringLength;
    }
    else {
      iVar15 = (this_00->fields).m_CharacterLimit;
      iVar21 = (pSVar5->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar21 < iVar15) {
        iVar15 = iVar21;
      }
    }
    uVar10 = 0;
    if (0 < iVar15) {
      puVar22 = &(pSVar5->fields)._firstChar;
      lVar17 = 0;
      do {
        pSVar14 = (this_00->fields).m_Text;
        if (pSVar14 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar5->fields)._stringLength <= (longlong)(ulonglong)uVar10) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (pIVar18 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar18->fields)._._.invoke_impl)
                      ((pIVar18->fields)._._.method_code,(this_00->fields).m_Text,
                       (pSVar14->fields)._stringLength,*puVar22,(pIVar18->fields)._._.method);
        if (c != 0) {
          pSStackX_8 = (this_00->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          pSVar14 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar14 = mscorlib.dll::System::String::String_Concat_4
                              (pSStackX_8,pSVar14,(MethodInfo *)0x0);
          (this_00->fields).m_Text = pSVar14;
          func_?(&(this_00->fields).m_Text);
        }
        uVar10 = uVar10 + 1;
        lVar17 = lVar17 + 1;
        puVar22 = puVar22 + 1;
      } while (lVar17 < iVar15);
    }
    cVar16 = (char)pOStackX_18;
  }
  if ((this_00->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_00->fields).m_Keyboard,(this_00->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar5 = (this_00->fields).m_Text;
  if (pSVar5 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar15 = (pSVar5->fields)._stringLength;
  if (iVar15 < (this_00->fields).m_CaretPosition) {
    (this_00->fields).m_CaretPosition = iVar15;
  }
  else if ((this_00->fields).m_CaretSelectPosition <= iVar15) goto code_?;
  (this_00->fields).m_CaretSelectPosition = iVar15;
code_?:
  if (cVar16 != '\0') {
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
                 MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_
                );
    }
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_00,(MethodInfo *)0x0)
  ;
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::
     ObjectTransparencySettings::ObjectTransparencySettings_OnSettingChanged
               (ObjectTransparencySettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys);
  }
  pSVar1 = TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
           static_fields->Alpha;
  if ((key == pSVar1) ||
     ((((key != (String *)0x0 && (pSVar1 != (String *)0x0)) &&
       ((key->fields)._stringLength == (pSVar1->fields)._stringLength)) &&
      (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(key->fields)._firstChar,
                          (uint8_t *)&(pSVar1->fields)._firstChar,
                          (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar2 != 0))
     )) {
    if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
      FUN_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar3 = mscorlib.dll::System::Convert::Convert_ToSingle_1
                      (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
    afStackX_10[0] = fVar3 / _UNK_?;
    value = (Object *)FUN_?(uRam_?,afStackX_10);
  }
  pSVar4 = (this->fields).settingsBase;
  if (pSVar4 == (SettingsBase *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
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
  if ((((pSVar4->fields).woID != -1) && (key != (String *)0x0)) &&
     ((key->fields)._stringLength != 0)) {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                     (this_01,(pSVar4->fields).woID,(MethodInfo *)0x0);
      if (wo == (MVWorldObjectClient *)0x0) {
        return;
      }
      if (*(int *)&(TypeInfo__WorldObjectDataValidator->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar6 = 0;
      WorldObjectDataValidator::WorldObjectDataValidator_Validate(wo,key,value,(MethodInfo *)0x0);
      this_00 = (pSVar4->fields).result;
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        uVar6 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (this_00,(Object *)key,value,(InsertionBehavior__Enum)uVar6,
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
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)key,value,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          (*(wo->klass->vtable).PartialUpdateWOData.methodPtr)
                    (wo,this_02,(wo->klass->vtable).PartialUpdateWOData.method);
          return;
        }
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  return;
}


/* Dictionary`2[System.Object,System.Object]
   ReadWorldObjectData(Dictionary`2[System.Object,System.Object]) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::ObjectTransparencySettings::
ObjectTransparencySettings_ReadWorldObjectData
          (ObjectTransparencySettings *this,Dictionary_2_System_Object_System_Object_ *woData,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apOStackX_10[0] = (Object *)0x0;
  pOStackX_20 = (Object *)0x0;
  if (*(int *)&(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData);
  }
  pDVar1 = TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData->static_fields->
           DefaultValues;
  if (*(int *)&(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys);
  }
  if (woData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pMVar2 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
    ;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (woData,(Object *)
                              TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                              ->static_fields->ShowOutline,apOStackX_10,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar3 != 0) {
      if (*(int *)&(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
                   _1).field_0x1c == 0) {
        FUN_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                     );
      }
      if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar1,(Object *)
                        TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                        ->static_fields->ShowOutline,apOStackX_10[0],
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar2 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    if (*(int *)&(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1
                 ).field_0x1c == 0) {
      FUN_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys);
    }
    pMVar2 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
    ;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (woData,(Object *)
                              TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                              ->static_fields->Alpha,&pOStackX_20,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar3 != 0) {
      if (*(int *)&(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
                   _1).field_0x1c == 0) {
        FUN_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                     );
      }
      if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (pDVar1,(Object *)
                        TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys
                        ->static_fields->Alpha,pOStackX_20,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar2 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    return pDVar1;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar4)();
  return pDVar1;
}

