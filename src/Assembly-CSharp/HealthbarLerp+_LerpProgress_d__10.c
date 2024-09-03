
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
  uVar9 = func_?();
  uVar10 = (undefined2)((uint6)uVar9 >> 0x20);
  uVar11 = (undefined3)((uint6)uVar9 >> 8);
  uVar12 = in(uVar10);
  uVar13 = CONCAT31(uVar11,uVar12);
  puVar14 = (uint *)(unaff_EBX + 4);
  uVar15 = *puVar14;
  uVar16 = *puVar14 + uVar13;
  *puVar14 = uVar16 + bVar8;
  bVar17 = in(uVar10);
  uVar18 = CONCAT31(uVar11,bVar17);
  puVar14 = (uint *)(unaff_EBX + 4);
  uVar16 = (uint)(CARRY4(uVar15,uVar13) || CARRY4(uVar16,(uint)bVar8));
  uVar15 = *puVar14;
  uVar13 = *puVar14 + uVar18;
  *puVar14 = uVar13 + uVar16;
  *unaff_EBX = *unaff_EBX + 0x43 +
               (uint)(CARRY1(bVar17,*(byte *)(unaff_EBX + 4)) ||
                     CARRY1(bVar17 + *(byte *)(unaff_EBX + 4),
                            CARRY4(uVar15,uVar18) || CARRY4(uVar13,uVar16)));
  pcVar19 = (code *)swi(3);
  bVar20 = (*pcVar19)();
  return bVar20;
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

