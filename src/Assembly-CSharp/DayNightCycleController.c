
/* Void Initialize(DayNightCycle) */

void Assembly-CSharp.dll::DayNightCycleController::DayNightCycleController_Initialize
               (DayNightCycleController *this,DayNightCycle *cycle,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).cycle = cycle;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).cycle >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  toggle = (this->fields).playToggle;
  if ((toggle == (Toggle *)0x0) || (cycle == (DayNightCycle *)0x0)) {
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar7 = (cycle->fields).isPaused;
  if ((toggle->fields).m_IsOn != bVar7) {
    pIVar8 = (this->fields).playImage;
    if (pIVar8 != (Image *)0x0) {
      bVar7 = (toggle->fields).m_IsOn;
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pIVar8,bVar7 == 0,(MethodInfo *)0x0);
      pIVar8 = (this->fields).pauseImage;
      if (pIVar8 != (Image *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pIVar8,bVar7,(MethodInfo *)0x0);
        pDVar9 = (this->fields).cycle;
        if (pDVar9 != (DayNightCycle *)0x0) {
          (pDVar9->fields).isPaused = bVar7 == 0;
          return;
        }
      }
    }
    goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__UnityEngine__Events__UnityEvent<bool>__Invoke_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Toggle_value);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((bool)(toggle->fields).m_IsOn == (bVar7 == 0)) {
    return;
  }
  (toggle->fields).m_IsOn = bVar7 == 0;
  pTVar10 = (toggle->fields).m_Group;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar10 != (ToggleGroup *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar10->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pTVar10 = (toggle->fields).m_Group;
      if (pTVar10 == (ToggleGroup *)0x0) goto code_?;
      bVar7 = UnityEngine.UI.dll::UnityEngine::EventSystems::UIBehaviour::UIBehaviour_IsActive
                        ((UIBehaviour *)pTVar10,(MethodInfo *)0x0);
      if ((bVar7 != 0) &&
         (cVar11 = (*(toggle->klass->vtable).IsActive.methodPtr)(toggle), cVar11 != '\0')) {
        if ((toggle->fields).m_IsOn == 0) {
          pTVar10 = (toggle->fields).m_Group;
          if (pTVar10 == (ToggleGroup *)0x0) goto code_?;
          bVar7 = UnityEngine.UI.dll::UnityEngine::UI::ToggleGroup::ToggleGroup_AnyTogglesOn
                            (pTVar10,(MethodInfo *)0x0);
          if (bVar7 == 0) {
            pTVar10 = (toggle->fields).m_Group;
            if (pTVar10 == (ToggleGroup *)0x0) goto code_?;
            if ((pTVar10->fields).m_AllowSwitchOff == 0) goto code_?;
          }
        }
        else {
code_?:
          pTVar10 = (toggle->fields).m_Group;
          (toggle->fields).m_IsOn = 1;
          if (pTVar10 == (ToggleGroup *)0x0) goto code_?;
          UnityEngine.UI.dll::UnityEngine::UI::ToggleGroup::ToggleGroup_NotifyToggleOn
                    (pTVar10,toggle,1,(MethodInfo *)0x0);
        }
      }
    }
  }
  UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_PlayEffect
            (toggle,(toggle->fields).toggleTransition == 0,(MethodInfo *)0x0);
  UnityEngine.UIModule.dll::UnityEngine::UISystemProfilerApi::UISystemProfilerApi_AddMarker
            (StringLiteral_Toggle_value,(Object_1 *)toggle,(MethodInfo *)0x0);
  this_00 = (UnityEvent_1_System_Boolean_ *)(toggle->fields).onValueChanged;
  if (this_00 != (UnityEvent_1_System_Boolean_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[System::Boolean]::
    UnityEvent_1_System_Boolean__Invoke
              (this_00,(toggle->fields).m_IsOn,
               MethodInfo__UnityEngine__Events__UnityEvent<bool>__Invoke_bool_);
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DayNightCycleController::DayNightCycleController_OnDestroy
               (DayNightCycleController *this,MethodInfo *method)

{
  pDVar1 = (this->fields).cycle;
  if (pDVar1 != (DayNightCycle *)0x0) {
    (pDVar1->fields).isPaused = 0;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  FUN_?();
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
    UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_Set(this_00,0,1,(MethodInfo *)0x0);
    pDVar1 = (this->fields).slider;
    pDVar2 = (this->fields).cycle;
    if ((pDVar1 != (DayNightSlider *)0x0) &&
       (uVar3 = (*(pDVar1->klass->vtable).get_value.methodPtr)
                           (pDVar1,(pDVar1->klass->vtable).get_value.method),
       pDVar2 != (DayNightCycle *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__ThemeTimers__ITimer);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ThemeTimers__Timer);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar4 = (pDVar2->fields).cycleLength;
      pIVar5 = (ITimer *)FUN_?(TypeInfo__ThemeTimers__Timer);
      bVar6 = iRam_? != 0;
      *(float *)((longlong)&pIVar5[1].klass + 4) = _UNK_? / fVar4;
      *(undefined4 *)&pIVar5[1].klass = uVar3;
      (pDVar2->fields).timer = pIVar5;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(pDVar2->fields).timer >> 0xc);
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
      if ((pDVar2->fields).initialized != 0) {
        if ((pDVar2->fields).timer == (ITimer *)0x0) goto code_?;
        fVar4 = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
        DayNightCycle::DayNightCycle_Update_1(pDVar2,fVar4,(MethodInfo *)0x0);
      }
      pDVar2 = (this->fields).cycle;
      obj = (this->fields).trackFill;
      if (pDVar2 != (DayNightCycle *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__ThemeTimers__ITimer,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((pDVar2->fields).timer != (ITimer *)0x0) {
          fVar4 = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
          if (obj != (RectTransform *)0x0) {
            auStack_11[0] = CONCAT44(_UNK_?,fVar4 / _UNK_?);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                            ,auStack_11[0],0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (obj == (RectTransform *)0x0) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pvVar13 = (obj->fields)._._._.m_CachedPtr;
            if (pvVar13 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcVar12 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
              uVar14 = func_?(&UNK_?);
              FUN_?(uVar14,0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcRam_? = pcVar12;
            (*pcRam_?)(pvVar13,auStack_11);
            return;
          }
        }
      }
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
      FUN_?(&TypeInfo__ThemeTimers__ITimer);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((pDVar1->fields).timer != (ITimer *)0x0) &&
       (uVar3 = FUN_?(0,TypeInfo__ThemeTimers__ITimer), pDVar2 != (DayNightSlider *)0x0)) {
      (*(pDVar2->klass->vtable).Set.methodPtr)(pDVar2,uVar3,0,(pDVar2->klass->vtable).Set.method);
      pDVar1 = (this->fields).cycle;
      obj = (this->fields).trackFill;
      if (pDVar1 != (DayNightCycle *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__ThemeTimers__ITimer,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((pDVar1->fields).timer != (ITimer *)0x0) {
          fVar4 = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
          if (obj != (RectTransform *)0x0) {
            auStack_5[0] = CONCAT44(_UNK_?,fVar4 / _UNK_?);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                            ,auStack_5[0],0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (obj == (RectTransform *)0x0) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pvVar7 = (obj->fields)._._._.m_CachedPtr;
            if (pvVar7 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcVar6 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcRam_? = pcVar6;
            (*pcRam_?)(pvVar7,auStack_5);
            return;
          }
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateTrackBackground() */

void Assembly-CSharp.dll::DayNightCycleController::DayNightCycleController_UpdateTrackBackground
               (DayNightCycleController *this,MethodInfo *method)

{
  pDVar1 = (this->fields).cycle;
  obj = (this->fields).trackFill;
  if (pDVar1 != (DayNightCycle *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ThemeTimers__ITimer);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pDVar1->fields).timer != (ITimer *)0x0) {
      fVar2 = (float)FUN_?(0,TypeInfo__ThemeTimers__ITimer);
      if (obj != (RectTransform *)0x0) {
        auStack_3[0] = CONCAT44(_UNK_?,fVar2 / _UNK_?);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                        ,auStack_3[0],0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (RectTransform *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar5 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar5,auStack_3);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

