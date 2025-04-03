
/* Void EndFlagCountDown() */

void Assembly-CSharp.dll::FlagDebriefingControl::FlagDebriefingControl_EndFlagCountDown
               (FlagDebriefingControl *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).RunStartTime = fVar1;
  (this->fields).IsInFlagDebriefing = 0;
  pAVar2 = (this->fields).OnFlagCountDownEnd;
  if (pAVar2 != (Action *)0x0) {
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,(pAVar2->fields)._._.method);
  }
  return;
}


/* Void ResetToSpawnPoint() */

void Assembly-CSharp.dll::FlagDebriefingControl::FlagDebriefingControl_ResetToSpawnPoint
               (FlagDebriefingControl *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      mscorlib.dll::System::Collections::Generic::Stack`1[T]+Enumerator[System::Dynamic::
      BindingRestrictions+TestBuilder+AndNode]::
      Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode__Dispose
                ((Stack_1_T_Enumerator_System_Dynamic_BindingRestrictions_TestBuilder_AndNode_ *)
                 this_01,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0x00000000);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StartFlagCountDown() */

void Assembly-CSharp.dll::FlagDebriefingControl::FlagDebriefingControl_StartFlagCountDown
               (FlagDebriefingControl *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnFlagCountDown;
  if (pAVar1 != (Action *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  (this->fields).IsInFlagDebriefing = 1;
  return;
}


/* Void StartFlagDebriefing(Int32) */

void Assembly-CSharp.dll::FlagDebriefingControl::FlagDebriefingControl_StartFlagDebriefing
               (FlagDebriefingControl *this,int32_t captureTime,MethodInfo *method)

{
  (this->fields).IsInFlagDebriefing = 1;
  pAVar1 = (this->fields).OnFlagDebriefing;
  if (pAVar1 != (Action_1_Int32_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,captureTime,(pAVar1->fields)._._.method);
  }
  return;
}

