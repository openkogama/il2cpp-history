
/* Void Attach(MVAvatar) */

void Assembly-CSharp.dll::VehicleSeatHideLegs::VehicleSeatHideLegs_Attach
               (VehicleSeatHideLegs *this,MVAvatar *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  VehicleSeatBase::VehicleSeatBase_Attach((VehicleSeatBase *)this,avatar,(MethodInfo *)0x0);
  if ((avatar != (MVAvatar *)0x0) &&
     (pMVar1 = MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0), pMVar1 != (MVBody *)0x0)) {
    pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pBVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pMVar1 = MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0);
    if ((pMVar1 != (MVBody *)0x0) &&
       (pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0), pBVar2 != (BodyData *)0x0))
    {
      pTVar4 = BodyData::BodyData_GetPartBone_1(pBVar2,StringLiteral_RLowLeg,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar1 = MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0);
        if (((pMVar1 == (MVBody *)0x0) ||
            (pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0),
            pBVar2 == (BodyData *)0x0)) ||
           (pTVar4 = BodyData::BodyData_GetPartBone_1
                               (pBVar2,StringLiteral_RLowLeg,(MethodInfo *)0x0),
           pTVar4 == (Transform *)0x0)) goto code_?;
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pTVar4,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                           ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&stack0xfffffff0,*pVVar5,0.001,(MethodInfo *)0x0);
        if (pTVar4 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar4,*pVVar5,(MethodInfo *)0x0);
      }
      pMVar1 = MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0);
      if ((pMVar1 != (MVBody *)0x0) &&
         (pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0), pBVar2 != (BodyData *)0x0)
         ) {
        pTVar4 = BodyData::BodyData_GetPartBone_1(pBVar2,StringLiteral_LLowLeg,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          return;
        }
        pMVar1 = MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0);
        if (((pMVar1 != (MVBody *)0x0) &&
            (pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0),
            pBVar2 != (BodyData *)0x0)) &&
           (pTVar4 = BodyData::BodyData_GetPartBone_1
                               (pBVar2,StringLiteral_LLowLeg,(MethodInfo *)0x0),
           pTVar4 != (Transform *)0x0)) {
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pTVar4,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                             ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             ((Vector3 *)&stack0xfffffff0,*pVVar5,0.001,(MethodInfo *)0x0);
          if (pTVar4 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar4,*pVVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Detach(MVAvatar) */

void Assembly-CSharp.dll::VehicleSeatHideLegs::VehicleSeatHideLegs_Detach
               (VehicleSeatHideLegs *this,MVAvatar *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  VehicleSeatBase::VehicleSeatBase_Detach((VehicleSeatBase *)this,avatar,(MethodInfo *)0x0);
  if ((avatar != (MVAvatar *)0x0) &&
     (pMVar1 = MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0), pMVar1 != (MVBody *)0x0)) {
    pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pBVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pMVar1 = MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0);
    if ((pMVar1 != (MVBody *)0x0) &&
       (pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0), pBVar2 != (BodyData *)0x0))
    {
      pTVar4 = BodyData::BodyData_GetPartBone_1(pBVar2,StringLiteral_RLowLeg,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar1 = MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0);
        if (((pMVar1 == (MVBody *)0x0) ||
            (pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0),
            pBVar2 == (BodyData *)0x0)) ||
           (pTVar4 = BodyData::BodyData_GetPartBone_1
                               (pBVar2,StringLiteral_RLowLeg,(MethodInfo *)0x0),
           pTVar4 == (Transform *)0x0)) goto code_?;
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pTVar4,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                           ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
        if (pTVar4 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar4,*pVVar5,(MethodInfo *)0x0);
      }
      pMVar1 = MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0);
      if ((pMVar1 != (MVBody *)0x0) &&
         (pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0), pBVar2 != (BodyData *)0x0)
         ) {
        pTVar4 = BodyData::BodyData_GetPartBone_1(pBVar2,StringLiteral_LLowLeg,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          return;
        }
        pMVar1 = MVAvatar::MVAvatar_get_Body(avatar,(MethodInfo *)0x0);
        if (((pMVar1 != (MVBody *)0x0) &&
            (pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0),
            pBVar2 != (BodyData *)0x0)) &&
           (pTVar4 = BodyData::BodyData_GetPartBone_1
                               (pBVar2,StringLiteral_LLowLeg,(MethodInfo *)0x0),
           pTVar4 != (Transform *)0x0)) {
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pTVar4,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                             ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
          if (pTVar4 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar4,*pVVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* VehicleSeatHideLegs() */

void Assembly-CSharp.dll::VehicleSeatHideLegs::VehicleSeatHideLegs__ctor
               (VehicleSeatHideLegs *this,MethodInfo *method)

{
  (this->fields)._.seatID = -1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

