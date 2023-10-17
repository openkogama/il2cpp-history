
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>d__19::
     WinningConditionDebriefing_WaitForFadeOut_d_19_MoveNext
               (WinningConditionDebriefing_WaitForFadeOut_d_19 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pWVar1 = this;
  iVar2 = (this->fields).__1__state;
  pWVar3 = (this->fields).__4__this;
  if ((iVar2 != 0) && (iVar2 != 1)) {
    return 0;
  }
  (this->fields).__1__state = -1;
  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar4 != (MVNetworkGame *)0x0) &&
     (pMVar5 = (pMVar4->fields)._NetworkGameStateListener_k__BackingField,
     pMVar5 != (MVNetworkGameStateListener *)0x0)) {
    if ((pMVar5->fields).currentGameState != 2) {
      return 0;
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar4 != (MVNetworkGame *)0x0) &&
       (pMVar5 = (pMVar4->fields)._NetworkGameStateListener_k__BackingField,
       pMVar5 != (MVNetworkGameStateListener *)0x0)) {
      if ((pMVar5->fields).timeLeft < 0xbb9) {
        return 0;
      }
      if (pWVar3 != (WinningConditionDebriefing *)0x0) {
        this_00 = (pWVar3->fields).debriefing;
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           (pMVar5 = (pMVar4->fields)._NetworkGameStateListener_k__BackingField,
           pMVar5 != (MVNetworkGameStateListener *)0x0)) {
          MVNetworkGameStateListener::MVNetworkGameStateListener_get_CountdownInSeconds
                    (pMVar5,(MethodInfo *)0x0);
          time = (WinningConditionDebriefing_WaitForFadeOut_d_19 *)
                 mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
          if (this_00 != (DebriefingWinnerGUI *)0x0) {
            method = (MethodInfo *)0x0;
            this = time;
            DebriefingWinnerGUI::DebriefingWinnerGUI_SetTimerText
                      (this_00,(String *)time,(MethodInfo *)0x0);
            method = (MethodInfo *)&this;
            this = (WinningConditionDebriefing_WaitForFadeOut_d_19 *)TypeInfo__System__Int32;
            pOVar6 = (Object *)func_?();
            (pWVar1->fields).__2__current = pOVar6;
            func_?();
            (pWVar1->fields).__1__state = 1;
            return 1;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::WinningConditionDebriefing+<WaitForFadeOut>d__19::
     WinningConditionDebriefing_WaitForFadeOut_d_19_System_Collections_IEnumerator_Reset
               (WinningConditionDebriefing_WaitForFadeOut_d_19 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
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

