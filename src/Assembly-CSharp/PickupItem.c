
/* GameObject CloneCubeModelInstance(MVCubeModelInstance, Boolean) */

GameObject *
Assembly-CSharp.dll::PickupItem::PickupItem_CloneCubeModelInstance
          (MVCubeModelInstance *cmb,bool forceVisible,MethodInfo *method)

{
  pTVar1 = (Transform *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
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
    pGVar3 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
    pGVar2 = pGVar3;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (pGVar3,name,(MethodInfo *)0x0);
    if (pGVar3 != (GameObject *)0x0) {
      this = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar3,(MethodInfo *)0x0);
      pTVar4 = (cmb->fields)._._.transform;
      if (pTVar4 != (Transform *)0x0) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                           ((Vector3 *)&stack0xffffffc8,pTVar4,(MethodInfo *)0x0);
        if (this != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (this,*pVVar5,(MethodInfo *)0x0);
          pCVar6 = (cmb->fields)._.chunkInstances;
          if (pCVar6 != (ChunkInstances *)0x0) {
            puVar7 = (undefined *)
                     func_?(0,TypeInfo__System__Collections__IEnumerable,pCVar6);
            while (puVar7 != (undefined *)0x0) {
              cVar8 = func_?(0,TypeInfo__System__Collections__IEnumerator,puVar7);
              if (cVar8 == '\0') {
                iVar9 = func_?(puVar7,TypeInfo__System__IDisposable);
                if (iVar9 != 0) {
                  func_?(0,TypeInfo__System__IDisposable,iVar9);
                }
                *unaff_FS_OFFSET = pTVar1;
                return pGVar2;
              }
              if (puVar7 == (undefined *)0x0) break;
              piVar10 = (int *)func_?(1,TypeInfo__System__Collections__IEnumerator,puVar7);
              uVar11 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                                ,piVar10);
              if (piVar10 == (int *)0x0) break;
              if (*(Il2CppClass **)(*piVar10 + 0x20) !=
                  (
                  TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                  ->_0).element_class) goto code_?;
              iVar9 = func_?(piVar10);
              pGVar3 = *(GameObject **)(iVar9 + 0x18);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              this_00 = (GameObject *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)pGVar3,
                                   UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                  );
              if (forceVisible == 0) {
                if (this_00 == (GameObject *)0x0) break;
              }
              else {
                if (this_00 == (GameObject *)0x0) break;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_00,1,(MethodInfo *)0x0);
                pRVar12 = (Renderer *)
                         UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_GetComponent_1
                                   (this_00,
                                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshRenderer>__
                                   );
                if (pRVar12 == (Renderer *)0x0) break;
                UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                          (pRVar12,1,(MethodInfo *)0x0);
              }
              pRVar12 = (Renderer *)
                       UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponent_1
                                 (this_00,
                                  UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                                 );
              pMVar13 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                  ((MethodInfo *)0x0);
              if ((pMVar13 == (MaterialLoader *)0x0) || (pRVar12 == (Renderer *)0x0)) break;
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                        (pRVar12,(pMVar13->fields)._CubeModelMaterial_k__BackingField,
                         (MethodInfo *)0x0);
              pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponentsInChildren
                                  (this_00,
                                   UnityEngine__Collider__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Collider>______
                                  );
              if (pOVar14 == (Object__Array *)0x0) break;
              iVar15 = pOVar14->max_length;
              while( true ) {
                uVar16 = iVar15 - 1;
                if ((int)uVar16 < 0) break;
                if (pOVar14->max_length <= uVar16) goto code_?;
                if ((Collider *)pOVar14->vector[iVar15 - 1] == (Collider *)0x0)
                goto code_?;
                UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                          ((Collider *)pOVar14->vector[iVar15 - 1],0,(MethodInfo *)0x0);
                iVar15 = uVar16;
              }
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(this_00,(MethodInfo *)0x0);
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar2,(MethodInfo *)0x0);
              if (pTVar1 == (Transform *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                        (pTVar1,pTVar4,(MethodInfo *)0x0);
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(this_00,(MethodInfo *)0x0);
              if (pGVar3 == (GameObject *)0x0) break;
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
              if (pTVar4 == (Transform *)0x0) break;
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_localPosition
                                 ((Vector3 *)&stack0xffffffbc,pTVar4,(MethodInfo *)0x0);
              if (pTVar1 == (Transform *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar1,*pVVar5,(MethodInfo *)0x0);
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(this_00,(MethodInfo *)0x0);
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
              if (pTVar4 == (Transform *)0x0) break;
              pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localRotation
                                  ((Quaternion *)&stack0xffffffa0,pTVar4,(MethodInfo *)0x0);
              if (pTVar1 == (Transform *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        (pTVar1,*pQVar17,(MethodInfo *)0x0);
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(this_00,(MethodInfo *)0x0);
              pGVar2 = (GameObject *)&UNK_?;
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar3,(MethodInfo *)0x0);
              if (pTVar4 == (Transform *)0x0) break;
              puVar7 = &UNK_?;
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                 ((Vector3 *)&stack0xffffffb0,pTVar4,(MethodInfo *)0x0);
              if (pTVar1 == (Transform *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar1,*pVVar5,(MethodInfo *)0x0);
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  uVar11 = func_?();
code_?:
  func_?(uVar11);
  pcVar18 = (code *)swi(3);
  pGVar2 = (GameObject *)(*pcVar18)();
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


/* Void EquipToHand(Transform) */

void Assembly-CSharp.dll::PickupItem::PickupItem_EquipToHand
               (PickupItem *this,Transform *hand,MethodInfo *method)

{
  if ((this->fields)._IsHolstered_k__BackingField != 0) {
    return;
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar1,hand,0,(MethodInfo *)0x0);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    pTVar1 = (this->fields).handTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar2,*pVVar3,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        pTVar1 = (this->fields).handTransform;
        if ((pTVar1 != (Transform *)0x0) &&
           (pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                               ((Quaternion *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0),
           pTVar2 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar2,*pQVar4,(MethodInfo *)0x0);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          pTVar1 = (this->fields).handTransform;
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
      iVar3 = defaultAmmo * 2;
      if (bVar2 == 0) {
        iVar3 = defaultAmmo;
      }
      return iVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
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
  if ((this->fields)._IsHolstered_k__BackingField != 0) {
    return;
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar1,targetHolsterTransform,0,(MethodInfo *)0x0);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    pTVar1 = (this->fields).holsterTransformOffset;
    if (pTVar1 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar2,*pVVar3,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        pTVar1 = (this->fields).holsterTransformOffset;
        if ((pTVar1 != (Transform *)0x0) &&
           (pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                               ((Quaternion *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0),
           pTVar2 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar2,*pQVar4,(MethodInfo *)0x0);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          pTVar1 = (this->fields).holsterTransformOffset;
          if ((pTVar1 != (Transform *)0x0) &&
             (pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                 ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0),
             pTVar2 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar2,*pVVar3,(MethodInfo *)0x0);
            pPVar5 = this->klass;
            (this->fields)._IsHolstered_k__BackingField = 1;
            (*(code *)(pPVar5->vtable).OnHolstered.method)();
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
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


/* GameObject InstantiatePickupItem(AvatarItemType, Int32) */

GameObject *
Assembly-CSharp.dll::PickupItem::PickupItem_InstantiatePickupItem
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
      if (iVar1 == 0) {
code_?:
        uVar2 = func_?();
        piVar3 = (int *)((ulonglong)uVar2 >> 0x20);
        piVar4 = (int *)uVar2;
        *piVar3 = *piVar3 - (int)piVar4;
        puVar5 = (ushort *)(*piVar4 * 0xADDR);
        sVar6 = ((ushort)uVar2 & 3) - (*puVar5 & 3);
        *puVar5 = *puVar5 + (ushort)(0 < sVar6) * sVar6;
        bVar7 = (byte)uVar2;
        cRam_? = cRam_? - bVar7;
        out(2,piVar4);
        cRam_? = cRam_? - (bVar7 + (9 < (bVar7 & 0xf) | in_AF) * -6 & 0xf);
        bVar7 = (byte)unaff_EBX;
        *unaff_EDI = bVar7;
        uVar8 = (undefined3)((uint)unaff_EBX >> 8);
        bRam_? = bVar7 + 0x69;
        pcVar9 = (char *)(CONCAT31(uVar8,bRam_?) + 4);
        cVar10 = (char)((uint)extraout_ECX >> 8);
        *pcVar9 = *pcVar9 + cVar10 + (0x96 < bVar7);
        pcVar9 = (char *)CONCAT31(uVar8,bVar7 - 0x2e);
        *pcVar9 = *pcVar9 + cVar10 + (0x96 < bRam_?);
        pcVar11 = pcVar9 + 0x4d41069;
        pcVar9[0x79d46ce1] = pcVar9[0x79d46ce1] | (byte)pcVar11;
        *pcVar11 = *pcVar11 + (byte)pcVar11;
        *(char *)(extraout_ECX + -0x16a2f7bb) =
             *(char *)(extraout_ECX + -0x16a2f7bb) + (char)extraout_ECX;
        pGVar12 = (GameObject *)*(undefined6 *)pcVar11;
        *(char *)&pGVar12->klass = *(char *)&pGVar12->klass + (char)*(undefined6 *)pcVar11;
        return pGVar12;
      }
      pGVar12 = *(GameObject **)(iVar1 + 0x1c8);
      break;
    case AvatarItemType__Enum_CenterGun:
      iVar1 = func_?(0);
      if (iVar1 == 0) goto code_?;
      pGVar12 = *(GameObject **)(iVar1 + 0x1c0);
      break;
    case AvatarItemType__Enum_ImpulseGun:
      iVar1 = func_?(0);
      if (iVar1 == 0) goto code_?;
      pGVar12 = *(GameObject **)(iVar1 + 0x1c4);
      break;
    case AvatarItemType__Enum_Health:
    case AvatarItemType__Enum_Mutant:
    case AvatarItemType__Enum_NinjaRun:
code_?:
      return (GameObject *)0x0;
    case AvatarItemType__Enum_Bazooka:
      iVar1 = func_?(0);
      if (iVar1 == 0) goto code_?;
      pGVar12 = *(GameObject **)(iVar1 + 0x1cc);
      break;
    case AvatarItemType__Enum_Hand:
      iVar1 = func_?(0);
      if (iVar1 == 0) goto code_?;
      pGVar12 = *(GameObject **)(iVar1 + 0x1d0);
      break;
    case AvatarItemType__Enum_RailGun:
      iVar1 = func_?(0);
      if (iVar1 == 0) goto code_?;
      pGVar12 = *(GameObject **)(iVar1 + 0x1d4);
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
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar13 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar13 == (PrefabPool *)0x0) goto code_?;
        pGVar12 = (pPVar13->fields).avatarItemSword;
      }
      else {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar13 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar13 == (PrefabPool *)0x0) goto code_?;
        pGVar12 = (pPVar13->fields).avatarItemMeleeWeapon;
      }
      break;
    case AvatarItemType__Enum_Shotgun:
      iVar1 = func_?(0);
      if (iVar1 == 0) goto code_?;
      pGVar12 = *(GameObject **)(iVar1 + 0x1e0);
      break;
    case AvatarItemType__Enum_Flamethrower:
      iVar1 = func_?(0);
      if (iVar1 == 0) goto code_?;
      pGVar12 = *(GameObject **)(iVar1 + 0x1e4);
      break;
    case AvatarItemType__Enum_CubeGun:
      iVar1 = func_?(0);
      if (iVar1 == 0) goto code_?;
      pGVar12 = *(GameObject **)(iVar1 + 0x1e8);
      break;
    case AvatarItemType__Enum_SixShooter:
      iVar1 = func_?(0);
      if (iVar1 == 0) goto code_?;
      pGVar12 = *(GameObject **)(iVar1 + 0x1ec);
      break;
    case AvatarItemType__Enum_DoubleSixShooter:
      iVar1 = func_?(0);
      if (iVar1 == 0) goto code_?;
      pGVar12 = *(GameObject **)(iVar1 + 0x1f0);
      break;
    case AvatarItemType__Enum_CustomGun:
      iVar1 = func_?(0);
      if (iVar1 == 0) goto code_?;
      pGVar12 = *(GameObject **)(iVar1 + 0x214);
      break;
    default:
      if (type != AvatarItemType__Enum_ThrowingStar) {
        return (GameObject *)0x0;
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PrefabPool);
        cRam_? = '\x01';
      }
      pPVar13 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar13 == (PrefabPool *)0x0) goto code_?;
      pGVar12 = (pPVar13->fields).avatarItemThrowingStar;
    }
  }
  else if (type == AvatarItemType__Enum_MultiThrowingStar) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar13 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar13 == (PrefabPool *)0x0) goto code_?;
    pGVar12 = (pPVar13->fields).avatarItemMultiThrowingStar;
  }
  else {
    switch(type) {
    case AvatarItemType__Enum_Costume:
      iVar1 = func_?(0);
      if (iVar1 == 0) goto code_?;
      pGVar12 = *(GameObject **)(iVar1 + 0x210);
      break;
    case AvatarItemType__Enum_MouseGun:
      iVar1 = func_?(0);
      if (iVar1 == 0) goto code_?;
      pGVar12 = *(GameObject **)(iVar1 + 0x200);
      break;
    case AvatarItemType__Enum_CollectTheItemCollectable:
      iVar1 = func_?(0);
      if (iVar1 == 0) goto code_?;
      pGVar12 = *(GameObject **)(iVar1 + 0x208);
      break;
    case AvatarItemType__Enum_GrowthGun:
      iVar1 = func_?(0);
      if (iVar1 == 0) goto code_?;
      pGVar12 = *(GameObject **)(iVar1 + 0x1fc);
      break;
    case AvatarItemType__Enum_MousePack:
    case AvatarItemType__Enum_GrowthPack:
      goto code_?;
    case AvatarItemType__Enum_SlapGun:
      iVar1 = func_?(0);
      if (iVar1 == 0) goto code_?;
      pGVar12 = *(GameObject **)(iVar1 + 0x204);
      break;
    default:
      if (type != AvatarItemType__Enum_HealRay) {
        return (GameObject *)0x0;
      }
      iVar1 = func_?(0);
      if (iVar1 == 0) goto code_?;
      pGVar12 = *(GameObject **)(iVar1 + 0x20c);
    }
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar12 = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar12,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  return pGVar12;
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


/* Void OnEquip() */

void Assembly-CSharp.dll::PickupItem::PickupItem_OnEquip(PickupItem *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar1,(MethodInfo *)0x0);
    (this->fields).originalParent = pTVar1;
    func_?(&(this->fields).originalParent);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         (&VStack_3,pTVar1,(MethodInfo *)0x0);
      fVar4 = pVVar2->y;
      fVar5 = pVVar2->z;
      (this->fields).originalPos.x = pVVar2->x;
      (this->fields).originalPos.y = fVar4;
      (this->fields).originalPos.z = fVar5;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                           ((Quaternion *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0);
        fVar5 = pQVar6->y;
        fVar4 = pQVar6->z;
        fVar7 = pQVar6->w;
        (this->fields).originalRot.x = pQVar6->x;
        (this->fields).originalRot.y = fVar5;
        (this->fields).originalRot.z = fVar4;
        (this->fields).originalRot.w = fVar7;
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                             (&VStack_3,pTVar1,(MethodInfo *)0x0);
          fVar4 = pVVar2->y;
          fVar5 = pVVar2->z;
          (this->fields).originalScale.x = pVVar2->x;
          (this->fields).originalScale.y = fVar4;
          (this->fields).originalScale.z = fVar5;
          return;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    (*(code *)(pPVar1->vtable).OnUnholstered.method)
              (this,(pPVar1->vtable).GetAmmoMultiplier.methodPtr);
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
                        ((Vector3 *)&puStack_7,rotation,*pVVar5,(MethodInfo *)0x0);
    fVar4 = pVVar5->z;
    pTVar1 = (this->fields).center;
    if (pTVar1 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&puStack_7,pTVar1,(MethodInfo *)0x0);
      fVar8 = pVVar5->z;
      pTVar1 = (this->fields).center;
      if (pTVar1 != (Transform *)0x0) {
        pVVar5 = (Vector3 *)&stack0xffffffa0;
        puVar3 = &UNK_?;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (pVVar5,pTVar1,(MethodInfo *)0x0);
        uVar10 = pVVar9->x;
        uVar11 = pVVar9->y;
        puStack_7 = (undefined *)((float)puVar3 + (float)uVar10);
        fVar12 = (float)pVVar5 + (float)uVar11;
        fVar13 = (float)pTVar1 + pVVar9->z;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        puVar3 = puStack_7;
        start_01.y = 0.0;
        start_01.x = _UNK_?;
        start_01.z = fVar8;
        end_01.y = fVar12;
        end_01.x = (float)puVar3;
        end_01.z = fVar13;
        color_01.g = (float)_UNK_?;
        color_01.r = _UNK_?;
        color_01.b = (float)_UNK_?;
        color_01.a = _UNK_?;
        fVar8 = _UNK_?;
        uVar14 = _UNK_?;
        uVar15 = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                  (start_01,end_01,color_01,(MethodInfo *)0x0);
        pTVar1 = (this->fields).center;
        if (pTVar1 != (Transform *)0x0) {
          dir.z = 0.0;
          dir.x = (float)&stack0xffffffa0;
          dir.y = (float)pTVar1;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)dir.x,pTVar1,(MethodInfo *)0x0);
          uVar16 = pVVar5->x;
          uVar17 = pVVar5->y;
          fVar18 = pVVar5->z;
          pTVar1 = (this->fields).center;
          if (pTVar1 != (Transform *)0x0) {
            dir.z = (float)&UNK_?;
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffa0,pTVar1,(MethodInfo *)0x0);
            uVar19 = pVVar5->x;
            uVar20 = pVVar5->y;
            fVar21 = dir.x + (float)uVar19;
            fVar22 = dir.y + (float)uVar20;
            start.y = (float)uVar17;
            start.x = (float)uVar16;
            start.z = fVar18;
            end.y = fVar22;
            end.x = fVar21;
            end.z = dir.z + pVVar5->z;
            color.g = (float)_UNK_?;
            color.r = (float)_UNK_?;
            color.b = (float)_UNK_?;
            color.a = _UNK_?;
            dir.x = fVar18;
            dir.y = fVar21;
            dir.z = fVar22;
            puStack_7 = (undefined *)uVar19;
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                      (start,end,color,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar23 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar24 = (pVVar23->upVector).x;
            uVar25 = (pVVar23->upVector).y;
            fVar18 = (pVVar23->upVector).z;
            fVar22 = fVar13 * (float)uVar24 - fVar12 * (float)uVar25;
            fVar13 = fVar8 * (float)uVar25 - fVar13 * fVar18;
            fVar8 = fVar12 * fVar18 - fVar8 * (float)uVar24;
            puStack_7 = (undefined *)uVar24;
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                      ((Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
            pTVar1 = (this->fields).center;
            if (pTVar1 != (Transform *)0x0) {
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffa0,pTVar1,(MethodInfo *)0x0);
              uVar26 = pVVar5->x;
              uVar27 = pVVar5->y;
              fVar12 = pVVar5->z;
              pTVar1 = (this->fields).center;
              if (pTVar1 != (Transform *)0x0) {
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffa0,pTVar1,(MethodInfo *)0x0);
                uVar28 = pVVar5->x;
                uVar29 = pVVar5->y;
                start_00.y = (float)uVar27;
                start_00.x = (float)uVar26;
                start_00.z = fVar12;
                end_00.y = fVar8 + (float)uVar29;
                end_00.x = fVar13 + (float)uVar28;
                end_00.z = fVar22 + pVVar5->z;
                color_00.g = (float)_UNK_?;
                color_00.r = (float)_UNK_?;
                color_00.b = (float)_UNK_?;
                color_00.a = _UNK_?;
                puStack_7 = (undefined *)uVar28;
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                          (start_00,end_00,color_00,(MethodInfo *)0x0);
                v2.y = (float)uVar15;
                v2.x = (float)uVar14;
                normal.y = (float)((uint)fVar8 ^
                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                  );
                normal.x = (float)((uint)fVar13 ^
                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                  );
                v1.y = dir.y;
                v1.x = dir.x;
                v1.z = dir.z;
                v2.z = fVar4;
                normal.z = (float)((uint)fVar22 ^
                                  __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
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
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
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
  (this->fields)._AbleToFire_k__BackingField = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
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


/* Boolean get_FirstPerson() */

bool Assembly-CSharp.dll::PickupItem::PickupItem_get_FirstPerson
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
  iVar1 = (*(code *)(this->klass->vtable).get_Quantity.method)
                    (this,(this->klass->vtable).get_CrossHairColor.methodPtr);
  if (0 < iVar1) {
    return 0;
  }
  cVar2 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)
                    (this,(this->klass->vtable).get_CanUnequip.methodPtr);
  return cVar2 == '\0';
}


/* Boolean get_IsHandEquippable() */

bool Assembly-CSharp.dll::PickupItem::PickupItem_get_IsHandEquippable
               (PickupItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).handTransform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean get_IsInFirstPersonMode() */

bool Assembly-CSharp.dll::PickupItem::PickupItem_get_IsInFirstPersonMode
               (PickupItem *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_FirstPerson.method)
                    (this,(this->klass->vtable).get_GunMode.methodPtr);
  if (cVar1 == '\0') {
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


/* Boolean get_ThirdPersonGunMode() */

bool Assembly-CSharp.dll::PickupItem::PickupItem_get_ThirdPersonGunMode
               (PickupItem *this,MethodInfo *method)

{
  cVar1 = (*(code *)(this->klass->vtable).get_IsHandEquippable.method)
                    (this,(this->klass->vtable).get_ThirdPersonGunMode.methodPtr);
  if (cVar1 != '\0') {
    cVar1 = (*(code *)(this->klass->vtable).get_FirstPerson.method)
                      (this,(this->klass->vtable).get_GunMode.methodPtr);
    if (cVar1 == '\0') {
      bVar2 = (*(code *)(this->klass->vtable).get_GunMode.method)
                        (this,(this->klass->vtable).get_IsHandEquippable.methodPtr);
      return bVar2;
    }
  }
  return 0;
}

