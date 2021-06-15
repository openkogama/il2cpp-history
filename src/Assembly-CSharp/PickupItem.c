
/* Void AlignThisTo(Transform, Transform) */

void Assembly-CSharp.dll::PickupItem::PickupItem_AlignThisTo
               (PickupItem *this,Transform *targetHolsterTransform,Transform *offset,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar1,(this->fields).originalParent,0,(MethodInfo *)0x0);
    if (offset != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                ((Quaternion *)&stack0xffffffd0,offset,(MethodInfo *)0x0);
      if (targetHolsterTransform != (Transform *)0x0) {
        pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                           ((Quaternion *)&stack0xffffffd0,targetHolsterTransform,(MethodInfo *)0x0)
        ;
        fVar3 = pQVar2->x;
        fVar4 = pQVar2->y;
        fVar5 = pQVar2->z;
        fVar6 = pQVar2->w;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?();
        }
        lhs.y = fVar4;
        lhs.x = fVar3;
        lhs.z = fVar5;
        lhs.w = fVar6;
        rhs.y = fVar4;
        rhs.x = fVar3;
        rhs.z = fVar5;
        rhs.w = fVar6;
        pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                           ((Quaternion *)&stack0xffffffd0,lhs,rhs,(MethodInfo *)0x0);
        fVar3 = pQVar2->x;
        fVar4 = pQVar2->y;
        fVar5 = pQVar2->z;
        fVar6 = pQVar2->w;
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          value.y = fVar4;
          value.x = fVar3;
          value.z = fVar5;
          value.w = fVar6;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar1,value,(MethodInfo *)0x0);
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffff0,targetHolsterTransform,(MethodInfo *)0x0);
          uVar8 = pVVar7->x;
          uVar9 = pVVar7->y;
          fVar3 = pVVar7->z;
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffd4,offset,(MethodInfo *)0x0);
          VVar10 = *pVVar7;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          a.y = (float)uVar9;
          a.x = (float)uVar8;
          a.z = fVar3;
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                             ((Vector3 *)&stack0xffffffd4,a,VVar10,(MethodInfo *)0x0);
          uVar11 = pVVar7->x;
          uVar12 = pVVar7->y;
          fVar3 = pVVar7->z;
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this,(MethodInfo *)0x0);
          if (this_00 != (Transform *)0x0) {
            pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffd4,this_00,(MethodInfo *)0x0);
            VVar10.y = (float)uVar12;
            VVar10.x = (float)uVar11;
            VVar10.z = fVar3;
            pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               ((Vector3 *)&stack0xffffffd4,*pVVar7,VVar10,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar1,*pVVar7,(MethodInfo *)0x0);
              pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)this,(MethodInfo *)0x0);
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                 ((Vector3 *)&stack0xffffffd4,offset,(MethodInfo *)0x0);
              if (pTVar1 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (pTVar1,*pVVar7,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void EnterFirstPersonView(MVCameraBase) */

void Assembly-CSharp.dll::PickupItem::PickupItem_EnterFirstPersonView
               (PickupItem *this,MVCameraBase *camera,MethodInfo *method)

{
  if ((this->fields)._IsHolstered_k__BackingField != 0) {
    return;
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if ((camera != (MVCameraBase *)0x0) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)camera,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar1,pTVar2,0,(MethodInfo *)0x0);
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    pTVar1 = (this->fields).firstPersonTransform;
    if ((pTVar1 != (Transform *)0x0) &&
       (pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0),
       pTVar2 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar2,*pVVar3,(MethodInfo *)0x0);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      pTVar1 = (this->fields).firstPersonTransform;
      if ((pTVar1 != (Transform *)0x0) &&
         (pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                             ((Quaternion *)&stack0xffffffec,pTVar1,(MethodInfo *)0x0),
         pTVar2 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar2,*pQVar4,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_00 != (MVNetworkGame *)0x0) &&
      (this_01 = (PrefabPool *)
                 MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      this_01 != (PrefabPool *)0x0)) &&
     (this_02 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                          (this_01,(MethodInfo *)0x0), this_02 != (ObjectiveArrow *)0x0)) {
    BoostController::BoostController_TryGetActiveBoost
              ((BoostController *)this_02,BoostType__Enum_AmmoIntMultiplier,
               (Boost **)&stack0xfffffff8,(MethodInfo *)0x0);
    return 0;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
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
    (*(code *)(pPVar1->vtable).OnHolstered.method)(this,(pPVar1->vtable).OnUnholstered.methodPtr);
  }
  return;
}


/* GameObject InstantiateAvatarItemType(AvatarItemType) */

GameObject *
Assembly-CSharp.dll::PickupItem::PickupItem_InstantiateAvatarItemType
          (AvatarItemType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  switch(type) {
  case AvatarItemType__Enum_LaserPointer:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pXVar2 = (XpBoostParticlePreviewer *)
               PrefabPool::PrefabPool_get_AvatarItemLaserPointer(pPVar1,(MethodInfo *)0x0);
code_?:
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar2,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
      return (GameObject *)pXVar2;
    }
    break;
  case AvatarItemType__Enum_CenterGun:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pXVar2 = (XpBoostParticlePreviewer *)
               PrefabPool::PrefabPool_get_AvatarItemCenterGun(pPVar1,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case AvatarItemType__Enum_ImpulseGun:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pXVar2 = (XpBoostParticlePreviewer *)
               PrefabPool::PrefabPool_get_AvatarItemImpulseGun(pPVar1,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  default:
    switch(type) {
    case AvatarItemType__Enum_MouseGun:
      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
        func_?(TypeInfo__PrefabPool);
      }
      pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if (pPVar1 != (PrefabPool *)0x0) {
        pXVar2 = (XpBoostParticlePreviewer *)
                 PrefabPool::PrefabPool_get_AvatarItemMouseGun(pPVar1,(MethodInfo *)0x0);
        goto code_?;
      }
      break;
    case AvatarItemType__Enum_CollectTheItemCollectable:
      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
        func_?(TypeInfo__PrefabPool);
      }
      pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if (pPVar1 != (PrefabPool *)0x0) {
        pXVar2 = (XpBoostParticlePreviewer *)
                 PrefabPool::PrefabPool_get_AvatarItemCollectTheItem(pPVar1,(MethodInfo *)0x0);
        goto code_?;
      }
      break;
    case AvatarItemType__Enum_GrowthGun:
      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
        func_?(TypeInfo__PrefabPool);
      }
      pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if (pPVar1 != (PrefabPool *)0x0) {
        pXVar2 = (XpBoostParticlePreviewer *)
                 PrefabPool::PrefabPool_get_AvatarItemGrowthGun(pPVar1,(MethodInfo *)0x0);
        goto code_?;
      }
      break;
    default:
      if (type == AvatarItemType__Enum_ThrowingStar) {
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?(TypeInfo__PrefabPool);
        }
        pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (pPVar1 != (PrefabPool *)0x0) {
          pXVar2 = (XpBoostParticlePreviewer *)
                   PrefabPool::PrefabPool_get_AvatarItemThrowingStar(pPVar1,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      else if (type == AvatarItemType__Enum_MultiThrowingStar) {
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?(TypeInfo__PrefabPool);
        }
        pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (pPVar1 != (PrefabPool *)0x0) {
          pXVar2 = (XpBoostParticlePreviewer *)
                   PrefabPool::PrefabPool_get_AvatarItemMultiThrowingStar(pPVar1,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      else {
        if (type != AvatarItemType__Enum_HealRay) {
          return (GameObject *)0x0;
        }
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?(TypeInfo__PrefabPool);
        }
        pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (pPVar1 != (PrefabPool *)0x0) {
          pXVar2 = (XpBoostParticlePreviewer *)
                   PrefabPool::PrefabPool_get_AvatarItemHealRay(pPVar1,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      break;
    case AvatarItemType__Enum_SlapGun:
      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
        func_?(TypeInfo__PrefabPool);
      }
      pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if (pPVar1 != (PrefabPool *)0x0) {
        pXVar2 = (XpBoostParticlePreviewer *)
                 PrefabPool::PrefabPool_get_AvatarItemSlapGun(pPVar1,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    break;
  case AvatarItemType__Enum_Bazooka:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pXVar2 = (XpBoostParticlePreviewer *)
               PrefabPool::PrefabPool_get_AvatarItemBazooka(pPVar1,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case AvatarItemType__Enum_Hand:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pXVar2 = (XpBoostParticlePreviewer *)
               PrefabPool::PrefabPool_get_AvatarItemHand(pPVar1,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case AvatarItemType__Enum_RailGun:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pXVar2 = (XpBoostParticlePreviewer *)
               PrefabPool::PrefabPool_get_AvatarItemRailGun(pPVar1,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case AvatarItemType__Enum_Sword:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pXVar2 = (XpBoostParticlePreviewer *)
               PrefabPool::PrefabPool_get_AvatarItemSword(pPVar1,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case AvatarItemType__Enum_Shotgun:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pXVar2 = (XpBoostParticlePreviewer *)
               PrefabPool::PrefabPool_get_AvatarItemShotgun(pPVar1,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case AvatarItemType__Enum_Flamethrower:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pXVar2 = (XpBoostParticlePreviewer *)
               PrefabPool::PrefabPool_get_AvatarItemFlamethrower(pPVar1,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case AvatarItemType__Enum_CubeGun:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pXVar2 = (XpBoostParticlePreviewer *)
               PrefabPool::PrefabPool_get_AvatarItemCubeGun(pPVar1,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case AvatarItemType__Enum_SixShooter:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pXVar2 = (XpBoostParticlePreviewer *)
               PrefabPool::PrefabPool_get_AvatarItemSixShooter(pPVar1,(MethodInfo *)0x0);
      goto code_?;
    }
    break;
  case AvatarItemType__Enum_DoubleSixShooter:
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?(TypeInfo__PrefabPool);
    }
    pPVar1 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar1 != (PrefabPool *)0x0) {
      pXVar2 = (XpBoostParticlePreviewer *)
               PrefabPool::PrefabPool_get_AvatarItemDoubleSixShooter(pPVar1,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  uVar3 = func_?(0);
  iVar4 = (int)((ulonglong)uVar3 >> 0x20);
  uVar5 = (uint)uVar3 ^ 0x6e104a3b;
  bVar6 = extraout_ECX < *(uint *)(iVar4 + 0x10);
  bVar7 = *unaff_EDI;
  bVar8 = (byte)(extraout_ECX >> 8);
  bVar9 = *unaff_EDI + bVar8;
  *unaff_EDI = bVar9 + bVar6;
  *unaff_EBX = *unaff_EBX + (char)((ulonglong)uVar3 >> 0x20) + -2 +
               (CARRY1(bVar7,bVar8) || CARRY1(bVar9,bVar6));
  bVar8 = (byte)uVar5;
  pbVar10 = unaff_EDI + 0x3c;
  bVar11 = (byte)extraout_ECX;
  bVar6 = CARRY1(*pbVar10,bVar11) || CARRY1(*pbVar10 + bVar11,bVar8 < 0x4a);
  *pbVar10 = *pbVar10 + bVar11 + (bVar8 < 0x4a);
  pbVar10 = (byte *)(unaff_EBX + 0x2f104a3c);
  bVar7 = *pbVar10;
  bVar9 = *pbVar10;
  *pbVar10 = bVar9 + bVar11 + bVar6;
  bVar11 = (char)((uint)unaff_EBX >> 8) + bVar8 +
           (CARRY1(bVar7,bVar11) || CARRY1(bVar9 + bVar11,bVar6));
  pcVar12 = (char *)CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(bVar11,(char)unaff_EBX));
  *pcVar12 = *pcVar12 + bVar8 + (bVar8 < 0x4a);
  pbVar10 = (byte *)(pcVar12 + 0x3d);
  bVar7 = *pbVar10;
  bVar9 = *pbVar10;
  *pbVar10 = bVar9 + bVar11 + (uVar5 < 0x3d3f104a);
  unaff_EDI[-0xcefb5c3] =
       unaff_EDI[-0xcefb5c3] + (char)((uint)(iVar4 + -6) >> 8) +
       (CARRY1(bVar7,bVar11) || CARRY1(bVar9 + bVar11,uVar5 < 0x3d3f104a));
  pbVar10 = (byte *)(unaff_ESI + 0x3e);
  bVar7 = *pbVar10;
  bVar9 = *pbVar10;
  *pbVar10 = bVar9 + bVar11 + (uVar5 < 0x3e42104a);
  *(char *)(iVar4 + 0x32104a36) =
       *(char *)(iVar4 + 0x32104a36) + bVar11 +
       (CARRY1(bVar7,bVar11) || CARRY1(bVar9 + bVar11,uVar5 < 0x3e42104a));
  pcVar12 = (char *)(iVar4 + -9);
  *pcVar12 = *pcVar12 + (char)((uint)pcVar12 >> 8) + (9 < (bVar8 & 0xf) | in_AF);
  pcVar13 = (code *)swi(3);
  pGVar14 = (GameObject *)(*pcVar13)();
  return pGVar14;
}


/* Void LeaveFirstPersonView() */

void Assembly-CSharp.dll::PickupItem::PickupItem_LeaveFirstPersonView
               (PickupItem *this,MethodInfo *method)

{
  if ((this->fields)._IsHolstered_k__BackingField != 0) {
    return;
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar1,(this->fields).originalParent,0,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar1,(this->fields).originalPos,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar1,(this->fields).originalRot,(MethodInfo *)0x0);
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar1,(this->fields).originalScale,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::PickupItem::PickupItem_OnEquip(PickupItem *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar1,(MethodInfo *)0x0);
    (this->fields).originalParent = pTVar1;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&puStack_3,pTVar1,(MethodInfo *)0x0);
      fVar4 = pVVar2->y;
      fVar5 = pVVar2->z;
      (this->fields).originalPos.x = pVVar2->x;
      (this->fields).originalPos.y = fVar4;
      (this->fields).originalPos.z = fVar5;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
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
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                             ((Vector3 *)&puStack_3,pTVar1,(MethodInfo *)0x0);
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
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar1,(this->fields).originalParent,0,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar1,(this->fields).originalPos,(MethodInfo *)0x0);
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar1,(this->fields).originalRot,(MethodInfo *)0x0);
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar1,(this->fields).originalScale,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&dir,0);
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                        ((Quaternion *)&stack0xffffffbc,pTVar1,(MethodInfo *)0x0);
    puVar3 = (undefined *)pQVar2->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                        ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
    uVar5._0_4_ = pVVar4->x;
    uVar5._4_4_ = pVVar4->y;
    fVar6 = pVVar4->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      puVar3 = &UNK_?;
      func_?();
    }
    rotation.z = (float)puVar3;
    rotation.x = (float)(int)uVar5;
    rotation.y = (float)(int)((ulonglong)uVar5 >> 0x20);
    rotation.w = 0.0;
    point.z = fVar6;
    point.x = (float)(int)uVar5;
    point.y = (float)(int)((ulonglong)uVar5 >> 0x20);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffffd8,rotation,point,(MethodInfo *)0x0);
    fVar6 = pVVar4->z;
    pTVar1 = (this->fields).center;
    if (pTVar1 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
      fVar7 = pVVar4->x;
      fVar8 = pVVar4->y;
      fVar9 = pVVar4->z;
      pTVar1 = (this->fields).center;
      if (pTVar1 != (Transform *)0x0) {
        pVVar4 = (Vector3 *)&stack0xffffffe4;
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (pVVar4,pTVar1,(MethodInfo *)0x0);
        b_01.y = (float)pTVar1;
        b_01.x = (float)pVVar4;
        fVar11 = pVVar10->y;
        fVar12 = pVVar10->z;
        b_01.z = fVar6;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)&stack0xffffffc0,*pVVar10,b_01,(MethodInfo *)0x0);
        fVar13 = pVVar4->x;
        fVar14 = pVVar4->y;
        fVar15 = pVVar4->z;
        pCVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_red
                            ((Color *)&stack0xffffffbc,(MethodInfo *)0x0);
        fVar17 = pCVar16->r;
        fVar18 = pCVar16->g;
        fVar19 = pCVar16->b;
        fVar20 = pCVar16->a;
        fVar8 = fVar8;
        fVar13 = fVar13;
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           (fVar8 = fVar8, fVar13 = fVar13, (TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
          fVar8 = fVar8;
          fVar13 = fVar13;
        }
        dir.z = fVar13;
        dir.x = fVar8;
        start.y = dir.x;
        start.x = fVar7;
        start.z = fVar9;
        end.y = fVar14;
        end.x = dir.z;
        end.z = fVar15;
        color.g = fVar18;
        color.r = fVar17;
        color.b = fVar19;
        color.a = fVar20;
        dir.y = fVar9;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_1
                  (start,end,color,(MethodInfo *)0x0);
        pTVar1 = (this->fields).center;
        if (pTVar1 != (Transform *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffc0,pTVar1,(MethodInfo *)0x0);
          fVar9 = pVVar4->x;
          fVar15 = pVVar4->y;
          fVar7 = pVVar4->z;
          pTVar1 = (this->fields).center;
          if (pTVar1 != (Transform *)0x0) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffc0,pTVar1,(MethodInfo *)0x0);
            b.y = dir.y;
            b.x = dir.x;
            b.z = dir.z;
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                ((Vector3 *)&stack0xffffffc0,*pVVar4,b,(MethodInfo *)0x0);
            fVar17 = pVVar4->x;
            fVar18 = pVVar4->y;
            fVar8 = pVVar4->z;
            pCVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_blue
                                ((Color *)&stack0xffffffbc,(MethodInfo *)0x0);
            end_00.y = fVar18;
            end_00.x = fVar17;
            start_00.y = fVar15;
            start_00.x = fVar9;
            start_00.z = fVar7;
            end_00.z = fVar8;
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_1
                      (start_00,end_00,*pCVar16,(MethodInfo *)0x0);
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                ((Vector3 *)&stack0xffffffc0,(MethodInfo *)0x0);
            rhs.y = fVar12;
            rhs.x = fVar11;
            rhs.z = fVar6;
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Cross
                                ((Vector3 *)&stack0xffffffc0,*pVVar4,rhs,(MethodInfo *)0x0);
            uVar21._0_4_ = pVVar4->x;
            uVar21._4_4_ = pVVar4->y;
            fVar7 = pVVar4->z;
            func_?();
            pTVar1 = (this->fields).center;
            if (pTVar1 != (Transform *)0x0) {
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffc0,pTVar1,(MethodInfo *)0x0);
              fVar19 = pVVar4->y;
              fVar8 = pVVar4->z;
              pTVar1 = (this->fields).center;
              if (pTVar1 != (Transform *)0x0) {
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0xffffffc0,pTVar1,(MethodInfo *)0x0);
                b_00.z = fVar7;
                b_00.x = (float)(int)uVar21;
                b_00.y = (float)(int)((ulonglong)uVar21 >> 0x20);
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                    ((Vector3 *)&stack0xffffffc0,*pVVar4,b_00,(MethodInfo *)0x0);
                fVar7 = pVVar4->z;
                pCVar16 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_green
                                    ((Color *)&stack0xffffffbc,(MethodInfo *)0x0);
                uVar22._0_4_ = pCVar16->g;
                uVar22._4_4_ = pCVar16->b;
                auVar23._4_4_ = fVar8;
                auVar23._0_4_ = fVar19;
                auVar23._8_4_ = 0;
                end_01.z = fVar7;
                end_01.x = (float)(undefined4)uVar22;
                end_01.y = (float)uVar22._4_4_;
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_1
                          ((Vector3)(auVar23 << 0x20),end_01,*pCVar16,(MethodInfo *)0x0);
                fVar13 = dir.z;
                fVar9 = dir.y;
                fVar8 = dir.x;
                dir.x = (float)uVar22;
                dir.y = (float)((ulonglong)uVar22 >> 0x20);
                a.z = fVar7;
                a.x = (float)(int)uVar22;
                a.y = (float)(int)((ulonglong)uVar22 >> 0x20);
                fVar14 = dir.x;
                dir.z = fVar7;
                dir.x = fVar9;
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                                    ((Vector3 *)&stack0xffffffc0,a,(MethodInfo *)0x0);
                dir.z = fVar11;
                dir.y = fVar13;
                v1.y = dir.x;
                v1.x = fVar8;
                v1.z = fVar13;
                v2.y = fVar12;
                v2.x = dir.z;
                v2.z = fVar6;
                fVar6 = MathFunctions::MathFunctions_SignedAngle_1
                                   (v1,v2,*pVVar4,(MethodInfo *)0x0);
                pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                                    ((Quaternion *)&stack0xffffffbc,fVar6 * _UNK_?,0.0,0.0,
                                     (MethodInfo *)0x0);
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
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* PickupItem() */

void Assembly-CSharp.dll::PickupItem::PickupItem__ctor(PickupItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (MeshRenderer__Array *)func_?(TypeInfo__UnityEngine__MeshRenderer,0);
  (this->fields).meshRenderers = pMVar1;
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Color get_CrossHairColor() */

Color * Assembly-CSharp.dll::PickupItem::PickupItem_get_CrossHairColor
                  (Color *__return_storage_ptr__,PickupItem *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_green
                     (&CStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Boolean get_FirstPersonCapable() */

bool Assembly-CSharp.dll::PickupItem::PickupItem_get_FirstPersonCapable
               (PickupItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).firstPersonTransform;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    return (pMVar1->fields).hasUnlimitedAmmoSetting;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
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


/* Boolean get_IsInFirstPersonMode() */

bool Assembly-CSharp.dll::PickupItem::PickupItem_get_IsInFirstPersonMode
               (PickupItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).firstPersonTransform;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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


/* Void set_VariantID(Int32) */

void Assembly-CSharp.dll::PickupItem::PickupItem_set_VariantID
               (PickupItem *this,int32_t value,MethodInfo *method)

{
  (this->fields)._VariantID_k__BackingField = value;
  return;
}

