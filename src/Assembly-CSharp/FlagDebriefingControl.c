
/* Void EndFlagCountDown() */

void Assembly-CSharp.dll::FlagDebriefingControl::FlagDebriefingControl_EndFlagCountDown
               (FlagDebriefingControl *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).RunStartTime = fVar1;
  (this->fields).IsInFlagDebriefing = 0;
  if ((this->fields).OnFlagCountDownEnd == (Action *)0x0) {
    return;
  }
  if (pJRam0000002c != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
              (pJRam0000002c,in_stack_2);
  }
  this_00 = pMRam00000014;
  piVar3 = piRam_?;
  pcVar4 = pcRam_?;
  piVar5 = piRam_?;
  method_00 = pMRam00000014;
  if (pMRam00000014->flags == 0xffff) {
    func_?(pMRam00000014);
  }
  cVar6 = func_?(this_00);
  if (cVar6 == '\0') {
    if ((char)this_00->iflags == '\0') {
      (*pcVar4)();
      return;
    }
  }
  else if ((this_00->flags != 0xffff) &&
          (((piVar3 == (int *)0x0 || ((*(uint *)(*piVar3 + 0xa0) & 0x100) == 0)) &&
           (iRam_? != 0)))) {
    cVar6 = func_?(piVar3);
    if (cVar6 != '\0') {
      return;
    }
    pMVar7 = this_00;
    cVar6 = func_?();
    pOVar8 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,pMVar7);
    cVar9 = func_?(pOVar8);
    if (cVar6 == '\0') {
      if (cVar9 != '\0') {
        pOVar8 = mscorlib.dll::System::Collections::Generic::
                 KeyValuePair`2[WinningConditionType,System::Object]::
                 KeyValuePair_2_WinningConditionType_System_Object__get_Value
                           ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_00,method_00)
        ;
        func_?(this_00->flags,pOVar8,piVar3);
        return;
      }
      (**(code **)(*piVar3 + 0xc0 + (uint)this_00->flags * 8))
                (piVar3,*(undefined4 *)(*piVar3 + 0xc4 + (uint)this_00->flags * 8));
      return;
    }
    uVar10 = (uint)this_00->flags;
    if (cVar9 == '\0') {
      puVar11 = (undefined4 *)func_?(*(undefined4 *)(*piVar3 + 0xc4 + uVar10 * 8),this_00);
      (*(code *)*puVar11)(piVar3,puVar11);
      return;
    }
    uVar12 = 0;
    uVar13 = *(ushort *)(*piVar3 + 0xb6);
    pMVar7 = this_00;
    if (uVar13 != 0) {
      do {
        if (*(char **)(*(int *)(*piVar3 + 0x58) + (uint)uVar12 * 8) == this_00->name) {
          iVar14 = *piVar5 +
                  (*(int *)(*(int *)(*piVar5 + 0x58) + 4 + (uint)uVar12 * 8) +
                  method_00->flags + 0x18) * 8;
          goto code_?;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar13);
      uVar10 = (uint)method_00->flags;
      pMVar7 = method_00;
      piVar3 = piVar5;
    }
    piVar5 = piVar3;
    method_00 = pMVar7;
    iVar14 = func_?(piVar5,this_00->name,uVar10);
code_?:
    puVar11 = (undefined4 *)func_?(*(undefined4 *)(iVar14 + 4),method_00);
    (*(code *)*puVar11)(piVar5,puVar11);
    return;
  }
  (*pcVar4)(piVar3,this_00);
  return;
}


/* Void ResetToSpawnPoint() */

void Assembly-CSharp.dll::FlagDebriefingControl::FlagDebriefingControl_ResetToSpawnPoint
               (FlagDebriefingControl *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      MVPlayer::MVPlayer_ResetCheckpoint((MVPlayer *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StartFlagCountDown() */

void Assembly-CSharp.dll::FlagDebriefingControl::FlagDebriefingControl_StartFlagCountDown
               (FlagDebriefingControl *this,MethodInfo *method)

{
  this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).OnFlagCountDown;
  if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  (this->fields).IsInFlagDebriefing = 1;
  return;
}


/* Void StartFlagDebriefing(Int32) */

void Assembly-CSharp.dll::FlagDebriefingControl::FlagDebriefingControl_StartFlagDebriefing
               (FlagDebriefingControl *this,int32_t captureTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).IsInFlagDebriefing = 1;
  this_00 = (Action_1_UIPushOption_ *)(this->fields).OnFlagDebriefing;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,captureTime,MethodInfo__System__Action<int>__Invoke_int_);
  }
  return;
}

