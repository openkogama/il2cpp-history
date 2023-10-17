
/* ScoreBoardBase GetInstantiatedScoreboard(WinningConditionType) */

ScoreBoardBase *
Assembly-CSharp.dll::ScoreBoardController::ScoreBoardController_GetInstantiatedScoreboard
          (ScoreBoardController *this,WinningConditionType__Enum winConType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    ScoreBoardSingleBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardSingleBase>_ScoreBoardSingleBase_
                   );
    func_?(&
                    ScoreBoardTeamBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardTeamBase>_ScoreBoardTeamBase_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    iVar2 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
    if (iVar2 < 2) {
      original = (this->fields).scoreboardSingle;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar3 = (ScoreBoardBase *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          ScoreBoardSingleBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardSingleBase>_ScoreBoardSingleBase_
                         );
      return pSVar3;
    }
    original_00 = (this->fields).scoreboardTeam;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar3 = (ScoreBoardBase *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original_00,
                        ScoreBoardTeamBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardTeamBase>_ScoreBoardTeamBase_
                       );
    return pSVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (ScoreBoardBase *)(*pcVar4)();
  return pSVar3;
}

