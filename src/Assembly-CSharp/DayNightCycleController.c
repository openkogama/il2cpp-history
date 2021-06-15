
/* Void Initialize(DayNightCycle) */

void Assembly-CSharp.dll::DayNightCycleController::DayNightCycleController_Initialize
               (DayNightCycleController *this,DayNightCycle *cycle,MethodInfo *method)

{
  pTVar1 = (this->fields).playToggle;
  (this->fields).cycle = cycle;
  if (pTVar1 != (Toggle *)0x0) {
    bVar2 = UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_get_isOn(pTVar1,(MethodInfo *)0x0);
    if (cycle != (DayNightCycle *)0x0) {
      bVar3 = TierOnDeathProgress::TierOnDeathProgress_get_IsShowingTierProgress
                        ((TierOnDeathProgress *)cycle,(MethodInfo *)0x0);
      pTVar1 = (this->fields).playToggle;
      if (bVar2 == bVar3) {
        bVar2 = TierOnDeathProgress::TierOnDeathProgress_get_IsShowingTierProgress
                          ((TierOnDeathProgress *)cycle,(MethodInfo *)0x0);
        if (pTVar1 != (Toggle *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set
                    (pTVar1,bVar2 == 0,(MethodInfo *)0x0);
          return;
        }
      }
      else if (pTVar1 != (Toggle *)0x0) {
        bVar2 = UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_get_isOn
                          (pTVar1,(MethodInfo *)0x0);
        pIVar4 = (this->fields).playImage;
        if (pIVar4 != (Image *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pIVar4,bVar2 == 0,(MethodInfo *)0x0);
          pIVar4 = (this->fields).pauseImage;
          if (pIVar4 != (Image *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pIVar4,0,(MethodInfo *)0x0);
            this_00 = (this->fields).cycle;
            if (this_00 != (DayNightCycle *)0x0) {
              TierOnDeathProgress::TierOnDeathProgress_set_IsShowingTierProgress
                        ((TierOnDeathProgress *)this_00,bVar2 == 0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DayNightCycleController::DayNightCycleController_OnDestroy
               (DayNightCycleController *this,MethodInfo *method)

{
  this_00 = (this->fields).cycle;
  if (this_00 != (DayNightCycle *)0x0) {
    TierOnDeathProgress::TierOnDeathProgress_set_IsShowingTierProgress
              ((TierOnDeathProgress *)this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnToggle(Boolean) */

void Assembly-CSharp.dll::DayNightCycleController::DayNightCycleController_OnToggle
               (DayNightCycleController *this,bool play,MethodInfo *method)

{
  pIVar1 = (this->fields).playImage;
  if (pIVar1 != (Image *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar1,play ^ 1,(MethodInfo *)0x0);
    pIVar1 = (this->fields).pauseImage;
    if (pIVar1 != (Image *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pIVar1,play,(MethodInfo *)0x0);
      this_00 = (this->fields).cycle;
      if (this_00 != (DayNightCycle *)0x0) {
        TierOnDeathProgress::TierOnDeathProgress_set_IsShowingTierProgress
                  ((TierOnDeathProgress *)this_00,play ^ 1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetSimulationTime() */

void Assembly-CSharp.dll::DayNightCycleController::DayNightCycleController_SetSimulationTime
               (DayNightCycleController *this,MethodInfo *method)

{
  this_00 = (this->fields).playToggle;
  if (this_00 != (Toggle *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set(this_00,0,(MethodInfo *)0x0);
    pDVar1 = (this->fields).slider;
    this_01 = (this->fields).cycle;
    if (pDVar1 != (DayNightSlider *)0x0) {
      fVar2 = (float10)(*(code *)(pDVar1->klass->vtable).get_value.method)
                                 (pDVar1,(pDVar1->klass->vtable).set_value.methodPtr);
      if (this_01 != (DayNightCycle *)0x0) {
        DayNightCycle::DayNightCycle_set_TimeOfDay(this_01,(float)fVar2,(MethodInfo *)0x0);
        DayNightCycleController_UpdateTrackBackground(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DayNightCycleController::DayNightCycleController_Update
               (DayNightCycleController *this,MethodInfo *method)

{
  this_00 = (this->fields).cycle;
  pDVar1 = (this->fields).slider;
  if (this_00 != (DayNightCycle *)0x0) {
    fVar2 = DayNightCycle::DayNightCycle_get_TimeOfDay(this_00,(MethodInfo *)0x0);
    if (pDVar1 != (DayNightSlider *)0x0) {
      (*(code *)(pDVar1->klass->vtable).Set.method)
                (pDVar1,fVar2,0,(pDVar1->klass->vtable).OnDrag_1.methodPtr);
      DayNightCycleController_UpdateTrackBackground(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateTrackBackground() */

void Assembly-CSharp.dll::DayNightCycleController::DayNightCycleController_UpdateTrackBackground
               (DayNightCycleController *this,MethodInfo *method)

{
  this_00 = (this->fields).trackFill;
  this_01 = (this->fields).cycle;
  if (this_01 != (DayNightCycle *)0x0) {
    fVar1 = DayNightCycle::DayNightCycle_get_TimeOfDay(this_01,(MethodInfo *)0x0);
    VStack_2.x = 0.0;
    VStack_2.y = 0.0;
    func_?(&VStack_2,fVar1 / _UNK_?,0x3f800000);
    if (this_00 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                (this_00,VStack_2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

