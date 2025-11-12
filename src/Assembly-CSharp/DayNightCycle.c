
/* Void Initialize() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_Initialize
               (DayNightCycle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeTimers__SystemTimer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeTimers__Timer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = (this->fields)._sunrise;
  fVar3 = (this->fields)._sunset;
  if (fVar3 <= fVar2) {
    fVar3 = (_UNK_? - fVar2) + fVar3;
  }
  else {
    fVar3 = fVar3 - fVar2;
  }
  (this->fields)._sunDuration = fVar3;
  fVar2 = (this->fields)._sunAltitude * _UNK_?;
  uVar4 = FUN_?(fVar2);
  uVar5 = FUN_?(fVar2);
  fVar2 = (this->fields)._moonrise;
  fVar3 = (this->fields)._moonset;
  (this->fields)._sunAttitudeVector.x = (float)uVar4;
  (this->fields)._sunAttitudeVector.y = (float)uVar5;
  (this->fields)._sunAttitudeVector.z = 0.0;
  if (fVar3 <= fVar2) {
    fVar3 = (fVar1 - fVar2) + fVar3;
  }
  else {
    fVar3 = fVar3 - fVar2;
  }
  (this->fields)._moonDuration = fVar3;
  fVar2 = (this->fields)._moonAltitude * _UNK_?;
  uVar4 = FUN_?(fVar2);
  uVar5 = FUN_?(fVar2);
  pDVar6 = (this->fields).activeColorPreset;
  (this->fields)._moonAttitudeVector.x = (float)uVar4;
  (this->fields)._moonAttitudeVector.y = (float)uVar5;
  (this->fields)._moonAttitudeVector.z = 0.0;
  if (pDVar6 == (DayNightCycleColorPresets_Preset *)0x0) {
    this_00 = (this->fields).colorPresets;
    if (this_00 == (DayNightCycleColorPresets *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pDVar6 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                       (this_00,0,(MethodInfo *)0x0);
    bVar8 = iRam_? != 0;
    (this->fields).activeColorPreset = pDVar6;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(this->fields).activeColorPreset >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  if ((this->fields).useServerTime == 0) {
    fVar2 = (this->fields).cycleStartTime;
    fVar3 = (this->fields).cycleLength;
    pIVar13 = (ITimer *)FUN_?(TypeInfo__ThemeTimers__Timer);
    uVar4 = FUN_?(fVar2 + 0.0,fVar1);
    bVar8 = iRam_? != 0;
    *(undefined4 *)&pIVar13[1].klass = uVar4;
    *(float *)((longlong)&pIVar13[1].klass + 4) = fVar1 / fVar3;
    (this->fields).timer = pIVar13;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(this->fields).timer >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  else {
    pIVar13 = (ITimer *)FUN_?(TypeInfo__ThemeTimers__SystemTimer);
    bVar8 = iRam_? != 0;
    (this->fields).timer = pIVar13;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(this->fields).timer >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  (this->fields).initialized = 1;
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_OnValidate
               (DayNightCycle *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = (this->fields)._sunrise;
  fVar3 = (this->fields)._sunset;
  if (fVar3 <= fVar2) {
    fVar3 = (_UNK_? - fVar2) + fVar3;
  }
  else {
    fVar3 = fVar3 - fVar2;
  }
  (this->fields)._sunDuration = fVar3;
  fVar2 = (this->fields)._sunAltitude * _UNK_?;
  uVar4 = FUN_?(fVar2);
  uVar5 = FUN_?(fVar2);
  fVar2 = (this->fields)._moonrise;
  fVar3 = (this->fields)._moonset;
  (this->fields)._sunAttitudeVector.x = (float)uVar4;
  (this->fields)._sunAttitudeVector.y = (float)uVar5;
  (this->fields)._sunAttitudeVector.z = 0.0;
  if (fVar3 <= fVar2) {
    fVar3 = (fVar1 - fVar2) + fVar3;
  }
  else {
    fVar3 = fVar3 - fVar2;
  }
  (this->fields)._moonDuration = fVar3;
  fVar2 = (this->fields)._moonAltitude * _UNK_?;
  uVar4 = FUN_?(fVar2);
  uVar5 = FUN_?(fVar2);
  (this->fields)._moonAttitudeVector.x = (float)uVar4;
  (this->fields)._moonAttitudeVector.y = (float)uVar5;
  (this->fields)._moonAttitudeVector.z = 0.0;
  return;
}


/* Void RecalcMoonAltitudeVector() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_RecalcMoonAltitudeVector
               (DayNightCycle *this,MethodInfo *method)

{
  fVar1 = (this->fields)._moonAltitude * _UNK_?;
  uVar2 = FUN_?(fVar1);
  uVar3 = FUN_?(fVar1);
  (this->fields)._moonAttitudeVector.x = (float)uVar2;
  (this->fields)._moonAttitudeVector.y = (float)uVar3;
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
  uVar2 = FUN_?(fVar1);
  uVar3 = FUN_?(fVar1);
  (this->fields)._sunAttitudeVector.x = (float)uVar2;
  (this->fields)._sunAttitudeVector.y = (float)uVar3;
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
    FUN_?(&TypeInfo__ThemeTimers__Timer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).useServerTime == 0) {
    fVar1 = (this->fields).cycleStartTime;
    fVar2 = (this->fields).cycleLength;
    pIVar3 = (ITimer *)FUN_?(TypeInfo__ThemeTimers__Timer);
    bVar4 = iRam_? != 0;
    fVar2 = _UNK_? / fVar2;
    *(float *)&pIVar3[1].klass = fVar1;
    *(float *)((longlong)&pIVar3[1].klass + 4) = fVar2;
    (this->fields).timer = pIVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).timer >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_Update
               (DayNightCycle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeTimers__ITimer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isPaused != 0) {
    return;
  }
  if ((this->fields).timer != (ITimer *)0x0) {
    FUN_?(1,TypeInfo__ThemeTimers__ITimer);
    if ((this->fields).timer != (ITimer *)0x0) {
      fVar1 = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
      pDVar2 = (this->fields).activeColorPreset;
      if ((pDVar2 != (DayNightCycleColorPresets_Preset *)0x0) &&
         (this_00 = (pDVar2->fields).skyParamList, this_00 != (SkyParamsList *)0x0)) {
        pSVar3 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParamsList::
                  SkyParamsList_GetParamPerTime(this_00,fVar1,(MethodInfo *)0x0);
        bVar4 = iRam_? != 0;
        (this->fields)._CurrentSkyParam_k__BackingField = pSVar3;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)&(this->fields)._CurrentSkyParam_k__BackingField >> 0xc);
          uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
          do {
            uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
            puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
            LOCK();
            bVar4 = uVar7 == *puVar8;
            if (bVar4) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar4);
        }
        pSVar3 = (this->fields)._CurrentSkyParam_k__BackingField;
        if ((pSVar3 != (SkyParam *)0x0) &&
           (pTVar9 = (this->fields).skybox, pTVar9 != (ThemeSkybox *)0x0)) {
          pIVar10 = *(InvokerMethod *)&(pSVar3->fields).TopColor.g;
          pIVar11 = *(Il2CppMethodPointer *)&(pSVar3->fields).TopColor.a;
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral__TopColor);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar12 = (pTVar9->fields).skyboxMaterial;
          *(InvokerMethod *)&(pTVar9->fields)._topColor = pIVar10;
          *(Il2CppMethodPointer *)&(pTVar9->fields)._topColor.b = pIVar11;
          if (pMVar12 != (Material *)0x0) {
            auStack_13 = (undefined1  [8])pIVar10;
            uStack_14 = pIVar11;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                      (pMVar12,StringLiteral__TopColor,(Color *)auStack_13,(MethodInfo *)0x0);
            pSVar3 = (this->fields)._CurrentSkyParam_k__BackingField;
            if ((pSVar3 != (SkyParam *)0x0) &&
               (pTVar9 = (this->fields).skybox, pTVar9 != (ThemeSkybox *)0x0)) {
              auStack_13 = *(undefined1 (*) [8])&(pSVar3->fields).BottomColor.g;
              uStack_14 = *(Il2CppMethodPointer *)&(pSVar3->fields).BottomColor.a;
              ThemeSkybox::ThemeSkybox_set_BottomColor(pTVar9,(Color *)auStack_13,(MethodInfo *)0x0)
              ;
              pDVar2 = (this->fields).activeColorPreset;
              if ((pDVar2 != (DayNightCycleColorPresets_Preset *)0x0) &&
                 (this_01 = (pDVar2->fields).starsParamList, this_01 != (StarsParamsList *)0x0)) {
                pSVar15 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParamsList::
                          StarsParamsList_GetParamPerTime(this_01,fVar1,(MethodInfo *)0x0);
                bVar4 = iRam_? != 0;
                (this->fields)._CurrentStarsParam_k__BackingField = pSVar15;
                if (bVar4) {
                  uVar5 = (uint)((ulonglong)&(this->fields)._CurrentStarsParam_k__BackingField >>
                                 0xc);
                  uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                  do {
                    uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                    puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                    LOCK();
                    bVar4 = uVar7 == *puVar8;
                    if (bVar4) {
                      *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar4);
                }
                pSVar15 = (this->fields)._CurrentStarsParam_k__BackingField;
                if ((pSVar15 != (StarsParam *)0x0) &&
                   (pTVar9 = (this->fields).skybox, pTVar9 != (ThemeSkybox *)0x0)) {
                  pIVar10 = *(InvokerMethod *)&(pSVar15->fields).TintColor.g;
                  pIVar11 = *(Il2CppMethodPointer *)&(pSVar15->fields).TintColor.a;
                  if (cRam_? == '\0') {
                    FUN_?(&StringLiteral__StarsTint);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar12 = (pTVar9->fields).skyboxMaterial;
                  *(InvokerMethod *)&(pTVar9->fields)._starsTint = pIVar10;
                  *(Il2CppMethodPointer *)&(pTVar9->fields)._starsTint.b = pIVar11;
                  if (pMVar12 != (Material *)0x0) {
                    auStack_13 = (undefined1  [8])pIVar10;
                    uStack_14 = pIVar11;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                              (pMVar12,StringLiteral__StarsTint,(Color *)auStack_13,(MethodInfo *)0x0
                              );
                    fVar16 = _UNK_?;
                    fVar17 = _UNK_?;
                    pfVar18 = &(this->fields)._sunrise;
                    if ((*pfVar18 <= fVar1 && fVar1 != *pfVar18) ||
                       (fVar1 < (this->fields)._sunset)) {
                      fVar19 = (this->fields)._sunrise;
                      fVar20 = fVar1;
                      if (fVar1 <= fVar19) {
                        fVar20 = fVar1 + _UNK_?;
                      }
                      fVar20 = fVar20 - fVar19;
                      fVar19 = (this->fields)._sunDuration;
                      if (fVar19 <= fVar20) {
                        fVar20 = fVar19 - fVar20;
                      }
                      fVar20 = fVar20 / (this->fields)._sunDuration;
                      fVar19 = (this->fields)._sunOrbit.x;
                      fVar21 = (this->fields)._sunOrbit.y;
                      if (fVar20 < 0.0) {
                        fVar20 = 0.0;
                      }
                      else if (_UNK_? < fVar20) {
                        fVar20 = _UNK_?;
                      }
                      fVar22 = (this->fields)._sunLongitude;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Vector3);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pVVar23 = TypeInfo__UnityEngine__Vector3->static_fields;
                      VStack_24.x = (pVVar23->upVector).x;
                      VStack_24.y = (pVVar23->upVector).y;
                      VStack_24.z = (pVVar23->upVector).z;
                      auStack_13 = (undefined1  [8])0x0;
                      uStack_14 = (Il2CppMethodPointer)0x0;
                      pcVar25 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0))
                      {
                        uVar26 = func_?(&UNK_?);
                        FUN_?(uVar26,0);
                        pcVar25 = (code *)swi(3);
                        (*pcVar25)();
                        return;
                      }
                      pcRam_? = pcVar25;
                      (*pcRam_?)(fVar22 - fVar16,&VStack_24,auStack_13);
                      VStack_27.x = (this->fields)._sunAttitudeVector.x;
                      VStack_27.y = (this->fields)._sunAttitudeVector.y;
                      VStack_27.z = (this->fields)._sunAttitudeVector.z;
                      auStack_28 = (undefined1  [8])0x0;
                      uStack_29 = (Il2CppMethodPointer)0x0;
                      pcVar25 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0))
                      {
                        uVar26 = func_?(&UNK_?);
                        FUN_?(uVar26,0);
                        pcVar25 = (code *)swi(3);
                        (*pcVar25)();
                        return;
                      }
                      pcRam_? = pcVar25;
                      pMVar30 = (MethodInfo *)auStack_28;
                      (*pcRam_?)((fVar21 - fVar19) * fVar20 + fVar19,&VStack_27);
                      fVar19 = (float)uStack_29 * (float)auStack_13._4_4_;
                      fVar20 = (float)auStack_13._0_4_ * (float)auStack_28._4_4_;
                      fVar22 = (float)auStack_13._0_4_ * (float)auStack_28._0_4_;
                      fVar21 = (float)auStack_28._4_4_ * (float)auStack_13._4_4_;
                      fVar16 = (float)auStack_28._0_4_ * (float)auStack_13._4_4_;
                      auStack_13._4_4_ =
                           ((float)auStack_28._4_4_ * uStack_14._4_4_ +
                            uStack_29._4_4_ * (float)auStack_13._4_4_ +
                           (float)auStack_28._0_4_ * (float)uStack_14) -
                           (float)auStack_13._0_4_ * (float)uStack_29;
                      auStack_13._0_4_ =
                           ((float)auStack_13._0_4_ * uStack_29._4_4_ +
                            (float)auStack_28._0_4_ * uStack_14._4_4_ + fVar19) -
                           (float)auStack_28._4_4_ * (float)uStack_14;
                      uStack_14 = (Il2CppMethodPointer)
                                  CONCAT44(((uStack_29._4_4_ * uStack_14._4_4_ - fVar22) - fVar21) -
                                           (float)uStack_29 * (float)uStack_14,
                                           ((float)uStack_29 * uStack_14._4_4_ +
                                            uStack_29._4_4_ * (float)uStack_14 + fVar20) - fVar16);
                      pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                Quaternion_get_eulerAngles
                                          (&VStack_27,(Quaternion *)auStack_13,pMVar30);
                      fVar16 = pVVar31->x * _UNK_?;
                      pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                Quaternion_get_eulerAngles
                                          (&VStack_24,(Quaternion *)auStack_13,pMVar30);
                      VStack_27.z = 0.0;
                      VStack_27.y = pVVar31->y * _UNK_?;
                      VStack_27.x = fVar16;
                      auStack_13 = (undefined1  [8])0x0;
                      uStack_14 = (Il2CppMethodPointer)0x0;
                      pcVar25 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar25 = (code *)FUN_?(&UNK_?), pcVar25 == (code *)0x0))
                      {
                        uVar26 = func_?(&UNK_?);
                        FUN_?(uVar26,0);
                        pcVar25 = (code *)swi(3);
                        (*pcVar25)();
                        return;
                      }
                      pcRam_? = pcVar25;
                      (*pcRam_?)(&VStack_27,auStack_13);
                      pTVar9 = (this->fields).skybox;
                      if (pTVar9 == (ThemeSkybox *)0x0) goto code_?;
                      ThemeSkybox::ThemeSkybox_set_SunRotation
                                (pTVar9,(Quaternion *)auStack_13,(MethodInfo *)0x0);
                    }
                    fVar19 = _UNK_?;
                    fVar16 = _UNK_?;
                    pDVar2 = (this->fields).activeColorPreset;
                    if ((pDVar2 != (DayNightCycleColorPresets_Preset *)0x0) &&
                       (pCVar32 = (pDVar2->fields).sunParamsList,
                       pCVar32 != (CelestialParamsList *)0x0)) {
                      pCVar33 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::
                                CelestialParamsList::CelestialParamsList_GetParamPerTime
                                          (pCVar32,fVar1,(MethodInfo *)0x0);
                      bVar4 = iRam_? != 0;
                      (this->fields)._CurrentSunParam_k__BackingField = pCVar33;
                      if (bVar4) {
                        uVar5 = (uint)((ulonglong)&(this->fields)._CurrentSunParam_k__BackingField
                                       >> 0xc);
                        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                        do {
                          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                          LOCK();
                          bVar4 = uVar7 == *puVar8;
                          if (bVar4) {
                            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar4);
                      }
                      pCVar33 = (this->fields)._CurrentSunParam_k__BackingField;
                      if ((pCVar33 != (CelestialParam *)0x0) &&
                         (pTVar9 = (this->fields).skybox, pTVar9 != (ThemeSkybox *)0x0)) {
                        pIVar10 = *(InvokerMethod *)&(pCVar33->fields).TintColor.g;
                        pIVar11 = *(Il2CppMethodPointer *)&(pCVar33->fields).TintColor.a;
                        if (cRam_? == '\0') {
                          FUN_?(&StringLiteral__SunTint);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pMVar12 = (pTVar9->fields).skyboxMaterial;
                        *(InvokerMethod *)&(pTVar9->fields)._sunTint = pIVar10;
                        *(Il2CppMethodPointer *)&(pTVar9->fields)._sunTint.b = pIVar11;
                        if (pMVar12 != (Material *)0x0) {
                          auStack_13 = (undefined1  [8])pIVar10;
                          uStack_14 = pIVar11;
                          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                                    (pMVar12,StringLiteral__SunTint,(Color *)auStack_13,
                                     (MethodInfo *)0x0);
                          pTVar9 = (this->fields).skybox;
                          if (((pTVar9 != (ThemeSkybox *)0x0) &&
                              (pFVar34 = (pTVar9->fields)._sun, pFVar34 != (FlareLight *)0x0)) &&
                             (pCVar33 = (this->fields)._CurrentSunParam_k__BackingField,
                             pCVar33 != (CelestialParam *)0x0)) {
                            pLVar35 = (pFVar34->fields).light;
                            uVar26._0_4_ = (pCVar33->fields).LightColor.g;
                            uVar26._4_4_ = (pCVar33->fields).LightColor.b;
                            fVar20 = (pCVar33->fields).LightColor.a;
                            fVar21 = (pCVar33->fields).LightIntencity;
                            if (pLVar35 != (Light *)0x0) {
                              VStack_24._0_8_ = uVar26;
                              VStack_24.z = fVar20;
                              fStack_36 = fVar21;
                              if (cRam_? == '\0') {
                                FUN_?(&
                                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                                             );
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              pvVar37 = (pLVar35->fields)._._._.m_CachedPtr;
                              if (pvVar37 == (void *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                ThrowHelper_2_ThrowNullReferenceException
                                          ((Object *)pLVar35,(MethodInfo *)0x0);
                                pcVar25 = (code *)swi(3);
                                (*pcVar25)();
                                return;
                              }
                              pcVar25 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar25 = (code *)FUN_?(&UNK_?),
                                 pcVar25 == (code *)0x0)) {
                                uVar26 = func_?(&UNK_?);
                                FUN_?(uVar26,0);
                                pcVar25 = (code *)swi(3);
                                (*pcVar25)();
                                return;
                              }
                              pcRam_? = pcVar25;
                              (*pcRam_?)(pvVar37,&VStack_24);
                              pTVar9 = (this->fields).skybox;
                              if (((pTVar9 != (ThemeSkybox *)0x0) &&
                                  (pFVar34 = (pTVar9->fields)._sun, pFVar34 != (FlareLight *)0x0)) &&
                                 ((pCVar33 = (this->fields)._CurrentSunParam_k__BackingField,
                                  pCVar33 != (CelestialParam *)0x0 &&
                                  (pLVar35 = (pFVar34->fields).light, pLVar35 != (Light *)0x0)))) {
                                UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                                          (pLVar35,*(float *)&pCVar33[1].klass,(MethodInfo *)0x0);
                                pTVar9 = (this->fields).skybox;
                                if ((pTVar9 != (ThemeSkybox *)0x0) &&
                                   (pFVar34 = (pTVar9->fields)._sun, pFVar34 != (FlareLight *)0x0)) {
                                  pLVar38 = (pFVar34->fields).lensFlare;
                                  pLVar35 = (((((this->fields).skybox)->fields)._sun)->fields).light
                                  ;
                                  if (pLVar35 != (Light *)0x0) {
                                    if (cRam_? == '\0') {
                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                                                  );
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    pvVar37 = (pLVar35->fields)._._._.m_CachedPtr;
                                    if (pvVar37 == (void *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper
                                      ::ThrowHelper_2_ThrowNullReferenceException
                                                ((Object *)pLVar35,(MethodInfo *)0x0);
                                      pcVar25 = (code *)swi(3);
                                      (*pcVar25)();
                                      return;
                                    }
                                    pcVar25 = pcRam_?;
                                    if ((pcRam_? == (code *)0x0) &&
                                       (pcVar25 = (code *)FUN_?(&UNK_?),
                                       pcVar25 == (code *)0x0)) {
                                      uVar26 = func_?(&UNK_?);
                                      FUN_?(uVar26,0);
                                      pcVar25 = (code *)swi(3);
                                      (*pcVar25)();
                                      return;
                                    }
                                    pcRam_? = pcVar25;
                                    fVar20 = (float)(*pcRam_?)(pvVar37);
                                    pTVar9 = (this->fields).skybox;
                                    if ((pTVar9 != (ThemeSkybox *)0x0) &&
                                       (pLVar38 != (LensFlare *)0x0)) {
                                      UnityEngine.CoreModule.dll::UnityEngine::LensFlare::
                                      LensFlare_set_brightness
                                                (pLVar38,fVar20 * (pTVar9->fields).
                                                                  _sunFlareBrightness,
                                                 (MethodInfo *)0x0);
                                      pTVar9 = (this->fields).skybox;
                                      if ((pTVar9 != (ThemeSkybox *)0x0) &&
                                         (pFVar34 = (pTVar9->fields)._sun,
                                         pFVar34 != (FlareLight *)0x0)) {
                                        pLVar38 = (pFVar34->fields).lensFlare;
                                        pLVar39 = (((((this->fields).skybox)->fields)._sun)->fields)
                                                  .lensFlare;
                                        if (pLVar39 != (LensFlare *)0x0) {
                                          if (cRam_? == '\0') {
                                            FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LensFlare>_UnityEngine__LensFlare_
                                                  );
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          pvVar37 = (pLVar39->fields)._._._.m_CachedPtr;
                                          if (pvVar37 == (void *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                            ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                      ((Object *)pLVar39,(MethodInfo *)0x0);
                                            pcVar25 = (code *)swi(3);
                                            (*pcVar25)();
                                            return;
                                          }
                                          pcVar25 = pcRam_?;
                                          if ((pcRam_? == (code *)0x0) &&
                                             (pcVar25 = (code *)FUN_?(&UNK_?),
                                             pcVar25 == (code *)0x0)) {
                                            uVar26 = func_?(&UNK_?);
                                            FUN_?(uVar26,0);
                                            pcVar25 = (code *)swi(3);
                                            (*pcVar25)();
                                            return;
                                          }
                                          pcRam_? = pcVar25;
                                          uVar40 = (*pcRam_?)(pvVar37);
                                          bVar41 = FUN_?(uVar40,0);
                                          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                          Behaviour_set_enabled
                                                    ((Behaviour *)pLVar38,bVar41 ^ 1,
                                                     (MethodInfo *)0x0);
                                          pfVar18 = &(this->fields)._moonrise;
                                          if ((*pfVar18 <= fVar1 && fVar1 != *pfVar18) ||
                                             (fVar1 < (this->fields)._moonset)) {
                                            fVar20 = (this->fields)._moonrise;
                                            fVar21 = fVar1;
                                            if (fVar1 <= fVar20) {
                                              fVar21 = fVar1 + fVar16;
                                            }
                                            fVar21 = fVar21 - fVar20;
                                            fVar16 = (this->fields)._moonDuration;
                                            if (fVar16 <= fVar21) {
                                              fVar21 = fVar16 - fVar21;
                                            }
                                            fVar21 = fVar21 / (this->fields)._moonDuration;
                                            fVar16 = (this->fields)._moonOrbit.x;
                                            fVar20 = (this->fields)._moonOrbit.y;
                                            if (fVar21 < 0.0) {
                                              fVar21 = 0.0;
                                            }
                                            else if (fVar17 < fVar21) {
                                              fVar21 = fVar17;
                                            }
                                            fVar17 = (this->fields)._moonLongitude;
                                            if (cRam_? == '\0') {
                                              FUN_?(&TypeInfo__UnityEngine__Vector3);
                                              LOCK();
                                              UNLOCK();
                                              cRam_? = '\x01';
                                            }
                                            pVVar23 = TypeInfo__UnityEngine__Vector3->static_fields;
                                            VStack_27.x = (pVVar23->upVector).x;
                                            VStack_27.y = (pVVar23->upVector).y;
                                            VStack_27.z = (pVVar23->upVector).z;
                                            auStack_28 = (undefined1  [8])0x0;
                                            uStack_29 = (Il2CppMethodPointer)0x0;
                                            pcVar25 = pcRam_?;
                                            if ((pcRam_? == (code *)0x0) &&
                                               (pcVar25 = (code *)FUN_?(&UNK_?),
                                               pcVar25 == (code *)0x0)) {
                                              uVar26 = func_?(&UNK_?);
                                              FUN_?(uVar26,0);
                                              pcVar25 = (code *)swi(3);
                                              (*pcVar25)();
                                              return;
                                            }
                                            pcRam_? = pcVar25;
                                            (*pcRam_?)
                                                      (fVar17 - fVar19,&VStack_27,auStack_28);
                                            VStack_24.x = (this->fields)._moonAttitudeVector.x;
                                            VStack_24.y = (this->fields)._moonAttitudeVector.y;
                                            VStack_24.z = (this->fields)._moonAttitudeVector.z;
                                            auStack_13 = (undefined1  [8])0x0;
                                            uStack_14 = (Il2CppMethodPointer)0x0;
                                            pcVar25 = pcRam_?;
                                            if ((pcRam_? == (code *)0x0) &&
                                               (pcVar25 = (code *)FUN_?(&UNK_?),
                                               pcVar25 == (code *)0x0)) {
                                              uVar26 = func_?(&UNK_?);
                                              FUN_?(uVar26,0);
                                              pcVar25 = (code *)swi(3);
                                              (*pcVar25)();
                                              return;
                                            }
                                            pcRam_? = pcVar25;
                                            pMVar30 = (MethodInfo *)auStack_13;
                                            (*pcRam_?)
                                                      ((fVar20 - fVar16) * fVar21 + fVar16,
                                                       &VStack_24);
                                            fVar17 = (float)auStack_13._4_4_ * (float)uStack_29;
                                            fVar19 = (float)auStack_13._4_4_ *
                                                     (float)auStack_28._0_4_;
                                            fVar20 = (float)auStack_13._4_4_ *
                                                     (float)auStack_28._4_4_;
                                            fVar21 = (float)auStack_13._0_4_ *
                                                     (float)auStack_28._0_4_;
                                            fVar16 = (float)auStack_13._0_4_ *
                                                     (float)auStack_28._4_4_;
                                            auStack_13._4_4_ =
                                                 ((float)auStack_13._4_4_ * uStack_29._4_4_ +
                                                  uStack_14._4_4_ * (float)auStack_28._4_4_ +
                                                 (float)auStack_13._0_4_ * (float)uStack_29) -
                                                 (float)uStack_14 * (float)auStack_28._0_4_;
                                            auStack_13._0_4_ =
                                                 ((float)auStack_13._0_4_ * uStack_29._4_4_ +
                                                  uStack_14._4_4_ * (float)auStack_28._0_4_ +
                                                 (float)uStack_14 * (float)auStack_28._4_4_) -
                                                 fVar17;
                                            uStack_14 = (Il2CppMethodPointer)
                                                        CONCAT44(((uStack_14._4_4_ * uStack_29._4_4_
                                                                  - fVar21) - fVar20) -
                                                                 (float)uStack_14 * (float)uStack_29
                                                                 ,((float)uStack_14 *
                                                                   uStack_29._4_4_ +
                                                                   uStack_14._4_4_ *
                                                                   (float)uStack_29 + fVar19) -
                                                                  fVar16);
                                            pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Quaternion::Quaternion_get_eulerAngles
                                                                (&VStack_27,(Quaternion *)auStack_13
                                                                 ,pMVar30);
                                            fVar17 = pVVar31->x * _UNK_?;
                                            pVVar31 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Quaternion::Quaternion_get_eulerAngles
                                                                (&VStack_24,(Quaternion *)auStack_13
                                                                 ,pMVar30);
                                            VStack_27.z = 0.0;
                                            VStack_27.y = pVVar31->y * _UNK_?;
                                            VStack_27.x = fVar17;
                                            auStack_13 = (undefined1  [8])0x0;
                                            uStack_14 = (Il2CppMethodPointer)0x0;
                                            pcVar25 = pcRam_?;
                                            if ((pcRam_? == (code *)0x0) &&
                                               (pcVar25 = (code *)FUN_?(&UNK_?),
                                               pcVar25 == (code *)0x0)) {
                                              uVar26 = func_?(&UNK_?);
                                              FUN_?(uVar26,0);
                                              pcVar25 = (code *)swi(3);
                                              (*pcVar25)();
                                              return;
                                            }
                                            pcRam_? = pcVar25;
                                            (*pcRam_?)(&VStack_27,auStack_13);
                                            pTVar9 = (this->fields).skybox;
                                            if (pTVar9 == (ThemeSkybox *)0x0)
                                            goto code_?;
                                            ThemeSkybox::ThemeSkybox_set_MoonRotation
                                                      (pTVar9,(Quaternion *)auStack_13,
                                                       (MethodInfo *)0x0);
                                          }
                                          pDVar2 = (this->fields).activeColorPreset;
                                          if ((pDVar2 != (DayNightCycleColorPresets_Preset *)0x0) &&
                                             (pCVar32 = (pDVar2->fields).moonParamsList,
                                             pCVar32 != (CelestialParamsList *)0x0)) {
                                            pCVar33 = Borodar::FarlandSkies::CloudyCrownPro::
                                                      DotParams::CelestialParamsList::
                                                      CelestialParamsList_GetParamPerTime
                                                                (pCVar32,fVar1,(MethodInfo *)0x0);
                                            bVar4 = iRam_? != 0;
                                            (this->fields)._CurrentMoonParam_k__BackingField =
                                                 pCVar33;
                                            if (bVar4) {
                                              uVar5 = (uint)((ulonglong)
                                                              &(this->fields).
                                                               _CurrentMoonParam_k__BackingField >>
                                                             0xc);
                                              uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                                              do {
                                                uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                                                puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                                                LOCK();
                                                bVar4 = uVar7 == *puVar8;
                                                if (bVar4) {
                                                  *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                                                }
                                                UNLOCK();
                                              } while (!bVar4);
                                            }
                                            pCVar33 = (this->fields).
                                                      _CurrentMoonParam_k__BackingField;
                                            if ((pCVar33 != (CelestialParam *)0x0) &&
                                               (pTVar9 = (this->fields).skybox,
                                               pTVar9 != (ThemeSkybox *)0x0)) {
                                              pIVar10 = *(InvokerMethod *)
                                                         &(pCVar33->fields).TintColor.g;
                                              pIVar11 = *(Il2CppMethodPointer *)
                                                         &(pCVar33->fields).TintColor.a;
                                              if (cRam_? == '\0') {
                                                FUN_?(&StringLiteral__MoonTint);
                                                LOCK();
                                                UNLOCK();
                                                cRam_? = '\x01';
                                              }
                                              pMVar12 = (pTVar9->fields).skyboxMaterial;
                                              *(InvokerMethod *)&(pTVar9->fields)._moonTint =
                                                   pIVar10;
                                              *(Il2CppMethodPointer *)&(pTVar9->fields)._moonTint.b
                                                   = pIVar11;
                                              if (pMVar12 != (Material *)0x0) {
                                                auStack_13 = (undefined1  [8])pIVar10;
                                                uStack_14 = pIVar11;
                                                UnityEngine.CoreModule.dll::UnityEngine::Material::
                                                Material_SetColor(pMVar12,StringLiteral__MoonTint,
                                                                  (Color *)auStack_13,
                                                                  (MethodInfo *)0x0);
                                                pTVar9 = (this->fields).skybox;
                                                if (((pTVar9 != (ThemeSkybox *)0x0) &&
                                                    (pFVar34 = (pTVar9->fields)._moon,
                                                    pFVar34 != (FlareLight *)0x0)) &&
                                                   (pCVar33 = (this->fields).
                                                              _CurrentMoonParam_k__BackingField,
                                                   pCVar33 != (CelestialParam *)0x0)) {
                                                  pLVar35 = (pFVar34->fields).light;
                                                  pIVar11 = *(Il2CppMethodPointer *)
                                                             &(pCVar33->fields).LightColor.g;
                                                  pIVar42 = *(Il2CppMethodPointer *)
                                                             &(pCVar33->fields).LightColor.a;
                                                  if (pLVar35 != (Light *)0x0) {
                                                    auStack_28 = (undefined1  [8])pIVar11;
                                                    uStack_29 = pIVar42;
                                                    if (cRam_? == '\0') {
                                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar37 = (pLVar35->fields)._._._.m_CachedPtr;
                                                  if (pvVar37 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pLVar35,(MethodInfo *)0x0);
                                                    pcVar25 = (code *)swi(3);
                                                    (*pcVar25)();
                                                    return;
                                                  }
                                                  pcVar25 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar25 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar25 == (code *)0x0)) {
                                                    uVar26 = func_?(&UNK_?);
                                                    FUN_?(uVar26,0);
                                                    pcVar25 = (code *)swi(3);
                                                    (*pcVar25)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar25;
                                                  (*pcRam_?)(pvVar37,auStack_28);
                                                  pTVar9 = (this->fields).skybox;
                                                  if (((pTVar9 != (ThemeSkybox *)0x0) &&
                                                      (pFVar34 = (pTVar9->fields)._moon,
                                                      pFVar34 != (FlareLight *)0x0)) &&
                                                     ((pCVar33 = (this->fields).
                                                                 _CurrentMoonParam_k__BackingField,
                                                      pCVar33 != (CelestialParam *)0x0 &&
                                                      (pLVar35 = (pFVar34->fields).light,
                                                      pLVar35 != (Light *)0x0)))) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::Light::
                                                    Light_set_intensity(pLVar35,*(float *)&pCVar33[1
                                                  ].klass,(MethodInfo *)0x0);
                                                  pTVar9 = (this->fields).skybox;
                                                  if ((pTVar9 != (ThemeSkybox *)0x0) &&
                                                     (pFVar34 = (pTVar9->fields)._moon,
                                                     pFVar34 != (FlareLight *)0x0)) {
                                                    pLVar38 = (pFVar34->fields).lensFlare;
                                                    pLVar35 = (((((this->fields).skybox)->fields).
                                                               _moon)->fields).light;
                                                    if (pLVar35 != (Light *)0x0) {
                                                      if (cRam_? == '\0') {
                                                        FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar37 = (pLVar35->fields)._._._.m_CachedPtr;
                                                  if (pvVar37 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pLVar35,(MethodInfo *)0x0);
                                                    pcVar25 = (code *)swi(3);
                                                    (*pcVar25)();
                                                    return;
                                                  }
                                                  pcVar25 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar25 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar25 == (code *)0x0)) {
                                                    uVar26 = func_?(&UNK_?);
                                                    FUN_?(uVar26,0);
                                                    pcVar25 = (code *)swi(3);
                                                    (*pcVar25)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar25;
                                                  fVar1 = (float)(*pcRam_?)(pvVar37);
                                                  pTVar9 = (this->fields).skybox;
                                                  if ((pTVar9 != (ThemeSkybox *)0x0) &&
                                                     (pLVar38 != (LensFlare *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    LensFlare::LensFlare_set_brightness
                                                              (pLVar38,fVar1 * (pTVar9->fields).
                                                                                _moonFlareBrightness
                                                               ,(MethodInfo *)0x0);
                                                    pTVar9 = (this->fields).skybox;
                                                    if ((pTVar9 != (ThemeSkybox *)0x0) &&
                                                       (pFVar34 = (pTVar9->fields)._moon,
                                                       pFVar34 != (FlareLight *)0x0)) {
                                                      pLVar38 = (pFVar34->fields).lensFlare;
                                                      pLVar39 = (((((this->fields).skybox)->fields).
                                                                 _moon)->fields).lensFlare;
                                                      if (pLVar39 != (LensFlare *)0x0) {
                                                        if (cRam_? == '\0') {
                                                          FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LensFlare>_UnityEngine__LensFlare_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar37 = (pLVar39->fields)._._._.m_CachedPtr;
                                                  if (pvVar37 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pLVar39,(MethodInfo *)0x0);
                                                    pcVar25 = (code *)swi(3);
                                                    (*pcVar25)();
                                                    return;
                                                  }
                                                  pcVar25 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar25 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar25 == (code *)0x0)) {
                                                    uVar26 = func_?(&UNK_?);
                                                    FUN_?(uVar26,0);
                                                    pcVar25 = (code *)swi(3);
                                                    (*pcVar25)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar25;
                                                  uVar40 = (*pcRam_?)(pvVar37);
                                                  bVar41 = FUN_?(uVar40,0);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour
                                                  ::Behaviour_set_enabled
                                                            ((Behaviour *)pLVar38,bVar41 ^ 1,
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
                                          FUN_?();
                                          pcVar25 = (code *)swi(3);
                                          (*pcVar25)();
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
                    FUN_?();
                    pcVar25 = (code *)swi(3);
                    (*pcVar25)();
                    return;
                  }
                }
              }
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
  }
  FUN_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
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
    bVar3 = iRam_? != 0;
    (this->fields)._CurrentSkyParam_k__BackingField = pSVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields)._CurrentSkyParam_k__BackingField >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pSVar2 = (this->fields)._CurrentSkyParam_k__BackingField;
    if ((pSVar2 != (SkyParam *)0x0) &&
       (pTVar8 = (this->fields).skybox, pTVar8 != (ThemeSkybox *)0x0)) {
      pIVar9 = *(InvokerMethod *)&(pSVar2->fields).TopColor.g;
      pIVar10 = *(Il2CppMethodPointer *)&(pSVar2->fields).TopColor.a;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral__TopColor);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar11 = (pTVar8->fields).skyboxMaterial;
      *(InvokerMethod *)&(pTVar8->fields)._topColor = pIVar9;
      *(Il2CppMethodPointer *)&(pTVar8->fields)._topColor.b = pIVar10;
      if (pMVar11 != (Material *)0x0) {
        auStack_12 = (undefined1  [8])pIVar9;
        uStack_13 = pIVar10;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                  (pMVar11,StringLiteral__TopColor,(Color *)auStack_12,(MethodInfo *)0x0);
        pSVar2 = (this->fields)._CurrentSkyParam_k__BackingField;
        if ((pSVar2 != (SkyParam *)0x0) &&
           (pTVar8 = (this->fields).skybox, pTVar8 != (ThemeSkybox *)0x0)) {
          auStack_12 = *(undefined1 (*) [8])&(pSVar2->fields).BottomColor.g;
          uStack_13 = *(Il2CppMethodPointer *)&(pSVar2->fields).BottomColor.a;
          ThemeSkybox::ThemeSkybox_set_BottomColor(pTVar8,(Color *)auStack_12,(MethodInfo *)0x0);
          pDVar1 = (this->fields).activeColorPreset;
          if ((pDVar1 != (DayNightCycleColorPresets_Preset *)0x0) &&
             (this_01 = (pDVar1->fields).starsParamList, this_01 != (StarsParamsList *)0x0)) {
            pSVar14 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParamsList::
                      StarsParamsList_GetParamPerTime(this_01,timeOfDay,(MethodInfo *)0x0);
            bVar3 = iRam_? != 0;
            (this->fields)._CurrentStarsParam_k__BackingField = pSVar14;
            if (bVar3) {
              uVar4 = (uint)((ulonglong)&(this->fields)._CurrentStarsParam_k__BackingField >> 0xc);
              uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
              do {
                uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                LOCK();
                bVar3 = uVar6 == *puVar7;
                if (bVar3) {
                  *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                }
                UNLOCK();
              } while (!bVar3);
            }
            pSVar14 = (this->fields)._CurrentStarsParam_k__BackingField;
            if ((pSVar14 != (StarsParam *)0x0) &&
               (pTVar8 = (this->fields).skybox, pTVar8 != (ThemeSkybox *)0x0)) {
              pIVar9 = *(InvokerMethod *)&(pSVar14->fields).TintColor.g;
              pIVar10 = *(Il2CppMethodPointer *)&(pSVar14->fields).TintColor.a;
              if (cRam_? == '\0') {
                FUN_?(&StringLiteral__StarsTint);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar11 = (pTVar8->fields).skyboxMaterial;
              *(InvokerMethod *)&(pTVar8->fields)._starsTint = pIVar9;
              *(Il2CppMethodPointer *)&(pTVar8->fields)._starsTint.b = pIVar10;
              if (pMVar11 != (Material *)0x0) {
                auStack_12 = (undefined1  [8])pIVar9;
                uStack_13 = pIVar10;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                          (pMVar11,StringLiteral__StarsTint,(Color *)auStack_12,(MethodInfo *)0x0);
                fVar15 = _UNK_?;
                fVar16 = _UNK_?;
                pfVar17 = &(this->fields)._sunrise;
                if ((*pfVar17 <= timeOfDay && timeOfDay != *pfVar17) ||
                   (timeOfDay < (this->fields)._sunset)) {
                  fVar18 = (this->fields)._sunrise;
                  fVar19 = timeOfDay;
                  if (timeOfDay <= fVar18) {
                    fVar19 = timeOfDay + _UNK_?;
                  }
                  fVar19 = fVar19 - fVar18;
                  fVar18 = (this->fields)._sunDuration;
                  if (fVar18 <= fVar19) {
                    fVar19 = fVar18 - fVar19;
                  }
                  fVar19 = fVar19 / (this->fields)._sunDuration;
                  fVar18 = (this->fields)._sunOrbit.x;
                  fVar20 = (this->fields)._sunOrbit.y;
                  if (fVar19 < 0.0) {
                    fVar19 = 0.0;
                  }
                  else if (_UNK_? < fVar19) {
                    fVar19 = _UNK_?;
                  }
                  fVar21 = (this->fields)._sunLongitude;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
                  VStack_23.x = (pVVar22->upVector).x;
                  VStack_23.y = (pVVar22->upVector).y;
                  VStack_23.z = (pVVar22->upVector).z;
                  auStack_12 = (undefined1  [8])0x0;
                  uStack_13 = (Il2CppMethodPointer)0x0;
                  pcVar24 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0)) {
                    uVar25 = func_?(&UNK_?);
                    FUN_?(uVar25,0);
                    pcVar24 = (code *)swi(3);
                    (*pcVar24)();
                    return;
                  }
                  pcRam_? = pcVar24;
                  (*pcRam_?)(fVar21 - fVar15,&VStack_23,auStack_12);
                  VStack_26.x = (this->fields)._sunAttitudeVector.x;
                  VStack_26.y = (this->fields)._sunAttitudeVector.y;
                  VStack_26.z = (this->fields)._sunAttitudeVector.z;
                  auStack_27 = (undefined1  [8])0x0;
                  uStack_28 = (Il2CppMethodPointer)0x0;
                  pcVar24 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0)) {
                    uVar25 = func_?(&UNK_?);
                    FUN_?(uVar25,0);
                    pcVar24 = (code *)swi(3);
                    (*pcVar24)();
                    return;
                  }
                  pcRam_? = pcVar24;
                  pMVar29 = (MethodInfo *)auStack_27;
                  (*pcRam_?)((fVar20 - fVar18) * fVar19 + fVar18,&VStack_26);
                  fVar18 = (float)uStack_28 * (float)auStack_12._4_4_;
                  fVar19 = (float)auStack_12._0_4_ * (float)auStack_27._4_4_;
                  fVar21 = (float)auStack_12._0_4_ * (float)auStack_27._0_4_;
                  fVar20 = (float)auStack_27._4_4_ * (float)auStack_12._4_4_;
                  fVar15 = (float)auStack_27._0_4_ * (float)auStack_12._4_4_;
                  auStack_12._4_4_ =
                       ((float)auStack_27._4_4_ * uStack_13._4_4_ +
                        uStack_28._4_4_ * (float)auStack_12._4_4_ +
                       (float)auStack_27._0_4_ * (float)uStack_13) -
                       (float)auStack_12._0_4_ * (float)uStack_28;
                  auStack_12._0_4_ =
                       ((float)auStack_12._0_4_ * uStack_28._4_4_ +
                        (float)auStack_27._0_4_ * uStack_13._4_4_ + fVar18) -
                       (float)auStack_27._4_4_ * (float)uStack_13;
                  uStack_13 = (Il2CppMethodPointer)
                              CONCAT44(((uStack_28._4_4_ * uStack_13._4_4_ - fVar21) - fVar20) -
                                       (float)uStack_28 * (float)uStack_13,
                                       ((float)uStack_28 * uStack_13._4_4_ +
                                        uStack_28._4_4_ * (float)uStack_13 + fVar19) - fVar15);
                  pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_get_eulerAngles(&VStack_26,(Quaternion *)auStack_12,pMVar29);
                  fVar15 = pVVar30->x * _UNK_?;
                  pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_get_eulerAngles(&VStack_23,(Quaternion *)auStack_12,pMVar29);
                  VStack_26.z = 0.0;
                  VStack_26.y = pVVar30->y * _UNK_?;
                  VStack_26.x = fVar15;
                  auStack_12 = (undefined1  [8])0x0;
                  uStack_13 = (Il2CppMethodPointer)0x0;
                  pcVar24 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0)) {
                    uVar25 = func_?(&UNK_?);
                    FUN_?(uVar25,0);
                    pcVar24 = (code *)swi(3);
                    (*pcVar24)();
                    return;
                  }
                  pcRam_? = pcVar24;
                  (*pcRam_?)(&VStack_26,auStack_12);
                  pTVar8 = (this->fields).skybox;
                  if (pTVar8 == (ThemeSkybox *)0x0) goto code_?;
                  ThemeSkybox::ThemeSkybox_set_SunRotation
                            (pTVar8,(Quaternion *)auStack_12,(MethodInfo *)0x0);
                }
                fVar18 = _UNK_?;
                fVar15 = _UNK_?;
                pDVar1 = (this->fields).activeColorPreset;
                if ((pDVar1 != (DayNightCycleColorPresets_Preset *)0x0) &&
                   (pCVar31 = (pDVar1->fields).sunParamsList, pCVar31 != (CelestialParamsList *)0x0))
                {
                  pCVar32 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParamsList::
                            CelestialParamsList_GetParamPerTime(pCVar31,timeOfDay,(MethodInfo *)0x0);
                  bVar3 = iRam_? != 0;
                  (this->fields)._CurrentSunParam_k__BackingField = pCVar32;
                  if (bVar3) {
                    uVar4 = (uint)((ulonglong)&(this->fields)._CurrentSunParam_k__BackingField >>
                                   0xc);
                    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                    do {
                      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                      LOCK();
                      bVar3 = uVar6 == *puVar7;
                      if (bVar3) {
                        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar3);
                  }
                  pCVar32 = (this->fields)._CurrentSunParam_k__BackingField;
                  if ((pCVar32 != (CelestialParam *)0x0) &&
                     (pTVar8 = (this->fields).skybox, pTVar8 != (ThemeSkybox *)0x0)) {
                    pIVar9 = *(InvokerMethod *)&(pCVar32->fields).TintColor.g;
                    pIVar10 = *(Il2CppMethodPointer *)&(pCVar32->fields).TintColor.a;
                    if (cRam_? == '\0') {
                      FUN_?(&StringLiteral__SunTint);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pMVar11 = (pTVar8->fields).skyboxMaterial;
                    *(InvokerMethod *)&(pTVar8->fields)._sunTint = pIVar9;
                    *(Il2CppMethodPointer *)&(pTVar8->fields)._sunTint.b = pIVar10;
                    if (pMVar11 != (Material *)0x0) {
                      auStack_12 = (undefined1  [8])pIVar9;
                      uStack_13 = pIVar10;
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                                (pMVar11,StringLiteral__SunTint,(Color *)auStack_12,(MethodInfo *)0x0
                                );
                      pTVar8 = (this->fields).skybox;
                      if (((pTVar8 != (ThemeSkybox *)0x0) &&
                          (pFVar33 = (pTVar8->fields)._sun, pFVar33 != (FlareLight *)0x0)) &&
                         (pCVar32 = (this->fields)._CurrentSunParam_k__BackingField,
                         pCVar32 != (CelestialParam *)0x0)) {
                        pLVar34 = (pFVar33->fields).light;
                        uVar25._0_4_ = (pCVar32->fields).LightColor.g;
                        uVar25._4_4_ = (pCVar32->fields).LightColor.b;
                        fVar19 = (pCVar32->fields).LightColor.a;
                        fVar20 = (pCVar32->fields).LightIntencity;
                        if (pLVar34 != (Light *)0x0) {
                          VStack_23._0_8_ = uVar25;
                          VStack_23.z = fVar19;
                          fStack_35 = fVar20;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pvVar36 = (pLVar34->fields)._._._.m_CachedPtr;
                          if (pvVar36 == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pLVar34,(MethodInfo *)0x0);
                            pcVar24 = (code *)swi(3);
                            (*pcVar24)();
                            return;
                          }
                          pcVar24 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar24 = (code *)FUN_?(&UNK_?),
                             pcVar24 == (code *)0x0)) {
                            uVar25 = func_?(&UNK_?);
                            FUN_?(uVar25,0);
                            pcVar24 = (code *)swi(3);
                            (*pcVar24)();
                            return;
                          }
                          pcRam_? = pcVar24;
                          (*pcRam_?)(pvVar36,&VStack_23);
                          pTVar8 = (this->fields).skybox;
                          if (((pTVar8 != (ThemeSkybox *)0x0) &&
                              (pFVar33 = (pTVar8->fields)._sun, pFVar33 != (FlareLight *)0x0)) &&
                             ((pCVar32 = (this->fields)._CurrentSunParam_k__BackingField,
                              pCVar32 != (CelestialParam *)0x0 &&
                              (pLVar34 = (pFVar33->fields).light, pLVar34 != (Light *)0x0)))) {
                            UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                                      (pLVar34,*(float *)&pCVar32[1].klass,(MethodInfo *)0x0);
                            pTVar8 = (this->fields).skybox;
                            if ((pTVar8 != (ThemeSkybox *)0x0) &&
                               (pFVar33 = (pTVar8->fields)._sun, pFVar33 != (FlareLight *)0x0)) {
                              pLVar37 = (pFVar33->fields).lensFlare;
                              pLVar34 = (((((this->fields).skybox)->fields)._sun)->fields).light;
                              if (pLVar34 != (Light *)0x0) {
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pvVar36 = (pLVar34->fields)._._._.m_CachedPtr;
                                if (pvVar36 == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pLVar34,(MethodInfo *)0x0);
                                  pcVar24 = (code *)swi(3);
                                  (*pcVar24)();
                                  return;
                                }
                                pcVar24 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar24 = (code *)FUN_?(&UNK_?),
                                   pcVar24 == (code *)0x0)) {
                                  uVar25 = func_?(&UNK_?);
                                  FUN_?(uVar25,0);
                                  pcVar24 = (code *)swi(3);
                                  (*pcVar24)();
                                  return;
                                }
                                pcRam_? = pcVar24;
                                fVar19 = (float)(*pcRam_?)(pvVar36);
                                pTVar8 = (this->fields).skybox;
                                if ((pTVar8 != (ThemeSkybox *)0x0) && (pLVar37 != (LensFlare *)0x0))
                                {
                                  UnityEngine.CoreModule.dll::UnityEngine::LensFlare::
                                  LensFlare_set_brightness
                                            (pLVar37,fVar19 * (pTVar8->fields)._sunFlareBrightness,
                                             (MethodInfo *)0x0);
                                  pTVar8 = (this->fields).skybox;
                                  if ((pTVar8 != (ThemeSkybox *)0x0) &&
                                     (pFVar33 = (pTVar8->fields)._sun, pFVar33 != (FlareLight *)0x0))
                                  {
                                    pLVar37 = (pFVar33->fields).lensFlare;
                                    pLVar38 = (((((this->fields).skybox)->fields)._sun)->fields).
                                              lensFlare;
                                    if (pLVar38 != (LensFlare *)0x0) {
                                      if (cRam_? == '\0') {
                                        FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LensFlare>_UnityEngine__LensFlare_
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pvVar36 = (pLVar38->fields)._._._.m_CachedPtr;
                                      if (pvVar36 == (void *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                        ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                  ((Object *)pLVar38,(MethodInfo *)0x0);
                                        pcVar24 = (code *)swi(3);
                                        (*pcVar24)();
                                        return;
                                      }
                                      pcVar24 = pcRam_?;
                                      if ((pcRam_? == (code *)0x0) &&
                                         (pcVar24 = (code *)FUN_?(&UNK_?),
                                         pcVar24 == (code *)0x0)) {
                                        uVar25 = func_?(&UNK_?);
                                        FUN_?(uVar25,0);
                                        pcVar24 = (code *)swi(3);
                                        (*pcVar24)();
                                        return;
                                      }
                                      pcRam_? = pcVar24;
                                      uVar39 = (*pcRam_?)(pvVar36);
                                      bVar40 = FUN_?(uVar39,0);
                                      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                      Behaviour_set_enabled
                                                ((Behaviour *)pLVar37,bVar40 ^ 1,(MethodInfo *)0x0);
                                      pfVar17 = &(this->fields)._moonrise;
                                      if ((*pfVar17 <= timeOfDay && timeOfDay != *pfVar17) ||
                                         (timeOfDay < (this->fields)._moonset)) {
                                        fVar19 = (this->fields)._moonrise;
                                        fVar20 = timeOfDay;
                                        if (timeOfDay <= fVar19) {
                                          fVar20 = timeOfDay + fVar15;
                                        }
                                        fVar20 = fVar20 - fVar19;
                                        fVar15 = (this->fields)._moonDuration;
                                        if (fVar15 <= fVar20) {
                                          fVar20 = fVar15 - fVar20;
                                        }
                                        fVar20 = fVar20 / (this->fields)._moonDuration;
                                        fVar15 = (this->fields)._moonOrbit.x;
                                        fVar19 = (this->fields)._moonOrbit.y;
                                        if (fVar20 < 0.0) {
                                          fVar20 = 0.0;
                                        }
                                        else if (fVar16 < fVar20) {
                                          fVar20 = fVar16;
                                        }
                                        fVar16 = (this->fields)._moonLongitude;
                                        if (cRam_? == '\0') {
                                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
                                        VStack_26.x = (pVVar22->upVector).x;
                                        VStack_26.y = (pVVar22->upVector).y;
                                        VStack_26.z = (pVVar22->upVector).z;
                                        auStack_27 = (undefined1  [8])0x0;
                                        uStack_28 = (Il2CppMethodPointer)0x0;
                                        pcVar24 = pcRam_?;
                                        if ((pcRam_? == (code *)0x0) &&
                                           (pcVar24 = (code *)FUN_?(&UNK_?),
                                           pcVar24 == (code *)0x0)) {
                                          uVar25 = func_?(&UNK_?);
                                          FUN_?(uVar25,0);
                                          pcVar24 = (code *)swi(3);
                                          (*pcVar24)();
                                          return;
                                        }
                                        pcRam_? = pcVar24;
                                        (*pcRam_?)
                                                  (fVar16 - fVar18,&VStack_26,auStack_27);
                                        VStack_23.x = (this->fields)._moonAttitudeVector.x;
                                        VStack_23.y = (this->fields)._moonAttitudeVector.y;
                                        VStack_23.z = (this->fields)._moonAttitudeVector.z;
                                        auStack_12 = (undefined1  [8])0x0;
                                        uStack_13 = (Il2CppMethodPointer)0x0;
                                        pcVar24 = pcRam_?;
                                        if ((pcRam_? == (code *)0x0) &&
                                           (pcVar24 = (code *)FUN_?(&UNK_?),
                                           pcVar24 == (code *)0x0)) {
                                          uVar25 = func_?(&UNK_?);
                                          FUN_?(uVar25,0);
                                          pcVar24 = (code *)swi(3);
                                          (*pcVar24)();
                                          return;
                                        }
                                        pcRam_? = pcVar24;
                                        pMVar29 = (MethodInfo *)auStack_12;
                                        (*pcRam_?)
                                                  ((fVar19 - fVar15) * fVar20 + fVar15,&VStack_23);
                                        fVar16 = (float)auStack_12._4_4_ * (float)uStack_28;
                                        fVar18 = (float)auStack_12._4_4_ * (float)auStack_27._0_4_;
                                        fVar19 = (float)auStack_12._4_4_ * (float)auStack_27._4_4_;
                                        fVar20 = (float)auStack_12._0_4_ * (float)auStack_27._0_4_;
                                        fVar15 = (float)auStack_12._0_4_ * (float)auStack_27._4_4_;
                                        auStack_12._4_4_ =
                                             ((float)auStack_12._4_4_ * uStack_28._4_4_ +
                                              uStack_13._4_4_ * (float)auStack_27._4_4_ +
                                             (float)auStack_12._0_4_ * (float)uStack_28) -
                                             (float)uStack_13 * (float)auStack_27._0_4_;
                                        auStack_12._0_4_ =
                                             ((float)auStack_12._0_4_ * uStack_28._4_4_ +
                                              uStack_13._4_4_ * (float)auStack_27._0_4_ +
                                             (float)uStack_13 * (float)auStack_27._4_4_) - fVar16;
                                        uStack_13 = (Il2CppMethodPointer)
                                                    CONCAT44(((uStack_13._4_4_ * uStack_28._4_4_ -
                                                              fVar20) - fVar19) -
                                                             (float)uStack_13 * (float)uStack_28,
                                                             ((float)uStack_13 * uStack_28._4_4_ +
                                                              uStack_13._4_4_ * (float)uStack_28 +
                                                             fVar18) - fVar15);
                                        pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  Quaternion::Quaternion_get_eulerAngles
                                                            (&VStack_26,(Quaternion *)auStack_12,
                                                             pMVar29);
                                        fVar16 = pVVar30->x * _UNK_?;
                                        pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  Quaternion::Quaternion_get_eulerAngles
                                                            (&VStack_23,(Quaternion *)auStack_12,
                                                             pMVar29);
                                        VStack_26.z = 0.0;
                                        VStack_26.y = pVVar30->y * _UNK_?;
                                        VStack_26.x = fVar16;
                                        auStack_12 = (undefined1  [8])0x0;
                                        uStack_13 = (Il2CppMethodPointer)0x0;
                                        pcVar24 = pcRam_?;
                                        if ((pcRam_? == (code *)0x0) &&
                                           (pcVar24 = (code *)FUN_?(&UNK_?),
                                           pcVar24 == (code *)0x0)) {
                                          uVar25 = func_?(&UNK_?);
                                          FUN_?(uVar25,0);
                                          pcVar24 = (code *)swi(3);
                                          (*pcVar24)();
                                          return;
                                        }
                                        pcRam_? = pcVar24;
                                        (*pcRam_?)(&VStack_26,auStack_12);
                                        pTVar8 = (this->fields).skybox;
                                        if (pTVar8 == (ThemeSkybox *)0x0) goto code_?;
                                        ThemeSkybox::ThemeSkybox_set_MoonRotation
                                                  (pTVar8,(Quaternion *)auStack_12,(MethodInfo *)0x0
                                                  );
                                      }
                                      pDVar1 = (this->fields).activeColorPreset;
                                      if ((pDVar1 != (DayNightCycleColorPresets_Preset *)0x0) &&
                                         (pCVar31 = (pDVar1->fields).moonParamsList,
                                         pCVar31 != (CelestialParamsList *)0x0)) {
                                        pCVar32 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::
                                                  CelestialParamsList::
                                                  CelestialParamsList_GetParamPerTime
                                                            (pCVar31,timeOfDay,(MethodInfo *)0x0);
                                        bVar3 = iRam_? != 0;
                                        (this->fields)._CurrentMoonParam_k__BackingField = pCVar32;
                                        if (bVar3) {
                                          uVar4 = (uint)((ulonglong)
                                                          &(this->fields).
                                                           _CurrentMoonParam_k__BackingField >> 0xc)
                                          ;
                                          uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
                                          do {
                                            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                                            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                                            LOCK();
                                            bVar3 = uVar6 == *puVar7;
                                            if (bVar3) {
                                              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                                            }
                                            UNLOCK();
                                          } while (!bVar3);
                                        }
                                        pCVar32 = (this->fields)._CurrentMoonParam_k__BackingField;
                                        if ((pCVar32 != (CelestialParam *)0x0) &&
                                           (pTVar8 = (this->fields).skybox,
                                           pTVar8 != (ThemeSkybox *)0x0)) {
                                          pIVar9 = *(InvokerMethod *)&(pCVar32->fields).TintColor.g
                                          ;
                                          pIVar10 = *(Il2CppMethodPointer *)
                                                     &(pCVar32->fields).TintColor.a;
                                          if (cRam_? == '\0') {
                                            FUN_?(&StringLiteral__MoonTint);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          pMVar11 = (pTVar8->fields).skyboxMaterial;
                                          *(InvokerMethod *)&(pTVar8->fields)._moonTint = pIVar9;
                                          *(Il2CppMethodPointer *)&(pTVar8->fields)._moonTint.b =
                                               pIVar10;
                                          if (pMVar11 != (Material *)0x0) {
                                            auStack_12 = (undefined1  [8])pIVar9;
                                            uStack_13 = pIVar10;
                                            UnityEngine.CoreModule.dll::UnityEngine::Material::
                                            Material_SetColor(pMVar11,StringLiteral__MoonTint,
                                                              (Color *)auStack_12,(MethodInfo *)0x0)
                                            ;
                                            pTVar8 = (this->fields).skybox;
                                            if (((pTVar8 != (ThemeSkybox *)0x0) &&
                                                (pFVar33 = (pTVar8->fields)._moon,
                                                pFVar33 != (FlareLight *)0x0)) &&
                                               (pCVar32 = (this->fields).
                                                          _CurrentMoonParam_k__BackingField,
                                               pCVar32 != (CelestialParam *)0x0)) {
                                              pLVar34 = (pFVar33->fields).light;
                                              pIVar10 = *(Il2CppMethodPointer *)
                                                         &(pCVar32->fields).LightColor.g;
                                              pIVar41 = *(Il2CppMethodPointer *)
                                                         &(pCVar32->fields).LightColor.a;
                                              if (pLVar34 != (Light *)0x0) {
                                                auStack_27 = (undefined1  [8])pIVar10;
                                                uStack_28 = pIVar41;
                                                if (cRam_? == '\0') {
                                                  FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                }
                                                pvVar36 = (pLVar34->fields)._._._.m_CachedPtr;
                                                if (pvVar36 == (void *)0x0) {
                                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings
                                                  ::ThrowHelper::
                                                  ThrowHelper_2_ThrowNullReferenceException
                                                            ((Object *)pLVar34,(MethodInfo *)0x0);
                                                  pcVar24 = (code *)swi(3);
                                                  (*pcVar24)();
                                                  return;
                                                }
                                                pcVar24 = pcRam_?;
                                                if ((pcRam_? == (code *)0x0) &&
                                                   (pcVar24 = (code *)FUN_?(&UNK_?),
                                                   pcVar24 == (code *)0x0)) {
                                                  uVar25 = func_?(&UNK_?);
                                                  FUN_?(uVar25,0);
                                                  pcVar24 = (code *)swi(3);
                                                  (*pcVar24)();
                                                  return;
                                                }
                                                pcRam_? = pcVar24;
                                                (*pcRam_?)(pvVar36,auStack_27);
                                                pTVar8 = (this->fields).skybox;
                                                if (((pTVar8 != (ThemeSkybox *)0x0) &&
                                                    (pFVar33 = (pTVar8->fields)._moon,
                                                    pFVar33 != (FlareLight *)0x0)) &&
                                                   ((pCVar32 = (this->fields).
                                                               _CurrentMoonParam_k__BackingField,
                                                    pCVar32 != (CelestialParam *)0x0 &&
                                                    (pLVar34 = (pFVar33->fields).light,
                                                    pLVar34 != (Light *)0x0)))) {
                                                  UnityEngine.CoreModule.dll::UnityEngine::Light::
                                                  Light_set_intensity(pLVar34,*(float *)&pCVar32[1].
                                                                                         klass,
                                                                      (MethodInfo *)0x0);
                                                  pTVar8 = (this->fields).skybox;
                                                  if ((pTVar8 != (ThemeSkybox *)0x0) &&
                                                     (pFVar33 = (pTVar8->fields)._moon,
                                                     pFVar33 != (FlareLight *)0x0)) {
                                                    pLVar37 = (pFVar33->fields).lensFlare;
                                                    pLVar34 = (((((this->fields).skybox)->fields).
                                                               _moon)->fields).light;
                                                    if (pLVar34 != (Light *)0x0) {
                                                      if (cRam_? == '\0') {
                                                        FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar36 = (pLVar34->fields)._._._.m_CachedPtr;
                                                  if (pvVar36 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pLVar34,(MethodInfo *)0x0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcVar24 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar24 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar24 == (code *)0x0)) {
                                                    uVar25 = func_?(&UNK_?);
                                                    FUN_?(uVar25,0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar24;
                                                  fVar16 = (float)(*pcRam_?)(pvVar36);
                                                  pTVar8 = (this->fields).skybox;
                                                  if ((pTVar8 != (ThemeSkybox *)0x0) &&
                                                     (pLVar37 != (LensFlare *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    LensFlare::LensFlare_set_brightness
                                                              (pLVar37,fVar16 * (pTVar8->fields).
                                                                                _moonFlareBrightness
                                                               ,(MethodInfo *)0x0);
                                                    pTVar8 = (this->fields).skybox;
                                                    if ((pTVar8 != (ThemeSkybox *)0x0) &&
                                                       (pFVar33 = (pTVar8->fields)._moon,
                                                       pFVar33 != (FlareLight *)0x0)) {
                                                      pLVar37 = (pFVar33->fields).lensFlare;
                                                      pLVar38 = (((((this->fields).skybox)->fields).
                                                                 _moon)->fields).lensFlare;
                                                      if (pLVar38 != (LensFlare *)0x0) {
                                                        if (cRam_? == '\0') {
                                                          FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LensFlare>_UnityEngine__LensFlare_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar36 = (pLVar38->fields)._._._.m_CachedPtr;
                                                  if (pvVar36 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pLVar38,(MethodInfo *)0x0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcVar24 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar24 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar24 == (code *)0x0)) {
                                                    uVar25 = func_?(&UNK_?);
                                                    FUN_?(uVar25,0);
                                                    pcVar24 = (code *)swi(3);
                                                    (*pcVar24)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar24;
                                                  uVar39 = (*pcRam_?)(pvVar36);
                                                  bVar40 = FUN_?(uVar39,0);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour
                                                  ::Behaviour_set_enabled
                                                            ((Behaviour *)pLVar37,bVar40 ^ 1,
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
                                      FUN_?();
                                      pcVar24 = (code *)swi(3);
                                      (*pcVar24)();
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
                FUN_?();
                pcVar24 = (code *)swi(3);
                (*pcVar24)();
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* DayNightCycle() */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle__ctor(DayNightCycle *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
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
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x30528cee,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Single get_TimeOfDay() */

float Assembly-CSharp.dll::DayNightCycle::DayNightCycle_get_TimeOfDay
                (DayNightCycle *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).timer;
  if (pIVar1 == (ITimer *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    fVar3 = (float)(*pcVar2)();
    return fVar3;
  }
  pIVar4 = pIVar1->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__ThemeTimers__ITimer) {
        pVVar7 = &(pIVar4->vtable).get_Time + pIVar4->interfaceOffsets[uVar5].offset;
        goto code_?;
      }
      uVar8 = (short)uVar5 + 1;
      uVar5 = (ulonglong)uVar8;
    } while (uVar8 < uVar6);
  }
  pVVar7 = (VirtualInvokeData *)FUN_?(pIVar1,TypeInfo__ThemeTimers__ITimer,0);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar3 = (float)(*pVVar7->methodPtr)(pIVar1,pVVar7->method,pVVar7->methodPtr);
  return fVar3;
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
  FUN_?();
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
  FUN_?();
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
  FUN_?();
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (CelestialParamsList *)(*pcVar2)();
  return pCVar3;
}


/* Void set_ColorPreset(Int32) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_ColorPreset
               (DayNightCycle *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeTimers__ITimer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).colorPresets;
  if (this_00 == (DayNightCycleColorPresets *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pDVar2 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                     (this_00,value,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).activeColorPreset = pDVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).activeColorPreset >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  if ((this->fields).initialized != 0) {
    if ((this->fields).timer == (ITimer *)0x0) goto code_?;
    timeOfDay = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
    DayNightCycle_Update_1(this,timeOfDay,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_CycleLength(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_CycleLength
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeTimers__ITimer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeTimers__Timer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).cycleLength = value;
  if ((this->fields).initialized == 0) {
    return;
  }
  if ((this->fields).timer != (ITimer *)0x0) {
    uVar1 = FUN_?(0,TypeInfo__ThemeTimers__ITimer);
    fVar2 = (this->fields).cycleLength;
    pIVar3 = (ITimer *)FUN_?(TypeInfo__ThemeTimers__Timer);
    bVar4 = iRam_? != 0;
    *(float *)((longlong)&pIVar3[1].klass + 4) = _UNK_? / fVar2;
    *(undefined4 *)&pIVar3[1].klass = uVar1;
    (this->fields).timer = pIVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).timer >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    if ((this->fields).timer != (ITimer *)0x0) {
      fVar2 = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
      DayNightCycle_Update_1(this,fVar2,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void set_InitialTimeOfDay(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_InitialTimeOfDay
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeTimers__ITimer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeTimers__Timer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = (float)FUN_?(value,_UNK_?);
  (this->fields).cycleStartTime = fVar2;
  if ((this->fields).initialized != 0) {
    fVar3 = (this->fields).cycleLength;
    pIVar4 = (ITimer *)FUN_?(TypeInfo__ThemeTimers__Timer);
    bVar5 = iRam_? != 0;
    *(float *)&pIVar4[1].klass = fVar2;
    *(float *)((longlong)&pIVar4[1].klass + 4) = fVar1 / fVar3;
    (this->fields).timer = pIVar4;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).timer >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    if ((this->fields).timer == (ITimer *)0x0) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    fVar1 = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
    DayNightCycle_Update_1(this,fVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_IsPaused(Boolean) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_IsPaused
               (DayNightCycle *this,bool value,MethodInfo *method)

{
  (this->fields).isPaused = value;
  return;
}


/* Void set_MoonAltitude(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_MoonAltitude
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeTimers__ITimer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._moonAltitude = value;
  fVar1 = value * _UNK_?;
  uVar2 = FUN_?(fVar1);
  uVar3 = FUN_?(fVar1);
  bVar4 = (this->fields).initialized;
  (this->fields)._moonAttitudeVector.x = (float)uVar2;
  (this->fields)._moonAttitudeVector.y = (float)uVar3;
  (this->fields)._moonAttitudeVector.z = 0.0;
  if (bVar4 != 0) {
    if ((this->fields).timer == (ITimer *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar1 = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
    DayNightCycle_Update_1(this,fVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_MoonLongitude(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_MoonLongitude
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeTimers__ITimer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._moonLongitude = value;
  if ((this->fields).initialized != 0) {
    if ((this->fields).timer == (ITimer *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    timeOfDay = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
    DayNightCycle_Update_1(this,timeOfDay,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_MoonriseTime(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_MoonriseTime
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeTimers__ITimer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = (float)FUN_?(value,_UNK_?);
  fVar3 = (this->fields)._moonset;
  (this->fields)._moonrise = fVar2;
  if (fVar3 <= fVar2) {
    fVar3 = (fVar1 - fVar2) + fVar3;
  }
  else {
    fVar3 = fVar3 - fVar2;
  }
  (this->fields)._moonDuration = fVar3;
  if ((this->fields).initialized != 0) {
    if ((this->fields).timer == (ITimer *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar3 = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
    DayNightCycle_Update_1(this,fVar3,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_MoonsetTime(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_MoonsetTime
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeTimers__ITimer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = (float)FUN_?(value,_UNK_?);
  fVar3 = (this->fields)._moonrise;
  (this->fields)._moonset = fVar2;
  if (fVar2 <= fVar3) {
    fVar2 = (fVar1 - fVar3) + fVar2;
  }
  else {
    fVar2 = fVar2 - fVar3;
  }
  (this->fields)._moonDuration = fVar2;
  if ((this->fields).initialized != 0) {
    if ((this->fields).timer == (ITimer *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar3 = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
    DayNightCycle_Update_1(this,fVar3,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_SunAltitude(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_SunAltitude
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeTimers__ITimer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._sunAltitude = value;
  fVar1 = value * _UNK_?;
  uVar2 = FUN_?(fVar1);
  uVar3 = FUN_?(fVar1);
  bVar4 = (this->fields).initialized;
  (this->fields)._sunAttitudeVector.x = (float)uVar2;
  (this->fields)._sunAttitudeVector.y = (float)uVar3;
  (this->fields)._sunAttitudeVector.z = 0.0;
  if (bVar4 != 0) {
    if ((this->fields).timer == (ITimer *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar1 = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
    DayNightCycle_Update_1(this,fVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_SunLongitude(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_SunLongitude
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeTimers__ITimer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._sunLongitude = value;
  if ((this->fields).initialized != 0) {
    if ((this->fields).timer == (ITimer *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    timeOfDay = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
    DayNightCycle_Update_1(this,timeOfDay,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_SunriseTime(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_SunriseTime
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeTimers__ITimer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = (float)FUN_?(value,_UNK_?);
  fVar3 = (this->fields)._sunset;
  (this->fields)._sunrise = fVar2;
  if (fVar3 <= fVar2) {
    fVar3 = (fVar1 - fVar2) + fVar3;
  }
  else {
    fVar3 = fVar3 - fVar2;
  }
  (this->fields)._sunDuration = fVar3;
  if ((this->fields).initialized != 0) {
    if ((this->fields).timer == (ITimer *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar3 = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
    DayNightCycle_Update_1(this,fVar3,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_SunsetTime(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_SunsetTime
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeTimers__ITimer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = (float)FUN_?(value,_UNK_?);
  fVar3 = (this->fields)._sunrise;
  (this->fields)._sunset = fVar2;
  if (fVar2 <= fVar3) {
    fVar2 = (fVar1 - fVar3) + fVar2;
  }
  else {
    fVar2 = fVar2 - fVar3;
  }
  (this->fields)._sunDuration = fVar2;
  if ((this->fields).initialized != 0) {
    if ((this->fields).timer == (ITimer *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar3 = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
    DayNightCycle_Update_1(this,fVar3,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_TimeOfDay(Single) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_TimeOfDay
               (DayNightCycle *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeTimers__ITimer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeTimers__Timer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).cycleLength;
  pIVar2 = (ITimer *)FUN_?(TypeInfo__ThemeTimers__Timer);
  bVar3 = iRam_? != 0;
  fVar1 = _UNK_? / fVar1;
  *(float *)&pIVar2[1].klass = value;
  *(float *)((longlong)&pIVar2[1].klass + 4) = fVar1;
  (this->fields).timer = pIVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).timer >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  if ((this->fields).initialized != 0) {
    if ((this->fields).timer == (ITimer *)0x0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar1 = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
    DayNightCycle_Update_1(this,fVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_UseServerTime(Boolean) */

void Assembly-CSharp.dll::DayNightCycle::DayNightCycle_set_UseServerTime
               (DayNightCycle *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeTimers__ITimer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeTimers__SystemTimer);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ThemeTimers__Timer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).useServerTime = value;
  if (value == 0) {
    fVar1 = (this->fields).cycleStartTime;
    fVar2 = (this->fields).cycleLength;
    pIVar3 = (ITimer *)FUN_?(TypeInfo__ThemeTimers__Timer);
    bVar4 = iRam_? != 0;
    fVar2 = _UNK_? / fVar2;
    *(float *)&pIVar3[1].klass = fVar1;
    *(float *)((longlong)&pIVar3[1].klass + 4) = fVar2;
    (this->fields).timer = pIVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).timer >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
  }
  else {
    pIVar3 = (ITimer *)FUN_?(TypeInfo__ThemeTimers__SystemTimer);
    bVar4 = iRam_? != 0;
    (this->fields).timer = pIVar3;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).timer >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
  }
  if ((this->fields).initialized == 0) {
    return;
  }
  if ((this->fields).timer == (ITimer *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  fVar1 = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
  pDVar10 = (this->fields).activeColorPreset;
  if ((pDVar10 != (DayNightCycleColorPresets_Preset *)0x0) &&
     (this_00 = (pDVar10->fields).skyParamList, this_00 != (SkyParamsList *)0x0)) {
    pSVar11 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParamsList::
              SkyParamsList_GetParamPerTime(this_00,fVar1,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    (this->fields)._CurrentSkyParam_k__BackingField = pSVar11;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields)._CurrentSkyParam_k__BackingField >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pSVar11 = (this->fields)._CurrentSkyParam_k__BackingField;
    if ((pSVar11 != (SkyParam *)0x0) &&
       (pTVar12 = (this->fields).skybox, pTVar12 != (ThemeSkybox *)0x0)) {
      pIVar13 = *(InvokerMethod *)&(pSVar11->fields).TopColor.g;
      pIVar14 = *(Il2CppMethodPointer *)&(pSVar11->fields).TopColor.a;
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral__TopColor);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar15 = (pTVar12->fields).skyboxMaterial;
      *(InvokerMethod *)&(pTVar12->fields)._topColor = pIVar13;
      *(Il2CppMethodPointer *)&(pTVar12->fields)._topColor.b = pIVar14;
      if (pMVar15 != (Material *)0x0) {
        auStack_16 = (undefined1  [8])pIVar13;
        uStack_17 = pIVar14;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                  (pMVar15,StringLiteral__TopColor,(Color *)auStack_16,(MethodInfo *)0x0);
        pSVar11 = (this->fields)._CurrentSkyParam_k__BackingField;
        if ((pSVar11 != (SkyParam *)0x0) &&
           (pTVar12 = (this->fields).skybox, pTVar12 != (ThemeSkybox *)0x0)) {
          auStack_16 = *(undefined1 (*) [8])&(pSVar11->fields).BottomColor.g;
          uStack_17 = *(Il2CppMethodPointer *)&(pSVar11->fields).BottomColor.a;
          ThemeSkybox::ThemeSkybox_set_BottomColor(pTVar12,(Color *)auStack_16,(MethodInfo *)0x0);
          pDVar10 = (this->fields).activeColorPreset;
          if ((pDVar10 != (DayNightCycleColorPresets_Preset *)0x0) &&
             (this_01 = (pDVar10->fields).starsParamList, this_01 != (StarsParamsList *)0x0)) {
            pSVar18 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParamsList::
                      StarsParamsList_GetParamPerTime(this_01,fVar1,(MethodInfo *)0x0);
            bVar4 = iRam_? != 0;
            (this->fields)._CurrentStarsParam_k__BackingField = pSVar18;
            if (bVar4) {
              uVar5 = (uint)((ulonglong)&(this->fields)._CurrentStarsParam_k__BackingField >> 0xc);
              uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
              do {
                uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                LOCK();
                bVar4 = uVar7 == *puVar8;
                if (bVar4) {
                  *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                }
                UNLOCK();
              } while (!bVar4);
            }
            pSVar18 = (this->fields)._CurrentStarsParam_k__BackingField;
            if ((pSVar18 != (StarsParam *)0x0) &&
               (pTVar12 = (this->fields).skybox, pTVar12 != (ThemeSkybox *)0x0)) {
              pIVar13 = *(InvokerMethod *)&(pSVar18->fields).TintColor.g;
              pIVar14 = *(Il2CppMethodPointer *)&(pSVar18->fields).TintColor.a;
              if (cRam_? == '\0') {
                FUN_?(&StringLiteral__StarsTint);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar15 = (pTVar12->fields).skyboxMaterial;
              *(InvokerMethod *)&(pTVar12->fields)._starsTint = pIVar13;
              *(Il2CppMethodPointer *)&(pTVar12->fields)._starsTint.b = pIVar14;
              if (pMVar15 != (Material *)0x0) {
                auStack_16 = (undefined1  [8])pIVar13;
                uStack_17 = pIVar14;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                          (pMVar15,StringLiteral__StarsTint,(Color *)auStack_16,(MethodInfo *)0x0);
                fVar19 = _UNK_?;
                fVar2 = _UNK_?;
                pfVar20 = &(this->fields)._sunrise;
                if ((*pfVar20 <= fVar1 && fVar1 != *pfVar20) || (fVar1 < (this->fields)._sunset)) {
                  fVar21 = (this->fields)._sunrise;
                  fVar22 = fVar1;
                  if (fVar1 <= fVar21) {
                    fVar22 = fVar1 + _UNK_?;
                  }
                  fVar22 = fVar22 - fVar21;
                  fVar21 = (this->fields)._sunDuration;
                  if (fVar21 <= fVar22) {
                    fVar22 = fVar21 - fVar22;
                  }
                  fVar22 = fVar22 / (this->fields)._sunDuration;
                  fVar21 = (this->fields)._sunOrbit.x;
                  fVar23 = (this->fields)._sunOrbit.y;
                  if (fVar22 < 0.0) {
                    fVar22 = 0.0;
                  }
                  else if (_UNK_? < fVar22) {
                    fVar22 = _UNK_?;
                  }
                  fVar24 = (this->fields)._sunLongitude;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
                  VStack_26.x = (pVVar25->upVector).x;
                  VStack_26.y = (pVVar25->upVector).y;
                  VStack_26.z = (pVVar25->upVector).z;
                  auStack_16 = (undefined1  [8])0x0;
                  uStack_17 = (Il2CppMethodPointer)0x0;
                  pcVar9 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                    uVar27 = func_?(&UNK_?);
                    FUN_?(uVar27,0);
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pcRam_? = pcVar9;
                  (*pcRam_?)(fVar24 - fVar19,&VStack_26,auStack_16);
                  VStack_28.x = (this->fields)._sunAttitudeVector.x;
                  VStack_28.y = (this->fields)._sunAttitudeVector.y;
                  VStack_28.z = (this->fields)._sunAttitudeVector.z;
                  auStack_29 = (undefined1  [8])0x0;
                  uStack_30 = (Il2CppMethodPointer)0x0;
                  pcVar9 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                    uVar27 = func_?(&UNK_?);
                    FUN_?(uVar27,0);
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pcRam_? = pcVar9;
                  pMVar31 = (MethodInfo *)auStack_29;
                  (*pcRam_?)((fVar23 - fVar21) * fVar22 + fVar21,&VStack_28);
                  fVar21 = (float)uStack_30 * (float)auStack_16._4_4_;
                  fVar22 = (float)auStack_16._0_4_ * (float)auStack_29._4_4_;
                  fVar24 = (float)auStack_16._0_4_ * (float)auStack_29._0_4_;
                  fVar23 = (float)auStack_29._4_4_ * (float)auStack_16._4_4_;
                  fVar19 = (float)auStack_29._0_4_ * (float)auStack_16._4_4_;
                  auStack_16._4_4_ =
                       ((float)auStack_29._4_4_ * uStack_17._4_4_ +
                        uStack_30._4_4_ * (float)auStack_16._4_4_ +
                       (float)auStack_29._0_4_ * (float)uStack_17) -
                       (float)auStack_16._0_4_ * (float)uStack_30;
                  auStack_16._0_4_ =
                       ((float)auStack_16._0_4_ * uStack_30._4_4_ +
                        (float)auStack_29._0_4_ * uStack_17._4_4_ + fVar21) -
                       (float)auStack_29._4_4_ * (float)uStack_17;
                  uStack_17 = (Il2CppMethodPointer)
                              CONCAT44(((uStack_30._4_4_ * uStack_17._4_4_ - fVar24) - fVar23) -
                                       (float)uStack_30 * (float)uStack_17,
                                       ((float)uStack_30 * uStack_17._4_4_ +
                                        uStack_30._4_4_ * (float)uStack_17 + fVar22) - fVar19);
                  pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_get_eulerAngles(&VStack_28,(Quaternion *)auStack_16,pMVar31);
                  fVar19 = pVVar32->x * _UNK_?;
                  pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_get_eulerAngles(&VStack_26,(Quaternion *)auStack_16,pMVar31);
                  VStack_28.z = 0.0;
                  VStack_28.y = pVVar32->y * _UNK_?;
                  VStack_28.x = fVar19;
                  auStack_16 = (undefined1  [8])0x0;
                  uStack_17 = (Il2CppMethodPointer)0x0;
                  pcVar9 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                    uVar27 = func_?(&UNK_?);
                    FUN_?(uVar27,0);
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pcRam_? = pcVar9;
                  (*pcRam_?)(&VStack_28,auStack_16);
                  pTVar12 = (this->fields).skybox;
                  if (pTVar12 == (ThemeSkybox *)0x0) goto code_?;
                  ThemeSkybox::ThemeSkybox_set_SunRotation
                            (pTVar12,(Quaternion *)auStack_16,(MethodInfo *)0x0);
                }
                fVar21 = _UNK_?;
                fVar19 = _UNK_?;
                pDVar10 = (this->fields).activeColorPreset;
                if ((pDVar10 != (DayNightCycleColorPresets_Preset *)0x0) &&
                   (pCVar33 = (pDVar10->fields).sunParamsList, pCVar33 != (CelestialParamsList *)0x0))
                {
                  pCVar34 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParamsList::
                            CelestialParamsList_GetParamPerTime(pCVar33,fVar1,(MethodInfo *)0x0);
                  bVar4 = iRam_? != 0;
                  (this->fields)._CurrentSunParam_k__BackingField = pCVar34;
                  if (bVar4) {
                    uVar5 = (uint)((ulonglong)&(this->fields)._CurrentSunParam_k__BackingField >>
                                   0xc);
                    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                    do {
                      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                      LOCK();
                      bVar4 = uVar7 == *puVar8;
                      if (bVar4) {
                        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar4);
                  }
                  pCVar34 = (this->fields)._CurrentSunParam_k__BackingField;
                  if ((pCVar34 != (CelestialParam *)0x0) &&
                     (pTVar12 = (this->fields).skybox, pTVar12 != (ThemeSkybox *)0x0)) {
                    pIVar13 = *(InvokerMethod *)&(pCVar34->fields).TintColor.g;
                    pIVar14 = *(Il2CppMethodPointer *)&(pCVar34->fields).TintColor.a;
                    if (cRam_? == '\0') {
                      FUN_?(&StringLiteral__SunTint);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pMVar15 = (pTVar12->fields).skyboxMaterial;
                    *(InvokerMethod *)&(pTVar12->fields)._sunTint = pIVar13;
                    *(Il2CppMethodPointer *)&(pTVar12->fields)._sunTint.b = pIVar14;
                    if (pMVar15 != (Material *)0x0) {
                      auStack_16 = (undefined1  [8])pIVar13;
                      uStack_17 = pIVar14;
                      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                                (pMVar15,StringLiteral__SunTint,(Color *)auStack_16,(MethodInfo *)0x0
                                );
                      pTVar12 = (this->fields).skybox;
                      if (((pTVar12 != (ThemeSkybox *)0x0) &&
                          (pFVar35 = (pTVar12->fields)._sun, pFVar35 != (FlareLight *)0x0)) &&
                         (pCVar34 = (this->fields)._CurrentSunParam_k__BackingField,
                         pCVar34 != (CelestialParam *)0x0)) {
                        pLVar36 = (pFVar35->fields).light;
                        uVar27._0_4_ = (pCVar34->fields).LightColor.g;
                        uVar27._4_4_ = (pCVar34->fields).LightColor.b;
                        fVar22 = (pCVar34->fields).LightColor.a;
                        fVar23 = (pCVar34->fields).LightIntencity;
                        if (pLVar36 != (Light *)0x0) {
                          VStack_26._0_8_ = uVar27;
                          VStack_26.z = fVar22;
                          fStack_37 = fVar23;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pvVar38 = (pLVar36->fields)._._._.m_CachedPtr;
                          if (pvVar38 == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pLVar36,(MethodInfo *)0x0);
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          pcVar9 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar9 = (code *)FUN_?(&UNK_?),
                             pcVar9 == (code *)0x0)) {
                            uVar27 = func_?(&UNK_?);
                            FUN_?(uVar27,0);
                            pcVar9 = (code *)swi(3);
                            (*pcVar9)();
                            return;
                          }
                          pcRam_? = pcVar9;
                          (*pcRam_?)(pvVar38,&VStack_26);
                          pTVar12 = (this->fields).skybox;
                          if (((pTVar12 != (ThemeSkybox *)0x0) &&
                              (pFVar35 = (pTVar12->fields)._sun, pFVar35 != (FlareLight *)0x0)) &&
                             ((pCVar34 = (this->fields)._CurrentSunParam_k__BackingField,
                              pCVar34 != (CelestialParam *)0x0 &&
                              (pLVar36 = (pFVar35->fields).light, pLVar36 != (Light *)0x0)))) {
                            UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                                      (pLVar36,*(float *)&pCVar34[1].klass,(MethodInfo *)0x0);
                            pTVar12 = (this->fields).skybox;
                            if ((pTVar12 != (ThemeSkybox *)0x0) &&
                               (pFVar35 = (pTVar12->fields)._sun, pFVar35 != (FlareLight *)0x0)) {
                              pLVar39 = (pFVar35->fields).lensFlare;
                              pLVar36 = (((((this->fields).skybox)->fields)._sun)->fields).light;
                              if (pLVar36 != (Light *)0x0) {
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pvVar38 = (pLVar36->fields)._._._.m_CachedPtr;
                                if (pvVar38 == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pLVar36,(MethodInfo *)0x0);
                                  pcVar9 = (code *)swi(3);
                                  (*pcVar9)();
                                  return;
                                }
                                pcVar9 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar9 = (code *)FUN_?(&UNK_?),
                                   pcVar9 == (code *)0x0)) {
                                  uVar27 = func_?(&UNK_?);
                                  FUN_?(uVar27,0);
                                  pcVar9 = (code *)swi(3);
                                  (*pcVar9)();
                                  return;
                                }
                                pcRam_? = pcVar9;
                                fVar22 = (float)(*pcRam_?)(pvVar38);
                                pTVar12 = (this->fields).skybox;
                                if ((pTVar12 != (ThemeSkybox *)0x0) && (pLVar39 != (LensFlare *)0x0))
                                {
                                  UnityEngine.CoreModule.dll::UnityEngine::LensFlare::
                                  LensFlare_set_brightness
                                            (pLVar39,fVar22 * (pTVar12->fields)._sunFlareBrightness,
                                             (MethodInfo *)0x0);
                                  pTVar12 = (this->fields).skybox;
                                  if ((pTVar12 != (ThemeSkybox *)0x0) &&
                                     (pFVar35 = (pTVar12->fields)._sun, pFVar35 != (FlareLight *)0x0))
                                  {
                                    pLVar39 = (pFVar35->fields).lensFlare;
                                    pLVar40 = (((((this->fields).skybox)->fields)._sun)->fields).
                                              lensFlare;
                                    if (pLVar40 != (LensFlare *)0x0) {
                                      if (cRam_? == '\0') {
                                        FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LensFlare>_UnityEngine__LensFlare_
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pvVar38 = (pLVar40->fields)._._._.m_CachedPtr;
                                      if (pvVar38 == (void *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                        ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                  ((Object *)pLVar40,(MethodInfo *)0x0);
                                        pcVar9 = (code *)swi(3);
                                        (*pcVar9)();
                                        return;
                                      }
                                      pcVar9 = pcRam_?;
                                      if ((pcRam_? == (code *)0x0) &&
                                         (pcVar9 = (code *)FUN_?(&UNK_?),
                                         pcVar9 == (code *)0x0)) {
                                        uVar27 = func_?(&UNK_?);
                                        FUN_?(uVar27,0);
                                        pcVar9 = (code *)swi(3);
                                        (*pcVar9)();
                                        return;
                                      }
                                      pcRam_? = pcVar9;
                                      uVar41 = (*pcRam_?)(pvVar38);
                                      bVar42 = FUN_?(uVar41,0);
                                      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                      Behaviour_set_enabled
                                                ((Behaviour *)pLVar39,bVar42 ^ 1,(MethodInfo *)0x0);
                                      pfVar20 = &(this->fields)._moonrise;
                                      if ((*pfVar20 <= fVar1 && fVar1 != *pfVar20) ||
                                         (fVar1 < (this->fields)._moonset)) {
                                        fVar22 = (this->fields)._moonrise;
                                        fVar23 = fVar1;
                                        if (fVar1 <= fVar22) {
                                          fVar23 = fVar1 + fVar19;
                                        }
                                        fVar23 = fVar23 - fVar22;
                                        fVar19 = (this->fields)._moonDuration;
                                        if (fVar19 <= fVar23) {
                                          fVar23 = fVar19 - fVar23;
                                        }
                                        fVar23 = fVar23 / (this->fields)._moonDuration;
                                        fVar19 = (this->fields)._moonOrbit.x;
                                        fVar22 = (this->fields)._moonOrbit.y;
                                        if (fVar23 < 0.0) {
                                          fVar23 = 0.0;
                                        }
                                        else if (fVar2 < fVar23) {
                                          fVar23 = fVar2;
                                        }
                                        fVar2 = (this->fields)._moonLongitude;
                                        if (cRam_? == '\0') {
                                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        pVVar25 = TypeInfo__UnityEngine__Vector3->static_fields;
                                        VStack_28.x = (pVVar25->upVector).x;
                                        VStack_28.y = (pVVar25->upVector).y;
                                        VStack_28.z = (pVVar25->upVector).z;
                                        auStack_29 = (undefined1  [8])0x0;
                                        uStack_30 = (Il2CppMethodPointer)0x0;
                                        pcVar9 = pcRam_?;
                                        if ((pcRam_? == (code *)0x0) &&
                                           (pcVar9 = (code *)FUN_?(&UNK_?),
                                           pcVar9 == (code *)0x0)) {
                                          uVar27 = func_?(&UNK_?);
                                          FUN_?(uVar27,0);
                                          pcVar9 = (code *)swi(3);
                                          (*pcVar9)();
                                          return;
                                        }
                                        pcRam_? = pcVar9;
                                        (*pcRam_?)
                                                  (fVar2 - fVar21,&VStack_28,auStack_29);
                                        VStack_26.x = (this->fields)._moonAttitudeVector.x;
                                        VStack_26.y = (this->fields)._moonAttitudeVector.y;
                                        VStack_26.z = (this->fields)._moonAttitudeVector.z;
                                        auStack_16 = (undefined1  [8])0x0;
                                        uStack_17 = (Il2CppMethodPointer)0x0;
                                        pcVar9 = pcRam_?;
                                        if ((pcRam_? == (code *)0x0) &&
                                           (pcVar9 = (code *)FUN_?(&UNK_?),
                                           pcVar9 == (code *)0x0)) {
                                          uVar27 = func_?(&UNK_?);
                                          FUN_?(uVar27,0);
                                          pcVar9 = (code *)swi(3);
                                          (*pcVar9)();
                                          return;
                                        }
                                        pcRam_? = pcVar9;
                                        pMVar31 = (MethodInfo *)auStack_16;
                                        (*pcRam_?)
                                                  ((fVar22 - fVar19) * fVar23 + fVar19,&VStack_26);
                                        fVar2 = (float)auStack_16._4_4_ * (float)uStack_30;
                                        fVar21 = (float)auStack_16._4_4_ * (float)auStack_29._0_4_;
                                        fVar22 = (float)auStack_16._4_4_ * (float)auStack_29._4_4_;
                                        fVar23 = (float)auStack_16._0_4_ * (float)auStack_29._0_4_;
                                        fVar19 = (float)auStack_16._0_4_ * (float)auStack_29._4_4_;
                                        auStack_16._4_4_ =
                                             ((float)auStack_16._4_4_ * uStack_30._4_4_ +
                                              uStack_17._4_4_ * (float)auStack_29._4_4_ +
                                             (float)auStack_16._0_4_ * (float)uStack_30) -
                                             (float)uStack_17 * (float)auStack_29._0_4_;
                                        auStack_16._0_4_ =
                                             ((float)auStack_16._0_4_ * uStack_30._4_4_ +
                                              uStack_17._4_4_ * (float)auStack_29._0_4_ +
                                             (float)uStack_17 * (float)auStack_29._4_4_) - fVar2;
                                        uStack_17 = (Il2CppMethodPointer)
                                                    CONCAT44(((uStack_17._4_4_ * uStack_30._4_4_ -
                                                              fVar23) - fVar22) -
                                                             (float)uStack_17 * (float)uStack_30,
                                                             ((float)uStack_17 * uStack_30._4_4_ +
                                                              uStack_17._4_4_ * (float)uStack_30 +
                                                             fVar21) - fVar19);
                                        pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  Quaternion::Quaternion_get_eulerAngles
                                                            (&VStack_28,(Quaternion *)auStack_16,
                                                             pMVar31);
                                        fVar2 = pVVar32->x * _UNK_?;
                                        pVVar32 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  Quaternion::Quaternion_get_eulerAngles
                                                            (&VStack_26,(Quaternion *)auStack_16,
                                                             pMVar31);
                                        VStack_28.z = 0.0;
                                        VStack_28.y = pVVar32->y * _UNK_?;
                                        VStack_28.x = fVar2;
                                        auStack_16 = (undefined1  [8])0x0;
                                        uStack_17 = (Il2CppMethodPointer)0x0;
                                        pcVar9 = pcRam_?;
                                        if ((pcRam_? == (code *)0x0) &&
                                           (pcVar9 = (code *)FUN_?(&UNK_?),
                                           pcVar9 == (code *)0x0)) {
                                          uVar27 = func_?(&UNK_?);
                                          FUN_?(uVar27,0);
                                          pcVar9 = (code *)swi(3);
                                          (*pcVar9)();
                                          return;
                                        }
                                        pcRam_? = pcVar9;
                                        (*pcRam_?)(&VStack_28,auStack_16);
                                        pTVar12 = (this->fields).skybox;
                                        if (pTVar12 == (ThemeSkybox *)0x0) goto code_?;
                                        ThemeSkybox::ThemeSkybox_set_MoonRotation
                                                  (pTVar12,(Quaternion *)auStack_16,(MethodInfo *)0x0
                                                  );
                                      }
                                      pDVar10 = (this->fields).activeColorPreset;
                                      if ((pDVar10 != (DayNightCycleColorPresets_Preset *)0x0) &&
                                         (pCVar33 = (pDVar10->fields).moonParamsList,
                                         pCVar33 != (CelestialParamsList *)0x0)) {
                                        pCVar34 = Borodar::FarlandSkies::CloudyCrownPro::DotParams::
                                                  CelestialParamsList::
                                                  CelestialParamsList_GetParamPerTime
                                                            (pCVar33,fVar1,(MethodInfo *)0x0);
                                        bVar4 = iRam_? != 0;
                                        (this->fields)._CurrentMoonParam_k__BackingField = pCVar34;
                                        if (bVar4) {
                                          uVar5 = (uint)((ulonglong)
                                                          &(this->fields).
                                                           _CurrentMoonParam_k__BackingField >> 0xc)
                                          ;
                                          uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                                          do {
                                            uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                                            puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                                            LOCK();
                                            bVar4 = uVar7 == *puVar8;
                                            if (bVar4) {
                                              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                                            }
                                            UNLOCK();
                                          } while (!bVar4);
                                        }
                                        pCVar34 = (this->fields)._CurrentMoonParam_k__BackingField;
                                        if ((pCVar34 != (CelestialParam *)0x0) &&
                                           (pTVar12 = (this->fields).skybox,
                                           pTVar12 != (ThemeSkybox *)0x0)) {
                                          pIVar13 = *(InvokerMethod *)&(pCVar34->fields).TintColor.g
                                          ;
                                          pIVar14 = *(Il2CppMethodPointer *)
                                                     &(pCVar34->fields).TintColor.a;
                                          if (cRam_? == '\0') {
                                            FUN_?(&StringLiteral__MoonTint);
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          pMVar15 = (pTVar12->fields).skyboxMaterial;
                                          *(InvokerMethod *)&(pTVar12->fields)._moonTint = pIVar13;
                                          *(Il2CppMethodPointer *)&(pTVar12->fields)._moonTint.b =
                                               pIVar14;
                                          if (pMVar15 != (Material *)0x0) {
                                            auStack_16 = (undefined1  [8])pIVar13;
                                            uStack_17 = pIVar14;
                                            UnityEngine.CoreModule.dll::UnityEngine::Material::
                                            Material_SetColor(pMVar15,StringLiteral__MoonTint,
                                                              (Color *)auStack_16,(MethodInfo *)0x0)
                                            ;
                                            pTVar12 = (this->fields).skybox;
                                            if (((pTVar12 != (ThemeSkybox *)0x0) &&
                                                (pFVar35 = (pTVar12->fields)._moon,
                                                pFVar35 != (FlareLight *)0x0)) &&
                                               (pCVar34 = (this->fields).
                                                          _CurrentMoonParam_k__BackingField,
                                               pCVar34 != (CelestialParam *)0x0)) {
                                              pLVar36 = (pFVar35->fields).light;
                                              pIVar14 = *(Il2CppMethodPointer *)
                                                         &(pCVar34->fields).LightColor.g;
                                              pIVar43 = *(Il2CppMethodPointer *)
                                                         &(pCVar34->fields).LightColor.a;
                                              if (pLVar36 != (Light *)0x0) {
                                                auStack_29 = (undefined1  [8])pIVar14;
                                                uStack_30 = pIVar43;
                                                if (cRam_? == '\0') {
                                                  FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                }
                                                pvVar38 = (pLVar36->fields)._._._.m_CachedPtr;
                                                if (pvVar38 == (void *)0x0) {
                                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings
                                                  ::ThrowHelper::
                                                  ThrowHelper_2_ThrowNullReferenceException
                                                            ((Object *)pLVar36,(MethodInfo *)0x0);
                                                  pcVar9 = (code *)swi(3);
                                                  (*pcVar9)();
                                                  return;
                                                }
                                                pcVar9 = pcRam_?;
                                                if ((pcRam_? == (code *)0x0) &&
                                                   (pcVar9 = (code *)FUN_?(&UNK_?),
                                                   pcVar9 == (code *)0x0)) {
                                                  uVar27 = func_?(&UNK_?);
                                                  FUN_?(uVar27,0);
                                                  pcVar9 = (code *)swi(3);
                                                  (*pcVar9)();
                                                  return;
                                                }
                                                pcRam_? = pcVar9;
                                                (*pcRam_?)(pvVar38,auStack_29);
                                                pTVar12 = (this->fields).skybox;
                                                if (((pTVar12 != (ThemeSkybox *)0x0) &&
                                                    (pFVar35 = (pTVar12->fields)._moon,
                                                    pFVar35 != (FlareLight *)0x0)) &&
                                                   ((pCVar34 = (this->fields).
                                                               _CurrentMoonParam_k__BackingField,
                                                    pCVar34 != (CelestialParam *)0x0 &&
                                                    (pLVar36 = (pFVar35->fields).light,
                                                    pLVar36 != (Light *)0x0)))) {
                                                  UnityEngine.CoreModule.dll::UnityEngine::Light::
                                                  Light_set_intensity(pLVar36,*(float *)&pCVar34[1].
                                                                                         klass,
                                                                      (MethodInfo *)0x0);
                                                  pTVar12 = (this->fields).skybox;
                                                  if ((pTVar12 != (ThemeSkybox *)0x0) &&
                                                     (pFVar35 = (pTVar12->fields)._moon,
                                                     pFVar35 != (FlareLight *)0x0)) {
                                                    pLVar39 = (pFVar35->fields).lensFlare;
                                                    pLVar36 = (((((this->fields).skybox)->fields).
                                                               _moon)->fields).light;
                                                    if (pLVar36 != (Light *)0x0) {
                                                      if (cRam_? == '\0') {
                                                        FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Light>_UnityEngine__Light_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar38 = (pLVar36->fields)._._._.m_CachedPtr;
                                                  if (pvVar38 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pLVar36,(MethodInfo *)0x0);
                                                    pcVar9 = (code *)swi(3);
                                                    (*pcVar9)();
                                                    return;
                                                  }
                                                  pcVar9 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar9 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar9 == (code *)0x0)) {
                                                    uVar27 = func_?(&UNK_?);
                                                    FUN_?(uVar27,0);
                                                    pcVar9 = (code *)swi(3);
                                                    (*pcVar9)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar9;
                                                  fVar1 = (float)(*pcRam_?)(pvVar38);
                                                  pTVar12 = (this->fields).skybox;
                                                  if ((pTVar12 != (ThemeSkybox *)0x0) &&
                                                     (pLVar39 != (LensFlare *)0x0)) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    LensFlare::LensFlare_set_brightness
                                                              (pLVar39,fVar1 * (pTVar12->fields).
                                                                                _moonFlareBrightness
                                                               ,(MethodInfo *)0x0);
                                                    pTVar12 = (this->fields).skybox;
                                                    if ((pTVar12 != (ThemeSkybox *)0x0) &&
                                                       (pFVar35 = (pTVar12->fields)._moon,
                                                       pFVar35 != (FlareLight *)0x0)) {
                                                      pLVar39 = (pFVar35->fields).lensFlare;
                                                      pLVar40 = (((((this->fields).skybox)->fields).
                                                                 _moon)->fields).lensFlare;
                                                      if (pLVar40 != (LensFlare *)0x0) {
                                                        if (cRam_? == '\0') {
                                                          FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LensFlare>_UnityEngine__LensFlare_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  pvVar38 = (pLVar40->fields)._._._.m_CachedPtr;
                                                  if (pvVar38 == (void *)0x0) {
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Bindings::ThrowHelper::
                                                    ThrowHelper_2_ThrowNullReferenceException
                                                              ((Object *)pLVar40,(MethodInfo *)0x0);
                                                    pcVar9 = (code *)swi(3);
                                                    (*pcVar9)();
                                                    return;
                                                  }
                                                  pcVar9 = pcRam_?;
                                                  if ((pcRam_? == (code *)0x0) &&
                                                     (pcVar9 = (code *)FUN_?(&UNK_?
                                                                                     ),
                                                     pcVar9 == (code *)0x0)) {
                                                    uVar27 = func_?(&UNK_?);
                                                    FUN_?(uVar27,0);
                                                    pcVar9 = (code *)swi(3);
                                                    (*pcVar9)();
                                                    return;
                                                  }
                                                  pcRam_? = pcVar9;
                                                  uVar41 = (*pcRam_?)(pvVar38);
                                                  bVar42 = FUN_?(uVar41,0);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Behaviour
                                                  ::Behaviour_set_enabled
                                                            ((Behaviour *)pLVar39,bVar42 ^ 1,
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
                                      FUN_?();
                                      pcVar9 = (code *)swi(3);
                                      (*pcVar9)();
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
                FUN_?();
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

