
/* Void Start() */

void Assembly-CSharp.dll::MVQualitySettings::MVQualitySettings_Start
               (MVQualitySettings *this,MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    bool_MethodInfo__System__Linq__Enumerable__Contains<System::String>_System__Collections__Generic__IEnumerable<System::String>__System__String_
                   );
    func_?(&TypeInfo__MVQualitySettings);
    func_?(&StringLiteral_HD);
    func_?(&StringLiteral__SD_Missing__);
    func_?(&StringLiteral_Error__);
    func_?(&StringLiteral_SD);
    func_?(&StringLiteral_QualitySettings_have_been_change);
    func_?(&StringLiteral__HD_Missing__);
    func_?(&StringLiteral__SDAndroid_Missing__);
    func_?(&StringLiteral_QualitySettings_not_correct__Mis);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_SDAndroid);
    cRam_? = '\x01';
  }
  source = UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_get_names
                     ((MethodInfo *)0x0);
  if (source == (String__Array *)0x0) {
    func_?();
    func_?(&stack0xffffffe8);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pSVar2 = ::StringLiteral__;
  if (source->max_length != 3) {
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (::StringLiteral__,StringLiteral_QualitySettings_have_been_change,
                        (MethodInfo *)0x0);
  }
  bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_2
                    ((IEnumerable_1_System_Object_ *)source,(Object *)StringLiteral_SD,
                     bool_MethodInfo__System__Linq__Enumerable__Contains<System::String>_System__Collections__Generic__IEnumerable<System::String>__System__String_
                    );
  if (bVar3 == 0) {
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar2,StringLiteral__SD_Missing__,(MethodInfo *)0x0);
  }
  puVar4 = &UNK_?;
  bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_2
                    ((IEnumerable_1_System_Object_ *)source,(Object *)StringLiteral_SDAndroid,
                     bool_MethodInfo__System__Linq__Enumerable__Contains<System::String>_System__Collections__Generic__IEnumerable<System::String>__System__String_
                    );
  if (bVar3 == 0) {
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar2,StringLiteral__SDAndroid_Missing__,(MethodInfo *)0x0);
  }
  bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Contains_2
                    ((IEnumerable_1_System_Object_ *)source,(Object *)StringLiteral_HD,
                     bool_MethodInfo__System__Linq__Enumerable__Contains<System::String>_System__Collections__Generic__IEnumerable<System::String>__System__String_
                    );
  if (bVar3 == 0) {
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (pSVar2,StringLiteral__HD_Missing__,(MethodInfo *)0x0);
  }
  bVar3 = mscorlib.dll::System::String::String_op_Inequality
                    (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pSVar2 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Error__,pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_QualitySettings_not_correct__Mis,(MethodInfo *)0x0);
  }
  MVar5 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar5 == MVGameMode__Enum_Play) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVQualitySettings_set_CurrentLevel(1,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = puVar4;
      return;
    }
  }
  if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  MVQualitySettings_set_CurrentLevel(0,(MethodInfo *)0x0);
  *unaff_FS_OFFSET = puVar4;
  return;
}


/* MVQualitySettings() */

void Assembly-CSharp.dll::MVQualitySettings::MVQualitySettings__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LodData);
    func_?(&TypeInfo__LodData);
    func_?(&TypeInfo__MVQualitySettings);
    cRam_? = '\x01';
  }
  pLVar1 = (LodData__Array *)func_?(TypeInfo__LodData,2);
  LStack_2.activateDistance = 0.0;
  LStack_2.isVisible = 0;
  LStack_2.shadows = 0;
  LStack_2._6_2_ = 0;
  LodData::LodData__ctor(&LStack_2,0.0,1,1,(MethodInfo *)0x0);
  LVar3 = LStack_2;
  if (pLVar1 == (LodData__Array *)0x0) {
code_?:
    uStack_4._4_4_ = &UNK_?;
    func_?();
code_?:
    uStack_4._4_1_ = 0;
    uStack_4._5_1_ = 0;
    uStack_4._6_2_ = 0;
    uStack_4._0_4_ = &UNK_?;
    uStack_4._0_4_ = (undefined *)func_?();
    uStack_5._4_4_ = &UNK_?;
    func_?();
code_?:
    uStack_4._4_1_ = 0;
    uStack_4._5_1_ = 0;
    uStack_4._6_2_ = 0;
    uStack_4._0_4_ = &UNK_?;
    uStack_4._0_4_ = (undefined *)func_?();
    uStack_5._4_4_ = &UNK_?;
    func_?();
code_?:
    uStack_4._4_1_ = 0;
    uStack_4._5_1_ = 0;
    uStack_4._6_2_ = 0;
    uStack_4._0_4_ = &UNK_?;
    uStack_4._0_4_ = (undefined *)func_?();
    uStack_5._4_4_ = &UNK_?;
    func_?();
code_?:
    uStack_4._4_1_ = 0;
    uStack_4._5_1_ = 0;
    uStack_4._6_2_ = 0;
    uStack_4._0_4_ = &UNK_?;
    uStack_4._0_4_ = (undefined *)func_?();
    uStack_5._4_4_ = &UNK_?;
    func_?();
code_?:
    uStack_4._4_1_ = 0;
    uStack_4._5_1_ = 0;
    uStack_4._6_2_ = 0;
    uStack_4._0_4_ = &UNK_?;
    uStack_4._0_4_ = (undefined *)func_?();
    uStack_5._4_4_ = &UNK_?;
    func_?();
code_?:
    uStack_4._4_1_ = 0;
    uStack_4._5_1_ = 0;
    uStack_4._6_2_ = 0;
    uStack_4._0_4_ = &UNK_?;
    uStack_4._0_4_ = (undefined *)func_?();
    uStack_5._4_4_ = &UNK_?;
    func_?();
  }
  else {
    if (pLVar1->max_length == 0) goto code_?;
    pLVar1->vector[0].activateDistance = LStack_2.activateDistance;
    pLVar1->vector[0].isVisible = LStack_2.isVisible;
    pLVar1->vector[0].shadows = LStack_2.shadows;
    *(undefined2 *)&pLVar1->vector[0].field_0x6 = LStack_2._6_2_;
    LStack_6.activateDistance = 0.0;
    LStack_6.isVisible = 0;
    LStack_6.shadows = 0;
    LStack_6._6_2_ = 0;
    LStack_2 = LVar3;
    LodData::LodData__ctor(&LStack_6,300.0,0,1,(MethodInfo *)0x0);
    LVar3 = LStack_6;
    if (pLVar1->max_length < 2) goto code_?;
    pLVar1->vector[1].activateDistance = LStack_6.activateDistance;
    pLVar1->vector[1].isVisible = LStack_6.isVisible;
    pLVar1->vector[1].shadows = LStack_6.shadows;
    *(undefined2 *)&pLVar1->vector[1].field_0x6 = LStack_6._6_2_;
    TypeInfo__MVQualitySettings->static_fields->lodSettingsFastest = pLVar1;
    uStack_4._4_4_ = pLVar1;
    uStack_4._0_4_ = (undefined *)TypeInfo__MVQualitySettings->static_fields;
    uStack_5._4_4_ = &UNK_?;
    LStack_6 = LVar3;
    func_?();
    uStack_5._4_1_ = 2;
    uStack_5._5_1_ = 0;
    uStack_5._6_2_ = 0;
    uStack_5._0_4_ = (float)TypeInfo__LodData;
    pLVar1 = (LodData__Array *)func_?();
    LStack_7.activateDistance = 0.0;
    LStack_7.isVisible = 0;
    LStack_7.shadows = 0;
    LStack_7._6_2_ = 0;
    LodData::LodData__ctor(&LStack_7,0.0,1,1,(MethodInfo *)0x0);
    LVar3 = LStack_7;
    if (pLVar1 == (LodData__Array *)0x0) goto code_?;
    if (pLVar1->max_length == 0) goto code_?;
    pLVar1->vector[0].activateDistance = LStack_7.activateDistance;
    pLVar1->vector[0].isVisible = LStack_7.isVisible;
    pLVar1->vector[0].shadows = LStack_7.shadows;
    *(undefined2 *)&pLVar1->vector[0].field_0x6 = LStack_7._6_2_;
    LStack_8.activateDistance = 0.0;
    LStack_8.isVisible = 0;
    LStack_8.shadows = 0;
    LStack_8._6_2_ = 0;
    LStack_7 = LVar3;
    LodData::LodData__ctor(&LStack_8,300.0,0,1,(MethodInfo *)0x0);
    LVar3 = LStack_8;
    if (pLVar1->max_length < 2) goto code_?;
    pLVar1->vector[1].activateDistance = LStack_8.activateDistance;
    pLVar1->vector[1].isVisible = LStack_8.isVisible;
    pLVar1->vector[1].shadows = LStack_8.shadows;
    *(undefined2 *)&pLVar1->vector[1].field_0x6 = LStack_8._6_2_;
    TypeInfo__MVQualitySettings->static_fields->lodSettingsFast = pLVar1;
    uStack_4._4_4_ = pLVar1;
    uStack_4._0_4_ = (undefined *)&TypeInfo__MVQualitySettings->static_fields->lodSettingsFast;
    uStack_5._4_4_ = &UNK_?;
    LStack_8 = LVar3;
    func_?();
    uStack_5._4_1_ = 2;
    uStack_5._5_1_ = 0;
    uStack_5._6_2_ = 0;
    uStack_5._0_4_ = (float)TypeInfo__LodData;
    pLVar1 = (LodData__Array *)func_?();
    LStack_9.activateDistance = 0.0;
    LStack_9.isVisible = 0;
    LStack_9.shadows = 0;
    LStack_9._6_2_ = 0;
    LodData::LodData__ctor(&LStack_9,0.0,1,1,(MethodInfo *)0x0);
    LVar3 = LStack_9;
    if (pLVar1 == (LodData__Array *)0x0) goto code_?;
    if (pLVar1->max_length == 0) goto code_?;
    pLVar1->vector[0].activateDistance = LStack_9.activateDistance;
    pLVar1->vector[0].isVisible = LStack_9.isVisible;
    pLVar1->vector[0].shadows = LStack_9.shadows;
    *(undefined2 *)&pLVar1->vector[0].field_0x6 = LStack_9._6_2_;
    LStack_10.activateDistance = 0.0;
    LStack_10.isVisible = 0;
    LStack_10.shadows = 0;
    LStack_10._6_2_ = 0;
    LStack_9 = LVar3;
    LodData::LodData__ctor(&LStack_10,300.0,0,1,(MethodInfo *)0x0);
    LVar3 = LStack_10;
    if (pLVar1->max_length < 2) goto code_?;
    pLVar1->vector[1].activateDistance = LStack_10.activateDistance;
    pLVar1->vector[1].isVisible = LStack_10.isVisible;
    pLVar1->vector[1].shadows = LStack_10.shadows;
    *(undefined2 *)&pLVar1->vector[1].field_0x6 = LStack_10._6_2_;
    TypeInfo__MVQualitySettings->static_fields->lodSettingsSimple = pLVar1;
    uStack_4._4_4_ = pLVar1;
    uStack_4._0_4_ = (undefined *)&TypeInfo__MVQualitySettings->static_fields->lodSettingsSimple;
    uStack_5._4_4_ = &UNK_?;
    LStack_10 = LVar3;
    func_?();
    uStack_5._4_1_ = 2;
    uStack_5._5_1_ = 0;
    uStack_5._6_2_ = 0;
    uStack_5._0_4_ = (float)TypeInfo__LodData;
    pLVar1 = (LodData__Array *)func_?();
    LStack_11.activateDistance = 0.0;
    LStack_11.isVisible = 0;
    LStack_11.shadows = 0;
    LStack_11._6_2_ = 0;
    LodData::LodData__ctor(&LStack_11,0.0,1,1,(MethodInfo *)0x0);
    LVar3 = LStack_11;
    if (pLVar1 == (LodData__Array *)0x0) goto code_?;
    if (pLVar1->max_length == 0) goto code_?;
    pLVar1->vector[0].activateDistance = LStack_11.activateDistance;
    pLVar1->vector[0].isVisible = LStack_11.isVisible;
    pLVar1->vector[0].shadows = LStack_11.shadows;
    *(undefined2 *)&pLVar1->vector[0].field_0x6 = LStack_11._6_2_;
    LStack_12.activateDistance = 0.0;
    LStack_12.isVisible = 0;
    LStack_12.shadows = 0;
    LStack_12._6_2_ = 0;
    LStack_11 = LVar3;
    LodData::LodData__ctor(&LStack_12,300.0,0,1,(MethodInfo *)0x0);
    LVar3 = LStack_12;
    if (pLVar1->max_length < 2) goto code_?;
    pLVar1->vector[1].activateDistance = LStack_12.activateDistance;
    pLVar1->vector[1].isVisible = LStack_12.isVisible;
    pLVar1->vector[1].shadows = LStack_12.shadows;
    *(undefined2 *)&pLVar1->vector[1].field_0x6 = LStack_12._6_2_;
    TypeInfo__MVQualitySettings->static_fields->lodSettingsGood = pLVar1;
    uStack_4._4_4_ = pLVar1;
    uStack_4._0_4_ = (undefined *)&TypeInfo__MVQualitySettings->static_fields->lodSettingsGood;
    uStack_5._4_4_ = &UNK_?;
    LStack_12 = LVar3;
    func_?();
    uStack_5._4_1_ = 2;
    uStack_5._5_1_ = 0;
    uStack_5._6_2_ = 0;
    uStack_5._0_4_ = (float)TypeInfo__LodData;
    pLVar1 = (LodData__Array *)func_?();
    uStack_4._0_4_ = (undefined *)0x0;
    uStack_4._4_1_ = 0;
    uStack_4._5_1_ = 0;
    uStack_4._6_2_ = 0;
    LodData::LodData__ctor((LodData *)&uStack_4,0.0,1,1,(MethodInfo *)0x0);
    LVar3 = uStack_4;
    if (pLVar1 == (LodData__Array *)0x0) goto code_?;
    if (pLVar1->max_length == 0) goto code_?;
    pLVar1->vector[0].activateDistance = (float)(undefined *)uStack_4;
    pLVar1->vector[0].isVisible = uStack_4._4_1_;
    pLVar1->vector[0].shadows = uStack_4._5_1_;
    *(undefined2 *)&pLVar1->vector[0].field_0x6 = uStack_4._6_2_;
    uStack_5._0_4_ = 0.0;
    uStack_5._4_1_ = 0;
    uStack_5._5_1_ = 0;
    uStack_5._6_2_ = 0;
    uStack_4 = LVar3;
    LodData::LodData__ctor((LodData *)&uStack_5,500.0,0,1,(MethodInfo *)0x0);
    if (pLVar1->max_length < 2) goto code_?;
    pLVar1->vector[1].activateDistance = (float)uStack_5;
    pLVar1->vector[1].isVisible = uStack_5._4_1_;
    pLVar1->vector[1].shadows = uStack_5._5_1_;
    *(undefined2 *)&pLVar1->vector[1].field_0x6 = uStack_5._6_2_;
    TypeInfo__MVQualitySettings->static_fields->lodSettingsBeautiful = pLVar1;
    uStack_4._4_4_ = pLVar1;
    uStack_4._0_4_ = (undefined *)&TypeInfo__MVQualitySettings->static_fields->lodSettingsBeautiful
    ;
    uStack_5._4_4_ = &UNK_?;
    func_?();
    uStack_5._4_1_ = 2;
    uStack_5._5_1_ = 0;
    uStack_5._6_2_ = 0;
    uStack_5._0_4_ = (float)TypeInfo__LodData;
    pLVar1 = (LodData__Array *)func_?();
    LodData::LodData__ctor((LodData *)&stack0xffffffa4,0.0,1,1,(MethodInfo *)0x0);
    if (pLVar1 == (LodData__Array *)0x0) goto code_?;
    if (pLVar1->max_length == 0) goto code_?;
    pLVar1->vector[0].activateDistance = 0.0;
    pLVar1->vector[0].isVisible = 0;
    pLVar1->vector[0].shadows = 0;
    *(undefined2 *)&pLVar1->vector[0].field_0x6 = 0;
    LVar3.activateDistance = 0.0;
    LVar3.isVisible = 0;
    LVar3.shadows = 0;
    LVar3._6_2_ = 0;
    LodData::LodData__ctor((LodData *)&stack0xffffff9c,300.0,0,0,(MethodInfo *)0x0);
    if (pLVar1->max_length < 2) goto code_?;
    pLVar1->vector[1].activateDistance = LVar3.activateDistance;
    pLVar1->vector[1].isVisible = LVar3.isVisible;
    pLVar1->vector[1].shadows = LVar3.shadows;
    *(undefined2 *)&pLVar1->vector[1].field_0x6 = LVar3._6_2_;
    TypeInfo__MVQualitySettings->static_fields->lodSettingsFantastic = pLVar1;
    uStack_4._4_4_ = pLVar1;
    uStack_4._0_4_ = (undefined *)&TypeInfo__MVQualitySettings->static_fields->lodSettingsFantastic
    ;
    uStack_5._4_4_ = &UNK_?;
    func_?();
    uStack_5._4_1_ = 6;
    uStack_5._5_1_ = 0;
    uStack_5._6_2_ = 0;
    uStack_5._0_4_ = (float)TypeInfo__LodData;
    pLVar13 = (LodData__Array__Array *)func_?();
    pLVar1 = TypeInfo__MVQualitySettings->static_fields->lodSettingsFastest;
    if (pLVar13 == (LodData__Array__Array *)0x0) goto code_?;
    if (pLVar1 != (LodData__Array *)0x0) {
      uStack_4._4_4_ = (pLVar13->klass->_0).element_class;
      uStack_4._0_4_ = (undefined *)pLVar1;
      uStack_5._4_4_ = &UNK_?;
      iVar14 = func_?();
      if (iVar14 == 0) goto code_?;
    }
    if (pLVar13->max_length == 0) goto code_?;
    pLVar13->vector[0] = pLVar1;
    uStack_4._4_4_ = pLVar1;
    uStack_4._0_4_ = (undefined *)pLVar13->vector;
    uStack_5._4_4_ = &UNK_?;
    func_?();
    pLVar1 = TypeInfo__MVQualitySettings->static_fields->lodSettingsFast;
    if (pLVar1 != (LodData__Array *)0x0) {
      uStack_4._4_4_ = (pLVar13->klass->_0).element_class;
      uStack_4._0_4_ = (undefined *)pLVar1;
      uStack_5._4_4_ = &UNK_?;
      iVar14 = func_?();
      if (iVar14 == 0) goto code_?;
    }
    if (pLVar13->max_length < 2) goto code_?;
    pLVar13->vector[1] = pLVar1;
    uStack_4._4_4_ = pLVar1;
    uStack_4._0_4_ = (undefined *)(pLVar13->vector + 1);
    uStack_5._4_4_ = &UNK_?;
    func_?();
    pLVar1 = TypeInfo__MVQualitySettings->static_fields->lodSettingsSimple;
    if (pLVar1 != (LodData__Array *)0x0) {
      uStack_4._4_4_ = (pLVar13->klass->_0).element_class;
      uStack_4._0_4_ = (undefined *)pLVar1;
      uStack_5._4_4_ = &UNK_?;
      iVar14 = func_?();
      if (iVar14 == 0) goto code_?;
    }
    if (pLVar13->max_length < 3) goto code_?;
    pLVar13->vector[2] = pLVar1;
    uStack_4._4_4_ = pLVar1;
    uStack_4._0_4_ = (undefined *)(pLVar13->vector + 2);
    uStack_5._4_4_ = &UNK_?;
    func_?();
    pLVar1 = TypeInfo__MVQualitySettings->static_fields->lodSettingsGood;
    if (pLVar1 != (LodData__Array *)0x0) {
      uStack_4._4_4_ = (pLVar13->klass->_0).element_class;
      uStack_4._0_4_ = (undefined *)pLVar1;
      uStack_5._4_4_ = &UNK_?;
      iVar14 = func_?();
      if (iVar14 == 0) goto code_?;
    }
    if (pLVar13->max_length < 4) goto code_?;
    pLVar13->vector[3] = pLVar1;
    uStack_4._4_4_ = pLVar1;
    uStack_4._0_4_ = (undefined *)(pLVar13->vector + 3);
    uStack_5._4_4_ = &UNK_?;
    func_?();
    pLVar1 = TypeInfo__MVQualitySettings->static_fields->lodSettingsBeautiful;
    if (pLVar1 != (LodData__Array *)0x0) {
      uStack_4._4_4_ = (pLVar13->klass->_0).element_class;
      uStack_4._0_4_ = (undefined *)pLVar1;
      uStack_5._4_4_ = &UNK_?;
      iVar14 = func_?();
      if (iVar14 == 0) goto code_?;
    }
    if (pLVar13->max_length < 5) goto code_?;
    pLVar13->vector[4] = pLVar1;
    uStack_4._4_4_ = pLVar1;
    uStack_4._0_4_ = (undefined *)(pLVar13->vector + 4);
    uStack_5._4_4_ = &UNK_?;
    func_?();
    pLVar1 = TypeInfo__MVQualitySettings->static_fields->lodSettingsFantastic;
    if (pLVar1 != (LodData__Array *)0x0) {
      uStack_4._4_4_ = (pLVar13->klass->_0).element_class;
      uStack_4._0_4_ = (undefined *)pLVar1;
      uStack_5._4_4_ = &UNK_?;
      iVar14 = func_?();
      if (iVar14 == 0) goto code_?;
    }
    if (5 < pLVar13->max_length) {
      pLVar13->vector[5] = pLVar1;
      uStack_4._4_4_ = pLVar1;
      uStack_4._0_4_ = (undefined *)(pLVar13->vector + 5);
      uStack_5._4_4_ = &UNK_?;
      func_?();
      TypeInfo__MVQualitySettings->static_fields->lodSettings = pLVar13;
      uStack_5._4_4_ = pLVar13;
      uStack_5._0_4_ = (float)&TypeInfo__MVQualitySettings->static_fields->lodSettings;
      func_?();
      return;
    }
  }
code_?:
  uStack_4._4_4_ = &UNK_?;
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
    func_?(&TypeInfo__MVQualitySettings);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVQualitySettings);
  }
  pLVar1 = TypeInfo__MVQualitySettings->static_fields->lodSettings;
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_GetQualityLevel
                    ((MethodInfo *)0x0);
  if (pLVar1 == (LodData__Array__Array *)0x0) {
    func_?();
  }
  else if (uVar2 < pLVar1->max_length) {
    return pLVar1->vector[uVar2];
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pLVar4 = (LodData__Array *)(*pcVar3)();
  return pLVar4;
}


/* Void set_CurrentLevel(Int32) */

void Assembly-CSharp.dll::MVQualitySettings::MVQualitySettings_set_CurrentLevel
               (int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVQualitySettings);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_GetQualityLevel
                    ((MethodInfo *)0x0);
  if (value != iVar1) {
    UnityEngine.CoreModule.dll::UnityEngine::QualitySettings::QualitySettings_SetQualityLevel
              (value,1,(MethodInfo *)0x0);
    if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged !=
        (MVQualitySettings_OnQualityLevedChanged *)0x0) {
      if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar2 = TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged;
      if (pMVar2 == (MVQualitySettings_OnQualityLevedChanged *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(pMVar2->fields)._._.invoke_impl)((pMVar2->fields)._._.method_code);
    }
  }
  return;
}

