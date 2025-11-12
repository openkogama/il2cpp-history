
/* Void UpdateHigscore(HighScoreDatas) */

void Assembly-CSharp.dll::GamePassesHighScoreUpdateManager::
     GamePassesHighScoreUpdateManager_UpdateHigscore
               (HighScoreDatas *newHighScore,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesHighScoreUpdateManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate !=
      (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0) {
    pAVar1 = TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,newHighScore,(pAVar1->fields)._._.method);
    return;
  }
  return;
}

