
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
      (pHVar1->fields).__2__current = pOVar3;
      func_?(&(pHVar1->fields).__2__current,pOVar3);
      (pHVar1->fields).__1__state = 1;
      return 1;
    }
    fVar4 = 0.0;
    break;
  case 2:
    fVar4 = (this->fields)._progress_5__2;
    (this->fields).__1__state = -1;
    this = (HealthbarLerp_LerpProgress_d_10 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (pHVar2 == (HealthbarLerp *)0x0) goto code_?;
    fVar4 = (float)this / (pHVar2->fields).lerpForSeconds + fVar4;
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  (pHVar1->fields)._progress_5__2 = fVar4;
  if (_UNK_? <= fVar4) {
code_?:
    this = (HealthbarLerp_LerpProgress_d_10 *)0x0;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
    (pHVar1->fields).__2__current = pOVar3;
    func_?(&(pHVar1->fields).__2__current,pOVar3);
    (pHVar1->fields).__1__state = 3;
    return 1;
  }
  pPVar5 = (pHVar2->fields).targetProgressBar;
  this_00 = (ProgressBarAndroid *)(pHVar2->fields).progressBar;
  if (pPVar5 != (ProgressBar *)0x0) {
    fVar4 = (pHVar1->fields)._progress_5__2;
    fVar6 = (pHVar2->fields).startProgress;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    if (this_00 != (ProgressBarAndroid *)0x0) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                (this_00,((pPVar5->fields).progress - fVar6) * fVar4 + fVar6,(MethodInfo *)0x0);
      pPVar5 = (pHVar2->fields).progressBar;
      if ((pPVar5 != (ProgressBar *)0x0) &&
         (pPVar7 = (pHVar2->fields).targetProgressBar, pPVar7 != (ProgressBar *)0x0)) {
        if ((pPVar7->fields).progress < (pPVar5->fields).progress) {
          this = (HealthbarLerp_LerpProgress_d_10 *)0x0;
          pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
          (pHVar1->fields).__2__current = pOVar3;
          func_?(&(pHVar1->fields).__2__current,pOVar3);
          (pHVar1->fields).__1__state = 2;
          return 1;
        }
        goto code_?;
      }
    }
  }
code_?:
  bVar8 = 0;
  func_?();
  pHVar9 = (HealthbarLerp__Class *)in(extraout_DX);
  pHVar2->klass = pHVar9;
  bVar10 = (byte)((uint)unaff_EBX >> 8);
  bVar11 = extraout_AH + bVar10;
  bVar12 = CARRY1(extraout_AH,bVar10) || CARRY1(bVar11,bVar8);
  bVar11 = bVar11 + bVar8;
  pMVar13 = (MonitorData *)in(extraout_DX + 1);
  pHVar2->monitor = pMVar13;
  pbVar14 = (byte *)((int)&pHVar1[4].fields.__2__current + 2);
  bVar10 = *pbVar14;
  bVar8 = *pbVar14 + bVar11;
  *pbVar14 = bVar8 + bVar12;
  *(char *)(unaff_EBX + -0x33efbd91) =
       *(char *)(unaff_EBX + -0x33efbd91) + (char)extraout_DX + '\x03' +
       (CARRY1(bVar10,bVar11) || CARRY1(bVar8,bVar12));
  pcVar15 = (code *)swi(3);
  bVar16 = (*pcVar15)();
  return bVar16;
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

