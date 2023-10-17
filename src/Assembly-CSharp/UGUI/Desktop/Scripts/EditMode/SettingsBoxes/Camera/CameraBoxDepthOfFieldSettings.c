
/* Void InitData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxDepthOfFieldSettings::CameraBoxDepthOfFieldSettings_InitData
               (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_ppDofMBlur);
    func_?(&StringLiteral_ppDofOn);
    func_?(&StringLiteral_ppDofApert);
    func_?(&StringLiteral_ppDofFLen);
    func_?(&StringLiteral_ppDofPFDist);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)func_?(TypeInfo__System__Boolean,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppDofOn,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppDofPFDist,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    puStack_2 = (undefined *)0x38;
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&puStack_2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppDofApert,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    uStack_3 = 0x32;
    puStack4 = &uStack_3;
    pIStack5 = TypeInfo__System__Int32;
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppDofFLen,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    pOVar1 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppDofMBlur,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean IsKey(String) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxDepthOfFieldSettings::CameraBoxDepthOfFieldSettings_IsKey
               (String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_ppDofMBlur);
    func_?(&StringLiteral_ppDofOn);
    func_?(&StringLiteral_ppDofApert);
    func_?(&StringLiteral_ppDofFLen);
    func_?(&StringLiteral_ppDofPFDist);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_ppDofOn,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_ppDofPFDist,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_ppDofApert,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_ppDofFLen,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          bVar1 = mscorlib.dll::System::String::String_op_Equality
                            (key,StringLiteral_ppDofMBlur,(MethodInfo *)0x0);
          return bVar1;
        }
      }
    }
  }
  return 1;
}


/* Void Start() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxDepthOfFieldSettings::CameraBoxDepthOfFieldSettings_Start
               (CameraBoxDepthOfFieldSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_ppDofMBlur);
    func_?(&StringLiteral_ppDofOn);
    func_?(&StringLiteral_ppDofApert);
    func_?(&StringLiteral_ppDofFLen);
    func_?(&StringLiteral_ppDofPFDist);
    cRam_? = '\x01';
  }
  pCVar1 = this;
  this = (CameraBoxDepthOfFieldSettings *)((uint)this & 0xffffff);
  pSStack_2 = (pCVar1->fields).featureOnToggle;
  pCVar3 = (pCVar1->fields).cameraBoxSettings;
  value = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  if (pCVar3 != (CameraBoxSettings *)0x0) {
    pSStack_4 = StringLiteral_ppDofOn;
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
        pOStack_9 = value;
        pbVar10 = (bool *)func_?();
        SettingsToggle::SettingsToggle_Initialize
                  (this_00,StringLiteral_ppDofOn,*pbVar10,(MethodInfo *)0x0);
        pCVar3 = (pCVar1->fields).cameraBoxSettings;
        uStack_11 = 10;
        value = (Object *)func_?(TypeInfo__System__Int32,&uStack_11);
        if (pCVar3 != (CameraBoxSettings *)0x0) {
          pSStack_2 = (SettingsToggle *)StringLiteral_ppDofPFDist;
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
              pOStack_9 = value;
              piVar12 = (int32_t *)func_?();
              pSVar13 = (pCVar1->fields).focusDistanceSlider;
              if (pSVar13 != (SettingsSlider *)0x0) {
                value = (Object *)*piVar12;
                SettingsSlider::SettingsSlider_Initialize_1
                          (pSVar13,StringLiteral_ppDofPFDist,(int32_t)value,0x1d,0x5dc,
                           (MethodInfo *)0x0);
                pSVar14 = (pCVar1->fields).focusDistanceInputField;
                if (pSVar14 != (SettingsInputFieldSlider *)0x0) {
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                            (pSVar14,StringLiteral_ppDofPFDist,(int32_t)value,(MethodInfo *)0x0);
                  pCVar3 = (pCVar1->fields).cameraBoxSettings;
                  uStack_15 = 0x38;
                  value = (Object *)func_?(TypeInfo__System__Int32,&uStack_15);
                  if (pCVar3 != (CameraBoxSettings *)0x0) {
                    pSStack_2 = (SettingsToggle *)StringLiteral_ppDofApert;
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
                        pOStack_9 = value;
                        piVar12 = (int32_t *)func_?();
                        pSVar13 = (pCVar1->fields).apertureSlider;
                        if (pSVar13 != (SettingsSlider *)0x0) {
                          value = (Object *)*piVar12;
                          SettingsSlider::SettingsSlider_Initialize_1
                                    (pSVar13,StringLiteral_ppDofApert,(int32_t)value,1,0x140,
                                     (MethodInfo *)0x0);
                          pSVar14 = (pCVar1->fields).apertureInputField;
                          if (pSVar14 != (SettingsInputFieldSlider *)0x0) {
                            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                                      (pSVar14,StringLiteral_ppDofApert,(int32_t)value,
                                       (MethodInfo *)0x0);
                            pCVar3 = (pCVar1->fields).cameraBoxSettings;
                            uStack_16 = 0x32;
                            value = (Object *)func_?(TypeInfo__System__Int32,&uStack_16);
                            if (pCVar3 != (CameraBoxSettings *)0x0) {
                              pSStack_2 = (SettingsToggle *)StringLiteral_ppDofFLen;
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
                                  pOStack_9 = value;
                                  piVar12 = (int32_t *)func_?();
                                  pSVar13 = (pCVar1->fields).focalLengthSlider;
                                  if (pSVar13 != (SettingsSlider *)0x0) {
                                    value = (Object *)*piVar12;
                                    SettingsSlider::SettingsSlider_Initialize_1
                                              (pSVar13,StringLiteral_ppDofFLen,(int32_t)value,1,300,
                                               (MethodInfo *)0x0);
                                    pSVar14 = (pCVar1->fields).focalLengthInputField;
                                    if (pSVar14 != (SettingsInputFieldSlider *)0x0) {
                                      SettingsInputFieldSlider::
                                      SettingsInputFieldSlider_Initialize_1
                                                (pSVar14,StringLiteral_ppDofFLen,(int32_t)value,
                                                 (MethodInfo *)0x0);
                                      pCVar3 = (pCVar1->fields).cameraBoxSettings;
                                      pOStack_9 = (Object *)0x2;
                                      value = (Object *)
                                              func_?(TypeInfo__System__Int32,&pOStack_9);
                                      if (pCVar3 != (CameraBoxSettings *)0x0) {
                                        pSStack_2 = (SettingsToggle *)StringLiteral_ppDofMBlur;
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
                                            pIVar8 = TypeInfo__System__Int32;
                                            if ((value->klass->_0).element_class !=
                                                (TypeInfo__System__Int32->_0).element_class)
                                            goto code_?;
                                            pOStack_9 = value;
                                            piVar12 = (int32_t *)func_?();
                                            pSVar13 = (pCVar1->fields).maxBlurSizeSlider;
                                            if (pSVar13 != (SettingsSlider *)0x0) {
                                              value = (Object *)*piVar12;
                                              SettingsSlider::SettingsSlider_Initialize_1
                                                        (pSVar13,StringLiteral_ppDofMBlur,
                                                         (int32_t)value,1,4,(MethodInfo *)0x0);
                                              pSVar14 = (pCVar1->fields).maxBlurSizeInputField;
                                              if (pSVar14 != (SettingsInputFieldSlider *)0x0) {
                                                SettingsInputFieldSlider::
                                                SettingsInputFieldSlider_Initialize_1
                                                          (pSVar14,StringLiteral_ppDofMBlur,
                                                           (int32_t)value,(MethodInfo *)0x0);
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
  pIVar8 = extraout_ECX;
code_?:
  func_?(value,pIVar8);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Object ValueToSend(String, Object) */

Object * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
         CameraBoxDepthOfFieldSettings::CameraBoxDepthOfFieldSettings_ValueToSend
                   (CameraBoxDepthOfFieldSettings *this,String *key,Object *value,MethodInfo *method
                   )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_ppDofMBlur);
    func_?(&StringLiteral_ppDofApert);
    func_?(&StringLiteral_ppDofFLen);
    func_?(&StringLiteral_ppDofPFDist);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_ppDofPFDist,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_ppDofApert,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      value = (Object *)0x0;
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_ppDofFLen,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        value = (Object *)&UNK_?;
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_ppDofMBlur,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          return (Object *)&UNK_?;
        }
      }
    }
  }
  if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  mscorlib.dll::System::Convert::Convert_ToInt32(value,(MethodInfo *)0x0);
  pOVar2 = (Object *)func_?();
  return pOVar2;
}

