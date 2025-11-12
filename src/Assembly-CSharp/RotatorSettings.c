
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::RotatorSettings::RotatorSettings_Initialize
               (RotatorSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&StringLiteral_Rotator);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AngularSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData_AngularSpeed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_BlueprintData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  pSVar1 = TM::TM__(StringLiteral_Rotator,(MethodInfo *)0x0);
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
  SettingsBase::SettingsBase_InitializeHierarchy(this_00,woID,root,(MethodInfo *)0x0);
  if (woID == -1) {
    uVar4 = func_?(&TypeInfo__System__NotImplementedException);
    this_05 = (NotImplementedException *)func_?(uVar4);
    mscorlib.dll::System::NotImplementedException::NotImplementedException__ctor
              (this_05,(MethodInfo *)0x0);
    uVar4 = func_?(&
                                 MethodInfo__RotatorSettings__Initialize_int__UnityEngine__GameObject_
                                );
    FUN_?(this_05,uVar4);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_04 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_04,woID,(MethodInfo *)0x0), pMVar5 == (MVWorldObjectClient *)0x0))
  goto code_?;
  pDVar6 = (pMVar5->fields)._.data;
  (this->fields).woID = woID;
  if (pDVar6 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  pDVar6 = (Dictionary_2_System_Object_System_Object_ *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (pDVar6,(Object *)StringLiteral_BlueprintData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pDVar6 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    (this->fields).blueprintData = (Dictionary_2_System_Object_System_Object_ *)0x0;
  }
  else {
    bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar6->klass->_1).naturalAligment < bVar7) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar6->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar6);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields).blueprintData = pDVar6;
    bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar6->klass->_1).naturalAligment < bVar7) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar6->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar6);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&(this->fields).blueprintData >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar12 = uVar10 == *puVar11;
      if (bVar12) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar12);
  }
  pDVar6 = (this->fields).blueprintData;
  if ((pDVar6 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar6,(Object *)StringLiteral_AngularSpeed,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar13 == (Object *)0x0)) goto code_?;
  if ((pOVar13->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar13,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_01 = (this->fields).slider;
  if (this_01 == (SettingsSlider *)0x0) goto code_?;
  fVar14 = *(float *)&pOVar13[1].klass;
  SettingsSlider::SettingsSlider_Initialize
            (this_01,StringLiteral_BlueprintData_AngularSpeed,fVar14,0.0,_UNK_?,
             (MethodInfo *)0x0);
  this_02 = (this->fields).inputField;
  if (this_02 == (SettingsInputFieldSlider *)0x0) goto code_?;
  bVar12 = iRam_? != 0;
  (this_02->fields).key = StringLiteral_BlueprintData_AngularSpeed;
  if (bVar12) {
    uVar8 = (uint)((ulonglong)&(this_02->fields).key >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar12 = uVar10 == *puVar11;
      if (bVar12) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar12);
  }
  fVar14 = SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                     (this_02,fVar14,(MethodInfo *)0x0);
  pSVar1 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (fVar14,(MethodInfo *)0x0);
  this_03 = (this_02->fields).inputField;
  if (this_03 == (InputField *)0x0) {
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
  pSVar15 = (this_03->fields).m_Text;
  if (pSVar15 == pSVar1) {
    return;
  }
  if (pSVar15 == (String *)0x0) {
code_?:
    if (pSVar1 == (String *)0x0) {
code_?:
      pSVar1 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar1 == (String *)0x0) goto code_?;
    if ((pSVar15->fields)._stringLength == (pSVar1->fields)._stringLength) {
      bVar16 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar15->fields)._firstChar,
                         (uint8_t *)&(pSVar1->fields)._firstChar,
                         (longlong)(pSVar15->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar16 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar1 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar1,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_03->fields).m_LineType == 0) {
    if ((pSVar1 == (String *)0x0) ||
       (pSVar1 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar1,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar1 == (String *)0x0)) goto DAT_?;
    pSVar1 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar1,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_03->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_03->fields).m_CharacterValidation == 0)) {
    if (0 < (this_03->fields).m_CharacterLimit) {
      if (pSVar1 == (String *)0x0) goto DAT_?;
      iVar17 = (this_03->fields).m_CharacterLimit;
      if (iVar17 < (pSVar1->fields)._stringLength) {
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar1,0,iVar17,(MethodInfo *)0x0);
      }
    }
    (this_03->fields).m_Text = pSVar1;
    func_?(&(this_03->fields).m_Text);
  }
  else {
    bVar12 = iRam_? != 0;
    (this_03->fields).m_Text = ::StringLiteral__;
    if (bVar12) {
      uVar8 = (uint)((ulonglong)&(this_03->fields).m_Text >> 0xc);
      lVar18 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar18 + 0xADDR);
        puVar11 = (ulonglong *)(lVar18 + 0xADDR);
        LOCK();
        bVar12 = uVar9 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar9 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    pIVar19 = (this_03->fields).m_OnValidateInput;
    if (pIVar19 == (InputField_OnValidateInput *)0x0) {
      pIVar19 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar20 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar12 = iRam_? != 0;
      (pIVar19->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar19->fields)._._.method = pMVar20;
      (pIVar19->fields)._._.m_target = (Object *)this_03;
      if (bVar12) {
        uVar8 = (uint)((ulonglong)&(pIVar19->fields)._._.m_target >> 0xc);
        lVar18 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar18 + 0xADDR);
          puVar11 = (ulonglong *)(lVar18 + 0xADDR);
          LOCK();
          bVar12 = uVar9 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar9 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      uVar21 = pMVar20->parameters_count;
      (pIVar19->fields)._._.method_code = pIVar19;
      if ((pMVar20->flags & 0x10) == 0) {
        if (uVar21 != 2) goto code_?;
        pcVar2 = FUN_?;
      }
      else if (uVar21 == 3) {
        pcVar2 = FUN_?;
      }
      else {
code_?:
        (pIVar19->fields)._._.method_code = (pIVar19->fields)._._.m_target;
        pcVar2 = (pIVar19->fields)._._.method_ptr;
      }
      (pIVar19->fields)._._.invoke_impl = pcVar2;
      (pIVar19->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar1 == (String *)0x0) goto DAT_?;
    iVar22 = (pSVar1->fields)._stringLength;
    (this_03->fields).m_CaretSelectPosition = iVar22;
    (this_03->fields).m_CaretPosition = iVar22;
    if ((this_03->fields).m_CharacterLimit < 1) {
      iVar17 = (pSVar1->fields)._stringLength;
    }
    else {
      iVar17 = (this_03->fields).m_CharacterLimit;
      iVar23 = (pSVar1->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar23 < iVar17) {
        iVar17 = iVar23;
      }
    }
    uVar8 = 0;
    if (0 < iVar17) {
      puVar24 = &(pSVar1->fields)._firstChar;
      lVar18 = 0;
      do {
        pSVar15 = (this_03->fields).m_Text;
        if (pSVar15 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar8) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pIVar19 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar19->fields)._._.invoke_impl)
                      ((pIVar19->fields)._._.method_code,(this_03->fields).m_Text,
                       (pSVar15->fields)._stringLength,*puVar24,(pIVar19->fields)._._.method);
        if (c != 0) {
          pSVar15 = (this_03->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar15 = mscorlib.dll::System::String::String_Concat_4(pSVar15,str1,(MethodInfo *)0x0);
          (this_03->fields).m_Text = pSVar15;
          func_?(&(this_03->fields).m_Text);
        }
        uVar8 = uVar8 + 1;
        lVar18 = lVar18 + 1;
        puVar24 = puVar24 + 1;
      } while (lVar18 < iVar17);
    }
  }
  if ((this_03->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_03->fields).m_Keyboard,(this_03->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar1 = (this_03->fields).m_Text;
  if (pSVar1 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar17 = (pSVar1->fields)._stringLength;
  if (iVar17 < (this_03->fields).m_CaretPosition) {
    (this_03->fields).m_CaretPosition = iVar17;
  }
  else if ((this_03->fields).m_CaretSelectPosition <= iVar17) goto code_?;
  (this_03->fields).m_CaretSelectPosition = iVar17;
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
            (StringLiteral_InputField_value,(Object_1 *)this_03,(MethodInfo *)0x0);
  if ((this_03->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_03->fields).m_OnValueChanged,
               (Object *)(this_03->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_03,(MethodInfo *)0x0)
  ;
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::RotatorSettings::RotatorSettings_OnSettingChanged
               (RotatorSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != (String *)0x0) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    worldObjectID = (this->fields).woID;
    if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
      FUN_?();
    }
    provider = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    afStackX_10[0] =
         mscorlib.dll::System::Convert::Convert_ToSingle_1
                   (value,(IFormatProvider *)provider,(MethodInfo *)0x0);
    value_00 = (Object *)FUN_?(uRam_?,afStackX_10);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
              (this_00,worldObjectID,key,value_00,(MethodInfo *)0x0);
  }
  return;
}

