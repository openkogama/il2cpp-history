
/* Void InitData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxVignetteSettings::CameraBoxVignetteSettings_InitData
               (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignColR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignColG);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignSmooth);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignInty);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignColB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignRness);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignRnded);
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
       (pOVar4 = pOVar3, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar4 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar4 + 1,&uStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)(pOVar4 + 1) >> 0xc);
        uVar5 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
  }
  else {
    pOVar4 = (Object *)(CONCAT44(uStackX_c,uVar1) & 0xffffffffffffff00);
  }
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppVignOn,pOVar4,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  lVar2 = lRam_?;
  uStackX_8 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (pOVar4 = pOVar3, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar4 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar4 + 1,&uStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)(pOVar4 + 1) >> 0xc);
        uVar5 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
  }
  else {
    pOVar4 = (Object *)((ulonglong)uStackX_c << 0x20);
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppVignInty,pOVar4,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = 2;
  pOVar4 = (Object *)FUN_?(lRam_?,&uStackX_8);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppVignSmooth,pOVar4,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = 100;
  pOVar4 = (Object *)FUN_?(lRam_?,&uStackX_8);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppVignRness,pOVar4,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar1 = uStackX_8;
  lVar2 = lRam_?;
  uStackX_8 = uStackX_8 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar3 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar3 + 1,&uStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
        uVar5 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
  }
  else {
    pOVar3 = (Object *)(CONCAT44(uStackX_c,uVar1) & 0xffffffffffffff00);
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppVignRnded,pOVar3,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = 0;
  pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_8);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppVignColR,pOVar3,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = 0;
  pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_8);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppVignColG,pOVar3,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_8 = 0;
  pOVar3 = (Object *)FUN_?(uRam_?,&uStackX_8);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            (data,(Object *)StringLiteral_ppVignColB,pOVar3,InsertionBehavior__Enum_None,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  return;
}


/* Boolean IsKey(String) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxVignetteSettings::CameraBoxVignetteSettings_IsKey(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_ppVignColR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignColG);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignSmooth);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignInty);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignColB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignRness);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignRnded);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (key != StringLiteral_ppVignOn) {
    if ((((key != (String *)0x0) && (StringLiteral_ppVignOn != (String *)0x0)) &&
        ((key->fields)._stringLength == (StringLiteral_ppVignOn->fields)._stringLength)) &&
       (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(key->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_ppVignOn->fields)._firstChar,
                           (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 != 0)
       ) {
      return 1;
    }
    if (key != StringLiteral_ppVignInty) {
      if (((key != (String *)0x0) && (StringLiteral_ppVignInty != (String *)0x0)) &&
         (((key->fields)._stringLength == (StringLiteral_ppVignInty->fields)._stringLength &&
          (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(key->fields)._firstChar,
                              (uint8_t *)&(StringLiteral_ppVignInty->fields)._firstChar,
                              (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar1 != 0)))) {
        return 1;
      }
      if (key != StringLiteral_ppVignSmooth) {
        if (((key != (String *)0x0) && (StringLiteral_ppVignSmooth != (String *)0x0)) &&
           (((key->fields)._stringLength == (StringLiteral_ppVignSmooth->fields)._stringLength &&
            (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(key->fields)._firstChar,
                                (uint8_t *)&(StringLiteral_ppVignSmooth->fields)._firstChar,
                                (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar1 != 0)))) {
          return 1;
        }
        if (key != StringLiteral_ppVignRness) {
          if ((((key != (String *)0x0) && (StringLiteral_ppVignRness != (String *)0x0)) &&
              ((key->fields)._stringLength == (StringLiteral_ppVignRness->fields)._stringLength)) &&
             (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)&(key->fields)._firstChar,
                                 (uint8_t *)&(StringLiteral_ppVignRness->fields)._firstChar,
                                 (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar1 != 0)) {
            return 1;
          }
          if (key != StringLiteral_ppVignRnded) {
            if (((key != (String *)0x0) && (StringLiteral_ppVignRnded != (String *)0x0)) &&
               (((key->fields)._stringLength == (StringLiteral_ppVignRnded->fields)._stringLength &&
                (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                   ((uint8_t *)&(key->fields)._firstChar,
                                    (uint8_t *)&(StringLiteral_ppVignRnded->fields)._firstChar,
                                    (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
                bVar1 != 0)))) {
              return 1;
            }
            if (key != StringLiteral_ppVignColR) {
              if (((key != (String *)0x0) && (StringLiteral_ppVignColR != (String *)0x0)) &&
                 (((key->fields)._stringLength == (StringLiteral_ppVignColR->fields)._stringLength
                  && (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                        ((uint8_t *)&(key->fields)._firstChar,
                                         (uint8_t *)&(StringLiteral_ppVignColR->fields)._firstChar,
                                         (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0
                                        ), bVar1 != 0)))) {
                return 1;
              }
              if (key != StringLiteral_ppVignColG) {
                if ((((key != (String *)0x0) && (StringLiteral_ppVignColG != (String *)0x0)) &&
                    ((key->fields)._stringLength == (StringLiteral_ppVignColG->fields)._stringLength
                    )) && (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                             ((uint8_t *)&(key->fields)._firstChar,
                                              (uint8_t *)
                                              &(StringLiteral_ppVignColG->fields)._firstChar,
                                              (longlong)(key->fields)._stringLength * 2,
                                              (MethodInfo *)0x0), bVar1 != 0)) {
                  return 1;
                }
                if (key != StringLiteral_ppVignColB) {
                  if (((key != (String *)0x0) && (StringLiteral_ppVignColB != (String *)0x0)) &&
                     ((key->fields)._stringLength ==
                      (StringLiteral_ppVignColB->fields)._stringLength)) {
                    lVar2 = (longlong)(key->fields)._stringLength;
                    puVar3 = &(key->fields)._firstChar;
                    uVar4 = lVar2 * 2;
                    puVar5 = &(StringLiteral_ppVignColB->fields)._firstChar;
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
  }
  return 1;
}


/* Void OnColorEdited() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxVignetteSettings::CameraBoxVignetteSettings_OnColorEdited
               (CameraBoxVignetteSettings *this,MethodInfo *method)

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
     CameraBoxVignetteSettings::CameraBoxVignetteSettings_OnColorPressed
               (CameraBoxVignetteSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_ppVignColR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignColG);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignColB);
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
                (pSVar5,StringLiteral_ppVignColR,value,0.0,_UNK_?,(MethodInfo *)0x0);
      pSVar5 = (this->fields).colorG;
      if (pSVar5 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar5,StringLiteral_ppVignColG,value_00,0.0,maxValue,(MethodInfo *)0x0);
        pSVar5 = (this->fields).colorB;
        if (pSVar5 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar5,StringLiteral_ppVignColB,value_01,0.0,maxValue,(MethodInfo *)0x0);
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
     CameraBoxVignetteSettings::CameraBoxVignetteSettings_Start
               (CameraBoxVignetteSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_ppVignColR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignColG);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignSmooth);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignInty);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignColB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignRness);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignRnded);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = uStackX_8;
  lVar2 = lRam_?;
  pSVar3 = (this->fields).featureOnToggle;
  pOVar4 = (Object *)0x0;
  pCVar5 = (this->fields).cameraBoxSettings;
  uStackX_8 = uStackX_8 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (pOVar6 = pOVar4, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar6 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar6 + 1,&uStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
        uVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
  }
  else {
    pOVar6 = (Object *)(CONCAT44(uStackX_c,uVar1) & 0xffffffffffffff00);
  }
  if (((pCVar5 != (CameraBoxSettings *)0x0) &&
      (pOVar6 = CameraBoxSettings::CameraBoxSettings_GetSetting
                           (pCVar5,StringLiteral_ppVignOn,pOVar6,(MethodInfo *)0x0),
      pSVar3 != (SettingsToggle *)0x0)) && (pOVar6 != (Object *)0x0)) {
    if ((pOVar6->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar6,lRam_?);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    SettingsToggle::SettingsToggle_Initialize
              (pSVar3,StringLiteral_ppVignOn,*(bool *)&pOVar6[1].klass,(MethodInfo *)0x0);
    lVar2 = lRam_?;
    pCVar5 = (this->fields).cameraBoxSettings;
    uStackX_8 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         (pOVar6 = pOVar4, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar6 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar6 + 1,&uStackX_8,(longlong)*(int *)(lVar2 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar1 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
          uVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar1 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
      }
    }
    else {
      pOVar6 = (Object *)((ulonglong)uStackX_c << 0x20);
    }
    if ((pCVar5 != (CameraBoxSettings *)0x0) &&
       (pOVar6 = CameraBoxSettings::CameraBoxSettings_GetSetting
                            (pCVar5,StringLiteral_ppVignInty,pOVar6,(MethodInfo *)0x0),
       pOVar6 != (Object *)0x0)) {
      if ((pOVar6->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar6);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pSVar12 = (this->fields).intensitySlider;
      if (pSVar12 != (SettingsSlider *)0x0) {
        iVar13 = *(int32_t *)&pOVar6[1].klass;
        SettingsSlider::SettingsSlider_Initialize_1
                  (pSVar12,StringLiteral_ppVignInty,iVar13,0,100,(MethodInfo *)0x0);
        pSVar14 = (this->fields).intensityInputField;
        if (pSVar14 != (SettingsInputFieldSlider *)0x0) {
          SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                    (pSVar14,StringLiteral_ppVignInty,(float)iVar13,(MethodInfo *)0x0);
          pCVar5 = (this->fields).cameraBoxSettings;
          uStackX_8 = 2;
          pOVar6 = (Object *)FUN_?(lRam_?,&uStackX_8);
          if ((pCVar5 != (CameraBoxSettings *)0x0) &&
             (pOVar6 = CameraBoxSettings::CameraBoxSettings_GetSetting
                                  (pCVar5,StringLiteral_ppVignSmooth,pOVar6,(MethodInfo *)0x0),
             pOVar6 != (Object *)0x0)) {
            if ((pOVar6->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              FUN_?(pOVar6);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pSVar12 = (this->fields).smoothnessSlider;
            if (pSVar12 != (SettingsSlider *)0x0) {
              iVar13 = *(int32_t *)&pOVar6[1].klass;
              SettingsSlider::SettingsSlider_Initialize_1
                        (pSVar12,StringLiteral_ppVignSmooth,iVar13,0,100,(MethodInfo *)0x0);
              pSVar14 = (this->fields).smoothnessInputField;
              if (pSVar14 != (SettingsInputFieldSlider *)0x0) {
                SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                          (pSVar14,StringLiteral_ppVignSmooth,(float)iVar13,(MethodInfo *)0x0);
                pCVar5 = (this->fields).cameraBoxSettings;
                uStackX_8 = 100;
                pOVar6 = (Object *)FUN_?(lRam_?,&uStackX_8);
                if ((pCVar5 != (CameraBoxSettings *)0x0) &&
                   (pOVar6 = CameraBoxSettings::CameraBoxSettings_GetSetting
                                        (pCVar5,StringLiteral_ppVignRness,pOVar6,(MethodInfo *)0x0)
                   , pOVar6 != (Object *)0x0)) {
                  if ((pOVar6->klass->_0).element_class !=
                      *(Il2CppClass **)(lRam_? + 0x40)) {
                    FUN_?(pOVar6);
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pSVar12 = (this->fields).roundnessSlider;
                  if (pSVar12 != (SettingsSlider *)0x0) {
                    iVar13 = *(int32_t *)&pOVar6[1].klass;
                    SettingsSlider::SettingsSlider_Initialize_1
                              (pSVar12,StringLiteral_ppVignRness,iVar13,0,100,(MethodInfo *)0x0);
                    pSVar14 = (this->fields).roundnessInputField;
                    if (pSVar14 != (SettingsInputFieldSlider *)0x0) {
                      SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_2
                                (pSVar14,StringLiteral_ppVignRness,(float)iVar13,(MethodInfo *)0x0);
                      uVar1 = uStackX_8;
                      lVar2 = lRam_?;
                      pSVar3 = (this->fields).roundedToggle;
                      pCVar5 = (this->fields).cameraBoxSettings;
                      uStackX_8 = uStackX_8 & 0xffffff00;
                      if (*(int *)(lRam_? + 0x28) < 0) {
                        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
                           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
                          pOVar4 = (Object *)FUN_?(lRam_?);
                          FUN_?(pOVar4 + 1,&uStackX_8,
                                        (longlong)*(int *)(lVar2 + 0xf8) + -0x10);
                          if (iRam_? != 0) {
                            uVar1 = (uint)((ulonglong)(pOVar4 + 1) >> 0xc);
                            uVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
                            do {
                              uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                              puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                              LOCK();
                              bVar10 = uVar8 == *puVar9;
                              if (bVar10) {
                                *puVar9 = uVar8 | 1L << (uVar1 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar10);
                          }
                        }
                      }
                      else {
                        pOVar4 = (Object *)(CONCAT44(uStackX_c,uVar1) & 0xffffffffffffff00);
                      }
                      if (((pCVar5 != (CameraBoxSettings *)0x0) &&
                          (pOVar4 = CameraBoxSettings::CameraBoxSettings_GetSetting
                                               (pCVar5,StringLiteral_ppVignRnded,pOVar4,
                                                (MethodInfo *)0x0), pSVar3 != (SettingsToggle *)0x0)
                          ) && (pOVar4 != (Object *)0x0)) {
                        if ((pOVar4->klass->_0).element_class !=
                            *(Il2CppClass **)(lRam_? + 0x40)) {
                          FUN_?(pOVar4,lRam_?);
                          pcVar11 = (code *)swi(3);
                          (*pcVar11)();
                          return;
                        }
                        SettingsToggle::SettingsToggle_Initialize
                                  (pSVar3,StringLiteral_ppVignRnded,*(bool *)&pOVar4[1].klass,
                                   (MethodInfo *)0x0);
                        pCVar5 = (this->fields).cameraBoxSettings;
                        uStackX_8 = 0;
                        pOVar4 = (Object *)FUN_?(lRam_?,&uStackX_8);
                        if ((pCVar5 != (CameraBoxSettings *)0x0) &&
                           (pOVar4 = CameraBoxSettings::CameraBoxSettings_GetSetting
                                                (pCVar5,StringLiteral_ppVignColR,pOVar4,
                                                 (MethodInfo *)0x0), pOVar4 != (Object *)0x0)) {
                          if ((pOVar4->klass->_0).element_class !=
                              *(Il2CppClass **)(lRam_? + 0x40)) {
                            FUN_?(pOVar4,lRam_?);
                            pcVar11 = (code *)swi(3);
                            (*pcVar11)();
                            return;
                          }
                          uVar15 = *(undefined4 *)&pOVar4[1].klass;
                          pCVar5 = (this->fields).cameraBoxSettings;
                          uStackX_8 = 0;
                          pOVar4 = (Object *)FUN_?(lRam_?,&uStackX_8);
                          if ((pCVar5 != (CameraBoxSettings *)0x0) &&
                             (pOVar4 = CameraBoxSettings::CameraBoxSettings_GetSetting
                                                  (pCVar5,StringLiteral_ppVignColG,pOVar4,
                                                   (MethodInfo *)0x0), pOVar4 != (Object *)0x0)) {
                            if ((pOVar4->klass->_0).element_class !=
                                *(Il2CppClass **)(lRam_? + 0x40)) {
                              FUN_?(pOVar4,lRam_?);
                              pcVar11 = (code *)swi(3);
                              (*pcVar11)();
                              return;
                            }
                            uVar16 = *(undefined4 *)&pOVar4[1].klass;
                            pCVar5 = (this->fields).cameraBoxSettings;
                            uStackX_8 = 0;
                            pOVar4 = (Object *)FUN_?(lRam_?,&uStackX_8);
                            if ((pCVar5 != (CameraBoxSettings *)0x0) &&
                               (pOVar4 = CameraBoxSettings::CameraBoxSettings_GetSetting
                                                    (pCVar5,StringLiteral_ppVignColB,pOVar4,
                                                     (MethodInfo *)0x0), pOVar4 != (Object *)0x0))
                            {
                              if ((pOVar4->klass->_0).element_class !=
                                  *(Il2CppClass **)(lRam_? + 0x40)) {
                                FUN_?(pOVar4);
                                pcVar11 = (code *)swi(3);
                                (*pcVar11)();
                                return;
                              }
                              pIVar17 = (this->fields).colorImage;
                              uStack_18 = *(undefined4 *)&pOVar4[1].klass;
                              if (pIVar17 != (Image *)0x0) {
                                uStack_19 = 0x3f800000;
                                uStack_20 = uVar15;
                                uStack_21 = uVar16;
                                (*(pIVar17->klass->vtable).set_color.methodPtr)
                                          (pIVar17,&uStack_20,
                                           (pIVar17->klass->vtable).set_color.method);
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
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Object ValueToSend(String, Object) */

Object * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
         CameraBoxVignetteSettings::CameraBoxVignetteSettings_ValueToSend
                   (CameraBoxVignetteSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignColR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignColG);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignSmooth);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignInty);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignColB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignRness);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((((key == StringLiteral_ppVignInty) ||
       ((((key != (String *)0x0 && (StringLiteral_ppVignInty != (String *)0x0)) &&
         ((key->fields)._stringLength == (StringLiteral_ppVignInty->fields)._stringLength)) &&
        (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(key->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_ppVignInty->fields)._firstChar,
                            (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 != 0
        )))) || ((key == StringLiteral_ppVignSmooth ||
                 ((((key != (String *)0x0 && (StringLiteral_ppVignSmooth != (String *)0x0)) &&
                   (((key->fields)._stringLength ==
                     (StringLiteral_ppVignSmooth->fields)._stringLength &&
                    (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                       ((uint8_t *)&(key->fields)._firstChar,
                                        (uint8_t *)&(StringLiteral_ppVignSmooth->fields)._firstChar,
                                        (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0)
                    , bVar1 != 0)))) || (key == StringLiteral_ppVignRness)))))) ||
     (((key != (String *)0x0 && (StringLiteral_ppVignRness != (String *)0x0)) &&
      (((key->fields)._stringLength == (StringLiteral_ppVignRness->fields)._stringLength &&
       (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(key->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_ppVignRness->fields)._firstChar,
                           (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 != 0)
       ))))) {
    if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
      FUN_?();
    }
    aiStackX_10[0] = mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
    pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_10);
    return pOVar2;
  }
  if (((key != StringLiteral_ppVignColR) &&
      (((((key == (String *)0x0 || (StringLiteral_ppVignColR == (String *)0x0)) ||
         ((key->fields)._stringLength != (StringLiteral_ppVignColR->fields)._stringLength)) ||
        (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(key->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_ppVignColR->fields)._firstChar,
                            (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0), bVar1 == 0
        )) && ((key != StringLiteral_ppVignColG &&
               (((key == (String *)0x0 || (StringLiteral_ppVignColG == (String *)0x0)) ||
                (((key->fields)._stringLength != (StringLiteral_ppVignColG->fields)._stringLength ||
                 (bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                    ((uint8_t *)&(key->fields)._firstChar,
                                     (uint8_t *)&(StringLiteral_ppVignColG->fields)._firstChar,
                                     (longlong)(key->fields)._stringLength * 2,(MethodInfo *)0x0),
                 bVar1 == 0)))))))))) && (key != StringLiteral_ppVignColB)) {
    if (key == (String *)0x0) {
      return value;
    }
    if (StringLiteral_ppVignColB == (String *)0x0) {
      return value;
    }
    if ((key->fields)._stringLength != (StringLiteral_ppVignColB->fields)._stringLength) {
      return value;
    }
    bVar1 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                      ((uint8_t *)&(key->fields)._firstChar,
                       (uint8_t *)&(StringLiteral_ppVignColB->fields)._firstChar,
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

