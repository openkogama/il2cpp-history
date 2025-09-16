
/* Vector3 GetClosestPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::ClosestPointSphere::ClosestPointSphere_GetClosestPoint
                    (Vector3 *__return_storage_ptr__,ClosestPointSphere *this,Vector3 spectator,
                    MethodInfo *method)

{
  fVar1 = (this->fields).offset.z;
  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar2 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                        ((Vector3 *)&stack0xffffffc8,pTVar2,(MethodInfo *)0x0);
    fVar4 = pVVar3->z;
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                ((Vector3 *)&stack0xffffffc8,pTVar2,(MethodInfo *)0x0);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffc8,pTVar2,(MethodInfo *)0x0);
        fVar5 = pVVar3->z;
        fVar6 = 0.0;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffc8,pTVar2,(MethodInfo *)0x0);
          uVar7 = pVVar3->x;
          uVar8 = pVVar3->y;
          pVVar9 = (Vector3 *)(spectator.x - (float)uVar7);
          value.y = spectator.y - (float)uVar8;
          value.x = (float)pVVar9;
          value.z = spectator.z - pVVar3->z;
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                              ((Vector3 *)&stack0xffffffc8,value,(MethodInfo *)0x0);
          uVar10 = pVVar3->x;
          uVar11 = pVVar3->y;
          fVar6 = fVar6 * (float)this;
          fVar12 = pVVar3->z;
          pVVar9->x = (float)uVar10 * fVar6 + (spectator.y - (float)uVar8);
          pVVar9->y = (float)uVar11 * fVar6 + 3.2603493e-29;
          pVVar9->z = fVar12 * fVar6 + fVar5 + fVar4 * fVar1;
          return pVVar9;
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar13)();
  return pVVar3;
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
    center.x = (float)uVar2 + (float)uVar4;
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

