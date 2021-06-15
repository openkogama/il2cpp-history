
/* Void Equip(AvatarItemType, Int32) */

void Assembly-CSharp.dll::VehiclePickupOwner::VehiclePickupOwner_Equip
               (VehiclePickupOwner *this,AvatarItemType__Enum type,int32_t variantId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = MVPickupOwner::MVPickupOwner_CreateAvatarItem
                     ((MVPickupOwner *)this,type,variantId,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_AvatarItem_is_null__This_is_thou,(MethodInfo *)0x0);
    pPVar1 = MVPickupOwner::MVPickupOwner_CreateAvatarItem
                       ((MVPickupOwner *)this,AvatarItemType__Enum_Hand,variantId,(MethodInfo *)0x0)
    ;
  }
  if (pPVar1 != (PickupItem *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pPVar1,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar3,(this->fields).mountTransform,(MethodInfo *)0x0);
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pPVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                         ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar3,*pVVar4,(MethodInfo *)0x0);
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pPVar1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                           ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (pTVar3,*pQVar5,(MethodInfo *)0x0);
          MVPickupOwner::MVPickupOwner_SetAvatarItemAsCurrent
                    ((MVPickupOwner *)this,pPVar1,(MethodInfo *)0x0);
          pPVar1 = (this->fields)._.currentItem;
          if (pPVar1 != (PickupItem *)0x0) {
            (*(code *)(pPVar1->klass->vtable).OnEquip.method)();
            this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
                      (this->fields)._.onEquipItem;
            if (this_00 != (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0) {
              Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
              SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke
                        (this_00,(Object *)(this->fields)._.currentItem,(MethodInfo *)0x0);
            }
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
  return;
}


/* Void OnLocalObjectsDestroyed() */

void Assembly-CSharp.dll::VehiclePickupOwner::VehiclePickupOwner_OnLocalObjectsDestroyed
               (VehiclePickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_OnLocalObjectsDestroyed,(MethodInfo *)0x0);
  MVPickupOwner::MVPickupOwner_set_IsLocal((MVPickupOwner *)this,0,(MethodInfo *)0x0);
  return;
}


/* Void Unequip() */

void Assembly-CSharp.dll::VehiclePickupOwner::VehiclePickupOwner_Unequip
               (VehiclePickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields)._.currentItem;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  this_00 = (MvCharacterController *)(this->fields)._.currentItem;
  if (this_00 != (MvCharacterController *)0x0) {
    bVar2 = MvCharacterController::MvCharacterController_get_IsGrounded(this_00,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    pPVar1 = (this->fields)._.currentItem;
    if (pPVar1 != (PickupItem *)0x0) {
      (*(code *)(pPVar1->klass->vtable).OnUnequip.method)();
      pPVar1 = (this->fields)._.currentItem;
      if (pPVar1 != (PickupItem *)0x0) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)pPVar1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
        this_01 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)(this->fields)._.onUnequipItem
        ;
        (this->fields)._.currentItem = (PickupItem *)0x0;
        if (this_01 == (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)0x0) {
          return;
        }
        Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
        SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
        SpawnRoleVariable_1_T_SubDelegate_System_Object__Invoke
                  (this_01,(Object *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* VehiclePickupOwner() */

void Assembly-CSharp.dll::VehiclePickupOwner::VehiclePickupOwner__ctor
               (VehiclePickupOwner *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields)._.lookOrigin.x = pVVar1->x;
  (this->fields)._.lookOrigin.y = fVar3;
  (this->fields)._.lookOrigin.z = fVar4;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields)._.lookDirection.x = pVVar1->x;
  (this->fields)._.lookDirection.y = fVar3;
  (this->fields)._.lookDirection.z = fVar4;
  MVComponent::MVComponent__ctor((MVComponent *)this,(MethodInfo *)0x0);
  return;
}

