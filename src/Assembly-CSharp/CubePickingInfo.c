
/* CubePickingInfo(CubePickingInfo) */

void Assembly-CSharp.dll::CubePickingInfo::CubePickingInfo__ctor_1
               (CubePickingInfo *this,CubePickingInfo *cubePickingInfo,MethodInfo *method)

{
  if (cubePickingInfo == (CubePickingInfo *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (this->fields).cube = (cubePickingInfo->fields).cube;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  (this->fields).pickedFace = (cubePickingInfo->fields).pickedFace;
  (this->fields).pickedEdge = (cubePickingInfo->fields).pickedEdge;
  fVar7 = (cubePickingInfo->fields).normal.y;
  fVar8 = (cubePickingInfo->fields).normal.z;
  (this->fields).normal.x = (cubePickingInfo->fields).normal.x;
  (this->fields).normal.y = fVar7;
  (this->fields).normal.z = fVar8;
  fVar8 = (cubePickingInfo->fields).point.z;
  fVar7 = (cubePickingInfo->fields).point.y;
  (this->fields).point.x = (cubePickingInfo->fields).point.x;
  (this->fields).point.y = fVar7;
  (this->fields).point.z = fVar8;
  iVar9 = (cubePickingInfo->fields).iLocalPos.y;
  iVar10 = (cubePickingInfo->fields).iLocalPos.z;
  (this->fields).iLocalPos.x = (cubePickingInfo->fields).iLocalPos.x;
  (this->fields).iLocalPos.y = iVar9;
  (this->fields).iLocalPos.z = iVar10;
  (this->fields).pickedEdgeIndex0 = (cubePickingInfo->fields).pickedEdgeIndex0;
  (this->fields).pickedEdgeIndex1 = (cubePickingInfo->fields).pickedEdgeIndex1;
  return;
}

