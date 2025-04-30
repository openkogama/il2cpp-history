
/* Void Initialize(DayNightCycle) */

void Assembly-CSharp.dll::DayNightCycleController::DayNightCycleController_Initialize
               (DayNightCycleController *this,DayNightCycle *cycle,MethodInfo *method)

{
  ppDVar1 = &(this->fields).cycle;
  *ppDVar1 = cycle;
  func_?(ppDVar1,cycle);
  this_00 = (this->fields).playToggle;
  if ((this_00 != (Toggle *)0x0) && (cycle != (DayNightCycle *)0x0)) {
    bVar2 = (cycle->fields).isPaused;
    if ((this_00->fields).m_IsOn == bVar2) {
      UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set
                (this_00,bVar2 == 0,1,(MethodInfo *)0x0);
      return;
    }
    pIVar3 = (this->fields).playImage;
    if (pIVar3 != (Image *)0x0) {
      bVar2 = (this_00->fields).m_IsOn;
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pIVar3,bVar2 == 0,(MethodInfo *)0x0);
      pIVar3 = (this->fields).pauseImage;
      if (pIVar3 != (Image *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pIVar3,bVar2,(MethodInfo *)0x0);
        if (*ppDVar1 != (DayNightCycle *)0x0) {
          ((*ppDVar1)->fields).isPaused = bVar2 == 0;
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DayNightCycleController::DayNightCycleController_OnDestroy
               (DayNightCycleController *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pDVar2 = (this->fields).cycle;
  if (pDVar2 != (DayNightCycle *)0x0) {
    (pDVar2->fields).isPaused = 0;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
      pDVar2 = (this->fields).cycle;
      if (pDVar2 != (DayNightCycle *)0x0) {
        (pDVar2->fields).isPaused = play ^ 1;
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetSimulationTime() */

void Assembly-CSharp.dll::DayNightCycleController::DayNightCycleController_SetSimulationTime
               (DayNightCycleController *this,MethodInfo *method)

{
  this_00 = (this->fields).playToggle;
  if (this_00 != (Toggle *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_set_isOn(this_00,0,(MethodInfo *)0x0);
    pDVar1 = (this->fields).slider;
    this_01 = (this->fields).cycle;
    if (pDVar1 != (DayNightSlider *)0x0) {
      (*(code *)(pDVar1->klass->vtable).get_value.method)
                (pDVar1,(pDVar1->klass->vtable).set_value.methodPtr);
      if (this_01 != (DayNightCycle *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__ThemeTimers__ITimer);
          func_?(&TypeInfo__ThemeTimers__Timer);
          cRam_? = '\x01';
        }
        cycleLength = (this_01->fields).cycleLength;
        this_02 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
        ThemeTimers::Timer::Timer_1__ctor(this_02,unaff_ESI,cycleLength,(MethodInfo *)0x0);
        ppIVar2 = &(this_01->fields).timer;
        *ppIVar2 = (ITimer *)this_02;
        func_?(ppIVar2,this_02);
        if ((this_01->fields).initialized != 0) {
          pIVar3 = (this_01->fields).timer;
          if (pIVar3 == (ITimer *)0x0) goto code_?;
          fVar4 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar3);
          DayNightCycle::DayNightCycle_Update_1(this_01,(float)fVar4,(MethodInfo *)0x0);
        }
        DayNightCycleController_UpdateTrackBackground(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DayNightCycleController::DayNightCycleController_Update
               (DayNightCycleController *this,MethodInfo *method)

{
  pDVar1 = (this->fields).cycle;
  pDVar2 = (this->fields).slider;
  if (pDVar1 != (DayNightCycle *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ThemeTimers__ITimer);
      cRam_? = '\x01';
    }
    pIVar3 = (pDVar1->fields).timer;
    if (pIVar3 != (ITimer *)0x0) {
      fVar4 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar3);
      if (pDVar2 != (DayNightSlider *)0x0) {
        (*(code *)(pDVar2->klass->vtable).Set.method)
                  (pDVar2,(float)fVar4,0,(pDVar2->klass->vtable).OnDrag_1.methodPtr);
        DayNightCycleController_UpdateTrackBackground(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateTrackBackground() */

void Assembly-CSharp.dll::DayNightCycleController::DayNightCycleController_UpdateTrackBackground
               (DayNightCycleController *this,MethodInfo *method)

{
  pDVar1 = (this->fields).cycle;
  this_00 = (this->fields).trackFill;
  if (pDVar1 != (DayNightCycle *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ThemeTimers__ITimer);
      cRam_? = '\x01';
    }
    pIVar2 = (pDVar1->fields).timer;
    if (pIVar2 != (ITimer *)0x0) {
      fVar3 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar2);
      if (this_00 != (RectTransform *)0x0) {
        value.y = 1.0;
        value.x = (float)(fVar3 / (float10)_UNK_?);
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchorMax
                  (this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

