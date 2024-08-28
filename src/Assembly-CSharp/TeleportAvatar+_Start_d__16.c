
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TeleportAvatar+<Start>d__16::TeleportAvatar_Start_d_16_MoveNext
               (TeleportAvatar_Start_d_16 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TeleportAvatar__ActionDelegate);
    func_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    func_?();
    func_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__TeleportAvatar__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                   );
    func_?(&MethodInfo__TeleportAvatar___Start_b__16_0_float_);
    func_?(&MethodInfo__TeleportAvatar___Start_b__16_1_float_);
    func_?(&StringLiteral_No_teleporter_defined_for_telepo);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 != (TeleportAvatar *)0x0) {
      if (((this_00->fields)._TeleporterOrigin_k__BackingField < 0) ||
         ((this_00->fields)._TeleporterDestination_k__BackingField < 0)) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_No_teleporter_defined_for_telepo,(MethodInfo *)0x0);
        return 0;
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pMVar3 = (this_00->fields).avatar;
      if ((pMVar3 != (MVAvatarLocal *)0x0) && (pMVar2 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                  (pMVar2,(this_00->fields)._TeleporterOrigin_k__BackingField,
                   (pMVar3->fields)._._._._.id,(MethodInfo *)0x0);
        pMVar3 = (this_00->fields).avatar;
        if (pMVar3 != (MVAvatarLocal *)0x0) {
          uVar4._0_4_ = (this_00->fields).originPosition.x;
          uVar4._4_4_ = (this_00->fields).originPosition.y;
          func_?(0x1a,pMVar3,uVar4);
          pMVar3 = (this_00->fields).avatar;
          if ((pMVar3 != (MVAvatarLocal *)0x0) &&
             (pPVar5 = MVAvatar::MVAvatar_get_CurrentPickup((MVAvatar *)pMVar3,(MethodInfo *)0x0),
             pPVar5 != (PickupItem *)0x0)) {
            (pPVar5->fields)._AbleToFire_k__BackingField = 0;
            pMVar3 = (this_00->fields).avatar;
            if ((pMVar3 != (MVAvatarLocal *)0x0) &&
               (pGVar6 = (pMVar3->fields)._._._.gameObject, pGVar6 != (GameObject *)0x0)) {
              pMVar7 = (MVRigidBody *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponent_1
                                  (pGVar6,
                                   MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                                  );
              ppMVar8 = &(this->fields)._rigidBody_5__2;
              *ppMVar8 = pMVar7;
              func_?(ppMVar8,pMVar7);
              pMVar7 = *ppMVar8;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                 ((Object_1 *)pMVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar9 != 0) {
                if (*ppMVar8 == (MVRigidBody *)0x0) goto code_?;
                func_?();
                if (*ppMVar8 == (MVRigidBody *)0x0) goto code_?;
                func_?(9,*ppMVar8);
              }
              pSVar10 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                  ((MethodInfo *)0x0);
              if (pSVar10 != (SpawnRoleDataMediator *)0x0) {
                pSVar11 = (pSVar10->fields).SpawnRoleModeTypeWrapper;
                pUVar12 = (UnityAction_1_System_Int32Enum_ *)
                          func_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
                UnityAction_1_System_Int32Enum___ctor
                          (pUVar12,(Object *)this_00,
                           MethodInfo__TeleportAvatar__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                           ,(MethodInfo *)0x0);
                if (pSVar11 != (SpawnRoleModeTypeWrapper *)0x0) {
                  SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                            (pSVar11,(Action_1_MV_Common_SpawnRoleModeType_ *)pUVar12,
                             (MethodInfo *)0x0);
                  fVar13 = (this_00->fields).teleportTime;
                  pTVar14 = (TeleportAvatar_ActionDelegate *)
                            func_?(TypeInfo__TeleportAvatar__ActionDelegate);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
                  UnityAction_1_System_Single___ctor
                            ((UnityAction_1_System_Single_ *)pTVar14,(Object *)this_00,
                             MethodInfo__TeleportAvatar___Start_b__16_0_float_,(MethodInfo *)0x0);
                  pIVar15 = TeleportAvatar::TeleportAvatar_DoForSeconds
                                      (this_00,fVar13,pTVar14,(MethodInfo *)0x0);
                  pCVar16 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                            MonoBehaviour_StartCoroutine_Auto
                                      ((MonoBehaviour *)this_00,pIVar15,(MethodInfo *)0x0);
                  (this->fields).__2__current = (Object *)pCVar16;
                  func_?();
                  (this->fields).__1__state = 1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    goto code_?;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if (this_00 == (TeleportAvatar *)0x0) goto code_?;
    pMVar3 = (this_00->fields).avatar;
    if ((this_00->fields).shouldCancelTeleportation == 0) {
      if (pMVar3 != (MVAvatarLocal *)0x0) {
        uVar17._0_4_ = (this_00->fields).targetPosition.x;
        uVar17._4_4_ = (this_00->fields).targetPosition.y;
        (*(code *)(pMVar3->klass->vtable).set_WorldPosition.method)
                  (pMVar3,uVar17,(this_00->fields).targetPosition.z,
                   (pMVar3->klass->vtable).get_WorldRotation_1.methodPtr);
        pMVar3 = (this_00->fields).avatar;
        if (pMVar3 != (MVAvatarLocal *)0x0) {
          uVar18._0_4_ = (this_00->fields).targetPosition.x;
          uVar18._4_4_ = (this_00->fields).targetPosition.y;
          (*(code *)(pMVar3->klass->vtable).set_SyncPos.method)
                    (pMVar3,uVar18,(this_00->fields).targetPosition.z,
                     (pMVar3->klass->vtable).get_SyncRot.methodPtr);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (this_01 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (this_01,(this_00->fields).targetPosition,(MethodInfo *)0x0);
            pMVar7 = (this->fields)._rigidBody_5__2;
            if (pMVar7 != (MVRigidBody *)0x0) {
              (*(code *)(pMVar7->klass->vtable).Reset.method)
                        (pMVar7,(pMVar7->klass->vtable).__unknown_4.methodPtr);
              fVar13 = (this_00->fields).teleportTime;
              pTVar14 = (TeleportAvatar_ActionDelegate *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
              UnityAction_1_System_Single___ctor
                        ((UnityAction_1_System_Single_ *)pTVar14,(Object *)this_00,
                         MethodInfo__TeleportAvatar___Start_b__16_1_float_,(MethodInfo *)0x0);
              pIVar15 = TeleportAvatar::TeleportAvatar_DoForSeconds
                                  (this_00,fVar13,pTVar14,(MethodInfo *)0x0);
              pCVar16 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                        MonoBehaviour_StartCoroutine_Auto
                                  ((MonoBehaviour *)this_00,pIVar15,(MethodInfo *)0x0);
              ppOVar19 = &(this->fields).__2__current;
              *ppOVar19 = (Object *)pCVar16;
              func_?(ppOVar19,pCVar16);
              (this->fields).__1__state = 2;
              return 1;
            }
          }
        }
      }
      goto code_?;
    }
    if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
    MVAvatar::MVAvatar_set_SetTransparency((MVAvatar *)pMVar3,1.0,(MethodInfo *)0x0);
    pMVar7 = (this->fields)._rigidBody_5__2;
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
    pMVar7 = (this->fields)._rigidBody_5__2;
    if (this_00 == (TeleportAvatar *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)pMVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar9 != 0) {
    if (pMVar7 == (MVRigidBody *)0x0) goto code_?;
    (*(code *)(pMVar7->klass->vtable).__unknown_3.method)();
  }
  pMVar3 = (this_00->fields).avatar;
  if ((pMVar3 != (MVAvatarLocal *)0x0) &&
     (pPVar5 = MVAvatar::MVAvatar_get_CurrentPickup((MVAvatar *)pMVar3,(MethodInfo *)0x0),
     pPVar5 != (PickupItem *)0x0)) {
    (pPVar5->fields)._AbleToFire_k__BackingField = 1;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pMVar3 = (this_00->fields).avatar;
    if ((pMVar3 != (MVAvatarLocal *)0x0) && (pMVar2 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxExit
                (pMVar2,(this_00->fields)._TeleporterOrigin_k__BackingField,
                 (pMVar3->fields)._._._._.id,(MethodInfo *)0x0);
      pSVar10 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (pSVar10 != (SpawnRoleDataMediator *)0x0) {
        pSVar11 = (pSVar10->fields).SpawnRoleModeTypeWrapper;
        pUVar12 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (pUVar12,(Object *)this_00,
                   MethodInfo__TeleportAvatar__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_,
                   (MethodInfo *)0x0);
        if (pSVar11 != (SpawnRoleModeTypeWrapper *)0x0) {
          SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
                    (pSVar11,(Action_1_MV_Common_SpawnRoleModeType_ *)pUVar12,(MethodInfo *)0x0);
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar6,(MethodInfo *)0x0);
          return 0;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  bVar9 = (*pcVar20)();
  return bVar9;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::TeleportAvatar+<Start>d__16::
     TeleportAvatar_Start_d_16_System_Collections_IEnumerator_Reset
               (TeleportAvatar_Start_d_16 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__TeleportAvatar___Start_d__16__System_Collections_IEnumerator_Reset__)
  ;
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

