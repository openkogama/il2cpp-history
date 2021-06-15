
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
    uVar4 = func_?(0,0);
    func_?(uVar4);
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TranslatePresetNames() */

void Assembly-CSharp.dll::DayNightCycleColorPresets::DayNightCycleColorPresets_TranslatePresetNames
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
      object = *ppDVar3;
      if (object == (DayNightCycleColorPresets_Preset *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pSVar4 = TM::TM__((object->fields).name,(MethodInfo *)0x0);
      (object->fields).name = pSVar4;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)object,
                 MethodInfo__DayNightCycleColorPresets__Preset__LanguageLoadedCallback__,
                 (MethodInfo *)0x0);
      TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
      uVar1 = uVar1 + 1;
      ppDVar3 = ppDVar3 + 1;
    }
    uVar5 = func_?(0,0);
    func_?(uVar5);
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* DayNightCycleColorPresets() */

void Assembly-CSharp.dll::DayNightCycleColorPresets::DayNightCycleColorPresets__ctor
               (DayNightCycleColorPresets *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)func_?(), pcVar1 == (code *)0x0))
  {
    uVar2 = func_?(&UNK_?,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)();
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
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pSVar3 = (SortedParamsList_1_StarsParam_ *)(pDVar2->fields).skyParamList;
      if (pSVar3 != (SortedParamsList_1_StarsParam_ *)0x0) {
        Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[StarsParam]::
        SortedParamsList_1_StarsParam__Init
                  (pSVar3,
                   MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__Init__
                  );
        pSVar3 = (SortedParamsList_1_StarsParam_ *)(pDVar2->fields).sunParamsList;
        if (pSVar3 != (SortedParamsList_1_StarsParam_ *)0x0) {
          Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[StarsParam]::
          SortedParamsList_1_StarsParam__Init
                    (pSVar3,
                     MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Init__
                    );
          pSVar3 = (SortedParamsList_1_StarsParam_ *)(pDVar2->fields).moonParamsList;
          if (pSVar3 != (SortedParamsList_1_StarsParam_ *)0x0) {
            Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[StarsParam]::
            SortedParamsList_1_StarsParam__Init
                      (pSVar3,
                       MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Init__
                      );
            pSVar3 = (SortedParamsList_1_StarsParam_ *)(pDVar2->fields).starsParamList;
            if (pSVar3 != (SortedParamsList_1_StarsParam_ *)0x0) {
              Borodar::FarlandSkies::CloudyCrownPro::DotParams::SortedParamsList`1[StarsParam]::
              SortedParamsList_1_StarsParam__Init
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
  func_?(0);
code_?:
  uVar4 = func_?(0,0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  pDVar2 = (DayNightCycleColorPresets_Preset *)(*pcVar5)();
  return pDVar2;
}


/* Int32 get_Length() */

int32_t Assembly-CSharp.dll::DayNightCycleColorPresets::DayNightCycleColorPresets_get_Length
                  (DayNightCycleColorPresets *this,MethodInfo *method)

{
  pDVar1 = (this->fields).presets;
  if (pDVar1 != (DayNightCycleColorPresets_Preset__Array *)0x0) {
    return pDVar1->max_length;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

