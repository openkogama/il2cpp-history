
/* Void InitData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxBloomSettings::CameraBoxBloomSettings_InitData
               (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_ppBloomDiff);
    func_?(&StringLiteral_ppBloomColB);
    func_?(&StringLiteral_ppBloomColG);
    func_?(&StringLiteral_ppBloomColR);
    func_?(&StringLiteral_ppBloomSKnee);
    func_?(&StringLiteral_ppBloomOn);
    func_?(&StringLiteral_ppBloomInty);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppBloomOn,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppBloomInty,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppBloomSKnee,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppBloomDiff,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppBloomColR,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppBloomColG,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    puStack_2 = (undefined *)0x3f800000;
    ppuStack3 = &puStack_2;
    pSStack4 = TypeInfo__System__Single;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppBloomColB,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean IsKey(String) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxBloomSettings::CameraBoxBloomSettings_IsKey(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_ppBloomDiff);
    func_?(&StringLiteral_ppBloomColB);
    func_?(&StringLiteral_ppBloomColG);
    func_?(&StringLiteral_ppBloomColR);
    func_?(&StringLiteral_ppBloomSKnee);
    func_?(&StringLiteral_ppBloomOn);
    func_?(&StringLiteral_ppBloomInty);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_ppBloomOn,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_ppBloomInty,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_ppBloomSKnee,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_ppBloomDiff,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          bVar1 = mscorlib.dll::System::String::String_op_Equality
                            (key,StringLiteral_ppBloomColR,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            bVar1 = mscorlib.dll::System::String::String_op_Equality
                              (key,StringLiteral_ppBloomColG,(MethodInfo *)0x0);
            if (bVar1 == 0) {
              bVar1 = mscorlib.dll::System::String::String_op_Equality
                                (key,StringLiteral_ppBloomColB,(MethodInfo *)0x0);
              return bVar1;
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
     CameraBoxBloomSettings::CameraBoxBloomSettings_OnColorPressed
               (CameraBoxBloomSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_ppBloomColB);
    func_?(&StringLiteral_ppBloomColG);
    func_?(&StringLiteral_ppBloomColR);
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
                (pSVar8,StringLiteral_ppBloomColR,fStack_4,0.0,1.0,(MethodInfo *)0x0);
      pSVar8 = (this->fields).colorG;
      if (pSVar8 != (SettingsSlider *)0x0) {
        SettingsSlider::SettingsSlider_Initialize
                  (pSVar8,StringLiteral_ppBloomColG,fStack_5,0.0,1.0,(MethodInfo *)0x0);
        pSVar8 = (this->fields).colorB;
        if (pSVar8 != (SettingsSlider *)0x0) {
          SettingsSlider::SettingsSlider_Initialize
                    (pSVar8,StringLiteral_ppBloomColB,fStack_6,0.0,1.0,(MethodInfo *)0x0);
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
     CameraBoxBloomSettings::CameraBoxBloomSettings_Start
               (CameraBoxBloomSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_ppBloomDiff);
    func_?(&StringLiteral_ppBloomColB);
    func_?(&StringLiteral_ppBloomColG);
    func_?(&StringLiteral_ppBloomColR);
    func_?(&StringLiteral_ppBloomSKnee);
    func_?(&StringLiteral_ppBloomOn);
    func_?(&StringLiteral_ppBloomInty);
    cRam_? = '\x01';
  }
  pCVar1 = this;
  this = (CameraBoxBloomSettings *)((uint)this & 0xffffff);
  pSStack_2 = (pCVar1->fields).featureOnToggle;
  pCVar3 = (pCVar1->fields).cameraBoxSettings;
  value = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  if (pCVar3 != (CameraBoxSettings *)0x0) {
    pSStack_4 = StringLiteral_ppBloomOn;
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
                  (this_00,StringLiteral_ppBloomOn,*pbVar9,(MethodInfo *)0x0);
        pCVar3 = (pCVar1->fields).cameraBoxSettings;
        uStack_10 = 0;
        value = (Object *)func_?(TypeInfo__System__Int32,&uStack_10);
        if (pCVar3 != (CameraBoxSettings *)0x0) {
          pSStack_2 = (SettingsToggle *)StringLiteral_ppBloomInty;
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
                          (pSVar12,StringLiteral_ppBloomInty,(int32_t)value,0,7,(MethodInfo *)0x0);
                pSVar13 = (pCVar1->fields).intensityInputField;
                if (pSVar13 != (SettingsInputFieldSlider *)0x0) {
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                            (pSVar13,StringLiteral_ppBloomInty,(int32_t)value,(MethodInfo *)0x0);
                  pCVar3 = (pCVar1->fields).cameraBoxSettings;
                  uStack_14 = 5;
                  value = (Object *)func_?(TypeInfo__System__Int32,&uStack_14);
                  if (pCVar3 != (CameraBoxSettings *)0x0) {
                    pSStack_2 = (SettingsToggle *)StringLiteral_ppBloomSKnee;
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
                        pSVar12 = (pCVar1->fields).softKneeSlider;
                        if (pSVar12 != (SettingsSlider *)0x0) {
                          value = (Object *)*piVar11;
                          SettingsSlider::SettingsSlider_Initialize_1
                                    (pSVar12,StringLiteral_ppBloomSKnee,(int32_t)value,0,10,
                                     (MethodInfo *)0x0);
                          pSVar13 = (pCVar1->fields).softKneeInputField;
                          if (pSVar13 != (SettingsInputFieldSlider *)0x0) {
                            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                                      (pSVar13,StringLiteral_ppBloomSKnee,(int32_t)value,
                                       (MethodInfo *)0x0);
                            pCVar3 = (pCVar1->fields).cameraBoxSettings;
                            uStack_15 = 7;
                            value = (Object *)func_?(TypeInfo__System__Int32,&uStack_15);
                            if (pCVar3 != (CameraBoxSettings *)0x0) {
                              pSStack_2 = (SettingsToggle *)StringLiteral_ppBloomDiff;
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
                                  pIVar8 = TypeInfo__System__Int32;
                                  if ((value->klass->_0).element_class !=
                                      (TypeInfo__System__Int32->_0).element_class)
                                  goto code_?;
                                  piVar11 = (int32_t *)func_?(value);
                                  pSVar12 = (pCVar1->fields).diffusionSlider;
                                  if (pSVar12 != (SettingsSlider *)0x0) {
                                    value = (Object *)*piVar11;
                                    SettingsSlider::SettingsSlider_Initialize_1
                                              (pSVar12,StringLiteral_ppBloomDiff,(int32_t)value,1,10,
                                               (MethodInfo *)0x0);
                                    pSVar13 = (pCVar1->fields).diffusionInputField;
                                    if (pSVar13 != (SettingsInputFieldSlider *)0x0) {
                                      SettingsInputFieldSlider::
                                      SettingsInputFieldSlider_Initialize_1
                                                (pSVar13,StringLiteral_ppBloomDiff,(int32_t)value,
                                                 (MethodInfo *)0x0);
                                      pCVar3 = (pCVar1->fields).cameraBoxSettings;
                                      uStack_16 = 0x3f800000;
                                      value = (Object *)
                                              func_?(TypeInfo__System__Single,&uStack_16);
                                      if (pCVar3 != (CameraBoxSettings *)0x0) {
                                        pSStack_2 = (SettingsToggle *)StringLiteral_ppBloomColR;
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
                                          if (bVar7 != 0) {
                                            value = pOStack_6;
                                          }
                                          if (value != (Object *)0x0) {
                                            pIVar8 = (Int32__Class *)TypeInfo__System__Single;
                                            if ((value->klass->_0).element_class !=
                                                (TypeInfo__System__Single->_0).element_class)
                                            goto code_?;
                                            puVar17 = (undefined4 *)func_?(value);
                                            pCVar3 = (pCVar1->fields).cameraBoxSettings;
                                            pSStack_4 = (String *)*puVar17;
                                            uStack_18 = 0x3f800000;
                                            value = (Object *)
                                                    func_?(TypeInfo__System__Single,
                                                                    &uStack_18);
                                            if (pCVar3 != (CameraBoxSettings *)0x0) {
                                              pSStack_2 = (SettingsToggle *)
                                                           StringLiteral_ppBloomColG;
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
                                                bVar7 = mscorlib.dll::System::Collections::Generic::
                                                        Dictionary`2[System::Object,System::Object]
                                                        ::
                                                  Dictionary_2_System_Object_System_Object__TryGetValue
                                                            (pDVar5,(Object *)pSStack_2,&pOStack_6,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                                  );
                                                if (bVar7 != 0) {
                                                  value = pOStack_6;
                                                }
                                                if (value != (Object *)0x0) {
                                                  pIVar8 = (Int32__Class *)TypeInfo__System__Single
                                                  ;
                                                  if ((value->klass->_0).element_class !=
                                                      (TypeInfo__System__Single->_0).element_class)
                                                  goto code_?;
                                                  puVar17 = (undefined4 *)func_?(value);
                                                  pCVar3 = (pCVar1->fields).cameraBoxSettings;
                                                  uVar19 = *puVar17;
                                                  uStack_20 = 0x3f800000;
                                                  value = (Object *)
                                                          func_?(TypeInfo__System__Single,
                                                                          &uStack_20);
                                                  if (pCVar3 != (CameraBoxSettings *)0x0) {
                                                    pSStack_2 = (SettingsToggle *)
                                                                 StringLiteral_ppBloomColB;
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
                                                    pIVar8 = (Int32__Class *)
                                                              TypeInfo__System__Single;
                                                    if ((value->klass->_0).element_class !=
                                                        (TypeInfo__System__Single->_0).element_class
                                                       ) goto code_?;
                                                    puVar17 = (undefined4 *)func_?(value);
                                                    pIVar21 = (pCVar1->fields).colorImage;
                                                    if (pIVar21 != (Image *)0x0) {
                                                      (*(code *)(pIVar21->klass->vtable).set_color.
                                                                method)(pIVar21,pSStack_4,uVar19,
                                                                        *puVar17,0x3f800000,
                                                                        (pIVar21->klass->vtable).
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
  func_?();
  pIVar8 = extraout_ECX;
code_?:
  func_?(value,pIVar8);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Object ValueToSend(String, Object) */

Object * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
         CameraBoxBloomSettings::CameraBoxBloomSettings_ValueToSend
                   (CameraBoxBloomSettings *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_ppBloomDiff);
    func_?(&StringLiteral_ppBloomColB);
    func_?(&StringLiteral_ppBloomColG);
    func_?(&StringLiteral_ppBloomColR);
    func_?(&StringLiteral_ppBloomSKnee);
    func_?(&StringLiteral_ppBloomInty);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_ppBloomInty,(MethodInfo *)0x0);
  if (((bVar1 == 0) &&
      (bVar1 = mscorlib.dll::System::String::String_op_Equality
                         (key,StringLiteral_ppBloomSKnee,(MethodInfo *)0x0), bVar1 == 0)) &&
     (bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_ppBloomDiff,(MethodInfo *)0x0), bVar1 == 0)) {
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_ppBloomColR,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      this = (CameraBoxBloomSettings *)key;
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_ppBloomColG,(MethodInfo *)0x0);
      if ((bVar1 == 0) &&
         (bVar1 = mscorlib.dll::System::String::String_op_Equality
                            (key,StringLiteral_ppBloomColB,(MethodInfo *)0x0), bVar1 == 0)) {
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
  pOVar8 = (Object *)func_?(TypeInfo__System__Int32);
  return pOVar8;
}

