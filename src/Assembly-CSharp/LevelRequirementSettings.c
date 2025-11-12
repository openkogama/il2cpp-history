
/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::LevelRequirementSettings::LevelRequirementSettings_Initialize
               (LevelRequirementSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&StringLiteral_levelAmount);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Level_Requirement);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).settingsBase;
  pSVar1 = TM::TM__(StringLiteral_Level_Requirement,(MethodInfo *)0x0);
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
  this_06 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_06 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (this_06,woID,(MethodInfo *)0x0), pMVar4 == (MVWorldObjectClient *)0x0))
  goto code_?;
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(pMVar4->fields)._.data;
  iVar5 = 0;
  if (this_01 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) goto code_?;
  iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::StyleComplexSelector+PseudoStateData]::
           Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                     (this_01,(Object *)StringLiteral_levelAmount,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      ->klass->rgctx_data[0x21].method);
  if (-1 < iVar6) {
    pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        ((Dictionary_2_System_Object_System_Object_ *)this_01,
                         (Object *)StringLiteral_levelAmount,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar7 == (Object *)0x0) goto code_?;
    if ((pOVar7->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar7,lRam_?);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = *(int32_t *)&pOVar7[1].klass;
  }
  this_02 = (this->fields).slider;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar8 == (MVGameControllerBase *)0x0) ||
       (pMVar9 = (pMVar8->fields).game, pMVar9 == (MVNetworkGame *)0x0)) ||
      (this_03 = (pMVar9->fields).playerContainer, this_03 == (MVPlayerContainer *)0x0)) ||
     ((pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_03,(MethodInfo *)0x0),
      pMVar10 == (MVLocalPlayer *)0x0 || (this_02 == (SettingsSlider *)0x0))))
  goto code_?;
  SettingsSlider::SettingsSlider_Initialize_1
            (this_02,StringLiteral_levelAmount,iVar5,0,(pMVar10->fields)._.level,(MethodInfo *)0x0)
  ;
  this_04 = (this->fields).inputField;
  if (this_04 == (SettingsInputFieldSlider *)0x0) goto code_?;
  bVar11 = iRam_? != 0;
  (this_04->fields).key = StringLiteral_levelAmount;
  if (bVar11) {
    uVar12 = (uint)((ulonglong)&(this_04->fields).key >> 0xc);
    uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
    do {
      uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
      puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar14 == *puVar15;
      if (bVar11) {
        *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  inputFieldValue =
       SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                 (this_04,(float)iVar5,(MethodInfo *)0x0);
  pSVar1 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (inputFieldValue,(MethodInfo *)0x0);
  this_05 = (this_04->fields).inputField;
  if (this_05 == (InputField *)0x0) {
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
  pSVar16 = (this_05->fields).m_Text;
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
  if ((this_05->fields).m_LineType == 0) {
    if ((pSVar1 == (String *)0x0) ||
       (pSVar1 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar1,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar1 == (String *)0x0)) goto DAT_?;
    pSVar1 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar1,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_05->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_05->fields).m_CharacterValidation == 0)) {
    if (0 < (this_05->fields).m_CharacterLimit) {
      if (pSVar1 == (String *)0x0) goto DAT_?;
      iVar18 = (this_05->fields).m_CharacterLimit;
      if (iVar18 < (pSVar1->fields)._stringLength) {
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar1,0,iVar18,(MethodInfo *)0x0);
      }
    }
    (this_05->fields).m_Text = pSVar1;
    func_?(&(this_05->fields).m_Text);
  }
  else {
    bVar11 = iRam_? != 0;
    (this_05->fields).m_Text = ::StringLiteral__;
    if (bVar11) {
      uVar12 = (uint)((ulonglong)&(this_05->fields).m_Text >> 0xc);
      lVar19 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
      do {
        uVar13 = *(ulonglong *)(lVar19 + 0xADDR);
        puVar15 = (ulonglong *)(lVar19 + 0xADDR);
        LOCK();
        bVar11 = uVar13 == *puVar15;
        if (bVar11) {
          *puVar15 = uVar13 | 1L << (uVar12 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pIVar20 = (this_05->fields).m_OnValidateInput;
    if (pIVar20 == (InputField_OnValidateInput *)0x0) {
      pIVar20 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar21 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar11 = iRam_? != 0;
      (pIVar20->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar20->fields)._._.method = pMVar21;
      (pIVar20->fields)._._.m_target = (Object *)this_05;
      if (bVar11) {
        uVar12 = (uint)((ulonglong)&(pIVar20->fields)._._.m_target >> 0xc);
        lVar19 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
        do {
          uVar13 = *(ulonglong *)(lVar19 + 0xADDR);
          puVar15 = (ulonglong *)(lVar19 + 0xADDR);
          LOCK();
          bVar11 = uVar13 == *puVar15;
          if (bVar11) {
            *puVar15 = uVar13 | 1L << (uVar12 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      uVar22 = pMVar21->parameters_count;
      (pIVar20->fields)._._.method_code = pIVar20;
      if ((pMVar21->flags & 0x10) == 0) {
        if (uVar22 != 2) goto code_?;
        pcVar2 = FUN_?;
      }
      else if (uVar22 == 3) {
        pcVar2 = FUN_?;
      }
      else {
code_?:
        (pIVar20->fields)._._.method_code = (pIVar20->fields)._._.m_target;
        pcVar2 = (pIVar20->fields)._._.method_ptr;
      }
      (pIVar20->fields)._._.invoke_impl = pcVar2;
      (pIVar20->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar1 == (String *)0x0) goto DAT_?;
    iVar5 = (pSVar1->fields)._stringLength;
    (this_05->fields).m_CaretSelectPosition = iVar5;
    (this_05->fields).m_CaretPosition = iVar5;
    if ((this_05->fields).m_CharacterLimit < 1) {
      iVar18 = (pSVar1->fields)._stringLength;
    }
    else {
      iVar18 = (this_05->fields).m_CharacterLimit;
      iVar23 = (pSVar1->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar23 < iVar18) {
        iVar18 = iVar23;
      }
    }
    uVar12 = 0;
    if (0 < iVar18) {
      puVar24 = &(pSVar1->fields)._firstChar;
      lVar19 = 0;
      do {
        pSVar16 = (this_05->fields).m_Text;
        if (pSVar16 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar12) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pIVar20 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar20->fields)._._.invoke_impl)
                      ((pIVar20->fields)._._.method_code,(this_05->fields).m_Text,
                       (pSVar16->fields)._stringLength,*puVar24,(pIVar20->fields)._._.method);
        if (c != 0) {
          pSVar16 = (this_05->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar16 = mscorlib.dll::System::String::String_Concat_4(pSVar16,str1,(MethodInfo *)0x0);
          (this_05->fields).m_Text = pSVar16;
          func_?(&(this_05->fields).m_Text);
        }
        uVar12 = uVar12 + 1;
        lVar19 = lVar19 + 1;
        puVar24 = puVar24 + 1;
      } while (lVar19 < iVar18);
    }
  }
  if ((this_05->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_05->fields).m_Keyboard,(this_05->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar1 = (this_05->fields).m_Text;
  if (pSVar1 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar18 = (pSVar1->fields)._stringLength;
  if (iVar18 < (this_05->fields).m_CaretPosition) {
    (this_05->fields).m_CaretPosition = iVar18;
  }
  else if ((this_05->fields).m_CaretSelectPosition <= iVar18) goto code_?;
  (this_05->fields).m_CaretSelectPosition = iVar18;
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
            (StringLiteral_InputField_value,(Object_1 *)this_05,(MethodInfo *)0x0);
  if ((this_05->fields).m_OnValueChanged != (InputField_OnChangeEvent *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Object]::
    UnityEvent_1_System_Object__Invoke
              ((UnityEvent_1_System_Object_ *)(this_05->fields).m_OnValueChanged,
               (Object *)(this_05->fields).m_Text,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String>__Invoke_System__String_);
  }
  UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_UpdateLabel(this_05,(MethodInfo *)0x0)
  ;
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::LevelRequirementSettings::LevelRequirementSettings_OnSettingChanged
               (LevelRequirementSettings *this,String *key,Object *value,MethodInfo *method)

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

