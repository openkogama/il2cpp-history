
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>d__19::
     WinningConditionDebriefing_WaitForFadeOut_d_19_MoveNext
               (WinningConditionDebriefing_WaitForFadeOut_d_19 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  pWVar2 = (this->fields).__4__this;
  if ((iVar1 != 0) && (iVar1 != 1)) {
    return 0;
  }
  (this->fields).__1__state = -1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar3 != (MVGameControllerBase *)0x0) &&
      (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
     (pMVar5 = (pMVar4->fields)._NetworkGameStateListener_k__BackingField,
     pMVar5 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar5->fields).currentGameState != 2) {
      return 0;
    }
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 != (MVGameControllerBase *)0x0) &&
        (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
       (pMVar5 = (pMVar4->fields)._NetworkGameStateListener_k__BackingField,
       pMVar5 != (MVNetworkGameStateListener *)0x0)) {
      if ((pMVar5->fields).timeLeft < 0xbb9) {
        return 0;
      }
      if (pWVar2 != (WinningConditionDebriefing *)0x0) {
        pDVar6 = (pWVar2->fields).debriefing;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           (pMVar5 = (pMVar4->fields)._NetworkGameStateListener_k__BackingField,
           pMVar5 != (MVNetworkGameStateListener *)0x0)) {
          IStackX_8.m_value =
               MVNetworkGameStateListener::MVNetworkGameStateListener_get_CountdownInSeconds
                         (pMVar5,(MethodInfo *)0x0);
          pSVar7 = mscorlib.dll::System::Int32::Int32_ToString(&IStackX_8,(MethodInfo *)0x0);
          if ((pDVar6 != (DebriefingWinnerGUI *)0x0) &&
             (pTVar8 = (pDVar6->fields).timer, pTVar8 != (Text *)0x0)) {
            (*(pTVar8->klass->vtable).set_text.methodPtr)
                      (pTVar8,pSVar7,(pTVar8->klass->vtable).set_text.method);
            lVar9 = lRam_?;
            pOVar10 = (Object *)0x0;
            IStackX_8.m_value = 0;
            if (*(int *)(lRam_? + 0x28) < 0) {
              if ((*(longlong *)(lRam_? + 0x60) == 0) ||
                 ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
                pOVar10 = (Object *)FUN_?(lRam_?);
                FUN_?(pOVar10 + 1,&IStackX_8,(longlong)*(int *)(lVar9 + 0xf8) + -0x10);
                if (iRam_? != 0) {
                  uVar11 = (uint)((ulonglong)(pOVar10 + 1) >> 0xc);
                  lVar9 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar12 = *(ulonglong *)(lVar9 + 0xADDR);
                    puVar13 = (ulonglong *)(lVar9 + 0xADDR);
                    LOCK();
                    bVar14 = uVar12 == *puVar13;
                    if (bVar14) {
                      *puVar13 = uVar12 | 1L << (uVar11 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar14);
                }
              }
            }
            else {
              pOVar10 = (Object *)((ulonglong)uStackX_c << 0x20);
            }
            bVar14 = iRam_? != 0;
            (this->fields).__2__current = pOVar10;
            if (bVar14) {
              uVar11 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
              lVar9 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
              do {
                uVar12 = *(ulonglong *)(lVar9 + 0xADDR);
                puVar13 = (ulonglong *)(lVar9 + 0xADDR);
                LOCK();
                bVar14 = uVar12 == *puVar13;
                if (bVar14) {
                  *puVar13 = uVar12 | 1L << (uVar11 & 0x3f);
                }
                UNLOCK();
              } while (!bVar14);
            }
            (this->fields).__1__state = 1;
            return 1;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar16 = (*pcVar15)();
  return bVar16;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>d__19::
     WinningConditionDebriefing_WaitForFadeOut_d_19_System_Collections_IEnumerator_Reset
               (WinningConditionDebriefing_WaitForFadeOut_d_19 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__WinningConditionDebriefing___WaitForFadeOut_d__19__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

