
/* Void Cleanup() */

void Assembly-CSharp.dll::DayNightCycleColorPresets+Preset::DayNightCycleColorPresets_Preset_Cleanup
               (DayNightCycleColorPresets_Preset *this,MethodInfo *method)

{
  (this->fields).initialized = 0;
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DayNightCycleColorPresets+Preset::
     DayNightCycleColorPresets_Preset_Initialize
               (DayNightCycleColorPresets_Preset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (SortedParamsList_1_StarsParam_ *)(this->fields).skyParamList;
  if (pSVar1 != (SortedParamsList_1_StarsParam_ *)0x0) {
    Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[StarsParam]::
    SortedParamsList_1_StarsParam__Init
              (pSVar1,
               MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__Init__
              );
    pSVar1 = (SortedParamsList_1_StarsParam_ *)(this->fields).sunParamsList;
    if (pSVar1 != (SortedParamsList_1_StarsParam_ *)0x0) {
      Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[StarsParam]::
      SortedParamsList_1_StarsParam__Init
                (pSVar1,
                 MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Init__
                );
      pSVar1 = (SortedParamsList_1_StarsParam_ *)(this->fields).moonParamsList;
      if (pSVar1 != (SortedParamsList_1_StarsParam_ *)0x0) {
        Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[StarsParam]::
        SortedParamsList_1_StarsParam__Init
                  (pSVar1,
                   MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Init__
                  );
        pSVar1 = (SortedParamsList_1_StarsParam_ *)(this->fields).starsParamList;
        if (pSVar1 != (SortedParamsList_1_StarsParam_ *)0x0) {
          Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[StarsParam]::
          SortedParamsList_1_StarsParam__Init
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
  pSVar1 = TM::TM__((this->fields).name,(MethodInfo *)0x0);
  (this->fields).name = pSVar1;
  return;
}


/* Void TranslateName() */

void Assembly-CSharp.dll::DayNightCycleColorPresets+Preset::
     DayNightCycleColorPresets_Preset_TranslateName
               (DayNightCycleColorPresets_Preset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__((this->fields).name,(MethodInfo *)0x0);
  (this->fields).name = pSVar1;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__DayNightCycleColorPresets__Preset__LanguageLoadedCallback__,
             (MethodInfo *)0x0);
  TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
  return;
}

