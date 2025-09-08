
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::Orthographic3DObjectUIScaling+<SetObjectScaleCoroutine>d__7::
     Orthographic3DObjectUIScaling_SetObjectScaleCoroutine_d_7_MoveNext
               (Orthographic3DObjectUIScaling_SetObjectScaleCoroutine_d_7 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__WaitForSecondsRealtime);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
    dpi = _UNK_?;
    if (_UNK_? < fVar2) {
      dpi = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_dpi((MethodInfo *)0x0);
    }
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    fVar2 = (float)iVar3;
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    method_00 = (MethodInfo *)(float)iVar3;
    if (this_00 == (Orthographic3DObjectUIScaling *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    if (((dpi != (this_00->fields).storedDPI) || (fVar2 != (this_00->fields).storedScreen.x)) ||
       ((float)method_00 != (this_00->fields).storedScreen.y)) {
      (this_00->fields).storedDPI = dpi;
      (this_00->fields).storedScreen.x = fVar2;
      (this_00->fields).storedScreen.y = (float)method_00;
      screen.y = fVar2;
      screen.x = fVar2;
      Orthographic3DObjectUIScaling::Orthographic3DObjectUIScaling_SetObjectScale
                (this_00,dpi,screen,method_00);
    }
  }
  this_01 = (WaitForSecondsRealtime *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::WaitForSecondsRealtime::WaitForSecondsRealtime__ctor
            (this_01,0.5,(MethodInfo *)0x0);
  (this->fields).__2__current = (Object *)this_01;
  func_?();
  (this->fields).__1__state = 1;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::Orthographic3DObjectUIScaling+<SetObjectScaleCoroutine>d__7::
     Orthographic3DObjectUIScaling_SetObjectScaleCoroutine_d_7_System_Collections_IEnumerator_Reset
               (Orthographic3DObjectUIScaling_SetObjectScaleCoroutine_d_7 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__Orthographic3DObjectUIScaling___SetObjectScaleCoroutine_d__7__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

