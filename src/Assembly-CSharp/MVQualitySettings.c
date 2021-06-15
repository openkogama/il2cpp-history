
/* Void Start() */

void Assembly-CSharp.dll::MVQualitySettings::MVQualitySettings_Start
               (MVQualitySettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_get_names
                     ((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = TypeInfo__System__String->static_fields->Empty;
  if (source != (String__Array *)0x0) {
    if (source->max_length != 3) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_2
                         (pSVar1,StringLiteral_QualitySettings_have_been_change,(MethodInfo *)0x0);
    }
    bVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_3
                      ((IEnumerable_1_System_String_ *)source,StringLiteral_SD,
                       bool_MethodInfo__System__Linq__Enumerable__Contains<System::String>_System__Collections__Generic__IEnumerable<System::String>__System__String_
                      );
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_2
                         (pSVar1,StringLiteral__SD_Missing__,(MethodInfo *)0x0);
    }
    bVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_3
                      ((IEnumerable_1_System_String_ *)source,StringLiteral_SDAndroid,
                       bool_MethodInfo__System__Linq__Enumerable__Contains<System::String>_System__Collections__Generic__IEnumerable<System::String>__System__String_
                      );
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_2
                         (pSVar1,StringLiteral__SDAndroid_Missing__,(MethodInfo *)0x0);
    }
    bVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_3
                      ((IEnumerable_1_System_String_ *)source,StringLiteral_HD,
                       bool_MethodInfo__System__Linq__Enumerable__Contains<System::String>_System__Collections__Generic__IEnumerable<System::String>__System__String_
                      );
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_2
                         (pSVar1,StringLiteral__HD_Missing__,(MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_op_Inequality
                      (pSVar1,TypeInfo__System__String->static_fields->Empty,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar1 = mscorlib.dll::System::String::String_Concat_2
                         (StringLiteral_Error__,pSVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_QualitySettings_not_correct__Mis,(MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVQualitySettings);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::
            QualitySettings_GetQualityLevel((MethodInfo *)0x0);
    if (iVar3 != 0) {
      UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_SetQualityLevel
                (0,1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVQualitySettings);
      }
      if (TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged !=
          (MVQualitySettings_OnQualityLevedChanged *)0x0) {
        if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVQualitySettings);
        }
        this_00 = (UnityAction_1_System_Boolean_ *)
                  TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged;
        if (this_00 == (UnityAction_1_System_Boolean_ *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
        UnityAction_1_System_Boolean__Invoke(this_00,0,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVQualitySettings() */

void Assembly-CSharp.dll::MVQualitySettings::MVQualitySettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (LodData__Array *)func_?(TypeInfo__LodData,2);
  if (pLVar1 == (LodData__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = 0;
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar2 = func_?(0,uVar2);
    func_?(uVar2);
code_?:
    uVar2 = 0;
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar2 = func_?(0,uVar2);
    func_?(uVar2);
code_?:
    uVar2 = 0;
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar2 = func_?(0,uVar2);
    func_?(uVar2);
code_?:
    uVar2 = 0;
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar2 = func_?(0,uVar2);
    func_?(uVar2);
code_?:
    uVar2 = 0;
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar2 = func_?(0,uVar2);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    uStack_4 = 0;
    func_?(&uStack_4,0,1,1,0);
    uVar5 = uStack_4;
    if (pLVar1->max_length == 0) goto code_?;
    pLVar1->vector[0].activateDistance = (float)uStack_4;
    pLVar1->vector[0].isVisible = uStack_4._4_1_;
    pLVar1->vector[0].shadows = uStack_4._5_1_;
    *(undefined2 *)&pLVar1->vector[0].field_0x6 = uStack_4._6_2_;
    uStack_6 = 0;
    uStack_4 = uVar5;
    func_?(&uStack_6,0x43960000,0,1,0);
    uVar5 = uStack_6;
    if (pLVar1->max_length < 2) goto code_?;
    pLVar1->vector[1].activateDistance = (float)uStack_6;
    pLVar1->vector[1].isVisible = uStack_6._4_1_;
    pLVar1->vector[1].shadows = uStack_6._5_1_;
    *(undefined2 *)&pLVar1->vector[1].field_0x6 = uStack_6._6_2_;
    TypeInfo__MVQualitySettings->static_fields->lodSettingsFastest = pLVar1;
    uStack_6 = uVar5;
    pLVar1 = (LodData__Array *)func_?(TypeInfo__LodData,2);
    if (pLVar1 == (LodData__Array *)0x0) goto code_?;
    uStack_7 = 0;
    func_?(&uStack_7,0,1,1,0);
    uVar5 = uStack_7;
    uVar2 = 0;
    if (pLVar1->max_length == 0) goto code_?;
    pLVar1->vector[0].activateDistance = (float)uStack_7;
    pLVar1->vector[0].isVisible = uStack_7._4_1_;
    pLVar1->vector[0].shadows = uStack_7._5_1_;
    *(undefined2 *)&pLVar1->vector[0].field_0x6 = uStack_7._6_2_;
    uStack_8 = 0;
    uStack_7 = uVar5;
    func_?(&uStack_8,0x43960000,0,1,0);
    uVar5 = uStack_8;
    if (pLVar1->max_length < 2) goto code_?;
    pLVar1->vector[1].activateDistance = (float)uStack_8;
    pLVar1->vector[1].isVisible = uStack_8._4_1_;
    pLVar1->vector[1].shadows = uStack_8._5_1_;
    *(undefined2 *)&pLVar1->vector[1].field_0x6 = uStack_8._6_2_;
    TypeInfo__MVQualitySettings->static_fields->lodSettingsFast = pLVar1;
    uStack_8 = uVar5;
    pLVar1 = (LodData__Array *)func_?(TypeInfo__LodData,2);
    if (pLVar1 == (LodData__Array *)0x0) goto code_?;
    uStack_9 = 0;
    func_?(&uStack_9,0,1,1,0);
    uVar5 = uStack_9;
    uVar2 = 0;
    if (pLVar1->max_length == 0) goto code_?;
    pLVar1->vector[0].activateDistance = (float)uStack_9;
    pLVar1->vector[0].isVisible = uStack_9._4_1_;
    pLVar1->vector[0].shadows = uStack_9._5_1_;
    *(undefined2 *)&pLVar1->vector[0].field_0x6 = uStack_9._6_2_;
    uStack_10 = 0;
    uStack_9 = uVar5;
    func_?(&uStack_10,0x43960000,0,1,0);
    uVar5 = uStack_10;
    if (pLVar1->max_length < 2) goto code_?;
    pLVar1->vector[1].activateDistance = (float)uStack_10;
    pLVar1->vector[1].isVisible = uStack_10._4_1_;
    pLVar1->vector[1].shadows = uStack_10._5_1_;
    *(undefined2 *)&pLVar1->vector[1].field_0x6 = uStack_10._6_2_;
    TypeInfo__MVQualitySettings->static_fields->lodSettingsSimple = pLVar1;
    uStack_10 = uVar5;
    pLVar1 = (LodData__Array *)func_?(TypeInfo__LodData,2);
    if (pLVar1 == (LodData__Array *)0x0) goto code_?;
    uStack_11 = 0;
    func_?(&uStack_11,0,1,1,0);
    uVar5 = uStack_11;
    uVar2 = 0;
    if (pLVar1->max_length == 0) goto code_?;
    pLVar1->vector[0].activateDistance = (float)uStack_11;
    pLVar1->vector[0].isVisible = uStack_11._4_1_;
    pLVar1->vector[0].shadows = uStack_11._5_1_;
    *(undefined2 *)&pLVar1->vector[0].field_0x6 = uStack_11._6_2_;
    uStack_12 = 0;
    uStack_11 = uVar5;
    func_?(&uStack_12,0x43960000,0,1,0);
    uVar5 = uStack_12;
    if (pLVar1->max_length < 2) goto code_?;
    pLVar1->vector[1].activateDistance = (float)uStack_12;
    pLVar1->vector[1].isVisible = uStack_12._4_1_;
    pLVar1->vector[1].shadows = uStack_12._5_1_;
    *(undefined2 *)&pLVar1->vector[1].field_0x6 = uStack_12._6_2_;
    TypeInfo__MVQualitySettings->static_fields->lodSettingsGood = pLVar1;
    uStack_12 = uVar5;
    pLVar1 = (LodData__Array *)func_?(TypeInfo__LodData,2);
    if (pLVar1 == (LodData__Array *)0x0) goto code_?;
    uStack_13 = 0;
    func_?(&uStack_13,0,1,1,0);
    uVar5 = uStack_13;
    uVar2 = 0;
    if (pLVar1->max_length == 0) goto code_?;
    pLVar1->vector[0].activateDistance = (float)uStack_13;
    pLVar1->vector[0].isVisible = uStack_13._4_1_;
    pLVar1->vector[0].shadows = uStack_13._5_1_;
    *(undefined2 *)&pLVar1->vector[0].field_0x6 = uStack_13._6_2_;
    uStack_14 = 0;
    uStack_13 = uVar5;
    func_?(&uStack_14,0x43fa0000,0,1,0);
    uVar5 = uStack_14;
    if (pLVar1->max_length < 2) goto code_?;
    pLVar1->vector[1].activateDistance = (float)uStack_14;
    pLVar1->vector[1].isVisible = uStack_14._4_1_;
    pLVar1->vector[1].shadows = uStack_14._5_1_;
    *(undefined2 *)&pLVar1->vector[1].field_0x6 = uStack_14._6_2_;
    TypeInfo__MVQualitySettings->static_fields->lodSettingsBeautiful = pLVar1;
    uStack_14 = uVar5;
    pLVar1 = (LodData__Array *)func_?(TypeInfo__LodData,2);
    if (pLVar1 == (LodData__Array *)0x0) goto code_?;
    uStack_15 = 0;
    func_?(&uStack_15,0,1,1,0);
    uVar5 = uStack_15;
    uVar2 = 0;
    if (pLVar1->max_length == 0) goto code_?;
    pLVar1->vector[0].activateDistance = (float)uStack_15;
    pLVar1->vector[0].isVisible = uStack_15._4_1_;
    pLVar1->vector[0].shadows = uStack_15._5_1_;
    *(undefined2 *)&pLVar1->vector[0].field_0x6 = uStack_15._6_2_;
    uStack_16 = 0;
    uStack_15 = uVar5;
    func_?(&uStack_16,0x43960000,0,1,0);
    uVar5 = uStack_16;
    if (pLVar1->max_length < 2) goto code_?;
    pLVar1->vector[1].activateDistance = (float)uStack_16;
    pLVar1->vector[1].isVisible = uStack_16._4_1_;
    pLVar1->vector[1].shadows = uStack_16._5_1_;
    *(undefined2 *)&pLVar1->vector[1].field_0x6 = uStack_16._6_2_;
    TypeInfo__MVQualitySettings->static_fields->lodSettingsFantastic = pLVar1;
    uStack_16 = uVar5;
    pLVar17 = (LodData__Array__Array *)func_?(TypeInfo__LodData,6);
    pLVar1 = TypeInfo__MVQualitySettings->static_fields->lodSettingsFastest;
    if (pLVar17 == (LodData__Array__Array *)0x0) goto code_?;
    if (pLVar1 != (LodData__Array *)0x0) {
      iVar18 = func_?(pLVar1,(pLVar17->klass->_0).element_class);
      if (iVar18 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar17->max_length == 0) goto code_?;
    pLVar17->vector[0] = pLVar1;
    pLVar1 = TypeInfo__MVQualitySettings->static_fields->lodSettingsFast;
    if (pLVar1 != (LodData__Array *)0x0) {
      iVar18 = func_?(pLVar1,(pLVar17->klass->_0).element_class);
      if (iVar18 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar17->max_length < 2) goto code_?;
    pLVar17->vector[1] = pLVar1;
    pLVar1 = TypeInfo__MVQualitySettings->static_fields->lodSettingsSimple;
    if (pLVar1 != (LodData__Array *)0x0) {
      iVar18 = func_?(pLVar1,(pLVar17->klass->_0).element_class);
      if (iVar18 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar17->max_length < 3) goto code_?;
    pLVar17->vector[2] = pLVar1;
    pLVar1 = TypeInfo__MVQualitySettings->static_fields->lodSettingsGood;
    if (pLVar1 != (LodData__Array *)0x0) {
      iVar18 = func_?(pLVar1,(pLVar17->klass->_0).element_class);
      if (iVar18 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar17->max_length < 4) goto code_?;
    pLVar17->vector[3] = pLVar1;
    pLVar1 = TypeInfo__MVQualitySettings->static_fields->lodSettingsBeautiful;
    if (pLVar1 != (LodData__Array *)0x0) {
      iVar18 = func_?(pLVar1,(pLVar17->klass->_0).element_class);
      if (iVar18 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar17->max_length < 5) goto code_?;
    pLVar17->vector[4] = pLVar1;
    pLVar1 = TypeInfo__MVQualitySettings->static_fields->lodSettingsFantastic;
    if (pLVar1 == (LodData__Array *)0x0) {
code_?:
      if (5 < pLVar17->max_length) {
        pLVar17->vector[5] = pLVar1;
        TypeInfo__MVQualitySettings->static_fields->lodSettings = pLVar17;
        return;
      }
      goto code_?;
    }
    iVar18 = func_?(pLVar1,(pLVar17->klass->_0).element_class);
    if (iVar18 != 0) goto code_?;
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Int32 get_CurrentLevel() */

int32_t Assembly-CSharp.dll::MVQualitySettings::MVQualitySettings_get_CurrentLevel
                  (MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_GetQualityLevel
                    ((MethodInfo *)0x0);
  return iVar1;
}


/* LodData[] get_CurrentLodData() */

LodData__Array *
Assembly-CSharp.dll::MVQualitySettings::MVQualitySettings_get_CurrentLodData(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVQualitySettings);
  }
  pLVar1 = TypeInfo__MVQualitySettings->static_fields->lodSettings;
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_GetQualityLevel
                    ((MethodInfo *)0x0);
  if (pLVar1 == (LodData__Array__Array *)0x0) {
    func_?(0);
  }
  else if (uVar2 < pLVar1->max_length) {
    return pLVar1->vector[uVar2];
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pLVar5 = (LodData__Array *)(*pcVar4)();
  return pLVar5;
}


/* Void set_CurrentLevel(Int32) */

void Assembly-CSharp.dll::MVQualitySettings::MVQualitySettings_set_CurrentLevel
               (int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_GetQualityLevel
                    ((MethodInfo *)0x0);
  if (value != iVar1) {
    UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_SetQualityLevel
              (value,1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
      func_?();
    }
    if (TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged !=
        (MVQualitySettings_OnQualityLevedChanged *)0x0) {
      if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
        func_?();
      }
      this = (UnityAction_1_System_Boolean_ *)
             TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged;
      if (this == (UnityAction_1_System_Boolean_ *)0x0) {
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
      UnityAction_1_System_Boolean__Invoke(this,(bool)value,(MethodInfo *)0x0);
    }
  }
  return;
}

