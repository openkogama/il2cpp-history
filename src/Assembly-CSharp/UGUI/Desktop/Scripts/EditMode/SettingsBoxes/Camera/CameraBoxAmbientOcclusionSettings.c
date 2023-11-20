
/* Void InitData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxAmbientOcclusionSettings::CameraBoxAmbientOcclusionSettings_InitData
               (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_ppAOOn);
    func_?(&StringLiteral_ppAOThick);
    func_?(&StringLiteral_ppAOInty);
    func_?(&StringLiteral_ppAOColR);
    func_?(&StringLiteral_ppAOColB);
    func_?(&StringLiteral_ppAOColG);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppAOOn,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppAOInty,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppAOThick,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    puStack2 = &stack0xffffffec;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppAOColR,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppAOColG,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppAOColB,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsKey(String) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxAmbientOcclusionSettings::CameraBoxAmbientOcclusionSettings_IsKey
               (String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_ppAOOn);
    func_?(&StringLiteral_ppAOThick);
    func_?(&StringLiteral_ppAOInty);
    func_?(&StringLiteral_ppAOColR);
    func_?(&StringLiteral_ppAOColB);
    func_?(&StringLiteral_ppAOColG);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_ppAOOn,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_ppAOInty,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_ppAOThick,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_ppAOColR,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          bVar1 = mscorlib.dll::System::String::String_op_Equality
                            (key,StringLiteral_ppAOColG,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            bVar1 = mscorlib.dll::System::String::String_op_Equality
                              (key,StringLiteral_ppAOColB,(MethodInfo *)0x0);
            return bVar1;
          }
        }
      }
    }
  }
  return 1;
}


/* Void OnColorEdited() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxAmbientOcclusionSettings::CameraBoxAmbientOcclusionSettings_OnColorEdited
               (CameraBoxAmbientOcclusionSettings *this,MethodInfo *method)

{
  pSVar1 = (this->fields).colorR;
  if (pSVar1 != (SettingsSlider *)0x0) {
    fVar2 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (this->fields).colorG;
    if (pSVar1 != (SettingsSlider *)0x0) {
      fVar3 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
      pSVar1 = (this->fields).colorB;
      if (pSVar1 != (SettingsSlider *)0x0) {
        fVar4 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
        pIVar5 = (this->fields).colorImage;
        if (pIVar5 != (Image *)0x0) {
          (*(code *)(pIVar5->klass->vtable).set_color.method)
                    (pIVar5,fVar2,fVar3,fVar4,0x3f800000,
                     (pIVar5->klass->vtable).get_raycastTarget.methodPtr);
          this_00 = (this->fields).colorPicker;
          if (this_00 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_00,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnColorPressed() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxAmbientOcclusionSettings::CameraBoxAmbientOcclusionSettings_OnColorPressed
               (CameraBoxAmbientOcclusionSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_ppAOColR);
    func_?(&StringLiteral_ppAOColB);
    func_?(&StringLiteral_ppAOColG);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).colorImage;
  if (pIVar1 != (Image *)0x0) {
    pfVar2 = (float *)(*(code *)(pIVar1->klass->vtable).get_color.method)
                                (&fStack_3,pIVar1,(pIVar1->klass->vtable).set_color.methodPtr);
    fStack_4 = *pfVar2;
    fStack_5 = pfVar2[1];
    fStack_6 = pfVar2[2];
    fStack_7 = pfVar2[3];
    pSVar8 = (this->fields).colorR;
    if (pSVar8 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_Initialize
                (pSVar8,StringLiteral_ppAOColR,fStack_4,0.0,1.0,(MethodInfo *)0x0);
      pSVar8 = (this->fields).colorG;
      if (pSVar8 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar8,StringLiteral_ppAOColG,fStack_5,0.0,1.0,(MethodInfo *)0x0);
        pSVar8 = (this->fields).colorB;
        if (pSVar8 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar8,StringLiteral_ppAOColB,fStack_6,0.0,1.0,(MethodInfo *)0x0);
          pIVar1 = (this->fields).colorPickerPreview;
          if (pIVar1 != (Image *)0x0) {
            fStack_3 = fStack_4;
            fStack_9 = fStack_5;
            fStack_10 = fStack_6;
            uStack_11 = 0x3f800000;
            (*(code *)(pIVar1->klass->vtable).set_color.method)
                      (pIVar1,fStack_4,fStack_5,fStack_6,0x3f800000,
                       (pIVar1->klass->vtable).get_raycastTarget.methodPtr);
            this_00 = (this->fields).colorPicker;
            if (this_00 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (this_00,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxAmbientOcclusionSettings::CameraBoxAmbientOcclusionSettings_Start
               (CameraBoxAmbientOcclusionSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_ppAOOn);
    func_?(&StringLiteral_ppAOThick);
    func_?(&StringLiteral_ppAOInty);
    func_?(&StringLiteral_ppAOColR);
    func_?(&StringLiteral_ppAOColB);
    func_?(&StringLiteral_ppAOColG);
    cRam_? = '\x01';
  }
  pCVar1 = this;
  this = (CameraBoxAmbientOcclusionSettings *)((uint)this & 0xffffff);
  pSStack_2 = (pCVar1->fields).featureOnToggle;
  pCVar3 = (pCVar1->fields).cameraBoxSettings;
  value = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  if (pCVar3 != (CameraBoxSettings *)0x0) {
    pSStack_4 = StringLiteral_ppAOOn;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                     );
      cRam_? = '\x01';
    }
    pDVar5 = (pCVar3->fields).woData;
    pOStack_6 = (Object *)0x0;
    if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (pDVar5,(Object *)pSStack_4,&pOStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                        );
      this_00 = pSStack_2;
      if (bVar7 != 0) {
        value = pOStack_6;
      }
      if ((pSStack_2 != (SettingsToggle *)0x0) && (value != (Object *)0x0)) {
        pIVar8 = (Int32__Class *)TypeInfo__System__Boolean;
        if ((value->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
        pbVar9 = (bool *)func_?(value);
        SettingsToggle::SettingsToggle_Initialize
                  (this_00,StringLiteral_ppAOOn,*pbVar9,(MethodInfo *)0x0);
        pCVar3 = (pCVar1->fields).cameraBoxSettings;
        uStack_10 = 0;
        value = (Object *)func_?(TypeInfo__System__Int32,&uStack_10);
        if (pCVar3 != (CameraBoxSettings *)0x0) {
          pSStack_2 = (SettingsToggle *)StringLiteral_ppAOInty;
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                           );
            cRam_? = '\x01';
          }
          pDVar5 = (pCVar3->fields).woData;
          pOStack_6 = (Object *)0x0;
          if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                              (pDVar5,(Object *)pSStack_2,&pOStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                              );
            if (bVar7 != 0) {
              value = pOStack_6;
            }
            if (value != (Object *)0x0) {
              pIVar8 = TypeInfo__System__Int32;
              if ((value->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
              goto code_?;
              piVar11 = (int32_t *)func_?(value);
              pSVar12 = (pCVar1->fields).intensitySlider;
              if (pSVar12 != (SettingsSlider *)0x0) {
                value = (Object *)*piVar11;
                SettingsSlider::SettingsSlider_Initialize_1
                          (pSVar12,StringLiteral_ppAOInty,(int32_t)value,0,0xf,(MethodInfo *)0x0);
                pSVar13 = (pCVar1->fields).intensityInputField;
                if (pSVar13 != (SettingsInputFieldSlider *)0x0) {
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                            (pSVar13,StringLiteral_ppAOInty,(int32_t)value,(MethodInfo *)0x0);
                  pCVar3 = (pCVar1->fields).cameraBoxSettings;
                  uStack_14 = 1;
                  value = (Object *)func_?(TypeInfo__System__Int32,&uStack_14);
                  if (pCVar3 != (CameraBoxSettings *)0x0) {
                    pSStack_2 = (SettingsToggle *)StringLiteral_ppAOThick;
                    if (cRam_? == '\0') {
                      func_?(&
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                     );
                      cRam_? = '\x01';
                    }
                    pDVar5 = (pCVar3->fields).woData;
                    pOStack_6 = (Object *)0x0;
                    if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__TryGetValue
                                        (pDVar5,(Object *)pSStack_2,&pOStack_6,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                        );
                      if (bVar7 != 0) {
                        value = pOStack_6;
                      }
                      if (value != (Object *)0x0) {
                        pIVar8 = TypeInfo__System__Int32;
                        if ((value->klass->_0).element_class !=
                            (TypeInfo__System__Int32->_0).element_class) goto code_?;
                        piVar11 = (int32_t *)func_?(value);
                        pSVar12 = (pCVar1->fields).thicknessSlider;
                        if (pSVar12 != (SettingsSlider *)0x0) {
                          value = (Object *)*piVar11;
                          SettingsSlider::SettingsSlider_Initialize_1
                                    (pSVar12,StringLiteral_ppAOThick,(int32_t)value,1,10,
                                     (MethodInfo *)0x0);
                          pSVar13 = (pCVar1->fields).thicknessInputField;
                          if (pSVar13 != (SettingsInputFieldSlider *)0x0) {
                            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                                      (pSVar13,StringLiteral_ppAOThick,(int32_t)value,
                                       (MethodInfo *)0x0);
                            pCVar3 = (pCVar1->fields).cameraBoxSettings;
                            uStack_15 = 0;
                            value = (Object *)func_?(TypeInfo__System__Single,&uStack_15);
                            if (pCVar3 != (CameraBoxSettings *)0x0) {
                              pSStack_2 = (SettingsToggle *)StringLiteral_ppAOColR;
                              if (cRam_? == '\0') {
                                func_?(&
                                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                               );
                                cRam_? = '\x01';
                              }
                              pDVar5 = (pCVar3->fields).woData;
                              pOStack_6 = (Object *)0x0;
                              if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                                bVar7 = mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Object,System::Object]::
                                        Dictionary_2_System_Object_System_Object__TryGetValue
                                                  (pDVar5,(Object *)pSStack_2,&pOStack_6,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                                  );
                                if (bVar7 != 0) {
                                  value = pOStack_6;
                                }
                                if (value != (Object *)0x0) {
                                  pIVar8 = (Int32__Class *)TypeInfo__System__Single;
                                  if ((value->klass->_0).element_class !=
                                      (TypeInfo__System__Single->_0).element_class)
                                  goto code_?;
                                  puVar16 = (undefined4 *)func_?(value);
                                  pCVar3 = (pCVar1->fields).cameraBoxSettings;
                                  pSStack_4 = (String *)*puVar16;
                                  uStack_17 = 0;
                                  value = (Object *)
                                          func_?(TypeInfo__System__Single,&uStack_17);
                                  if (pCVar3 != (CameraBoxSettings *)0x0) {
                                    pSStack_2 = (SettingsToggle *)StringLiteral_ppAOColG;
                                    if (cRam_? == '\0') {
                                      func_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                                  );
                                      cRam_? = '\x01';
                                    }
                                    pDVar5 = (pCVar3->fields).woData;
                                    pOStack_6 = (Object *)0x0;
                                    if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0)
                                    {
                                      bVar7 = mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Object,System::Object]::
                                              Dictionary_2_System_Object_System_Object__TryGetValue
                                                        (pDVar5,(Object *)pSStack_2,&pOStack_6,
                                                                                                                  
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                                  );
                                      if (bVar7 != 0) {
                                        value = pOStack_6;
                                      }
                                      if (value != (Object *)0x0) {
                                        pIVar8 = (Int32__Class *)TypeInfo__System__Single;
                                        if ((value->klass->_0).element_class !=
                                            (TypeInfo__System__Single->_0).element_class)
                                        goto code_?;
                                        puVar16 = (undefined4 *)func_?(value);
                                        pCVar3 = (pCVar1->fields).cameraBoxSettings;
                                        uVar18 = *puVar16;
                                        uStack_19 = 0;
                                        value = (Object *)
                                                func_?(TypeInfo__System__Single,&uStack_19)
                                        ;
                                        if (pCVar3 != (CameraBoxSettings *)0x0) {
                                          pSStack_2 = (SettingsToggle *)StringLiteral_ppAOColB;
                                          if (cRam_? == '\0') {
                                            func_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                                  );
                                            cRam_? = '\x01';
                                          }
                                          pDVar5 = (pCVar3->fields).woData;
                                          pOStack_6 = (Object *)0x0;
                                          if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *
                                                        )0x0) {
                                            bVar7 = mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Object,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Object_System_Object__TryGetValue
                                                            (pDVar5,(Object *)pSStack_2,&pOStack_6,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                                  );
                                            if (bVar7 != 0) {
                                              value = pOStack_6;
                                            }
                                            if (value != (Object *)0x0) {
                                              pIVar8 = (Int32__Class *)TypeInfo__System__Single;
                                              if ((value->klass->_0).element_class !=
                                                  (TypeInfo__System__Single->_0).element_class)
                                              goto code_?;
                                              puVar16 = (undefined4 *)func_?(value);
                                              pIVar20 = (pCVar1->fields).colorImage;
                                              if (pIVar20 != (Image *)0x0) {
                                                (*(code *)(pIVar20->klass->vtable).set_color.method)
                                                          (pIVar20,pSStack_4,uVar18,*puVar16,
                                                           0x3f800000,
                                                           (pIVar20->klass->vtable).get_raycastTarget
                                                           .methodPtr);
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
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pIVar8 = (Int32__Class *)extraout_ECX;
code_?:
  func_?(value,pIVar8);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Object ValueToSend(String, Object) */

Object * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
         CameraBoxAmbientOcclusionSettings::CameraBoxAmbientOcclusionSettings_ValueToSend
                   (CameraBoxAmbientOcclusionSettings *this,String *key,Object *value,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_ppAOThick);
    func_?(&StringLiteral_ppAOInty);
    func_?(&StringLiteral_ppAOColR);
    func_?(&StringLiteral_ppAOColB);
    func_?(&StringLiteral_ppAOColG);
    cRam_? = '\x01';
  }
  pOVar1 = value;
  bVar2 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_ppAOInty,(MethodInfo *)0x0);
  if ((bVar2 == 0) &&
     (bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_ppAOThick,(MethodInfo *)0x0), bVar2 == 0)) {
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_ppAOColR,(MethodInfo *)0x0);
    if ((bVar2 == 0) &&
       (bVar2 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_ppAOColG,(MethodInfo *)0x0), bVar2 == 0)) {
      value = (Object *)0x0;
      this = (CameraBoxAmbientOcclusionSettings *)key;
      bVar2 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_ppAOColB,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return pOVar1;
      }
    }
    pSVar3 = (this->fields).colorR;
    if (pSVar3 != (SettingsSlider *)0x0) {
      method = (MethodInfo *)&UNK_?;
      value = (Object *)SettingsSlider::SettingsSlider_get_Value(pSVar3,(MethodInfo *)0x0);
      pSVar3 = (this->fields).colorG;
      if (pSVar3 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_get_Value(pSVar3,(MethodInfo *)0x0);
        pSVar3 = (this->fields).colorB;
        if (pSVar3 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_get_Value(pSVar3,(MethodInfo *)0x0);
          pIVar4 = (this->fields).colorPickerPreview;
          if (pIVar4 != (Image *)0x0) {
            pIVar5 = pIVar4->klass;
            pIStack6 = (pIVar5->vtable).get_raycastTarget.methodPtr;
            uStack7 = 0x3f800000;
            (*(code *)(pIVar5->vtable).set_color.method)();
            return pOVar1;
          }
        }
      }
    }
    func_?();
    pcVar8 = (code *)swi(3);
    pOVar1 = (Object *)(*pcVar8)();
    return pOVar1;
  }
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Convert);
  }
  value = (Object *)mscorlib.dll::System::Convert::Convert_ToInt32(pOVar1,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&value);
  return pOVar1;
}

