
/* Void Initialize() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_Initialize
               (DayNightCycle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeTimers__SystemTimer);
    func_?(&TypeInfo__ThemeTimers__Timer);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._sunset;
  fVar2 = (this->fields)._sunrise;
  if (fVar1 <= fVar2) {
    fVar1 = fVar1 + (_UNK_? - fVar2);
  }
  else {
    fVar1 = fVar1 - fVar2;
  }
  (this->fields)._sunDuration = fVar1;
  fVar1 = (this->fields)._sunAltitude * _UNK_?;
  dVar3 = (double)fVar1;
  func_?();
  dVar4 = (double)fVar1;
  func_?();
  fVar1 = (this->fields)._moonrise;
  (this->fields)._sunAttitudeVector.x = (float)dVar3;
  (this->fields)._sunAttitudeVector.y = (float)dVar4;
  fVar2 = (this->fields)._moonset;
  (this->fields)._sunAttitudeVector.z = 0.0;
  if (fVar2 <= fVar1) {
    fVar2 = fVar2 + (_UNK_? - fVar1);
  }
  else {
    fVar2 = fVar2 - fVar1;
  }
  (this->fields)._moonDuration = fVar2;
  fVar1 = (this->fields)._moonAltitude * _UNK_?;
  dVar3 = (double)fVar1;
  func_?();
  dVar4 = (double)fVar1;
  func_?();
  pDVar5 = (this->fields).activeColorPreset;
  (this->fields)._moonAttitudeVector.x = (float)dVar3;
  (this->fields)._moonAttitudeVector.y = (float)dVar4;
  (this->fields)._moonAttitudeVector.z = 0.0;
  if (pDVar5 == (DayNightCycleColorPresets_Preset *)0x0) {
    this_00 = (this->fields).colorPresets;
    if (this_00 == (DayNightCycleColorPresets *)0x0) {
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pDVar5 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                       (this_00,0,(MethodInfo *)0x0);
    (this->fields).activeColorPreset = pDVar5;
    func_?(&(this->fields).activeColorPreset,pDVar5);
  }
  if ((this->fields).useServerTime == 0) {
    fVar1 = (this->fields).cycleLength;
    this_01 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
    method_00 = (MethodInfo *)0x0;
    fVar7 = (float10)func_?();
    ThemeTimers::Timer::Timer_1__ctor(this_01,(float)fVar7,fVar1,method_00);
  }
  else {
    this_01 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__SystemTimer);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_01,(MethodInfo *)0x0);
  }
  (this->fields).timer = (ITimer *)this_01;
  func_?(&(this->fields).timer,this_01);
  (this->fields).initialized = 1;
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_OnValidate
               (DayNightCycle *this,MethodInfo *method)

{
  fVar1 = (this->fields)._sunset;
  fVar2 = (this->fields)._sunrise;
  if (fVar1 <= fVar2) {
    fVar1 = fVar1 + (_UNK_? - fVar2);
  }
  else {
    fVar1 = fVar1 - fVar2;
  }
  (this->fields)._sunDuration = fVar1;
  fVar1 = (this->fields)._sunAltitude * _UNK_?;
  dVar3 = (double)fVar1;
  func_?();
  dVar4 = (double)fVar1;
  func_?();
  fVar1 = (this->fields)._moonrise;
  fVar2 = (this->fields)._moonset;
  (this->fields)._sunAttitudeVector.x = (float)dVar3;
  (this->fields)._sunAttitudeVector.y = (float)dVar4;
  (this->fields)._sunAttitudeVector.z = 0.0;
  if (fVar2 <= fVar1) {
    fVar2 = fVar2 + (_UNK_? - fVar1);
  }
  else {
    fVar2 = fVar2 - fVar1;
  }
  (this->fields)._moonDuration = fVar2;
  fVar1 = (this->fields)._moonAltitude * _UNK_?;
  dVar3 = (double)fVar1;
  func_?();
  dVar4 = (double)fVar1;
  func_?();
  (this->fields)._moonAttitudeVector.x = (float)dVar3;
  (this->fields)._moonAttitudeVector.y = (float)dVar4;
  (this->fields)._moonAttitudeVector.z = 0.0;
  return;
}


/* Void RecalcMoonAltitudeVector() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_RecalcMoonAltitudeVector
               (DayNightCycle *this,MethodInfo *method)

{
  fVar1 = (this->fields)._moonAltitude * _UNK_?;
  dVar2 = (double)fVar1;
  func_?();
  dVar3 = (double)fVar1;
  func_?();
  (this->fields)._moonAttitudeVector.x = (float)dVar2;
  (this->fields)._moonAttitudeVector.y = (float)dVar3;
  (this->fields)._moonAttitudeVector.z = 0.0;
  return;
}


/* Void RecalcMoonDuration() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_RecalcMoonDuration
               (DayNightCycle *this,MethodInfo *method)

{
  fVar1 = (this->fields)._moonset;
  pfVar2 = &(this->fields)._moonrise;
  if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
    (this->fields)._moonDuration = fVar1 - (this->fields)._moonrise;
    return;
  }
  (this->fields)._moonDuration =
       (_UNK_? - (this->fields)._moonrise) + (this->fields)._moonset;
  return;
}


/* Void RecalcSunAltitudeVector() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_RecalcSunAltitudeVector
               (DayNightCycle *this,MethodInfo *method)

{
  fVar1 = (this->fields)._sunAltitude * _UNK_?;
  dVar2 = (double)fVar1;
  func_?();
  dVar3 = (double)fVar1;
  func_?();
  (this->fields)._sunAttitudeVector.x = (float)dVar2;
  (this->fields)._sunAttitudeVector.y = (float)dVar3;
  (this->fields)._sunAttitudeVector.z = 0.0;
  return;
}


/* Void RecalcSunDuration() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_RecalcSunDuration
               (DayNightCycle *this,MethodInfo *method)

{
  fVar1 = (this->fields)._sunset;
  pfVar2 = &(this->fields)._sunrise;
  if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
    (this->fields)._sunDuration = fVar1 - (this->fields)._sunrise;
    return;
  }
  (this->fields)._sunDuration = (_UNK_? - (this->fields)._sunrise) + (this->fields)._sunset;
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_Reset(DayNightCycle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeTimers__Timer);
    cRam_? = '\x01';
  }
  if ((this->fields).useServerTime == 0) {
    initialTime = (this->fields).cycleStartTime;
    cycleLength = (this->fields).cycleLength;
    this_00 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
    ThemeTimers::Timer::Timer_1__ctor(this_00,initialTime,cycleLength,(MethodInfo *)0x0);
    (this->fields).timer = (ITimer *)this_00;
    func_?(&(this->fields).timer,this_00);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_Update
               (DayNightCycle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeTimers__ITimer);
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
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_Update_1
               (DayNightCycle *this,float timeOfDay,MethodInfo *method)

{
  pDVar1 = (this->fields).activeColorPreset;
  if ((pDVar1 != (DayNightCycleColorPresets_Preset *)0x0) &&
     (this_00 = (pDVar1->fields).skyParamList, this_00 != (SkyParamsList *)0x0)) {
    pSVar2 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParamsList::
             SkyParamsList_GetParamPerTime(this_00,timeOfDay,(MethodInfo *)0x0);
    (this->fields)._CurrentSkyParam_k__BackingField = pSVar2;
    func_?();
    pSVar2 = (this->fields)._CurrentSkyParam_k__BackingField;
    if ((pSVar2 != (SkyParam *)0x0) &&
       (pTVar3 = (this->fields).skybox, pTVar3 != (ThemeSkybox *)0x0)) {
      ThemeSkybox::ThemeSkybox_set_TopColor(pTVar3,(pSVar2->fields).TopColor,(MethodInfo *)0x0);
      pSVar2 = (this->fields)._CurrentSkyParam_k__BackingField;
      if ((pSVar2 != (SkyParam *)0x0) &&
         (pTVar3 = (this->fields).skybox, pTVar3 != (ThemeSkybox *)0x0)) {
        ThemeSkybox::ThemeSkybox_set_BottomColor
                  (pTVar3,(pSVar2->fields).BottomColor,(MethodInfo *)0x0);
        pDVar1 = (this->fields).activeColorPreset;
        if ((pDVar1 != (DayNightCycleColorPresets_Preset *)0x0) &&
           (this_01 = (pDVar1->fields).starsParamList, this_01 != (StarsParamsList *)0x0)) {
          pSVar4 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParamsList::
                   StarsParamsList_GetParamPerTime(this_01,timeOfDay,(MethodInfo *)0x0);
          (this->fields)._CurrentStarsParam_k__BackingField = pSVar4;
          func_?();
          pSVar4 = (this->fields)._CurrentStarsParam_k__BackingField;
          if ((pSVar4 != (StarsParam *)0x0) &&
             (pTVar3 = (this->fields).skybox, pTVar3 != (ThemeSkybox *)0x0)) {
            ThemeSkybox::ThemeSkybox_set_StarsTint
                      (pTVar3,(pSVar4->fields).TintColor,(MethodInfo *)0x0);
            pfVar5 = &(this->fields)._sunrise;
            if ((*pfVar5 <= timeOfDay && timeOfDay != *pfVar5) ||
               (timeOfDay < (this->fields)._sunset)) {
              fVar6 = (this->fields)._sunrise;
              fVar7 = timeOfDay;
              if (timeOfDay <= fVar6) {
                fVar7 = timeOfDay + _UNK_?;
              }
              fVar7 = fVar7 - fVar6;
              fVar6 = (this->fields)._sunDuration;
              if (fVar6 <= fVar7) {
                fVar7 = (fVar6 - fVar7) / (this->fields)._sunDuration;
              }
              else {
                fVar7 = fVar7 / fVar6;
              }
              fStack_8 = (this->fields)._sunOrbit.x;
              if (fVar7 < 0.0) {
                fVar7 = 0.0;
              }
              else if (_UNK_? < fVar7) {
                fVar7 = _UNK_?;
              }
              fStack_9 = (this->fields)._sunLongitude;
              fStack_8 = ((this->fields)._sunOrbit.y - fStack_8) * fVar7 + fStack_8;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                                 (&QStack_11,fStack_9 - _UNK_?,
                                  TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                                  (MethodInfo *)0x0);
              fStack_12 = pQVar10->x;
              fStack_13 = pQVar10->y;
              fStack_14 = pQVar10->z;
              fStack_15 = pQVar10->w;
              pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                                 ((Quaternion *)&stack0xffffffa0,fStack_8,
                                  (this->fields)._sunAttitudeVector,(MethodInfo *)0x0);
              fVar6 = pQVar10->y;
              fVar7 = pQVar10->z;
              fVar16 = pQVar10->w;
              QStack_11.x = fStack_15;
              QStack_11.y = fStack_15;
              QStack_11.z = fStack_15;
              QStack_11.w = fStack_15;
              fStack_17 = (fVar16 * fStack_12 + pQVar10->x * fStack_15 + fVar7 * fStack_13) -
                          fVar6 * fStack_14;
              fStack_18 = (fStack_13 * fVar16 + fVar6 * fStack_15 + fStack_14 * pQVar10->x) -
                          fVar7 * fStack_12;
              fStack_19 = (fStack_14 * fVar16 + fVar7 * fStack_15 + fVar6 * fStack_12) -
                          fStack_13 * pQVar10->x;
              fStack_20 = ((fVar16 * fStack_15 - fStack_12 * pQVar10->x) - fVar6 * fStack_13) -
                          fStack_14 * fVar7;
              fStack_12 = fStack_17;
              fStack_13 = fStack_18;
              fStack_14 = fStack_19;
              fStack_15 = fStack_20;
              fStack_8 = fStack_17;
              pfVar5 = (float *)func_?();
              QStack_11.x = *pfVar5;
              QStack_11.y = 0.0;
              QStack_11.z = 0.0;
              QStack_11.w = 0.0;
              iVar21 = func_?();
              fStack_14 = 0.0;
              euler.y = *(float *)(iVar21 + 4) * _UNK_?;
              euler.x = QStack_11.x * _UNK_?;
              euler.z = 0.0;
              pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                       Quaternion_Internal_FromEulerRad
                                 ((Quaternion *)&stack0xffffffa0,euler,(MethodInfo *)0x0);
              pTVar3 = (this->fields).skybox;
              if (pTVar3 == (ThemeSkybox *)0x0) goto code_?;
              ThemeSkybox::ThemeSkybox_set_SunRotation(pTVar3,*pQVar10,(MethodInfo *)0x0);
            }
            pDVar1 = (this->fields).activeColorPreset;
            if ((pDVar1 != (DayNightCycleColorPresets_Preset *)0x0) &&
               (pCVar22 = (pDVar1->fields).sunParamsList, pCVar22 != (CelestialParamsList *)0x0)) {
              pCVar23 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParamsList::
                        CelestialParamsList_GetParamPerTime(pCVar22,timeOfDay,(MethodInfo *)0x0);
              (this->fields)._CurrentSunParam_k__BackingField = pCVar23;
              func_?();
              pCVar23 = (this->fields)._CurrentSunParam_k__BackingField;
              if ((pCVar23 != (CelestialParam *)0x0) &&
                 (pTVar3 = (this->fields).skybox, pTVar3 != (ThemeSkybox *)0x0)) {
                ThemeSkybox::ThemeSkybox_set_SunTint
                          (pTVar3,(pCVar23->fields).TintColor,(MethodInfo *)0x0);
                pTVar3 = (this->fields).skybox;
                if (pTVar3 != (ThemeSkybox *)0x0) {
                  pLVar24 = ThemeSkybox::ThemeSkybox_get_SunLight(pTVar3,(MethodInfo *)0x0);
                  pCVar23 = (this->fields)._CurrentSunParam_k__BackingField;
                  if ((pCVar23 != (CelestialParam *)0x0) && (pLVar24 != (Light *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_color
                              (pLVar24,(pCVar23->fields).LightColor,(MethodInfo *)0x0);
                    pTVar3 = (this->fields).skybox;
                    if (pTVar3 != (ThemeSkybox *)0x0) {
                      pLVar24 = ThemeSkybox::ThemeSkybox_get_SunLight(pTVar3,(MethodInfo *)0x0);
                      pCVar23 = (this->fields)._CurrentSunParam_k__BackingField;
                      if ((pCVar23 != (CelestialParam *)0x0) && (pLVar24 != (Light *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                                  (pLVar24,(pCVar23->fields).LightIntencity,(MethodInfo *)0x0);
                        pTVar3 = (this->fields).skybox;
                        if (pTVar3 != (ThemeSkybox *)0x0) {
                          pLVar25 = ThemeSkybox::ThemeSkybox_get_SunFlare(pTVar3,(MethodInfo *)0x0);
                          pTVar3 = (this->fields).skybox;
                          if (pTVar3 != (ThemeSkybox *)0x0) {
                            pLVar24 = ThemeSkybox::ThemeSkybox_get_SunLight
                                                (pTVar3,(MethodInfo *)0x0);
                            if (pLVar24 != (Light *)0x0) {
                              fStack_8 = UnityEngine.CoreModule.dll::UnityEngine::Light::
                                          Light_get_intensity(pLVar24,(MethodInfo *)0x0);
                              pTVar3 = (this->fields).skybox;
                              if ((pTVar3 != (ThemeSkybox *)0x0) && (pLVar25 != (LensFlare *)0x0)) {
                                UnityEngine.CoreModule.dll::UnityEngine::LensFlare::
                                LensFlare_set_brightness
                                          (pLVar25,fStack_8 * (pTVar3->fields)._sunFlareBrightness,
                                           (MethodInfo *)0x0);
                                pTVar3 = (this->fields).skybox;
                                if (pTVar3 != (ThemeSkybox *)0x0) {
                                  pLVar25 = ThemeSkybox::ThemeSkybox_get_SunFlare
                                                      (pTVar3,(MethodInfo *)0x0);
                                  pTVar3 = (this->fields).skybox;
                                  if (pTVar3 != (ThemeSkybox *)0x0) {
                                    pLVar26 = ThemeSkybox::ThemeSkybox_get_SunFlare
                                                        (pTVar3,(MethodInfo *)0x0);
                                    if (pLVar26 != (LensFlare *)0x0) {
                                      fStack_8 = UnityEngine.CoreModule.dll::UnityEngine::LensFlare
                                                  ::LensFlare_get_brightness
                                                            (pLVar26,(MethodInfo *)0x0);
                                      if (cRam_? == '\0') {
                                        func_?();
                                        cRam_? = '\x01';
                                      }
                                      if (pLVar25 != (LensFlare *)0x0) {
                                        fVar6 = (float)((uint)fStack_8 & _UNK_?);
                                        if ((float)((uint)fStack_8 & _UNK_?) <= 0.0) {
                                          fVar6 = 0.0;
                                        }
                                        fVar16 = TypeInfo__UnityEngine__Mathf->static_fields->
                                                 Epsilon * _UNK_?;
                                        fVar7 = fVar6 * _UNK_?;
                                        if (fVar6 * _UNK_? <= fVar16) {
                                          fVar7 = fVar16;
                                        }
                                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                        Behaviour_set_enabled
                                                  ((Behaviour *)pLVar25,
                                                   fVar7 <= (float)((uint)(0.0 - fStack_8) &
                                                                    _UNK_?),(MethodInfo *)0x0
                                                  );
                                        pfVar5 = &(this->fields)._moonrise;
                                        if ((*pfVar5 <= timeOfDay && timeOfDay != *pfVar5) ||
                                           (timeOfDay < (this->fields)._moonset)) {
                                          fVar6 = (this->fields)._moonrise;
                                          fVar7 = timeOfDay;
                                          if (timeOfDay <= fVar6) {
                                            fVar7 = timeOfDay + _UNK_?;
                                          }
                                          fVar7 = fVar7 - fVar6;
                                          fVar6 = (this->fields)._moonDuration;
                                          if (fVar6 <= fVar7) {
                                            fVar7 = (fVar6 - fVar7) /
                                                     (this->fields)._moonDuration;
                                          }
                                          else {
                                            fVar7 = fVar7 / fVar6;
                                          }
                                          fStack_9 = (this->fields)._moonOrbit.x;
                                          if (fVar7 < 0.0) {
                                            fVar7 = 0.0;
                                          }
                                          else if (_UNK_? < fVar7) {
                                            fVar7 = _UNK_?;
                                          }
                                          fStack_8 = (this->fields)._moonLongitude;
                                          fStack_9 = ((this->fields)._moonOrbit.y - fStack_9) *
                                                      fVar7 + fStack_9;
                                          if (cRam_? == '\0') {
                                            func_?();
                                            cRam_? = '\x01';
                                          }
                                          pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::
                                                   Quaternion::Quaternion_AngleAxis
                                                             ((Quaternion *)&stack0xffffffa0,
                                                              fStack_8 - _UNK_?,
                                                              TypeInfo__UnityEngine__Vector3->
                                                              static_fields->upVector,
                                                              (MethodInfo *)0x0);
                                          fStack_17 = pQVar10->x;
                                          fStack_18 = pQVar10->y;
                                          fStack_19 = pQVar10->z;
                                          fStack_20 = pQVar10->w;
                                          pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::
                                                   Quaternion::Quaternion_AngleAxis
                                                             ((Quaternion *)&stack0xffffffa0,
                                                              fStack_9,
                                                              (this->fields)._moonAttitudeVector,
                                                              (MethodInfo *)0x0);
                                          fVar6 = pQVar10->y;
                                          fVar7 = pQVar10->z;
                                          fStack_13 = pQVar10->w;
                                          QStack_11.x = fStack_20;
                                          QStack_11.y = fStack_20;
                                          QStack_11.z = fStack_20;
                                          QStack_11.w = fStack_20;
                                          fStack_8 = (fStack_13 * fStack_17 + pQVar10->x * fStack_20
                                                      + fVar7 * fStack_18) - fVar6 * fStack_19;
                                          fVar16 = fVar6 * fStack_20;
                                          fVar27 = fVar7 * fStack_17;
                                          fVar28 = fVar7 * fStack_20;
                                          fVar29 = fVar6 * fStack_17;
                                          fVar30 = fStack_18 * pQVar10->x;
                                          fStack_20 = ((fStack_13 * fStack_20 -
                                                       fStack_17 * pQVar10->x) - fVar6 * fStack_18)
                                                      - fStack_19 * fVar7;
                                          fStack_17 = fStack_8;
                                          fStack_18 = (fStack_18 * fStack_13 + fVar16 +
                                                      fStack_19 * pQVar10->x) - fVar27;
                                          fStack_19 = (fStack_19 * fStack_13 + fVar28 + fVar29) -
                                                      fVar30;
                                          fStack_12 = fStack_20;
                                          fStack_14 = fStack_13;
                                          fStack_15 = fStack_13;
                                          pfVar5 = (float *)func_?();
                                          QStack_11.x = *pfVar5;
                                          QStack_11.y = 0.0;
                                          QStack_11.z = 0.0;
                                          QStack_11.w = 0.0;
                                          iVar21 = func_?();
                                          fStack_14 = 0.0;
                                          euler_00.y = *(float *)(iVar21 + 4) * _UNK_?;
                                          euler_00.x = QStack_11.x * _UNK_?;
                                          euler_00.z = 0.0;
                                          pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::
                                                   Quaternion::Quaternion_Internal_FromEulerRad
                                                             ((Quaternion *)&stack0xffffffa0,
                                                              euler_00,(MethodInfo *)0x0);
                                          pTVar3 = (this->fields).skybox;
                                          if (pTVar3 == (ThemeSkybox *)0x0) goto code_?;
                                          ThemeSkybox::ThemeSkybox_set_MoonRotation
                                                    (pTVar3,*pQVar10,(MethodInfo *)0x0);
                                        }
                                        pDVar1 = (this->fields).activeColorPreset;
                                        if ((pDVar1 != (DayNightCycleColorPresets_Preset *)0x0) &&
                                           (pCVar22 = (pDVar1->fields).moonParamsList,
                                           pCVar22 != (CelestialParamsList *)0x0)) {
                                          pCVar23 = Borodar::FarlandSkies::CloudyCrownPro::DotParams
                                                    ::CelestialParamsList::
                                                    CelestialParamsList_GetParamPerTime
                                                              (pCVar22,timeOfDay,(MethodInfo *)0x0);
                                          (this->fields)._CurrentMoonParam_k__BackingField = pCVar23
                                          ;
                                          func_?();
                                          pCVar23 = (this->fields)._CurrentMoonParam_k__BackingField
                                          ;
                                          if ((pCVar23 != (CelestialParam *)0x0) &&
                                             (pTVar3 = (this->fields).skybox,
                                             pTVar3 != (ThemeSkybox *)0x0)) {
                                            ThemeSkybox::ThemeSkybox_set_MoonTint
                                                      (pTVar3,(pCVar23->fields).TintColor,
                                                       (MethodInfo *)0x0);
                                            pTVar3 = (this->fields).skybox;
                                            if (pTVar3 != (ThemeSkybox *)0x0) {
                                              pLVar24 = (Light *)UnityEngine.UI.dll::UnityEngine::UI
                                                                 ::Text::Text_get_fontStyle
                                                                           ((Text *)pTVar3,
                                                                            (MethodInfo *)0x0);
                                              pCVar23 = (this->fields).
                                                        _CurrentMoonParam_k__BackingField;
                                              if ((pCVar23 != (CelestialParam *)0x0) &&
                                                 (pLVar24 != (Light *)0x0)) {
                                                UnityEngine.CoreModule.dll::UnityEngine::Light::
                                                Light_set_color(pLVar24,(pCVar23->fields).LightColor
                                                                ,(MethodInfo *)0x0);
                                                pTVar3 = (this->fields).skybox;
                                                if (pTVar3 != (ThemeSkybox *)0x0) {
                                                  pLVar24 = (Light *)UnityEngine.UI.dll::UnityEngine
                                                                     ::UI::Text::Text_get_fontStyle
                                                                               ((Text *)pTVar3,
                                                                                (MethodInfo *)0x0);
                                                  pCVar23 = (this->fields).
                                                            _CurrentMoonParam_k__BackingField;
                                                  if ((pCVar23 != (CelestialParam *)0x0) &&
                                                     (pLVar24 != (Light *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::Light::
                                                    Light_set_intensity(pLVar24,(pCVar23->fields).
                                                                                LightIntencity,
                                                                        (MethodInfo *)0x0);
                                                    pTVar3 = (this->fields).skybox;
                                                    if (pTVar3 != (ThemeSkybox *)0x0) {
                                                      pLVar25 = ThemeSkybox::
                                                                ThemeSkybox_get_MoonFlare
                                                                          (pTVar3,(MethodInfo *)0x0)
                                                      ;
                                                      pTVar3 = (this->fields).skybox;
                                                      if (pTVar3 != (ThemeSkybox *)0x0) {
                                                        pLVar24 = (Light *)UnityEngine.UI.dll::
                                                                           UnityEngine::UI::Text::
                                                                           Text_get_fontStyle((Text 
                                                  *)pTVar3,(MethodInfo *)0x0);
                                                  if (pLVar24 != (Light *)0x0) {
                                                    fStack_8 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Light::
                                                                Light_get_intensity(pLVar24,(
                                                  MethodInfo *)0x0);
                                                  pTVar3 = (this->fields).skybox;
                                                  if ((pTVar3 != (ThemeSkybox *)0x0) &&
                                                     (pLVar25 != (LensFlare *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    LensFlare::LensFlare_set_brightness
                                                              (pLVar25,fStack_8 *
                                                                       (pTVar3->fields).
                                                                       _moonFlareBrightness,
                                                               (MethodInfo *)0x0);
                                                    pTVar3 = (this->fields).skybox;
                                                    if (pTVar3 != (ThemeSkybox *)0x0) {
                                                      pLVar25 = ThemeSkybox::
                                                                ThemeSkybox_get_MoonFlare
                                                                          (pTVar3,(MethodInfo *)0x0)
                                                      ;
                                                      pTVar3 = (this->fields).skybox;
                                                      if (pTVar3 != (ThemeSkybox *)0x0) {
                                                        pLVar26 = ThemeSkybox::
                                                                  ThemeSkybox_get_MoonFlare
                                                                            (pTVar3,(MethodInfo *)
                                                                                    0x0);
                                                        if (pLVar26 != (LensFlare *)0x0) {
                                                          fStack_8 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::LensFlare::
                                                                      LensFlare_get_brightness
                                                                                (pLVar26,(MethodInfo
                                                                                          *)0x0);
                                                          if (cRam_? == '\0') {
                                                            func_?();
                                                            cRam_? = '\x01';
                                                          }
                                                          if (pLVar25 != (LensFlare *)0x0) {
                                                            fVar6 = (float)((uint)fStack_8 &
                                                                            _UNK_?);
                                                            if ((float)((uint)fStack_8 &
                                                                       _UNK_?) <= 0.0) {
                                                              fVar6 = 0.0;
                                                            }
                                                            fVar16 = TypeInfo__UnityEngine__Mathf->
                                                                     static_fields->Epsilon *
                                                                     _UNK_?;
                                                            fVar7 = fVar6 * _UNK_?;
                                                            if (fVar6 * _UNK_? <= fVar16) {
                                                              fVar7 = fVar16;
                                                            }
                                                            UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Behaviour::Behaviour_set_enabled
                                                                      ((Behaviour *)pLVar25,
                                                                       fVar7 <= (float)((uint)(0.0 
                                                  - fStack_8) & _UNK_?),(MethodInfo *)0x0);
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
    }
  }
code_?:
  func_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* DayNightCycle() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle__ctor(DayNightCycle *this,MethodInfo *method)

{
  (this->fields)._sunrise = 25.0;
  (this->fields)._sunset = 85.0;
  (this->fields)._sunAltitude = 45.0;
  (this->fields)._sunOrbit.x = -20.0;
  (this->fields)._sunOrbit.y = 200.0;
  (this->fields)._moonrise = 90.0;
  (this->fields)._moonset = 22.5;
  (this->fields)._moonAltitude = 45.0;
  (this->fields)._moonOrbit.x = -20.0;
  (this->fields)._moonOrbit.y = 200.0;
  (this->fields).cycleLength = 1.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Single get_TimeOfDay() */

float Assembly-CSharp.dll::DayNightCycle::DayNightCycle_get_TimeOfDay
                (DayNightCycle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (ITimer *)&TypeInfo__ThemeTimers__ITimer;
    func_?();
    cRam_? = '\x01';
  }
  pIStack_1 = (this->fields).timer;
  if (pIStack_1 != (ITimer *)0x0) {
    pIStack_2 = TypeInfo__ThemeTimers__ITimer;
    uStack_3 = 0;
    fVar4 = (float10)func_?();
    return (float)fVar4;
  }
  pIStack_1 = (ITimer *)&stack0xfffffffc;
  uVar5 = func_?(&uStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  fVar4 = (float10)(*pcVar6)();
  return (float)fVar4;
}


/* CelestialParamsList get__moonParamsList() */

CelestialParamsList *
Assembly-CSharp.dll::DayNightCycle::DayNightCycle_get__moonParamsList
          (DayNightCycle *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pDVar2 = (this->fields).activeColorPreset;
  if (pDVar2 != (DayNightCycleColorPresets_Preset *)0x0) {
    return (pDVar2->fields).moonParamsList;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pCVar6 = (CelestialParamsList *)(*pcVar5)();
  return pCVar6;
}


/* SkyParamsList get__skyParamsList() */

SkyParamsList *
Assembly-CSharp.dll::DayNightCycle::DayNightCycle_get__skyParamsList
          (DayNightCycle *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pDVar2 = (this->fields).activeColorPreset;
  if (pDVar2 != (DayNightCycleColorPresets_Preset *)0x0) {
    return (pDVar2->fields).skyParamList;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pSVar6 = (SkyParamsList *)(*pcVar5)();
  return pSVar6;
}


/* StarsParamsList get__starsParamsList() */

StarsParamsList *
Assembly-CSharp.dll::DayNightCycle::DayNightCycle_get__starsParamsList
          (DayNightCycle *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pDVar2 = (this->fields).activeColorPreset;
  if (pDVar2 != (DayNightCycleColorPresets_Preset *)0x0) {
    return (pDVar2->fields).starsParamList;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pSVar6 = (StarsParamsList *)(*pcVar5)();
  return pSVar6;
}


/* CelestialParamsList get__sunParamsList() */

CelestialParamsList *
Assembly-CSharp.dll::DayNightCycle::DayNightCycle_get__sunParamsList
          (DayNightCycle *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pDVar2 = (this->fields).activeColorPreset;
  if (pDVar2 != (DayNightCycleColorPresets_Preset *)0x0) {
    return (pDVar2->fields).sunParamsList;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pCVar6 = (CelestialParamsList *)(*pcVar5)();
  return pCVar6;
}


/* Void set_ColorPreset(Int32) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_ColorPreset
               (DayNightCycle *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeTimers__ITimer);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).colorPresets;
  if (this_00 != (DayNightCycleColorPresets *)0x0) {
    pDVar1 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                       (this_00,value,(MethodInfo *)0x0);
    (this->fields).activeColorPreset = pDVar1;
    func_?(&(this->fields).activeColorPreset,pDVar1);
    if ((this->fields).initialized != 0) {
      pIVar2 = (this->fields).timer;
      if (pIVar2 == (ITimer *)0x0) goto code_?;
      fVar3 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar2);
      DayNightCycle_Update_1(this,(float)fVar3,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void set_CycleLength(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_CycleLength
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeTimers__ITimer);
    func_?(&TypeInfo__ThemeTimers__Timer);
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
    func_?(&(this->fields).timer,this_00);
    pIVar1 = (this->fields).timer;
    if (pIVar1 != (ITimer *)0x0) {
      fVar2 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar1);
      DayNightCycle_Update_1(this,(float)fVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_InitialTimeOfDay(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_InitialTimeOfDay
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeTimers__ITimer);
    func_?(&TypeInfo__ThemeTimers__Timer);
    cRam_? = '\x01';
  }
  fVar1 = (float10)func_?();
  (this->fields).cycleStartTime = (float)fVar1;
  if ((this->fields).initialized != 0) {
    cycleLength = (this->fields).cycleLength;
    this_00 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
    ThemeTimers::Timer::Timer_1__ctor(this_00,(float)fVar1,cycleLength,(MethodInfo *)0x0);
    (this->fields).timer = (ITimer *)this_00;
    func_?(&(this->fields).timer,this_00);
    pIVar2 = (this->fields).timer;
    if (pIVar2 == (ITimer *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar1 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar2);
    DayNightCycle_Update_1(this,(float)fVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_MoonAltitude(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_MoonAltitude
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeTimers__ITimer);
    cRam_? = '\x01';
  }
  (this->fields)._moonAltitude = value;
  fVar1 = value * _UNK_?;
  dVar2 = (double)fVar1;
  func_?();
  dVar3 = (double)fVar1;
  func_?();
  bVar4 = (this->fields).initialized;
  (this->fields)._moonAttitudeVector.x = (float)dVar2;
  (this->fields)._moonAttitudeVector.y = (float)dVar3;
  (this->fields)._moonAttitudeVector.z = 0.0;
  if (bVar4 != 0) {
    pIVar5 = (this->fields).timer;
    if (pIVar5 == (ITimer *)0x0) {
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar7 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar5);
    DayNightCycle_Update_1(this,(float)fVar7,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_MoonLongitude(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_MoonLongitude
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeTimers__ITimer);
    cRam_? = '\x01';
  }
  (this->fields)._moonLongitude = value;
  if ((this->fields).initialized != 0) {
    pIVar1 = (this->fields).timer;
    if (pIVar1 == (ITimer *)0x0) {
      func_?();
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
    func_?(&TypeInfo__ThemeTimers__ITimer);
    cRam_? = '\x01';
  }
  dVar1 = (double)value;
  fVar2 = (float10)func_?();
  fVar3 = (float)fVar2;
  fVar4 = (this->fields)._moonset;
  (this->fields)._moonrise = fVar3;
  if (fVar4 <= fVar3) {
    fVar4 = fVar4 + (_UNK_? - fVar3);
  }
  else {
    fVar4 = fVar4 - fVar3;
  }
  (this->fields)._moonDuration = fVar4;
  if ((this->fields).initialized != 0) {
    pIVar5 = (this->fields).timer;
    if (pIVar5 == (ITimer *)0x0) {
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)(dVar1);
      return;
    }
    fVar2 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar5);
    DayNightCycle_Update_1(this,(float)fVar2,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_MoonsetTime(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_MoonsetTime
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeTimers__ITimer);
    cRam_? = '\x01';
  }
  dVar1 = (double)value;
  fVar2 = (float10)func_?();
  fVar3 = (float)fVar2;
  fVar4 = (this->fields)._moonrise;
  (this->fields)._moonset = fVar3;
  if (fVar3 <= fVar4) {
    fVar3 = fVar3 + (_UNK_? - fVar4);
  }
  else {
    fVar3 = fVar3 - fVar4;
  }
  (this->fields)._moonDuration = fVar3;
  if ((this->fields).initialized != 0) {
    pIVar5 = (this->fields).timer;
    if (pIVar5 == (ITimer *)0x0) {
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)(dVar1);
      return;
    }
    fVar2 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar5);
    DayNightCycle_Update_1(this,(float)fVar2,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_SunAltitude(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_SunAltitude
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeTimers__ITimer);
    cRam_? = '\x01';
  }
  (this->fields)._sunAltitude = value;
  fVar1 = value * _UNK_?;
  dVar2 = (double)fVar1;
  func_?();
  dVar3 = (double)fVar1;
  func_?();
  bVar4 = (this->fields).initialized;
  (this->fields)._sunAttitudeVector.x = (float)dVar2;
  (this->fields)._sunAttitudeVector.y = (float)dVar3;
  (this->fields)._sunAttitudeVector.z = 0.0;
  if (bVar4 != 0) {
    pIVar5 = (this->fields).timer;
    if (pIVar5 == (ITimer *)0x0) {
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar7 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar5);
    DayNightCycle_Update_1(this,(float)fVar7,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_SunLongitude(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_SunLongitude
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeTimers__ITimer);
    cRam_? = '\x01';
  }
  (this->fields)._sunLongitude = value;
  if ((this->fields).initialized != 0) {
    pIVar1 = (this->fields).timer;
    if (pIVar1 == (ITimer *)0x0) {
      func_?();
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
    func_?(&TypeInfo__ThemeTimers__ITimer);
    cRam_? = '\x01';
  }
  dVar1 = (double)value;
  fVar2 = (float10)func_?();
  fVar3 = (float)fVar2;
  fVar4 = (this->fields)._sunset;
  (this->fields)._sunrise = fVar3;
  if (fVar4 <= fVar3) {
    fVar4 = fVar4 + (_UNK_? - fVar3);
  }
  else {
    fVar4 = fVar4 - fVar3;
  }
  (this->fields)._sunDuration = fVar4;
  if ((this->fields).initialized != 0) {
    pIVar5 = (this->fields).timer;
    if (pIVar5 == (ITimer *)0x0) {
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)(dVar1);
      return;
    }
    fVar2 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar5);
    DayNightCycle_Update_1(this,(float)fVar2,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_SunsetTime(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_SunsetTime
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeTimers__ITimer);
    cRam_? = '\x01';
  }
  dVar1 = (double)value;
  fVar2 = (float10)func_?();
  fVar3 = (float)fVar2;
  fVar4 = (this->fields)._sunrise;
  (this->fields)._sunset = fVar3;
  if (fVar3 <= fVar4) {
    fVar3 = fVar3 + (_UNK_? - fVar4);
  }
  else {
    fVar3 = fVar3 - fVar4;
  }
  (this->fields)._sunDuration = fVar3;
  if ((this->fields).initialized != 0) {
    pIVar5 = (this->fields).timer;
    if (pIVar5 == (ITimer *)0x0) {
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)(dVar1);
      return;
    }
    fVar2 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar5);
    DayNightCycle_Update_1(this,(float)fVar2,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_TimeOfDay(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_TimeOfDay
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeTimers__ITimer);
    func_?(&TypeInfo__ThemeTimers__Timer);
    cRam_? = '\x01';
  }
  cycleLength = (this->fields).cycleLength;
  this_00 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
  ThemeTimers::Timer::Timer_1__ctor(this_00,value,cycleLength,(MethodInfo *)0x0);
  (this->fields).timer = (ITimer *)this_00;
  func_?(&(this->fields).timer,this_00);
  if ((this->fields).initialized != 0) {
    if ((this->fields).timer == (ITimer *)0x0) {
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
    func_?(&TypeInfo__ThemeTimers__ITimer);
    func_?(&TypeInfo__ThemeTimers__SystemTimer);
    func_?(&TypeInfo__ThemeTimers__Timer);
    cRam_? = '\x01';
  }
  (this->fields).useServerTime = value;
  if (value == 0) {
    initialTime = (this->fields).cycleStartTime;
    cycleLength = (this->fields).cycleLength;
    this_00 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
    ThemeTimers::Timer::Timer_1__ctor(this_00,initialTime,cycleLength,(MethodInfo *)0x0);
  }
  else {
    this_00 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__SystemTimer);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_00,(MethodInfo *)0x0);
  }
  (this->fields).timer = (ITimer *)this_00;
  func_?(&(this->fields).timer);
  if ((this->fields).initialized != 0) {
    if ((this->fields).timer == (ITimer *)0x0) {
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

