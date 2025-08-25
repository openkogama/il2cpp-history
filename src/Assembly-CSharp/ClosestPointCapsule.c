
/* Vector3 GetClosestPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::ClosestPointCapsule::ClosestPointCapsule_GetClosestPoint
                    (Vector3 *__return_storage_ptr__,ClosestPointCapsule *this,Vector3 from,
                    MethodInfo *method)

{
  pCVar1 = (this->fields).capsule;
  if (((pCVar1 != (CapsuleCollider *)0x0) &&
      (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pCVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) &&
     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xffffffc0,pTVar3,(MethodInfo *)0x0);
    pCVar1 = (this->fields).capsule;
    if (pCVar1 != (CapsuleCollider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_center
                ((Vector3 *)&stack0xffffffc0,pCVar1,(MethodInfo *)0x0);
      pCVar1 = (this->fields).capsule;
      if (((pCVar1 != (CapsuleCollider *)0x0) &&
          (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0))
         && (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                  ((Vector3 *)&stack0xffffffa0,pTVar3,(MethodInfo *)0x0);
        pCVar1 = (this->fields).capsule;
        if (pCVar1 != (CapsuleCollider *)0x0) {
          UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_height
                    (pCVar1,(MethodInfo *)0x0);
          pCVar1 = (this->fields).capsule;
          if (pCVar1 != (CapsuleCollider *)0x0) {
            UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_radius
                      (pCVar1,(MethodInfo *)0x0);
            pCVar1 = (this->fields).capsule;
            if (((pCVar1 != (CapsuleCollider *)0x0) &&
                (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pCVar1,(MethodInfo *)0x0),
                pGVar2 != (GameObject *)0x0)) &&
               (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
               pTVar3 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                        ((Vector3 *)&stack0xffffffa0,pTVar3,(MethodInfo *)0x0);
              pCVar1 = (this->fields).capsule;
              if ((pCVar1 != (CapsuleCollider *)0x0) &&
                 (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pCVar1,(MethodInfo *)0x0),
                 pGVar2 != (GameObject *)0x0)) {
                puVar4 = &UNK_?;
                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                if (pTVar3 != (Transform *)0x0) {
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position
                                     ((Vector3 *)&stack0xffffffa0,pTVar3,(MethodInfo *)0x0);
                  fVar6 = pVVar5->x;
                  fVar7 = pVVar5->z;
                  __return_storage_ptr__ = (Vector3 *)(from.z - fVar7);
                  fVar8 = from.y - (float)puVar4;
                  value.x = from.x - fVar6;
                  value = (Vector3)CONCAT84(uVar9,value.x);
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                                     ((Vector3 *)&stack0xffffffa0,value,(MethodInfo *)0x0);
                  uVar10._0_4_ = pVVar5->x;
                  uVar10._4_4_ = pVVar5->y;
                  fVar11 = pVVar5->z;
                  pCVar1 = (this->fields).capsule;
                  if (pCVar1 != (CapsuleCollider *)0x0) {
                    fVar12 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                             CapsuleCollider_get_radius(pCVar1,(MethodInfo *)0x0);
                    fVar13 = (float)((ulonglong)uVar10 >> 0x20) * fVar12;
                    fVar11 = fVar11 * fVar12;
                    pCVar1 = (this->fields).capsule;
                    if (((pCVar1 != (CapsuleCollider *)0x0) &&
                        (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pCVar1,(MethodInfo *)0x0),
                        pGVar2 != (GameObject *)0x0)) &&
                       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                       pTVar3 != (Transform *)0x0)) {
                      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                               Transform_get_lossyScale
                                         ((Vector3 *)&stack0xffffffa0,pTVar3,(MethodInfo *)0x0);
                      uVar14 = pVVar5->y;
                      __return_storage_ptr__->x = fVar6 + (float)uVar14 * (float)uVar10 * fVar12;
                      __return_storage_ptr__->y = (float)puVar4 + (float)uVar14 * fVar13;
                      __return_storage_ptr__->z = fVar7 + (float)uVar14 * fVar11;
                      return __return_storage_ptr__;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar15)();
  return pVVar5;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ClosestPointCapsule::ClosestPointCapsule_OnValidate
               (ClosestPointCapsule *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__CapsuleCollider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CapsuleCollider>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).capsule;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pCVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pCVar1 = (CapsuleCollider *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__CapsuleCollider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CapsuleCollider>__
                       );
    (this->fields).capsule = pCVar1;
    func_?(&(this->fields).capsule,pCVar1);
  }
  return;
}


/* ClosestPointCapsule(CapsuleCollider) */

void Assembly-CSharp.dll::ClosestPointCapsule::ClosestPointCapsule__ctor
               (ClosestPointCapsule *this,CapsuleCollider *c,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  (this->fields).capsule = c;
  func_?(&(this->fields).capsule,c);
  return;
}


/* Vector3 get_Position() */

Vector3 * Assembly-CSharp.dll::ClosestPointCapsule::ClosestPointCapsule_get_Position
                    (Vector3 *__return_storage_ptr__,ClosestPointCapsule *this,MethodInfo *method)

{
  this_00 = (this->fields).capsule;
  if (this_00 != (CapsuleCollider *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_01,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0);
        fVar2 = pVVar1->y;
        fVar3 = pVVar1->z;
        __return_storage_ptr__->x = pVVar1->x;
        __return_storage_ptr__->y = fVar2;
        __return_storage_ptr__->z = fVar3;
        return __return_storage_ptr__;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar4)();
  return pVVar1;
}


/* Vector3 get_Scale() */

Vector3 * Assembly-CSharp.dll::ClosestPointCapsule::ClosestPointCapsule_get_Scale
                    (Vector3 *__return_storage_ptr__,ClosestPointCapsule *this,MethodInfo *method)

{
  this_00 = (this->fields).capsule;
  if (this_00 != (CapsuleCollider *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_01,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                           ((Vector3 *)&stack0xfffffff0,this_02,(MethodInfo *)0x0);
        fVar2 = pVVar1->y;
        fVar3 = pVVar1->z;
        __return_storage_ptr__->x = pVVar1->x;
        __return_storage_ptr__->y = fVar2;
        __return_storage_ptr__->z = fVar3;
        return __return_storage_ptr__;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar4)();
  return pVVar1;
}


/* Transform get_Transform() */

Transform *
Assembly-CSharp.dll::ClosestPointCapsule::ClosestPointCapsule_get_Transform
          (ClosestPointCapsule *this,MethodInfo *method)

{
  this_00 = (this->fields).capsule;
  if (this_00 != (CapsuleCollider *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      pTVar2 = (Transform *)(*pcRam_?)();
      return pTVar2;
    }
  }
  uVar3 = func_?(&stack0xfffffff8);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pTVar2 = (Transform *)(*pcVar4)();
  return pTVar2;
}

