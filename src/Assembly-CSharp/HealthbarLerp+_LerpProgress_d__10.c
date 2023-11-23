
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
    bVar3 = (int)pHVar2 < 0;
    bVar4 = (POPCOUNT((uint)pHVar2 & 0xff) & 1U) == 0;
    bVar5 = true;
    if (pHVar2 == (HealthbarLerp *)0x0) goto code_?;
    if ((float)this - (pHVar2->fields).lerpStart < (pHVar2->fields).lerpDelay) {
      this = (HealthbarLerp_LerpProgress_d_10 *)0x0;
      pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&this);
      (pHVar1->fields).__2__current = pOVar6;
      func_?(&(pHVar1->fields).__2__current,pOVar6);
      (pHVar1->fields).__1__state = 1;
      return 1;
    }
    fVar7 = 0.0;
    break;
  case 2:
    fVar7 = (this->fields)._progress_5__2;
    (this->fields).__1__state = -1;
    this = (HealthbarLerp_LerpProgress_d_10 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    bVar3 = (int)pHVar2 < 0;
    bVar4 = (POPCOUNT((uint)pHVar2 & 0xff) & 1U) == 0;
    bVar5 = true;
    if (pHVar2 == (HealthbarLerp *)0x0) goto code_?;
    fVar7 = (float)this / (pHVar2->fields).lerpForSeconds + fVar7;
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  (pHVar1->fields)._progress_5__2 = fVar7;
  in_AF = 0;
  if (_UNK_? <= fVar7) {
code_?:
    this = (HealthbarLerp_LerpProgress_d_10 *)0x0;
    pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&this);
    (pHVar1->fields).__2__current = pOVar6;
    func_?(&(pHVar1->fields).__2__current,pOVar6);
    (pHVar1->fields).__1__state = 3;
    return 1;
  }
  pPVar8 = (pHVar2->fields).targetProgressBar;
  this_00 = (ProgressBarAndroid *)(pHVar2->fields).progressBar;
  bVar3 = (int)pPVar8 < 0;
  bVar5 = pPVar8 == (ProgressBar *)0x0;
  bVar4 = (POPCOUNT((uint)pPVar8 & 0xff) & 1U) == 0;
  if (!(bool)bVar5) {
    fVar7 = (pHVar1->fields)._progress_5__2;
    fVar9 = (pHVar2->fields).startProgress;
    if (fVar7 < 0.0) {
      fVar7 = 0.0;
    }
    else if (_UNK_? < fVar7) {
      fVar7 = _UNK_?;
    }
    in_AF = 0;
    bVar3 = (int)this_00 < 0;
    bVar5 = this_00 == (ProgressBarAndroid *)0x0;
    bVar4 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
    if (!(bool)bVar5) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                (this_00,((pPVar8->fields).progress - fVar9) * fVar7 + fVar9,(MethodInfo *)0x0);
      pPVar8 = (pHVar2->fields).progressBar;
      bVar3 = (int)pPVar8 < 0;
      bVar5 = pPVar8 == (ProgressBar *)0x0;
      bVar4 = (POPCOUNT((uint)pPVar8 & 0xff) & 1U) == 0;
      if (!(bool)bVar5) {
        pPVar10 = (pHVar2->fields).targetProgressBar;
        bVar3 = (int)pPVar10 < 0;
        bVar5 = pPVar10 == (ProgressBar *)0x0;
        bVar4 = (POPCOUNT((uint)pPVar10 & 0xff) & 1U) == 0;
        if (!(bool)bVar5) {
          if ((pPVar10->fields).progress < (pPVar8->fields).progress) {
            this = (HealthbarLerp_LerpProgress_d_10 *)0x0;
            pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&this);
            (pHVar1->fields).__2__current = pOVar6;
            func_?(&(pHVar1->fields).__2__current,pOVar6);
            (pHVar1->fields).__1__state = 2;
            return 1;
          }
          goto code_?;
        }
      }
    }
  }
code_?:
  bVar11 = 0;
  bVar12 = 0;
  func_?();
  pbVar13 = (byte *)(((uint)(in_NT & 1) * 0x4000 | (uint)(bVar11 & 1) * 0x800 |
                     (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                     (uint)(bVar3 & 1) * 0x80 | (uint)(bVar5 & 1) * 0x40 |
                     (uint)(in_AF & 1) * 0x10 | (uint)(bVar4 & 1) * 4 | (uint)(bVar12 & 1) |
                     (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
                     (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000) + 0x5d061042 +
                   (int)unaff_EBX * 2);
  bVar5 = *pbVar13;
  bVar4 = *pbVar13 + (byte)unaff_EBX;
  *pbVar13 = bVar4 + bVar12;
  *unaff_EBX = *unaff_EBX + (char)((uint)(extraout_EDX + 2) >> 8) +
               (CARRY1(bVar5,(byte)unaff_EBX) || CARRY1(bVar4,bVar12));
  pcVar14 = (code *)swi(3);
  bVar15 = (*pcVar14)();
  return bVar15;
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

