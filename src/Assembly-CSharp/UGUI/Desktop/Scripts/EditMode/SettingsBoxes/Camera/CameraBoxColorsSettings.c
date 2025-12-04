
/* Void InitData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxColorsSettings::CameraBoxColorsSettings_InitData
               (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppColorsOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppColorsTemp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppColorsPExp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppColorContr);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppColorsSatur);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = uStackX_8;
  lVar2 = lRam_?;
  value = (Object *)0x0;
  uStackX_8 = uStackX_8 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (pOVar3 = value, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
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
    pOVar3 = (Object *)(CONCAT44(uStackX_c,uVar1) & 0xffffffffffffff00);
  }
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppColorsOn,pOVar3,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  lVar2 = lRam_?;
  uStackX_8 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (pOVar3 = value, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
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
            (data,(Object *)StringLiteral_ppColorsPExp,pOVar3,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  lVar2 = lRam_?;
  uStackX_8 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (pOVar3 = value, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
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
            (data,(Object *)StringLiteral_ppColorsTemp,pOVar3,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  lVar2 = lRam_?;
  uStackX_8 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (pOVar3 = value, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
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
            (data,(Object *)StringLiteral_ppColorsSatur,pOVar3,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  lVar2 = lRam_?;
  uStackX_8 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
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
    value = (Object *)((ulonglong)uStackX_c << 0x20);
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppColorContr,value,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  return;
}


/* Boolean IsKey(String) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxColorsSettings::CameraBoxColorsSettings_IsKey(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_ppColorsOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppColorsTemp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppColorsPExp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppColorContr);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppColorsSatur);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != StringLiteral_ppColorsOn) {
    if ((((key != (String *)0x0) && (StringLiteral_ppColorsOn != (String *)0x0)) &&
        ((key->fields)._stringLength == (StringLiteral_ppColorsOn->fields)._stringLength)) &&
       (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(key->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_ppColorsOn->fields)._firstChar,
                           (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 != 0)
       ) {
      return 1;
    }
    if (key != StringLiteral_ppColorsPExp) {
      if (((key != (String *)0x0) && (StringLiteral_ppColorsPExp != (String *)0x0)) &&
         (((key->fields)._stringLength == (StringLiteral_ppColorsPExp->fields)._stringLength &&
          (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(key->fields)._firstChar,
                              (uint8_t *)&(StringLiteral_ppColorsPExp->fields)._firstChar,
                              (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar1 != 0)))) {
        return 1;
      }
      if (key != StringLiteral_ppColorsTemp) {
        if (((key != (String *)0x0) && (StringLiteral_ppColorsTemp != (String *)0x0)) &&
           (((key->fields)._stringLength == (StringLiteral_ppColorsTemp->fields)._stringLength &&
            (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(key->fields)._firstChar,
                                (uint8_t *)&(StringLiteral_ppColorsTemp->fields)._firstChar,
                                (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar1 != 0)))) {
          return 1;
        }
        if (key != StringLiteral_ppColorsSatur) {
          if ((((key != (String *)0x0) && (StringLiteral_ppColorsSatur != (String *)0x0)) &&
              ((key->fields)._stringLength == (StringLiteral_ppColorsSatur->fields)._stringLength))
             && (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                   ((uint8_t *)&(key->fields)._firstChar,
                                    (uint8_t *)&(StringLiteral_ppColorsSatur->fields)._firstChar,
                                    (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
                bVar1 != 0)) {
            return 1;
          }
          if (key != StringLiteral_ppColorContr) {
            if (((key != (String *)0x0) && (StringLiteral_ppColorContr != (String *)0x0)) &&
               ((key->fields)._stringLength == (StringLiteral_ppColorContr->fields)._stringLength))
            {
              lVar2 = (longlong)(key->fields)._stringLength;
              puVar3 = &(key->fields)._firstChar;
              uVar4 = lVar2 * 2;
              puVar5 = &(StringLiteral_ppColorContr->fields)._firstChar;
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
  }
  return 1;
}


/* Void Start() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxColorsSettings::CameraBoxColorsSettings_Start
               (CameraBoxColorsSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_ppColorsOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppColorsTemp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppColorsPExp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppColorContr);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppColorsSatur);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = lRam_?;
  this_01 = (this->fields).colorsOnToggle;
  pSVar2 = (String *)0x0;
  pCVar3 = (this->fields).cameraBoxSettings;
  pSStackX_8 = (String *)((ulonglong)pSStackX_8 & 0xffffffffffffff00);
  pSVar4 = pSStackX_8;
  if ((*(int *)(lRam_? + 0x28) < 0) &&
     ((*(longlong *)(lRam_? + 0x60) == 0 ||
      (pSVar4 = pSVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
    pSVar4 = (String *)FUN_?(lRam_?);
    FUN_?(&pSVar4->fields,&pSStackX_8,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pSVar4->fields >> 0xc);
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
  if (((pCVar3 == (CameraBoxSettings *)0x0) ||
      (pOVar10 = CameraBoxSettings::CameraBoxSettings_GetSetting
                           (pCVar3,StringLiteral_ppColorsOn,(Object *)pSVar4,(MethodInfo *)0x0),
      this_01 == (SettingsToggle *)0x0)) || (pOVar10 == (Object *)0x0)) {
code_?:
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar10,lRam_?);
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  SettingsToggle::SettingsToggle_Initialize
            (this_01,StringLiteral_ppColorsOn,*(bool *)&pOVar10[1].klass,(MethodInfo *)0x0);
  lVar1 = lRam_?;
  pCVar3 = (this->fields).cameraBoxSettings;
  pSStackX_8 = (String *)((ulonglong)pSStackX_8 & 0xffffffff00000000);
  pSVar4 = pSStackX_8;
  if ((*(int *)(lRam_? + 0x28) < 0) &&
     ((*(longlong *)(lRam_? + 0x60) == 0 ||
      (pSVar4 = pSVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
    pSVar4 = (String *)FUN_?(lRam_?);
    FUN_?(&pSVar4->fields,&pSStackX_8,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pSVar4->fields >> 0xc);
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
  if ((pCVar3 == (CameraBoxSettings *)0x0) ||
     (pOVar10 = CameraBoxSettings::CameraBoxSettings_GetSetting
                          (pCVar3,StringLiteral_ppColorsPExp,(Object *)pSVar4,(MethodInfo *)0x0),
     pOVar10 == (Object *)0x0)) goto code_?;
  if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar10);
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pSVar12 = (this->fields).postExposureSlider;
  if (pSVar12 == (SettingsSlider *)0x0) goto code_?;
  iVar13 = *(int32_t *)&pOVar10[1].klass;
  SettingsSlider::SettingsSlider_Initialize_1
            (pSVar12,StringLiteral_ppColorsPExp,iVar13,-0xf,0xf,(MethodInfo *)0x0);
  pSVar14 = (this->fields).postExposureInputField;
  if (pSVar14 == (SettingsInputFieldSlider *)0x0) goto code_?;
  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
            (pSVar14,StringLiteral_ppColorsPExp,(float)iVar13,(MethodInfo *)0x0);
  lVar1 = lRam_?;
  pCVar3 = (this->fields).cameraBoxSettings;
  pSStackX_8 = (String *)((ulonglong)pSStackX_8 & 0xffffffff00000000);
  pSVar4 = pSStackX_8;
  if ((*(int *)(lRam_? + 0x28) < 0) &&
     ((*(longlong *)(lRam_? + 0x60) == 0 ||
      (pSVar4 = pSVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
    pSVar4 = (String *)FUN_?(lRam_?);
    FUN_?(&pSVar4->fields,&pSStackX_8,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pSVar4->fields >> 0xc);
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
  if ((pCVar3 == (CameraBoxSettings *)0x0) ||
     (pOVar10 = CameraBoxSettings::CameraBoxSettings_GetSetting
                          (pCVar3,StringLiteral_ppColorsTemp,(Object *)pSVar4,(MethodInfo *)0x0),
     pOVar10 == (Object *)0x0)) goto code_?;
  if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar10);
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pSVar12 = (this->fields).temperatureSlider;
  if (pSVar12 == (SettingsSlider *)0x0) goto code_?;
  iVar13 = *(int32_t *)&pOVar10[1].klass;
  SettingsSlider::SettingsSlider_Initialize_1
            (pSVar12,StringLiteral_ppColorsTemp,iVar13,-100,100,(MethodInfo *)0x0);
  pSVar14 = (this->fields).temperatureInputField;
  if (pSVar14 == (SettingsInputFieldSlider *)0x0) goto code_?;
  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
            (pSVar14,StringLiteral_ppColorsTemp,(float)iVar13,(MethodInfo *)0x0);
  lVar1 = lRam_?;
  pCVar3 = (this->fields).cameraBoxSettings;
  pSStackX_8 = (String *)((ulonglong)pSStackX_8 & 0xffffffff00000000);
  pSVar4 = pSStackX_8;
  if ((*(int *)(lRam_? + 0x28) < 0) &&
     ((*(longlong *)(lRam_? + 0x60) == 0 ||
      (pSVar4 = pSVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
    pSVar4 = (String *)FUN_?(lRam_?);
    FUN_?(&pSVar4->fields,&pSStackX_8,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pSVar4->fields >> 0xc);
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
  if ((pCVar3 == (CameraBoxSettings *)0x0) ||
     (pOVar10 = CameraBoxSettings::CameraBoxSettings_GetSetting
                          (pCVar3,StringLiteral_ppColorsSatur,(Object *)pSVar4,(MethodInfo *)0x0),
     pOVar10 == (Object *)0x0)) goto code_?;
  if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar10);
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pSVar12 = (this->fields).saturationSlider;
  if (pSVar12 == (SettingsSlider *)0x0) goto code_?;
  iVar13 = *(int32_t *)&pOVar10[1].klass;
  SettingsSlider::SettingsSlider_Initialize_1
            (pSVar12,StringLiteral_ppColorsSatur,iVar13,-100,100,(MethodInfo *)0x0);
  pSVar14 = (this->fields).saturationInputField;
  if (pSVar14 == (SettingsInputFieldSlider *)0x0) goto code_?;
  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
            (pSVar14,StringLiteral_ppColorsSatur,(float)iVar13,(MethodInfo *)0x0);
  lVar1 = lRam_?;
  pCVar3 = (this->fields).cameraBoxSettings;
  pSStackX_8 = (String *)((ulonglong)pSStackX_8 & 0xffffffff00000000);
  pSVar4 = pSStackX_8;
  if ((*(int *)(lRam_? + 0x28) < 0) &&
     ((*(longlong *)(lRam_? + 0x60) == 0 ||
      (pSVar4 = pSVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
    pSVar4 = (String *)FUN_?(lRam_?);
    FUN_?(&pSVar4->fields,&pSStackX_8,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&pSVar4->fields >> 0xc);
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
  if ((pCVar3 == (CameraBoxSettings *)0x0) ||
     (pOVar10 = CameraBoxSettings::CameraBoxSettings_GetSetting
                          (pCVar3,StringLiteral_ppColorContr,(Object *)pSVar4,(MethodInfo *)0x0),
     pOVar10 == (Object *)0x0)) goto code_?;
  if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar10,lRam_?);
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pSVar12 = (this->fields).contrastSlider;
  if (pSVar12 == (SettingsSlider *)0x0) goto code_?;
  iVar13 = *(int32_t *)&pOVar10[1].klass;
  SettingsSlider::SettingsSlider_Initialize_1
            (pSVar12,StringLiteral_ppColorContr,iVar13,-0x28,100,(MethodInfo *)0x0);
  pSVar14 = (this->fields).contrastInputField;
  if (pSVar14 == (SettingsInputFieldSlider *)0x0) goto code_?;
  bVar9 = iRam_? != 0;
  (pSVar14->fields).key = StringLiteral_ppColorContr;
  if (bVar9) {
    uVar5 = (uint)((ulonglong)&(pSVar14->fields).key >> 0xc);
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
  inputFieldValue =
       SettingsInputFieldSlider::SettingsInputFieldSlider_GetInputFieldValue
                 (pSVar14,(float)iVar13,(MethodInfo *)0x0);
  pSVar4 = SettingsInputFieldSlider::SettingsInputFieldSlider_ConvertFloatToString
                      (inputFieldValue,(MethodInfo *)0x0);
  this_00 = (pSVar14->fields).inputField;
  if (this_00 == (InputField *)0x0) {
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
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
  pSVar2 = (this_00->fields).m_Text;
  if (pSVar2 == pSVar4) {
    return;
  }
  if (pSVar2 == (String *)0x0) {
code_?:
    if (pSVar4 == (String *)0x0) {
code_?:
      pSVar4 = ::StringLiteral__;
      if (::StringLiteral__ == (String *)0x0) goto DAT_?;
    }
  }
  else {
    if (pSVar4 == (String *)0x0) goto code_?;
    if ((pSVar2->fields)._stringLength == (pSVar4->fields)._stringLength) {
      bVar15 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar2->fields)._firstChar,
                          (uint8_t *)&(pSVar4->fields)._firstChar,
                          (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar15 != 0) {
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
      iVar16 = (this_00->fields).m_CharacterLimit;
      if (iVar16 < (pSVar4->fields)._stringLength) {
        pSVar4 = mscorlib.dll::System::String::String_Substring_1
                            (pSVar4,0,iVar16,(MethodInfo *)0x0);
      }
    }
    (this_00->fields).m_Text = pSVar4;
    func_?(&(this_00->fields).m_Text);
  }
  else {
    bVar9 = iRam_? != 0;
    (this_00->fields).m_Text = ::StringLiteral__;
    if (bVar9) {
      uVar5 = (uint)((ulonglong)&(this_00->fields).m_Text >> 0xc);
      lVar1 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar1 + 0xADDR);
        puVar8 = (ulonglong *)(lVar1 + 0xADDR);
        LOCK();
        bVar9 = uVar6 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar6 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pIVar17 = (this_00->fields).m_OnValidateInput;
    if (pIVar17 == (InputField_OnValidateInput *)0x0) {
      pIVar17 = (InputField_OnValidateInput *)
                FUN_?(TypeInfo__UnityEngine__UI__InputField__OnValidateInput);
      pMVar18 = MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_;
      bVar9 = iRam_? != 0;
      (pIVar17->fields)._._.method_ptr =
           MethodInfo__UnityEngine__UI__InputField__Validate_System__String__int__wchar_t_->
           virtualMethodPointer;
      (pIVar17->fields)._._.method = pMVar18;
      (pIVar17->fields)._._.m_target = (Object *)this_00;
      if (bVar9) {
        uVar5 = (uint)((ulonglong)&(pIVar17->fields)._._.m_target >> 0xc);
        lVar1 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar1 + 0xADDR);
          puVar8 = (ulonglong *)(lVar1 + 0xADDR);
          LOCK();
          bVar9 = uVar6 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar6 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      uVar19 = pMVar18->parameters_count;
      (pIVar17->fields)._._.method_code = pIVar17;
      if ((pMVar18->flags & 0x10) == 0) {
        if (uVar19 != 2) goto code_?;
        pcVar11 = FUN_?;
      }
      else if (uVar19 == 3) {
        pcVar11 = FUN_?;
      }
      else {
code_?:
        (pIVar17->fields)._._.method_code = (pIVar17->fields)._._.m_target;
        pcVar11 = (pIVar17->fields)._._.method_ptr;
      }
      (pIVar17->fields)._._.invoke_impl = pcVar11;
      (pIVar17->fields)._._.extra_arg = FUN_?;
    }
    if (pSVar4 == (String *)0x0) goto DAT_?;
    iVar13 = (pSVar4->fields)._stringLength;
    (this_00->fields).m_CaretSelectPosition = iVar13;
    (this_00->fields).m_CaretPosition = iVar13;
    if ((this_00->fields).m_CharacterLimit < 1) {
      iVar16 = (pSVar4->fields)._stringLength;
    }
    else {
      iVar16 = (this_00->fields).m_CharacterLimit;
      iVar20 = (pSVar4->fields)._stringLength;
      if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (iVar20 < iVar16) {
        iVar16 = iVar20;
      }
    }
    uVar5 = 0;
    if (0 < iVar16) {
      puVar21 = &(pSVar4->fields)._firstChar;
      lVar1 = 0;
      do {
        pSVar2 = (this_00->fields).m_Text;
        if (pSVar2 == (String *)0x0) goto DAT_?;
        if ((longlong)(pSVar4->fields)._stringLength <= (longlong)(ulonglong)uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (pIVar17 == (InputField_OnValidateInput *)0x0) goto DAT_?;
        c = (*(pIVar17->fields)._._.invoke_impl)
                      ((pIVar17->fields)._._.method_code,(this_00->fields).m_Text,
                       (pSVar2->fields)._stringLength,*puVar21,(pIVar17->fields)._._.method);
        if (c != 0) {
          pSStackX_8 = (this_00->fields).m_Text;
          if ((*(int *)(lRam_? + 0xe4) == 0) &&
             (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
            FUN_?();
          }
          pSVar2 = mscorlib.dll::System::Char::Char_ToString_2(c,(MethodInfo *)0x0);
          pSVar2 = mscorlib.dll::System::String::String_Concat_4
                              (pSStackX_8,pSVar2,(MethodInfo *)0x0);
          (this_00->fields).m_Text = pSVar2;
          func_?(&(this_00->fields).m_Text);
        }
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 1;
        puVar21 = puVar21 + 1;
      } while (lVar1 < iVar16);
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
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar16 = (pSVar4->fields)._stringLength;
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
         CameraBoxColorsSettings::CameraBoxColorsSettings_ValueToSend
                   (String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppColorsTemp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppColorsPExp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppColorContr);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppColorsSatur);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != StringLiteral_ppColorsPExp) {
    if (((key != (String *)0x0) && (StringLiteral_ppColorsPExp != (String *)0x0)) &&
       ((key->fields)._stringLength == (StringLiteral_ppColorsPExp->fields)._stringLength)) {
      bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(key->fields)._firstChar,
                         (uint8_t *)&(StringLiteral_ppColorsPExp->fields)._firstChar,
                         (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar1 != 0) goto code_?;
    }
    if (key != StringLiteral_ppColorsTemp) {
      if (((key != (String *)0x0) && (StringLiteral_ppColorsTemp != (String *)0x0)) &&
         ((key->fields)._stringLength == (StringLiteral_ppColorsTemp->fields)._stringLength)) {
        bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(key->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_ppColorsTemp->fields)._firstChar,
                           (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0);
        if (bVar1 != 0) goto code_?;
      }
      if (key != StringLiteral_ppColorsSatur) {
        if (((key != (String *)0x0) && (StringLiteral_ppColorsSatur != (String *)0x0)) &&
           ((key->fields)._stringLength == (StringLiteral_ppColorsSatur->fields)._stringLength)) {
          bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(key->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_ppColorsSatur->fields)._firstChar,
                             (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0);
          if (bVar1 != 0) goto code_?;
        }
        if (key != StringLiteral_ppColorContr) {
          if (((key != (String *)0x0) && (StringLiteral_ppColorContr != (String *)0x0)) &&
             ((key->fields)._stringLength == (StringLiteral_ppColorContr->fields)._stringLength)) {
            bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(key->fields)._firstChar,
                               (uint8_t *)&(StringLiteral_ppColorContr->fields)._firstChar,
                               (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0);
            if (bVar1 != 0) goto code_?;
          }
          return value;
        }
      }
    }
  }
code_?:
  if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
    FUN_?();
  }
  aiStackX_8[0] = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
  pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_8);
  return pOVar2;
}

