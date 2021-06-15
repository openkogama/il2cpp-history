
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TeleportAvatar+<Start>c__Iterator1::
     TeleportAvatar_Start_c_Iterator1_MoveNext
               (TeleportAvatar_Start_c_Iterator1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    pTVar2 = (this->fields)._this;
    if ((pTVar2 != (TeleportAvatar *)0x0) &&
       (pMVar3 = (pTVar2->fields).avatar, pMVar3 != (MVAvatarLocal *)0x0)) {
      uVar4._0_4_ = (pTVar2->fields).originPosition.x;
      uVar4._4_4_ = (pTVar2->fields).originPosition.y;
      (*(code *)(pMVar3->klass->vtable).set_WorldPosition.method)
                (pMVar3,uVar4,(pTVar2->fields).originPosition.z,
                 (pMVar3->klass->vtable).get_WorldRotation_1.methodPtr);
      pTVar2 = (this->fields)._this;
      if ((pTVar2 != (TeleportAvatar *)0x0) &&
         ((pMVar3 = (pTVar2->fields).avatar, pMVar3 != (MVAvatarLocal *)0x0 &&
          (this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                               ((DayNightCycle *)pMVar3,(MethodInfo *)0x0),
          this_01 != (CelestialParam *)0x0)))) {
        pMVar5 = (MVRigidBody *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                            ((GameObject *)this_01,
                             MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                            );
        (this->fields)._rigidBody___0 = pMVar5;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                           ((Object_1 *)pMVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          pMVar5 = (this->fields)._rigidBody___0;
          if (pMVar5 == (MVRigidBody *)0x0) goto code_?;
          (*(code *)(pMVar5->klass->vtable).__unknown_3.method)();
          pMVar5 = (this->fields)._rigidBody___0;
          if (pMVar5 == (MVRigidBody *)0x0) goto code_?;
          (*(code *)(pMVar5->klass->vtable).Reset.method)
                    (pMVar5,(pMVar5->klass->vtable).__unknown_4.methodPtr);
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                            ((MethodInfo *)0x0);
        if (pSVar7 != (SpawnRoleDataMediator *)0x0) {
          pSVar8 = (pSVar7->fields).SpawnRoleModeTypeWrapper;
          pTVar2 = (this->fields)._this;
          pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar9,(Object *)pTVar2,
                     MethodInfo__TeleportAvatar__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                     ,
                     MethodInfo__System__Action<MV::Common::SpawnRoleModeType>__Action_System__Object__void__
                    );
          if (pSVar8 != (SpawnRoleModeTypeWrapper *)0x0) {
            SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                      (pSVar8,(Action_1_MV_Common_SpawnRoleModeType_ *)pUVar9,(MethodInfo *)0x0);
            pTVar2 = (this->fields)._this;
            if (pTVar2 != (TeleportAvatar *)0x0) {
              fVar10 = (pTVar2->fields).teleportTime;
              pTVar11 = (TeleportAvatar_ActionDelegate *)
                        func_?(TypeInfo__TeleportAvatar__ActionDelegate);
              pMVar12 = MethodInfo__TeleportAvatar___Start_c__Iterator1____m__0_float_;
              (pTVar11->fields)._._.method_ptr =
                   MethodInfo__TeleportAvatar___Start_c__Iterator1____m__0_float_->methodPointer;
              (pTVar11->fields)._._.method = pMVar12;
              (pTVar11->fields)._._.m_target = (Object *)this;
              pIVar13 = TeleportAvatar::TeleportAvatar_DoForSeconds
                                  (pTVar2,fVar10,pTVar11,(MethodInfo *)0x0);
              pCVar14 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                        MonoBehaviour_StartCoroutine_Auto
                                  ((MonoBehaviour *)pTVar2,pIVar13,(MethodInfo *)0x0);
              (this->fields)._current = (Object *)pCVar14;
              if ((this->fields)._disposing != 0) {
                return 1;
              }
              (this->fields)._PC = 1;
              return 1;
            }
          }
        }
      }
    }
    goto code_?;
  }
  if (iVar1 == 1) {
    pTVar2 = (this->fields)._this;
    if (pTVar2 == (TeleportAvatar *)0x0) goto code_?;
    if ((pTVar2->fields).shouldCancelTeleportation == 0) {
      if ((pTVar2 != (TeleportAvatar *)0x0) &&
         (pMVar3 = (pTVar2->fields).avatar, pMVar3 != (MVAvatarLocal *)0x0)) {
        uVar15._0_4_ = (pTVar2->fields).targetPosition.x;
        uVar15._4_4_ = (pTVar2->fields).targetPosition.y;
        (*(code *)(pMVar3->klass->vtable).set_WorldPosition.method)
                  (pMVar3,uVar15,(pTVar2->fields).targetPosition.z,
                   (pMVar3->klass->vtable).get_WorldRotation_1.methodPtr);
        pTVar2 = (this->fields)._this;
        if ((pTVar2 != (TeleportAvatar *)0x0) &&
           (pMVar3 = (pTVar2->fields).avatar, pMVar3 != (MVAvatarLocal *)0x0)) {
          uVar16._0_4_ = (pTVar2->fields).targetPosition.x;
          uVar16._4_4_ = (pTVar2->fields).targetPosition.y;
          (*(code *)(pMVar3->klass->vtable).set_SyncPos.method)
                    (pMVar3,uVar16,(pTVar2->fields).targetPosition.z,
                     (pMVar3->klass->vtable).get_SyncRot.methodPtr);
          pTVar2 = (this->fields)._this;
          if (pTVar2 != (TeleportAvatar *)0x0) {
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pTVar2,(MethodInfo *)0x0);
            pTVar2 = (this->fields)._this;
            if ((pTVar2 != (TeleportAvatar *)0x0) && (this_00 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (this_00,(pTVar2->fields).targetPosition,(MethodInfo *)0x0);
              pMVar5 = (this->fields)._rigidBody___0;
              if (pMVar5 != (MVRigidBody *)0x0) {
                (*(code *)(pMVar5->klass->vtable).Reset.method)
                          (pMVar5,(pMVar5->klass->vtable).__unknown_4.methodPtr);
                pTVar2 = (this->fields)._this;
                if (pTVar2 != (TeleportAvatar *)0x0) {
                  fVar10 = (pTVar2->fields).teleportTime;
                  pTVar11 = (TeleportAvatar_ActionDelegate *)
                            func_?(TypeInfo__TeleportAvatar__ActionDelegate);
                  pMVar12 = MethodInfo__TeleportAvatar___Start_c__Iterator1____m__1_float_;
                  (pTVar11->fields)._._.method_ptr =
                       MethodInfo__TeleportAvatar___Start_c__Iterator1____m__1_float_->methodPointer
                  ;
                  (pTVar11->fields)._._.method = pMVar12;
                  (pTVar11->fields)._._.m_target = (Object *)this;
                  pIVar13 = TeleportAvatar::TeleportAvatar_DoForSeconds
                                      (pTVar2,fVar10,pTVar11,(MethodInfo *)0x0);
                  pCVar14 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                            MonoBehaviour_StartCoroutine_Auto
                                      ((MonoBehaviour *)pTVar2,pIVar13,(MethodInfo *)0x0);
                  (this->fields)._current = (Object *)pCVar14;
                  if ((this->fields)._disposing != 0) {
                    return 1;
                  }
                  (this->fields)._PC = 2;
                  return 1;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    if ((pTVar2 == (TeleportAvatar *)0x0) ||
       (pMVar3 = (pTVar2->fields).avatar, pMVar3 == (MVAvatarLocal *)0x0)) goto code_?;
    MVAvatar::MVAvatar_set_SetTransparency((MVAvatar *)pMVar3,1.0,(MethodInfo *)0x0);
  }
  else if (iVar1 != 2) {
    return 0;
  }
  pTVar2 = (this->fields)._this;
  pMVar5 = (this->fields)._rigidBody___0;
  if (pTVar2 != (TeleportAvatar *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)pMVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      if (pMVar5 == (MVRigidBody *)0x0) goto code_?;
      (*(code *)(pMVar5->klass->vtable).__unknown_3.method)();
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pSVar7 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (pSVar7 != (SpawnRoleDataMediator *)0x0) {
      pSVar8 = (pSVar7->fields).SpawnRoleModeTypeWrapper;
      pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar9,(Object *)pTVar2,
                 MethodInfo__TeleportAvatar__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_,
                 MethodInfo__System__Action<MV::Common::SpawnRoleModeType>__Action_System__Object__void__
                );
      if (pSVar8 != (SpawnRoleModeTypeWrapper *)0x0) {
        SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_remove_OnChange
                  (pSVar8,(Action_1_MV_Common_SpawnRoleModeType_ *)pUVar9,(MethodInfo *)0x0);
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)pTVar2,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
        (this->fields)._PC = -1;
        return 0;
      }
    }
  }
code_?:
  func_?(0);
  pcVar17 = (code *)swi(3);
  bVar6 = (*pcVar17)();
  return bVar6;
}


/* Void Reset() */

void Assembly-CSharp.dll::TeleportAvatar+<Start>c__Iterator1::TeleportAvatar_Start_c_Iterator1_Reset
               (TeleportAvatar_Start_c_Iterator1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <>m__0(Single) */

void Assembly-CSharp.dll::TeleportAvatar+<Start>c__Iterator1::
     TeleportAvatar_Start_c_Iterator1___m__0
               (TeleportAvatar_Start_c_Iterator1 *this,float t,MethodInfo *method)

{
  this_00 = (this->fields)._this;
  if (this_00 != (TeleportAvatar *)0x0) {
    this_01 = (this_00->fields).avatar;
    fVar1 = TeleportAvatar::TeleportAvatar_BlockStep(this_00,t,10.0,(MethodInfo *)0x0);
    if (this_01 != (MVAvatarLocal *)0x0) {
      MVAvatar::MVAvatar_set_SetTransparency
                ((MVAvatar *)this_01,_UNK_? - fVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <>m__1(Single) */

void Assembly-CSharp.dll::TeleportAvatar+<Start>c__Iterator1::
     TeleportAvatar_Start_c_Iterator1___m__1
               (TeleportAvatar_Start_c_Iterator1 *this,float t,MethodInfo *method)

{
  this_00 = (this->fields)._this;
  if (this_00 != (TeleportAvatar *)0x0) {
    this_01 = (this_00->fields).avatar;
    value = TeleportAvatar::TeleportAvatar_BlockStep(this_00,t,10.0,(MethodInfo *)0x0);
    if (this_01 != (MVAvatarLocal *)0x0) {
      MVAvatar::MVAvatar_set_SetTransparency((MVAvatar *)this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

