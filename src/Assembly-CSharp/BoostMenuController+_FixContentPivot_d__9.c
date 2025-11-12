
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::BoostMenuController+<FixContentPivot>d__9::
     BoostMenuController_FixContentPivot_d_9_MoveNext
               (BoostMenuController_FixContentPivot_d_9 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  pBVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    bVar3 = iRam_? != 0;
    (this->fields).__1__state = -1;
    (this->fields).__2__current = (Object *)0x0;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    (this->fields).__1__state = 1;
    return 1;
  }
  if (iVar1 != 1) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if ((pBVar2 != (BoostMenuController *)0x0) &&
     (pRVar8 = (pBVar2->fields).boostItemsScrollRect, pRVar8 != (RectTransform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_9 = 0;
    uStack_10 = 0;
    pvVar11 = (pRVar8->fields)._._._.m_CachedPtr;
    if (pvVar11 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar8,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      bVar13 = (*pcVar12)();
      return bVar13;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar12 = (code *)swi(3);
      bVar13 = (*pcVar12)();
      return bVar13;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(pvVar11);
    pRVar8 = (pBVar2->fields).boostItemsContent;
    if (pRVar8 != (RectTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_15 = 0;
      uStack_16 = 0;
      pvVar11 = (pRVar8->fields)._._._.m_CachedPtr;
      if (pvVar11 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar8,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        bVar13 = (*pcVar12)();
        return bVar13;
      }
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar12 = (code *)swi(3);
        bVar13 = (*pcVar12)();
        return bVar13;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(pvVar11,&uStack_15);
      if ((float)uStack_10 < (float)uStack_16) {
        pRVar8 = (pBVar2->fields).boostItemsContent;
        if (pRVar8 == (RectTransform *)0x0) goto DAT_?;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                  (pRVar8,(Vector2)((ulonglong)_UNK_? << 0x20),(MethodInfo *)0x0);
      }
      return 0;
    }
  }
DAT_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::BoostMenuController+<FixContentPivot>d__9::
     BoostMenuController_FixContentPivot_d_9_System_Collections_IEnumerator_Reset
               (BoostMenuController_FixContentPivot_d_9 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__BoostMenuController___FixContentPivot_d__9__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

