
/* Void InitData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxVignetteSettings::CameraBoxVignetteSettings_InitData
               (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_ppVignColR);
    func_?(&StringLiteral_ppVignColG);
    func_?(&StringLiteral_ppVignSmooth);
    func_?(&StringLiteral_ppVignOn);
    func_?(&StringLiteral_ppVignInty);
    func_?(&StringLiteral_ppVignColB);
    func_?(&StringLiteral_ppVignRness);
    func_?(&StringLiteral_ppVignRnded);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppVignOn,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppVignInty,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppVignSmooth,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppVignRness,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppVignRnded,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppVignColR,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    puStack2 = &stack0xffffffe4;
    pSStack3 = TypeInfo__System__Single;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppVignColG,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppVignColB,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsKey(String) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxVignetteSettings::CameraBoxVignetteSettings_IsKey(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_ppVignColR);
    func_?(&StringLiteral_ppVignColG);
    func_?(&StringLiteral_ppVignSmooth);
    func_?(&StringLiteral_ppVignOn);
    func_?(&StringLiteral_ppVignInty);
    func_?(&StringLiteral_ppVignColB);
    func_?(&StringLiteral_ppVignRness);
    func_?(&StringLiteral_ppVignRnded);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_ppVignOn,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_ppVignInty,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_ppVignSmooth,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_ppVignRness,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          bVar1 = mscorlib.dll::System::String::String_op_Equality
                            (key,StringLiteral_ppVignRnded,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            bVar1 = mscorlib.dll::System::String::String_op_Equality
                              (key,StringLiteral_ppVignColR,(MethodInfo *)0x0);
            if (bVar1 == 0) {
              bVar1 = mscorlib.dll::System::String::String_op_Equality
                                (key,StringLiteral_ppVignColG,(MethodInfo *)0x0);
              if (bVar1 == 0) {
                bVar1 = mscorlib.dll::System::String::String_op_Equality
                                  (key,StringLiteral_ppVignColB,(MethodInfo *)0x0);
                return bVar1;
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
  if (pSVar1 != (SettingsSlider *)0x0) {
    SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (this->fields).colorG;
    if (pSVar1 != (SettingsSlider *)0x0) {
      pSVar1 = (SettingsSlider *)SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
      if ((this->fields).colorB != (SettingsSlider *)0x0) {
        puVar2 = &UNK_?;
        fVar3 = SettingsSlider::SettingsSlider_get_Value(pSVar1,(MethodInfo *)0x0);
        pIVar4 = (this->fields).colorImage;
        if (pIVar4 != (Image *)0x0) {
          (*(code *)(pIVar4->klass->vtable).set_color.method)
                    (pIVar4,puVar2,pSVar1,fVar3,0x3f800000,
                     (pIVar4->klass->vtable).get_raycastTarget.methodPtr);
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnColorPressed() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxVignetteSettings::CameraBoxVignetteSettings_OnColorPressed
               (CameraBoxVignetteSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_ppVignColR);
    func_?(&StringLiteral_ppVignColG);
    func_?(&StringLiteral_ppVignColB);
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
                (pSVar8,StringLiteral_ppVignColR,fStack_4,0.0,1.0,(MethodInfo *)0x0);
      pSVar8 = (this->fields).colorG;
      if (pSVar8 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar8,StringLiteral_ppVignColG,fStack_5,0.0,1.0,(MethodInfo *)0x0);
        pSVar8 = (this->fields).colorB;
        if (pSVar8 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar8,StringLiteral_ppVignColB,fStack_6,0.0,1.0,(MethodInfo *)0x0);
          pIVar1 = (this->fields).colorPickerPreview;
          fStack_3 = fStack_4;
          fStack_9 = fStack_5;
          fStack_10 = fStack_6;
          uStack_11 = 0x3f800000;
          if (pIVar1 != (Image *)0x0) {
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
     CameraBoxVignetteSettings::CameraBoxVignetteSettings_Start
               (CameraBoxVignetteSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_ppVignColR);
    func_?(&StringLiteral_ppVignColG);
    func_?(&StringLiteral_ppVignSmooth);
    func_?(&StringLiteral_ppVignOn);
    func_?(&StringLiteral_ppVignInty);
    func_?(&StringLiteral_ppVignColB);
    func_?(&StringLiteral_ppVignRness);
    func_?(&StringLiteral_ppVignRnded);
    cRam_? = '\x01';
  }
  pCVar1 = this;
  this = (CameraBoxVignetteSettings *)((uint)this & 0xffffff);
  pSStack_2 = (pCVar1->fields).featureOnToggle;
  pCVar3 = (pCVar1->fields).cameraBoxSettings;
  value = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  if (pCVar3 != (CameraBoxSettings *)0x0) {
    pSStack_4 = (SettingsToggle *)StringLiteral_ppVignOn;
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
      pSVar8 = pSStack_2;
      if (bVar7 != 0) {
        value = pOStack_6;
      }
      if ((pSStack_2 != (SettingsToggle *)0x0) && (value != (Object *)0x0)) {
        pSVar9 = (Single__Class *)TypeInfo__System__Boolean;
        if ((value->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
        pbVar10 = (bool *)func_?(value);
        SettingsToggle::SettingsToggle_Initialize
                  (pSVar8,StringLiteral_ppVignOn,*pbVar10,(MethodInfo *)0x0);
        pCVar3 = (pCVar1->fields).cameraBoxSettings;
        uStack_11 = 0;
        value = (Object *)func_?(TypeInfo__System__Int32,&uStack_11);
        if (pCVar3 != (CameraBoxSettings *)0x0) {
          pSStack_2 = (SettingsToggle *)StringLiteral_ppVignInty;
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                           );
            cRam_? = '\x01';
          }
          pDVar5 = (pCVar3->fields).woData;
          pOStack_6 = (Object *)0x0;
          if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                               (pDVar5,(Object *)pSStack_2,&pOStack_6,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                               );
            if (bVar7 != 0) {
              value = pOStack_6;
            }
            if (value != (Object *)0x0) {
              pSVar9 = (Single__Class *)TypeInfo__System__Int32;
              if ((value->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
              goto code_?;
              piVar12 = (int32_t *)func_?(value);
              pSVar13 = (pCVar1->fields).intensitySlider;
              if (pSVar13 != (SettingsSlider *)0x0) {
                value = (Object *)*piVar12;
                SettingsSlider::SettingsSlider_Initialize_1
                          (pSVar13,StringLiteral_ppVignInty,(int32_t)value,0,100,(MethodInfo *)0x0);
                pSVar14 = (pCVar1->fields).intensityInputField;
                if (pSVar14 != (SettingsInputFieldSlider *)0x0) {
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                            (pSVar14,StringLiteral_ppVignInty,(int32_t)value,(MethodInfo *)0x0);
                  pCVar3 = (pCVar1->fields).cameraBoxSettings;
                  uStack_15 = 2;
                  value = (Object *)func_?(TypeInfo__System__Int32,&uStack_15);
                  if (pCVar3 != (CameraBoxSettings *)0x0) {
                    pSStack_2 = (SettingsToggle *)StringLiteral_ppVignSmooth;
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
                        pSVar9 = (Single__Class *)TypeInfo__System__Int32;
                        if ((value->klass->_0).element_class !=
                            (TypeInfo__System__Int32->_0).element_class) goto code_?;
                        piVar12 = (int32_t *)func_?(value);
                        pSVar13 = (pCVar1->fields).smoothnessSlider;
                        if (pSVar13 != (SettingsSlider *)0x0) {
                          value = (Object *)*piVar12;
                          SettingsSlider::SettingsSlider_Initialize_1
                                    (pSVar13,StringLiteral_ppVignSmooth,(int32_t)value,0,100,
                                     (MethodInfo *)0x0);
                          pSVar14 = (pCVar1->fields).smoothnessInputField;
                          if (pSVar14 != (SettingsInputFieldSlider *)0x0) {
                            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                                      (pSVar14,StringLiteral_ppVignSmooth,(int32_t)value,
                                       (MethodInfo *)0x0);
                            pCVar3 = (pCVar1->fields).cameraBoxSettings;
                            uStack_16 = 100;
                            value = (Object *)func_?(TypeInfo__System__Int32,&uStack_16);
                            if (pCVar3 != (CameraBoxSettings *)0x0) {
                              pSStack_2 = (SettingsToggle *)StringLiteral_ppVignRness;
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
                                  pSVar9 = (Single__Class *)TypeInfo__System__Int32;
                                  if ((value->klass->_0).element_class !=
                                      (TypeInfo__System__Int32->_0).element_class)
                                  goto code_?;
                                  piVar12 = (int32_t *)func_?(value);
                                  pSVar13 = (pCVar1->fields).roundnessSlider;
                                  if (pSVar13 != (SettingsSlider *)0x0) {
                                    value = (Object *)*piVar12;
                                    SettingsSlider::SettingsSlider_Initialize_1
                                              (pSVar13,StringLiteral_ppVignRness,(int32_t)value,0,100
                                               ,(MethodInfo *)0x0);
                                    pSVar14 = (pCVar1->fields).roundnessInputField;
                                    if (pSVar14 != (SettingsInputFieldSlider *)0x0) {
                                      SettingsInputFieldSlider::
                                      SettingsInputFieldSlider_Initialize_1
                                                (pSVar14,StringLiteral_ppVignRness,(int32_t)value,
                                                 (MethodInfo *)0x0);
                                      pSStack_4 = (pCVar1->fields).roundedToggle;
                                      pCVar3 = (pCVar1->fields).cameraBoxSettings;
                                      uStack_17 = 0;
                                      value = (Object *)
                                              func_?(TypeInfo__System__Boolean,&uStack_17);
                                      if (pCVar3 != (CameraBoxSettings *)0x0) {
                                        pSStack_2 = (SettingsToggle *)StringLiteral_ppVignRnded;
                                        if (cRam_? == '\0') {
                                          func_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                                  );
                                          cRam_? = '\x01';
                                        }
                                        pDVar5 = (pCVar3->fields).woData;
                                        pOStack_6 = (Object *)0x0;
                                        if (pDVar5 != (Dictionary_2_System_Object_System_Object_ *)
                                                      0x0) {
                                          bVar7 = mscorlib.dll::System::Collections::Generic::
                                                   Dictionary`2[System::Object,System::Object]::
                                                                                                      
                                                  Dictionary_2_System_Object_System_Object__TryGetValue
                                                            (pDVar5,(Object *)pSStack_2,&pOStack_6,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                                  );
                                          pSVar8 = pSStack_4;
                                          if (bVar7 != 0) {
                                            value = pOStack_6;
                                          }
                                          if ((pSStack_4 != (SettingsToggle *)0x0) &&
                                             (value != (Object *)0x0)) {
                                            pSVar9 = (Single__Class *)TypeInfo__System__Boolean;
                                            if ((value->klass->_0).element_class !=
                                                (TypeInfo__System__Boolean->_0).element_class)
                                            goto code_?;
                                            pbVar10 = (bool *)func_?(value);
                                            SettingsToggle::SettingsToggle_Initialize
                                                      (pSVar8,StringLiteral_ppVignRnded,*pbVar10,
                                                       (MethodInfo *)0x0);
                                            pCVar3 = (pCVar1->fields).cameraBoxSettings;
                                            uStack_18 = 0;
                                            value = (Object *)
                                                    func_?(TypeInfo__System__Single,
                                                                    &uStack_18);
                                            if (pCVar3 != (CameraBoxSettings *)0x0) {
                                              pSStack_2 = (SettingsToggle *)
                                                           StringLiteral_ppVignColR;
                                              if (cRam_? == '\0') {
                                                func_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                                  );
                                                cRam_? = '\x01';
                                              }
                                              pDVar5 = (pCVar3->fields).woData;
                                              pOStack_6 = (Object *)0x0;
                                              if (pDVar5 != (
                                                  Dictionary_2_System_Object_System_Object_ *)0x0) {
                                                bVar7 = mscorlib.dll::System::Collections::Generic
                                                         ::Dictionary`2[System::Object,System::
                                                         Object]::
                                                  Dictionary_2_System_Object_System_Object__TryGetValue
                                                            (pDVar5,(Object *)pSStack_2,&pOStack_6,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                                  );
                                                if (bVar7 != 0) {
                                                  value = pOStack_6;
                                                }
                                                if (value != (Object *)0x0) {
                                                  pSVar9 = TypeInfo__System__Single;
                                                  if ((value->klass->_0).element_class !=
                                                      (TypeInfo__System__Single->_0).element_class)
                                                  goto code_?;
                                                  puVar19 = (undefined4 *)func_?(value);
                                                  pCVar3 = (pCVar1->fields).cameraBoxSettings;
                                                  pSStack_4 = (SettingsToggle *)*puVar19;
                                                  uStack_20 = 0;
                                                  value = (Object *)
                                                          func_?(TypeInfo__System__Single,
                                                                          &uStack_20);
                                                  if (pCVar3 != (CameraBoxSettings *)0x0) {
                                                    pSStack_2 = (SettingsToggle *)
                                                                 StringLiteral_ppVignColG;
                                                    if (cRam_? == '\0') {
                                                      func_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                                  );
                                                  cRam_? = '\x01';
                                                  }
                                                  pDVar5 = (pCVar3->fields).woData;
                                                  pOStack_6 = (Object *)0x0;
                                                  if (pDVar5 != (
                                                  Dictionary_2_System_Object_System_Object_ *)0x0) {
                                                    bVar7 = mscorlib.dll::System::Collections::
                                                             Generic::Dictionary`2[System::
                                                             Object,System::Object]::
                                                                                                                          
                                                  Dictionary_2_System_Object_System_Object__TryGetValue
                                                            (pDVar5,(Object *)pSStack_2,&pOStack_6,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                                  );
                                                  if (bVar7 != 0) {
                                                    value = pOStack_6;
                                                  }
                                                  if (value != (Object *)0x0) {
                                                    pSVar9 = TypeInfo__System__Single;
                                                    if ((value->klass->_0).element_class !=
                                                        (TypeInfo__System__Single->_0).element_class
                                                       ) goto code_?;
                                                    puVar19 = (undefined4 *)func_?(value);
                                                    pCVar3 = (pCVar1->fields).cameraBoxSettings;
                                                    uVar21 = *puVar19;
                                                    uStack_22 = 0;
                                                    value = (Object *)
                                                            func_?(TypeInfo__System__Single
                                                                            ,&uStack_22);
                                                    if (pCVar3 != (CameraBoxSettings *)0x0) {
                                                      pSStack_2 = (SettingsToggle *)
                                                                   StringLiteral_ppVignColB;
                                                      if (cRam_? == '\0') {
                                                        func_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                                  );
                                                  cRam_? = '\x01';
                                                  }
                                                  pDVar5 = (pCVar3->fields).woData;
                                                  pOStack_6 = (Object *)0x0;
                                                  if (pDVar5 != (
                                                  Dictionary_2_System_Object_System_Object_ *)0x0) {
                                                    bVar7 = mscorlib.dll::System::Collections::
                                                             Generic::Dictionary`2[System::
                                                             Object,System::Object]::
                                                                                                                          
                                                  Dictionary_2_System_Object_System_Object__TryGetValue
                                                            (pDVar5,(Object *)pSStack_2,&pOStack_6,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                                  );
                                                  if (bVar7 != 0) {
                                                    value = pOStack_6;
                                                  }
                                                  if (value != (Object *)0x0) {
                                                    pSVar9 = TypeInfo__System__Single;
                                                    if ((value->klass->_0).element_class !=
                                                        (TypeInfo__System__Single->_0).element_class
                                                       ) goto code_?;
                                                    puVar19 = (undefined4 *)func_?(value);
                                                    pIVar23 = (pCVar1->fields).colorImage;
                                                    if (pIVar23 != (Image *)0x0) {
                                                      (*(code *)(pIVar23->klass->vtable).set_color.
                                                                method)(pIVar23,pSStack_4,uVar21,
                                                                        *puVar19,0x3f800000,
                                                                        (pIVar23->klass->vtable).
                                                                        get_raycastTarget.methodPtr)
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
  pSVar9 = extraout_ECX;
code_?:
  func_?(value,pSVar9);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Object ValueToSend(String, Object) */

Object * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
         CameraBoxVignetteSettings::CameraBoxVignetteSettings_ValueToSend
                   (CameraBoxVignetteSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_ppVignColR);
    func_?(&StringLiteral_ppVignColG);
    func_?(&StringLiteral_ppVignSmooth);
    func_?(&StringLiteral_ppVignInty);
    func_?(&StringLiteral_ppVignColB);
    func_?(&StringLiteral_ppVignRness);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_ppVignInty,(MethodInfo *)0x0);
  if (((bVar1 == 0) &&
      (bVar1 = mscorlib.dll::System::String::String_op_Equality
                         (key,StringLiteral_ppVignSmooth,(MethodInfo *)0x0), bVar1 == 0)) &&
     (bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_ppVignRness,(MethodInfo *)0x0), bVar1 == 0)) {
    this = (CameraBoxVignetteSettings *)0x0;
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_ppVignColR,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      this = (CameraBoxVignetteSettings *)&UNK_?;
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_ppVignColG,(MethodInfo *)0x0);
      if ((bVar1 == 0) &&
         (bVar1 = mscorlib.dll::System::String::String_op_Equality
                            (key,StringLiteral_ppVignColB,(MethodInfo *)0x0), bVar1 == 0)) {
        return value;
      }
    }
    pSVar2 = (this->fields).colorR;
    if (pSVar2 != (SettingsSlider *)0x0) {
      SettingsSlider::SettingsSlider_get_Value(pSVar2,(MethodInfo *)0x0);
      pSVar2 = (this->fields).colorG;
      if (pSVar2 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_get_Value(pSVar2,(MethodInfo *)0x0);
        pSVar2 = (this->fields).colorB;
        if (pSVar2 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_get_Value(pSVar2,(MethodInfo *)0x0);
          pIVar3 = (this->fields).colorPickerPreview;
          if (pIVar3 != (Image *)0x0) {
            pIVar4 = pIVar3->klass;
            pIStack5 = (pIVar4->vtable).get_raycastTarget.methodPtr;
            uStack6 = 0x3f800000;
            (*(code *)(pIVar4->vtable).set_color.method)();
            return value;
          }
        }
      }
    }
    func_?();
    pcVar7 = (code *)swi(3);
    pOVar8 = (Object *)(*pcVar7)();
    return pOVar8;
  }
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
  pOVar8 = (Object *)func_?();
  return pOVar8;
}

