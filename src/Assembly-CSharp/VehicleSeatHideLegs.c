
/* Void Attach(MVAvatar) */

void Assembly-CSharp.dll::VehicleSeatHideLegs::VehicleSeatHideLegs_Attach
               (VehicleSeatHideLegs *this,MVAvatar *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_LLowLeg);
    func_?(&StringLiteral_RLowLeg);
    cRam_? = '\x01';
  }
  VehicleSeatBase::VehicleSeatBase_Attach((VehicleSeatBase *)this,avatar,(MethodInfo *)0x0);
  if ((avatar != (MVAvatar *)0x0) && (pMVar1 = (avatar->fields).body, pMVar1 != (MVBody *)0x0)) {
    pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pBVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pMVar1 = (avatar->fields).body;
    if ((pMVar1 != (MVBody *)0x0) &&
       (pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0), pBVar2 != (BodyData *)0x0))
    {
      pTVar4 = BodyData::BodyData_GetPartBone_1(pBVar2,StringLiteral_RLowLeg,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar1 = (avatar->fields).body;
        if (((pMVar1 == (MVBody *)0x0) ||
            (pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0),
            pBVar2 == (BodyData *)0x0)) ||
           (pTVar4 = BodyData::BodyData_GetPartBone_1
                                (pBVar2,StringLiteral_RLowLeg,(MethodInfo *)0x0),
           pTVar4 == (Transform *)0x0)) goto code_?;
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pTVar4,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar6 = (pVVar5->oneVector).x;
        uVar7 = (pVVar5->oneVector).y;
        if (pTVar4 == (Transform *)0x0) goto code_?;
        value.y = (float)uVar7 * _UNK_?;
        value.x = (float)uVar6 * _UNK_?;
        value.z = (pVVar5->oneVector).z * _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar4,value,(MethodInfo *)0x0);
      }
      pMVar1 = (avatar->fields).body;
      if ((pMVar1 != (MVBody *)0x0) &&
         (pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0), pBVar2 != (BodyData *)0x0)
         ) {
        pTVar4 = BodyData::BodyData_GetPartBone_1(pBVar2,StringLiteral_LLowLeg,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          return;
        }
        pMVar1 = (avatar->fields).body;
        if (((pMVar1 != (MVBody *)0x0) &&
            (pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0),
            pBVar2 != (BodyData *)0x0)) &&
           (pTVar4 = BodyData::BodyData_GetPartBone_1
                                (pBVar2,StringLiteral_LLowLeg,(MethodInfo *)0x0),
           pTVar4 != (Transform *)0x0)) {
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pTVar4,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar8 = (pVVar5->oneVector).x;
          uVar9 = (pVVar5->oneVector).y;
          if (pTVar4 != (Transform *)0x0) {
            value_00.y = (float)uVar9 * _UNK_?;
            value_00.x = (float)uVar8 * _UNK_?;
            value_00.z = (pVVar5->oneVector).z * _UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar4,value_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Detach(MVAvatar) */

void Assembly-CSharp.dll::VehicleSeatHideLegs::VehicleSeatHideLegs_Detach
               (VehicleSeatHideLegs *this,MVAvatar *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_LLowLeg);
    func_?(&StringLiteral_RLowLeg);
    cRam_? = '\x01';
  }
  VehicleSeatBase::VehicleSeatBase_Detach((VehicleSeatBase *)this,avatar,(MethodInfo *)0x0);
  if ((avatar != (MVAvatar *)0x0) && (pMVar1 = (avatar->fields).body, pMVar1 != (MVBody *)0x0)) {
    pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pBVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return;
    }
    pMVar1 = (avatar->fields).body;
    if ((pMVar1 != (MVBody *)0x0) &&
       (pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0), pBVar2 != (BodyData *)0x0))
    {
      pTVar4 = BodyData::BodyData_GetPartBone_1(pBVar2,StringLiteral_RLowLeg,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar1 = (avatar->fields).body;
        if (((pMVar1 == (MVBody *)0x0) ||
            (pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0),
            pBVar2 == (BodyData *)0x0)) ||
           (pTVar4 = BodyData::BodyData_GetPartBone_1
                               (pBVar2,StringLiteral_RLowLeg,(MethodInfo *)0x0),
           pTVar4 == (Transform *)0x0)) goto code_?;
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar4,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (pTVar4 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar4,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0
                  );
      }
      pMVar1 = (avatar->fields).body;
      if ((pMVar1 != (MVBody *)0x0) &&
         (pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0), pBVar2 != (BodyData *)0x0)
         ) {
        pTVar4 = BodyData::BodyData_GetPartBone_1(pBVar2,StringLiteral_LLowLeg,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          return;
        }
        pMVar1 = (avatar->fields).body;
        if (((pMVar1 != (MVBody *)0x0) &&
            (pBVar2 = MVBody::MVBody_get_BodyData(pMVar1,(MethodInfo *)0x0),
            pBVar2 != (BodyData *)0x0)) &&
           (pTVar4 = BodyData::BodyData_GetPartBone_1
                               (pBVar2,StringLiteral_LLowLeg,(MethodInfo *)0x0),
           pTVar4 != (Transform *)0x0)) {
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar4,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pTVar4 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar4,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

