
/* Void InitData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxLensDistortionSettings::CameraBoxLensDistortionSettings_InitData
               (Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_ppLensDistInt);
    func_?(&StringLiteral_ppLensDistOn);
    func_?(&StringLiteral_ppLensDistYmult);
    func_?(&StringLiteral_ppLensDistXmult);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&uStack_1);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppLensDistOn,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    uStack_3 = 0;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&uStack_3);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppLensDistInt,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    uStack_4 = 100;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&uStack_4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppLensDistXmult,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    uStack_5 = 100;
    puStack6 = &uStack_5;
    pIStack7 = TypeInfo__System__Int32;
    pOVar2 = (Object *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryAdd
              (data,(Object *)StringLiteral_ppLensDistYmult,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryAdd_System__Object__System__Object_
              );
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean IsKey(String) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxLensDistortionSettings::CameraBoxLensDistortionSettings_IsKey
               (String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_ppLensDistInt);
    func_?(&StringLiteral_ppLensDistOn);
    func_?(&StringLiteral_ppLensDistYmult);
    func_?(&StringLiteral_ppLensDistXmult);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_ppLensDistOn,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_ppLensDistInt,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_ppLensDistXmult,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        bVar1 = mscorlib.dll::System::String::String_op_Equality
                          (key,StringLiteral_ppLensDistYmult,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return 1;
}


/* Void Start() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     CameraBoxLensDistortionSettings::CameraBoxLensDistortionSettings_Start
               (CameraBoxLensDistortionSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_ppLensDistInt);
    func_?(&StringLiteral_ppLensDistOn);
    func_?(&StringLiteral_ppLensDistYmult);
    func_?(&StringLiteral_ppLensDistXmult);
    cRam_? = '\x01';
  }
  pCVar1 = this;
  this = (CameraBoxLensDistortionSettings *)((uint)this & 0xffffff);
  pSStack_2 = (pCVar1->fields).featureOnToggle;
  pCVar3 = (pCVar1->fields).cameraBoxSettings;
  value = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  if (pCVar3 != (CameraBoxSettings *)0x0) {
    pSStack_4 = StringLiteral_ppLensDistOn;
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
                  (this_00,StringLiteral_ppLensDistOn,*pbVar10,(MethodInfo *)0x0);
        pCVar3 = (pCVar1->fields).cameraBoxSettings;
        uStack_11 = 0;
        value = (Object *)func_?(TypeInfo__System__Int32,&uStack_11);
        if (pCVar3 != (CameraBoxSettings *)0x0) {
          pSStack_2 = (SettingsToggle *)StringLiteral_ppLensDistInt;
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
              pSVar13 = (pCVar1->fields).intensitySlider;
              if (pSVar13 != (SettingsSlider *)0x0) {
                value = (Object *)*piVar12;
                SettingsSlider::SettingsSlider_Initialize_1
                          (pSVar13,StringLiteral_ppLensDistInt,(int32_t)value,-0x4b,0x4b,
                           (MethodInfo *)0x0);
                pSVar14 = (pCVar1->fields).intensityInputField;
                if (pSVar14 != (SettingsInputFieldSlider *)0x0) {
                  SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                            (pSVar14,StringLiteral_ppLensDistInt,(int32_t)value,(MethodInfo *)0x0);
                  pCVar3 = (pCVar1->fields).cameraBoxSettings;
                  uStack_15 = 100;
                  value = (Object *)func_?(TypeInfo__System__Int32,&uStack_15);
                  if (pCVar3 != (CameraBoxSettings *)0x0) {
                    pSStack_2 = (SettingsToggle *)StringLiteral_ppLensDistXmult;
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
                        pSVar13 = (pCVar1->fields).xMultiplierSlider;
                        if (pSVar13 != (SettingsSlider *)0x0) {
                          value = (Object *)*piVar12;
                          SettingsSlider::SettingsSlider_Initialize_1
                                    (pSVar13,StringLiteral_ppLensDistXmult,(int32_t)value,0,100,
                                     (MethodInfo *)0x0);
                          pSVar14 = (pCVar1->fields).xMultiplierInputField;
                          if (pSVar14 != (SettingsInputFieldSlider *)0x0) {
                            SettingsInputFieldSlider::SettingsInputFieldSlider_Initialize_1
                                      (pSVar14,StringLiteral_ppLensDistXmult,(int32_t)value,
                                       (MethodInfo *)0x0);
                            pCVar3 = (pCVar1->fields).cameraBoxSettings;
                            pOStack_9 = (Object *)0x64;
                            value = (Object *)func_?(TypeInfo__System__Int32,&pOStack_9);
                            if (pCVar3 != (CameraBoxSettings *)0x0) {
                              pSStack_2 = (SettingsToggle *)StringLiteral_ppLensDistYmult;
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
                                  pSVar13 = (pCVar1->fields).yMultiplierSlider;
                                  if (pSVar13 != (SettingsSlider *)0x0) {
                                    value = (Object *)*piVar12;
                                    SettingsSlider::SettingsSlider_Initialize_1
                                              (pSVar13,StringLiteral_ppLensDistYmult,(int32_t)value,0
                                               ,100,(MethodInfo *)0x0);
                                    pSVar14 = (pCVar1->fields).yMultiplierInputField;
                                    if (pSVar14 != (SettingsInputFieldSlider *)0x0) {
                                      SettingsInputFieldSlider::
                                      SettingsInputFieldSlider_Initialize_1
                                                (pSVar14,StringLiteral_ppLensDistYmult,(int32_t)value
                                                 ,(MethodInfo *)0x0);
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
  func_?();
  pIVar8 = extraout_ECX;
code_?:
  func_?(value,pIVar8);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Object ValueToSend(String, Object) */

Object * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
         CameraBoxLensDistortionSettings::CameraBoxLensDistortionSettings_ValueToSend
                   (CameraBoxLensDistortionSettings *this,String *key,Object *value,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_ppLensDistInt);
    func_?(&StringLiteral_ppLensDistYmult);
    func_?(&StringLiteral_ppLensDistXmult);
    cRam_? = '\x01';
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (key,StringLiteral_ppLensDistInt,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    bVar1 = mscorlib.dll::System::String::String_op_Equality
                      (key,StringLiteral_ppLensDistXmult,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      value = (Object *)0x0;
      bVar1 = mscorlib.dll::System::String::String_op_Equality
                        (key,StringLiteral_ppLensDistYmult,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return (Object *)0x0;
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

