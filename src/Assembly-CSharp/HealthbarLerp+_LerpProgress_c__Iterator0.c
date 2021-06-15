
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::HealthbarLerp+<LerpProgress>c__Iterator0::
     HealthbarLerp_LerpProgress_c_Iterator0_MoveNext
               (HealthbarLerp_LerpProgress_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = this;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  switch(iVar2) {
  case 0:
  case 1:
    this = (HealthbarLerp_LerpProgress_c_Iterator0 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                     ((MethodInfo *)0x0);
    pHVar3 = (pHVar1->fields)._this;
    if (pHVar3 == (HealthbarLerp *)0x0) goto code_?;
    if ((float)this - (pHVar3->fields).lerpStart < (pHVar3->fields).lerpDelay) {
      this = (HealthbarLerp_LerpProgress_c_Iterator0 *)0x0;
      pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&this);
      (pHVar1->fields)._current = pOVar4;
      if ((pHVar1->fields)._disposing != 0) {
        return 1;
      }
      (pHVar1->fields)._PC = 1;
      return 1;
    }
    fVar5 = 0.0;
    break;
  case 2:
    fVar5 = (this->fields)._progress___1;
    this = (HealthbarLerp_LerpProgress_c_Iterator0 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    pHVar3 = (pHVar1->fields)._this;
    if (pHVar3 == (HealthbarLerp *)0x0) goto code_?;
    fVar5 = (float)this / (pHVar3->fields).lerpForSeconds + fVar5;
    break;
  default:
    return 0;
  }
  (pHVar1->fields)._progress___1 = fVar5;
  if (_UNK_? <= fVar5) {
code_?:
    this = (HealthbarLerp_LerpProgress_c_Iterator0 *)0x0;
    pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&this);
    (pHVar1->fields)._current = pOVar4;
    if ((pHVar1->fields)._disposing == 0) {
      (pHVar1->fields)._PC = 3;
    }
    return 1;
  }
  pHVar3 = (pHVar1->fields)._this;
  if (pHVar3 != (HealthbarLerp *)0x0) {
    a = (Mathf__Class *)(pHVar3->fields).startProgress;
    this_00 = (pHVar3->fields).progressBar;
    pPVar6 = (ProgressBarAndroid *)(pHVar3->fields).targetProgressBar;
    if (pPVar6 != (ProgressBarAndroid *)0x0) {
      fVar5 = ProgressBarAndroid::ProgressBarAndroid_get_Progress(pPVar6,(MethodInfo *)0x0);
      this = (HealthbarLerp_LerpProgress_c_Iterator0 *)(pHVar1->fields)._progress___1;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        a = TypeInfo__UnityEngine__Mathf;
        func_?();
      }
      this = (HealthbarLerp_LerpProgress_c_Iterator0 *)
             UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                       ((float)a,fVar5,(float)this,(MethodInfo *)0x0);
      if (this_00 != (ProgressBar *)0x0) {
        ProgressBar::ProgressBar_set_Progress(this_00,(float)this,(MethodInfo *)0x0);
        pHVar3 = (pHVar1->fields)._this;
        if ((pHVar3 != (HealthbarLerp *)0x0) &&
           (pPVar6 = (ProgressBarAndroid *)(pHVar3->fields).progressBar,
           pPVar6 != (ProgressBarAndroid *)0x0)) {
          fVar5 = ProgressBarAndroid::ProgressBarAndroid_get_Progress(pPVar6,(MethodInfo *)0x0);
          pHVar3 = (pHVar1->fields)._this;
          if ((pHVar3 != (HealthbarLerp *)0x0) &&
             (pPVar6 = (ProgressBarAndroid *)(pHVar3->fields).targetProgressBar,
             pPVar6 != (ProgressBarAndroid *)0x0)) {
            fVar7 = ProgressBarAndroid::ProgressBarAndroid_get_Progress(pPVar6,(MethodInfo *)0x0);
            if (fVar7 < fVar5) {
              this = (HealthbarLerp_LerpProgress_c_Iterator0 *)0x0;
              pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&this);
              (pHVar1->fields)._current = pOVar4;
              if ((pHVar1->fields)._disposing != 0) {
                return 1;
              }
              (pHVar1->fields)._PC = 2;
              return 1;
            }
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  uVar8 = func_?(0);
  uVar9 = (uint)((ulonglong)uVar8 >> 0x20);
  uVar10 = (undefined3)((ulonglong)uVar8 >> 8);
  cVar11 = (char)((ulonglong)uVar8 >> 0x28);
  cVar12 = (char)uVar8 + cVar11;
  puVar13 = (uint *)CONCAT31(uVar10,cVar12);
  *puVar13 = *puVar13 ^ uVar9;
  puVar13 = (uint *)CONCAT31(uVar10,cVar12 + cVar11);
  *puVar13 = *puVar13 ^ uVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void Reset() */

void Assembly-CSharp.dll::HealthbarLerp+<LerpProgress>c__Iterator0::
     HealthbarLerp_LerpProgress_c_Iterator0_Reset
               (HealthbarLerp_LerpProgress_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

