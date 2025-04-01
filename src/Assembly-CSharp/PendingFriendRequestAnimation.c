
/* Void MoveAnimation(Single) */

void Assembly-CSharp.dll::PendingFriendRequestAnimation::PendingFriendRequestAnimation_MoveAnimation
               (PendingFriendRequestAnimation *this,float amount,MethodInfo *method)

{
  pTVar1 = (Transform *)(this->fields).maskTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    fVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    pTVar1 = (Transform *)(this->fields).friendRequestImageTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
      pTVar1 = (Transform *)(this->fields).maskTransform;
      uVar6 = pVVar2->x;
      fVar7 = pVVar2->y;
      fVar8 = pVVar2->z;
      fVar9 = (float)uVar6 - amount;
      if (pTVar1 != (Transform *)0x0) {
        value.y = (float)uVar4;
        value.x = fVar3 + amount;
        value.z = fVar5;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar1,value,(MethodInfo *)0x0);
        pTVar1 = (Transform *)(this->fields).friendRequestImageTransform;
        if (pTVar1 != (Transform *)0x0) {
          value_00.y = fVar7;
          value_00.x = fVar9;
          value_00.z = fVar8;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar1,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PendingFriendRequestAnimation::PendingFriendRequestAnimation_Update
               (PendingFriendRequestAnimation *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((this->fields).dotAnimationCooldown + (this->fields).lastDotAnimationTime < fVar1) {
    iVar2 = (this->fields).dotAmount;
    fVar1 = (this->fields).moveAmount;
    if ((this->fields).currentDot != iVar2) {
      PendingFriendRequestAnimation_MoveAnimation(this,fVar1,(MethodInfo *)0x0);
      piVar3 = &(this->fields).currentDot;
      *piVar3 = *piVar3 + 1;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).lastDotAnimationTime = fVar1;
      return;
    }
    PendingFriendRequestAnimation_MoveAnimation
              (this,(float)((uint)fVar1 ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
                    * (float)iVar2,(MethodInfo *)0x0);
    (this->fields).currentDot = 0;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).lastDotAnimationTime = fVar1;
  }
  return;
}

