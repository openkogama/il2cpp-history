
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
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
    MathFunctions::MathFunctions_Multiply(&VStack_3,a,*pVVar2,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                (&VStack_3,pTVar1,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_3,pTVar1,(MethodInfo *)0x0);
        uVar4 = pVVar2->x;
        fVar5 = (float)uVar4 + 4.2520862e-29;
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_3,pTVar1,(MethodInfo *)0x0);
          VStack_3.z = spectator.z - pVVar2->z;
          puVar6 = &stack0xffffffc4;
          pVVar2 = &VStack_3;
          puVar7 = (undefined8 *)func_?();
          fVar8 = (float)puVar6 * (float)pVVar2;
          uVar9 = *puVar7;
          fVar10 = *(float *)(puVar7 + 1);
          __return_storage_ptr__->x = fVar5 + (float)uVar9 * fVar8;
          __return_storage_ptr__->y = (float)((ulonglong)uVar9 >> 0x20) * fVar8 + 4.252137e-29;
          __return_storage_ptr__->z = (float)this + fVar10 * fVar8;
          return __return_storage_ptr__;
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar11)();
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

