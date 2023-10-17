
/* Void Initialize(DayNightCycle) */

void Assembly-CSharp.dll::DayNightCycleController::DayNightCycleController_Initialize
               (DayNightCycleController *this,DayNightCycle *cycle,MethodInfo *method)

{
  (this->fields).cycle = cycle;
  func_?(&(this->fields).cycle,cycle);
  this_00 = (this->fields).playToggle;
  if ((this_00 != (Toggle *)0x0) && (cycle != (DayNightCycle *)0x0)) {
    if ((this_00->fields).m_IsOn == (cycle->fields).isPaused) {
      UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_set_isOn
                (this_00,(cycle->fields).isPaused == 0,(MethodInfo *)0x0);
      return;
    }
    pIVar1 = (this->fields).playImage;
    if (pIVar1 != (Image *)0x0) {
      value = (this_00->fields).m_IsOn;
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pIVar1,value == 0,(MethodInfo *)0x0);
      pIVar1 = (this->fields).pauseImage;
      if (pIVar1 != (Image *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pIVar1,value,(MethodInfo *)0x0);
        pDVar2 = (this->fields).cycle;
        if (pDVar2 != (DayNightCycle *)0x0) {
          (pDVar2->fields).isPaused = value == 0;
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
      (*(pDVar1->klass->vtable).get_value.methodPtr)
                (pDVar1,(pDVar1->klass->vtable).get_value.method);
      if (this_01 != (DayNightCycle *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__ThemeTimers__ITimer);
          func_?(&TypeInfo__ThemeTimers__Timer);
          cRam_? = '\x01';
        }
        cycleLength = (this_01->fields).cycleLength;
        this_02 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
        if (this_02 != (Timer_1 *)0x0) {
          ThemeTimers::Timer::Timer_1__ctor(this_02,0.0,cycleLength,(MethodInfo *)0x0);
          (this_01->fields).timer = (ITimer *)this_02;
          func_?(&(this_01->fields).timer,this_02);
          if ((this_01->fields).initialized != 0) {
            pIVar2 = (this_01->fields).timer;
            if (pIVar2 == (ITimer *)0x0) goto code_?;
            fVar3 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar2);
            DayNightCycle::DayNightCycle_Update_1(this_01,(float)fVar3,(MethodInfo *)0x0);
          }
          DayNightCycleController_UpdateTrackBackground(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
        (*(pDVar2->klass->vtable).Set.methodPtr)
                  (pDVar2,(float)fVar4,0,(pDVar2->klass->vtable).Set.method);
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

