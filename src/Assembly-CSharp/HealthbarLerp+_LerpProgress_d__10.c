
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::HealthbarLerp+<LerpProgress>d__10::
     HealthbarLerp_LerpProgress_d_10_MoveNext
               (HealthbarLerp_LerpProgress_d_10 *this,MethodInfo *method)

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
    this = (HealthbarLerp_LerpProgress_d_10 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                     ((MethodInfo *)0x0);
    if (pHVar2 == (HealthbarLerp *)0x0) goto code_?;
    if ((float)this - (pHVar2->fields).lerpStart < (pHVar2->fields).lerpDelay) {
      this = (HealthbarLerp_LerpProgress_d_10 *)0x0;
      pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
      ppOVar4 = &(pHVar1->fields).__2__current;
      *ppOVar4 = pOVar3;
      func_?(ppOVar4,pOVar3);
      (pHVar1->fields).__1__state = 1;
      return 1;
    }
    fVar5 = 0.0;
    break;
  case 2:
    fVar5 = (this->fields)._progress_5__2;
    (this->fields).__1__state = -1;
    this = (HealthbarLerp_LerpProgress_d_10 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (pHVar2 == (HealthbarLerp *)0x0) goto code_?;
    fVar5 = (float)this / (pHVar2->fields).lerpForSeconds + fVar5;
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  (pHVar1->fields)._progress_5__2 = fVar5;
  if (_UNK_? <= fVar5) {
code_?:
    this = (HealthbarLerp_LerpProgress_d_10 *)0x0;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
    ppOVar4 = &(pHVar1->fields).__2__current;
    *ppOVar4 = pOVar3;
    func_?(ppOVar4,pOVar3);
    (pHVar1->fields).__1__state = 3;
    return 1;
  }
  pPVar6 = (pHVar2->fields).targetProgressBar;
  this_00 = (ProgressBarAndroid *)(pHVar2->fields).progressBar;
  if (pPVar6 != (ProgressBar *)0x0) {
    fVar7 = (pHVar2->fields).startProgress;
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    else if (_UNK_? < fVar5) {
      fVar5 = _UNK_?;
    }
    if (this_00 != (ProgressBarAndroid *)0x0) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                (this_00,((pPVar6->fields).progress - fVar7) * fVar5 + fVar7,(MethodInfo *)0x0);
      pPVar6 = (pHVar2->fields).progressBar;
      if ((pPVar6 != (ProgressBar *)0x0) &&
         (pPVar8 = (pHVar2->fields).targetProgressBar, pPVar8 != (ProgressBar *)0x0)) {
        if ((pPVar8->fields).progress < (pPVar6->fields).progress) {
          this = (HealthbarLerp_LerpProgress_d_10 *)0x0;
          pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
          ppOVar4 = &(pHVar1->fields).__2__current;
          *ppOVar4 = pOVar3;
          func_?(ppOVar4,pOVar3);
          (pHVar1->fields).__1__state = 2;
          return 1;
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?();
  *(char *)(extraout_EDX + 0x10) = *(char *)(extraout_EDX + 0x10) - *(char *)&pHVar1->klass;
  *(char *)(extraout_EDX + 0x10) =
       *(char *)(extraout_EDX + 0x10) - *(char *)((int)&pHVar1->klass + 1);
  uVar9 = func_?(&TypeInfo__System__NotSupportedException,
                           (undefined1 *)((int)&pHVar1->klass + 2));
  this_01 = (NotSupportedException *)func_?(uVar9);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_01,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__HealthbarLerp___LerpProgress_d__10__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_01);
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::HealthbarLerp+<LerpProgress>d__10::
     HealthbarLerp_LerpProgress_d_10_System_Collections_IEnumerator_Reset
               (HealthbarLerp_LerpProgress_d_10 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__HealthbarLerp___LerpProgress_d__10__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

