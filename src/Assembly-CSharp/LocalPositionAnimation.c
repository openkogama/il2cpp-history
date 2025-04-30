
/* Void Awake() */

void Assembly-CSharp.dll::LocalPositionAnimation::LocalPositionAnimation_Awake
               (LocalPositionAnimation *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    (this->fields).startPos.x = (float)uVar2;
    (this->fields).startPos.y = (float)uVar3;
    uVar5 = (this->fields).deltaMovement.x;
    uVar6 = (this->fields).deltaMovement.y;
    (this->fields).startPos.z = fVar4;
    fVar7 = (this->fields).deltaMovement.z;
    (this->fields).endPos.x = (float)uVar2 + (float)uVar5;
    (this->fields).endPos.y = (float)uVar3 + (float)uVar6;
    (this->fields).endPos.z = fVar4 + fVar7;
    (this->fields).animatedTime = 0.0;
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::LocalPositionAnimation::LocalPositionAnimation_Update
               (LocalPositionAnimation *this,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = (float10)func_?();
  (this->fields).animatedTime = (float)fVar1;
  fVar2 = (this->fields).animationTime;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  uVar3 = (this->fields).startPos.x;
  uVar4 = (this->fields).startPos.y;
  fVar5 = (this->fields).startPos.z;
  fVar6 = (this->fields).endPos.z;
  uVar7 = (this->fields).endPos.x;
  uVar8 = (this->fields).endPos.y;
  dVar9 = (double)(((float)fVar1 / fVar2) * _UNK_?);
  func_?();
  fVar2 = ((float)dVar9 + _UNK_?) * _UNK_?;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (_UNK_? < fVar2) {
    fVar2 = _UNK_?;
  }
  if (this_00 != (Transform *)0x0) {
    value.y = ((float)uVar8 - (float)uVar4) * fVar2 + (float)uVar4;
    value.x = ((float)uVar7 - (float)uVar3) * fVar2 + (float)uVar3;
    value.z = (fVar6 - fVar5) * fVar2 + fVar5;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

