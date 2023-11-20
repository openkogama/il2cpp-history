
/* Void Equip(AvatarItemType, Int32) */

void Assembly-CSharp.dll::VehiclePickupOwner::VehiclePickupOwner_Equip
               (VehiclePickupOwner *this,AvatarItemType__Enum type,int32_t variantId,
               MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_AvatarItem_is_null__This_is_thou);
    cRam_? = '\x01';
  }
  avatarItem = MVPickupOwner::MVPickupOwner_CreateAvatarItem
                         ((MVPickupOwner *)this,type,variantId,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)avatarItem,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_AvatarItem_is_null__This_is_thou,(MethodInfo *)0x0);
    avatarItem = MVPickupOwner::MVPickupOwner_CreateAvatarItem
                           ((MVPickupOwner *)this,AvatarItemType__Enum_Hand,variantId,
                            (MethodInfo *)0x0);
  }
  if (avatarItem != (PickupItem *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)avatarItem,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar2,(this->fields).mountTransform,(MethodInfo *)0x0);
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)avatarItem,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      if (pTVar2 != (Transform *)0x0) {
        uVar4 = (pVVar3->zeroVector).x;
        uVar5 = (pVVar3->zeroVector).y;
        this = (VehiclePickupOwner *)(pVVar3->zeroVector).z;
        fVar6 = (float)uVar5;
        value.x = (float)uVar4;
        value = (Vector3)CONCAT84(uVar7,value.x);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar2,value,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)avatarItem,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar2,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                     (MethodInfo *)0x0);
          MVPickupOwner::MVPickupOwner_SetAvatarItemAsCurrent
                    ((MVPickupOwner *)this_00,avatarItem,(MethodInfo *)0x0);
          pPStack8 = (this_00->fields)._.currentItem;
          if (pPStack8 != (PickupItem *)0x0) {
            pIStack9 = (pPStack8->klass->vtable).OnUnequip.methodPtr;
            (*(code *)(pPStack8->klass->vtable).OnEquip.method)();
            if ((this_00->fields)._.onEquipItem != (MVPickupOwner_OnEquipItemDelegate *)0x0) {
              pMVar10 = (this_00->fields)._.onEquipItem;
              pIStack9 = (pMVar10->fields)._._.method;
              pPStack8 = (this_00->fields)._.currentItem;
              (*(pMVar10->fields)._._.invoke_impl)();
            }
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Init(MVRuntimeDataVariable, MVRuntimeDataVariable, Transform) */

void Assembly-CSharp.dll::VehiclePickupOwner::VehiclePickupOwner_Init
               (VehiclePickupOwner *this,MVRuntimeDataVariable *currentItemRuntimeVariable,
               MVRuntimeDataVariable *isFiringRuntimeVariable,Transform *mountTransform,
               MethodInfo *method)

{
  MVPickupOwner::MVPickupOwner_Init
            ((MVPickupOwner *)this,currentItemRuntimeVariable,isFiringRuntimeVariable,
             (MethodInfo *)0x0);
  (this->fields).mountTransform = mountTransform;
  func_?(&(this->fields).mountTransform,mountTransform);
  return;
}


/* Void OnLocalObjectsDestroyed() */

void Assembly-CSharp.dll::VehiclePickupOwner::VehiclePickupOwner_OnLocalObjectsDestroyed
               (VehiclePickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_OnLocalObjectsDestroyed);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_OnLocalObjectsDestroyed,(MethodInfo *)0x0);
  (this->fields)._._IsLocal_k__BackingField = 0;
  return;
}


/* Void Unequip() */

void Assembly-CSharp.dll::VehiclePickupOwner::VehiclePickupOwner_Unequip
               (VehiclePickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields)._.currentItem;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pPVar1 = (this->fields)._.currentItem;
    if (pPVar1 == (PickupItem *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pPVar1->fields)._IsHolstered_k__BackingField == 0) {
      (*(code *)(pPVar1->klass->vtable).OnUnequip.method)
                (pPVar1,(pPVar1->klass->vtable).ResetAmmo.methodPtr);
      pPVar1 = (this->fields)._.currentItem;
      if (pPVar1 == (PickupItem *)0x0) goto code_?;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pPVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      (this->fields)._.currentItem = (PickupItem *)0x0;
      func_?();
      if ((this->fields)._.onUnequipItem != (MVPickupOwner_OnUnequipItemDelegate *)0x0) {
        pMVar4 = (this->fields)._.onUnequipItem;
        pvStack5 = (pMVar4->fields)._._.method;
        (*(pMVar4->fields)._._.invoke_impl)();
      }
    }
  }
  return;
}


/* VehiclePickupOwner() */

void Assembly-CSharp.dll::VehiclePickupOwner::VehiclePickupOwner__ctor
               (VehiclePickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->oneVector).y;
  fVar3 = (pVVar1->oneVector).z;
  (this->fields)._.lookOrigin.x = (pVVar1->oneVector).x;
  (this->fields)._.lookOrigin.y = fVar2;
  (this->fields)._.lookOrigin.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->oneVector).y;
  fVar3 = (pVVar1->oneVector).z;
  (this->fields)._.lookDirection.x = (pVVar1->oneVector).x;
  (this->fields)._.lookDirection.y = fVar2;
  (this->fields)._.lookDirection.z = fVar3;
  (this->fields)._._.findWorldObjectParent = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

