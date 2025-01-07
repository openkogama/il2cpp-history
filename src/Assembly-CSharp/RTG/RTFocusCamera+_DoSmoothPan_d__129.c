
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera+<DoSmoothPan>d__129::
     RTFocusCamera_DoSmoothPan_d_129_MoveNext
               (RTFocusCamera_DoSmoothPan_d_129 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto code_?;
    VVar2 = RTFocusCamera::RTFocusCamera_CalculatePanAmount
                      (this_00,(this->fields).deviceAxisX,(this->fields).deviceAxisY,
                       (MethodInfo *)0x0);
    (this->fields)._panAmount_5__2.x = in_stack_3;
    (this->fields)._panAmount_5__2.y = VVar2.y;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto code_?;
  }
  RTFocusCamera::RTFocusCamera_Pan(this_00,(Vector2)0x0,(MethodInfo *)0x0);
  fVar4 = (this->fields)._panAmount_5__2.x;
  fVar5 = (this->fields)._panAmount_5__2.y;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  fVar6 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  pCVar7 = (this_00->fields)._panSettings;
  if (pCVar7 != (CameraPanSettings *)0x0) {
    fVar8 = (pCVar7->fields)._smoothValue;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar9 = fVar9 * fVar8;
    if (fVar9 < 0.0) {
      fVar9 = 0.0;
    }
    else if (_UNK_? < fVar9) {
      fVar9 = _UNK_?;
    }
    fVar4 = (4.358744e-29 - fVar4) * fVar9 + fVar4;
    fVar5 = (fVar6 - fVar5) * fVar9 + fVar5;
    (this->fields)._panAmount_5__2.x = fVar4;
    (this->fields)._panAmount_5__2.y = fVar5;
    fVar4 = fVar4 * fVar4 + fVar5 * fVar5;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar5 = (float)((uint)fVar4 & _UNK_?);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar8 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
    fVar6 = fVar5 * _UNK_?;
    if (fVar5 * _UNK_? <= fVar8) {
      fVar6 = fVar8;
    }
    if ((float)((uint)(0.0 - fVar4) & _UNK_?) < fVar6) {
      return 0;
    }
    (this->fields).__2__current = (Object *)0x0;
    func_?(&(this->fields).__2__current);
    (this->fields).__1__state = 1;
    return 1;
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RTG::RTFocusCamera+<DoSmoothPan>d__129::
     RTFocusCamera_DoSmoothPan_d_129_System_Collections_IEnumerator_Reset
               (RTFocusCamera_DoSmoothPan_d_129 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__RTG__RTFocusCamera___DoSmoothPan_d__129__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

