
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::HealthbarLerp+<LerpProgress>d__8::HealthbarLerp_LerpProgress_d_8_MoveNext
               (HealthbarLerp_LerpProgress_d_8 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pHVar1 = this;
  pHVar2 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
  case 1:
    (this->fields).__1__state = -1;
    this = (HealthbarLerp_LerpProgress_d_8 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                     ((MethodInfo *)0x0);
    if (pHVar2 == (HealthbarLerp *)0x0) goto code_?;
    if ((float)this - (pHVar2->fields).lerpStart < _UNK_?) {
      this = (HealthbarLerp_LerpProgress_d_8 *)0x0;
      pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
      (pHVar1->fields).__2__current = pOVar3;
      func_?(&(pHVar1->fields).__2__current,pOVar3);
      (pHVar1->fields).__1__state = 1;
      return 1;
    }
    (pHVar1->fields)._progress_5__2 = 0.0;
    break;
  case 2:
    (this->fields).__1__state = -1;
    this = (HealthbarLerp_LerpProgress_d_8 *)(this->fields)._progress_5__2;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pHVar1->fields)._progress_5__2 = fVar4 + (float)this;
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  pfVar5 = &(pHVar1->fields)._progress_5__2;
  if (_UNK_? < *pfVar5 || _UNK_? == *pfVar5) {
code_?:
    this = (HealthbarLerp_LerpProgress_d_8 *)0x0;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32);
    (pHVar1->fields).__2__current = pOVar3;
    func_?(&(pHVar1->fields).__2__current,pOVar3);
    (pHVar1->fields).__1__state = 3;
    return 1;
  }
  if (pHVar2 != (HealthbarLerp *)0x0) {
    pPVar6 = (pHVar2->fields).targetProgressBar;
    this_00 = (ProgressBarAndroid *)(pHVar2->fields).progressBar;
    if (pPVar6 != (ProgressBar *)0x0) {
      fVar4 = (pHVar1->fields)._progress_5__2;
      fVar7 = (pHVar2->fields).startProgress;
      if (fVar4 < 0.0) {
        fVar4 = 0.0;
      }
      else if (_UNK_? < fVar4) {
        fVar4 = _UNK_?;
      }
      if (this_00 != (ProgressBarAndroid *)0x0) {
        ProgressBarAndroid::ProgressBarAndroid_set_Progress
                  (this_00,((pPVar6->fields).progress - fVar7) * fVar4 + fVar7,(MethodInfo *)0x0);
        pPVar6 = (pHVar2->fields).progressBar;
        if ((pPVar6 != (ProgressBar *)0x0) &&
           (pPVar8 = (pHVar2->fields).targetProgressBar, pPVar8 != (ProgressBar *)0x0)) {
          if ((pPVar8->fields).progress < (pPVar6->fields).progress) {
            this = (HealthbarLerp_LerpProgress_d_8 *)0x0;
            pOVar3 = (Object *)func_?(TypeInfo__System__Int32);
            (pHVar1->fields).__2__current = pOVar3;
            func_?(&(pHVar1->fields).__2__current,pOVar3);
            (pHVar1->fields).__1__state = 2;
            return 1;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  bVar9 = 0;
  func_?();
  pbVar10 = (byte *)(unaff_EBX + 0x46);
  bVar11 = *pbVar10;
  bVar12 = *pbVar10;
  *pbVar10 = bVar12 + extraout_CL + bVar9;
  *(char *)(extraout_EDX + -0x30efbcba) =
       *(char *)(extraout_EDX + -0x30efbcba) + (char)((uint)(unaff_EBX + 1) >> 8) +
       (CARRY1(bVar11,extraout_CL) || CARRY1(bVar12 + extraout_CL,bVar9));
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::HealthbarLerp+<LerpProgress>d__8::
     HealthbarLerp_LerpProgress_d_8_System_Collections_IEnumerator_Reset
               (HealthbarLerp_LerpProgress_d_8 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__HealthbarLerp___LerpProgress_d__8__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

