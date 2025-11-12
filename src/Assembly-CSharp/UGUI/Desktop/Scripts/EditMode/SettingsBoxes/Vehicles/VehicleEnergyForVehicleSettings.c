
/* Boolean IsKey(String) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergyForVehicleSettings::VehicleEnergyForVehicleSettings_IsKey
               (String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_vehicleEnergyConsumption);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyUse);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyStorage);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_vehicleEnergyUse;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
  if (key != pSVar1) {
    if ((((key != (String *)0x0) && (pSVar1 != (String *)0x0)) &&
        ((key->fields)._stringLength == (pSVar1->fields)._stringLength)) &&
       (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(key->fields)._firstChar,
                           (uint8_t *)&(pSVar1->fields)._firstChar,
                           (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar2 != 0)
       ) {
      return 1;
    }
    pSVar1 = StringLiteral_vehicleEnergyStorage;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_BlueprintData_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
    if (key != pSVar1) {
      if (((key != (String *)0x0) && (pSVar1 != (String *)0x0)) &&
         (((key->fields)._stringLength == (pSVar1->fields)._stringLength &&
          (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(key->fields)._firstChar,
                              (uint8_t *)&(pSVar1->fields)._firstChar,
                              (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar2 != 0)))) {
        return 1;
      }
      pSVar1 = StringLiteral_vehicleEnergyConsumption;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_BlueprintData_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      if (key != pSVar1) {
        if (((key != (String *)0x0) && (pSVar1 != (String *)0x0)) &&
           ((key->fields)._stringLength == (pSVar1->fields)._stringLength)) {
          lVar3 = (longlong)(key->fields)._stringLength;
          puVar4 = &(pSVar1->fields)._firstChar;
          uVar5 = lVar3 * 2;
          puVar6 = &(key->fields)._firstChar;
          if (puVar6 != puVar4) {
            if (7 < uVar5) {
              if (uVar5 != 8) {
                puVar7 = puVar4;
                do {
                  if (*(longlong *)((longlong)puVar7 + ((longlong)puVar6 - (longlong)puVar4)) !=
                      *(longlong *)puVar7) {
                    return 0;
                  }
                  puVar7 = puVar7 + 4;
                } while ((ulonglong)((longlong)puVar7 - (longlong)puVar4) < uVar5 - 8);
              }
              return *(longlong *)(puVar6 + lVar3 + -4) == *(longlong *)(puVar4 + lVar3 + -4);
            }
            if (uVar5 != 0) {
              puVar7 = puVar4;
              do {
                if (*(char *)((longlong)puVar7 + ((longlong)puVar6 - (longlong)puVar4)) !=
                    (char)*puVar7) {
                  return 0;
                }
                puVar7 = (uint16_t *)((longlong)puVar7 + 1);
              } while ((ulonglong)((longlong)puVar7 - (longlong)puVar4) < uVar5);
            }
          }
          return 1;
        }
        return 0;
      }
    }
  }
  return 1;
}


/* Void OnSavePressed() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergyForVehicleSettings::VehicleEnergyForVehicleSettings_OnSavePressed
               (VehicleEnergyForVehicleSettings *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    pVVar1 = (this->fields).vehicleBaseSettings;
    if (pVVar1 != (VehicleBaseSettings *)0x0) {
      obj = (pVVar1->fields).canvas;
      auStack_2[0] =
           (*(pVVar1->klass->vtable).get_DefaultCanvasSize.methodPtr)
                     (pVVar1,(pVVar1->klass->vtable).get_DefaultCanvasSize.method);
      if (obj != (RectTransform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                        ,auStack_2[0],0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (RectTransform *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pvVar4 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar4,auStack_2);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergyForVehicleSettings::VehicleEnergyForVehicleSettings_Start
               (VehicleEnergyForVehicleSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_vehicleEnergyConsumption);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyUse);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyStorage);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields).vehicleBaseSettings;
  if (pVVar1 == (VehicleBaseSettings *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  piVar3 = (int32_t *)(*(pVVar1->klass->vtable).__unknown_3.methodPtr)(&stack0xffffffffffffffd8);
  pSVar4 = StringLiteral_vehicleEnergyUse;
  this_01 = (this->fields).vehicleEnergyOnToggle;
  iVar5 = *piVar3;
  maxValue = piVar3[1];
  minValue = piVar3[2];
  maxValue_00 = piVar3[3];
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar6 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_BlueprintData_,pSVar4,(MethodInfo *)0x0);
  pSVar4 = StringLiteral_vehicleEnergyUse;
  pVVar1 = (this->fields).vehicleBaseSettings;
  if (pVVar1 == (VehicleBaseSettings *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar7 = (pVVar1->fields).bluePrintData;
  if (((pDVar7 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
      (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar7,(Object *)pSVar4,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), this_01 == (SettingsToggle *)0x0)) || (pOVar8 == (Object *)0x0))
  goto code_?;
  if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar8,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SettingsToggle::SettingsToggle_Initialize
            (this_01,pSVar6,*(bool *)&pOVar8[1].klass,(MethodInfo *)0x0);
  pSVar4 = StringLiteral_vehicleEnergyStorage;
  pVVar1 = (this->fields).vehicleBaseSettings;
  if (pVVar1 == (VehicleBaseSettings *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar7 = (pVVar1->fields).bluePrintData;
  if ((pDVar7 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar7,(Object *)pSVar4,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pSVar4 = StringLiteral_vehicleEnergyStorage, pOVar8 == (Object *)0x0)
     ) goto code_?;
  if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar8,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = *(int *)&pOVar8[1].klass;
  pSVar10 = (this->fields).storageSlider;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_BlueprintData_,pSVar4,(MethodInfo *)0x0);
  if (pSVar10 == (SettingsSlider *)0x0) goto code_?;
  SettingsSlider::SettingsSlider_Initialize_1
            (pSVar10,pSVar4,iVar9,iVar5,maxValue,(MethodInfo *)0x0);
  pSVar4 = StringLiteral_vehicleEnergyStorage;
  pSVar11 = (this->fields).storageInputField;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_BlueprintData_,pSVar4,(MethodInfo *)0x0);
  if (pSVar11 == (SettingsInputFieldSlider *)0x0) goto code_?;
  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
            (pSVar11,pSVar4,(float)iVar9,(MethodInfo *)0x0);
  pSVar4 = StringLiteral_vehicleEnergyConsumption;
  pVVar1 = (this->fields).vehicleBaseSettings;
  if (pVVar1 == (VehicleBaseSettings *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar7 = (pVVar1->fields).bluePrintData;
  if ((pDVar7 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (pDVar7,(Object *)pSVar4,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pSVar4 = StringLiteral_vehicleEnergyConsumption,
     pOVar8 == (Object *)0x0)) goto code_?;
  if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar8,lRam_?);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = *(int *)&pOVar8[1].klass;
  pSVar10 = (this->fields).consumptionSlider;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_BlueprintData_,pSVar4,(MethodInfo *)0x0);
  if (pSVar10 == (SettingsSlider *)0x0) goto code_?;
  SettingsSlider::SettingsSlider_Initialize_1
            (pSVar10,pSVar4,iVar9,minValue,maxValue_00,(MethodInfo *)0x0);
  pSVar4 = StringLiteral_vehicleEnergyConsumption;
  pSVar11 = (this->fields).consumptionInputField;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_BlueprintData_,pSVar4,(MethodInfo *)0x0);
  if (pSVar11 == (SettingsInputFieldSlider *)0x0) goto code_?;
  bVar12 = iRam_? != 0;
  (pSVar11->fields).key = pSVar4;
  if (bVar12) {
    uVar13 = (uint)((ulonglong)&(pSVar11->fields).key >> 0xc);
    uVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
    do {
      uVar15 = *(ulonglong *)(uVar14 * 8 + 0xADDR);
      puVar16 = (ulonglong *)(uVar14 * 8 + 0xADDR);
      LOCK();
      bVar12 = uVar15 == *puVar16;
      if (bVar12) {
        *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
    } while (!bVar12);
  }
  inputFieldValue =
       SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                 (pSVar11,(float)iVar9,(MethodInfo *)0x0);
  pSVar4 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (inputFieldValue,(MethodInfo *)0x0);
  this_00 = (pSVar11->fields).inputField;
  if (this_00 == (InputField *)0x0) {
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
  pSVar6 = (this_00->fields).m_Text;
  if (pSVar6 == pSVar4) {
    return;
  }
  if (pSVar6 == (String *)0x0) {
code_?:
    if (pSVar4 == (String *)0x0) {
code_?:
      pSVar4 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar4 == (String *)0x0) goto code_?;
    if ((pSVar6->fields)._stringLength == (pSVar4->fields)._stringLength) {
      bVar17 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar6->fields)._firstChar,
                          (uint8_t *)&(pSVar4->fields)._firstChar,
                          (longlong)(pSVar6->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar17 != 0) {
        return;
      }
      goto code_?;
    }
  }
  pSVar4 = mscorlib.dll::System::String::String_Replace_1
                      (pSVar4,::StringLiteral__,
                       (String *)**(undefined8 **)(lRam_? + 0xb8),(MethodInfo *)0x0);
  if ((this_00->fields).m_LineType == 0) {
    if ((pSVar4 == (String *)0x0) ||
       (pSVar4 = mscorlib.dll::System::String::String_Replace_1
                            (pSVar4,StringLiteral_u000A,::StringLiteral__,(MethodInfo *)0x0),
       pSVar4 == (String *)0x0)) goto DAT_?;
    pSVar4 = mscorlib.dll::System::String::String_Replace_1
                        (pSVar4,StringLiteral_u0009,::StringLiteral__,(MethodInfo *)0x0);
  }
  if (((this_00->fields).m_OnValidateInput == (InputField_OnValidateInput *)0x0) &&
     ((this_00->fields).m_CharacterValidation == 0)) {
    if (0 < (this_00->fields).m_CharacterLimit) {
      if (pSVar4 == (String *)0x0) goto DAT_?;
      iVar9 = (this_00->fields).m_CharacterLimit;
      if (iVar9 < (pSVar4->fields)._stringLength) {
        pSVar4 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar4,0,iVar9,(MethodInfo *)0x0);
      }
    }
    (this_00->fields).m_Text = pSVar4;
    func_?(&(this_00->fields).m_Text);
  }
  else {
    bVar12 = iRam_? != 0;
    (this_00->fields).m_Text = ::StringLiteral__;
    if (bVar12) {
      uVar13 = (uint)((ulonglong)&(this_00->fields).m_Text >> 0xc);
      lVar18 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
      do {
        uVar14 = *(ulonglong *)(lVar18 + 0xADDR);
        puVar16 = (ulonglong *)(lVar18 + 0xADDR);
        LOCK();
        bVar12 = uVar14 == *puVar16;
        if (bVar12) {
          *puVar16 = uVar14 | 1L << (uVar13 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    pIVar19 = (this_00->fields).m_OnValidateInput;
    if (pIVar19 == (InputField_OnValidateInput *)0x0) {
      pIVar19 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar20 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar12 = iRam_? != 0;
      (pIVar19->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar19->fields)._._.method = pMVar20;
      (pIVar19->fields)._._.m_target = (Object *)this_00;
      if (bVar12) {
        uVar13 = (uint)((ulonglong)&(pIVar19->fields)._._.m_target >> 0xc);
        lVar18 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
        do {
          uVar14 = *(ulonglong *)(lVar18 + 0xADDR);
          puVar16 = (ulonglong *)(lVar18 + 0xADDR);
          LOCK();
          bVar12 = uVar14 == *puVar16;
          if (bVar12) {
            *puVar16 = uVar14 | 1L << (uVar13 & 0x3f);
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
    if (pSVar4 == (String *)0x0) goto DAT_?;
    iVar5 = (pSVar4->fields)._stringLength;
    (this_00->fields).m_CaretSelectPosition = iVar5;
    (this_00->fields).m_CaretPosition = iVar5;
    if ((this_00->fields).m_CharacterLimit < 1) {
      iVar9 = (pSVar4->fields)._stringLength;
    }
    else {
      iVar9 = (this_00->fields).m_CharacterLimit;
      iVar22 = (pSVar4->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar22 < iVar9) {
        iVar9 = iVar22;
      }
    }
    uVar13 = 0;
    if (0 < iVar9) {
      puVar23 = &(pSVar4->fields)._firstChar;
      lVar18 = 0;
      do {
        pSVar6 = (this_00->fields).m_Text;
        if (pSVar6 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar4->fields)._stringLength <= (longlong)(ulonglong)uVar13) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pIVar19 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar19->fields)._._.invoke_impl)
                      ((pIVar19->fields)._._.method_code,(this_00->fields).m_Text,
                       (pSVar6->fields)._stringLength,*puVar23,(pIVar19->fields)._._.method);
        if (c != 0) {
          pSVar6 = (this_00->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          str1 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar6 = mscorlib.dll::System::String::String_Concat_4(pSVar6,str1,(MethodInfo *)0x0);
          (this_00->fields).m_Text = pSVar6;
          func_?(&(this_00->fields).m_Text);
        }
        uVar13 = uVar13 + 1;
        lVar18 = lVar18 + 1;
        puVar23 = puVar23 + 1;
      } while (lVar18 < iVar9);
    }
  }
  if ((this_00->fields).m_Keyboard != (TouchScreenKeyboard *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::TouchScreenKeyboard::TouchScreenKeyboard_set_text
              ((this_00->fields).m_Keyboard,(this_00->fields).m_Text,(MethodInfo *)0x0);
  }
  pSVar4 = (this_00->fields).m_Text;
  if (pSVar4 == (String *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = (pSVar4->fields)._stringLength;
  if (iVar9 < (this_00->fields).m_CaretPosition) {
    (this_00->fields).m_CaretPosition = iVar9;
  }
  else if ((this_00->fields).m_CaretSelectPosition <= iVar9) goto code_?;
  (this_00->fields).m_CaretSelectPosition = iVar9;
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

Object * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
         VehicleEnergyForVehicleSettings::VehicleEnergyForVehicleSettings_ValueToSend
                   (VehicleEnergyForVehicleSettings *this,String *key,Object *value,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyConsumption);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyUse);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_vehicleEnergyStorage);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_vehicleEnergyUse;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
  if (key != pSVar1) {
    if ((((key != (String *)0x0) && (pSVar1 != (String *)0x0)) &&
        ((key->fields)._stringLength == (pSVar1->fields)._stringLength)) &&
       (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(key->fields)._firstChar,
                           (uint8_t *)&(pSVar1->fields)._firstChar,
                           (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar2 != 0)
       ) {
      return value;
    }
    pSVar1 = StringLiteral_vehicleEnergyStorage;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_BlueprintData_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
    if ((key != pSVar1) &&
       (((key == (String *)0x0 || (pSVar1 == (String *)0x0)) ||
        (((key->fields)._stringLength != (pSVar1->fields)._stringLength ||
         (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(key->fields)._firstChar,
                             (uint8_t *)&(pSVar1->fields)._firstChar,
                             (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar2 == 0)))))) {
      pSVar1 = StringLiteral_vehicleEnergyConsumption;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_BlueprintData_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      if ((key != pSVar1) &&
         (((key == (String *)0x0 || (pSVar1 == (String *)0x0)) ||
          (((key->fields)._stringLength != (pSVar1->fields)._stringLength ||
           (bVar2 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(key->fields)._firstChar,
                               (uint8_t *)&(pSVar1->fields)._firstChar,
                               (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar2 == 0)))))) {
        return value;
      }
    }
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    aiStackX_10[0] = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
    pOVar3 = (Object *)FUN_?(uRam_?,aiStackX_10);
    return pOVar3;
  }
  return value;
}


/* VehicleEnergyForVehicleSettings() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleEnergyForVehicleSettings::VehicleEnergyForVehicleSettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
           ->static_fields;
  (pVVar1->VehicleEnergyEditingCanvasSize).x = 800.0;
  (pVVar1->VehicleEnergyEditingCanvasSize).y = 700.0;
  return;
}

