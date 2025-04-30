
/* Void Initialize() */

void Assembly-CSharp.dll::DayNightCycleColorPresets+Preset::
     DayNightCycleColorPresets_Preset_Initialize
               (DayNightCycleColorPresets_Preset *this,MethodInfo *method)

{
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
  pSVar1 = (SortedParamsList_1_System_Object_ *)(this->fields).skyParamList;
  if (pSVar1 != (SortedParamsList_1_System_Object_ *)0x0) {
    Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[System::Object]::
    SortedParamsList_1_System_Object__Init
              (pSVar1,
               MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__Init__
              );
    pSVar1 = (SortedParamsList_1_System_Object_ *)(this->fields).sunParamsList;
    if (pSVar1 != (SortedParamsList_1_System_Object_ *)0x0) {
      Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[System::Object]::
      SortedParamsList_1_System_Object__Init
                (pSVar1,
                 MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Init__
                );
      pSVar1 = (SortedParamsList_1_System_Object_ *)(this->fields).moonParamsList;
      if (pSVar1 != (SortedParamsList_1_System_Object_ *)0x0) {
        Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[System::Object]::
        SortedParamsList_1_System_Object__Init
                  (pSVar1,
                   MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Init__
                  );
        pSVar1 = (SortedParamsList_1_System_Object_ *)(this->fields).starsParamList;
        if (pSVar1 != (SortedParamsList_1_System_Object_ *)0x0) {
          Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[System::Object]::
          SortedParamsList_1_System_Object__Init
                    (pSVar1,
                     MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__Init__
                    );
          (this->fields).initialized = 1;
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void LanguageLoadedCallback() */

void Assembly-CSharp.dll::DayNightCycleColorPresets+Preset::
     DayNightCycleColorPresets_Preset_LanguageLoadedCallback
               (DayNightCycleColorPresets_Preset *this,MethodInfo *method)

{
  pDVar1 = &this->fields;
  pSVar2 = TM::TM__(pDVar1->name,(MethodInfo *)0x0);
  pDVar1->name = pSVar2;
  func_?(pDVar1,pSVar2);
  return;
}


/* Void TranslateName() */

void Assembly-CSharp.dll::DayNightCycleColorPresets+Preset::
     DayNightCycleColorPresets_Preset_TranslateName
               (DayNightCycleColorPresets_Preset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__DayNightCycleColorPresets__Preset__LanguageLoadedCallback__);
    cRam_? = '\x01';
  }
  pDVar1 = &this->fields;
  pSVar2 = TM::TM__(pDVar1->name,(MethodInfo *)0x0);
  pDVar1->name = pSVar2;
  func_?(pDVar1,pSVar2);
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__DayNightCycleColorPresets__Preset__LanguageLoadedCallback__,
             (MethodInfo *)0x0);
  TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
  return;
}

