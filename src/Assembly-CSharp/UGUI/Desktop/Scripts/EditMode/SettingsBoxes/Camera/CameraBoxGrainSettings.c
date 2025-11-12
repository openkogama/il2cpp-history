
/* Void InitData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxGrainSettings::CameraBoxGrainSettings_InitData
               (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppGrainLumCon);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppGrainOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppGrainInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppGrainSize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = uStackX_8;
  lVar2 = lRam_?;
  pOVar3 = (Object *)0x0;
  uStackX_8 = uStackX_8 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (value = pOVar3, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      value = (Object *)FUN_?(lRam_?);
      FUN_?(value + 1,&uStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)(value + 1) >> 0xc);
        lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar2 + 0xADDR);
          puVar5 = (ulonglong *)(lVar2 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
    }
  }
  else {
    value = (Object *)(CONCAT44(uStackX_c,uVar1) & 0xffffffffffffff00);
  }
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppGrainOn,value,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  lVar2 = lRam_?;
  uStackX_8 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar3 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar3 + 1,&uStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
        lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar2 + 0xADDR);
          puVar5 = (ulonglong *)(lVar2 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
    }
  }
  else {
    pOVar3 = (Object *)((ulonglong)uStackX_c << 0x20);
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppGrainInt,pOVar3,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = 10;
  pOVar3 = (Object *)FUN_?(lRam_?,&uStackX_8);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppGrainSize,pOVar3,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = 8;
  pOVar3 = (Object *)FUN_?(lRam_?,&uStackX_8);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppGrainLumCon,pOVar3,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  return;
}


/* Boolean IsKey(String) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxGrainSettings::CameraBoxGrainSettings_IsKey(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_ppGrainLumCon);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppGrainOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppGrainInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppGrainSize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != StringLiteral_ppGrainOn) {
    if ((((key != (String *)0x0) && (StringLiteral_ppGrainOn != (String *)0x0)) &&
        ((key->fields)._stringLength == (StringLiteral_ppGrainOn->fields)._stringLength)) &&
       (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(key->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_ppGrainOn->fields)._firstChar,
                           (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 != 0)
       ) {
      return 1;
    }
    if (key != StringLiteral_ppGrainInt) {
      if (((key != (String *)0x0) && (StringLiteral_ppGrainInt != (String *)0x0)) &&
         (((key->fields)._stringLength == (StringLiteral_ppGrainInt->fields)._stringLength &&
          (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(key->fields)._firstChar,
                              (uint8_t *)&(StringLiteral_ppGrainInt->fields)._firstChar,
                              (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar1 != 0)))) {
        return 1;
      }
      if (key != StringLiteral_ppGrainSize) {
        if (((key != (String *)0x0) && (StringLiteral_ppGrainSize != (String *)0x0)) &&
           (((key->fields)._stringLength == (StringLiteral_ppGrainSize->fields)._stringLength &&
            (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(key->fields)._firstChar,
                                (uint8_t *)&(StringLiteral_ppGrainSize->fields)._firstChar,
                                (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar1 != 0)))) {
          return 1;
        }
        if (key != StringLiteral_ppGrainLumCon) {
          if (((key != (String *)0x0) && (StringLiteral_ppGrainLumCon != (String *)0x0)) &&
             ((key->fields)._stringLength == (StringLiteral_ppGrainLumCon->fields)._stringLength)) {
            lVar2 = (longlong)(key->fields)._stringLength;
            puVar3 = &(key->fields)._firstChar;
            uVar4 = lVar2 * 2;
            puVar5 = &(StringLiteral_ppGrainLumCon->fields)._firstChar;
            if (puVar3 != puVar5) {
              if (7 < uVar4) {
                if (uVar4 != 8) {
                  puVar6 = puVar5;
                  do {
                    if (*(longlong *)((longlong)puVar6 + ((longlong)puVar3 - (longlong)puVar5)) !=
                        *(longlong *)puVar6) {
                      return 0;
                    }
                    puVar6 = puVar6 + 4;
                  } while ((ulonglong)((longlong)puVar6 - (longlong)puVar5) < uVar4 - 8);
                }
                return *(longlong *)(puVar3 + lVar2 + -4) == *(longlong *)(puVar5 + lVar2 + -4);
              }
              if (uVar4 != 0) {
                puVar6 = puVar5;
                do {
                  if (*(char *)((longlong)puVar6 + ((longlong)puVar3 - (longlong)puVar5)) !=
                      (char)*puVar6) {
                    return 0;
                  }
                  puVar6 = (uint16_t *)((longlong)puVar6 + 1);
                } while ((ulonglong)((longlong)puVar6 - (longlong)puVar5) < uVar4);
              }
            }
            return 1;
          }
          return 0;
        }
      }
    }
  }
  return 1;
}


/* Void Start() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxGrainSettings::CameraBoxGrainSettings_Start
               (CameraBoxGrainSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_ppGrainLumCon);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppGrainOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppGrainInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppGrainSize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = lRam_?;
  this_01 = (this->fields).featureOnToggle;
  pCVar2 = (this->fields).cameraBoxSettings;
  pSStackX_8 = (String *)((ulonglong)pSStackX_8 & 0xffffffffffffff00);
  pSVar3 = pSStackX_8;
  if ((*(int *)(lRam_? + 0x28) < 0) &&
     ((*(longlong *)(lRam_? + 0x60) == 0 ||
      (pSVar3 = (String *)0x0, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
    pSVar3 = (String *)FUN_?(lRam_?);
    FUN_?(&pSVar3->fields,&pSStackX_8,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
    if (iRam_? != 0) {
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
  if (((pCVar2 == (CameraBoxSettings *)0x0) ||
      (pOVar9 = CameraBoxSettings::CameraBoxSettings_GetSetting
                           (pCVar2,StringLiteral_ppGrainOn,(Object *)pSVar3,(MethodInfo *)0x0),
      this_01 == (SettingsToggle *)0x0)) || (pOVar9 == (Object *)0x0)) {
code_?:
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((pOVar9->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar9,lRam_?);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  SettingsToggle::SettingsToggle_Initialize
            (this_01,StringLiteral_ppGrainOn,*(bool *)&pOVar9[1].klass,(MethodInfo *)0x0);
  lVar1 = lRam_?;
  pCVar2 = (this->fields).cameraBoxSettings;
  pSStackX_8 = (String *)((ulonglong)pSStackX_8 & 0xffffffff00000000);
  pSVar3 = pSStackX_8;
  if ((*(int *)(lRam_? + 0x28) < 0) &&
     ((*(longlong *)(lRam_? + 0x60) == 0 ||
      (pSVar3 = (String *)0x0, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
    pSVar3 = (String *)FUN_?(lRam_?);
    FUN_?(&pSVar3->fields,&pSStackX_8,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
    if (iRam_? != 0) {
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
  if ((pCVar2 == (CameraBoxSettings *)0x0) ||
     (pOVar9 = CameraBoxSettings::CameraBoxSettings_GetSetting
                          (pCVar2,StringLiteral_ppGrainInt,(Object *)pSVar3,(MethodInfo *)0x0),
     pOVar9 == (Object *)0x0)) goto code_?;
  if ((pOVar9->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar9,lRam_?);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pSVar11 = (this->fields).intensitySlider;
  if (pSVar11 == (SettingsSlider *)0x0) goto code_?;
  iVar12 = *(int32_t *)&pOVar9[1].klass;
  SettingsSlider::SettingsSlider_Initialize_1
            (pSVar11,StringLiteral_ppGrainInt,iVar12,0,100,(MethodInfo *)0x0);
  pSVar13 = (this->fields).intensityInputField;
  if (pSVar13 == (SettingsInputFieldSlider *)0x0) goto code_?;
  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
            (pSVar13,StringLiteral_ppGrainInt,(float)iVar12,(MethodInfo *)0x0);
  pCVar2 = (this->fields).cameraBoxSettings;
  pSStackX_8 = (String *)CONCAT44(pSStackX_8._4_4_,10);
  pOVar9 = (Object *)FUN_?(lRam_?,&pSStackX_8);
  if ((pCVar2 == (CameraBoxSettings *)0x0) ||
     (pOVar9 = CameraBoxSettings::CameraBoxSettings_GetSetting
                          (pCVar2,StringLiteral_ppGrainSize,pOVar9,(MethodInfo *)0x0),
     pOVar9 == (Object *)0x0)) goto code_?;
  if ((pOVar9->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar9,lRam_?);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pSVar11 = (this->fields).sizeSlider;
  if (pSVar11 == (SettingsSlider *)0x0) goto code_?;
  iVar12 = *(int32_t *)&pOVar9[1].klass;
  SettingsSlider::SettingsSlider_Initialize_1
            (pSVar11,StringLiteral_ppGrainSize,iVar12,3,0x1e,(MethodInfo *)0x0);
  pSVar13 = (this->fields).sizeInputField;
  if (pSVar13 == (SettingsInputFieldSlider *)0x0) goto code_?;
  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
            (pSVar13,StringLiteral_ppGrainSize,(float)iVar12,(MethodInfo *)0x0);
  pCVar2 = (this->fields).cameraBoxSettings;
  pSStackX_8 = (String *)CONCAT44(pSStackX_8._4_4_,8);
  pOVar9 = (Object *)FUN_?(lRam_?,&pSStackX_8);
  if ((pCVar2 == (CameraBoxSettings *)0x0) ||
     (pOVar9 = CameraBoxSettings::CameraBoxSettings_GetSetting
                          (pCVar2,StringLiteral_ppGrainLumCon,pOVar9,(MethodInfo *)0x0),
     pOVar9 == (Object *)0x0)) goto code_?;
  if ((pOVar9->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar9,lRam_?);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pSVar11 = (this->fields).luminanceContributionSlider;
  if (pSVar11 == (SettingsSlider *)0x0) goto code_?;
  iVar12 = *(int32_t *)&pOVar9[1].klass;
  SettingsSlider::SettingsSlider_Initialize_1
            (pSVar11,StringLiteral_ppGrainLumCon,iVar12,0,10,(MethodInfo *)0x0);
  pSVar13 = (this->fields).luminanceContributionInputField;
  if (pSVar13 == (SettingsInputFieldSlider *)0x0) goto code_?;
  bVar8 = iRam_? != 0;
  (pSVar13->fields).key = StringLiteral_ppGrainLumCon;
  if (bVar8) {
    uVar4 = (uint)((ulonglong)&(pSVar13->fields).key >> 0xc);
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
                 (pSVar13,(float)iVar12,(MethodInfo *)0x0);
  pSVar3 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (inputFieldValue,(MethodInfo *)0x0);
  this_00 = (pSVar13->fields).inputField;
  if (this_00 == (InputField *)0x0) {
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
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
  pSVar14 = (this_00->fields).m_Text;
  if (pSVar14 == pSVar3) {
    return;
  }
  if (pSVar14 == (String *)0x0) {
code_?:
    if (pSVar3 == (String *)0x0) {
code_?:
      pSVar3 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar3 == (String *)0x0) goto code_?;
    if ((pSVar14->fields)._stringLength == (pSVar3->fields)._stringLength) {
      bVar15 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar14->fields)._firstChar,
                          (uint8_t *)&(pSVar3->fields)._firstChar,
                          (longlong)(pSVar14->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar3 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar3,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_00->fields).m_LineType == 0) {
    if ((pSVar3 == (String *)0x0) ||
       (pSVar3 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar3,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar3 == (String *)0x0)) goto DAT_?;
    pSVar3 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar3,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_00->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_00->fields).m_CharacterValidation == 0)) {
    if (0 < (this_00->fields).m_CharacterLimit) {
      if (pSVar3 == (String *)0x0) goto DAT_?;
      iVar16 = (this_00->fields).m_CharacterLimit;
      if (iVar16 < (pSVar3->fields)._stringLength) {
        pSVar3 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar3,0,iVar16,(MethodInfo *)0x0);
      }
    }
    (this_00->fields).m_Text = pSVar3;
    func_?(&(this_00->fields).m_Text);
  }
  else {
    bVar8 = iRam_? != 0;
    (this_00->fields).m_Text = ::StringLiteral__;
    if (bVar8) {
      uVar4 = (uint)((ulonglong)&(this_00->fields).m_Text >> 0xc);
      lVar1 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar1 + 0xADDR);
        puVar7 = (ulonglong *)(lVar1 + 0xADDR);
        LOCK();
        bVar8 = uVar5 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar5 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pIVar17 = (this_00->fields).m_OnValidateInput;
    if (pIVar17 == (InputField_OnValidateInput *)0x0) {
      pIVar17 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar18 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar8 = iRam_? != 0;
      (pIVar17->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar17->fields)._._.method = pMVar18;
      (pIVar17->fields)._._.m_target = (Object *)this_00;
      if (bVar8) {
        uVar4 = (uint)((ulonglong)&(pIVar17->fields)._._.m_target >> 0xc);
        lVar1 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar1 + 0xADDR);
          puVar7 = (ulonglong *)(lVar1 + 0xADDR);
          LOCK();
          bVar8 = uVar5 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar5 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      uVar19 = pMVar18->parameters_count;
      (pIVar17->fields)._._.method_code = pIVar17;
      if ((pMVar18->flags & 0x10) == 0) {
        if (uVar19 != 2) goto code_?;
        pcVar10 = FUN_?;
      }
      else if (uVar19 == 3) {
        pcVar10 = FUN_?;
      }
      else {
code_?:
        (pIVar17->fields)._._.method_code = (pIVar17->fields)._._.m_target;
        pcVar10 = (pIVar17->fields)._._.method_ptr;
      }
      (pIVar17->fields)._._.invoke_impl = pcVar10;
      (pIVar17->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar3 == (String *)0x0) goto DAT_?;
    iVar12 = (pSVar3->fields)._stringLength;
    (this_00->fields).m_CaretSelectPosition = iVar12;
    (this_00->fields).m_CaretPosition = iVar12;
    if ((this_00->fields).m_CharacterLimit < 1) {
      iVar16 = (pSVar3->fields)._stringLength;
    }
    else {
      iVar16 = (this_00->fields).m_CharacterLimit;
      iVar20 = (pSVar3->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar20 < iVar16) {
        iVar16 = iVar20;
      }
    }
    uVar4 = 0;
    if (0 < iVar16) {
      puVar21 = &(pSVar3->fields)._firstChar;
      lVar1 = 0;
      do {
        pSVar14 = (this_00->fields).m_Text;
        if (pSVar14 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar3->fields)._stringLength <= (longlong)(ulonglong)uVar4) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (pIVar17 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar17->fields)._._.invoke_impl)
                      ((pIVar17->fields)._._.method_code,(this_00->fields).m_Text,
                       (pSVar14->fields)._stringLength,*puVar21,(pIVar17->fields)._._.method);
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
        uVar4 = uVar4 + 1;
        lVar1 = lVar1 + 1;
        puVar21 = puVar21 + 1;
      } while (lVar1 < iVar16);
    }
  }
  if ((this_00->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_00->fields).m_Keyboard,(this_00->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar3 = (this_00->fields).m_Text;
  if (pSVar3 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar16 = (pSVar3->fields)._stringLength;
  if (iVar16 < (this_00->fields).m_CaretPosition) {
    (this_00->fields).m_CaretPosition = iVar16;
  }
  else if ((this_00->fields).m_CaretSelectPosition <= iVar16) goto code_?;
  (this_00->fields).m_CaretSelectPosition = iVar16;
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


/* Object ValueToSend(String, Object) */

Object * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
         CameraBoxGrainSettings::CameraBoxGrainSettings_ValueToSend
                   (CameraBoxGrainSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppGrainLumCon);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppGrainInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppGrainSize);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != StringLiteral_ppGrainInt) {
    if (((key != (String *)0x0) && (StringLiteral_ppGrainInt != (String *)0x0)) &&
       ((key->fields)._stringLength == (StringLiteral_ppGrainInt->fields)._stringLength)) {
      bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(key->fields)._firstChar,
                         (uint8_t *)&(StringLiteral_ppGrainInt->fields)._firstChar,
                         (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar1 != 0) goto code_?;
    }
    if (key != StringLiteral_ppGrainSize) {
      if (((key != (String *)0x0) && (StringLiteral_ppGrainSize != (String *)0x0)) &&
         ((key->fields)._stringLength == (StringLiteral_ppGrainSize->fields)._stringLength)) {
        bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(key->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_ppGrainSize->fields)._firstChar,
                           (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0);
        if (bVar1 != 0) goto code_?;
      }
      if (key != StringLiteral_ppGrainLumCon) {
        if (((key != (String *)0x0) && (StringLiteral_ppGrainLumCon != (String *)0x0)) &&
           ((key->fields)._stringLength == (StringLiteral_ppGrainLumCon->fields)._stringLength)) {
          bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(key->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_ppGrainLumCon->fields)._firstChar,
                             (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0);
          if (bVar1 != 0) goto code_?;
        }
        return value;
      }
    }
  }
code_?:
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  aiStackX_10[0] = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
  pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
  return pOVar2;
}

