
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::HealthbarLerp+<LerpProgress>d__8::HealthbarLerp_LerpProgress_d_8_MoveNext
               (HealthbarLerp_LerpProgress_d_8 *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  pHVar2 = (this->fields).__4__this;
  iVar3 = (this->fields).__1__state;
  pOVar4 = (Object *)0x0;
  if ((iVar3 == 0) || (iVar3 == 1)) {
    (this->fields).__1__state = -1;
    pcVar5 = pcRam_?;
    if ((pcVar1 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar5 = pcVar1, pcVar1 == (code *)0x0))
    {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar1 = (code *)swi(3);
      bVar7 = (*pcVar1)();
      return bVar7;
    }
    pcRam_? = pcVar5;
    fVar8 = (float)(*pcVar1)();
    lVar9 = lRam_?;
    if (pHVar2 == (HealthbarLerp *)0x0) goto code_?;
    if (fVar8 - (pHVar2->fields).lerpStart < _UNK_?) {
      uStackX_8 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar4 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar4 + 1,&uStackX_8,(longlong)*(int *)(lVar9 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar10 = (uint)((ulonglong)(pOVar4 + 1) >> 0xc);
            uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
            do {
              uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
              puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
              LOCK();
              bVar14 = uVar12 == *puVar13;
              if (bVar14) {
                *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar14);
          }
        }
      }
      else {
        pOVar4 = (Object *)((ulonglong)uStackX_c << 0x20);
      }
      bVar14 = iRam_? != 0;
      (this->fields).__2__current = pOVar4;
      if (bVar14) {
        uVar10 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
        do {
          uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
          puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      (this->fields).__1__state = 1;
      return 1;
    }
    (this->fields)._progress_5__2 = 0.0;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        (this->fields).__1__state = -1;
        return 0;
      }
      return 0;
    }
    fVar8 = (this->fields)._progress_5__2;
    (this->fields).__1__state = -1;
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._progress_5__2 = fVar15 + fVar8;
  }
  pfVar16 = &(this->fields)._progress_5__2;
  if (_UNK_? < *pfVar16 || _UNK_? == *pfVar16) {
code_?:
    lVar9 = lRam_?;
    uStackX_8 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar4 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar4 + 1,&uStackX_8,(longlong)*(int *)(lVar9 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)(pOVar4 + 1) >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar14 = uVar12 == *puVar13;
            if (bVar14) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar14);
        }
      }
    }
    else {
      pOVar4 = (Object *)((ulonglong)uStackX_c << 0x20);
    }
    bVar14 = iRam_? != 0;
    (this->fields).__2__current = pOVar4;
    if (bVar14) {
      uVar10 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar14 = uVar12 == *puVar13;
        if (bVar14) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar14);
    }
    (this->fields).__1__state = 3;
    return 1;
  }
  if (pHVar2 != (HealthbarLerp *)0x0) {
    pPVar17 = (pHVar2->fields).targetProgressBar;
    pPVar18 = (pHVar2->fields).progressBar;
    if (pPVar17 != (ProgressBar *)0x0) {
      fVar8 = (this->fields)._progress_5__2;
      fVar15 = (pHVar2->fields).startProgress;
      if (fVar8 < 0.0) {
        fVar8 = 0.0;
      }
      else if (_UNK_? < fVar8) {
        fVar8 = _UNK_?;
      }
      if (pPVar18 != (ProgressBar *)0x0) {
        fVar15 = ((pPVar17->fields).progress - fVar15) * fVar8 + fVar15;
        if (fVar15 < 0.0) {
          fVar15 = 0.0;
        }
        else if (_UNK_? < fVar15) {
          fVar15 = _UNK_?;
        }
        this_00 = (pPVar18->fields).progressBar;
        (pPVar18->fields).progress = fVar15;
        if (this_00 != (Scrollbar *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                    (this_00,fVar15,(MethodInfo *)0x0);
          lVar9 = lRam_?;
          pPVar17 = (pHVar2->fields).progressBar;
          if ((pPVar17 != (ProgressBar *)0x0) &&
             (pPVar18 = (pHVar2->fields).targetProgressBar, pPVar18 != (ProgressBar *)0x0)) {
            if ((pPVar18->fields).progress < (pPVar17->fields).progress) {
              uStackX_8 = 0;
              if (*(int *)(lRam_? + 0x28) < 0) {
                if ((*(longlong *)(lRam_? + 0x60) == 0) ||
                   ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
                  pOVar4 = (Object *)FUN_?(lRam_?);
                  FUN_?(pOVar4 + 1,&uStackX_8,(longlong)*(int *)(lVar9 + 0xf8) + -0x10);
                  if (iRam_? != 0) {
                    uVar10 = (uint)((ulonglong)(pOVar4 + 1) >> 0xc);
                    uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
                    do {
                      uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                      puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                      LOCK();
                      bVar14 = uVar12 == *puVar13;
                      if (bVar14) {
                        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar14);
                  }
                }
              }
              else {
                pOVar4 = (Object *)((ulonglong)uStackX_c << 0x20);
              }
              (this->fields).__2__current = pOVar4;
              func_?(&(this->fields).__2__current);
              (this->fields).__1__state = 2;
              return 1;
            }
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar7 = (*pcVar1)();
  return bVar7;
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
  uVar1 = func_?(&
                              MethodInfo__HealthbarLerp___LerpProgress_d__8__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

