
/* CubePickingInfo(CubePickingInfo) */

void Assembly-CSharp.dll::CubePickingInfo::CubePickingInfo__ctor_1
               (CubePickingInfo *this,CubePickingInfo *cubePickingInfo,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (cubePickingInfo != (CubePickingInfo *)0x0) {
    pCVar1 = (cubePickingInfo->fields).cube;
    (this->fields).cube = pCVar1;
    func_?(&this->fields,pCVar1);
    (this->fields).pickedFace = (cubePickingInfo->fields).pickedFace;
    (this->fields).pickedEdge = (cubePickingInfo->fields).pickedEdge;
    fVar2 = (cubePickingInfo->fields).normal.y;
    fVar3 = (cubePickingInfo->fields).normal.z;
    (this->fields).normal.x = (cubePickingInfo->fields).normal.x;
    (this->fields).normal.y = fVar2;
    (this->fields).normal.z = fVar3;
    fVar2 = (cubePickingInfo->fields).point.y;
    fVar3 = (cubePickingInfo->fields).point.z;
    (this->fields).point.x = (cubePickingInfo->fields).point.x;
    (this->fields).point.y = fVar2;
    (this->fields).point.z = fVar3;
    iVar4 = (cubePickingInfo->fields).iLocalPos.y;
    iVar5 = (cubePickingInfo->fields).iLocalPos.z;
    (this->fields).iLocalPos.x = (cubePickingInfo->fields).iLocalPos.x;
    (this->fields).iLocalPos.y = iVar4;
    (this->fields).iLocalPos.z = iVar5;
    (this->fields).pickedEdgeIndex0 = (cubePickingInfo->fields).pickedEdgeIndex0;
    (this->fields).pickedEdgeIndex1 = (cubePickingInfo->fields).pickedEdgeIndex1;
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

