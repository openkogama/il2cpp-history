
/* Vector3 GetClosestPoint(Vector3) */

Vector3 * Assembly-CSharp.dll::ClosestPointCapsule::ClosestPointCapsule_GetClosestPoint
                    (Vector3 *__return_storage_ptr__,ClosestPointCapsule *this,Vector3 from,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).capsule;
  if (pCVar1 != (CapsuleCollider *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)pCVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar2,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffcc,pTVar3,(MethodInfo *)0x0);
        fVar5 = pVVar4->z;
        pCVar1 = (this->fields).capsule;
        if (pCVar1 != (CapsuleCollider *)0x0) {
          pVVar4 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                    CapsuleCollider_get_center((Vector3 *)&stack0xffffffcc,pCVar1,(MethodInfo *)0x0)
          ;
          uVar6 = pVVar4->y;
          fVar7 = pVVar4->z;
          pCVar1 = (this->fields).capsule;
          if (pCVar1 != (CapsuleCollider *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)pCVar1,(MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
              if (pTVar3 != (Transform *)0x0) {
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_lossyScale
                                    ((Vector3 *)&stack0xffffffcc,pTVar3,(MethodInfo *)0x0);
                fVar8 = pVVar4->x;
                fVar9 = pVVar4->y;
                auVar10._4_4_ = fVar7;
                auVar10._0_4_ = uVar6;
                auVar10._8_4_ = 0;
                pVVar4 = MathFunctions::MathFunctions_Multiply
                                    ((Vector3 *)&stack0xffffffcc,(Vector3)(auVar10 << 0x20),*pVVar4
                                     ,(MethodInfo *)0x0);
                uVar11._0_4_ = pVVar4->x;
                uVar11._4_4_ = pVVar4->y;
                fVar7 = pVVar4->z;
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  from.z = (float)TypeInfo__UnityEngine__Vector3;
                  from.y = (float)&UNK_?;
                  func_?();
                }
                a.y = fVar9;
                a.x = fVar8;
                a.z = fVar5;
                b.z = fVar7;
                b.x = (float)(int)uVar11;
                b.y = (float)(int)((ulonglong)uVar11 >> 0x20);
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                    ((Vector3 *)&stack0xffffffe4,a,b,(MethodInfo *)0x0);
                fVar5 = pVVar4->y;
                pCVar1 = (this->fields).capsule;
                if (pCVar1 != (CapsuleCollider *)0x0) {
                  fVar7 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                           CapsuleCollider_get_height(pCVar1,(MethodInfo *)0x0);
                  pCVar1 = (this->fields).capsule;
                  if (pCVar1 != (CapsuleCollider *)0x0) {
                    fVar8 = UnityEngine.PhysicsModule.dll::UnityEngine::CapsuleCollider::
                            CapsuleCollider_get_radius(pCVar1,(MethodInfo *)0x0);
                    pCVar1 = (this->fields).capsule;
                    if (pCVar1 != (CapsuleCollider *)0x0) {
                      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_gameObject((Component_1 *)pCVar1,(MethodInfo *)0x0);
                      if (pGVar2 != (GameObject *)0x0) {
                        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                        if (pTVar3 != (Transform *)0x0) {
                          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_lossyScale
                                              ((Vector3 *)&stack0xffffffc0,pTVar3,(MethodInfo *)0x0
                                              );
                          uVar12 = pVVar4->y;
                          fVar7 = (fVar7 * _UNK_? - fVar8) * (float)uVar12;
                          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                            func_?(TypeInfo__UnityEngine__Mathf);
                          }
                          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                                            (from.y,fVar5 - fVar7,fVar5 + fVar7,(MethodInfo *)0x0)
                          ;
                          pCVar1 = (this->fields).capsule;
                          if (pCVar1 != (CapsuleCollider *)0x0) {
                            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_1_get_gameObject
                                                ((Component_1 *)pCVar1,(MethodInfo *)0x0);
                            if (pGVar2 != (GameObject *)0x0) {
                              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
                              if (pTVar3 != (Transform *)0x0) {
                                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_get_position
                                                    ((Vector3 *)&stack0xffffffc0,pTVar3,
                                                     (MethodInfo *)0x0);
                                uVar13 = pVVar4->x;
                                fVar7 = pVVar4->z;
                                a_01.y = from.y;
                                a_01.x = from.x;
                                a_01.z = from.z;
                                b_00.y = fVar5;
                                b_00.x = (float)uVar13;
                                b_00.z = fVar7;
                                UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                Vector3_op_Subtraction
                                          ((Vector3 *)&stack0xffffffc0,a_01,b_00,(MethodInfo *)0x0);
                                puVar14 = (undefined8 *)
                                          func_?(&stack0xffffffc0,&stack0xffffffd8,0);
                                fVar8 = *(float *)(puVar14 + 1);
                                pCVar1 = (this->fields).capsule;
                                fVar9 = (float)*puVar14;
                                fVar15 = (float)((ulonglong)*puVar14 >> 0x20);
                                if (pCVar1 != (CapsuleCollider *)0x0) {
                                  fVar16 = UnityEngine.PhysicsModule.dll::UnityEngine::
                                          CapsuleCollider::CapsuleCollider_get_radius
                                                    (pCVar1,(MethodInfo *)0x0);
                                  a_00.y = fVar15;
                                  a_00.x = fVar9;
                                  a_00.z = fVar8;
                                  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                            Vector3_op_Multiply((Vector3 *)&stack0xffffffc0,a_00,
                                                                fVar16,(MethodInfo *)0x0);
                                  fVar15 = pVVar4->x;
                                  fVar16 = pVVar4->y;
                                  fVar8 = pVVar4->z;
                                  pCVar1 = (this->fields).capsule;
                                  if (pCVar1 != (CapsuleCollider *)0x0) {
                                    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_1_get_gameObject
                                                        ((Component_1 *)pCVar1,(MethodInfo *)0x0);
                                    if (pGVar2 != (GameObject *)0x0) {
                                      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (pGVar2,(MethodInfo *)0x0);
                                      if (pTVar3 != (Transform *)0x0) {
                                        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_get_lossyScale
                                                            ((Vector3 *)&stack0xffffffc0,pTVar3,
                                                             (MethodInfo *)0x0);
                                        d = pVVar4->y;
                                        a_02.y = fVar16;
                                        a_02.x = fVar15;
                                        a_02.z = fVar8;
                                        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3_op_Multiply((Vector3 *)&stack0xffffffc0,
                                                                      a_02,(float)d,
                                                                      (MethodInfo *)0x0);
                                        a_03.y = fVar5;
                                        a_03.x = (float)uVar13;
                                        a_03.z = fVar7;
                                        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3_op_Addition((Vector3 *)&stack0xffffffc0,
                                                                      a_03,*pVVar4,
                                                                      (MethodInfo *)0x0);
                                        fVar7 = pVVar4->y;
                                        fVar5 = pVVar4->z;
                                        __return_storage_ptr__->x = pVVar4->x;
                                        __return_storage_ptr__->y = fVar7;
                                        __return_storage_ptr__->z = fVar5;
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar17 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar17)();
  return pVVar4;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ClosestPointCapsule::ClosestPointCapsule_OnValidate
               (ClosestPointCapsule *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).capsule;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        UnityEngine__CapsuleCollider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CapsuleCollider>__
                       );
    (this->fields).capsule = (CapsuleCollider *)pMVar2;
  }
  return;
}


/* ClosestPointCapsule(CapsuleCollider) */

void Assembly-CSharp.dll::ClosestPointCapsule::ClosestPointCapsule__ctor
               (ClosestPointCapsule *this,CapsuleCollider *c,MethodInfo *method)

{
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  (this->fields).capsule = c;
  return;
}


/* Vector3 get_Position() */

Vector3 * Assembly-CSharp.dll::ClosestPointCapsule::ClosestPointCapsule_get_Position
                    (Vector3 *__return_storage_ptr__,ClosestPointCapsule *this,MethodInfo *method)

{
  this_00 = (this->fields).capsule;
  if (this_00 != (CapsuleCollider *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
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
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
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
  if ((this_00 == (CapsuleCollider *)0x0) ||
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar1 == (GameObject *)0x0)) {
    func_?();
    pcVar2 = (code *)swi(3);
    pTVar3 = (Transform *)(*pcVar2)();
    return pTVar3;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0))
  {
    uVar4 = func_?(&UNK_?,0);
    func_?(uVar4);
    pcVar2 = (code *)swi(3);
    pTVar3 = (Transform *)(*pcVar2)();
    return pTVar3;
  }
  pcRam_? = pcVar2;
  pTVar3 = (Transform *)(*pcRam_?)();
  return pTVar3;
}

