
/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::FirstTimeActivatablePointerPlayerList::
     FirstTimeActivatablePointerPlayerList_get_CanShow
               (FirstTimeActivatablePointerPlayerList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
     ((pDVar4 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar3,(MethodInfo *)0x0),
      pDVar4 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0 &&
      (pDVar5 = (pDVar4->fields)._dictionary, pDVar5 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0)
      ))) {
    if ((pDVar5->fields)._count - (pDVar5->fields)._freeCount <
        (this->fields).playersRequiredForShowingPlayerList) {
      return 0;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0 &&
        (pDVar4 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar3,(MethodInfo *)0x0),
        pDVar4 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)))) {
      uStack_6 = (pDVar4->fields)._dictionary;
      puStack_7 = (undefined4 *)0x0;
      uStack_8 = 0;
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&uStack_6 >> 0xc);
        puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar10;
          LOCK();
          uVar12 = *puVar10;
          if (uVar11 == uVar12) {
            *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar12);
      }
      if (uStack_6 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
        FUN_?();
        pcVar13 = (code *)swi(3);
        bVar14 = (*pcVar13)();
        return bVar14;
      }
      iStack_15 = (uStack_6->fields)._version;
      uStack_8 = 0;
      uStack_6._4_4_ = (undefined4)((ulonglong)uStack_6 >> 0x20);
      uStack_16 = (undefined4)uStack_6;
      uStack_17 = uStack_6._4_4_;
      uStack_18 = 0;
      lStack_19 = 0;
      uStack_6 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
      puStack_7 = &uStack_16;
      while (lVar20 = CONCAT44(uStack_17,uStack_16), lVar20 != 0) {
        if (iStack_15 != *(int *)(lVar20 + 0x2c)) goto code_?;
        do {
          if (lVar20 == 0) goto code_?;
          if (*(uint *)(lVar20 + 0x20) <= uStack_18) {
            return 0;
          }
          lVar21 = *(longlong *)(lVar20 + 0x18);
          lVar22 = (longlong)(int)uStack_18;
          uVar9 = uStack_18 + 1;
          if (lVar21 == 0) goto code_?;
          bVar23 = *(uint *)(lVar21 + 0x18) <= uStack_18;
          uStack_18 = uVar9;
          if (bVar23) goto code_?;
        } while (*(int *)(lVar21 + 0x20 + lVar22 * 0x18) < 0);
        lStack_19 = *(longlong *)(lVar21 + (lVar22 + 2) * 0x18);
        func_?();
        if (lStack_19 == 0) goto code_?;
        if (*(int *)(lStack_19 + 0x58) != 0) {
          bVar14 = FirstTimeActivatablePopupPressKeyToSkip::
                   FirstTimeActivatablePopupPressKeyToSkip_get_CanShow
                             ((FirstTimeActivatablePopupPressKeyToSkip *)this,(MethodInfo *)0x0);
          return bVar14;
        }
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  uVar9 = uStack_18;
code_?:
  uStack_18 = uVar9;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
}

