
/* Void OnDisable() */

void Assembly-CSharp.dll::DayNightCycleColorPresets::DayNightCycleColorPresets_OnDisable
               (DayNightCycleColorPresets *this,MethodInfo *method)

{
  uVar1 = 0;
  pDVar2 = (this->fields).presets;
  if (pDVar2 != (DayNightCycleColorPresets_Preset__Array *)0x0) {
    ppDVar3 = pDVar2->vector;
    while( true ) {
      if ((int)pDVar2->max_length <= (int)uVar1) {
        return;
      }
      if (pDVar2->max_length <= uVar1) break;
      if (*ppDVar3 == (DayNightCycleColorPresets_Preset *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      ((*ppDVar3)->fields).initialized = 0;
      ppDVar3 = ppDVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
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
      if (pDVar1->max_length <= uVar2) break;
      object = *ppDVar3;
      if (object == (DayNightCycleColorPresets_Preset *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Action);
        func_?(&MethodInfo__DayNightCycleColorPresets__Preset__LanguageLoadedCallback__);
        cRam_? = '\x01';
      }
      pSVar4 = TM::TM__((object->fields).name,(MethodInfo *)0x0);
      (object->fields).name = pSVar4;
      func_?(&object->fields,pSVar4);
      this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      if (this_00 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)object,
                 MethodInfo__DayNightCycleColorPresets__Preset__LanguageLoadedCallback__,
                 (MethodInfo *)0x0);
      TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
      uVar2 = uVar2 + 1;
      ppDVar3 = ppDVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* DayNightCycleColorPresets+Preset get_Item(Int32) */

DayNightCycleColorPresets_Preset *
Assembly-CSharp.dll::DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
          (DayNightCycleColorPresets *this,int32_t i,MethodInfo *method)

{
  pDVar1 = (this->fields).presets;
  if (pDVar1 != (DayNightCycleColorPresets_Preset__Array *)0x0) {
    if (pDVar1->max_length <= (uint)i) goto code_?;
    pDVar2 = pDVar1->vector[i];
    if (pDVar2 != (DayNightCycleColorPresets_Preset *)0x0) {
      if ((pDVar2->fields).initialized != 0) {
        return pDVar2;
      }
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__Init__
                       );
        func_?(&
                        MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Init__
                       );
        func_?(&
                        MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__Init__
                       );
        cRam_? = '\x01';
      }
      pSVar3 = (SortedParamsList_1_System_Object_ *)(pDVar2->fields).skyParamList;
      if (pSVar3 != (SortedParamsList_1_System_Object_ *)0x0) {
        Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[System::Object]::
        SortedParamsList_1_System_Object__Init
                  (pSVar3,
                   MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__Init__
                  );
        pSVar3 = (SortedParamsList_1_System_Object_ *)(pDVar2->fields).sunParamsList;
        if (pSVar3 != (SortedParamsList_1_System_Object_ *)0x0) {
          Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[System::Object]::
          SortedParamsList_1_System_Object__Init
                    (pSVar3,
                     MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Init__
                    );
          pSVar3 = (SortedParamsList_1_System_Object_ *)(pDVar2->fields).moonParamsList;
          if (pSVar3 != (SortedParamsList_1_System_Object_ *)0x0) {
            Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[System::Object]::
            SortedParamsList_1_System_Object__Init
                      (pSVar3,
                       MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Init__
                      );
            pSVar3 = (SortedParamsList_1_System_Object_ *)(pDVar2->fields).starsParamList;
            if (pSVar3 != (SortedParamsList_1_System_Object_ *)0x0) {
              Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[System::Object]::
              SortedParamsList_1_System_Object__Init
                        (pSVar3,
                         MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__Init__
                        );
              (pDVar2->fields).initialized = 1;
              return pDVar2;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pDVar2 = (DayNightCycleColorPresets_Preset *)(*pcVar4)();
  return pDVar2;
}

