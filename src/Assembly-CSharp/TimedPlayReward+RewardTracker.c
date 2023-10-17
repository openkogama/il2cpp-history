
/* Void PostResetCleanup() */

void Assembly-CSharp.dll::TimedPlayReward+RewardTracker::
     TimedPlayReward_RewardTracker_PostResetCleanup(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__TimedPlayReward__RewardTracker);
    func_?(&StringLiteral_TimedPlayReward_RewardTracker_Co);
    cRam_? = '\x01';
  }
  if (TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged != (Action *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_TimedPlayReward_RewardTracker_Co,(MethodInfo *)0x0);
    TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = (Action *)0x0;
    func_?(&TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged,0);
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::TimedPlayReward+RewardTracker::TimedPlayReward_RewardTracker_Reset
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TimedPlayReward__RewardTracker);
    cRam_? = '\x01';
  }
  TypeInfo__TimedPlayReward__RewardTracker->static_fields->IsCollected = 0;
  return;
}

