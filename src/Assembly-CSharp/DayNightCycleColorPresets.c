
/* Void OnDisable() */

void Assembly-CSharp.dll::DayNightCycleColorPresets::DayNightCycleColorPresets_OnDisable
               (DayNightCycleColorPresets *this,MethodInfo *method)

{
  pDVar1 = (this->fields).presets;
  uVar2 = 0;
  if (pDVar1 != (DayNightCycleColorPresets_Preset__Array *)0x0) {
    ppDVar3 = pDVar1->vector;
    while( true ) {
      if ((int)pDVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pDVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*ppDVar3 == (DayNightCycleColorPresets_Preset *)0x0) break;
      uVar2 = uVar2 + 1;
      ((*ppDVar3)->fields).initialized = 0;
      ppDVar3 = ppDVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TranslatePresetNames() */

void Assembly-CSharp.dll::DayNightCycleColorPresets::DayNightCycleColorPresets_TranslatePresetNames
               (DayNightCycleColorPresets *this,MethodInfo *method)

{
  pDVar1 = (this->fields).presets;
  uVar2 = 0;
  if (pDVar1 != (DayNightCycleColorPresets_Preset__Array *)0x0) {
    ppDVar3 = pDVar1->vector;
    while( true ) {
      if ((int)pDVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pDVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      object = *ppDVar3;
      if (object == (DayNightCycleColorPresets_Preset *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__DayNightCycleColorPresets__Preset__LanguageLoadedCallback__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar5 = TM::TM__((object->fields).name,(MethodInfo *)0x0);
      bVar6 = iRam_? != 0;
      (object->fields).name = pSVar5;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&object->fields >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)object,
                 MethodInfo__DayNightCycleColorPresets__Preset__LanguageLoadedCallback__,
                 (MethodInfo *)0x0);
      TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppDVar3 = ppDVar3 + 1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* DayNightCycleColorPresets+Preset get_Item(Int32) */

DayNightCycleColorPresets_Preset *
Assembly-CSharp.dll::DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
          (DayNightCycleColorPresets *this,int32_t i,MethodInfo *method)

{
  pDVar1 = (this->fields).presets;
  if (pDVar1 != (DayNightCycleColorPresets_Preset__Array *)0x0) {
    if ((uint)pDVar1->max_length <= (uint)i) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pDVar3 = (DayNightCycleColorPresets_Preset *)(*pcVar2)();
      return pDVar3;
    }
    pDVar3 = pDVar1->vector[i];
    if (pDVar3 != (DayNightCycleColorPresets_Preset *)0x0) {
      if ((pDVar3->fields).initialized != 0) {
        return pDVar3;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__Init__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Init__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__Init__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar4 = (SortedParamsList_1_System_Object_ *)(pDVar3->fields).skyParamList;
      if (pSVar4 != (SortedParamsList_1_System_Object_ *)0x0) {
        Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[System::Object]::
        SortedParamsList_1_System_Object__Init
                  (pSVar4,
                   MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__Init__
                  );
        pSVar4 = (SortedParamsList_1_System_Object_ *)(pDVar3->fields).sunParamsList;
        if (pSVar4 != (SortedParamsList_1_System_Object_ *)0x0) {
          Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[System::Object]::
          SortedParamsList_1_System_Object__Init
                    (pSVar4,
                     MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Init__
                    );
          pSVar4 = (SortedParamsList_1_System_Object_ *)(pDVar3->fields).moonParamsList;
          if (pSVar4 != (SortedParamsList_1_System_Object_ *)0x0) {
            Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[System::Object]::
            SortedParamsList_1_System_Object__Init
                      (pSVar4,
                       MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Init__
                      );
            pSVar4 = (SortedParamsList_1_System_Object_ *)(pDVar3->fields).starsParamList;
            if (pSVar4 != (SortedParamsList_1_System_Object_ *)0x0) {
              Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[System::Object]::
              SortedParamsList_1_System_Object__Init
                        (pSVar4,
                         MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__Init__
                        );
              (pDVar3->fields).initialized = 1;
              return pDVar3;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pDVar3 = (DayNightCycleColorPresets_Preset *)(*pcVar2)();
  return pDVar3;
}

