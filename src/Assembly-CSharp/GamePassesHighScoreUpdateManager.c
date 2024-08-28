
/* Void UpdateHigscore(HighScoreDatas) */

void Assembly-CSharp.dll::GamePassesHighScoreUpdateManager::
     GamePassesHighScoreUpdateManager_UpdateHigscore
               (HighScoreDatas *newHighScore,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesHighScoreUpdateManager);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate;
  if (pAVar1 != (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,newHighScore,(pAVar1->fields)._._.method);
  }
  return;
}

