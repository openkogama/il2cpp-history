
/* Void Init(MVRuntimeDataVariable, MVRuntimeDataVariable, Transform) */

void Assembly-CSharp.dll::VehiclePickupOwner::VehiclePickupOwner_Init
               (VehiclePickupOwner *this,MVRuntimeDataVariable *currentItemRuntimeVariable,
               MVRuntimeDataVariable *isFiringRuntimeVariable,Transform *mountTransform,
               MethodInfo *method)

{
  MVPickupOwner::MVPickupOwner_Init
            ((MVPickupOwner *)this,currentItemRuntimeVariable,isFiringRuntimeVariable,
             (MethodInfo *)0x0);
  ppTVar1 = &(this->fields).mountTransform;
  *ppTVar1 = mountTransform;
  func_?(ppTVar1,mountTransform);
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


/* Void SetupItemTransform() */

void Assembly-CSharp.dll::VehiclePickupOwner::VehiclePickupOwner_SetupItemTransform
               (VehiclePickupOwner *this,MethodInfo *method)

{
  pPVar1 = (this->fields)._.currentItem;
  if (pPVar1 != (PickupItem *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pPVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar2,(this->fields).mountTransform,(MethodInfo *)0x0);
      pPVar1 = (this->fields)._.currentItem;
      if (pPVar1 != (PickupItem *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pPVar1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar2,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                     (MethodInfo *)0x0);
          pPVar1 = (this->fields)._.currentItem;
          if (pPVar1 != (PickupItem *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pPVar1,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        (pTVar2,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion
                         ,(MethodInfo *)0x0);
              pPVar1 = (this->fields)._.currentItem;
              if (pPVar1 != (PickupItem *)0x0) {
                (*(code *)(pPVar1->klass->vtable).OnEquip.method)();
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  ppPVar2 = &(this->fields)._.currentItem;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    pPVar1 = *ppPVar2;
    if (pPVar1 == (PickupItem *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pPVar1->fields)._IsHolstered_k__BackingField == 0) {
      (*(code *)(pPVar1->klass->vtable).OnUnequip.method)
                (pPVar1,(pPVar1->klass->vtable).ResetAmmo.methodPtr);
      if (*ppPVar2 == (PickupItem *)0x0) goto code_?;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)*ppPVar2,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      *ppPVar2 = (PickupItem *)0x0;
      func_?(ppPVar2);
      pMVar5 = (this->fields)._.onUnequipItem;
      if (pMVar5 != (MVPickupOwner_OnUnequipItemDelegate *)0x0) {
        (*(pMVar5->fields)._._.invoke_impl)();
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
  LobbyStatePlayModeController::LobbyStatePlayModeController__ctor
            ((LobbyStatePlayModeController *)this,(MethodInfo *)0x0);
  return;
}

