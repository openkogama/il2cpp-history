
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TeleportAvatar+<Start>d__8::TeleportAvatar_Start_d_8_MoveNext
               (TeleportAvatar_Start_d_8 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TeleportAvatar__ActionDelegate);
    func_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    func_?();
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__TeleportAvatar__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                   );
    func_?(&MethodInfo__TeleportAvatar___Start_b__8_0_float_);
    func_?(&MethodInfo__TeleportAvatar___Start_b__8_1_float_);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((this_00 != (TeleportAvatar *)0x0) &&
       (pMVar2 = (this_00->fields).avatar, pMVar2 != (MVAvatarLocal *)0x0)) {
      uVar3._0_4_ = (this_00->fields).originPosition.x;
      uVar3._4_4_ = (this_00->fields).originPosition.y;
      (*(pMVar2->klass->vtable).set_WorldPosition.methodPtr)
                (pMVar2,uVar3,(this_00->fields).originPosition.z,
                 (pMVar2->klass->vtable).set_WorldPosition.method);
      pMVar2 = (this_00->fields).avatar;
      if ((pMVar2 != (MVAvatarLocal *)0x0) &&
         (pGVar4 = (pMVar2->fields)._._._.gameObject, pGVar4 != (GameObject *)0x0)) {
        pMVar5 = (MVRigidBody *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            (pGVar4,
                             MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                            );
        (this->fields)._rigidBody_5__2 = pMVar5;
        func_?(&(this->fields)._rigidBody_5__2,pMVar5);
        pMVar5 = (this->fields)._rigidBody_5__2;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pMVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          pMVar5 = (this->fields)._rigidBody_5__2;
          if (pMVar5 == (MVRigidBody *)0x0) goto code_?;
          (*(pMVar5->klass->vtable).__unknown_3.methodPtr)();
          pMVar5 = (this->fields)._rigidBody_5__2;
          if (pMVar5 == (MVRigidBody *)0x0) goto code_?;
          (*(pMVar5->klass->vtable).Reset.methodPtr)(pMVar5,(pMVar5->klass->vtable).Reset.method)
          ;
        }
        pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if (pSVar7 != (SpawnRoleDataMediator *)0x0) {
          pSVar8 = (pSVar7->fields).SpawnRoleModeTypeWrapper;
          pUVar9 = (UnityAction_1_System_Int32Enum_ *)
                    func_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
          if ((pUVar9 != (UnityAction_1_System_Int32Enum_ *)0x0) &&
             (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
              UnityAction_1_System_Int32Enum___ctor
                        (pUVar9,(Object *)this_00,
                         MethodInfo__TeleportAvatar__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                         ,(MethodInfo *)0x0), pSVar8 != (SpawnRoleModeTypeWrapper *)0x0)) {
            SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                      (pSVar8,(Action_1_MV_Common_SpawnRoleModeType_ *)pUVar9,(MethodInfo *)0x0);
            fVar10 = (this_00->fields).teleportTime;
            pTVar11 = (TeleportAvatar_ActionDelegate *)
                      func_?(TypeInfo__TeleportAvatar__ActionDelegate);
            if (pTVar11 != (TeleportAvatar_ActionDelegate *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
              UnityAction_1_System_Single___ctor
                        ((UnityAction_1_System_Single_ *)pTVar11,(Object *)this_00,
                         MethodInfo__TeleportAvatar___Start_b__8_0_float_,(MethodInfo *)0x0);
              pIVar12 = TeleportAvatar::TeleportAvatar_DoForSeconds
                                  (this_00,fVar10,pTVar11,(MethodInfo *)0x0);
              pCVar13 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                        MonoBehaviour_StartCoroutine_Auto
                                  ((MonoBehaviour *)this_00,pIVar12,(MethodInfo *)0x0);
              (this->fields).__2__current = (Object *)pCVar13;
              func_?(&(this->fields).__2__current,pCVar13);
              (this->fields).__1__state = 1;
              return 1;
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
    pMVar2 = (this_00->fields).avatar;
    if ((this_00->fields).shouldCancelTeleportation == 0) {
      if (pMVar2 != (MVAvatarLocal *)0x0) {
        uVar14._0_4_ = (this_00->fields).targetPosition.x;
        uVar14._4_4_ = (this_00->fields).targetPosition.y;
        (*(pMVar2->klass->vtable).set_WorldPosition.methodPtr)
                  (pMVar2,uVar14,(this_00->fields).targetPosition.z,
                   (pMVar2->klass->vtable).set_WorldPosition.method);
        pMVar2 = (this_00->fields).avatar;
        if (pMVar2 != (MVAvatarLocal *)0x0) {
          uVar15._0_4_ = (this_00->fields).targetPosition.x;
          uVar15._4_4_ = (this_00->fields).targetPosition.y;
          (*(pMVar2->klass->vtable).set_SyncPos.methodPtr)
                    (pMVar2,uVar15,(this_00->fields).targetPosition.z,
                     (pMVar2->klass->vtable).set_SyncPos.method);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (this_01 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (this_01,(this_00->fields).targetPosition,(MethodInfo *)0x0);
            pMVar5 = (this->fields)._rigidBody_5__2;
            if (pMVar5 != (MVRigidBody *)0x0) {
              (*(pMVar5->klass->vtable).Reset.methodPtr)
                        (pMVar5,(pMVar5->klass->vtable).Reset.method);
              fVar10 = (this_00->fields).teleportTime;
              pTVar11 = (TeleportAvatar_ActionDelegate *)func_?();
              if (pTVar11 != (TeleportAvatar_ActionDelegate *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
                UnityAction_1_System_Single___ctor
                          ((UnityAction_1_System_Single_ *)pTVar11,(Object *)this_00,
                           MethodInfo__TeleportAvatar___Start_b__8_1_float_,(MethodInfo *)0x0);
                pIVar12 = TeleportAvatar::TeleportAvatar_DoForSeconds
                                    (this_00,fVar10,pTVar11,(MethodInfo *)0x0);
                pCVar13 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                          MonoBehaviour_StartCoroutine_Auto
                                    ((MonoBehaviour *)this_00,pIVar12,(MethodInfo *)0x0);
                (this->fields).__2__current = (Object *)pCVar13;
                func_?(&(this->fields).__2__current,pCVar13);
                (this->fields).__1__state = 2;
                return 1;
              }
            }
          }
        }
      }
      goto code_?;
    }
    if (pMVar2 == (MVAvatarLocal *)0x0) goto code_?;
    MVAvatar::MVAvatar_set_SetTransparency((MVAvatar *)pMVar2,1.0,(MethodInfo *)0x0);
    pMVar5 = (this->fields)._rigidBody_5__2;
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
    pMVar5 = (this->fields)._rigidBody_5__2;
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
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pMVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar6 != 0) {
    if (pMVar5 == (MVRigidBody *)0x0) goto code_?;
    (*(pMVar5->klass->vtable).__unknown_3.methodPtr)();
  }
  pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if (pSVar7 != (SpawnRoleDataMediator *)0x0) {
    pSVar8 = (pSVar7->fields).SpawnRoleModeTypeWrapper;
    pUVar9 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    if ((pUVar9 != (UnityAction_1_System_Int32Enum_ *)0x0) &&
       (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (pUVar9,(Object *)this_00,
                   MethodInfo__TeleportAvatar__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_,
                   (MethodInfo *)0x0), pSVar8 != (SpawnRoleModeTypeWrapper *)0x0)) {
      SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
                (pSVar8,(Action_1_MV_Common_SpawnRoleModeType_ *)pUVar9,(MethodInfo *)0x0);
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar4,(MethodInfo *)0x0);
      return 0;
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  bVar6 = (*pcVar16)();
  return bVar6;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::TeleportAvatar+<Start>d__8::
     TeleportAvatar_Start_d_8_System_Collections_IEnumerator_Reset
               (TeleportAvatar_Start_d_8 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__TeleportAvatar___Start_d__8__System_Collections_IEnumerator_Reset__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

