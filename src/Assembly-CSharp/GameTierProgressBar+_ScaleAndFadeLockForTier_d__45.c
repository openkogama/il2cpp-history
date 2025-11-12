
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameTierProgressBar+<ScaleAndFadeLockForTier>d__45::
     GameTierProgressBar_ScaleAndFadeLockForTier_d_45_MoveNext
               (GameTierProgressBar_ScaleAndFadeLockForTier_d_45 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  iVar2 = (this->fields).__1__state;
  pGVar3 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._progress_5__2 = 0.0;
    (this->fields)._alpha_5__3 = 1.0;
    if ((pGVar3 == (GameTierProgressBar *)0x0) ||
       (pLVar4 = (pGVar3->fields).tierProgressDataList,
       pLVar4 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) goto code_?;
    uVar5 = (this->fields).tier;
    if ((uint)(pLVar4->fields)._size <= uVar5) goto code_?;
    pGVar6 = (pLVar4->fields)._items;
    if (pGVar6 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
    if ((uint)pGVar6->max_length <= uVar5) goto code_?;
    pCVar7 = pGVar6->vector[(int)uVar5].LockedTierIcon;
    if (pCVar7 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar7,fVar1,(MethodInfo *)0x0);
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        (this->fields).__1__state = -1;
        return 0;
      }
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  if ((this->fields)._alpha_5__3 <= 0.0) {
    if ((pGVar3 != (GameTierProgressBar *)0x0) &&
       (pLVar4 = (pGVar3->fields).tierProgressDataList,
       pLVar4 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) {
      uVar5 = (this->fields).tier;
      if ((uint)(pLVar4->fields)._size <= uVar5) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        bVar9 = (*pcVar8)();
        return bVar9;
      }
      pGVar6 = (pLVar4->fields)._items;
      if (pGVar6 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
        if ((uint)pGVar6->max_length <= uVar5) {
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        pCVar7 = pGVar6->vector[(int)uVar5].LockedTierIcon;
        if (pCVar7 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar7,0.0,(MethodInfo *)0x0);
          bVar10 = iRam_? != 0;
          (this->fields).__2__current = (Object *)0x0;
          if (bVar10) {
            uVar5 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            uVar11 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
            do {
              uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
              puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
              LOCK();
              bVar10 = uVar12 == *puVar13;
              if (bVar10) {
                *puVar13 = uVar12 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          (this->fields).__1__state = 2;
          return 1;
        }
      }
    }
  }
  else {
    fVar14 = (this->fields)._progress_5__2;
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(), pcVar8 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
    pcRam_? = pcVar8;
    fVar16 = (float)(*pcRam_?)();
    fVar16 = fVar16 + fVar14;
    (this->fields)._progress_5__2 = fVar16;
    if (pGVar3 != (GameTierProgressBar *)0x0) {
      fVar1 = fVar1 - fVar16 / (pGVar3->fields).unlockedTierLerpDuration;
      (this->fields)._alpha_5__3 = fVar1;
      pLVar4 = (pGVar3->fields).tierProgressDataList;
      if (pLVar4 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
        uVar5 = (this->fields).tier;
        if ((uint)(pLVar4->fields)._size <= uVar5) goto code_?;
        pGVar6 = (pLVar4->fields)._items;
        if (pGVar6 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
          if ((uint)pGVar6->max_length <= uVar5) goto code_?;
          pCVar7 = pGVar6->vector[(int)uVar5].LockedTierIcon;
          if (pCVar7 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (pCVar7,fVar1,(MethodInfo *)0x0);
            bVar10 = iRam_? != 0;
            (this->fields).__2__current = (Object *)0x0;
            if (bVar10) {
              uVar5 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
              uVar11 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
              do {
                uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                LOCK();
                bVar10 = uVar12 == *puVar13;
                if (bVar10) {
                  *puVar13 = uVar12 | 1L << (uVar5 & 0x3f);
                }
                UNLOCK();
              } while (!bVar10);
            }
            (this->fields).__1__state = 1;
            return 1;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::GameTierProgressBar+<ScaleAndFadeLockForTier>d__45::
     GameTierProgressBar_ScaleAndFadeLockForTier_d_45_System_Collections_IEnumerator_Reset
               (GameTierProgressBar_ScaleAndFadeLockForTier_d_45 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__GameTierProgressBar___ScaleAndFadeLockForTier_d__45__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

