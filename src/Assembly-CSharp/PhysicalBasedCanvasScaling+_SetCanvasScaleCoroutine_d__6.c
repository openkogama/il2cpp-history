
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::PhysicalBasedCanvasScaling+<SetCanvasScaleCoroutine>d__6::
     PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_6_MoveNext
               (PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_6 *this,MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PhysicalBasedCanvasScaling);
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
      if (iVar2 != 2) {
        return 0;
      }
      (this->fields).__1__state = -1;
      pAVar3 = TypeInfo__PhysicalBasedCanvasScaling->static_fields->OnScreenDimentionsChanged;
      if (pAVar3 != (Action *)0x0) {
        (*(pAVar3->fields)._._.invoke_impl)
                  ((pAVar3->fields)._._.method_code,(pAVar3->fields)._._.method);
      }
      goto code_?;
    }
    (this->fields).__1__state = -1;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
    if (fVar4 <= _UNK_?) {
      if (this_00 == (PhysicalBasedCanvasScaling *)0x0) goto code_?;
      this = (PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_6 *)(this_00->fields).baselineDPI
      ;
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      fVar4 = (float)iVar5;
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    }
    else {
      this = (PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_6 *)
             UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      fVar4 = (float)iVar5;
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      if (this_00 == (PhysicalBasedCanvasScaling *)0x0) goto code_?;
    }
    ppMVar6 = (MVGameControllerBase__Class **)(float)iVar2;
    if ((((float)this != (this_00->fields).storedDPI) ||
        (fVar4 != (this_00->fields).storedScreen.x)) ||
       ((float)ppMVar6 != (this_00->fields).storedScreen.y)) {
      bVar7 = cRam_? == '\0';
      (this_00->fields).storedDPI = (float)this;
      (this_00->fields).storedScreen.x = fVar4;
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
      fVar9 = _UNK_?;
      if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
        fVar9 = _UNK_?;
      }
      if (TypeInfo__ScreenSizeOptimizer->static_fields->IsInHalfResolution != 0) {
        if (cRam_? == '\0') {
          ppMVar6 = &TypeInfo__MVGameControllerBase;
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
          this = (PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_6 *)
                 ((float)this * _UNK_?);
        }
      }
      pPVar10 = (PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_6 *)
                (((float)this * fVar9) / (this_00->fields).baselineDPI);
      fVar4 = fVar4 / (float)this;
      fVar11 = (float)ppMVar6 / (float)this;
      fVar12 = (this_00->fields).baseInchThresholds.x * fVar9;
      fVar9 = (this_00->fields).baseInchThresholds.y * fVar9;
      if ((fVar4 < fVar12) || (this = pPVar10, fVar11 < fVar9)) {
        fVar4 = fVar4 / fVar12;
        fVar11 = fVar11 / fVar9;
        if (fVar11 <= fVar4) {
          fVar4 = fVar11;
        }
        this = (PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_6 *)(fVar4 * (float)pPVar10);
      }
      this_01 = (CanvasScaler *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                          ((Component *)this_00,
                           UnityEngine__UI__CanvasScaler_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::CanvasScaler>__
                          );
      if (this_01 != (CanvasScaler *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::CanvasScaler::CanvasScaler_set_scaleFactor
                  (this_01,(float)this,(MethodInfo *)0x0);
        (pPVar1->fields).__2__current = (Object *)0x0;
        func_?(&(pPVar1->fields).__2__current,0);
        (pPVar1->fields).__1__state = 2;
        return 1;
      }
code_?:
      func_?();
      pcVar13 = (code *)swi(3);
      bVar14 = (*pcVar13)();
      return bVar14;
    }
  }
code_?:
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

void Assembly-CSharp.dll::PhysicalBasedCanvasScaling+<SetCanvasScaleCoroutine>d__6::
     PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_6_System_Collections_IEnumerator_Reset
               (PhysicalBasedCanvasScaling_SetCanvasScaleCoroutine_d_6 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__PhysicalBasedCanvasScaling___SetCanvasScaleCoroutine_d__6__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

