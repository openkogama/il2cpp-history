
/* Void OnDisable() */

void Assembly-CSharp.dll::SwordAnimationEventHandler::SwordAnimationEventHandler_OnDisable
               (SwordAnimationEventHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).arcInstance;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pTVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pTVar1 = (this->fields).arcInstance;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                      ((Object_1 *)pTVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pTVar1 = (this->fields).arcInstance;
      if (pTVar1 != (TrailArc *)0x0) {
        ConsoleDragAndTapHandler::ConsoleDragAndTapHandler_SetScrollingEnabled
                  ((ConsoleDragAndTapHandler *)pTVar1,0,(MethodInfo *)0x0);
        pTVar1 = (this->fields).arcInstance;
        if ((pTVar1 != (TrailArc *)0x0) &&
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pTVar1,(MethodInfo *)0x0),
           this_00 != (Transform *)0x0)) {
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
  }
  return;
}


/* Void SwordAnimHit() */

void Assembly-CSharp.dll::SwordAnimationEventHandler::SwordAnimationEventHandler_SwordAnimHit
               (SwordAnimationEventHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).arcInstance;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pTVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  pTVar1 = (this->fields).arcInstance;
  if (pTVar1 != (TrailArc *)0x0) {
    ConsoleDragAndTapHandler::ConsoleDragAndTapHandler_SetScrollingEnabled
              ((ConsoleDragAndTapHandler *)pTVar1,0,(MethodInfo *)0x0);
    pTVar1 = (this->fields).arcInstance;
    if ((pTVar1 != (TrailArc *)0x0) &&
       (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pTVar1,(MethodInfo *)0x0), this_00 != (Transform *)0x0))
    {
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


/* Void SwordAnimStart() */

void Assembly-CSharp.dll::SwordAnimationEventHandler::SwordAnimationEventHandler_SwordAnimStart
               (SwordAnimationEventHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).trailArcPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pTVar1 = (TrailArc *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pTVar1,
                      TrailArc_MethodInfo__UnityEngine__Object__Instantiate<TrailArc>_TrailArc_);
  (this->fields).arcInstance = pTVar1;
  if (pTVar1 != (TrailArc *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                (pTVar2,(this->fields).target,(MethodInfo *)0x0);
      pTVar1 = (this->fields).arcInstance;
      if (pTVar1 != (TrailArc *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pTVar1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                           ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar2,*pVVar3,(MethodInfo *)0x0);
          pTVar1 = (this->fields).arcInstance;
          if (pTVar1 != (TrailArc *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pTVar1,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?();
            }
            pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                               ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
            if (pTVar2 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        (pTVar2,*pQVar4,(MethodInfo *)0x0);
              return;
            }
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

