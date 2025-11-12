
/* Void Clear() */

void Assembly-CSharp.dll::PhysicsCollisionData::PhysicsCollisionData_Clear
               (PhysicsCollisionData *this,MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields).transform = (Transform *)0x0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).transform >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).collider = (Collider *)0x0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).collider >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* Void Set(RaycastHit) */

void Assembly-CSharp.dll::PhysicsCollisionData::PhysicsCollisionData_Set
               (PhysicsCollisionData *this,RaycastHit *hit,MethodInfo *method)

{
  fVar1 = (hit->m_Point).y;
  fVar2 = (hit->m_Point).z;
  (this->fields).point.x = (hit->m_Point).x;
  (this->fields).point.y = fVar1;
  (this->fields).point.z = fVar2;
  pCVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                     (hit,(MethodInfo *)0x0);
  if (pCVar3 == (Collider *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)pCVar3,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields).transform = pTVar5;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).transform >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  (this->fields).isInsideCollider = 0;
  (this->fields).distance = hit->m_Distance;
  fVar1 = (hit->m_Normal).y;
  fVar2 = (hit->m_Normal).z;
  (this->fields).normal.x = (hit->m_Normal).x;
  (this->fields).normal.y = fVar1;
  (this->fields).normal.z = fVar2;
  pCVar3 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                     (hit,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields).collider = pCVar3;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).collider >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* Void Set(Collider, Vector3) */

void Assembly-CSharp.dll::PhysicsCollisionData::PhysicsCollisionData_Set_1
               (PhysicsCollisionData *this,Collider *collider,Vector3 *origin,MethodInfo *method)

{
  fVar1 = origin->y;
  fVar2 = origin->z;
  (this->fields).point.x = origin->x;
  (this->fields).point.y = fVar1;
  (this->fields).point.z = fVar2;
  if (collider == (Collider *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)collider,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  (this->fields).transform = pTVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).transform >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  bVar5 = cRam_? == '\0';
  (this->fields).isInsideCollider = 1;
  (this->fields).distance = 0.0;
  if (bVar5) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar5 = iRam_? != 0;
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar1 = (pVVar10->zeroVector).y;
  fVar2 = (pVVar10->zeroVector).z;
  (this->fields).normal.x = (pVVar10->zeroVector).x;
  (this->fields).normal.y = fVar1;
  (this->fields).normal.z = fVar2;
  (this->fields).collider = collider;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields).collider >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  return;
}

