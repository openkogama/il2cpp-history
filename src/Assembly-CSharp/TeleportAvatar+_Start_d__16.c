
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TeleportAvatar+<Start>d__16::TeleportAvatar_Start_d_16_MoveNext
               (TeleportAvatar_Start_d_16 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TeleportAvatar__ActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TeleportAvatar__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TeleportAvatar___Start_b__16_0_float_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TeleportAvatar___Start_b__16_1_float_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_teleporter_defined_for_telepo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 != (TeleportAvatar *)0x0) {
      if (((this_00->fields)._TeleporterOrigin_k__BackingField < 0) ||
         ((this_00->fields)._TeleporterDestination_k__BackingField < 0)) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_No_teleporter_defined_for_telepo,(MethodInfo *)0x0);
        return 0;
      }
      this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pMVar2 = (this_00->fields).avatar;
      if ((pMVar2 != (MVAvatarLocal *)0x0) && (this_04 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                  (this_04,(this_00->fields)._TeleporterOrigin_k__BackingField,
                   (pMVar2->fields)._._._._.id,(MethodInfo *)0x0);
        pMVar2 = (this_00->fields).avatar;
        if (pMVar2 != (MVAvatarLocal *)0x0) {
          fStack_3 = (this_00->fields).originPosition.z;
          uStack_4._0_4_ = (this_00->fields).originPosition.x;
          uStack_4._4_4_ = (this_00->fields).originPosition.y;
          (*(pMVar2->klass->vtable).set_WorldPosition.methodPtr)
                    (pMVar2,&uStack_4,(pMVar2->klass->vtable).set_WorldPosition.method);
          pMVar2 = (this_00->fields).avatar;
          if (((pMVar2 != (MVAvatarLocal *)0x0) &&
              (pAVar5 = (pMVar2->fields)._.avatarPickupOwner, pAVar5 != (AvatarPickupOwner *)0x0))
             && (pPVar6 = (pAVar5->fields)._.currentItem, pPVar6 != (PickupItem *)0x0)) {
            (pPVar6->fields)._AbleToFire_k__BackingField = 0;
            pMVar2 = (this_00->fields).avatar;
            if ((pMVar2 != (MVAvatarLocal *)0x0) &&
               (this_02 = (pMVar2->fields)._._._.gameObject, this_02 != (GameObject *)0x0)) {
              pMVar7 = MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
              ;
              pMVar8 = (MVRigidBody *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_GetComponent_1
                                  (this_02,
                                   MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                                  );
              (this->fields)._rigidBody_5__2 = pMVar8;
              func_?(&(this->fields)._rigidBody_5__2);
              pMVar8 = (this->fields)._rigidBody_5__2;
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?();
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pMVar8 != (MVRigidBody *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if ((pMVar8->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                  pMVar8 = (this->fields)._rigidBody_5__2;
                  if (pMVar8 == (MVRigidBody *)0x0) goto code_?;
                  (*(pMVar8->klass->vtable).__unknown_3.methodPtr)
                            (pMVar8,CONCAT71((int7)((ulonglong)pMVar7 >> 8),1),
                             (pMVar8->klass->vtable).__unknown_3.method);
                  pMVar8 = (this->fields)._rigidBody_5__2;
                  if (pMVar8 == (MVRigidBody *)0x0) goto code_?;
                  (*(pMVar8->klass->vtable).Reset.methodPtr)
                            (pMVar8,(pMVar8->klass->vtable).Reset.method);
                }
              }
              pSVar9 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                  ((MethodInfo *)0x0);
              if (pSVar9 != (SpawnRoleDataMediator *)0x0) {
                this_03 = (pSVar9->fields).SpawnRoleModeTypeWrapper;
                this_05 = (UnityAction_1_System_Int32Enum_ *)
                          FUN_?(TypeInfo__System__Action<MV::Common::SpawnRoleModeType>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
                UnityAction_1_System_Int32Enum___ctor
                          (this_05,(Object *)this_00,
                           MethodInfo__TeleportAvatar__OnAvatarStateChanged_MV__Common__SpawnRoleModeType_
                           ,(MethodInfo *)0x0);
                if (this_03 != (SpawnRoleModeTypeWrapper *)0x0) {
                  SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_add_OnChange
                            (this_03,(Action_1_MV_Common_SpawnRoleModeType_ *)this_05,
                             (MethodInfo *)0x0);
                  fVar10 = (this_00->fields).teleportTime;
                  pTVar11 = (TeleportAvatar_ActionDelegate *)
                            FUN_?(TypeInfo__TeleportAvatar__ActionDelegate);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
                  UnityAction_1_System_Single___ctor
                            ((UnityAction_1_System_Single_ *)pTVar11,(Object *)this_00,
                             MethodInfo__TeleportAvatar___Start_b__16_0_float_,(MethodInfo *)0x0);
                  pIVar12 = TeleportAvatar::TeleportAvatar_DoForSeconds
                                      (this_00,fVar10,pTVar11,(MethodInfo *)0x0);
                  pCVar13 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                            MonoBehaviour_StartCoroutine_2
                                      ((MonoBehaviour *)this_00,pIVar12,(MethodInfo *)0x0);
                  (this->fields).__2__current = (Object *)pCVar13;
                  func_?(&(this->fields).__2__current);
                  (this->fields).__1__state = 1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  else if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if (this_00 != (TeleportAvatar *)0x0) {
      pMVar2 = (this_00->fields).avatar;
      if ((this_00->fields).shouldCancelTeleportation == 0) {
        if (pMVar2 != (MVAvatarLocal *)0x0) {
          fStack_14 = (this_00->fields).targetPosition.z;
          uStack_15._0_4_ = (this_00->fields).targetPosition.x;
          uStack_15._4_4_ = (this_00->fields).targetPosition.y;
          (*(pMVar2->klass->vtable).set_WorldPosition.methodPtr)
                    (pMVar2,&uStack_15,(pMVar2->klass->vtable).set_WorldPosition.method);
          pMVar2 = (this_00->fields).avatar;
          if (pMVar2 != (MVAvatarLocal *)0x0) {
            fStack_14 = (this_00->fields).targetPosition.z;
            uStack_15._0_4_ = (this_00->fields).targetPosition.x;
            uStack_15._4_4_ = (this_00->fields).targetPosition.y;
            (*(pMVar2->klass->vtable).set_SyncPos.methodPtr)
                      (pMVar2,&uStack_15,(pMVar2->klass->vtable).set_SyncPos.method);
            obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
            if (obj != (Transform *)0x0) {
              uStack_4._0_4_ = (this_00->fields).targetPosition.x;
              uStack_4._4_4_ = (this_00->fields).targetPosition.y;
              fStack_3 = (this_00->fields).targetPosition.z;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar16 = (obj->fields)._._.m_CachedPtr;
              if (pvVar16 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar17 = (code *)swi(3);
                bVar18 = (*pcVar17)();
                return bVar18;
              }
              pcVar17 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar17 = (code *)swi(3);
                bVar18 = (*pcVar17)();
                return bVar18;
              }
              pcRam_? = pcVar17;
              (*pcRam_?)(pvVar16,&uStack_4);
              pMVar8 = (this->fields)._rigidBody_5__2;
              if (pMVar8 != (MVRigidBody *)0x0) {
                (*(pMVar8->klass->vtable).Reset.methodPtr)
                          (pMVar8,(pMVar8->klass->vtable).Reset.method);
                fVar10 = (this_00->fields).teleportTime;
                pTVar11 = (TeleportAvatar_ActionDelegate *)
                          FUN_?(TypeInfo__TeleportAvatar__ActionDelegate);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
                UnityAction_1_System_Single___ctor
                          ((UnityAction_1_System_Single_ *)pTVar11,(Object *)this_00,
                           MethodInfo__TeleportAvatar___Start_b__16_1_float_,(MethodInfo *)0x0);
                pIVar12 = TeleportAvatar::TeleportAvatar_DoForSeconds
                                    (this_00,fVar10,pTVar11,(MethodInfo *)0x0);
                pCVar13 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                          MonoBehaviour_StartCoroutine_2
                                    ((MonoBehaviour *)this_00,pIVar12,(MethodInfo *)0x0);
                (this->fields).__2__current = (Object *)pCVar13;
                func_?(&(this->fields).__2__current);
                (this->fields).__1__state = 2;
                return 1;
              }
            }
          }
        }
        FUN_?();
        pcVar17 = (code *)swi(3);
        bVar18 = (*pcVar17)();
        return bVar18;
      }
      if (pMVar2 != (MVAvatarLocal *)0x0) {
        if ((pMVar2->fields)._.isHidden == 0) {
          pAVar20 = (pMVar2->fields)._.avatar;
          if ((pAVar20 == (Avatar *)0x0) ||
             (this_01 = (pAVar20->fields).avatarFader, this_01 == (AvatarFader *)0x0))
          goto code_?;
          AvatarFader::AvatarFader_SetTransparency(this_01,_UNK_?,(MethodInfo *)0x0);
        }
code_?:
        TeleportAvatar::TeleportAvatar_EndTeleportation
                  (this_00,(this->fields)._rigidBody_5__2,(MethodInfo *)0x0);
        return 0;
      }
    }
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (this_00 != (TeleportAvatar *)0x0) goto code_?;
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  bVar18 = (*pcVar17)();
  return bVar18;
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
  uVar1 = func_?(&
                              MethodInfo__TeleportAvatar___Start_d__16__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

