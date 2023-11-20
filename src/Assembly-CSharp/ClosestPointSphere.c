
/* Vector3 GetClosestPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::ClosestPointSphere::ClosestPointSphere_GetClosestPoint
                    (Vector3 *__return_storage_ptr__,ClosestPointSphere *this,Vector3 spectator,
                    MethodInfo *method)

{
  a = (this->fields).offset;
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                       ((Vector3 *)&stack0xffffffcc,pTVar1,(MethodInfo *)0x0);
    pVVar2 = MathFunctions::MathFunctions_Multiply
                       ((Vector3 *)&stack0xffffffcc,a,*pVVar2,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                ((Vector3 *)&stack0xffffffcc,pTVar1,(MethodInfo *)0x0);
      pCVar6 = this;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffcc,pTVar1,(MethodInfo *)0x0);
        uVar7 = pVVar2->x;
        uVar8 = pVVar2->y;
        fVar9 = pVVar2->z;
        fVar10 = (float)uVar3 + (float)uVar7;
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                    ((Vector3 *)&stack0xffffffcc,pTVar1,(MethodInfo *)0x0);
          puVar11 = (undefined8 *)func_?();
          fVar12 = (float)pCVar6 * 4.2515183e-29;
          fStack_13 = (float)*puVar11;
          fStack_14 = (float)((ulonglong)*puVar11 >> 0x20);
          _UNK_? =
               CONCAT44(fStack_14 * fVar12 + (float)uVar4 + (float)uVar8,fStack_13 * fVar12 + fVar10
                       );
          _UNK_? = *(float *)(puVar11 + 1) * fVar12 + fVar5 + fVar9;
          return (Vector3 *)&UNK_?;
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar15)();
  return pVVar2;
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

