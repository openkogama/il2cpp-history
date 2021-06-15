
/* ScoreBoardBase GetInstantiatedScoreboard(WinningConditionType) */

ScoreBoardBase *
Assembly-CSharp.dll::ScoreBoardController::ScoreBoardController_GetInstantiatedScoreboard
          (ScoreBoardController *this,WinningConditionType__Enum winConType,MethodInfo *method)

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
    this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                        ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (this_01 != (SkyParam *)0x0) {
      iVar1 = MVTeamManager::MVTeamManager_TeamCount((MVTeamManager *)this_01,(MethodInfo *)0x0);
      if (iVar1 < 2) {
        pXVar2 = *(XpBoostParticlePreviewer **)(unaff_ESI + 0xc);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                           (pXVar2,
                            ScoreBoardSingleBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardSingleBase>_ScoreBoardSingleBase_
                           );
        return (ScoreBoardBase *)pXVar2;
      }
      pXVar2 = *(XpBoostParticlePreviewer **)(unaff_ESI + 0x10);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar2,
                          ScoreBoardTeamBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardTeamBase>_ScoreBoardTeamBase_
                         );
      return (ScoreBoardBase *)pXVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar4 = (ScoreBoardBase *)(*pcVar3)();
  return pSVar4;
}

