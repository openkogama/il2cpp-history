
/* Void AlignThisTo(Transform, Transform) */

void Assembly-CSharp.dll::PickupItem::PickupItem_AlignThisTo
               (PickupItem *this,Transform *targetHolsterTransform,Transform *offset,
               MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar1,(this->fields).originalParent,0,(MethodInfo *)0x0);
    if (offset != (Transform *)0x0) {
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                          ((Quaternion *)&stack0xffffffb0,offset,(MethodInfo *)0x0);
      fVar3 = pQVar2->y;
      fVar4 = pQVar2->z;
      fVar5 = pQVar2->w;
      if (targetHolsterTransform != (Transform *)0x0) {
        fVar6 = 0.0;
        pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                            ((Quaternion *)&stack0xffffffa0,targetHolsterTransform,(MethodInfo *)0x0
                            );
        fVar7 = pQVar2->y;
        fVar8 = pQVar2->z;
        fVar9 = pQVar2->w;
        fVar10 = (fVar3 * fVar9 + fVar7 * fVar5 + fVar4 * pQVar2->x) - fVar8 * fVar6;
        fVar11 = (fVar4 * fVar9 + fVar8 * fVar5 + fVar7 * fVar6) - fVar3 * pQVar2->x;
        fVar3 = ((fVar9 * fVar5 - fVar6 * pQVar2->x) - fVar7 * fVar3) - fVar4 * fVar8;
        fVar4 = 0.0;
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          value_00.y = fVar10;
          value_00.x = fVar4;
          value_00.z = fVar11;
          value_00.w = fVar3;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar1,value_00,(MethodInfo *)0x0);
          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffc0,targetHolsterTransform,(MethodInfo *)0x0)
          ;
          uVar13 = pVVar12->x;
          uVar14 = pVVar12->y;
          fVar3 = pVVar12->z;
          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffb0,offset,(MethodInfo *)0x0);
          uVar15 = pVVar12->x;
          uVar16 = pVVar12->y;
          fVar4 = pVVar12->z;
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (this_00 != (Transform *)0x0) {
            pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffb0,this_00,(MethodInfo *)0x0);
            uVar17 = pVVar12->x;
            uVar18 = pVVar12->y;
            if (pTVar1 != (Transform *)0x0) {
              value.y = (float)uVar18 + ((float)uVar14 - (float)uVar16);
              value.x = (float)uVar17 + ((float)uVar13 - (float)uVar15);
              value.z = pVVar12->z + (fVar3 - fVar4);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar1,value,(MethodInfo *)0x0);
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this,(MethodInfo *)0x0);
              pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                  ((Vector3 *)&stack0xffffffb0,offset,(MethodInfo *)0x0);
              if (pTVar1 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (pTVar1,*pVVar12,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* GameObject CloneCubeModelInstance(MVCubeModelInstance, Boolean) */

GameObject *
Assembly-CSharp.dll::PickupItem::PickupItem_CloneCubeModelInstance
          (MVCubeModelInstance *cmb,bool forceVisible,MethodInfo *method)

{
  _forceVisible = (uint)forceVisible;
  puStack_1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_1;
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                   );
    func_?(&
                    UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                   );
    func_?(&
                    UnityEngine__Collider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Collider>______
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((cmb != (MVCubeModelInstance *)0x0) &&
     (pGVar2 = (cmb->fields)._._.gameObject, pGVar2 != (GameObject *)0x0)) {
    name = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                     ((Object_1 *)pGVar2,(MethodInfo *)0x0);
    pGVar2 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (pGVar2,name,(MethodInfo *)0x0);
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar2,(MethodInfo *)0x0);
      pTVar4 = (cmb->fields)._._.transform;
      if (pTVar4 != (Transform *)0x0) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                           ((Vector3 *)&stack0xffffffc8,pTVar4,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar3,*pVVar5,(MethodInfo *)0x0);
          pCVar6 = (cmb->fields)._.chunkInstances;
          if (pCVar6 != (ChunkInstances *)0x0) {
            iVar7 = func_?(0,TypeInfo__System__Collections__IEnumerable,pCVar6);
            while (iVar7 != 0) {
              cVar8 = func_?(0,TypeInfo__System__Collections__IEnumerator,iVar7);
              if (cVar8 == '\0') {
                iVar7 = func_?(iVar7,TypeInfo__System__IDisposable);
                if (iVar7 != 0) {
                  func_?(0,TypeInfo__System__IDisposable,iVar7);
                }
                *unaff_FS_OFFSET = puStack_1;
                return pGVar2;
              }
              if (iVar7 == 0) break;
              piVar9 = (int *)func_?(1,TypeInfo__System__Collections__IEnumerator,iVar7);
              uVar10 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                                ,piVar9);
              if (piVar9 == (int *)0x0) break;
              if (*(Il2CppClass **)(*piVar9 + 0x20) !=
                  (
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                  ->_0).element_class) goto code_?;
              iVar11 = func_?(piVar9);
              this = *(GameObject **)(iVar11 + 8);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              this_00 = (GameObject *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)this,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                  );
              pGVar12 = this_00;
              if (forceVisible == 0) {
                if (this_00 == (GameObject *)0x0) break;
              }
              else {
                if (this_00 == (GameObject *)0x0) break;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_00,1,(MethodInfo *)0x0);
                pRVar13 = (Renderer *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_GetComponent_1
                                    (this_00,
                                     UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                    );
                if (pRVar13 == (Renderer *)0x0) break;
                UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                          (pRVar13,1,(MethodInfo *)0x0);
              }
              pRVar13 = (Renderer *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponent_1
                                  (this_00,
                                   UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                                  );
              pMVar14 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                  ((MethodInfo *)0x0);
              if ((pMVar14 == (MaterialLoader *)0x0) || (pRVar13 == (Renderer *)0x0)) break;
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                        (pRVar13,(pMVar14->fields)._CubeModelMaterial_k__BackingField,
                         (MethodInfo *)0x0);
              pIVar15 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                                  ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)this_00,
                                   UnityEngine__Collider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Collider>______
                                  );
              if (pIVar15 == (IEnumerable_1_System_Object_ *)0x0) break;
              pMVar16 = pIVar15[1].monitor;
              while( true ) {
                pMVar16 = pMVar16 + -1;
                if ((int)pMVar16 < 0) break;
                if (pIVar15[1].monitor <= pMVar16) goto code_?;
                if ((&pIVar15[2].klass)[(int)pMVar16] == (IEnumerable_1_System_Object___Class *)0x0)
                goto code_?;
                UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                          ((Collider *)(&pIVar15[2].klass)[(int)pMVar16],0,(MethodInfo *)0x0);
              }
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar12,(MethodInfo *)0x0);
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar2,(MethodInfo *)0x0);
              if (pTVar4 == (Transform *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                        (pTVar4,pTVar3,(MethodInfo *)0x0);
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar12,(MethodInfo *)0x0);
              if (this == (GameObject *)0x0) break;
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (this,(MethodInfo *)0x0);
              if (pTVar3 == (Transform *)0x0) break;
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_localPosition((Vector3 *)&puStack_17,pTVar3,(MethodInfo *)0x0);
              if (pTVar4 == (Transform *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar4,*pVVar5,(MethodInfo *)0x0);
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar12,(MethodInfo *)0x0);
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (this,(MethodInfo *)0x0);
              if (pTVar3 == (Transform *)0x0) break;
              pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localRotation
                                  ((Quaternion *)&stack0xffffffa0,pTVar3,(MethodInfo *)0x0);
              if (pTVar4 == (Transform *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        (pTVar4,*pQVar18,(MethodInfo *)0x0);
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar12,(MethodInfo *)0x0);
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (this,(MethodInfo *)0x0);
              if (pTVar3 == (Transform *)0x0) break;
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                 ((Vector3 *)&stack0xffffffb0,pTVar3,(MethodInfo *)0x0);
              if (pTVar4 == (Transform *)0x0) break;
              uVar19 = pVVar5->x;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar4,*pVVar5,(MethodInfo *)0x0);
              _forceVisible = uVar19;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  uVar10 = func_?();
code_?:
  func_?(uVar10);
  pcVar20 = (code *)swi(3);
  pGVar2 = (GameObject *)(*pcVar20)();
  return pGVar2;
}


/* Void EnterFirstPersonView(MVCameraBase) */

void Assembly-CSharp.dll::PickupItem::PickupItem_EnterFirstPersonView
               (PickupItem *this,MVCameraBase *camera,MethodInfo *method)

{
  if ((this->fields)._IsHolstered_k__BackingField != 0) {
    return;
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if ((camera != (MVCameraBase *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)camera,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar1,pTVar2,0,(MethodInfo *)0x0);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    pTVar1 = (this->fields).firstPersonTransform;
    if ((pTVar1 != (Transform *)0x0) &&
       (pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0),
       pTVar2 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar2,*pVVar3,(MethodInfo *)0x0);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      pTVar1 = (this->fields).firstPersonTransform;
      if ((pTVar1 != (Transform *)0x0) &&
         (pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                             ((Quaternion *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0),
         pTVar2 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar2,*pQVar4,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        pTVar1 = (this->fields).firstPersonTransform;
        if ((pTVar1 != (Transform *)0x0) &&
           (pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                               ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0),
           pTVar2 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar2,*pVVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Int32 GetAmmoMultiplier(Int32) */

int32_t Assembly-CSharp.dll::PickupItem::PickupItem_GetAmmoMultiplier
                  (PickupItem *this,int32_t defaultAmmo,MethodInfo *method)

{
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (this_00 = (pMVar1->fields).boostController, this_00 != (BoostController *)0x0)) {
      bVar2 = BoostController::BoostController_TryGetActiveBoost
                        (this_00,BoostType__Enum_AmmoIntMultiplier,(Boost **)&stack0xfffffff8,
                         (MethodInfo *)0x0);
      if (bVar2 != 0) {
        defaultAmmo = defaultAmmo * 2;
      }
      return defaultAmmo;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Boolean GetAndResetFiredThisFrame() */

bool Assembly-CSharp.dll::PickupItem::PickupItem_GetAndResetFiredThisFrame
               (PickupItem *this,MethodInfo *method)

{
  bVar1 = (this->fields).firedThisFrame;
  (this->fields).firedThisFrame = 0;
  return bVar1;
}


/* Void HolsterPickup(Transform) */

void Assembly-CSharp.dll::PickupItem::PickupItem_HolsterPickup
               (PickupItem *this,Transform *targetHolsterTransform,MethodInfo *method)

{
  if ((this->fields)._IsHolstered_k__BackingField == 0) {
    PickupItem_AlignThisTo
              (this,targetHolsterTransform,(this->fields).holsterTransformOffset,(MethodInfo *)0x0);
    pPVar1 = this->klass;
    (this->fields)._IsHolstered_k__BackingField = 1;
    (*(pPVar1->vtable).OnHolstered.methodPtr)(this,(pPVar1->vtable).OnHolstered.method);
  }
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* GameObject InstantiateAvatarItemType(AvatarItemType, Int32) */

GameObject *
Assembly-CSharp.dll::PickupItem::PickupItem_InstantiateAvatarItemType
          (AvatarItemType__Enum type,int32_t variantId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((int)type < 0x2e) {
    switch(type) {
    case AvatarItemType__Enum_LaserPointer:
      iVar1 = func_?(0);
      if (iVar1 != 0) {
        pGVar2 = *(GameObject **)(iVar1 + 0x1b8);
code_?:
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pGVar2 = (GameObject *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pGVar2,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
        return pGVar2;
      }
      break;
    case AvatarItemType__Enum_CenterGun:
      iVar1 = func_?(0);
      if (iVar1 != 0) {
        pGVar2 = *(GameObject **)(iVar1 + 0x1b0);
        goto code_?;
      }
      break;
    case AvatarItemType__Enum_ImpulseGun:
      iVar1 = func_?(0);
      if (iVar1 != 0) {
        pGVar2 = *(GameObject **)(iVar1 + 0x1b4);
        goto code_?;
      }
      break;
    case AvatarItemType__Enum_Health:
    case AvatarItemType__Enum_Mutant:
code_?:
      return (GameObject *)0x0;
    case AvatarItemType__Enum_Bazooka:
      iVar1 = func_?(0);
      if (iVar1 != 0) {
        pGVar2 = *(GameObject **)(iVar1 + 0x1bc);
        goto code_?;
      }
      break;
    case AvatarItemType__Enum_Hand:
      iVar1 = func_?(0);
      if (iVar1 != 0) {
        pGVar2 = *(GameObject **)(iVar1 + 0x1c0);
        goto code_?;
      }
      break;
    case AvatarItemType__Enum_RailGun:
      iVar1 = func_?(0);
      if (iVar1 != 0) {
        pGVar2 = *(GameObject **)(iVar1 + 0x1c4);
        goto code_?;
      }
      break;
    case AvatarItemType__Enum_MeleeWeapon:
      if (cRam_? == '\0') {
        func_?(&
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
        func_?(&TypeInfo__UnityEngine__Object);
        cRam_? = '\x01';
      }
      if (variantId == 1) {
        if (bRam_? == 0) {
          func_?(&TypeInfo__PrefabPool);
          bRam_? = 1;
        }
        pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar3 != (PrefabPool *)0x0) {
          pGVar2 = (pPVar3->fields).avatarItemSword;
          goto code_?;
        }
      }
      else {
        if (bRam_? == 0) {
          func_?(&TypeInfo__PrefabPool);
          bRam_? = 1;
        }
        pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar3 != (PrefabPool *)0x0) {
          pGVar2 = (pPVar3->fields).avatarItemMeleeWeapon;
          goto code_?;
        }
      }
      break;
    case AvatarItemType__Enum_Shotgun:
      iVar1 = func_?(0);
      if (iVar1 != 0) {
        pGVar2 = *(GameObject **)(iVar1 + 0x1d0);
        goto code_?;
      }
      break;
    case AvatarItemType__Enum_Flamethrower:
      iVar1 = func_?(0);
      if (iVar1 != 0) {
        pGVar2 = *(GameObject **)(iVar1 + 0x1d4);
        goto code_?;
      }
      break;
    case AvatarItemType__Enum_CubeGun:
      iVar1 = func_?(0);
      if (iVar1 != 0) {
        pGVar2 = *(GameObject **)(iVar1 + 0x1d8);
        goto code_?;
      }
      break;
    case AvatarItemType__Enum_SixShooter:
      iVar1 = func_?(0);
      if (iVar1 != 0) {
        pGVar2 = *(GameObject **)(iVar1 + 0x1dc);
        goto code_?;
      }
      break;
    case AvatarItemType__Enum_DoubleSixShooter:
      iVar1 = func_?(0);
      if (iVar1 != 0) {
        pGVar2 = *(GameObject **)(iVar1 + 0x1e0);
        goto code_?;
      }
      break;
    default:
      if (type != AvatarItemType__Enum_ThrowingStar) {
        return (GameObject *)0x0;
      }
      if (bRam_? == 0) {
        func_?(&TypeInfo__PrefabPool);
        bRam_? = 1;
      }
      pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar3 != (PrefabPool *)0x0) {
        pGVar2 = (pPVar3->fields).avatarItemThrowingStar;
        goto code_?;
      }
    }
  }
  else if (type == AvatarItemType__Enum_MultiThrowingStar) {
    if (bRam_? == 0) {
      func_?(&TypeInfo__PrefabPool);
      bRam_? = 1;
    }
    pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar3 != (PrefabPool *)0x0) {
      pGVar2 = (pPVar3->fields).avatarItemMultiThrowingStar;
      goto code_?;
    }
  }
  else {
    switch(type) {
    case AvatarItemType__Enum_Costume:
      iVar1 = func_?(0);
      if (iVar1 != 0) {
        pGVar2 = *(GameObject **)(iVar1 + 0x200);
        goto code_?;
      }
      break;
    case AvatarItemType__Enum_MouseGun:
      iVar1 = func_?(0);
      if (iVar1 != 0) {
        pGVar2 = *(GameObject **)(iVar1 + 0x1f0);
        goto code_?;
      }
      break;
    case AvatarItemType__Enum_CollectTheItemCollectable:
      iVar1 = func_?(0);
      if (iVar1 != 0) {
        pGVar2 = *(GameObject **)(iVar1 + 0x1f8);
        goto code_?;
      }
      break;
    case AvatarItemType__Enum_GrowthGun:
      iVar1 = func_?(0);
      if (iVar1 != 0) {
        pGVar2 = *(GameObject **)(iVar1 + 0x1ec);
        goto code_?;
      }
      break;
    case AvatarItemType__Enum_MousePack:
    case AvatarItemType__Enum_GrowthPack:
      goto code_?;
    case AvatarItemType__Enum_SlapGun:
      iVar1 = func_?(0);
      if (iVar1 != 0) {
        pGVar2 = *(GameObject **)(iVar1 + 500);
        goto code_?;
      }
      break;
    default:
      if (type != AvatarItemType__Enum_HealRay) {
        return (GameObject *)0x0;
      }
      iVar1 = func_?(0);
      if (iVar1 != 0) {
        pGVar2 = *(GameObject **)(iVar1 + 0x1fc);
        goto code_?;
      }
    }
  }
  bVar4 = 0;
  uVar5 = func_?();
  pbVar6 = (byte *)uVar5;
  *(undefined2 *)(pbVar6 + 0x53) = in_FPUControlWord;
  bVar7 = (byte)((ulonglong)uVar5 >> 0x28);
  bVar8 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar4);
  bVar9 = (byte)((ulonglong)uVar5 >> 0x20);
  bVar4 = bVar7 * '\x02' + bVar4;
  iVar1 = CONCAT22((short)((ulonglong)uVar5 >> 0x30),CONCAT11(bVar4,bVar9));
  if ((char)bVar4 < '\0') {
    in(CONCAT11(bVar4,bVar9));
    bVar8 = cRam_? == '\0';
code_?:
    if (bVar8) {
      func_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
code_?:
      cRam_? = '\x01';
    }
code_?:
    bVar8 = type == AvatarItemType__Enum_CenterGun;
code_?:
    bVar9 = bRam_?;
    if (bVar8) {
      if (bRam_? == 0) {
        func_?(&TypeInfo__PrefabPool);
        bRam_? = 1;
      }
      pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar3 == (PrefabPool *)0x0) goto code_?;
      pGVar2 = (pPVar3->fields).avatarItemSword;
      goto code_?;
    }
code_?:
    if (bVar9 == 0) {
      func_?(&TypeInfo__PrefabPool);
code_?:
      bRam_? = 1;
    }
  }
  else {
    bVar10 = CARRY1(*unaff_EBX,bVar9) || CARRY1(*unaff_EBX + bVar9,bVar8);
    *unaff_EBX = *unaff_EBX + bVar9 + bVar8;
    cVar11 = (char)uVar5;
    if (-1 < (char)*unaff_EBX) {
      *pbVar6 = *pbVar6 + cVar11 + bVar10;
      bVar8 = *pbVar6 == 0;
      goto code_?;
    }
    bVar12 = CARRY1(*pbVar6,bVar4) || CARRY1(*pbVar6 + bVar4,bVar10);
    *pbVar6 = *pbVar6 + bVar4 + bVar10;
    bVar8 = *pbVar6 == 0;
    if (-1 < (char)*pbVar6) goto code_?;
    pbVar13 = unaff_EBX + -0x44efac85;
    bVar7 = (byte)((uint)unaff_EBX >> 8);
    bVar8 = CARRY1(*pbVar13,bVar7) || CARRY1(*pbVar13 + bVar7,bVar12);
    *pbVar13 = *pbVar13 + bVar7 + bVar12;
    if ((POPCOUNT(*pbVar13) & 1U) != 0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pGVar2 = (GameObject *)(**(code **)(pbVar6 + 0x7c))();
      return pGVar2;
    }
    pbVar13 = (byte *)(iVar1 + 0x79);
    bVar14 = *pbVar13 + (byte)extraout_ECX;
    bVar10 = CARRY1(*pbVar13,(byte)extraout_ECX) || CARRY1(bVar14,bVar8);
    *pbVar13 = bVar14 + bVar8;
    pbVar13 = (byte *)(unaff_EDI + -0x4eefac87);
    bVar8 = CARRY1(*pbVar13,bVar9) || CARRY1(*pbVar13 + bVar9,bVar10);
    *pbVar13 = *pbVar13 + bVar9 + bVar10;
    if (-1 < (char)*pbVar13) goto code_?;
    bVar14 = (byte)((uint)extraout_ECX >> 8);
    bVar9 = bVar7 + bVar14;
    bVar10 = CARRY1(bVar7,bVar14) || CARRY1(bVar9,bVar8);
    bVar7 = (byte)unaff_EBX;
    bVar9 = bVar9 + bVar8;
    pbVar13 = (byte *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar9,bVar7));
    if (-1 < (char)bVar9) {
      pbVar13 = pbVar13 + 0x5601087d;
      *(byte **)pbVar13 = pbVar6 + *(int *)pbVar13 + 0xADDR;
      bVar8 = *(int *)pbVar13 == 0;
      goto code_?;
    }
    pbVar15 = pbVar13 + 0x910537b;
    bVar8 = CARRY1(*pbVar15,bVar9) || CARRY1(*pbVar15 + bVar9,bVar10);
    *pbVar15 = *pbVar15 + bVar9 + bVar10;
    if ((POPCOUNT(*pbVar15) & 1U) == 0) goto code_?;
    bVar14 = (byte)((ulonglong)uVar5 >> 8);
    bVar10 = CARRY1(*pbVar13,bVar14) || CARRY1(*pbVar13 + bVar14,bVar8);
    *pbVar13 = *pbVar13 + bVar14 + bVar8;
    bVar8 = *pbVar13 == 0;
    if ((POPCOUNT(*pbVar13) & 1U) == 0) goto code_?;
    bVar8 = CARRY1(bRam_?,bVar9) || CARRY1(bRam_? + bVar9,bVar10);
    bRam_? = bRam_? + bVar9 + bVar10;
    if ((POPCOUNT(bRam_?) & 1U) != 0) {
      *pbVar6 = *pbVar6 + cVar11 + bVar8;
      bVar9 = *pbVar6;
      goto code_?;
    }
    pbVar13 = (byte *)(iVar1 + 0x7a);
    bVar10 = CARRY1(*pbVar13,bVar7) || CARRY1(*pbVar13 + bVar7,bVar8);
    *pbVar13 = *pbVar13 + bVar7 + bVar8;
    bVar8 = CARRY1(bVar7,bVar9) || CARRY1(bVar7 + bVar9,bVar10);
    bVar9 = bVar7 + bVar9 + bVar10;
    if ((POPCOUNT(bVar9) & 1U) == 0) {
      pcVar16 = (code *)swi(3);
      pGVar2 = (GameObject *)(*pcVar16)();
      return pGVar2;
    }
    bVar10 = CARRY1(*pbVar6,bVar9) || CARRY1(*pbVar6 + bVar9,bVar8);
    *pbVar6 = *pbVar6 + bVar9 + bVar8;
    if ((POPCOUNT(*pbVar6) & 1U) != 0) goto code_?;
    bVar8 = CARRY1(bRam_?,bVar4) || CARRY1(bRam_? + bVar4,bVar10);
    bRam_? = bRam_? + bVar4 + bVar10;
    if ((POPCOUNT(bRam_?) & 1U) == 0) {
      *(char *)(unaff_EDI + 0x7b) = *(char *)(unaff_EDI + 0x7b) + bVar14 + bVar8;
      pcVar16 = (code *)swi(3);
      pGVar2 = (GameObject *)(*pcVar16)();
      return pGVar2;
    }
    *extraout_ECX = *extraout_ECX + cVar11 + bVar8;
  }
  pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar3 == (PrefabPool *)0x0) {
code_?:
    func_?();
    pcVar16 = (code *)swi(3);
    pGVar2 = (GameObject *)(*pcVar16)();
    return pGVar2;
  }
  pGVar2 = (pPVar3->fields).avatarItemMeleeWeapon;
code_?:
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar2 = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar2,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  return pGVar2;
}


/* GameObject InstantiateMeleeWeapon(Int32) */

GameObject *
Assembly-CSharp.dll::PickupItem::PickupItem_InstantiateMeleeWeapon
          (int32_t variantId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (variantId == 1) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar1 == (PrefabPool *)0x0) goto code_?;
    pGVar2 = (pPVar1->fields).avatarItemSword;
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar1 == (PrefabPool *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      pGVar2 = (GameObject *)(*pcVar3)();
      return pGVar2;
    }
    pGVar2 = (pPVar1->fields).avatarItemMeleeWeapon;
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar2 = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar2,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  return pGVar2;
}


/* Void LeaveFirstPersonView() */

void Assembly-CSharp.dll::PickupItem::PickupItem_LeaveFirstPersonView
               (PickupItem *this,MethodInfo *method)

{
  if ((this->fields)._IsHolstered_k__BackingField != 0) {
    return;
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar1,(this->fields).originalParent,0,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar1,(this->fields).originalPos,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar1,(this->fields).originalRot,(MethodInfo *)0x0);
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar1,(this->fields).originalScale,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnHolstered() */

void Assembly-CSharp.dll::PickupItem::PickupItem_OnHolstered(PickupItem *this,MethodInfo *method)

{
  (*(this->klass->vtable).TriggerEnd.methodPtr)(this,(this->klass->vtable).TriggerEnd.method);
  return;
}


/* Void RevertToOriginalTransform() */

void Assembly-CSharp.dll::PickupItem::PickupItem_RevertToOriginalTransform
               (PickupItem *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar1,(this->fields).originalParent,0,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar1,(this->fields).originalPos,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar1,(this->fields).originalRot,(MethodInfo *)0x0);
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar1,(this->fields).originalScale,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UnholsterPickup() */

void Assembly-CSharp.dll::PickupItem::PickupItem_UnholsterPickup
               (PickupItem *this,MethodInfo *method)

{
  if ((this->fields)._IsHolstered_k__BackingField != 0) {
    PickupItem_RevertToOriginalTransform(this,(MethodInfo *)0x0);
    pPVar1 = this->klass;
    (this->fields)._IsHolstered_k__BackingField = 0;
    (*(pPVar1->vtable).OnUnholstered.methodPtr)(this,(pPVar1->vtable).OnUnholstered.method);
  }
  return;
}


/* Void UpdateWithDirection(Vector3) */

void Assembly-CSharp.dll::PickupItem::PickupItem_UpdateWithDirection
               (PickupItem *this,Vector3 dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(&dir,(MethodInfo *)0x0);
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffffa0,pTVar1,(MethodInfo *)0x0);
    puVar3 = (undefined *)pQVar2->y;
    fVar4 = pQVar2->w;
    if (cRam_? == '\0') {
      puVar3 = &UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pVVar5 = &TypeInfo__UnityEngine__Vector3->static_fields->forwardVector;
    uVar6 = pVVar5->y;
    rotation.y = (float)puVar3;
    rotation.x = (float)uVar6;
    rotation.z = 0.0;
    rotation.w = fVar4;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffffa0,rotation,*pVVar5,(MethodInfo *)0x0);
    fVar4 = pVVar5->z;
    pTVar1 = (this->fields).center;
    if (pTVar1 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffa0,pTVar1,(MethodInfo *)0x0);
      fVar7 = pVVar5->z;
      pTVar1 = (this->fields).center;
      if (pTVar1 != (Transform *)0x0) {
        pVVar5 = (Vector3 *)&stack0xffffffa0;
        puVar3 = &UNK_?;
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (pVVar5,pTVar1,(MethodInfo *)0x0);
        VStack_9.y = pVVar8->x;
        VStack_9.z = pVVar8->y;
        fVar10 = (float)puVar3 + VStack_9.y;
        fVar11 = (float)pVVar5 + VStack_9.z;
        fVar12 = (float)pTVar1 + pVVar8->z;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        VStack_9.z = (float)&UNK_?;
        start_01.y = 0.0;
        start_01.x = _UNK_?;
        start_01.z = fVar7;
        end_01.y = fVar11;
        end_01.x = fVar10;
        end_01.z = fVar12;
        color_01.g = (float)_UNK_?;
        color_01.r = _UNK_?;
        color_01.b = (float)_UNK_?;
        color_01.a = _UNK_?;
        fVar7 = _UNK_?;
        uVar13 = _UNK_?;
        uVar14 = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_1
                  (start_01,end_01,color_01,(MethodInfo *)0x0);
        pTVar1 = (this->fields).center;
        if (pTVar1 != (Transform *)0x0) {
          dir.z = 0.0;
          dir.x = (float)&stack0xffffffa0;
          dir.y = (float)pTVar1;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)dir.x,pTVar1,(MethodInfo *)0x0);
          uVar15 = pVVar5->x;
          uVar16 = pVVar5->y;
          fVar10 = pVVar5->z;
          pTVar1 = (this->fields).center;
          if (pTVar1 != (Transform *)0x0) {
            dir.z = (float)&UNK_?;
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_9,pTVar1,(MethodInfo *)0x0);
            uVar17 = pVVar5->x;
            uVar18 = pVVar5->y;
            fVar19 = dir.x + (float)uVar17;
            fVar20 = dir.y + (float)uVar18;
            start.y = (float)uVar16;
            start.x = (float)uVar15;
            start.z = fVar10;
            end.y = fVar20;
            end.x = fVar19;
            end.z = dir.z + pVVar5->z;
            color.g = (float)_UNK_?;
            color.r = (float)_UNK_?;
            color.b = (float)_UNK_?;
            color.a = _UNK_?;
            dir.x = fVar10;
            dir.y = fVar19;
            dir.z = fVar20;
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_1
                      (start,end,color,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar22 = (pVVar21->upVector).x;
            uVar23 = (pVVar21->upVector).y;
            fVar10 = (pVVar21->upVector).z;
            fVar20 = fVar12 * (float)uVar22 - fVar11 * (float)uVar23;
            fVar12 = fVar7 * (float)uVar23 - fVar12 * fVar10;
            fVar7 = fVar11 * fVar10 - fVar7 * (float)uVar22;
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                      ((Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
            pTVar1 = (this->fields).center;
            if (pTVar1 != (Transform *)0x0) {
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffa0,pTVar1,(MethodInfo *)0x0);
              uVar24 = pVVar5->x;
              uVar25 = pVVar5->y;
              fVar10 = pVVar5->z;
              pTVar1 = (this->fields).center;
              if (pTVar1 != (Transform *)0x0) {
                VStack_9.x = fVar12;
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    (&VStack_9,pTVar1,(MethodInfo *)0x0);
                uVar26 = pVVar5->x;
                uVar27 = pVVar5->y;
                VStack_9.y = 0.0;
                VStack_9.z = 0.0;
                start_00.y = (float)uVar25;
                start_00.x = (float)uVar24;
                start_00.z = fVar10;
                end_00.y = fVar7 + (float)uVar27;
                end_00.x = VStack_9.x + (float)uVar26;
                end_00.z = fVar20 + pVVar5->z;
                color_00.g = (float)_UNK_?;
                color_00.r = (float)_UNK_?;
                color_00.b = (float)_UNK_?;
                color_00.a = _UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_1
                          (start_00,end_00,color_00,(MethodInfo *)0x0);
                v2.y = (float)uVar14;
                v2.x = (float)uVar13;
                normal.y = (float)((uint)fVar7 ^
                                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                  );
                normal.x = (float)((uint)VStack_9.x ^
                                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                  );
                v1.y = dir.y;
                v1.x = dir.x;
                v1.z = dir.z;
                v2.z = fVar4;
                normal.z = (float)((uint)fVar20 ^
                                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                  );
                fVar4 = MathFunctions::MathFunctions_SignedAngle_1(v1,v2,normal,(MethodInfo *)0x0);
                euler.y = 0.0;
                euler.z = 0.0;
                euler.x = fVar4 * _UNK_? * _UNK_?;
                pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffffa0,euler,(MethodInfo *)0x0);
                pTVar1 = (this->fields).center;
                if (pTVar1 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                            (pTVar1,*pQVar2,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* PickupItem() */

void Assembly-CSharp.dll::PickupItem::PickupItem__ctor(PickupItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__MeshRenderer);
    cRam_? = '\x01';
  }
  pMVar1 = (MeshRenderer__Array *)func_?(TypeInfo__UnityEngine__MeshRenderer,0);
  (this->fields).meshRenderers = pMVar1;
  func_?(&(this->fields).meshRenderers,pMVar1);
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
            ((Transform *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_CanHolster() */

bool Assembly-CSharp.dll::PickupItem::PickupItem_get_CanHolster(PickupItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  return TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson == 0;
}


/* Color get_CrossHairColor() */

Color * Assembly-CSharp.dll::PickupItem::PickupItem_get_CrossHairColor
                  (Color *__return_storage_ptr__,PickupItem *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  __return_storage_ptr__->r = _UNK_?;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar2;
  __return_storage_ptr__->a = fVar1;
  return __return_storage_ptr__;
}


/* Boolean get_FirstPersonCapable() */

bool Assembly-CSharp.dll::PickupItem::PickupItem_get_FirstPersonCapable
               (PickupItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).firstPersonTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean get_HasUnlimitedAmmo() */

bool Assembly-CSharp.dll::PickupItem::PickupItem_get_HasUnlimitedAmmo
               (PickupItem *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).owner;
  if (pMVar2 != (MVPickupOwner *)0x0) {
    return (pMVar2->fields).hasUnlimitedAmmoSetting;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItem::PickupItem_get_IsAmmoDepleted
               (PickupItem *this,MethodInfo *method)

{
  iVar1 = (*(this->klass->vtable).get_Quantity.methodPtr)
                    (this,(this->klass->vtable).get_Quantity.method);
  if (0 < iVar1) {
    return 0;
  }
  cVar2 = (*(this->klass->vtable).get_HasUnlimitedAmmo.methodPtr)
                    (this,(this->klass->vtable).get_HasUnlimitedAmmo.method);
  return cVar2 == '\0';
}


/* Boolean get_IsAmmoEmpty() */

bool Assembly-CSharp.dll::PickupItem::PickupItem_get_IsAmmoEmpty
               (PickupItem *this,MethodInfo *method)

{
  bVar1 = (*(this->klass->vtable).get_IsAmmoDepleted.methodPtr)
                    (this,(this->klass->vtable).get_IsAmmoDepleted.method);
  return bVar1;
}


/* Boolean get_IsInFirstPersonMode() */

bool Assembly-CSharp.dll::PickupItem::PickupItem_get_IsInFirstPersonMode
               (PickupItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).firstPersonTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  return (this->fields)._IsHolstered_k__BackingField == 0;
}


/* Vector3 get_Origin() */

Vector3 * Assembly-CSharp.dll::PickupItem::PickupItem_get_Origin
                    (Vector3 *__return_storage_ptr__,PickupItem *this,MethodInfo *method)

{
  this_00 = (this->fields).center;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}

