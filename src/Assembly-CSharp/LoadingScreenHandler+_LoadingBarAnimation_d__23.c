
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LoadingScreenHandler+<LoadingBarAnimation>d__23::
     LoadingScreenHandler_LoadingBarAnimation_d_23_MoveNext
               (LoadingScreenHandler_LoadingBarAnimation_d_23 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__WaitForSeconds);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pLVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((pLVar2 == (LoadingScreenHandler *)0x0) ||
       (pPVar3 = (pLVar2->fields).loadingBar, pPVar3 == (ProgressBar *)0x0))
    goto code_?;
    (this->fields)._startProgress_5__2 = (pPVar3->fields).progress;
    (this->fields)._loadingBarTime_5__3 = 0.0;
    pOVar4 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitForSeconds);
    bVar5 = iRam_? != 0;
    *(undefined4 *)&pOVar4[1].klass = 0x3dcccccd;
    (this->fields).__2__current = pOVar4;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    (this->fields).__1__state = 1;
code_?:
    bVar10 = 1;
  }
  else {
    if ((iVar1 == 1) || (iVar1 == 2)) {
      (this->fields).__1__state = -1;
      if (pLVar2 == (LoadingScreenHandler *)0x0) goto code_?;
      fVar11 = (pLVar2->fields).targetLoadingBarTime;
      pfVar12 = &(this->fields)._loadingBarTime_5__3;
      if (*pfVar12 <= fVar11 && fVar11 != *pfVar12) {
        fVar11 = (this->fields)._loadingBarTime_5__3;
        pcVar13 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar13 = (code *)swi(3);
          bVar10 = (*pcVar13)();
          return bVar10;
        }
        pcRam_? = pcVar13;
        fVar15 = (float)(*pcRam_?)();
        fVar15 = fVar15 + fVar11;
        (this->fields)._loadingBarTime_5__3 = fVar15;
        pPVar3 = (pLVar2->fields).loadingBar;
        fVar11 = (pLVar2->fields).targetProgress;
        fVar15 = MathFunctions::MathFunctions_SmoothInverseLerp
                           (0.0,(pLVar2->fields).targetLoadingBarTime,fVar15,(MethodInfo *)0x0);
        if (fVar15 < 0.0) {
          fVar15 = 0.0;
        }
        else if (_UNK_? < fVar15) {
          fVar15 = _UNK_?;
        }
        if (pPVar3 == (ProgressBar *)0x0) {
code_?:
          FUN_?();
          pcVar13 = (code *)swi(3);
          bVar10 = (*pcVar13)();
          return bVar10;
        }
        fVar11 = (fVar11 - (this->fields)._startProgress_5__2) * fVar15 +
                 (this->fields)._startProgress_5__2;
        if (fVar11 < 0.0) {
          fVar11 = 0.0;
        }
        else if (_UNK_? < fVar11) {
          fVar11 = _UNK_?;
        }
        this_00 = (pPVar3->fields).progressBar;
        (pPVar3->fields).progress = fVar11;
        if (this_00 == (Scrollbar *)0x0) goto code_?;
        UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                  (this_00,fVar11,(MethodInfo *)0x0);
        bVar5 = iRam_? != 0;
        (this->fields).__2__current = (Object *)0x0;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        (this->fields).__1__state = 2;
        goto code_?;
      }
    }
    bVar10 = 0;
  }
  return bVar10;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LoadingScreenHandler+<LoadingBarAnimation>d__23::
     LoadingScreenHandler_LoadingBarAnimation_d_23_System_Collections_IEnumerator_Reset
               (LoadingScreenHandler_LoadingBarAnimation_d_23 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__LoadingScreenHandler___LoadingBarAnimation_d__23__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

