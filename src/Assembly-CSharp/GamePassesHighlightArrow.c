
/* Void OnEnable() */

void Assembly-CSharp.dll::GamePassesHighlightArrow::GamePassesHighlightArrow_OnEnable
               (GamePassesHighlightArrow *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).moveStartTime = fVar1;
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GamePassesHighlightArrow::GamePassesHighlightArrow_Start
               (GamePassesHighlightArrow *this,MethodInfo *method)

{
  this_00 = (Transform *)(this->fields).transformToMove;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    (this->fields).startPosition.x = pVVar1->x;
    (this->fields).startPosition.y = fVar3;
    (this->fields).startPosition.z = fVar4;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).moveStartTime = fVar4;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GamePassesHighlightArrow::GamePassesHighlightArrow_Update
               (GamePassesHighlightArrow *this,MethodInfo *method)

{
  pTVar1 = (Transform *)(this->fields).transformToMove;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffdc,pTVar1,(MethodInfo *)0x0);
    pAVar3 = (this->fields).moveCurve;
    fVar4 = pVVar2->z;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (pAVar3 != (AnimationCurve *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                (pAVar3,fVar5 - (this->fields).moveStartTime,(MethodInfo *)0x0);
      pAVar3 = (this->fields).moveCurve;
      fVar5 = (this->fields).startPosition.x;
      fVar6 = (this->fields).moveAmount;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (pAVar3 != (AnimationCurve *)0x0) {
        uVar8 = 0;
        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (pAVar3,fVar7 - (this->fields).moveStartTime,(MethodInfo *)0x0);
        pTVar1 = (Transform *)(this->fields).transformToMove;
        if (pTVar1 != (Transform *)0x0) {
          value.y = (float)uVar8;
          value.x = fVar7 * fVar6 * (this->fields).directionY + fVar5;
          value.z = fVar4;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar1,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

