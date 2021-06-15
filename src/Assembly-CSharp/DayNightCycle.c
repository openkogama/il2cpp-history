
/* Void Initialize() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_Initialize
               (DayNightCycle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._sunrise;
  fVar2 = (this->fields)._sunset;
  if (fVar1 < fVar2) {
    fVar2 = fVar2 - fVar1;
  }
  else {
    fVar2 = (_UNK_? - fVar1) + fVar2;
  }
  (this->fields)._sunDuration = fVar2;
  DayNightCycle_RecalcSunAltitudeVector(this,(MethodInfo *)0x0);
  fVar1 = (this->fields)._moonrise;
  fVar2 = (this->fields)._moonset;
  if (fVar1 < fVar2) {
    fVar2 = fVar2 - fVar1;
  }
  else {
    fVar2 = (_UNK_? - fVar1) + fVar2;
  }
  (this->fields)._moonDuration = fVar2;
  DayNightCycle_RecalcMoonAltitudeVector(this,(MethodInfo *)0x0);
  if ((this->fields).activeColorPreset == (DayNightCycleColorPresets_Preset *)0x0) {
    this_00 = (this->fields).colorPresets;
    if (this_00 == (DayNightCycleColorPresets *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pDVar4 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                       (this_00,0,(MethodInfo *)0x0);
    (this->fields).activeColorPreset = pDVar4;
  }
  if ((this->fields).useServerTime == 0) {
    fVar1 = (this->fields).cycleLength;
    this_01 = (Timer_1 *)func_?();
    fVar5 = (float10)func_?();
    ThemeTimers::Timer::Timer_1__ctor(this_01,(float)fVar5,fVar1,(MethodInfo *)(float)fVar5);
    (this->fields).timer = (ITimer *)this_01;
    (this->fields).initialized = 1;
    return;
  }
  this_02 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_02,(MethodInfo *)0x0);
  (this->fields).timer = (ITimer *)this_02;
  (this->fields).initialized = 1;
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_OnValidate
               (DayNightCycle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._sunrise;
  fVar2 = (this->fields)._sunset;
  if (fVar1 < fVar2) {
    fVar2 = fVar2 - fVar1;
  }
  else {
    fVar2 = (_UNK_? - fVar1) + fVar2;
  }
  (this->fields)._sunDuration = fVar2;
  fVar1 = (this->fields)._sunAltitude * _UNK_?;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fStack_3 = 0.0;
  uStack_4 = 0;
  dVar5 = (double)fVar1;
  func_?(0);
  dVar6 = (double)fVar1;
  func_?((float)dVar5);
  func_?(&uStack_4,(float)dVar6);
  fVar1 = (this->fields)._moonrise;
  fVar2 = (this->fields)._moonset;
  (this->fields)._sunAttitudeVector.x = (float)(undefined4)uStack_4;
  (this->fields)._sunAttitudeVector.y = (float)uStack_4._4_4_;
  (this->fields)._sunAttitudeVector.z = fStack_3;
  if (fVar1 < fVar2) {
    fVar2 = fVar2 - fVar1;
  }
  else {
    fVar2 = (_UNK_? - fVar1) + fVar2;
  }
  (this->fields)._moonDuration = fVar2;
  fVar1 = (this->fields)._moonAltitude * _UNK_?;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fStack_3 = 0.0;
  uStack_4 = 0;
  dVar5 = (double)fVar1;
  func_?(0);
  dVar6 = (double)fVar1;
  func_?((float)dVar5);
  func_?(&uStack_4,(float)dVar6);
  (this->fields)._moonAttitudeVector.x = (float)(undefined4)uStack_4;
  (this->fields)._moonAttitudeVector.y = (float)uStack_4._4_4_;
  (this->fields)._moonAttitudeVector.z = fStack_3;
  return;
}


/* Void RecalcMoonAltitudeVector() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_RecalcMoonAltitudeVector
               (DayNightCycle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._moonAltitude * _UNK_?;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fStack_2 = 0.0;
  uStack_3 = 0;
  dVar4 = (double)fVar1;
  func_?(0);
  dVar5 = (double)fVar1;
  func_?((float)dVar4);
  func_?(&uStack_3,(float)dVar5);
  (this->fields)._moonAttitudeVector.x = (float)(undefined4)uStack_3;
  (this->fields)._moonAttitudeVector.y = (float)uStack_3._4_4_;
  (this->fields)._moonAttitudeVector.z = fStack_2;
  return;
}


/* Void RecalcMoonDuration() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_RecalcMoonDuration
               (DayNightCycle *this,MethodInfo *method)

{
  fVar1 = (this->fields)._moonrise;
  fVar2 = (this->fields)._moonset;
  if (fVar2 <= fVar1) {
    (this->fields)._moonDuration = (_UNK_? - fVar1) + fVar2;
    return;
  }
  (this->fields)._moonDuration = fVar2 - fVar1;
  return;
}


/* Void RecalcSunAltitudeVector() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_RecalcSunAltitudeVector
               (DayNightCycle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._sunAltitude * _UNK_?;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fStack_2 = 0.0;
  uStack_3 = 0;
  dVar4 = (double)fVar1;
  func_?(0);
  dVar5 = (double)fVar1;
  func_?((float)dVar4);
  func_?(&uStack_3,(float)dVar5);
  (this->fields)._sunAttitudeVector.x = (float)(undefined4)uStack_3;
  (this->fields)._sunAttitudeVector.y = (float)uStack_3._4_4_;
  (this->fields)._sunAttitudeVector.z = fStack_2;
  return;
}


/* Void RecalcSunDuration() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_RecalcSunDuration
               (DayNightCycle *this,MethodInfo *method)

{
  fVar1 = (this->fields)._sunrise;
  fVar2 = (this->fields)._sunset;
  if (fVar2 <= fVar1) {
    (this->fields)._sunDuration = (_UNK_? - fVar1) + fVar2;
    return;
  }
  (this->fields)._sunDuration = fVar2 - fVar1;
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_Reset(DayNightCycle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).useServerTime == 0) {
    initialTime = (this->fields).cycleStartTime;
    cycleLength = (this->fields).cycleLength;
    this_00 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
    ThemeTimers::Timer::Timer_1__ctor(this_00,initialTime,cycleLength,(MethodInfo *)0x0);
    (this->fields).timer = (ITimer *)this_00;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_Update
               (DayNightCycle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isPaused != 0) {
    return;
  }
  pIVar1 = (this->fields).timer;
  if (pIVar1 != (ITimer *)0x0) {
    func_?(1,TypeInfo__ThemeTimers__ITimer,pIVar1);
    pIVar1 = (this->fields).timer;
    if (pIVar1 != (ITimer *)0x0) {
      fVar2 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar1);
      DayNightCycle_Update_1(this,(float)fVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_Update_1
               (DayNightCycle *this,float timeOfDay,MethodInfo *method)

{
  pDVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields).activeColorPreset;
  if ((pDVar2 == (DayNightCycleColorPresets_Preset *)0x0) ||
     (this_01 = (SkyParamsList *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pDVar2,
                           (MethodInfo *)0x0), this_01 == (SkyParamsList *)0x0))
  goto code_?;
  pSVar3 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParamsList::
           SkyParamsList_GetParamPerTime(this_01,timeOfDay,(MethodInfo *)0x0);
  (this->fields)._CurrentSkyParam_k__BackingField = pSVar3;
  if ((pSVar3 == (SkyParam *)0x0) || (pTVar4 = (this->fields).skybox, pTVar4 == (ThemeSkybox *)0x0))
  goto code_?;
  ThemeSkybox::ThemeSkybox_set_TopColor(pTVar4,(pSVar3->fields).TopColor,(MethodInfo *)0x0);
  pSVar3 = (this->fields)._CurrentSkyParam_k__BackingField;
  if ((pSVar3 == (SkyParam *)0x0) || (pTVar4 = (this->fields).skybox, pTVar4 == (ThemeSkybox *)0x0))
  goto code_?;
  ThemeSkybox::ThemeSkybox_set_BottomColor(pTVar4,(pSVar3->fields).BottomColor,(MethodInfo *)0x0);
  this_00 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
            (this->fields).activeColorPreset;
  if ((this_00 == (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0) ||
     (this_02 = (StarsParamsList *)
                System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System
                ::Int32]::
                Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                          (this_00,(MethodInfo *)0x0), this_02 == (StarsParamsList *)0x0))
  goto code_?;
  pSVar5 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParamsList::
           StarsParamsList_GetParamPerTime(this_02,timeOfDay,(MethodInfo *)0x0);
  (this->fields)._CurrentStarsParam_k__BackingField = pSVar5;
  if ((pSVar5 == (StarsParam *)0x0) ||
     (pTVar4 = (this->fields).skybox, pTVar4 == (ThemeSkybox *)0x0)) goto code_?;
  ThemeSkybox::ThemeSkybox_set_StarsTint(pTVar4,(pSVar5->fields).TintColor,(MethodInfo *)0x0);
  fVar6 = (this->fields)._sunrise;
  if (fVar6 < timeOfDay) {
code_?:
    fVar6 = timeOfDay - fVar6;
    fVar7 = (this->fields)._sunDuration;
    if (fVar7 <= fVar6) {
      fVar6 = fVar7 - fVar6;
    }
    fVar8 = (this->fields)._sunOrbit.x;
    fVar9 = (this->fields)._sunOrbit.y;
    this = (DayNightCycle *)(fVar6 / fVar7);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      this = (DayNightCycle *)TypeInfo__UnityEngine__Mathf;
      func_?();
    }
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                       (fVar8,fVar9,(float)this,(MethodInfo *)0x0);
    fVar6 = (pDVar1->fields)._sunLongitude;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       ((Vector3 *)&stack0xffffffd4,(MethodInfo *)0x0);
    uVar11._0_4_ = pVVar10->x;
    uVar11._4_4_ = pVVar10->y;
    fVar8 = pVVar10->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    timeOfDay = (float)&stack0xffffffc0;
    axis.z = fVar8;
    axis.x = (float)(int)uVar11;
    axis.y = (float)(int)((ulonglong)uVar11 >> 0x20);
    pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)timeOfDay,fVar6 - _UNK_?,axis,(MethodInfo *)0x0);
    fVar6 = pQVar12->x;
    fVar8 = pQVar12->y;
    fVar9 = pQVar12->z;
    fVar13 = pQVar12->w;
    pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&stack0xffffffd0,fVar7,(pDVar1->fields)._sunAttitudeVector,
                        (MethodInfo *)0x0);
    lhs.y = fVar8;
    lhs.x = fVar6;
    lhs.z = fVar9;
    lhs.w = fVar13;
    pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                       ((Quaternion *)&stack0xffffffc0,lhs,*pQVar12,(MethodInfo *)0x0);
    fVar6 = pQVar12->x;
    fVar7 = pQVar12->y;
    fVar8 = pQVar12->z;
    fVar9 = pQVar12->w;
    func_?();
    func_?();
    func_?();
    func_?();
    pTVar4 = (pDVar1->fields).skybox;
    if (pTVar4 == (ThemeSkybox *)0x0) goto code_?;
    value.y = fVar7;
    value.x = fVar6;
    value.z = fVar8;
    value.w = fVar9;
    ThemeSkybox::ThemeSkybox_set_SunRotation(pTVar4,value,(MethodInfo *)0x0);
  }
  else if (timeOfDay < (this->fields)._sunset) {
    if (timeOfDay <= fVar6) {
      timeOfDay = timeOfDay + _UNK_?;
    }
    goto code_?;
  }
  pDVar2 = (pDVar1->fields).activeColorPreset;
  if ((pDVar2 == (DayNightCycleColorPresets_Preset *)0x0) ||
     (pCVar14 = (CelestialParamsList *)
                System.dll::System::Collections::Generic::
                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                ::Single,System::Object]::
                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                          ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                            *)pDVar2,(MethodInfo *)0x0), pCVar14 == (CelestialParamsList *)0x0))
  goto code_?;
  pCVar15 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParamsList::
            CelestialParamsList_GetParamPerTime(pCVar14,timeOfDay,(MethodInfo *)0x0);
  (pDVar1->fields)._CurrentSunParam_k__BackingField = pCVar15;
  if ((pCVar15 == (CelestialParam *)0x0) ||
     (pTVar4 = (pDVar1->fields).skybox, pTVar4 == (ThemeSkybox *)0x0)) goto code_?;
  ThemeSkybox::ThemeSkybox_set_SunTint(pTVar4,(pCVar15->fields).TintColor,(MethodInfo *)0x0);
  pTVar4 = (pDVar1->fields).skybox;
  if (pTVar4 == (ThemeSkybox *)0x0) goto code_?;
  pLVar16 = ThemeSkybox::ThemeSkybox_get_SunLight(pTVar4,(MethodInfo *)0x0);
  pCVar15 = (pDVar1->fields)._CurrentSunParam_k__BackingField;
  if ((pCVar15 == (CelestialParam *)0x0) || (pLVar16 == (Light *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_color
            (pLVar16,(pCVar15->fields).LightColor,(MethodInfo *)0x0);
  pTVar4 = (pDVar1->fields).skybox;
  if (pTVar4 == (ThemeSkybox *)0x0) goto code_?;
  pLVar16 = ThemeSkybox::ThemeSkybox_get_SunLight(pTVar4,(MethodInfo *)0x0);
  pCVar15 = (pDVar1->fields)._CurrentSunParam_k__BackingField;
  if ((pCVar15 == (CelestialParam *)0x0) || (pLVar16 == (Light *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
            (pLVar16,(pCVar15->fields).LightIntencity,(MethodInfo *)0x0);
  pTVar4 = (pDVar1->fields).skybox;
  if (pTVar4 == (ThemeSkybox *)0x0) goto code_?;
  pLVar17 = ThemeSkybox::ThemeSkybox_get_SunFlare(pTVar4,(MethodInfo *)0x0);
  pTVar4 = (pDVar1->fields).skybox;
  if ((pTVar4 == (ThemeSkybox *)0x0) ||
     (pLVar16 = ThemeSkybox::ThemeSkybox_get_SunLight(pTVar4,(MethodInfo *)0x0),
     pLVar16 == (Light *)0x0)) goto code_?;
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_intensity
                     (pLVar16,(MethodInfo *)0x0);
  pTVar4 = (pDVar1->fields).skybox;
  if ((pTVar4 == (ThemeSkybox *)0x0) ||
     (fVar7 = ThemeSkybox::ThemeSkybox_get_SunFlareBrightness(pTVar4,(MethodInfo *)0x0),
     pLVar17 == (LensFlare *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
            (pLVar17,fVar7 * fVar6,(MethodInfo *)0x0);
  pTVar4 = (pDVar1->fields).skybox;
  if (pTVar4 == (ThemeSkybox *)0x0) goto code_?;
  pLVar17 = ThemeSkybox::ThemeSkybox_get_SunFlare(pTVar4,(MethodInfo *)0x0);
  pTVar4 = (pDVar1->fields).skybox;
  if ((pTVar4 == (ThemeSkybox *)0x0) ||
     (pLVar18 = ThemeSkybox::ThemeSkybox_get_SunFlare(pTVar4,(MethodInfo *)0x0),
     pLVar18 == (LensFlare *)0x0)) goto code_?;
  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_get_brightness
                     (pLVar18,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Approximately
                    (fVar6,0.0,(MethodInfo *)0x0);
  if (pLVar17 == (LensFlare *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)pLVar17,bVar19 == 0,(MethodInfo *)0x0);
  fVar6 = (pDVar1->fields)._moonrise;
  puVar20 = &UNK_?;
  if (fVar6 < 3.8872678e-29) {
code_?:
    fVar6 = (float)puVar20 - fVar6;
    fVar7 = (pDVar1->fields)._moonDuration;
    if (fVar7 <= fVar6) {
      fVar6 = fVar7 - fVar6;
    }
    fVar8 = (pDVar1->fields)._moonOrbit.x;
    fVar9 = (pDVar1->fields)._moonOrbit.y;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                       (fVar8,fVar9,fVar6 / fVar7,(MethodInfo *)0x0);
    fVar6 = (pDVar1->fields)._moonLongitude;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       ((Vector3 *)&stack0xffffffc4,(MethodInfo *)0x0);
    uVar21._0_4_ = pVVar10->x;
    uVar21._4_4_ = pVVar10->y;
    fVar8 = pVVar10->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    axis_00.z = fVar8;
    axis_00.x = (float)(int)uVar21;
    axis_00.y = (float)(int)((ulonglong)uVar21 >> 0x20);
    pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&stack0xffffffc0,fVar6 - _UNK_?,axis_00,
                        (MethodInfo *)0x0);
    method_00 = (MethodInfo *)pQVar12->y;
    fVar8 = pQVar12->z;
    fVar6 = (pDVar1->fields)._moonAttitudeVector.z;
    pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&stack0xffffffd0,fVar7,(pDVar1->fields)._moonAttitudeVector,
                        method_00);
    lhs_00.y = (float)method_00;
    lhs_00.x = fVar6;
    lhs_00.z = fVar8;
    lhs_00.w = pQVar12->x;
    pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                       ((Quaternion *)&stack0xffffffc0,lhs_00,*pQVar12,(MethodInfo *)0x0);
    fVar6 = pQVar12->x;
    fVar7 = pQVar12->y;
    fVar8 = pQVar12->z;
    fVar9 = pQVar12->w;
    func_?();
    func_?();
    func_?();
    func_?();
    pTVar4 = (pDVar1->fields).skybox;
    if (pTVar4 == (ThemeSkybox *)0x0) goto code_?;
    value_00.y = fVar7;
    value_00.x = fVar6;
    value_00.z = fVar8;
    value_00.w = fVar9;
    ThemeSkybox::ThemeSkybox_set_MoonRotation(pTVar4,value_00,(MethodInfo *)0x0);
  }
  else if (3.8872678e-29 < (pDVar1->fields)._moonset) {
    if (3.8872678e-29 <= fVar6) {
      puVar20 = (undefined *)(_UNK_? + 3.8872678e-29);
    }
    goto code_?;
  }
  pDVar2 = (pDVar1->fields).activeColorPreset;
  if ((pDVar2 != (DayNightCycleColorPresets_Preset *)0x0) &&
     (pCVar14 = (CelestialParamsList *)
                MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                          ((KogamaSettingNumericBase_1_System_Single_ *)pDVar2,(MethodInfo *)0x0),
     pCVar14 != (CelestialParamsList *)0x0)) {
    pCVar15 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParamsList::
              CelestialParamsList_GetParamPerTime(pCVar14,3.8872678e-29,(MethodInfo *)0x0);
    (pDVar1->fields)._CurrentMoonParam_k__BackingField = pCVar15;
    if ((pCVar15 != (CelestialParam *)0x0) &&
       (pTVar4 = (pDVar1->fields).skybox, pTVar4 != (ThemeSkybox *)0x0)) {
      ThemeSkybox::ThemeSkybox_set_MoonTint(pTVar4,(pCVar15->fields).TintColor,(MethodInfo *)0x0);
      pTVar4 = (pDVar1->fields).skybox;
      if (pTVar4 != (ThemeSkybox *)0x0) {
        pLVar16 = ThemeSkybox::ThemeSkybox_get_MoonLight(pTVar4,(MethodInfo *)0x0);
        pCVar15 = (pDVar1->fields)._CurrentMoonParam_k__BackingField;
        if ((pCVar15 != (CelestialParam *)0x0) && (pLVar16 != (Light *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_color
                    (pLVar16,(pCVar15->fields).LightColor,(MethodInfo *)0x0);
          pTVar4 = (pDVar1->fields).skybox;
          if (pTVar4 != (ThemeSkybox *)0x0) {
            pLVar16 = ThemeSkybox::ThemeSkybox_get_MoonLight(pTVar4,(MethodInfo *)0x0);
            pCVar15 = (pDVar1->fields)._CurrentMoonParam_k__BackingField;
            if ((pCVar15 != (CelestialParam *)0x0) && (pLVar16 != (Light *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                        (pLVar16,(pCVar15->fields).LightIntencity,(MethodInfo *)0x0);
              pTVar4 = (pDVar1->fields).skybox;
              if (pTVar4 != (ThemeSkybox *)0x0) {
                pLVar17 = ThemeSkybox::ThemeSkybox_get_MoonFlare(pTVar4,(MethodInfo *)0x0);
                pTVar4 = (pDVar1->fields).skybox;
                if ((pTVar4 != (ThemeSkybox *)0x0) &&
                   (pLVar16 = ThemeSkybox::ThemeSkybox_get_MoonLight(pTVar4,(MethodInfo *)0x0),
                   pLVar16 != (Light *)0x0)) {
                  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_intensity
                                     (pLVar16,(MethodInfo *)0x0);
                  pTVar4 = (pDVar1->fields).skybox;
                  if ((pTVar4 != (ThemeSkybox *)0x0) &&
                     (fVar7 = ThemeSkybox::ThemeSkybox_get_MoonFlareBrightness
                                         (pTVar4,(MethodInfo *)0x0), pLVar17 != (LensFlare *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
                              (pLVar17,fVar7 * fVar6,(MethodInfo *)0x0);
                    pTVar4 = (pDVar1->fields).skybox;
                    if (pTVar4 != (ThemeSkybox *)0x0) {
                      pLVar17 = ThemeSkybox::ThemeSkybox_get_MoonFlare(pTVar4,(MethodInfo *)0x0);
                      pTVar4 = (pDVar1->fields).skybox;
                      if ((pTVar4 != (ThemeSkybox *)0x0) &&
                         (pLVar18 = ThemeSkybox::ThemeSkybox_get_MoonFlare(pTVar4,(MethodInfo *)0x0)
                         , pLVar18 != (LensFlare *)0x0)) {
                        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::LensFlare::
                                 LensFlare_get_brightness(pLVar18,(MethodInfo *)0x0);
                        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                          func_?();
                        }
                        bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Approximately
                                          (fVar6,0.0,(MethodInfo *)0x0);
                        if (pLVar17 != (LensFlare *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                    ((Behaviour *)pLVar17,bVar19 == 0,(MethodInfo *)0x0);
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
code_?:
  func_?(0);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* DayNightCycle() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle__ctor(DayNightCycle *this,MethodInfo *method)

{
  uStack_1 = 0;
  (this->fields)._sunrise = 25.0;
  (this->fields)._sunset = 85.0;
  (this->fields)._sunAltitude = 45.0;
  func_?(&uStack_1,0xc1a00000,0x43480000,0);
  (this->fields)._sunOrbit.x = (float)uStack_1;
  (this->fields)._sunOrbit.y = uStack_1._4_4_;
  (this->fields)._moonrise = 90.0;
  (this->fields)._moonset = 22.5;
  (this->fields)._moonAltitude = 45.0;
  uStack_2 = 0;
  func_?(&uStack_2,0xc1a00000,0x43480000,0);
  (this->fields)._moonOrbit.x = (float)uStack_2;
  (this->fields)._moonOrbit.y = uStack_2._4_4_;
  (this->fields).cycleLength = 1.0;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* CelestialParam get_CurrentMoonParam() */

CelestialParam *
Assembly-CSharp.dll::DayNightCycle::DayNightCycle_get_CurrentMoonParam
          (DayNightCycle *this,MethodInfo *method)

{
  return (this->fields)._CurrentMoonParam_k__BackingField;
}


/* SkyParam get_CurrentSkyParam() */

SkyParam *
Assembly-CSharp.dll::DayNightCycle::DayNightCycle_get_CurrentSkyParam
          (DayNightCycle *this,MethodInfo *method)

{
  return (this->fields)._CurrentSkyParam_k__BackingField;
}


/* StarsParam get_CurrentStarsParam() */

StarsParam *
Assembly-CSharp.dll::DayNightCycle::DayNightCycle_get_CurrentStarsParam
          (DayNightCycle *this,MethodInfo *method)

{
  return (this->fields)._CurrentStarsParam_k__BackingField;
}


/* Single get_CurrentStepTime() */

float Assembly-CSharp.dll::DayNightCycle::DayNightCycle_get_CurrentStepTime
                (DayNightCycle *this,MethodInfo *method)

{
  return 0.0;
}


/* CelestialParam get_CurrentSunParam() */

CelestialParam *
Assembly-CSharp.dll::DayNightCycle::DayNightCycle_get_CurrentSunParam
          (DayNightCycle *this,MethodInfo *method)

{
  return (this->fields)._CurrentSunParam_k__BackingField;
}


/* Single get_TimeOfDay() */

float Assembly-CSharp.dll::DayNightCycle::DayNightCycle_get_TimeOfDay
                (DayNightCycle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).timer;
  if (pIVar1 != (ITimer *)0x0) {
    fVar2 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar1);
    return (float)fVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  fVar2 = (float10)(*pcVar3)();
  return (float)fVar2;
}


/* CelestialParamsList get__moonParamsList() */

CelestialParamsList *
Assembly-CSharp.dll::DayNightCycle::DayNightCycle_get__moonParamsList
          (DayNightCycle *this,MethodInfo *method)

{
  pDVar1 = (this->fields).activeColorPreset;
  if (pDVar1 != (DayNightCycleColorPresets_Preset *)0x0) {
    return (pDVar1->fields).moonParamsList;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pCVar3 = (CelestialParamsList *)(*pcVar2)();
  return pCVar3;
}


/* SkyParamsList get__skyParamsList() */

SkyParamsList *
Assembly-CSharp.dll::DayNightCycle::DayNightCycle_get__skyParamsList
          (DayNightCycle *this,MethodInfo *method)

{
  pDVar1 = (this->fields).activeColorPreset;
  if (pDVar1 != (DayNightCycleColorPresets_Preset *)0x0) {
    return (pDVar1->fields).skyParamList;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pSVar3 = (SkyParamsList *)(*pcVar2)();
  return pSVar3;
}


/* StarsParamsList get__starsParamsList() */

StarsParamsList *
Assembly-CSharp.dll::DayNightCycle::DayNightCycle_get__starsParamsList
          (DayNightCycle *this,MethodInfo *method)

{
  pDVar1 = (this->fields).activeColorPreset;
  if (pDVar1 != (DayNightCycleColorPresets_Preset *)0x0) {
    return (pDVar1->fields).starsParamList;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pSVar3 = (StarsParamsList *)(*pcVar2)();
  return pSVar3;
}


/* CelestialParamsList get__sunParamsList() */

CelestialParamsList *
Assembly-CSharp.dll::DayNightCycle::DayNightCycle_get__sunParamsList
          (DayNightCycle *this,MethodInfo *method)

{
  pDVar1 = (this->fields).activeColorPreset;
  if (pDVar1 != (DayNightCycleColorPresets_Preset *)0x0) {
    return (pDVar1->fields).sunParamsList;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pCVar3 = (CelestialParamsList *)(*pcVar2)();
  return pCVar3;
}


/* Void set_ColorPreset(Int32) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_ColorPreset
               (DayNightCycle *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).colorPresets;
  if (this_00 != (DayNightCycleColorPresets *)0x0) {
    pDVar1 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                       (this_00,value,(MethodInfo *)0x0);
    (this->fields).activeColorPreset = pDVar1;
    if ((this->fields).initialized != 0) {
      if ((this->fields).timer == (ITimer *)0x0) goto code_?;
      fVar2 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer);
      DayNightCycle_Update_1(this,(float)fVar2,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_CurrentMoonParam(CelestialParam) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_CurrentMoonParam
               (DayNightCycle *this,CelestialParam *value,MethodInfo *method)

{
  (this->fields)._CurrentMoonParam_k__BackingField = value;
  return;
}


/* Void set_CurrentSkyParam(SkyParam) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_CurrentSkyParam
               (DayNightCycle *this,SkyParam *value,MethodInfo *method)

{
  (this->fields)._CurrentSkyParam_k__BackingField = value;
  return;
}


/* Void set_CurrentStarsParam(StarsParam) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_CurrentStarsParam
               (DayNightCycle *this,StarsParam *value,MethodInfo *method)

{
  (this->fields)._CurrentStarsParam_k__BackingField = value;
  return;
}


/* Void set_CurrentSunParam(CelestialParam) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_CurrentSunParam
               (DayNightCycle *this,CelestialParam *value,MethodInfo *method)

{
  (this->fields)._CurrentSunParam_k__BackingField = value;
  return;
}


/* Void set_CycleLength(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_CycleLength
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).cycleLength = value;
  if ((this->fields).initialized == 0) {
    return;
  }
  pIVar1 = (this->fields).timer;
  if (pIVar1 != (ITimer *)0x0) {
    fVar2 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar1);
    cycleLength = (this->fields).cycleLength;
    this_00 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
    ThemeTimers::Timer::Timer_1__ctor(this_00,(float)fVar2,cycleLength,(MethodInfo *)0x0);
    (this->fields).timer = (ITimer *)this_00;
    if (this_00 != (Timer_1 *)0x0) {
      fVar2 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,this_00);
      DayNightCycle_Update_1(this,(float)fVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_InitialTimeOfDay(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_InitialTimeOfDay
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?();
  (this->fields).cycleStartTime = (float)fVar1;
  if ((this->fields).initialized != 0) {
    cycleLength = (this->fields).cycleLength;
    this_00 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
    ThemeTimers::Timer::Timer_1__ctor(this_00,(float)fVar1,cycleLength,(MethodInfo *)0x0);
    (this->fields).timer = (ITimer *)this_00;
    if (this_00 == (Timer_1 *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar1 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer);
    DayNightCycle_Update_1(this,(float)fVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_MoonAltitude(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_MoonAltitude
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._moonAltitude = value;
  DayNightCycle_RecalcMoonAltitudeVector(this,(MethodInfo *)0x0);
  if ((this->fields).initialized != 0) {
    pIVar1 = (this->fields).timer;
    if (pIVar1 == (ITimer *)0x0) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar3 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar1);
    DayNightCycle_Update_1(this,(float)fVar3,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_MoonLongitude(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_MoonLongitude
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._moonLongitude = value;
  if ((this->fields).initialized != 0) {
    pIVar1 = (this->fields).timer;
    if (pIVar1 == (ITimer *)0x0) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar3 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar1);
    DayNightCycle_Update_1(this,(float)fVar3,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_MoonriseTime(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_MoonriseTime
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?();
  fVar2 = (float)fVar1;
  fVar3 = (this->fields)._moonset;
  (this->fields)._moonrise = fVar2;
  if (fVar2 < fVar3) {
    fVar3 = fVar3 - fVar2;
  }
  else {
    fVar3 = (_UNK_? - fVar2) + fVar3;
  }
  (this->fields)._moonDuration = fVar3;
  if ((this->fields).initialized != 0) {
    pIVar4 = (this->fields).timer;
    if (pIVar4 == (ITimer *)0x0) {
      func_?(0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar1 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar4);
    DayNightCycle_Update_1(this,(float)fVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_MoonsetTime(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_MoonsetTime
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?();
  fVar2 = (float)fVar1;
  fVar3 = (this->fields)._moonrise;
  (this->fields)._moonset = fVar2;
  if (fVar3 < fVar2) {
    fVar2 = fVar2 - fVar3;
  }
  else {
    fVar2 = (_UNK_? - fVar3) + fVar2;
  }
  (this->fields)._moonDuration = fVar2;
  if ((this->fields).initialized != 0) {
    pIVar4 = (this->fields).timer;
    if (pIVar4 == (ITimer *)0x0) {
      func_?(0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar1 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar4);
    DayNightCycle_Update_1(this,(float)fVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_SunAltitude(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_SunAltitude
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._sunAltitude = value;
  DayNightCycle_RecalcSunAltitudeVector(this,(MethodInfo *)0x0);
  if ((this->fields).initialized != 0) {
    pIVar1 = (this->fields).timer;
    if (pIVar1 == (ITimer *)0x0) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar3 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar1);
    DayNightCycle_Update_1(this,(float)fVar3,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_SunLongitude(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_SunLongitude
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._sunLongitude = value;
  if ((this->fields).initialized != 0) {
    pIVar1 = (this->fields).timer;
    if (pIVar1 == (ITimer *)0x0) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar3 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar1);
    DayNightCycle_Update_1(this,(float)fVar3,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_SunriseTime(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_SunriseTime
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?();
  fVar2 = (float)fVar1;
  fVar3 = (this->fields)._sunset;
  (this->fields)._sunrise = fVar2;
  if (fVar2 < fVar3) {
    fVar3 = fVar3 - fVar2;
  }
  else {
    fVar3 = (_UNK_? - fVar2) + fVar3;
  }
  (this->fields)._sunDuration = fVar3;
  if ((this->fields).initialized != 0) {
    pIVar4 = (this->fields).timer;
    if (pIVar4 == (ITimer *)0x0) {
      func_?(0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar1 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar4);
    DayNightCycle_Update_1(this,(float)fVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_SunsetTime(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_SunsetTime
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?();
  fVar2 = (float)fVar1;
  fVar3 = (this->fields)._sunrise;
  (this->fields)._sunset = fVar2;
  if (fVar3 < fVar2) {
    fVar2 = fVar2 - fVar3;
  }
  else {
    fVar2 = (_UNK_? - fVar3) + fVar2;
  }
  (this->fields)._sunDuration = fVar2;
  if ((this->fields).initialized != 0) {
    pIVar4 = (this->fields).timer;
    if (pIVar4 == (ITimer *)0x0) {
      func_?(0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar1 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar4);
    DayNightCycle_Update_1(this,(float)fVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_TimeOfDay(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_TimeOfDay
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cycleLength = (this->fields).cycleLength;
  this_00 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
  ThemeTimers::Timer::Timer_1__ctor(this_00,value,cycleLength,(MethodInfo *)0x0);
  (this->fields).timer = (ITimer *)this_00;
  if ((this->fields).initialized != 0) {
    if (this_00 == (Timer_1 *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fVar2 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer);
    DayNightCycle_Update_1(this,(float)fVar2,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_UseServerTime(Boolean) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_UseServerTime
               (DayNightCycle *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).useServerTime = value;
  if (value == 0) {
    initialTime = (this->fields).cycleStartTime;
    cycleLength = (this->fields).cycleLength;
    this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
              func_?(TypeInfo__ThemeTimers__Timer);
    ThemeTimers::Timer::Timer_1__ctor((Timer_1 *)this_00,initialTime,cycleLength,(MethodInfo *)0x0);
  }
  else {
    this_00 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
              func_?(TypeInfo__ThemeTimers__SystemTimer);
    WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_00,(MethodInfo *)0x0);
  }
  (this->fields).timer = (ITimer *)this_00;
  if ((this->fields).initialized != 0) {
    if (this_00 == (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fVar2 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer);
    DayNightCycle_Update_1(this,(float)fVar2,(MethodInfo *)0x0);
  }
  return;
}

