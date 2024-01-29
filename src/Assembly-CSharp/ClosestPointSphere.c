
/* Vector3 GetClosestPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::ClosestPointSphere::ClosestPointSphere_GetClosestPoint
                    (Vector3 *__return_storage_ptr__,ClosestPointSphere *this,Vector3 spectator,
                    MethodInfo *method)

{
  uVar1._0_4_ = (this->fields).offset.x;
  uVar1._4_4_ = (this->fields).offset.y;
  fVar2 = (this->fields).offset.z;
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar3 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                        ((Vector3 *)&stack0xffffffa8,pTVar3,(MethodInfo *)0x0);
    uVar5 = pVVar4->x;
    uVar6 = pVVar4->y;
    fVar7 = pVVar4->z;
    fVar8 = (this->fields).radius;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                          ((Vector3 *)&stack0xffffffa8,pTVar3,(MethodInfo *)0x0);
      fVar9 = pVVar4->x;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffa8,pTVar3,(MethodInfo *)0x0);
        uVar10 = pVVar4->x;
        uVar11 = pVVar4->y;
        fVar12 = pVVar4->z;
        fVar13 = (float)uVar10 + (float)uVar5 * (float)uVar1;
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                    ((Vector3 *)&stack0xffffffa8,pTVar3,(MethodInfo *)0x0);
          puVar14 = (undefined8 *)func_?();
          fVar9 = fVar9 * fVar8;
          uVar15 = *puVar14;
          fVar8 = *(float *)(puVar14 + 1);
          __return_storage_ptr__->x = fVar13 + (float)uVar15 * fVar9;
          __return_storage_ptr__->y =
               (float)uVar11 + (float)uVar6 * (float)((ulonglong)uVar1 >> 0x20) +
               (float)((ulonglong)uVar15 >> 0x20) * fVar9;
          __return_storage_ptr__->z = fVar12 + fVar7 * fVar2 + fVar8 * fVar9;
          return __return_storage_ptr__;
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar16)();
  return pVVar4;
}


/* Void OnDrawGizmos() */

void Assembly-CSharp.dll::ClosestPointSphere::ClosestPointSphere_OnDrawGizmos
               (ClosestPointSphere *this,MethodInfo *method)

{
  value.g = (float)_UNK_?;
  value.r = (float)_UNK_?;
  value.b = (float)_UNK_?;
  value.a = _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::Gizmos::Gizmos_set_color(value,(MethodInfo *)0x0);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    uVar4 = (this->fields).offset.x;
    uVar5 = (this->fields).offset.y;
    center.y = (float)uVar5 + (float)uVar3;
    center.x = (float)uVar4 + (float)uVar2;
    center.z = (this->fields).offset.z + pVVar1->z;
    UnityEngine.CoreModule.dll::UnityEngine::Gizmos::Gizmos_DrawWireSphere
              (center,(this->fields).radius,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

