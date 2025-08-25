
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera+<DoSmoothZoom>d__132::
     RTFocusCamera_DoSmoothZoom_d_132_MoveNext
               (RTFocusCamera_DoSmoothZoom_d_132 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto code_?;
    fVar2 = RTFocusCamera::RTFocusCamera_CalculateScrollZoomAmount
                      (this_00,(this->fields).deviceScroll,(MethodInfo *)0x0);
    (this->fields)._zoomAmount_5__2 = fVar2;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto code_?;
  }
  RTFocusCamera::RTFocusCamera_Zoom(this_00,(this->fields)._zoomAmount_5__2,(MethodInfo *)0x0);
  fVar2 = (this->fields)._zoomAmount_5__2;
  if (((this_00->fields)._zoomSettings != (CameraZoomSettings *)0x0) &&
     (this_01 = (this_00->fields)._targetCamera, this_01 != (Camera *)0x0)) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                      (this_01,(MethodInfo *)0x0);
    method_00 = *(MethodInfo **)((bVar3 ^ 1) * 4 + 0x28);
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
    fVar4 = fVar4 * (float)method_00;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    fVar2 = (0.0 - fVar2) * fVar4 + fVar2;
    (this->fields)._zoomAmount_5__2 = fVar2;
    if (cRam_? == '\0') {
      ppMStack5 = &TypeInfo__UnityEngine__Mathf;
      func_?();
      cRam_? = '\x01';
    }
    fVar4 = (float)((uint)fVar2 & _UNK_?);
    if ((float)((uint)fVar2 & _UNK_?) <= 0.0) {
      fVar4 = 0.0;
    }
    fVar6 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
    fVar7 = fVar4 * _UNK_?;
    if (fVar4 * _UNK_? <= fVar6) {
      fVar7 = fVar6;
    }
    if ((float)((uint)(0.0 - fVar2) & _UNK_?) < fVar7) {
      return 0;
    }
    ppOStack8 = &(this->fields).__2__current;
    (this->fields).__2__current = (Object *)0x0;
    ppMStack5 = (Mathf__Class **)0x0;
    func_?();
    (this->fields).__1__state = 1;
    return 1;
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  bVar3 = (*pcVar9)();
  return bVar3;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RTG::RTFocusCamera+<DoSmoothZoom>d__132::
     RTFocusCamera_DoSmoothZoom_d_132_System_Collections_IEnumerator_Reset
               (RTFocusCamera_DoSmoothZoom_d_132 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__RTG__RTFocusCamera___DoSmoothZoom_d__132__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

