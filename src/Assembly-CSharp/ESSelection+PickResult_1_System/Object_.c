
/* ESSelection+PickResult`1[System.Object](Vector3, VoxelHit, Object) */

void Assembly-CSharp.dll::ESSelection+PickResult`1[System::Object]::
     ESSelection_PickResult_1_System_Object___ctor
               (ESSelection_PickResult_1_System_Object_ *this,Vector3 *mousePosition,VoxelHit *hit,
               Object *data,MethodInfo *method)

{
  fVar1 = mousePosition->y;
  fVar2 = (hit->normal).y;
  fVar3 = (hit->normal).z;
  IVar4 = hit->cubePos;
  uVar5 = *(undefined2 *)&hit->field_0x1e;
  fVar6 = mousePosition->z;
  (this->fields).mousePosition.x = mousePosition->x;
  (this->fields).mousePosition.y = fVar1;
  fVar1 = (hit->point).x;
  fVar7 = (hit->point).y;
  uVar8 = *(undefined8 *)&(hit->point).z;
  (this->fields).mousePosition.z = fVar6;
  iVar9 = iRam_?;
  (this->fields).hit.point.x = fVar1;
  (this->fields).hit.point.y = fVar7;
  *(undefined8 *)&(this->fields).hit.point.z = uVar8;
  iVar10 = hit->face;
  bVar11 = hit->isCubeHit;
  uVar12 = *(undefined3 *)&hit->field_0x25;
  iVar13 = hit->woId;
  uVar14 = *(undefined4 *)&hit->field_0x2c;
  (this->fields).hit.normal.y = fVar2;
  (this->fields).hit.normal.z = fVar3;
  (this->fields).hit.cubePos = IVar4;
  *(undefined2 *)&(this->fields).hit.field_0x1e = uVar5;
  pCVar15 = hit->cube;
  fVar6 = hit->distance;
  uVar16 = *(undefined4 *)&hit->field_0x3c;
  (this->fields).hit.face = iVar10;
  (this->fields).hit.isCubeHit = bVar11;
  *(undefined3 *)&(this->fields).hit.field_0x25 = uVar12;
  (this->fields).hit.woId = iVar13;
  *(undefined4 *)&(this->fields).hit.field_0x2c = uVar14;
  pCVar17 = hit->collider;
  pTVar18 = hit->transform;
  (this->fields).hit.cube = pCVar15;
  (this->fields).hit.distance = fVar6;
  *(undefined4 *)&(this->fields).hit.field_0x3c = uVar16;
  iVar19 = hit->interactionFlags;
  (this->fields).hit.collider = pCVar17;
  (this->fields).hit.transform = pTVar18;
  (this->fields).hit.interactionFlags = iVar19;
  if (iVar9 != 0) {
    uVar20 = (uint)((ulonglong)&(this->fields).hit.cube >> 0xc);
    lVar21 = (ulonglong)((uVar20 & 0x1fffff) >> 6) * 8;
    do {
      uVar22 = *(ulonglong *)(lVar21 + 0xADDR);
      puVar23 = (ulonglong *)(lVar21 + 0xADDR);
      LOCK();
      bVar24 = uVar22 == *puVar23;
      if (bVar24) {
        *puVar23 = uVar22 | 1L << (uVar20 & 0x3f);
      }
      UNLOCK();
      iVar9 = iRam_?;
    } while (!bVar24);
  }
  (this->fields).data = data;
  if (iVar9 != 0) {
    uVar20 = (uint)((ulonglong)&(this->fields).data >> 0xc);
    uVar22 = (ulonglong)((uVar20 & 0x1fffff) >> 6);
    do {
      uVar25 = *(ulonglong *)(uVar22 * 8 + 0xADDR);
      puVar23 = (ulonglong *)(uVar22 * 8 + 0xADDR);
      LOCK();
      bVar24 = uVar25 == *puVar23;
      if (bVar24) {
        *puVar23 = uVar25 | 1L << (uVar20 & 0x3f);
      }
      UNLOCK();
    } while (!bVar24);
  }
  return;
}

