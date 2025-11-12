
/* MeshRayHit(Ray, Int32, Single, Vector3) */

void Assembly-CSharp.dll::RTG::MeshRayHit::MeshRayHit__ctor
               (MeshRayHit *this,Ray *ray,int32_t hitTriangleIndex,float hitEnter,Vector3 *hitNormal
               ,MethodInfo *method)

{
  uVar1 = (ray->m_Direction).x;
  uVar2 = (ray->m_Direction).y;
  (this->fields)._hitTriangleIndex = hitTriangleIndex;
  uVar3 = (ray->m_Origin).x;
  uVar4 = (ray->m_Origin).y;
  fVar5 = (ray->m_Direction).z;
  fVar6 = (ray->m_Origin).z;
  (this->fields)._hitPoint.x = (float)uVar1 * hitEnter + (float)uVar3;
  (this->fields)._hitPoint.y = (float)uVar2 * hitEnter + (float)uVar4;
  (this->fields)._hitPoint.z = fVar5 * hitEnter + fVar6;
  uStack_7._0_4_ = hitNormal->x;
  uStack_7._4_4_ = hitNormal->y;
  fStack_8 = hitNormal->z;
  (this->fields)._hitEnter = hitEnter;
  fVar5 = (float)FUN_?(&uStack_7);
  if (fVar5 <= _UNK_?) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar6 = (pVVar9->zeroVector).y;
    fVar5 = (pVVar9->zeroVector).z;
    (this->fields)._hitNormal.x = (pVVar9->zeroVector).x;
    (this->fields)._hitNormal.y = fVar6;
    (this->fields)._hitNormal.z = fVar5;
    return;
  }
  uVar10 = hitNormal->x;
  fVar6 = hitNormal->y;
  fVar11 = hitNormal->z;
  (this->fields)._hitNormal.x = (float)uVar10 / fVar5;
  (this->fields)._hitNormal.y = fVar6 / fVar5;
  (this->fields)._hitNormal.z = fVar11 / fVar5;
  return;
}

