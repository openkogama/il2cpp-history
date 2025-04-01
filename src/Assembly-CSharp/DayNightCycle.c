
/* Void Initialize() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_Initialize
               (DayNightCycle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ThemeTimers__SystemTimer);
    func_?(&TypeInfo__ThemeTimers__Timer);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._sunrise;
  fVar2 = (this->fields)._sunset;
  if (fVar2 <= fVar1) {
    fVar2 = fVar2 + (_UNK_? - fVar1);
  }
  else {
    fVar2 = fVar2 - fVar1;
  }
  (this->fields)._sunDuration = fVar2;
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
  ppDVar6 = &(this->fields).activeColorPreset;
  (this->fields)._moonAttitudeVector.x = (float)dVar3;
  (this->fields)._moonAttitudeVector.y = (float)dVar4;
  (this->fields)._moonAttitudeVector.z = 0.0;
  if (pDVar5 == (DayNightCycleColorPresets_Preset *)0x0) {
    this_00 = (this->fields).colorPresets;
    if (this_00 == (DayNightCycleColorPresets *)0x0) {
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pDVar5 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                       (this_00,0,(MethodInfo *)0x0);
    *ppDVar6 = pDVar5;
    func_?(ppDVar6,pDVar5);
  }
  if ((this->fields).useServerTime == 0) {
    fVar1 = (this->fields).cycleLength;
    this_01 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
    method_00 = (MethodInfo *)0x0;
    fVar8 = (float10)func_?();
    ThemeTimers::Timer::Timer_1__ctor(this_01,(float)fVar8,fVar1,method_00);
  }
  else {
    this_01 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__SystemTimer);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor
              ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_01,(MethodInfo *)0x0);
  }
  ppIVar9 = &(this->fields).timer;
  *ppIVar9 = (ITimer *)this_01;
  func_?(ppIVar9,this_01);
  (this->fields).initialized = 1;
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_OnValidate
               (DayNightCycle *this,MethodInfo *method)

{
  fVar1 = (this->fields)._sunrise;
  fVar2 = (this->fields)._sunset;
  if (fVar2 <= fVar1) {
    fVar2 = fVar2 + (_UNK_? - fVar1);
  }
  else {
    fVar2 = fVar2 - fVar1;
  }
  (this->fields)._sunDuration = fVar2;
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
  fVar1 = (this->fields)._moonrise;
  fVar2 = (this->fields)._moonset;
  if (fVar1 < fVar2) {
    (this->fields)._moonDuration = fVar2 - fVar1;
    return;
  }
  (this->fields)._moonDuration = (_UNK_? - fVar1) + fVar2;
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
  fVar1 = (this->fields)._sunrise;
  fVar2 = (this->fields)._sunset;
  if (fVar1 < fVar2) {
    (this->fields)._sunDuration = fVar2 - fVar1;
    return;
  }
  (this->fields)._sunDuration = (_UNK_? - fVar1) + fVar2;
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
    ppIVar1 = &(this->fields).timer;
    *ppIVar1 = (ITimer *)this_00;
    func_?(ppIVar1,this_00);
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
  if ((pDVar1 == (DayNightCycleColorPresets_Preset *)0x0) ||
     (this_00 = (pDVar1->fields).skyParamList, this_00 == (SkyParamsList *)0x0))
  goto code_?;
  pSVar2 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParamsList::
            SkyParamsList_GetParamPerTime(this_00,timeOfDay,(MethodInfo *)0x0);
  ppSVar3 = &(this->fields)._CurrentSkyParam_k__BackingField;
  *ppSVar3 = pSVar2;
  func_?();
  pSVar2 = *ppSVar3;
  if (pSVar2 == (SkyParam *)0x0) goto code_?;
  pTStack_4 = (ThemeSkybox *)(pSVar2->fields).TopColor.r;
  fStack_5 = (pSVar2->fields).TopColor.g;
  fStack_6 = (pSVar2->fields).TopColor.b;
  pTStack_7 = (ThemeSkybox *)(pSVar2->fields).TopColor.a;
  pTStack_8 = (this->fields).skybox;
  if (pTStack_8 == (ThemeSkybox *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar9 = (pTStack_8->fields).skyboxMaterial;
  (pTStack_8->fields)._topColor.r = (float)pTStack_4;
  (pTStack_8->fields)._topColor.g = fStack_5;
  (pTStack_8->fields)._topColor.b = fStack_6;
  (pTStack_8->fields)._topColor.a = (float)pTStack_7;
  if (pMVar9 == (Material *)0x0) goto code_?;
  value.y = fStack_5;
  value.x = (float)pTStack_4;
  value.z = fStack_6;
  value.w = (float)pTStack_7;
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
            (pMVar9,StringLiteral__TopColor,value,(MethodInfo *)0x0);
  if ((*ppSVar3 == (SkyParam *)0x0) ||
     (pTVar10 = (this->fields).skybox, pTVar10 == (ThemeSkybox *)0x0)) goto code_?;
  ThemeSkybox::ThemeSkybox_set_BottomColor
            (pTVar10,((*ppSVar3)->fields).BottomColor,(MethodInfo *)0x0);
  pDVar1 = (this->fields).activeColorPreset;
  if ((pDVar1 == (DayNightCycleColorPresets_Preset *)0x0) ||
     (this_01 = (pDVar1->fields).starsParamList, this_01 == (StarsParamsList *)0x0))
  goto code_?;
  pSVar11 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParamsList::
            StarsParamsList_GetParamPerTime(this_01,timeOfDay,(MethodInfo *)0x0);
  ppSVar12 = &(this->fields)._CurrentStarsParam_k__BackingField;
  *ppSVar12 = pSVar11;
  func_?();
  pSVar11 = *ppSVar12;
  if (pSVar11 == (StarsParam *)0x0) goto code_?;
  pTStack_4 = (ThemeSkybox *)(pSVar11->fields).TintColor.r;
  fStack_5 = (pSVar11->fields).TintColor.g;
  fStack_6 = (pSVar11->fields).TintColor.b;
  pTStack_7 = (ThemeSkybox *)(pSVar11->fields).TintColor.a;
  pTVar10 = (this->fields).skybox;
  if (pTVar10 == (ThemeSkybox *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar9 = (pTVar10->fields).skyboxMaterial;
  (pTVar10->fields)._starsTint.r = (float)pTStack_4;
  (pTVar10->fields)._starsTint.g = fStack_5;
  (pTVar10->fields)._starsTint.b = fStack_6;
  (pTVar10->fields)._starsTint.a = (float)pTStack_7;
  if (pMVar9 == (Material *)0x0) goto code_?;
  value_00.y = fStack_5;
  value_00.x = (float)pTStack_4;
  value_00.z = fStack_6;
  value_00.w = (float)pTStack_7;
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
            (pMVar9,StringLiteral__StarsTint,value_00,(MethodInfo *)0x0);
  fVar13 = (this->fields)._sunrise;
  fVar14 = timeOfDay;
  if (fVar13 < timeOfDay) {
code_?:
    fVar14 = fVar14 - fVar13;
    fVar13 = (this->fields)._sunDuration;
    if (fVar13 <= fVar14) {
      fVar14 = fVar13 - fVar14;
    }
    fVar14 = fVar14 / fVar13;
    fVar13 = (this->fields)._sunOrbit.x;
    if (fVar14 < 0.0) {
      fVar14 = 0.0;
    }
    else if (_UNK_? < fVar14) {
      fVar14 = _UNK_?;
    }
    pTStack_8 = (ThemeSkybox *)(this->fields)._sunLongitude;
    pTStack_15 = (ThemeSkybox *)(((this->fields)._sunOrbit.y - fVar13) * fVar14 + fVar13);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        (&QStack_17,(float)pTStack_8 - _UNK_?,
                         TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
    pTStack_18 = (ThemeSkybox *)pQVar16->x;
    fStack_19 = pQVar16->y;
    fStack_20 = pQVar16->z;
    pTStack_21 = (ThemeSkybox *)pQVar16->w;
    pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)&puStack_22,(float)pTStack_15,
                         (this->fields)._sunAttitudeVector,(MethodInfo *)0x0);
    fVar13 = pQVar16->y;
    fVar14 = pQVar16->z;
    fVar23 = pQVar16->w;
    QStack_17.x = (float)pTStack_21;
    QStack_17.y = (float)pTStack_21;
    QStack_17.z = (float)pTStack_21;
    QStack_17.w = (float)pTStack_21;
    pTStack_4 = (ThemeSkybox *)
                 ((fVar23 * (float)pTStack_18 + pQVar16->x * (float)pTStack_21 + fVar14 * fStack_19)
                 - fVar13 * fStack_20);
    fStack_5 = (fStack_19 * fVar23 + fVar13 * (float)pTStack_21 + fStack_20 * pQVar16->x) -
                fVar14 * (float)pTStack_18;
    fStack_6 = (fStack_20 * fVar23 + fVar14 * (float)pTStack_21 + fVar13 * (float)pTStack_18) -
                fStack_19 * pQVar16->x;
    pTStack_21 = (ThemeSkybox *)
                 (((fVar23 * (float)pTStack_21 - (float)pTStack_18 * pQVar16->x) -
                  fVar13 * fStack_19) - fStack_20 * fVar14);
    pTStack_18 = pTStack_4;
    fStack_19 = fStack_5;
    fStack_20 = fStack_6;
    pTStack_7 = pTStack_21;
    pTStack_15 = pTStack_4;
    pfVar24 = (float *)func_?();
    QStack_17.x = *pfVar24;
    QStack_17.y = 0.0;
    QStack_17.z = 0.0;
    QStack_17.w = 0.0;
    iVar25 = func_?();
    pTStack_21 = (ThemeSkybox *)0x0;
    euler.y = *(float *)(iVar25 + 4) * _UNK_?;
    euler.x = QStack_17.x * _UNK_?;
    euler.z = 0.0;
    pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&puStack_22,euler,(MethodInfo *)0x0);
    pTVar10 = (this->fields).skybox;
    QStack_17.x = pQVar16->x;
    QStack_17.y = pQVar16->y;
    QStack_17.z = pQVar16->z;
    QStack_17.w = pQVar16->w;
    if (pTVar10 == (ThemeSkybox *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pFVar26 = (pTVar10->fields)._sun;
    if ((pFVar26 == (FlareLight *)0x0) ||
       (pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pFVar26,(MethodInfo *)0x0), pTVar27 == (Transform *)0x0))
    goto code_?;
    value_03.y = QStack_17.y;
    value_03.x = QStack_17.x;
    value_03.z = QStack_17.z;
    value_03.w = QStack_17.w;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar27,value_03,(MethodInfo *)0x0);
    pTStack_15 = (ThemeSkybox *)(pTVar10->fields).skyboxMaterial;
    pFVar26 = (pTVar10->fields)._sun;
    if ((pFVar26 == (FlareLight *)0x0) ||
       ((pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pFVar26,(MethodInfo *)0x0), pTVar27 == (Transform *)0x0 ||
        (pMVar28 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                   Transform_get_worldToLocalMatrix
                             ((Matrix4x4 *)&stack0xffffff48,pTVar27,(MethodInfo *)0x0),
        pTStack_15 == (ThemeSkybox *)0x0)))) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
              ((Material *)pTStack_15,StringLiteral_sunMatrix,*pMVar28,(MethodInfo *)0x0);
  }
  else if (timeOfDay < (this->fields)._sunset) {
    if (timeOfDay <= fVar13) {
      fVar14 = timeOfDay + _UNK_?;
    }
    goto code_?;
  }
  pDVar1 = (this->fields).activeColorPreset;
  if ((pDVar1 == (DayNightCycleColorPresets_Preset *)0x0) ||
     (pCVar29 = (pDVar1->fields).sunParamsList, pCVar29 == (CelestialParamsList *)0x0))
  goto code_?;
  pCVar30 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParamsList::
            CelestialParamsList_GetParamPerTime(pCVar29,timeOfDay,(MethodInfo *)0x0);
  ppCVar31 = &(this->fields)._CurrentSunParam_k__BackingField;
  *ppCVar31 = pCVar30;
  func_?();
  pCVar30 = *ppCVar31;
  if (pCVar30 == (CelestialParam *)0x0) goto code_?;
  QStack_17.x = (pCVar30->fields).TintColor.r;
  QStack_17.y = (pCVar30->fields).TintColor.g;
  QStack_17.z = (pCVar30->fields).TintColor.b;
  QStack_17.w = (pCVar30->fields).TintColor.a;
  pTStack_15 = (this->fields).skybox;
  if (pTStack_15 == (ThemeSkybox *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar9 = (pTStack_15->fields).skyboxMaterial;
  (pTStack_15->fields)._sunTint.r = QStack_17.x;
  (pTStack_15->fields)._sunTint.g = QStack_17.y;
  (pTStack_15->fields)._sunTint.b = QStack_17.z;
  (pTStack_15->fields)._sunTint.a = QStack_17.w;
  if (pMVar9 == (Material *)0x0) goto code_?;
  value_01.y = QStack_17.y;
  value_01.x = QStack_17.x;
  value_01.z = QStack_17.z;
  value_01.w = QStack_17.w;
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
            (pMVar9,StringLiteral__SunTint,value_01,(MethodInfo *)0x0);
  pTVar10 = (this->fields).skybox;
  if ((((pTVar10 == (ThemeSkybox *)0x0) ||
       (pFVar26 = (pTVar10->fields)._sun, pFVar26 == (FlareLight *)0x0)) ||
      (*ppCVar31 == (CelestialParam *)0x0)) ||
     (pLVar32 = (pFVar26->fields).light, pLVar32 == (Light *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_color
            (pLVar32,((*ppCVar31)->fields).LightColor,(MethodInfo *)0x0);
  pTVar10 = (this->fields).skybox;
  if (((pTVar10 == (ThemeSkybox *)0x0) ||
      (pFVar26 = (pTVar10->fields)._sun, pFVar26 == (FlareLight *)0x0)) ||
     ((*ppCVar31 == (CelestialParam *)0x0 ||
      (pLVar32 = (pFVar26->fields).light, pLVar32 == (Light *)0x0)))) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
            (pLVar32,((*ppCVar31)->fields).LightIntencity,(MethodInfo *)0x0);
  pTVar10 = (this->fields).skybox;
  if ((pTVar10 == (ThemeSkybox *)0x0) ||
     (pFVar26 = (pTVar10->fields)._sun, pFVar26 == (FlareLight *)0x0)) goto code_?;
  pLVar32 = (pFVar26->fields).light;
  pLVar33 = (pFVar26->fields).lensFlare;
  if (pLVar32 == (Light *)0x0) goto code_?;
  pTStack_15 = (ThemeSkybox *)
               UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_intensity
                         (pLVar32,(MethodInfo *)0x0);
  pTVar10 = (this->fields).skybox;
  if ((pTVar10 == (ThemeSkybox *)0x0) || (pLVar33 == (LensFlare *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
            (pLVar33,(float)pTStack_15 * (pTVar10->fields)._sunFlareBrightness,(MethodInfo *)0x0);
  pTVar10 = (this->fields).skybox;
  if ((pTVar10 == (ThemeSkybox *)0x0) ||
     ((pFVar26 = (pTVar10->fields)._sun, pFVar26 == (FlareLight *)0x0 ||
      (pLVar33 = (pFVar26->fields).lensFlare, pLVar33 == (LensFlare *)0x0)))) goto code_?;
  pTStack_15 = (ThemeSkybox *)
               UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_get_brightness
                         (pLVar33,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar13 = (float)((uint)pTStack_15 & _UNK_?);
  if ((float)((uint)pTStack_15 & _UNK_?) <= 0.0) {
    fVar13 = 0.0;
  }
  fVar23 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar14 = fVar13 * _UNK_?;
  if (fVar13 * _UNK_? <= fVar23) {
    fVar14 = fVar23;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)pLVar33,fVar14 <= (float)((uint)(0.0 - (float)pTStack_15) & _UNK_?)
             ,(MethodInfo *)0x0);
  fVar13 = (this->fields)._moonrise;
  fVar14 = timeOfDay;
  if (fVar13 < timeOfDay) {
code_?:
    fVar14 = fVar14 - fVar13;
    fVar13 = (this->fields)._moonDuration;
    if (fVar13 <= fVar14) {
      fVar14 = fVar13 - fVar14;
    }
    fVar14 = fVar14 / fVar13;
    fVar13 = (this->fields)._moonOrbit.x;
    if (fVar14 < 0.0) {
      fVar14 = 0.0;
    }
    else if (_UNK_? < fVar14) {
      fVar14 = _UNK_?;
    }
    pTStack_15 = (ThemeSkybox *)(this->fields)._moonLongitude;
    pTStack_8 = (ThemeSkybox *)(((this->fields)._moonOrbit.y - fVar13) * fVar14 + fVar13);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)&puStack_22,(float)pTStack_15 - _UNK_?,
                         TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
    pTStack_4 = (ThemeSkybox *)pQVar16->x;
    fStack_5 = pQVar16->y;
    fStack_6 = pQVar16->z;
    pTStack_7 = (ThemeSkybox *)pQVar16->w;
    pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)&puStack_22,(float)pTStack_8,
                         (this->fields)._moonAttitudeVector,(MethodInfo *)0x0);
    fVar13 = pQVar16->y;
    fVar14 = pQVar16->z;
    fStack_19 = pQVar16->w;
    QStack_17.x = (float)pTStack_7;
    QStack_17.y = (float)pTStack_7;
    QStack_17.z = (float)pTStack_7;
    QStack_17.w = (float)pTStack_7;
    pTStack_15 = (ThemeSkybox *)
                 ((fStack_19 * (float)pTStack_4 + pQVar16->x * (float)pTStack_7 +
                  fVar14 * fStack_5) - fVar13 * fStack_6);
    fVar23 = fVar14 * (float)pTStack_4;
    fVar34 = fVar13 * (float)pTStack_4;
    fVar35 = fStack_5 * pQVar16->x;
    pTStack_18 = (ThemeSkybox *)
                 (((fStack_19 * (float)pTStack_7 - (float)pTStack_4 * pQVar16->x) -
                  fVar13 * fStack_5) - fStack_6 * fVar14);
    fStack_20 = fStack_19;
    pTStack_21 = (ThemeSkybox *)fStack_19;
    pTStack_4 = pTStack_15;
    fStack_5 = (fStack_5 * fStack_19 + fVar13 * (float)pTStack_7 + fStack_6 * pQVar16->x) -
                fVar23;
    fStack_6 = (fStack_6 * fStack_19 + fVar14 * (float)pTStack_7 + fVar34) - fVar35;
    pTStack_7 = pTStack_18;
    pfVar24 = (float *)func_?();
    QStack_17.x = *pfVar24;
    QStack_17.y = 0.0;
    QStack_17.z = 0.0;
    QStack_17.w = 0.0;
    iVar25 = func_?();
    pTStack_21 = (ThemeSkybox *)0x0;
    euler_00.y = *(float *)(iVar25 + 4) * _UNK_?;
    euler_00.x = QStack_17.x * _UNK_?;
    euler_00.z = 0.0;
    pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&puStack_22,euler_00,(MethodInfo *)0x0);
    pTVar10 = (this->fields).skybox;
    QStack_17.x = pQVar16->x;
    QStack_17.y = pQVar16->y;
    QStack_17.z = pQVar16->z;
    QStack_17.w = pQVar16->w;
    if (pTVar10 == (ThemeSkybox *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pFVar26 = (pTVar10->fields)._moon;
    if ((pFVar26 == (FlareLight *)0x0) ||
       (pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pFVar26,(MethodInfo *)0x0), pTVar27 == (Transform *)0x0))
    goto code_?;
    value_04.y = QStack_17.y;
    value_04.x = QStack_17.x;
    value_04.z = QStack_17.z;
    value_04.w = QStack_17.w;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar27,value_04,(MethodInfo *)0x0);
    pTStack_15 = (ThemeSkybox *)(pTVar10->fields).skyboxMaterial;
    pFVar26 = (pTVar10->fields)._moon;
    if ((pFVar26 == (FlareLight *)0x0) ||
       ((pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pFVar26,(MethodInfo *)0x0), pTVar27 == (Transform *)0x0 ||
        (pMVar28 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                   Transform_get_worldToLocalMatrix
                             ((Matrix4x4 *)&stack0xffffff48,pTVar27,(MethodInfo *)0x0),
        pTStack_15 == (ThemeSkybox *)0x0)))) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
              ((Material *)pTStack_15,StringLiteral_moonMatrix,*pMVar28,(MethodInfo *)0x0);
  }
  else if (timeOfDay < (this->fields)._moonset) {
    if (timeOfDay <= fVar13) {
      fVar14 = timeOfDay + _UNK_?;
    }
    goto code_?;
  }
  pDVar1 = (this->fields).activeColorPreset;
  if ((pDVar1 != (DayNightCycleColorPresets_Preset *)0x0) &&
     (pCVar29 = (pDVar1->fields).moonParamsList, pCVar29 != (CelestialParamsList *)0x0)) {
    pCVar30 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParamsList::
              CelestialParamsList_GetParamPerTime(pCVar29,timeOfDay,(MethodInfo *)0x0);
    ppCVar31 = &(this->fields)._CurrentMoonParam_k__BackingField;
    *ppCVar31 = pCVar30;
    func_?();
    pCVar30 = *ppCVar31;
    if (pCVar30 != (CelestialParam *)0x0) {
      QStack_17.x = (pCVar30->fields).TintColor.r;
      QStack_17.y = (pCVar30->fields).TintColor.g;
      QStack_17.z = (pCVar30->fields).TintColor.b;
      QStack_17.w = (pCVar30->fields).TintColor.a;
      pTStack_15 = (this->fields).skybox;
      if (pTStack_15 != (ThemeSkybox *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar9 = (pTStack_15->fields).skyboxMaterial;
        (pTStack_15->fields)._moonTint.r = QStack_17.x;
        (pTStack_15->fields)._moonTint.g = QStack_17.y;
        (pTStack_15->fields)._moonTint.b = QStack_17.z;
        (pTStack_15->fields)._moonTint.a = QStack_17.w;
        if (pMVar9 != (Material *)0x0) {
          value_02.y = QStack_17.y;
          value_02.x = QStack_17.x;
          value_02.z = QStack_17.z;
          value_02.w = QStack_17.w;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (pMVar9,StringLiteral__MoonTint,value_02,(MethodInfo *)0x0);
          pTVar10 = (this->fields).skybox;
          if ((((pTVar10 != (ThemeSkybox *)0x0) &&
               (pFVar26 = (pTVar10->fields)._moon, pFVar26 != (FlareLight *)0x0)) &&
              (*ppCVar31 != (CelestialParam *)0x0)) &&
             (pLVar32 = (pFVar26->fields).light, pLVar32 != (Light *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_color
                      (pLVar32,((*ppCVar31)->fields).LightColor,(MethodInfo *)0x0);
            pTVar10 = (this->fields).skybox;
            if (((pTVar10 != (ThemeSkybox *)0x0) &&
                (pFVar26 = (pTVar10->fields)._moon, pFVar26 != (FlareLight *)0x0)) &&
               ((*ppCVar31 != (CelestialParam *)0x0 &&
                (pLVar32 = (pFVar26->fields).light, pLVar32 != (Light *)0x0)))) {
              UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                        (pLVar32,((*ppCVar31)->fields).LightIntencity,(MethodInfo *)0x0);
              pTVar10 = (this->fields).skybox;
              if ((pTVar10 != (ThemeSkybox *)0x0) &&
                 (pFVar26 = (pTVar10->fields)._moon, pFVar26 != (FlareLight *)0x0)) {
                pLVar32 = (pFVar26->fields).light;
                pLVar33 = (pFVar26->fields).lensFlare;
                if (pLVar32 != (Light *)0x0) {
                  pTStack_15 = (ThemeSkybox *)
                               UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_intensity
                                         (pLVar32,(MethodInfo *)0x0);
                  pTVar10 = (this->fields).skybox;
                  if ((pTVar10 != (ThemeSkybox *)0x0) && (pLVar33 != (LensFlare *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
                              (pLVar33,(float)pTStack_15 * (pTVar10->fields)._moonFlareBrightness,
                               (MethodInfo *)0x0);
                    pTVar10 = (this->fields).skybox;
                    if ((pTVar10 != (ThemeSkybox *)0x0) &&
                       ((pFVar26 = (pTVar10->fields)._moon, pFVar26 != (FlareLight *)0x0 &&
                        (pLVar33 = (pFVar26->fields).lensFlare, pLVar33 != (LensFlare *)0x0)))) {
                      pTStack_15 = (ThemeSkybox *)
                                   UnityEngine.CoreModule.dll::UnityEngine::LensFlare::
                                   LensFlare_get_brightness(pLVar33,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      fVar13 = (float)((uint)pTStack_15 & _UNK_?);
                      if ((float)((uint)pTStack_15 & _UNK_?) <= 0.0) {
                        fVar13 = 0.0;
                      }
                      fVar23 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
                      fVar14 = fVar13 * _UNK_?;
                      if (fVar13 * _UNK_? <= fVar23) {
                        fVar14 = fVar23;
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                ((Behaviour *)pLVar33,
                                 fVar14 <= (float)((uint)(0.0 - (float)pTStack_15) & _UNK_?),
                                 (MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
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
    ppDVar2 = &(this->fields).activeColorPreset;
    *ppDVar2 = pDVar1;
    func_?(ppDVar2,pDVar1);
    if ((this->fields).initialized != 0) {
      pIVar3 = (this->fields).timer;
      if (pIVar3 == (ITimer *)0x0) goto code_?;
      fVar4 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar3);
      DayNightCycle_Update_1(this,(float)fVar4,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  ppIVar2 = &(this->fields).timer;
  if (pIVar1 != (ITimer *)0x0) {
    fVar3 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar1);
    cycleLength = (this->fields).cycleLength;
    this_00 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
    ThemeTimers::Timer::Timer_1__ctor(this_00,(float)fVar3,cycleLength,(MethodInfo *)0x0);
    *ppIVar2 = (ITimer *)this_00;
    func_?(ppIVar2,this_00);
    if (*ppIVar2 != (ITimer *)0x0) {
      fVar3 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,*ppIVar2);
      DayNightCycle_Update_1(this,(float)fVar3,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    ppIVar2 = &(this->fields).timer;
    *ppIVar2 = (ITimer *)this_00;
    func_?(ppIVar2,this_00);
    if (*ppIVar2 == (ITimer *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar1 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,*ppIVar2);
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
  ppIVar1 = &(this->fields).timer;
  *ppIVar1 = (ITimer *)this_00;
  func_?(ppIVar1,this_00);
  if ((this->fields).initialized != 0) {
    if (*ppIVar1 == (ITimer *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar3 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,*ppIVar1);
    DayNightCycle_Update_1(this,(float)fVar3,(MethodInfo *)0x0);
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
  ppIVar1 = &(this->fields).timer;
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
  *ppIVar1 = (ITimer *)this_00;
  func_?(ppIVar1,this_00);
  if ((this->fields).initialized != 0) {
    if (*ppIVar1 == (ITimer *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar3 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,*ppIVar1);
    DayNightCycle_Update_1(this,(float)fVar3,(MethodInfo *)0x0);
  }
  return;
}

