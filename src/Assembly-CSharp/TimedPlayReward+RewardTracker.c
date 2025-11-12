
/* Void PostResetCleanup() */

void Assembly-CSharp.dll::TimedPlayReward+RewardTracker::
     TimedPlayReward_RewardTracker_PostResetCleanup(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TimedPlayReward__RewardTracker);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TimedPlayReward_RewardTracker_Co);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged != (Action *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_TimedPlayReward_RewardTracker_Co,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged = (Action *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)
                     &TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged >>
                    0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::TimedPlayReward+RewardTracker::TimedPlayReward_RewardTracker_Reset
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TimedPlayReward__RewardTracker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__TimedPlayReward__RewardTracker->static_fields->IsCollected = 0;
  return;
}

