
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameTierProgressBar+<ScaleAndFadeLockForTier>d__45::GameTierProgressBar_ScaleAndFadeLockForTier_d_45_MoveNext(GameTierProgressBar_ScaleAndFadeLockForTier_d_45 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pGVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._progress_5__2 = 0.0;
    (this->fields)._alpha_5__3 = 1.0;
    if ((pGVar2 == (GameTierProgressBar *)0x0) || (pLVar3 = (pGVar2->fields).tierProgressDataList, pLVar3 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) goto code_?;
    uVar4 = (this->fields).tier;
    if ((uint)(pLVar3->fields)._size <= uVar4) goto code_?;
    pGVar5 = (pLVar3->fields)._items;
    if (pGVar5 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
    if ((uint)pGVar5->max_length <= uVar4) goto code_?;
    pCVar6 = pGVar5->vector[(int)uVar4].LockedTierIcon;
    if (pCVar6 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar6,1.0,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        (this->fields).__1__state = -1;
        return 0;
      }
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  if ((this->fields)._alpha_5__3 <= 0.0) {
    if ((pGVar2 != (GameTierProgressBar *)0x0) && (pLVar3 = (pGVar2->fields).tierProgressDataList, pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) {
      uVar4 = (this->fields).tier;
      if ((uint)(pLVar3->fields)._size <= uVar4) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        bVar8 = (*pcVar7)();
        return bVar8;
      }
      pGVar5 = (pLVar3->fields)._items;
      if (pGVar5 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
        if ((uint)pGVar5->max_length <= uVar4) {
code_?:
          FUN_?();
          pcVar7 = (code *)swi(3);
          bVar8 = (*pcVar7)();
          return bVar8;
        }
        pCVar6 = pGVar5->vector[(int)uVar4].LockedTierIcon;
        if (pCVar6 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar6,0.0,(MethodInfo *)0x0);
          bVar9 = iRam_? != 0;
          (this->fields).__2__current = (Object *)0x0;
          if (bVar9) {
            uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            uVar10 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
            do {
              uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar9 = uVar11 == *puVar12;
              if (bVar9) {
                *puVar12 = uVar11 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          (this->fields).__1__state = 2;
          return 1;
        }
      }
    }
  }
  else {
    fVar13 = (this->fields)._progress_5__2;
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(), pcVar7 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    fVar15 = (float)(*pcRam_?)();
    fVar15 = fVar15 + fVar13;
    (this->fields)._progress_5__2 = fVar15;
    if (pGVar2 != (GameTierProgressBar *)0x0) {
      fVar13 = 1.0 - fVar15 / (pGVar2->fields).unlockedTierLerpDuration;
      (this->fields)._alpha_5__3 = fVar13;
      pLVar3 = (pGVar2->fields).tierProgressDataList;
      if (pLVar3 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
        uVar4 = (this->fields).tier;
        if ((uint)(pLVar3->fields)._size <= uVar4) goto code_?;
        pGVar5 = (pLVar3->fields)._items;
        if (pGVar5 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
          if ((uint)pGVar5->max_length <= uVar4) goto code_?;
          pCVar6 = pGVar5->vector[(int)uVar4].LockedTierIcon;
          if (pCVar6 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar6,fVar13,(MethodInfo *)0x0);
            bVar9 = iRam_? != 0;
            (this->fields).__2__current = (Object *)0x0;
            if (bVar9) {
              uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
              uVar10 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
              do {
                uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                LOCK();
                bVar9 = uVar11 == *puVar12;
                if (bVar9) {
                  *puVar12 = uVar11 | 1L << (uVar4 & 0x3f);
                }
                UNLOCK();
              } while (!bVar9);
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
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::GameTierProgressBar+<ScaleAndFadeLockForTier>d__45::GameTierProgressBar_ScaleAndFadeLockForTier_d_45_System_Collections_IEnumerator_Reset(GameTierProgressBar_ScaleAndFadeLockForTier_d_45 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__GameTierProgressBar___ScaleAndFadeLockForTier_d__45__System_Collections_IEnumerator_Reset__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

