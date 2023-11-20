
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
      pVVar4 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
               CapsuleCollider_get_center((Vector3 *)&stack0xffffffc0,pCVar1,(MethodInfo *)0x0);
      VStack_5.x = pVVar4->x;
      VStack_5.y = pVVar4->y;
      fVar6 = pVVar4->z;
      pCVar1 = (this->fields).capsule;
      if (((pCVar1 != (CapsuleCollider *)0x0) &&
          (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)
          ) && (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
               pTVar3 != (Transform *)0x0)) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                           ((Vector3 *)&stack0xffffffc0,pTVar3,(MethodInfo *)0x0);
        a.z = fVar6;
        a.x = VStack_5.x;
        a.y = VStack_5.y;
        MathFunctions::MathFunctions_Multiply(&VStack_5,a,*pVVar4,(MethodInfo *)0x0);
        pCVar1 = (this->fields).capsule;
        if (pCVar1 != (CapsuleCollider *)0x0) {
          VStack_5.z = (float)&UNK_?;
          UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_height
                    (pCVar1,(MethodInfo *)0x0);
          pCVar1 = (this->fields).capsule;
          if (pCVar1 != (CapsuleCollider *)0x0) {
            UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::CapsuleCollider_get_radius
                      (pCVar1,(MethodInfo *)0x0);
            this_00 = (this->fields).capsule;
            if (this_00 != (CapsuleCollider *)0x0) {
              puVar7 = &UNK_?;
              pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00,(MethodInfo *)0x0);
              if ((pGVar2 != (GameObject *)0x0) &&
                 (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                 pTVar3 != (Transform *)0x0)) {
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_lossyScale
                                   ((Vector3 *)&stack0xffffffc0,pTVar3,(MethodInfo *)0x0);
                uVar8 = pVVar4->y;
                fVar9 = ((float)this_00 * _UNK_? - (float)puVar7) * (float)uVar8;
                fVar6 = (float)pCVar1 - fVar9;
                fVar9 = (float)pCVar1 + fVar9;
                if ((fVar6 <= from.y) && (fVar6 = from.y, fVar9 < from.y)) {
                  fVar6 = fVar9;
                }
                pCVar1 = (this->fields).capsule;
                if (((pCVar1 != (CapsuleCollider *)0x0) &&
                    (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pCVar1,(MethodInfo *)0x0),
                    pGVar2 != (GameObject *)0x0)) &&
                   (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                   pTVar3 != (Transform *)0x0)) {
                  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position
                                     ((Vector3 *)&stack0xffffffb0,pTVar3,(MethodInfo *)0x0);
                  fVar9 = pVVar4->x;
                  fVar10 = pVVar4->z;
                  VStack_5.z = (float)&stack0xffffffb0 - fVar10;
                  puVar11 = (undefined8 *)func_?();
                  VStack_5._0_8_ = *puVar11;
                  VStack_5.z = *(float *)(puVar11 + 1);
                  pCVar1 = (this->fields).capsule;
                  if (pCVar1 != (CapsuleCollider *)0x0) {
                    fVar12 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                             CapsuleCollider_get_radius(pCVar1,(MethodInfo *)0x0);
                    fVar13 = VStack_5.x * fVar12;
                    fVar14 = VStack_5.y * fVar12;
                    VStack_5.z = VStack_5.z * fVar12;
                    pCVar1 = (this->fields).capsule;
                    if (((pCVar1 != (CapsuleCollider *)0x0) &&
                        (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pCVar1,(MethodInfo *)0x0),
                        pGVar2 != (GameObject *)0x0)) &&
                       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
                       pTVar3 != (Transform *)0x0)) {
                      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                               Transform_get_lossyScale
                                         ((Vector3 *)&stack0xffffffa0,pTVar3,(MethodInfo *)0x0);
                      uVar15 = pVVar4->y;
                      _UNK_? =
                           CONCAT44((float)uVar15 * fVar14 + fVar6,fVar9 + (float)uVar15 * fVar13);
                      _UNK_? = fVar10 + (float)uVar15 * VStack_5.z;
                      return (Vector3 *)&UNK_?;
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
  pcVar16 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar16)();
  return pVVar4;
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

