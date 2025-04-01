
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>d__19::
     WinningConditionDebriefing_WaitForFadeOut_d_19_MoveNext
               (WinningConditionDebriefing_WaitForFadeOut_d_19 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pWVar2 = (this->fields).__4__this;
  if ((iVar1 != 0) && (iVar1 != 1)) {
    return 0;
  }
  (this->fields).__1__state = -1;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (pMVar4 = (pMVar3->fields)._NetworkGameStateListener_k__BackingField,
     pMVar4 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar4->fields).currentGameState != 2) {
      return 0;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 != (MVNetworkGame *)0x0) &&
       (pMVar4 = (pMVar3->fields)._NetworkGameStateListener_k__BackingField,
       pMVar4 != (MVNetworkGameStateListener *)0x0)) {
      if ((pMVar4->fields).timeLeft < 0xbb9) {
        return 0;
      }
      if (pWVar2 != (WinningConditionDebriefing *)0x0) {
        pDVar5 = (pWVar2->fields).debriefing;
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar3 != (MVNetworkGame *)0x0) &&
           (pMVar4 = (pMVar3->fields)._NetworkGameStateListener_k__BackingField,
           pMVar4 != (MVNetworkGameStateListener *)0x0)) {
          MVNetworkGameStateListener::MVNetworkGameStateListener_get_CountdownInSeconds
                    (pMVar4,(MethodInfo *)0x0);
          mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
          if ((pDVar5 != (DebriefingWinnerGUI *)0x0) &&
             (pTVar6 = (pDVar5->fields).timer, pTVar6 != (Text *)0x0)) {
            (*(code *)(pTVar6->klass->vtable).set_text.method)();
            pOVar7 = (Object *)func_?();
            ppOVar8 = &(this->fields).__2__current;
            *ppOVar8 = pOVar7;
            func_?(ppOVar8,pOVar7);
            (this->fields).__1__state = 1;
            return 1;
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
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
  func_?(&
                  MethodInfo__WinningConditionDebriefing___WaitForFadeOut_d__19__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

