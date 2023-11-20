
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
    if (pSVar2 != (SkyParam *)0x0) {
      pMStack_3 = (Material *)(pSVar2->fields).TopColor.r;
      fStack_4 = (pSVar2->fields).TopColor.g;
      fStack_5 = (pSVar2->fields).TopColor.b;
      pMStack_6 = (Material *)(pSVar2->fields).TopColor.a;
      pTVar7 = (this->fields).skybox;
      if (pTVar7 != (ThemeSkybox *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar8 = (pTVar7->fields).skyboxMaterial;
        (pTVar7->fields)._topColor.r = (float)pMStack_3;
        (pTVar7->fields)._topColor.g = fStack_4;
        (pTVar7->fields)._topColor.b = fStack_5;
        (pTVar7->fields)._topColor.a = (float)pMStack_6;
        if (pMVar8 != (Material *)0x0) {
          value.y = fStack_4;
          value.x = (float)pMStack_3;
          value.z = fStack_5;
          value.w = (float)pMStack_6;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (pMVar8,StringLiteral__TopColor,value,(MethodInfo *)0x0);
          pSVar2 = (this->fields)._CurrentSkyParam_k__BackingField;
          if ((pSVar2 != (SkyParam *)0x0) &&
             (pTVar7 = (this->fields).skybox, pTVar7 != (ThemeSkybox *)0x0)) {
            ThemeSkybox::ThemeSkybox_set_BottomColor
                      (pTVar7,(pSVar2->fields).BottomColor,(MethodInfo *)0x0);
            pDVar1 = (this->fields).activeColorPreset;
            if ((pDVar1 != (DayNightCycleColorPresets_Preset *)0x0) &&
               (this_01 = (pDVar1->fields).starsParamList, this_01 != (StarsParamsList *)0x0)) {
              pSVar9 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParamsList::
                        StarsParamsList_GetParamPerTime(this_01,timeOfDay,(MethodInfo *)0x0);
              (this->fields)._CurrentStarsParam_k__BackingField = pSVar9;
              func_?();
              pSVar9 = (this->fields)._CurrentStarsParam_k__BackingField;
              if (pSVar9 != (StarsParam *)0x0) {
                pMStack_3 = (Material *)(pSVar9->fields).TintColor.r;
                fStack_4 = (pSVar9->fields).TintColor.g;
                fStack_5 = (pSVar9->fields).TintColor.b;
                pMStack_6 = (Material *)(pSVar9->fields).TintColor.a;
                pTVar7 = (this->fields).skybox;
                if (pTVar7 != (ThemeSkybox *)0x0) {
                  if (cRam_? == '\0') {
                    func_?();
                    cRam_? = '\x01';
                  }
                  pMVar8 = (pTVar7->fields).skyboxMaterial;
                  (pTVar7->fields)._starsTint.r = (float)pMStack_3;
                  (pTVar7->fields)._starsTint.g = fStack_4;
                  (pTVar7->fields)._starsTint.b = fStack_5;
                  (pTVar7->fields)._starsTint.a = (float)pMStack_6;
                  if (pMVar8 != (Material *)0x0) {
                    value_00.y = fStack_4;
                    value_00.x = (float)pMStack_3;
                    value_00.z = fStack_5;
                    value_00.w = (float)pMStack_6;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                              (pMVar8,StringLiteral__StarsTint,value_00,(MethodInfo *)0x0);
                    pfVar10 = &(this->fields)._sunrise;
                    if ((*pfVar10 <= timeOfDay && timeOfDay != *pfVar10) ||
                       (timeOfDay < (this->fields)._sunset)) {
                      fVar11 = (this->fields)._sunrise;
                      fVar12 = timeOfDay;
                      if (timeOfDay <= fVar11) {
                        fVar12 = timeOfDay + _UNK_?;
                      }
                      fVar12 = fVar12 - fVar11;
                      fVar11 = (this->fields)._sunDuration;
                      if (fVar11 <= fVar12) {
                        fVar12 = (fVar11 - fVar12) / (this->fields)._sunDuration;
                      }
                      else {
                        fVar12 = fVar12 / fVar11;
                      }
                      fVar11 = (this->fields)._sunOrbit.x;
                      if (fVar12 < 0.0) {
                        fVar12 = 0.0;
                      }
                      else if (_UNK_? < fVar12) {
                        fVar12 = _UNK_?;
                      }
                      fVar13 = (this->fields)._sunLongitude;
                      pMStack_14 = (Material *)
                                   (((this->fields)._sunOrbit.y - fVar11) * fVar12 + fVar11);
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                Quaternion_AngleAxis
                                          (&QStack_16,fVar13 - _UNK_?,
                                           TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                                           (MethodInfo *)0x0);
                      pMStack_17 = (Material *)pQVar15->x;
                      fStack_18 = pQVar15->y;
                      fStack_19 = pQVar15->z;
                      pMStack_20 = (Material *)pQVar15->w;
                      pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                Quaternion_AngleAxis
                                          ((Quaternion *)&puStack_21,(float)pMStack_14,
                                           (this->fields)._sunAttitudeVector,(MethodInfo *)0x0);
                      fVar11 = pQVar15->y;
                      fVar12 = pQVar15->z;
                      fVar13 = pQVar15->w;
                      QStack_16.x = (float)pMStack_20;
                      QStack_16.y = (float)pMStack_20;
                      QStack_16.z = (float)pMStack_20;
                      QStack_16.w = (float)pMStack_20;
                      pMStack_3 = (Material *)
                                   ((fVar13 * (float)pMStack_17 + pQVar15->x * (float)pMStack_20 +
                                    fVar12 * fStack_18) - fVar11 * fStack_19);
                      fStack_4 = (fStack_18 * fVar13 + fVar11 * (float)pMStack_20 +
                                  fStack_19 * pQVar15->x) - fVar12 * (float)pMStack_17;
                      fStack_5 = (fStack_19 * fVar13 + fVar12 * (float)pMStack_20 +
                                  fVar11 * (float)pMStack_17) - fStack_18 * pQVar15->x;
                      pMStack_20 = (Material *)
                                   (((fVar13 * (float)pMStack_20 - (float)pMStack_17 * pQVar15->x) -
                                    fVar11 * fStack_18) - fStack_19 * fVar12);
                      pMStack_17 = pMStack_3;
                      fStack_18 = fStack_4;
                      fStack_19 = fStack_5;
                      pMStack_6 = pMStack_20;
                      pMStack_14 = pMStack_3;
                      pfVar10 = (float *)func_?();
                      QStack_16.x = *pfVar10;
                      QStack_16.y = 0.0;
                      QStack_16.z = 0.0;
                      QStack_16.w = 0.0;
                      iVar22 = func_?();
                      pMStack_20 = (Material *)0x0;
                      euler.y = *(float *)(iVar22 + 4) * _UNK_?;
                      euler.x = QStack_16.x * _UNK_?;
                      euler.z = 0.0;
                      pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                Quaternion_Internal_FromEulerRad
                                          ((Quaternion *)&puStack_21,euler,(MethodInfo *)0x0);
                      pTVar7 = (this->fields).skybox;
                      QStack_16.x = pQVar15->x;
                      QStack_16.y = pQVar15->y;
                      QStack_16.z = pQVar15->z;
                      QStack_16.w = pQVar15->w;
                      if (pTVar7 == (ThemeSkybox *)0x0) goto code_?;
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      pFVar23 = (pTVar7->fields)._sun;
                      if (pFVar23 == (FlareLight *)0x0) goto code_?;
                      pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pFVar23,(MethodInfo *)0x0);
                      if (pTVar24 == (Transform *)0x0) goto code_?;
                      value_03.y = QStack_16.y;
                      value_03.x = QStack_16.x;
                      value_03.z = QStack_16.z;
                      value_03.w = QStack_16.w;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                (pTVar24,value_03,(MethodInfo *)0x0);
                      pMStack_14 = (pTVar7->fields).skyboxMaterial;
                      pFVar23 = (pTVar7->fields)._sun;
                      if (pFVar23 == (FlareLight *)0x0) goto code_?;
                      pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pFVar23,(MethodInfo *)0x0);
                      if (pTVar24 == (Transform *)0x0) goto code_?;
                      pMVar25 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_worldToLocalMatrix
                                          ((Matrix4x4 *)&stack0xffffff58,pTVar24,(MethodInfo *)0x0);
                      if (pMStack_14 == (Material *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                                (pMStack_14,StringLiteral_sunMatrix,*pMVar25,(MethodInfo *)0x0);
                    }
                    pDVar1 = (this->fields).activeColorPreset;
                    if ((pDVar1 != (DayNightCycleColorPresets_Preset *)0x0) &&
                       (pCVar26 = (pDVar1->fields).sunParamsList,
                       pCVar26 != (CelestialParamsList *)0x0)) {
                      pCVar27 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::
                                CelestialParamsList::CelestialParamsList_GetParamPerTime
                                          (pCVar26,timeOfDay,(MethodInfo *)0x0);
                      (this->fields)._CurrentSunParam_k__BackingField = pCVar27;
                      func_?();
                      pCVar27 = (this->fields)._CurrentSunParam_k__BackingField;
                      if (pCVar27 != (CelestialParam *)0x0) {
                        QStack_16.x = (pCVar27->fields).TintColor.r;
                        QStack_16.y = (pCVar27->fields).TintColor.g;
                        QStack_16.z = (pCVar27->fields).TintColor.b;
                        QStack_16.w = (pCVar27->fields).TintColor.a;
                        pTVar7 = (this->fields).skybox;
                        if (pTVar7 != (ThemeSkybox *)0x0) {
                          if (cRam_? == '\0') {
                            func_?();
                            cRam_? = '\x01';
                          }
                          pMVar8 = (pTVar7->fields).skyboxMaterial;
                          (pTVar7->fields)._sunTint.r = QStack_16.x;
                          (pTVar7->fields)._sunTint.g = QStack_16.y;
                          (pTVar7->fields)._sunTint.b = QStack_16.z;
                          (pTVar7->fields)._sunTint.a = QStack_16.w;
                          if (pMVar8 != (Material *)0x0) {
                            value_01.y = QStack_16.y;
                            value_01.x = QStack_16.x;
                            value_01.z = QStack_16.z;
                            value_01.w = QStack_16.w;
                            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                                      (pMVar8,StringLiteral__SunTint,value_01,(MethodInfo *)0x0);
                            pTVar7 = (this->fields).skybox;
                            if ((((pTVar7 != (ThemeSkybox *)0x0) &&
                                 (pFVar23 = (pTVar7->fields)._sun, pFVar23 != (FlareLight *)0x0)) &&
                                (pCVar27 = (this->fields)._CurrentSunParam_k__BackingField,
                                pCVar27 != (CelestialParam *)0x0)) &&
                               (pLVar28 = (pFVar23->fields).light, pLVar28 != (Light *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_color
                                        (pLVar28,(pCVar27->fields).LightColor,(MethodInfo *)0x0);
                              pTVar7 = (this->fields).skybox;
                              if (((pTVar7 != (ThemeSkybox *)0x0) &&
                                  (pFVar23 = (pTVar7->fields)._sun, pFVar23 != (FlareLight *)0x0)) &&
                                 ((pCVar27 = (this->fields)._CurrentSunParam_k__BackingField,
                                  pCVar27 != (CelestialParam *)0x0 &&
                                  (pLVar28 = (pFVar23->fields).light, pLVar28 != (Light *)0x0)))) {
                                UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                                          (pLVar28,(pCVar27->fields).LightIntencity,(MethodInfo *)0x0
                                          );
                                pTVar7 = (this->fields).skybox;
                                if ((pTVar7 != (ThemeSkybox *)0x0) &&
                                   (pFVar23 = (pTVar7->fields)._sun, pFVar23 != (FlareLight *)0x0)) {
                                  pLVar29 = (pFVar23->fields).lensFlare;
                                  pLVar28 = (((((this->fields).skybox)->fields)._sun)->fields).light;
                                  if (pLVar28 != (Light *)0x0) {
                                    pMStack_14 = (Material *)
                                                 UnityEngine.CoreModule.dll::UnityEngine::Light::
                                                 Light_get_intensity(pLVar28,(MethodInfo *)0x0);
                                    pTVar7 = (this->fields).skybox;
                                    if ((pTVar7 != (ThemeSkybox *)0x0) &&
                                       (pLVar29 != (LensFlare *)0x0)) {
                                      UnityEngine.CoreModule.dll::UnityEngine::LensFlare::
                                      LensFlare_set_brightness
                                                (pLVar29,(float)pMStack_14 *
                                                        (pTVar7->fields)._sunFlareBrightness,
                                                 (MethodInfo *)0x0);
                                      pTVar7 = (this->fields).skybox;
                                      if ((pTVar7 != (ThemeSkybox *)0x0) &&
                                         (pFVar23 = (pTVar7->fields)._sun,
                                         pFVar23 != (FlareLight *)0x0)) {
                                        pLVar29 = (pFVar23->fields).lensFlare;
                                        pLVar30 = (((((this->fields).skybox)->fields)._sun)->fields).
                                                 lensFlare;
                                        if (pLVar30 != (LensFlare *)0x0) {
                                          pMStack_14 = (Material *)
                                                       UnityEngine.CoreModule.dll::UnityEngine::
                                                       LensFlare::LensFlare_get_brightness
                                                                 (pLVar30,(MethodInfo *)0x0);
                                          if (cRam_? == '\0') {
                                            func_?();
                                            cRam_? = '\x01';
                                          }
                                          fVar11 = (float)((uint)pMStack_14 & _UNK_?);
                                          if ((float)((uint)pMStack_14 & _UNK_?) <= 0.0) {
                                            fVar11 = 0.0;
                                          }
                                          fVar13 = TypeInfo__UnityEngine__Mathf->static_fields->
                                                   Epsilon * _UNK_?;
                                          fVar12 = fVar11 * _UNK_?;
                                          if (fVar11 * _UNK_? <= fVar13) {
                                            fVar12 = fVar13;
                                          }
                                          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                          Behaviour_set_enabled
                                                    ((Behaviour *)pLVar29,
                                                     fVar12 <= (float)((uint)(0.0 - (float)
                                                  pMStack_14) & _UNK_?),(MethodInfo *)0x0);
                                          pfVar10 = &(this->fields)._moonrise;
                                          if ((*pfVar10 <= timeOfDay && timeOfDay != *pfVar10) ||
                                             (timeOfDay < (this->fields)._moonset)) {
                                            fVar11 = (this->fields)._moonrise;
                                            fVar12 = timeOfDay;
                                            if (timeOfDay <= fVar11) {
                                              fVar12 = timeOfDay + _UNK_?;
                                            }
                                            fVar12 = fVar12 - fVar11;
                                            fVar11 = (this->fields)._moonDuration;
                                            if (fVar11 <= fVar12) {
                                              fVar12 = (fVar11 - fVar12) /
                                                       (this->fields)._moonDuration;
                                            }
                                            else {
                                              fVar12 = fVar12 / fVar11;
                                            }
                                            fVar11 = (this->fields)._moonOrbit.x;
                                            fVar13 = (this->fields)._moonOrbit.y;
                                            if (fVar12 < 0.0) {
                                              fVar12 = 0.0;
                                            }
                                            else if (_UNK_? < fVar12) {
                                              fVar12 = _UNK_?;
                                            }
                                            pMStack_14 = (Material *)(this->fields)._moonLongitude;
                                            if (cRam_? == '\0') {
                                              func_?();
                                              cRam_? = '\x01';
                                            }
                                            pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Quaternion::Quaternion_AngleAxis
                                                                ((Quaternion *)&puStack_21,
                                                                 (float)pMStack_14 - _UNK_?,
                                                                 TypeInfo__UnityEngine__Vector3->
                                                                 static_fields->upVector,
                                                                 (MethodInfo *)0x0);
                                            pMStack_3 = (Material *)pQVar15->x;
                                            fStack_4 = pQVar15->y;
                                            fStack_5 = pQVar15->z;
                                            pMStack_6 = (Material *)pQVar15->w;
                                            pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Quaternion::Quaternion_AngleAxis
                                                                ((Quaternion *)&puStack_21,
                                                                 (fVar13 - fVar11) * fVar12 + fVar11
                                                                 ,(this->fields)._moonAttitudeVector
                                                                 ,(MethodInfo *)0x0);
                                            fVar11 = pQVar15->y;
                                            fVar12 = pQVar15->z;
                                            fStack_18 = pQVar15->w;
                                            QStack_16.x = (float)pMStack_6;
                                            QStack_16.y = (float)pMStack_6;
                                            QStack_16.z = (float)pMStack_6;
                                            QStack_16.w = (float)pMStack_6;
                                            pMStack_14 = (Material *)
                                                         ((fStack_18 * (float)pMStack_3 +
                                                           pQVar15->x * (float)pMStack_6 +
                                                          fVar12 * fStack_4) - fVar11 * fStack_5);
                                            fVar13 = fVar12 * (float)pMStack_3;
                                            fVar31 = fVar11 * (float)pMStack_3;
                                            fVar32 = fStack_4 * pQVar15->x;
                                            pMStack_17 = (Material *)
                                                         (((fStack_18 * (float)pMStack_6 -
                                                           (float)pMStack_3 * pQVar15->x) -
                                                          fVar11 * fStack_4) - fStack_5 * fVar12);
                                            fStack_19 = fStack_18;
                                            pMStack_20 = (Material *)fStack_18;
                                            pMStack_3 = pMStack_14;
                                            fStack_4 = (fStack_4 * fStack_18 +
                                                         fVar11 * (float)pMStack_6 +
                                                        fStack_5 * pQVar15->x) - fVar13;
                                            fStack_5 = (fStack_5 * fStack_18 +
                                                         fVar12 * (float)pMStack_6 + fVar31) -
                                                        fVar32;
                                            pMStack_6 = pMStack_17;
                                            pfVar10 = (float *)func_?();
                                            QStack_16.x = *pfVar10;
                                            QStack_16.y = 0.0;
                                            QStack_16.z = 0.0;
                                            QStack_16.w = 0.0;
                                            iVar22 = func_?();
                                            pMStack_20 = (Material *)0x0;
                                            euler_00.y = *(float *)(iVar22 + 4) * _UNK_?;
                                            euler_00.x = QStack_16.x * _UNK_?;
                                            euler_00.z = 0.0;
                                            pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Quaternion::Quaternion_Internal_FromEulerRad
                                                                ((Quaternion *)&puStack_21,euler_00,
                                                                 (MethodInfo *)0x0);
                                            pTVar7 = (this->fields).skybox;
                                            QStack_16.x = pQVar15->x;
                                            QStack_16.y = pQVar15->y;
                                            QStack_16.z = pQVar15->z;
                                            QStack_16.w = pQVar15->w;
                                            if (pTVar7 == (ThemeSkybox *)0x0) goto code_?;
                                            if (cRam_? == '\0') {
                                              func_?();
                                              cRam_? = '\x01';
                                            }
                                            pFVar23 = (pTVar7->fields)._moon;
                                            if (pFVar23 == (FlareLight *)0x0) goto code_?;
                                            pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_get_transform
                                                                ((Component *)pFVar23,
                                                                 (MethodInfo *)0x0);
                                            if (pTVar24 == (Transform *)0x0) goto code_?;
                                            value_04.y = QStack_16.y;
                                            value_04.x = QStack_16.x;
                                            value_04.z = QStack_16.z;
                                            value_04.w = QStack_16.w;
                                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_set_rotation
                                                      (pTVar24,value_04,(MethodInfo *)0x0);
                                            pMStack_14 = (pTVar7->fields).skyboxMaterial;
                                            pFVar23 = (pTVar7->fields)._moon;
                                            if (pFVar23 == (FlareLight *)0x0) goto code_?;
                                            pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_get_transform
                                                                ((Component *)pFVar23,
                                                                 (MethodInfo *)0x0);
                                            if (pTVar24 == (Transform *)0x0) goto code_?;
                                            pMVar25 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Transform::Transform_get_worldToLocalMatrix
                                                                ((Matrix4x4 *)&stack0xffffff58,
                                                                 pTVar24,(MethodInfo *)0x0);
                                            if (pMStack_14 == (Material *)0x0)
                                            goto code_?;
                                            UnityEngine.CoreModule.dll::UnityEngine::Material::
                                            Material_SetMatrix(pMStack_14,StringLiteral_moonMatrix,
                                                               *pMVar25,(MethodInfo *)0x0);
                                          }
                                          pDVar1 = (this->fields).activeColorPreset;
                                          if ((pDVar1 != (DayNightCycleColorPresets_Preset *)0x0) &&
                                             (pCVar26 = (pDVar1->fields).moonParamsList,
                                             pCVar26 != (CelestialParamsList *)0x0)) {
                                            pCVar27 = Borodar::FarlandSkies::CloudyCrownPro::
                                                      DotParams::CelestialParamsList::
                                                      CelestialParamsList_GetParamPerTime
                                                                (pCVar26,timeOfDay,(MethodInfo *)0x0)
                                            ;
                                            (this->fields)._CurrentMoonParam_k__BackingField =
                                                 pCVar27;
                                            func_?();
                                            pCVar27 = (this->fields).
                                                      _CurrentMoonParam_k__BackingField;
                                            if (pCVar27 != (CelestialParam *)0x0) {
                                              QStack_16.x = (pCVar27->fields).TintColor.r;
                                              QStack_16.y = (pCVar27->fields).TintColor.g;
                                              QStack_16.z = (pCVar27->fields).TintColor.b;
                                              QStack_16.w = (pCVar27->fields).TintColor.a;
                                              pTVar7 = (this->fields).skybox;
                                              if (pTVar7 != (ThemeSkybox *)0x0) {
                                                if (cRam_? == '\0') {
                                                  func_?();
                                                  cRam_? = '\x01';
                                                }
                                                pMVar8 = (pTVar7->fields).skyboxMaterial;
                                                (pTVar7->fields)._moonTint.r = QStack_16.x;
                                                (pTVar7->fields)._moonTint.g = QStack_16.y;
                                                (pTVar7->fields)._moonTint.b = QStack_16.z;
                                                (pTVar7->fields)._moonTint.a = QStack_16.w;
                                                if (pMVar8 != (Material *)0x0) {
                                                  value_02.y = QStack_16.y;
                                                  value_02.x = QStack_16.x;
                                                  value_02.z = QStack_16.z;
                                                  value_02.w = QStack_16.w;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Material
                                                  ::Material_SetVector
                                                            (pMVar8,StringLiteral__MoonTint,value_02
                                                             ,(MethodInfo *)0x0);
                                                  pTVar7 = (this->fields).skybox;
                                                  if ((((pTVar7 != (ThemeSkybox *)0x0) &&
                                                       (pFVar23 = (pTVar7->fields)._moon,
                                                       pFVar23 != (FlareLight *)0x0)) &&
                                                      (pCVar27 = (this->fields).
                                                                 _CurrentMoonParam_k__BackingField,
                                                      pCVar27 != (CelestialParam *)0x0)) &&
                                                     (pLVar28 = (pFVar23->fields).light,
                                                     pLVar28 != (Light *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::Light::
                                                    Light_set_color(pLVar28,(pCVar27->fields).
                                                                           LightColor,
                                                                    (MethodInfo *)0x0);
                                                    pTVar7 = (this->fields).skybox;
                                                    if (((pTVar7 != (ThemeSkybox *)0x0) &&
                                                        (pFVar23 = (pTVar7->fields)._moon,
                                                        pFVar23 != (FlareLight *)0x0)) &&
                                                       ((pCVar27 = (this->fields).
                                                                   _CurrentMoonParam_k__BackingField
                                                        , pCVar27 != (CelestialParam *)0x0 &&
                                                        (pLVar28 = (pFVar23->fields).light,
                                                        pLVar28 != (Light *)0x0)))) {
                                                      UnityEngine.CoreModule.dll::UnityEngine::Light
                                                      ::Light_set_intensity
                                                                (pLVar28,(pCVar27->fields).
                                                                        LightIntencity,
                                                                 (MethodInfo *)0x0);
                                                      pTVar7 = (this->fields).skybox;
                                                      if ((pTVar7 != (ThemeSkybox *)0x0) &&
                                                         (pFVar23 = (pTVar7->fields)._moon,
                                                         pFVar23 != (FlareLight *)0x0)) {
                                                        pLVar29 = (pFVar23->fields).lensFlare;
                                                        pLVar28 = (((((this->fields).skybox)->fields)
                                                                  ._moon)->fields).light;
                                                        if (pLVar28 != (Light *)0x0) {
                                                          pMStack_14 = (Material *)
                                                                       UnityEngine.CoreModule.dll::
                                                                       UnityEngine::Light::
                                                                       Light_get_intensity(pLVar28,(
                                                  MethodInfo *)0x0);
                                                  pTVar7 = (this->fields).skybox;
                                                  if ((pTVar7 != (ThemeSkybox *)0x0) &&
                                                     (pLVar29 != (LensFlare *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    LensFlare::LensFlare_set_brightness
                                                              (pLVar29,(float)pMStack_14 *
                                                                      (pTVar7->fields).
                                                                      _moonFlareBrightness,
                                                               (MethodInfo *)0x0);
                                                    pTVar7 = (this->fields).skybox;
                                                    if ((pTVar7 != (ThemeSkybox *)0x0) &&
                                                       (pFVar23 = (pTVar7->fields)._moon,
                                                       pFVar23 != (FlareLight *)0x0)) {
                                                      pLVar29 = (pFVar23->fields).lensFlare;
                                                      pLVar30 = (((((this->fields).skybox)->fields).
                                                                _moon)->fields).lensFlare;
                                                      if (pLVar30 != (LensFlare *)0x0) {
                                                        pMStack_14 = (Material *)
                                                                     UnityEngine.CoreModule.dll::
                                                                     UnityEngine::LensFlare::
                                                                     LensFlare_get_brightness
                                                                               (pLVar30,(MethodInfo *
                                                                                       )0x0);
                                                        if (cRam_? == '\0') {
                                                          func_?();
                                                          cRam_? = '\x01';
                                                        }
                                                        fVar11 = (float)((uint)pMStack_14 &
                                                                        _UNK_?);
                                                        if ((float)((uint)pMStack_14 & _UNK_?
                                                                   ) <= 0.0) {
                                                          fVar11 = 0.0;
                                                        }
                                                        fVar13 = TypeInfo__UnityEngine__Mathf->
                                                                 static_fields->Epsilon *
                                                                 _UNK_?;
                                                        fVar12 = fVar11 * _UNK_?;
                                                        if (fVar11 * _UNK_? <= fVar13) {
                                                          fVar12 = fVar13;
                                                        }
                                                        UnityEngine.CoreModule.dll::UnityEngine::
                                                        Behaviour::Behaviour_set_enabled
                                                                  ((Behaviour *)pLVar29,
                                                                   fVar12 <= (float)((uint)(0.0 - (
                                                  float)pMStack_14) & _UNK_?),
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
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
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

