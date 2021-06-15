
/* CubePickingInfo(CubePickingInfo) */

void Assembly-CSharp.dll::CubePickingInfo::CubePickingInfo__ctor_1
               (CubePickingInfo *this,CubePickingInfo *cubePickingInfo,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  if (cubePickingInfo != (CubePickingInfo *)0x0) {
    (this->fields).cube = (cubePickingInfo->fields).cube;
    (this->fields).pickedFace = (cubePickingInfo->fields).pickedFace;
    (this->fields).pickedEdge = (cubePickingInfo->fields).pickedEdge;
    fVar1 = (cubePickingInfo->fields).normal.y;
    fVar2 = (cubePickingInfo->fields).normal.z;
    (this->fields).normal.x = (cubePickingInfo->fields).normal.x;
    (this->fields).normal.y = fVar1;
    (this->fields).normal.z = fVar2;
    fVar1 = (cubePickingInfo->fields).point.y;
    fVar2 = (cubePickingInfo->fields).point.z;
    (this->fields).point.x = (cubePickingInfo->fields).point.x;
    (this->fields).point.y = fVar1;
    (this->fields).point.z = fVar2;
    iVar3 = (cubePickingInfo->fields).iLocalPos.y;
    iVar4 = (cubePickingInfo->fields).iLocalPos.z;
    (this->fields).iLocalPos.x = (cubePickingInfo->fields).iLocalPos.x;
    (this->fields).iLocalPos.y = iVar3;
    (this->fields).iLocalPos.z = iVar4;
    (this->fields).pickedEdgeIndex0 = (cubePickingInfo->fields).pickedEdgeIndex0;
    (this->fields).pickedEdgeIndex1 = (cubePickingInfo->fields).pickedEdgeIndex1;
    return;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

