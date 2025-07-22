
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PhysicalBasedCanvasScaling+<SetCanvasScaleCoroutine>d__5::
     PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_5_MoveNext
               (PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_5 *this,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__WaitForSecondsRealtime);
    cRam_? = '\x01';
  }
  iVar2 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
    if (fVar3 <= _UNK_?) {
      if (this_00 == (PhysicalBasedCanvasScaling *)0x0) goto code_?;
      this = (PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_5 *)(this_00->fields).baselineDPI
      ;
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    }
    else {
      this = (PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_5 *)
             UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      if (this_00 == (PhysicalBasedCanvasScaling *)0x0) goto code_?;
    }
    fStack_5 = (float)iVar2;
    ppMVar6 = (MVGameControllerBase__Class **)(float)iVar4;
    if ((((float)this != (this_00->fields).storedDPI) ||
        (fStack_5 != (this_00->fields).storedScreen.x)) ||
       ((float)ppMVar6 != (this_00->fields).storedScreen.y)) {
      bVar7 = cRam_? == '\0';
      (this_00->fields).storedDPI = (float)this;
      (this_00->fields).storedScreen.x = fStack_5;
      (this_00->fields).storedScreen.y = (float)ppMVar6;
      if (bVar7) {
        ppMVar8 = &
                   UnityEngine__UI__CanvasScaler_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::CanvasScaler>__
        ;
        func_?();
        func_?(&TypeInfo__ScreenSizeOptimizer);
        cRam_? = '\x01';
        ppMVar6 = (MVGameControllerBase__Class **)ppMVar8;
      }
      if (cRam_? == '\0') {
        ppMVar6 = &TypeInfo__MVGameControllerBase;
        func_?();
        cRam_? = '\x01';
      }
      fVar3 = _UNK_?;
      if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
        fVar3 = _UNK_?;
      }
      if (TypeInfo__ScreenSizeOptimizer->static_fields->IsInHalfResolution != 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
          this = (PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_5 *)
                 ((float)this * _UNK_?);
        }
      }
      pPVar9 = (PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_5 *)
               (((float)this * fVar3) / (this_00->fields).baselineDPI);
      fStack_5 = fStack_5 / (float)this;
      fVar10 = (float)ppMVar6 / (float)this;
      fVar11 = (this_00->fields).baseInchThresholds.x * fVar3;
      fVar3 = (this_00->fields).baseInchThresholds.y * fVar3;
      if ((fStack_5 < fVar11) || (this = pPVar9, fVar10 < fVar3)) {
        fStack_5 = fStack_5 / fVar11;
        fVar10 = fVar10 / fVar3;
        if (fVar10 <= fStack_5) {
          fStack_5 = fVar10;
        }
        this = (PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_5 *)(fStack_5 * (float)pPVar9);
      }
      this_01 = (CanvasScaler *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                          ((Component *)this_00,
                           UnityEngine__UI__CanvasScaler_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::CanvasScaler>__
                          );
      if (this_01 == (CanvasScaler *)0x0) {
code_?:
        func_?();
        pcVar12 = (code *)swi(3);
        bVar13 = (*pcVar12)();
        return bVar13;
      }
      UnityEngine.UI.dll::UnityEngine::UI::CanvasScaler::CanvasScaler_set_scaleFactor
                (this_01,(float)this,(MethodInfo *)0x0);
    }
  }
  this_02 = (WaitForSecondsRealtime *)func_?(TypeInfo__UnityEngine__WaitForSecondsRealtime)
  ;
  UnityEngine.CoreModule.dll::UnityEngine::WaitForSecondsRealtime::WaitForSecondsRealtime__ctor
            (this_02,0.2,(MethodInfo *)0x0);
  (pPVar1->fields).__2__current = (Object *)this_02;
  func_?(&(pPVar1->fields).__2__current,this_02);
  (pPVar1->fields).__1__state = 1;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::PhysicalBasedCanvasScaling+<SetCanvasScaleCoroutine>d__5::
     PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_5_System_Collections_IEnumerator_Reset
               (PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_5 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__PhysicalBasedCanvasScaling___SetCanvasScaleCoroutine_d__5__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

