
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::StarsRequirementSettings::StarsRequirementSettings_Initialize
               (StarsRequirementSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

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
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
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
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_starAmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Star_Requirement);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  pSVar1 = TM::TM__(StringLiteral_Star_Requirement,(MethodInfo *)0x0);
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
  if (woID == -1) {
    this_06 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_06,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    lVar5 = lRam_?;
    uStackX_8 = (String *)((ulonglong)uStackX_8._4_4_ << 0x20);
    pSVar1 = uStackX_8;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pSVar1 = (String *)FUN_?(lRam_?);
        FUN_?(&pSVar1->fields,&uStackX_8,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&pSVar1->fields >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
      }
      else {
        pSVar1 = (String *)0x0;
      }
    }
    if (this_06 ==
        (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
         *)0x0) goto code_?;
    uVar4 = CONCAT71((int7)(uVar4 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_06,
               (Object *)StringLiteral_starAmount,(Object *)pSVar1,(InsertionBehavior__Enum)uVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  else {
    this_05 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_05 == (MVWorldObjectClientManager *)0x0) ||
        (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                             (this_05,woID,(MethodInfo *)0x0), pMVar11 == (MVWorldObjectClient *)0x0
        )) || (this_06 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                          *)(pMVar11->fields)._.data,
              this_06 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0)) goto code_?;
  }
  iVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::StyleComplexSelector+PseudoStateData]::
           Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                     ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)this_06,(Object *)StringLiteral_starAmount,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      ->klass->rgctx_data[0x21].method);
  lVar5 = lRam_?;
  if (iVar12 < 0) {
    uStackX_8 = (String *)((ulonglong)uStackX_8 & 0xffffffff00000000);
    pSVar1 = uStackX_8;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pSVar1 = (String *)FUN_?(lRam_?);
        FUN_?(&pSVar1->fields,&uStackX_8,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&pSVar1->fields >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          uVar4 = (ulonglong)(uVar6 & 0x3f);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << uVar4;
            }
            UNLOCK();
          } while (!bVar10);
        }
      }
      else {
        pSVar1 = (String *)0x0;
      }
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_06,
               (Object *)StringLiteral_starAmount,(Object *)pSVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)(uVar4 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
  }
  value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__get_Item
                    ((Dictionary_2_System_Object_System_Object_ *)this_06,
                     (Object *)StringLiteral_starAmount,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar12 = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar13 == (MVGameControllerBase *)0x0) ||
      (pMVar14 = (pMVar13->fields).game, pMVar14 == (MVNetworkGame *)0x0)) ||
     (this_01 = (pMVar14->fields)._WinningConditionManager_k__BackingField,
     this_01 == (WinningConditionManager *)0x0)) goto code_?;
  pAVar15 = (AllCollectiblesCollectedClient *)
            MVWorldObject.dll::WinningConditionManager::
            WinningConditionManager_GetSingletonWinnerConditionByType
                      (this_01,
                       AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                      );
  bVar10 = iRam_? != 0;
  (this->fields).collectible = pAVar15;
  if (bVar10) {
    uVar6 = (uint)((ulonglong)&(this->fields).collectible >> 0xc);
    uVar4 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar7 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  if ((this->fields).collectible != (AllCollectiblesCollectedClient *)0x0) {
    (this->fields).maxValue = (((this->fields).collectible)->fields)._._.limit + -1;
  }
  StarsRequirementSettings_UpdateMessage(this,iVar12,(MethodInfo *)0x0);
  this_02 = (this->fields).slider;
  if (this_02 == (SettingsSlider *)0x0) goto code_?;
  SettingsSlider::SettingsSlider_Initialize_1
            (this_02,StringLiteral_starAmount,iVar12,0,(this->fields).maxValue,(MethodInfo *)0x0);
  this_03 = (this->fields).inputField;
  if (this_03 == (SettingsInputFieldSlider *)0x0) goto code_?;
  bVar10 = iRam_? != 0;
  (this_03->fields).key = StringLiteral_starAmount;
  if (bVar10) {
    uVar6 = (uint)((ulonglong)&(this_03->fields).key >> 0xc);
    uVar4 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar7 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar7 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  inputFieldValue =
       SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                 (this_03,(float)iVar12,(MethodInfo *)0x0);
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
  pSVar16 = (this_04->fields).m_Text;
  if (pSVar16 == pSVar1) {
    return;
  }
  if (pSVar16 == (String *)0x0) {
code_?:
    if (pSVar1 == (String *)0x0) {
code_?:
      pSVar1 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar1 == (String *)0x0) goto code_?;
    if ((pSVar16->fields)._stringLength == (pSVar1->fields)._stringLength) {
      bVar17 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar16->fields)._firstChar,
                         (uint8_t *)&(pSVar1->fields)._firstChar,
                         (longlong)(pSVar16->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar17 != 0) {
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
      iVar18 = (this_04->fields).m_CharacterLimit;
      if (iVar18 < (pSVar1->fields)._stringLength) {
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar1,0,iVar18,(MethodInfo *)0x0);
      }
    }
    (this_04->fields).m_Text = pSVar1;
    func_?(&(this_04->fields).m_Text);
  }
  else {
    bVar10 = iRam_? != 0;
    (this_04->fields).m_Text = ::StringLiteral__;
    if (bVar10) {
      uVar6 = (uint)((ulonglong)&(this_04->fields).m_Text >> 0xc);
      lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar9 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar10 = uVar4 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar4 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pIVar19 = (this_04->fields).m_OnValidateInput;
    if (pIVar19 == (InputField_OnValidateInput *)0x0) {
      pIVar19 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar20 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar10 = iRam_? != 0;
      (pIVar19->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar19->fields)._._.method = pMVar20;
      (pIVar19->fields)._._.m_target = (Object *)this_04;
      if (bVar10) {
        uVar6 = (uint)((ulonglong)&(pIVar19->fields)._._.m_target >> 0xc);
        lVar5 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar9 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar10 = uVar4 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar4 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
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
    iVar12 = (pSVar1->fields)._stringLength;
    (this_04->fields).m_CaretSelectPosition = iVar12;
    (this_04->fields).m_CaretPosition = iVar12;
    if ((this_04->fields).m_CharacterLimit < 1) {
      iVar18 = (pSVar1->fields)._stringLength;
    }
    else {
      iVar18 = (this_04->fields).m_CharacterLimit;
      iVar22 = (pSVar1->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar22 < iVar18) {
        iVar18 = iVar22;
      }
    }
    uVar6 = 0;
    if (0 < iVar18) {
      puVar23 = &(pSVar1->fields)._firstChar;
      lVar5 = 0;
      do {
        pSVar16 = (this_04->fields).m_Text;
        if (pSVar16 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar6) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pIVar19 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar19->fields)._._.invoke_impl)
                      ((pIVar19->fields)._._.method_code,(this_04->fields).m_Text,
                       (pSVar16->fields)._stringLength,*puVar23,(pIVar19->fields)._._.method);
        if (c != 0) {
          uStackX_8 = (this_04->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          pSVar16 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar16 = mscorlib.dll::System::String::String_Concat_4
                              (uStackX_8,pSVar16,(MethodInfo *)0x0);
          (this_04->fields).m_Text = pSVar16;
          func_?(&(this_04->fields).m_Text);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 1;
        puVar23 = puVar23 + 1;
      } while (lVar5 < iVar18);
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
  iVar18 = (pSVar1->fields)._stringLength;
  if (iVar18 < (this_04->fields).m_CaretPosition) {
    (this_04->fields).m_CaretPosition = iVar18;
  }
  else if ((this_04->fields).m_CaretSelectPosition <= iVar18) goto code_?;
  (this_04->fields).m_CaretSelectPosition = iVar18;
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

void Assembly-CSharp.dll::StarsRequirementSettings::StarsRequirementSettings_OnSettingChanged
               (StarsRequirementSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).settingsBase;
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  aiStackX_8[0] = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
  value_00 = (Object *)FUN_?(uRam_?,aiStackX_8);
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


/* Void UpdateMaxValue() */

void Assembly-CSharp.dll::StarsRequirementSettings::StarsRequirementSettings_UpdateMaxValue
               (StarsRequirementSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
     this_00 != (WinningConditionManager *)0x0)) {
    pAVar3 = (AllCollectiblesCollectedClient *)
             MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (this_00,
                        AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                       );
    bVar4 = iRam_? != 0;
    (this->fields).collectible = pAVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).collectible >> 0xc);
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
    if ((this->fields).collectible != (AllCollectiblesCollectedClient *)0x0) {
      (this->fields).maxValue = (((this->fields).collectible)->fields)._._.limit + -1;
    }
    return;
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateMessage(Int32) */

void Assembly-CSharp.dll::StarsRequirementSettings::StarsRequirementSettings_UpdateMessage
               (StarsRequirementSettings *this,int32_t starAmount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_starAmount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = lRam_?;
  if ((this->fields).maxValue < 1) {
    if (0 < starAmount) {
      pOStackX_8 = (Object *)((ulonglong)pOStackX_8 & 0xffffffff00000000);
      pOVar2 = pOStackX_8;
      if ((*(int *)(lRam_? + 0x28) < 0) &&
         ((*(longlong *)(lRam_? + 0x60) == 0 ||
          (pOVar2 = (Object *)0x0, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
        pOVar2 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar2 + 1,&pOStackX_8,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
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
      }
      key = StringLiteral_starAmount;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Convert);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (this->fields).settingsBase;
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar7 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar2,(MethodInfo *)0x0);
      pOStackX_8 = (Object *)CONCAT44(pOStackX_8._4_4_,iVar7);
      pOVar2 = (Object *)FUN_?(lRam_?,&pOStackX_8);
      if (this_00 == (SettingsBase *)0x0) goto code_?;
      SettingsBase::SettingsBase_OnSettingChanged(this_00,key,pOVar2,(MethodInfo *)0x0);
    }
    obj = (this->fields).message;
    if (obj == (GameObject *)0x0) goto code_?;
    uVar8 = 1;
  }
  else {
    obj = (this->fields).message;
    if (obj == (GameObject *)0x0) {
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar8 = 0;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,uVar8,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pvVar10 = (obj->fields)._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar10,uVar8);
  return;
}

