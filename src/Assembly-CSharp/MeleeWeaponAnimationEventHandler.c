
/* Void MeleeWeaponArcEnd() */

void Assembly-CSharp.dll::MeleeWeaponAnimationEventHandler::
     MeleeWeaponAnimationEventHandler_MeleeWeaponArcEnd
               (MeleeWeaponAnimationEventHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).arcInstance;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pTVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pTVar1 = (this->fields).arcInstance;
  if (pTVar1 != (TrailArc *)0x0) {
    (pTVar1->fields).Emit = 0;
    pTVar1 = (this->fields).arcInstance;
    if ((pTVar1 != (TrailArc *)0x0) &&
       (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pTVar1,(MethodInfo *)0x0), this_00 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (this_00,(Transform *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void MeleeWeaponArcStart() */

void Assembly-CSharp.dll::MeleeWeaponAnimationEventHandler::
     MeleeWeaponAnimationEventHandler_MeleeWeaponArcStart
               (MeleeWeaponAnimationEventHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TrailArc_MethodInfo__UnityEngine__Object__Instantiate<TrailArc>_TrailArc_);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).trailArcPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pTVar1 = (TrailArc *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pTVar1,
                      TrailArc_MethodInfo__UnityEngine__Object__Instantiate<TrailArc>_TrailArc_);
  (this->fields).arcInstance = pTVar1;
  func_?(&(this->fields).arcInstance,pTVar1);
  pTVar1 = (this->fields).arcInstance;
  if (pTVar1 != (TrailArc *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar2,(this->fields).target,(MethodInfo *)0x0);
      pTVar1 = (this->fields).arcInstance;
      if (pTVar1 != (TrailArc *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar2,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                     (MethodInfo *)0x0);
          pTVar1 = (this->fields).arcInstance;
          if (pTVar1 != (TrailArc *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pTVar1,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        (pTVar2,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion
                         ,(MethodInfo *)0x0);
              this_00 = (this->fields).meleeWeaponItem;
              pTVar1 = (this->fields).arcInstance;
              if (this_00 != (PickupItemMeleeWeapon *)0x0) {
                pPVar3 = PickupItemMeleeWeapon::PickupItemMeleeWeapon_get_Configuration
                                   (this_00,(MethodInfo *)0x0);
                if ((pPVar3 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) &&
                   (pTVar1 != (TrailArc *)0x0)) {
                  TrailArc::TrailArc_SetTrailColor
                            (pTVar1,(pPVar3->fields).trailColor,(MethodInfo *)0x0);
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::MeleeWeaponAnimationEventHandler::
     MeleeWeaponAnimationEventHandler_OnDisable
               (MeleeWeaponAnimationEventHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  exists = (this->fields).arcInstance;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)exists,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    MeleeWeaponAnimationEventHandler_MeleeWeaponArcEnd(this,(MethodInfo *)0x0);
  }
  return;
}

