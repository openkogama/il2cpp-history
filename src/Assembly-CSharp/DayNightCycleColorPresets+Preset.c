
/* Void Initialize() */

void Assembly-CSharp.dll::DayNightCycleColorPresets+Preset::
     DayNightCycleColorPresets_Preset_Initialize
               (DayNightCycleColorPresets_Preset *this,MethodInfo *method)

{
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
  FUN_?();
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
  bVar2 = iRam_? != 0;
  (this->fields).name = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void TranslateName() */

void Assembly-CSharp.dll::DayNightCycleColorPresets+Preset::
     DayNightCycleColorPresets_Preset_TranslateName
               (DayNightCycleColorPresets_Preset *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DayNightCycleColorPresets__Preset__LanguageLoadedCallback__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__((this->fields).name,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).name = pSVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__DayNightCycleColorPresets__Preset__LanguageLoadedCallback__,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_
                  ,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar7 = TM::TM_get_Instance((MethodInfo *)0x0);
  if (pTVar7 != (TM *)0x0) {
    if ((pTVar7->fields).languageLoadingDone != 0) {
      return;
    }
    pTVar7 = TM::TM_get_Instance((MethodInfo *)0x0);
    pMVar8 = MethodInfo__System__Collections__Generic__List<System::Action>__Add_System__Action_;
    if ((pTVar7 != (TM *)0x0) &&
       (pLVar9 = (pTVar7->fields).languageChangedCallback, pLVar9 != (List_1_System_Action_ *)0x0))
    {
      pAVar10 = (pLVar9->fields)._items;
      piVar11 = &(pLVar9->fields)._version;
      *piVar11 = *piVar11 + 1;
      if (pAVar10 == (Action__Array *)0x0) {
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar3 = (pLVar9->fields)._size;
      if (uVar3 < (uint)pAVar10->max_length) {
        (pLVar9->fields)._size = uVar3 + 1;
      }
      else {
        uVar3 = (pLVar9->fields)._size;
        FUN_?(pLVar9,uVar3 + 1,
                      (pMVar8->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy
                      ,pAVar10,unaff_RDI);
        pAVar10 = (pLVar9->fields)._items;
        (pLVar9->fields)._size = uVar3 + 1;
        if (pAVar10 == (Action__Array *)0x0) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if ((uint)pAVar10->max_length <= uVar3) {
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      bVar2 = iRam_? != 0;
      pAVar10->vector[(int)uVar3] = (Action *)this_00;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)(pAVar10->vector + (int)uVar3) >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

