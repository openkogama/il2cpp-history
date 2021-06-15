
/* Void PostResetCleanup() */

void Assembly-CSharp.dll::TimedPlayReward+RewardTracker::
     TimedPlayReward_RewardTracker_PostResetCleanup(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__TimedPlayReward__RewardTracker->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__TimedPlayReward__RewardTracker->_1).cctor_started == 0)) {
    func_?(TypeInfo__TimedPlayReward__RewardTracker);
  }
  if (TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged != (Action *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_TimedPlayReward_RewardTracker_Co,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__TimedPlayReward__RewardTracker->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__TimedPlayReward__RewardTracker->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = (Action *)0x0;
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::TimedPlayReward+RewardTracker::TimedPlayReward_RewardTracker_Reset
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__TimedPlayReward__RewardTracker->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__TimedPlayReward__RewardTracker->_1).cctor_started == 0)) {
    func_?(TypeInfo__TimedPlayReward__RewardTracker);
  }
  TypeInfo__TimedPlayReward__RewardTracker->static_fields->IsCollected = 0;
  return;
}

