
/* Void InitData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxBloomSettings::CameraBoxBloomSettings_InitData
               (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomDiff);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomColB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomColG);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomColR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomSKnee);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomInty);
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
        uVar4 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
  }
  else {
    value = (Object *)(CONCAT44(uStackX_c,uVar1) & 0xffffffffffffff00);
  }
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppBloomOn,value,InsertionBehavior__Enum_None,
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
        uVar4 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
  }
  else {
    pOVar3 = (Object *)((ulonglong)uStackX_c << 0x20);
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppBloomInty,pOVar3,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = 5;
  pOVar3 = (Object *)FUN_?(lRam_?,&uStackX_8);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppBloomSKnee,pOVar3,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = 7;
  pOVar3 = (Object *)FUN_?(lRam_?,&uStackX_8);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppBloomDiff,pOVar3,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = 0x3f800000;
  pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_8);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppBloomColR,pOVar3,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = 0x3f800000;
  pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_8);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppBloomColG,pOVar3,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = 0x3f800000;
  pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_8);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppBloomColB,pOVar3,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  return;
}


/* Boolean IsKey(String) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxBloomSettings::CameraBoxBloomSettings_IsKey(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_ppBloomDiff);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomColB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomColG);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomColR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomSKnee);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomInty);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != StringLiteral_ppBloomOn) {
    if ((((key != (String *)0x0) && (StringLiteral_ppBloomOn != (String *)0x0)) &&
        ((key->fields)._stringLength == (StringLiteral_ppBloomOn->fields)._stringLength)) &&
       (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(key->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_ppBloomOn->fields)._firstChar,
                           (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 != 0)
       ) {
      return 1;
    }
    if (key != StringLiteral_ppBloomInty) {
      if (((key != (String *)0x0) && (StringLiteral_ppBloomInty != (String *)0x0)) &&
         (((key->fields)._stringLength == (StringLiteral_ppBloomInty->fields)._stringLength &&
          (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(key->fields)._firstChar,
                              (uint8_t *)&(StringLiteral_ppBloomInty->fields)._firstChar,
                              (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar1 != 0)))) {
        return 1;
      }
      if (key != StringLiteral_ppBloomSKnee) {
        if (((key != (String *)0x0) && (StringLiteral_ppBloomSKnee != (String *)0x0)) &&
           (((key->fields)._stringLength == (StringLiteral_ppBloomSKnee->fields)._stringLength &&
            (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(key->fields)._firstChar,
                                (uint8_t *)&(StringLiteral_ppBloomSKnee->fields)._firstChar,
                                (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar1 != 0)))) {
          return 1;
        }
        if (key != StringLiteral_ppBloomDiff) {
          if ((((key != (String *)0x0) && (StringLiteral_ppBloomDiff != (String *)0x0)) &&
              ((key->fields)._stringLength == (StringLiteral_ppBloomDiff->fields)._stringLength)) &&
             (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)&(key->fields)._firstChar,
                                 (uint8_t *)&(StringLiteral_ppBloomDiff->fields)._firstChar,
                                 (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar1 != 0)) {
            return 1;
          }
          if (key != StringLiteral_ppBloomColR) {
            if (((key != (String *)0x0) && (StringLiteral_ppBloomColR != (String *)0x0)) &&
               (((key->fields)._stringLength == (StringLiteral_ppBloomColR->fields)._stringLength &&
                (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                   ((uint8_t *)&(key->fields)._firstChar,
                                    (uint8_t *)&(StringLiteral_ppBloomColR->fields)._firstChar,
                                    (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
                bVar1 != 0)))) {
              return 1;
            }
            if (key != StringLiteral_ppBloomColG) {
              if (((key != (String *)0x0) && (StringLiteral_ppBloomColG != (String *)0x0)) &&
                 (((key->fields)._stringLength == (StringLiteral_ppBloomColG->fields)._stringLength
                  && (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                        ((uint8_t *)&(key->fields)._firstChar,
                                         (uint8_t *)&(StringLiteral_ppBloomColG->fields)._firstChar,
                                         (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0
                                        ), bVar1 != 0)))) {
                return 1;
              }
              if (key != StringLiteral_ppBloomColB) {
                if (((key != (String *)0x0) && (StringLiteral_ppBloomColB != (String *)0x0)) &&
                   ((key->fields)._stringLength == (StringLiteral_ppBloomColB->fields)._stringLength
                   )) {
                  lVar2 = (longlong)(key->fields)._stringLength;
                  puVar3 = &(key->fields)._firstChar;
                  uVar4 = lVar2 * 2;
                  puVar5 = &(StringLiteral_ppBloomColB->fields)._firstChar;
                  if (puVar3 != puVar5) {
                    if (7 < uVar4) {
                      if (uVar4 != 8) {
                        puVar6 = puVar5;
                        do {
                          if (*(longlong *)
                               ((longlong)puVar6 + ((longlong)puVar3 - (longlong)puVar5)) !=
                              *(longlong *)puVar6) {
                            return 0;
                          }
                          puVar6 = puVar6 + 4;
                        } while ((ulonglong)((longlong)puVar6 - (longlong)puVar5) < uVar4 - 8);
                      }
                      return *(longlong *)(puVar3 + lVar2 + -4) ==
                             *(longlong *)(puVar5 + lVar2 + -4);
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
    }
  }
  return 1;
}


/* Void OnColorEdited() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxBloomSettings::CameraBoxBloomSettings_OnColorEdited
               (CameraBoxBloomSettings *this,MethodInfo *method)

{
  pSVar1 = (this->fields).colorR;
  if ((pSVar1 != (SettingsSlider *)0x0) &&
     (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
    uVar3 = (*(pSVar2->klass->vtable).get_value.methodPtr)
                      (pSVar2,(pSVar2->klass->vtable).get_value.method);
    pSVar1 = (this->fields).colorG;
    if ((pSVar1 != (SettingsSlider *)0x0) &&
       (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
      uVar4 = (*(pSVar2->klass->vtable).get_value.methodPtr)
                        (pSVar2,(pSVar2->klass->vtable).get_value.method);
      pSVar1 = (this->fields).colorB;
      if ((pSVar1 != (SettingsSlider *)0x0) &&
         (pSVar2 = (pSVar1->fields).slider, pSVar2 != (Slider *)0x0)) {
        uVar5 = (*(pSVar2->klass->vtable).get_value.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable).get_value.method);
        pIVar6 = (this->fields).colorImage;
        if (pIVar6 != (Image *)0x0) {
          uStack_7 = (undefined *)CONCAT44(0x3f800000,uVar5);
          uStack_8 = uVar3;
          uStack_9 = uVar4;
          (*(pIVar6->klass->vtable).set_color.methodPtr)
                    (pIVar6,&uStack_8,(pIVar6->klass->vtable).set_color.method);
          obj = (this->fields).colorPicker;
          if (obj != (GameObject *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                            ,0,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (obj == (GameObject *)0x0) {
              FUN_?();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pvVar11 = (obj->fields)._.m_CachedPtr;
            if (pvVar11 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pcVar10 = pcRam_?;
            if (pcRam_? == (code *)0x0) {
              pcVar10 = (code *)FUN_?(&UNK_?);
              if (pcVar10 == (code *)0x0) {
                uVar12 = func_?(&UNK_?);
                FUN_?(uVar12,0);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            pcRam_? = pcVar10;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar11,0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnColorPressed() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxBloomSettings::CameraBoxBloomSettings_OnColorPressed
               (CameraBoxBloomSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_ppBloomColB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomColG);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomColR);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).colorImage;
  uStack_2 = (undefined *)CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc);
  if (pIVar1 != (Image *)0x0) {
    pfVar3 = (float *)(*(pIVar1->klass->vtable).get_color.methodPtr)
                                (&fStack_4,pIVar1,(pIVar1->klass->vtable).get_color.method);
    maxValue = _UNK_?;
    pSVar5 = (this->fields).colorR;
    value = *pfVar3;
    value_00 = pfVar3[1];
    value_01 = pfVar3[2];
    if (pSVar5 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_Initialize
                (pSVar5,StringLiteral_ppBloomColR,value,0.0,_UNK_?,(MethodInfo *)0x0);
      pSVar5 = (this->fields).colorG;
      if (pSVar5 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar5,StringLiteral_ppBloomColG,value_00,0.0,maxValue,(MethodInfo *)0x0);
        pSVar5 = (this->fields).colorB;
        if (pSVar5 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar5,StringLiteral_ppBloomColB,value_01,0.0,maxValue,(MethodInfo *)0x0);
          pIVar1 = (this->fields).colorPickerPreview;
          if (pIVar1 != (Image *)0x0) {
            uStack_6 = 0x3f800000;
            fStack_4 = value;
            fStack_7 = value_00;
            fStack_8 = value_01;
            (*(pIVar1->klass->vtable).set_color.methodPtr)
                      (pIVar1,&fStack_4,(pIVar1->klass->vtable).set_color.method);
            obj = (this->fields).colorPicker;
            if (obj != (GameObject *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                              ,1,0);
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
              if (pcRam_? == (code *)0x0) {
                pcVar9 = (code *)FUN_?(&UNK_?);
                if (pcVar9 == (code *)0x0) {
                  uVar11 = func_?(&UNK_?);
                  FUN_?(uVar11,0);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar10,1);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxBloomSettings::CameraBoxBloomSettings_Start
               (CameraBoxBloomSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_ppBloomDiff);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomColB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomColG);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomColR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomSKnee);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomInty);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = uStackX_8;
  lVar2 = lRam_?;
  this_00 = (this->fields).featureOnToggle;
  pOVar3 = (Object *)0x0;
  pCVar4 = (this->fields).cameraBoxSettings;
  uStackX_8 = uStackX_8 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (pOVar5 = pOVar3, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar5 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar5 + 1,&uStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
        uVar6 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
    }
  }
  else {
    pOVar5 = (Object *)(CONCAT44(uStackX_c,uVar1) & 0xffffffffffffff00);
  }
  if (((pCVar4 != (CameraBoxSettings *)0x0) &&
      (pOVar5 = CameraBoxSettings::CameraBoxSettings_GetSetting
                           (pCVar4,StringLiteral_ppBloomOn,pOVar5,(MethodInfo *)0x0),
      this_00 != (SettingsToggle *)0x0)) && (pOVar5 != (Object *)0x0)) {
    if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar5,lRam_?);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    SettingsToggle::SettingsToggle_Initialize
              (this_00,StringLiteral_ppBloomOn,*(bool *)&pOVar5[1].klass,(MethodInfo *)0x0);
    lVar2 = lRam_?;
    pCVar4 = (this->fields).cameraBoxSettings;
    uStackX_8 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar3 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar3 + 1,&uStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar1 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
          uVar6 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
          do {
            uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
            puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar1 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
      }
    }
    else {
      pOVar3 = (Object *)((ulonglong)uStackX_c << 0x20);
    }
    if ((pCVar4 != (CameraBoxSettings *)0x0) &&
       (pOVar3 = CameraBoxSettings::CameraBoxSettings_GetSetting
                            (pCVar4,StringLiteral_ppBloomInty,pOVar3,(MethodInfo *)0x0),
       pOVar3 != (Object *)0x0)) {
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pSVar11 = (this->fields).intensitySlider;
      if (pSVar11 != (SettingsSlider *)0x0) {
        iVar12 = *(int32_t *)&pOVar3[1].klass;
        SettingsSlider::SettingsSlider_Initialize_1
                  (pSVar11,StringLiteral_ppBloomInty,iVar12,0,7,(MethodInfo *)0x0);
        pSVar13 = (this->fields).intensityInputField;
        if (pSVar13 != (SettingsInputFieldSlider *)0x0) {
          SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                    (pSVar13,StringLiteral_ppBloomInty,(float)iVar12,(MethodInfo *)0x0);
          pCVar4 = (this->fields).cameraBoxSettings;
          uStackX_8 = 5;
          pOVar3 = (Object *)FUN_?(lRam_?,&uStackX_8);
          if ((pCVar4 != (CameraBoxSettings *)0x0) &&
             (pOVar3 = CameraBoxSettings::CameraBoxSettings_GetSetting
                                  (pCVar4,StringLiteral_ppBloomSKnee,pOVar3,(MethodInfo *)0x0),
             pOVar3 != (Object *)0x0)) {
            if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              FUN_?(pOVar3);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pSVar11 = (this->fields).softKneeSlider;
            if (pSVar11 != (SettingsSlider *)0x0) {
              iVar12 = *(int32_t *)&pOVar3[1].klass;
              SettingsSlider::SettingsSlider_Initialize_1
                        (pSVar11,StringLiteral_ppBloomSKnee,iVar12,0,10,(MethodInfo *)0x0);
              pSVar13 = (this->fields).softKneeInputField;
              if (pSVar13 != (SettingsInputFieldSlider *)0x0) {
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                          (pSVar13,StringLiteral_ppBloomSKnee,(float)iVar12,(MethodInfo *)0x0);
                pCVar4 = (this->fields).cameraBoxSettings;
                uStackX_8 = 7;
                pOVar3 = (Object *)FUN_?(lRam_?,&uStackX_8);
                if ((pCVar4 != (CameraBoxSettings *)0x0) &&
                   (pOVar3 = CameraBoxSettings::CameraBoxSettings_GetSetting
                                        (pCVar4,StringLiteral_ppBloomDiff,pOVar3,(MethodInfo *)0x0)
                   , pOVar3 != (Object *)0x0)) {
                  if ((pOVar3->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar3);
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  pSVar11 = (this->fields).diffusionSlider;
                  if (pSVar11 != (SettingsSlider *)0x0) {
                    iVar12 = *(int32_t *)&pOVar3[1].klass;
                    SettingsSlider::SettingsSlider_Initialize_1
                              (pSVar11,StringLiteral_ppBloomDiff,iVar12,1,10,(MethodInfo *)0x0);
                    pSVar13 = (this->fields).diffusionInputField;
                    if (pSVar13 != (SettingsInputFieldSlider *)0x0) {
                      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                                (pSVar13,StringLiteral_ppBloomDiff,(float)iVar12,(MethodInfo *)0x0);
                      pCVar4 = (this->fields).cameraBoxSettings;
                      uStackX_8 = 0x3f800000;
                      pOVar3 = (Object *)FUN_?(lRam_?,&uStackX_8);
                      if ((pCVar4 != (CameraBoxSettings *)0x0) &&
                         (pOVar3 = CameraBoxSettings::CameraBoxSettings_GetSetting
                                              (pCVar4,StringLiteral_ppBloomColR,pOVar3,
                                               (MethodInfo *)0x0), pOVar3 != (Object *)0x0)) {
                        if ((pOVar3->klass->_0).element_class !=
                            *(Il2CppClass **)(lRam_? + 0x40)) {
                          FUN_?(pOVar3,lRam_?);
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        uVar14 = *(undefined4 *)&pOVar3[1].klass;
                        pCVar4 = (this->fields).cameraBoxSettings;
                        uStackX_8 = 0x3f800000;
                        pOVar3 = (Object *)FUN_?(lRam_?,&uStackX_8);
                        if ((pCVar4 != (CameraBoxSettings *)0x0) &&
                           (pOVar3 = CameraBoxSettings::CameraBoxSettings_GetSetting
                                                (pCVar4,StringLiteral_ppBloomColG,pOVar3,
                                                 (MethodInfo *)0x0), pOVar3 != (Object *)0x0)) {
                          if ((pOVar3->klass->_0).element_class !=
                              *(Il2CppClass **)(lRam_? + 0x40)) {
                            FUN_?(pOVar3,lRam_?);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          uVar15 = *(undefined4 *)&pOVar3[1].klass;
                          pCVar4 = (this->fields).cameraBoxSettings;
                          uStackX_8 = 0x3f800000;
                          pOVar3 = (Object *)FUN_?(lRam_?,&uStackX_8);
                          if ((pCVar4 != (CameraBoxSettings *)0x0) &&
                             (pOVar3 = CameraBoxSettings::CameraBoxSettings_GetSetting
                                                  (pCVar4,StringLiteral_ppBloomColB,pOVar3,
                                                   (MethodInfo *)0x0), pOVar3 != (Object *)0x0)) {
                            if ((pOVar3->klass->_0).element_class !=
                                *(Il2CppClass **)(lRam_? + 0x40)) {
                              FUN_?(pOVar3);
                              pcVar10 = (code *)swi(3);
                              (*pcVar10)();
                              return;
                            }
                            pIVar16 = (this->fields).colorImage;
                            uStack_17 = *(undefined4 *)&pOVar3[1].klass;
                            if (pIVar16 != (Image *)0x0) {
                              uStack_18 = 0x3f800000;
                              uStack_19 = uVar14;
                              uStack_20 = uVar15;
                              (*(pIVar16->klass->vtable).set_color.methodPtr)
                                        (pIVar16,&uStack_19,(pIVar16->klass->vtable).set_color.method)
                              ;
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Object ValueToSend(String, Object) */

Object * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
         CameraBoxBloomSettings::CameraBoxBloomSettings_ValueToSend
                   (CameraBoxBloomSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomDiff);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomColB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomColG);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomColR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomSKnee);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppBloomInty);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((((key == StringLiteral_ppBloomInty) ||
       ((((key != (String *)0x0 && (StringLiteral_ppBloomInty != (String *)0x0)) &&
         ((key->fields)._stringLength == (StringLiteral_ppBloomInty->fields)._stringLength)) &&
        (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(key->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_ppBloomInty->fields)._firstChar,
                            (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 != 0
        )))) || ((key == StringLiteral_ppBloomSKnee ||
                 ((((key != (String *)0x0 && (StringLiteral_ppBloomSKnee != (String *)0x0)) &&
                   (((key->fields)._stringLength ==
                     (StringLiteral_ppBloomSKnee->fields)._stringLength &&
                    (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                       ((uint8_t *)&(key->fields)._firstChar,
                                        (uint8_t *)&(StringLiteral_ppBloomSKnee->fields)._firstChar,
                                        (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0)
                    , bVar1 != 0)))) || (key == StringLiteral_ppBloomDiff)))))) ||
     (((key != (String *)0x0 && (StringLiteral_ppBloomDiff != (String *)0x0)) &&
      (((key->fields)._stringLength == (StringLiteral_ppBloomDiff->fields)._stringLength &&
       (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(key->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_ppBloomDiff->fields)._firstChar,
                           (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 != 0)
       ))))) {
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    aiStackX_10[0] = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
    pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
    return pOVar2;
  }
  if (((key != StringLiteral_ppBloomColR) &&
      (((((key == (String *)0x0 || (StringLiteral_ppBloomColR == (String *)0x0)) ||
         ((key->fields)._stringLength != (StringLiteral_ppBloomColR->fields)._stringLength)) ||
        (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(key->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_ppBloomColR->fields)._firstChar,
                            (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 == 0
        )) && ((key != StringLiteral_ppBloomColG &&
               (((key == (String *)0x0 || (StringLiteral_ppBloomColG == (String *)0x0)) ||
                (((key->fields)._stringLength != (StringLiteral_ppBloomColG->fields)._stringLength
                 || (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                       ((uint8_t *)&(key->fields)._firstChar,
                                        (uint8_t *)&(StringLiteral_ppBloomColG->fields)._firstChar,
                                        (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0)
                    , bVar1 == 0)))))))))) && (key != StringLiteral_ppBloomColB)) {
    if (key == (String *)0x0) {
      return value;
    }
    if (StringLiteral_ppBloomColB == (String *)0x0) {
      return value;
    }
    if ((key->fields)._stringLength != (StringLiteral_ppBloomColB->fields)._stringLength) {
      return value;
    }
    bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                      ((uint8_t *)&(key->fields)._firstChar,
                       (uint8_t *)&(StringLiteral_ppBloomColB->fields)._firstChar,
                       (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return value;
    }
  }
  pSVar3 = (this->fields).colorR;
  if ((pSVar3 != (SettingsSlider *)0x0) &&
     (pSVar4 = (pSVar3->fields).slider, pSVar4 != (Slider *)0x0)) {
    uVar5 = (*(pSVar4->klass->vtable).get_value.methodPtr)
                      (pSVar4,(pSVar4->klass->vtable).get_value.method);
    pSVar3 = (this->fields).colorG;
    if ((pSVar3 != (SettingsSlider *)0x0) &&
       (pSVar4 = (pSVar3->fields).slider, pSVar4 != (Slider *)0x0)) {
      uStack_6 = (*(pSVar4->klass->vtable).get_value.methodPtr)
                            (pSVar4,(pSVar4->klass->vtable).get_value.method);
      pSVar3 = (this->fields).colorB;
      if ((pSVar3 != (SettingsSlider *)0x0) &&
         (pSVar4 = (pSVar3->fields).slider, pSVar4 != (Slider *)0x0)) {
        uStack_7 = (*(pSVar4->klass->vtable).get_value.methodPtr)
                              (pSVar4,(pSVar4->klass->vtable).get_value.method);
        pIVar8 = (this->fields).colorPickerPreview;
        if (pIVar8 != (Image *)0x0) {
          uStack_9 = 0x3f800000;
          uStack_10 = uVar5;
          (*(pIVar8->klass->vtable).set_color.methodPtr)
                    (pIVar8,&uStack_10,(pIVar8->klass->vtable).set_color.method);
          return value;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar11)();
  return pOVar2;
}

