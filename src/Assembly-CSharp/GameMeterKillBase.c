
/* Int32 GetCount(GameStatCounterType) */

int32_t Assembly-CSharp.dll::GameMeterKillBase::GameMeterKillBase_GetCount
                  (GameStatCounterType__Enum gameStatCounterType,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this = (pMVar1->fields).teamManager, this != (MVTeamManager *)0x0)) {
    iVar2 = MVTeamManager::MVTeamManager_TeamCount(this,(MethodInfo *)0x0);
    if (iVar2 < 2) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
        if (pMVar3 != (MVLocalPlayer *)0x0) {
          iVar2 = MVPlayer::MVPlayer_GetGameStat
                            ((MVPlayer *)pMVar3,(GameStatCounterType__Enum)pMVar1,(MethodInfo *)0x0)
          ;
          return iVar2;
        }
      }
    }
    else {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        this_00 = (pMVar1->fields).gameStatCounterManager;
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar1 != (MVNetworkGame *)0x0) {
          pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
          if ((pMVar3 != (MVLocalPlayer *)0x0) && (this_00 != (GameStatCounterManager *)0x0)) {
            iVar2 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                              (this_00,(GameStatCounterType__Enum)pMVar1,
                               (pMVar3->fields)._._Team_k__BackingField,(MethodInfo *)0x0);
            return iVar2;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar2 = (*pcVar4)();
  return iVar2;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterKillBase::GameMeterKillBase_Initialize
               (GameMeterKillBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pMStack_1 = (MethodInfo *)&::StringLiteral__;
    func_?();
    cRam_? = '\x01';
  }
  pTStack_2 = (this->fields).killsText;
  if (pTStack_2 != (Text *)0x0) {
    pMStack_1 = (pTStack_2->klass->vtable).set_text.method;
    pSStack_3 = ::StringLiteral__;
    (*(pTStack_2->klass->vtable).set_text.methodPtr)();
    return;
  }
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  uVar4 = func_?(&pTStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetCount(GameStatCounterType, Int32) */

void Assembly-CSharp.dll::GameMeterKillBase::GameMeterKillBase_SetCount
               (GameMeterKillBase *this,GameStatCounterType__Enum gameStatCounterType,int32_t limit,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar1->fields).teamManager, this_00 == (MVTeamManager *)0x0))
  goto code_?;
  iVar2 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
  if (iVar2 < 2) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar3 == (MVLocalPlayer *)0x0) goto code_?;
    this = (GameMeterKillBase *)0x0;
    MVPlayer::MVPlayer_GetGameStat
              ((MVPlayer *)pMVar3,GameStatCounterType__Enum_None,(MethodInfo *)0x0);
  }
  else {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    this_01 = (pMVar1->fields).gameStatCounterManager;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if ((pMVar3 == (MVLocalPlayer *)0x0) || (this_01 == (GameStatCounterManager *)0x0))
    goto code_?;
    limit = 0;
    this = (GameMeterKillBase *)(pMVar3->fields)._._Team_k__BackingField;
    MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
              (this_01,(GameStatCounterType__Enum)this,(MVTeam__Enum)this,(MethodInfo *)0x0);
  }
  str0 = (MethodInfo *)
         mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
  str2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&limit,(MethodInfo *)0x0);
  limit = (int32_t)&UNK_?;
  method = str0;
  pSStack4 =
       mscorlib.dll::System::String::String_Concat_4
                 ((String *)str0,::StringLiteral__,str2,(MethodInfo *)0x0);
  pTStack5 = (this->fields).killsText;
  if (pTStack5 != (Text *)0x0) {
    pMStack6 = (pTStack5->klass->vtable).set_text.method;
    (*(pTStack5->klass->vtable).set_text.methodPtr)();
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

