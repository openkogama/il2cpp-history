
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::GamePointMinorRewardSettings::GamePointMinorRewardSettings_Initialize
               (GamePointMinorRewardSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

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
  this_00 = (this->fields).settingsBase;
  (this->fields).woID = woID;
  pSVar1 = StringLiteral_Crystal_Reward;
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
  lVar7 = lRam_?;
  if (iVar6 < 0) {
    pSStackX_8 = (String *)((ulonglong)pSStackX_8 & 0xffffffff00000000);
    pSVar1 = pSStackX_8;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pSVar1 = (String *)FUN_?(lRam_?);
        FUN_?(&pSVar1->fields,&pSStackX_8,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar8 = (uint)((ulonglong)&pSVar1->fields >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          uVar4 = (ulonglong)(uVar8 & 0x3f);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << uVar4;
            }
            UNLOCK();
          } while (!bVar12);
        }
      }
      else {
        pSVar1 = (String *)0x0;
      }
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_01,
               (Object *)StringLiteral_gamePointAmount,(Object *)pSVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)(uVar4 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,
                       (Object *)StringLiteral_gamePointAmount,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar13 == (Object *)0x0) goto code_?;
  if ((pOVar13->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar13,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_02 = (this->fields).gamePointsAwardedSlider;
  if (this_02 == (SettingsSlider *)0x0) goto code_?;
  iVar6 = *(int32_t *)&pOVar13[1].klass;
  SettingsSlider::SettingsSlider_Initialize_1
            (this_02,StringLiteral_gamePointAmount,iVar6,0,100,(MethodInfo *)0x0);
  this_03 = (this->fields).gamePointsAwardedInputField;
  if (this_03 == (SettingsInputFieldSlider *)0x0) goto code_?;
  bVar12 = iRam_? != 0;
  (this_03->fields).key = StringLiteral_gamePointAmount;
  if (bVar12) {
    uVar8 = (uint)((ulonglong)&(this_03->fields).key >> 0xc);
    uVar4 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar12 = uVar9 == *puVar11;
      if (bVar12) {
        *puVar11 = uVar9 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar12);
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
  pSVar14 = (this_04->fields).m_Text;
  if (pSVar14 == pSVar1) {
    return;
  }
  if (pSVar14 == (String *)0x0) {
code_?:
    if (pSVar1 == (String *)0x0) {
code_?:
      pSVar1 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar1 == (String *)0x0) goto code_?;
    if ((pSVar14->fields)._stringLength == (pSVar1->fields)._stringLength) {
      bVar15 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar14->fields)._firstChar,
                         (uint8_t *)&(pSVar1->fields)._firstChar,
                         (longlong)(pSVar14->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar15 != 0) {
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
      iVar16 = (this_04->fields).m_CharacterLimit;
      if (iVar16 < (pSVar1->fields)._stringLength) {
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar1,0,iVar16,(MethodInfo *)0x0);
      }
    }
    (this_04->fields).m_Text = pSVar1;
    func_?(&(this_04->fields).m_Text);
  }
  else {
    bVar12 = iRam_? != 0;
    (this_04->fields).m_Text = ::StringLiteral__;
    if (bVar12) {
      uVar8 = (uint)((ulonglong)&(this_04->fields).m_Text >> 0xc);
      lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar11 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar12 = uVar4 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar4 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    pIVar17 = (this_04->fields).m_OnValidateInput;
    if (pIVar17 == (InputField_OnValidateInput *)0x0) {
      pIVar17 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar18 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar12 = iRam_? != 0;
      (pIVar17->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar17->fields)._._.method = pMVar18;
      (pIVar17->fields)._._.m_target = (Object *)this_04;
      if (bVar12) {
        uVar8 = (uint)((ulonglong)&(pIVar17->fields)._._.m_target >> 0xc);
        lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar11 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar12 = uVar4 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar4 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
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
      iVar16 = (pSVar1->fields)._stringLength;
    }
    else {
      iVar16 = (this_04->fields).m_CharacterLimit;
      iVar20 = (pSVar1->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar20 < iVar16) {
        iVar16 = iVar20;
      }
    }
    uVar8 = 0;
    if (0 < iVar16) {
      puVar21 = &(pSVar1->fields)._firstChar;
      lVar7 = 0;
      do {
        pSVar14 = (this_04->fields).m_Text;
        if (pSVar14 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar8) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pIVar17 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar17->fields)._._.invoke_impl)
                      ((pIVar17->fields)._._.method_code,(this_04->fields).m_Text,
                       (pSVar14->fields)._stringLength,*puVar21,(pIVar17->fields)._._.method);
        if (c != 0) {
          pSStackX_8 = (this_04->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          pSVar14 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar14 = mscorlib.dll::System::String::String_Concat_4
                              (pSStackX_8,pSVar14,(MethodInfo *)0x0);
          (this_04->fields).m_Text = pSVar14;
          func_?(&(this_04->fields).m_Text);
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 1;
        puVar21 = puVar21 + 1;
      } while (lVar7 < iVar16);
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
  iVar16 = (pSVar1->fields)._stringLength;
  if (iVar16 < (this_04->fields).m_CaretPosition) {
    (this_04->fields).m_CaretPosition = iVar16;
  }
  else if ((this_04->fields).m_CaretSelectPosition <= iVar16) goto code_?;
  (this_04->fields).m_CaretSelectPosition = iVar16;
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


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePointMinorRewardSettings::GamePointMinorRewardSettings_OnDestroy
               (GamePointMinorRewardSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gamePointAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).gamePointsAwardedSlider;
  if ((pSVar1 != (SettingsSlider *)0x0) &&
     (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
    (*(pSVar2->klass->vtable).get_value.methodPtr)(pSVar2,(pSVar2->klass->vtable).get_value.method);
    iVar3 = FUN_?();
    if (iVar3 != 0) {
      return;
    }
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    lVar4 = lRam_?;
    value = (Object *)0x0;
    uStackX_8 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        value = (Object *)FUN_?(lRam_?);
        FUN_?(value + 1,&uStackX_8,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          in_R9 = 0xADDR;
          uVar5 = (uint)((ulonglong)(value + 1) >> 0xc);
          uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
          do {
            uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
            puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
      }
    }
    else {
      value = (Object *)((ulonglong)uStackX_c << 0x20);
    }
    if (this_01 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_gamePointAmount,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                  (this_02,(this->fields).woID,(Dictionary_2_System_Object_System_Object_ *)this_01,
                   (MethodInfo *)0x0);
        key = StringLiteral_gamePointAmount;
        pSVar10 = (this->fields).settingsBase;
        if (pSVar10 != (SettingsBase *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = (pSVar10->fields).result;
          if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Remove
                      (this_00,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                      );
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::GamePointMinorRewardSettings::
     GamePointMinorRewardSettings_OnSettingChanged
               (GamePointMinorRewardSettings *this,String *key,Object *value,MethodInfo *method)

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


/* Void UpdateData() */

void Assembly-CSharp.dll::GamePointMinorRewardSettings::GamePointMinorRewardSettings_UpdateData
               (GamePointMinorRewardSettings *this,MethodInfo *method)

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
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gamePointAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).gamePointsAwardedSlider;
  if ((pSVar1 != (SettingsSlider *)0x0) &&
     (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
    (*(pSVar2->klass->vtable).get_value.methodPtr)(pSVar2,(pSVar2->klass->vtable).get_value.method);
    iVar3 = FUN_?();
    if (iVar3 != 0) {
      return;
    }
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    lVar4 = lRam_?;
    value = (Object *)0x0;
    uStackX_8 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        value = (Object *)FUN_?(lRam_?);
        FUN_?(value + 1,&uStackX_8,(longlong)*(int *)(lVar4 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          in_R9 = 0xADDR;
          uVar5 = (uint)((ulonglong)(value + 1) >> 0xc);
          uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
          do {
            uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
            puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
      }
    }
    else {
      value = (Object *)((ulonglong)uStackX_c << 0x20);
    }
    if (this_01 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_gamePointAmount,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_RemoveWorldObjectDataPartial_1
                  (this_02,(this->fields).woID,(Dictionary_2_System_Object_System_Object_ *)this_01,
                   (MethodInfo *)0x0);
        key = StringLiteral_gamePointAmount;
        pSVar10 = (this->fields).settingsBase;
        if (pSVar10 != (SettingsBase *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = (pSVar10->fields).result;
          if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Remove
                      (this_00,(Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                      );
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

