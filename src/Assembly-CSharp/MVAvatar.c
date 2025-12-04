
/* Void AddChild(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_AddChild
               (MVAvatar *this,MVWorldObjectClient *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVBody);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_AddChild((MVGroup *)this,child,(MethodInfo *)0x0);
  if ((this->fields).body != (MVBody *)0x0) {
    MVBody::MVBody_Detach((this->fields).body,(MethodInfo *)0x0);
  }
  if (child != (MVWorldObjectClient *)0x0) {
    bVar1 = (TypeInfo__MVBody->_1).naturalAligment;
    if (((bVar1 <= (child->klass->_1).naturalAligment) &&
        ((MVBody__Class *)(child->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] == TypeInfo__MVBody
        )) && (bVar2 = iRam_? != 0, (this->fields).body = (MVBody *)child, bVar2)) {
      uVar3 = (uint)((ulonglong)&(this->fields).body >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
  }
  return;
}


/* Void AttachBody(MVBody) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_AttachBody
               (MVAvatar *this,MVBody *newBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_newBody____null);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Created_avatar_fader);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).body != (MVBody *)0x0) {
    MVBody::MVBody_Detach((this->fields).body,(MethodInfo *)0x0);
  }
  if (newBody == (MVBody *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_newBody____null,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Created_avatar_fader,(MethodInfo *)0x0);
    fStack_1 = 0.0;
    lStack_2 = (ulonglong)_UNK_? << 0x20;
    (*(newBody->klass->vtable).set_Position.methodPtr)
              (newBody,&lStack_2,(newBody->klass->vtable).set_Position.method);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Quaternion);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
    lStack_2._0_4_ = (pQVar3->identityQuaternion).x;
    lStack_2._4_4_ = (pQVar3->identityQuaternion).y;
    fStack_1 = (pQVar3->identityQuaternion).z;
    fStack_4 = (pQVar3->identityQuaternion).w;
    (*(newBody->klass->vtable).set_Rotation.methodPtr)
              (newBody,&lStack_2,(newBody->klass->vtable).set_Rotation.method);
    MVBody::MVBody_Attach(newBody,this,(this->fields).isLocal,(MethodInfo *)0x0);
    bVar5 = iRam_? != 0;
    (this->fields).body = newBody;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).body >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
      return;
    }
  }
  return;
}


/* Void AvatarStateChangedHandler(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_AvatarStateChangedHandler
               (MVAvatar *this,Object *a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__SpawnRoleModeType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (a == (Object *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if ((a->klass->_0).element_class != (TypeInfo__MV__Common__SpawnRoleModeType->_0).element_class)
    goto code_?;
    if (((ulonglong)a[1].klass & 4) != 0) {
      pAVar1 = (this->fields).avatar;
      if ((pAVar1 != (Avatar *)0x0) &&
         (pCVar2 = (pAVar1->fields).avatarCollider, pCVar2 != (Collider *)0x0)) {
        UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                  (pCVar2,0,(MethodInfo *)0x0);
        pAVar1 = (this->fields).avatar;
        if ((pAVar1 != (Avatar *)0x0) &&
           (pIVar3 = (pAVar1->fields).interactionDataHandler,
           pIVar3 != (InteractionDataHandlerBase *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pIVar3,0,(MethodInfo *)0x0);
          pAVar1 = (this->fields).avatar;
          a = (Object *)0x0;
          if ((pAVar1 != (Avatar *)0x0) &&
             (a = (Object *)(pAVar1->fields).chatBubbleAnchor, (ChatAnchor *)a != (ChatAnchor *)0x0)
             ) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pCVar4 = (((ChatAnchor *)a)->fields).AttachedBubble;
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
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pCVar4 != (ChatBubble *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((pCVar4->fields)._._._._.m_CachedPtr != (void *)0x0) {
                pCVar4 = (((ChatAnchor *)a)->fields).AttachedBubble;
                if (pCVar4 == (ChatBubble *)0x0) goto code_?;
                ChatBubble::ChatBubble_HideBubble(pCVar4,(MethodInfo *)0x0);
              }
            }
            pAVar1 = (this->fields).avatar;
            if ((pAVar1 != (Avatar *)0x0) &&
               (pAVar5 = (pAVar1->fields).avatarUIHandler, pAVar5 != (AvatarUIHandler *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pAVar5->klass->vtable).SetShouldShowUI.methodPtr)
                        (pAVar5,0,(pAVar5->klass->vtable).SetShouldShowUI.method);
              return;
            }
          }
        }
      }
      goto code_?;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar6 != (MVGameControllerBase *)0x0) {
      pMVar7 = (pMVar6->fields).game;
      if (pMVar7 != (MVNetworkGame *)0x0) {
        this_00 = (pMVar7->fields).playerContainer;
        if (this_00 == (MVPlayerContainer *)0x0) goto code_?;
        actorNr = (this->fields)._._._.ownerActorNr;
        uVar8 = (ulonglong)actorNr;
        pMVar9 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                           (this_00,actorNr,(MethodInfo *)0x0);
        if ((pMVar9 == (MVPlayer *)0x0) || ((pMVar9->fields).playerState == 3)) {
          return;
        }
        pAVar1 = (this->fields).avatar;
        if (pAVar1 != (Avatar *)0x0) {
          pCVar2 = (pAVar1->fields).avatarCollider;
          if (pCVar2 != (Collider *)0x0) {
            uVar10 = (undefined7)(uVar8 >> 8);
            UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                      (pCVar2,1,(MethodInfo *)0x0);
            pAVar1 = (this->fields).avatar;
            if (pAVar1 != (Avatar *)0x0) {
              pIVar3 = (pAVar1->fields).interactionDataHandler;
              if (pIVar3 != (InteractionDataHandlerBase *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)pIVar3,1,(MethodInfo *)0x0);
                pAVar1 = (this->fields).avatar;
                if (pAVar1 != (Avatar *)0x0) {
                  pAVar5 = (pAVar1->fields).avatarUIHandler;
                  if (pAVar5 != (AvatarUIHandler *)0x0) {
                    (*(pAVar5->klass->vtable).SetShouldShowUI.methodPtr)
                              (pAVar5,CONCAT71(uVar10,1),
                               (pAVar5->klass->vtable).SetShouldShowUI.method);
                    return;
                  }
                  goto code_?;
                }
                goto code_?;
              }
              goto code_?;
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?(a);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_Destroy(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).avatar;
  if ((pAVar1 == (Avatar *)0x0) ||
     (pAVar2 = (pAVar1->fields).avatarUIHandler, pAVar2 == (AvatarUIHandler *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(pAVar2->klass->vtable).OnDestroy.methodPtr)(pAVar2,(pAVar2->klass->vtable).OnDestroy.method);
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__RemoveAll_System__Predicate<PriorityDataLateUpdate>_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<PriorityDataLateUpdate>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UpdateController____c__DisplayClass8_0___RemoveLateUpdateObject_b__0_PriorityDataLateUpdate_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController____c__DisplayClass8_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar4 = FUN_?(TypeInfo__UpdateController____c__DisplayClass8_0);
  if (lVar4 != 0) {
    bVar5 = iRam_? != 0;
    *(MVAvatar **)(lVar4 + 0x10) = this;
    if (bVar5) {
      uVar6 = (uint)(lVar4 + 0x10U >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    uVar6 = 0;
    lVar10 = 0x20;
    while( true ) {
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar11 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
      if (pLVar11 == (List_1_PriorityDataLateUpdate___Array *)0x0) break;
      if ((int)pLVar11->max_length <= (int)uVar6) {
        return;
      }
      if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UpdateController);
      }
      pLVar11 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
      if (pLVar11 == (List_1_PriorityDataLateUpdate___Array *)0x0) break;
      if ((uint)pLVar11->max_length <= uVar6) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      match = *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
               (lVar4 + 0x18);
      this_00 = *(List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)
                 ((longlong)pLVar11->vector + lVar10 + -0x20);
      if (match == (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      {
        match = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                FUN_?(TypeInfo__System__Predicate<PriorityDataLateUpdate>);
        FUN_?(match,lVar4);
        *(Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ **)(lVar4 + 0x18)
             = match;
        func_?(lVar4 + 0x18);
      }
      if (this_00 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
      break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
      XmlSchemaObjectTable+XmlSchemaObjectEntry]::
      List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__RemoveAll
                (this_00,match,
                 MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__RemoveAll_System__Predicate<PriorityDataLateUpdate>_
                );
      uVar6 = uVar6 + 1;
      lVar10 = lVar10 + 8;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleLeaveVehicle() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_HandleLeaveVehicle(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarPickupOwner>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_find_AvatarPickupOwner);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Did_not_find_seatmanager__Cannot);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_leave_vehicle_but_Grou);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.group;
  if (pMVar1 != (MVGroup *)0x0) {
    pMVar2 = pMVar1->klass;
    bVar3 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
    if ((bVar3 <= (pMVar2->_1).naturalAligment) &&
       ((MVVehicleBase__Class *)(pMVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
        TypeInfo__MVVehicleBase)) {
      pGVar4 = (((this->fields)._._.group)->fields)._.gameObject;
      if (pGVar4 == (GameObject *)0x0) {
DAT_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = (VehicleSeatManager *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar4,
                           VehicleSeatManager_MethodInfo__UnityEngine__GameObject__GetComponent<VehicleSeatManager>__
                          );
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
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_00 != (VehicleSeatManager *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_00->fields)._._._._.m_CachedPtr != (void *)0x0) {
          VehicleSeatManager::VehicleSeatManager_DetachFromSeat(this_00,this,(MethodInfo *)0x0);
          pGVar4 = (this->fields)._._.gameObject;
          if (pGVar4 == (GameObject *)0x0) goto DAT_?;
          pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar4,
                               AvatarPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarPickupOwner>__
                              );
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
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pOVar6 != (Object *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (pOVar6[1].klass != (Object__Class *)0x0) {
              bVar7 = iRam_? != 0;
              pOVar6[9].klass = (Object__Class *)0x0;
              if (bVar7) {
                uVar8 = (uint)((ulonglong)(pOVar6 + 9) >> 0xc);
                puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar10 = *puVar9;
                  LOCK();
                  uVar11 = *puVar9;
                  if (uVar10 == uVar11) {
                    *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar10 != uVar11);
              }
              return;
            }
          }
          pSVar12 = StringLiteral_Could_not_find_AvatarPickupOwner;
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
            pSVar12 = StringLiteral_Could_not_find_AvatarPickupOwner;
          }
          goto UnityEngine_CoreModule_dll_UnityEngine_Debug_Debug_2_LogError;
        }
      }
      pSVar12 = StringLiteral_Did_not_find_seatmanager__Cannot;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
        pSVar12 = StringLiteral_Did_not_find_seatmanager__Cannot;
      }
      goto UnityEngine_CoreModule_dll_UnityEngine_Debug_Debug_2_LogError;
    }
  }
  plVar13 = (longlong *)FUN_?(&(this->klass->_0).byval_arg);
  str0 = StringLiteral_Trying_to_leave_vehicle_but_Grou;
  pSVar12 = (String *)0x0;
  if (plVar13 != (longlong *)0x0) {
    pSVar12 = (String *)(**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
  }
  pSVar12 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar12,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
UnityEngine_CoreModule_dll_UnityEngine_Debug_Debug_2_LogError:
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar14 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar14 == (ILogger_1 *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar14,0,pSVar12);
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_Initialize(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AvatarPickupOwner_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarPickupOwner>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatar___Initialize_b__54_0_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_Initialize((MVGroup *)this,(MethodInfo *)0x0);
  if ((this->fields)._._._.ownerActorNr == -1) {
    return;
  }
  pMVar1 = (this->fields).body;
  if (pMVar1 != (MVBody *)0x0) {
    MVBody::MVBody_Attach(pMVar1,this,(this->fields).isLocal,(MethodInfo *)0x0);
    pGVar2 = (this->fields)._._.gameObject;
    if (pGVar2 != (GameObject *)0x0) {
      pAVar3 = (AvatarPickupOwner *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (pGVar2,
                           AvatarPickupOwner_MethodInfo__UnityEngine__GameObject__AddComponent<AvatarPickupOwner>__
                          );
      iVar4 = iRam_?;
      (this->fields).avatarPickupOwner = pAVar3;
      if (iVar4 != 0) {
        uVar5 = (uint)((ulonglong)&(this->fields).avatarPickupOwner >> 0xc);
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
          iVar4 = iRam_?;
        } while (!bVar9);
      }
      pAVar3 = (this->fields).avatarPickupOwner;
      if (pAVar3 != (AvatarPickupOwner *)0x0) {
        (pAVar3->fields)._._IsLocal_k__BackingField = (this->fields).isLocal;
        pAVar3 = (this->fields).avatarPickupOwner;
        pMVar10 = (this->fields).CurrentItem;
        isFiringRuntimeVariable = (this->fields).IsFiring;
        this_00 = (this->fields).skillDataManager;
        if (pAVar3 != (AvatarPickupOwner *)0x0) {
          (pAVar3->fields).mvAvatar = this;
          if (iVar4 != 0) {
            uVar5 = (uint)((ulonglong)&(pAVar3->fields).mvAvatar >> 0xc);
            uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
            do {
              uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
              puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
              LOCK();
              bVar9 = uVar7 == *puVar8;
              if (bVar9) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          MVPickupOwner::MVPickupOwner_Init
                    ((MVPickupOwner *)pAVar3,pMVar10,isFiringRuntimeVariable,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral_EndlessAmmo);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((this_00 != (WorldObjectSkillDataManager *)0x0) &&
             (bVar11 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                                 (this_00,StringLiteral_EndlessAmmo,(MethodInfo *)0x0), bVar11 != 0)
             ) {
            (pAVar3->fields).hasUnlimitedAmmo = 1;
          }
          (pAVar3->fields)._.hasUnlimitedAmmoSetting = (pAVar3->fields).hasUnlimitedAmmo;
          pAVar12 = (this->fields).avatar;
          if (pAVar12 != (Avatar *)0x0) {
            (*(pAVar12->klass->vtable).Initialize.methodPtr)
                      (pAVar12,this,(ulonglong)(this->fields).isLocal);
            pAVar12 = (this->fields).avatar;
            if ((pAVar12 != (Avatar *)0x0) &&
               (this_01 = (pAVar12->fields).interactionDataHandler,
               this_01 != (InteractionDataHandlerBase *)0x0)) {
              MVComponent::MVComponent_FindWorldObjectParent
                        ((MVComponent *)this_01,(MethodInfo *)0x0);
              MVAvatar_InitializeModifiers(this,(MethodInfo *)0x0);
              pcVar13 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                uVar14 = func_?(&UNK_?);
                FUN_?(uVar14,0);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pcRam_? = pcVar13;
              fVar15 = (float)(*pcRam_?)();
              pMVar1 = (this->fields).body;
              (this->fields).healParticleSpawnTime = fVar15;
              if ((((pMVar1 != (MVBody *)0x0) &&
                   (pMVar16 = (pMVar1->fields).bodyObject, pMVar16 != (MVBodyObject *)0x0)) &&
                  (pBVar17 = (pMVar16->fields).bodyData, pBVar17 != (BodyData *)0x0)) &&
                 (pTVar18 = (pBVar17->fields).PartBones, pTVar18 != (Transform__Array *)0x0)) {
                if ((int)pTVar18->max_length == 0) {
                  FUN_?();
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                if (pTVar18->vector[0] != (Transform *)0x0) {
                  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject
                                      ((Component *)pTVar18->vector[0],(MethodInfo *)0x0);
                  bVar9 = iRam_? != 0;
                  (this->fields).healRayAttachmentObject = pGVar2;
                  if (bVar9) {
                    uVar5 = (uint)((ulonglong)&(this->fields).healRayAttachmentObject >> 0xc);
                    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                    do {
                      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                      LOCK();
                      bVar9 = uVar7 == *puVar8;
                      if (bVar9) {
                        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar9);
                  }
                  pMVar10 = (this->fields).SpawnRoleModeTypes;
                  if (pMVar10 != (MVRuntimeDataVariable *)0x0) {
                    pMVar19 = (pMVar10->fields).OnChange;
                    pUVar20 = (UnityAction_1_System_Object_ *)
                              FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                    UnityAction_1_System_Object___ctor
                              (pUVar20,(Object *)this,
                               (this->klass->vtable).AvatarStateChangedHandler.method,
                               (MethodInfo *)0x0);
                    pMVar21 = (MVRuntimeDataVariable_OnChangeDelegate *)
                              mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pMVar19,(Delegate *)pUVar20,(MethodInfo *)0x0);
                    pMVar19 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                    if (pMVar21 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                      (pMVar10->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                    }
                    else {
                      pMVar22 = pMVar19;
                      if (pMVar21->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                        pMVar22 = pMVar21;
                      }
                      if (pMVar22 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                        FUN_?();
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                      (pMVar10->fields).OnChange = pMVar22;
                      pMVar22 = pMVar19;
                      if (pMVar21->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                        pMVar22 = pMVar21;
                      }
                      if (pMVar22 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                        FUN_?();
                        pcVar13 = (code *)swi(3);
                        (*pcVar13)();
                        return;
                      }
                    }
                    if (iRam_? != 0) {
                      uVar5 = (uint)((ulonglong)&(pMVar10->fields).OnChange >> 0xc);
                      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                      do {
                        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                        LOCK();
                        bVar9 = uVar7 == *puVar8;
                        if (bVar9) {
                          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar9);
                    }
                    pMVar10 = (this->fields).Animation;
                    if (pMVar10 != (MVRuntimeDataVariable *)0x0) {
                      pMVar21 = (pMVar10->fields).OnChange;
                      pUVar20 = (UnityAction_1_System_Object_ *)
                                FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]
                      ::UnityAction_1_System_Object___ctor
                                (pUVar20,(Object *)this,
                                 (this->klass->vtable).OnAnimationChange.method,(MethodInfo *)0x0);
                      pMVar21 = (MVRuntimeDataVariable_OnChangeDelegate *)
                                mscorlib.dll::System::Delegate::Delegate_Combine
                                          ((Delegate *)pMVar21,(Delegate *)pUVar20,(MethodInfo *)0x0
                                          );
                      if (pMVar21 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                        (pMVar10->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                      }
                      else {
                        pMVar22 = pMVar19;
                        if (pMVar21->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                          pMVar22 = pMVar21;
                        }
                        if (pMVar22 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                          FUN_?();
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                        (pMVar10->fields).OnChange = pMVar22;
                        pMVar22 = pMVar19;
                        if (pMVar21->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                          pMVar22 = pMVar21;
                        }
                        if (pMVar22 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                          FUN_?();
                          pcVar13 = (code *)swi(3);
                          (*pcVar13)();
                          return;
                        }
                      }
                      if (iRam_? != 0) {
                        uVar5 = (uint)((ulonglong)&(pMVar10->fields).OnChange >> 0xc);
                        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                        do {
                          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                          LOCK();
                          bVar9 = uVar7 == *puVar8;
                          if (bVar9) {
                            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar9);
                      }
                      pMVar23 = (this->fields).Health;
                      if (pMVar23 != (MVRuntimeDataVariable_1_System_Single_ *)0x0) {
                        pMVar21 = (pMVar23->fields)._.OnChange;
                        pUVar20 = (UnityAction_1_System_Object_ *)
                                  FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Object]::UnityAction_1_System_Object___ctor
                                  (pUVar20,(Object *)this,
                                   (this->klass->vtable).OnHealthChange.method,(MethodInfo *)0x0);
                        pMVar21 = (MVRuntimeDataVariable_OnChangeDelegate *)
                                  mscorlib.dll::System::Delegate::Delegate_Combine
                                            ((Delegate *)pMVar21,(Delegate *)pUVar20,
                                             (MethodInfo *)0x0);
                        if (pMVar21 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                          (pMVar23->fields)._.OnChange =
                               (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                        }
                        else {
                          pMVar22 = pMVar19;
                          if (pMVar21->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                            pMVar22 = pMVar21;
                          }
                          if (pMVar22 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                            FUN_?();
                            pcVar13 = (code *)swi(3);
                            (*pcVar13)();
                            return;
                          }
                          (pMVar23->fields)._.OnChange = pMVar22;
                          pMVar22 = pMVar19;
                          if (pMVar21->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                            pMVar22 = pMVar21;
                          }
                          if (pMVar22 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                            FUN_?();
                            pcVar13 = (code *)swi(3);
                            (*pcVar13)();
                            return;
                          }
                        }
                        if (iRam_? != 0) {
                          uVar5 = (uint)((ulonglong)&(pMVar23->fields)._.OnChange >> 0xc);
                          uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                          do {
                            uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                            puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                            LOCK();
                            bVar9 = uVar7 == *puVar8;
                            if (bVar9) {
                              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar9);
                        }
                        pMVar24 = (this->fields).shield;
                        if (pMVar24 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                          pMVar21 = (pMVar24->fields)._._.OnChange;
                          pUVar20 = (UnityAction_1_System_Object_ *)
                                    FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate)
                          ;
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                          Object]::UnityAction_1_System_Object___ctor
                                    (pUVar20,(Object *)this,
                                     (this->klass->vtable).OnShieldChange.method,(MethodInfo *)0x0);
                          pMVar21 = (MVRuntimeDataVariable_OnChangeDelegate *)
                                    mscorlib.dll::System::Delegate::Delegate_Combine
                                              ((Delegate *)pMVar21,(Delegate *)pUVar20,
                                               (MethodInfo *)0x0);
                          if (pMVar21 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                            (pMVar24->fields)._._.OnChange =
                                 (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                          }
                          else {
                            pMVar22 = pMVar19;
                            if (pMVar21->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate)
                            {
                              pMVar22 = pMVar21;
                            }
                            if (pMVar22 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                              FUN_?();
                              pcVar13 = (code *)swi(3);
                              (*pcVar13)();
                              return;
                            }
                            (pMVar24->fields)._._.OnChange = pMVar22;
                            pMVar22 = pMVar19;
                            if (pMVar21->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate)
                            {
                              pMVar22 = pMVar21;
                            }
                            if (pMVar22 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                              FUN_?();
                              pcVar13 = (code *)swi(3);
                              (*pcVar13)();
                              return;
                            }
                          }
                          if (iRam_? != 0) {
                            uVar5 = (uint)((ulonglong)&(pMVar24->fields)._._.OnChange >> 0xc);
                            uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                            do {
                              uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                              puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                              LOCK();
                              bVar9 = uVar7 == *puVar8;
                              if (bVar9) {
                                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar9);
                          }
                          pMVar10 = (this->fields).CurrentItem;
                          if (pMVar10 != (MVRuntimeDataVariable *)0x0) {
                            pMVar21 = (pMVar10->fields).OnChange;
                            pUVar20 = (UnityAction_1_System_Object_ *)
                                      FUN_?(
                                                  TypeInfo__MVRuntimeDataVariable__OnChangeDelegate)
                            ;
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                            Object]::UnityAction_1_System_Object___ctor
                                      (pUVar20,(Object *)this,
                                       (this->klass->vtable).OnCurrentPickupChange.method,
                                       (MethodInfo *)0x0);
                            pMVar21 = (MVRuntimeDataVariable_OnChangeDelegate *)
                                      mscorlib.dll::System::Delegate::Delegate_Combine
                                                ((Delegate *)pMVar21,(Delegate *)pUVar20,
                                                 (MethodInfo *)0x0);
                            if (pMVar21 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                              (pMVar10->fields).OnChange =
                                   (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                            }
                            else {
                              pMVar22 = pMVar19;
                              if (pMVar21->klass ==
                                  TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                                pMVar22 = pMVar21;
                              }
                              if (pMVar22 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                                FUN_?();
                                pcVar13 = (code *)swi(3);
                                (*pcVar13)();
                                return;
                              }
                              (pMVar10->fields).OnChange = pMVar22;
                              pMVar22 = pMVar19;
                              if (pMVar21->klass ==
                                  TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                                pMVar22 = pMVar21;
                              }
                              if (pMVar22 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                                FUN_?();
                                pcVar13 = (code *)swi(3);
                                (*pcVar13)();
                                return;
                              }
                            }
                            if (iRam_? != 0) {
                              uVar5 = (uint)((ulonglong)&(pMVar10->fields).OnChange >> 0xc);
                              uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                              do {
                                uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                                puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                                LOCK();
                                bVar9 = uVar7 == *puVar8;
                                if (bVar9) {
                                  *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar9);
                            }
                            pMVar24 = (this->fields).Size;
                            if (pMVar24 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                              pMVar21 = (pMVar24->fields)._._.OnChange;
                              pUVar20 = (UnityAction_1_System_Object_ *)
                                        FUN_?(
                                                  TypeInfo__MVRuntimeDataVariable__OnChangeDelegate)
                              ;
                              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System
                              ::Object]::UnityAction_1_System_Object___ctor
                                        (pUVar20,(Object *)this,
                                         MethodInfo__MVAvatar___Initialize_b__54_0_System__Object_,
                                         (MethodInfo *)0x0);
                              pMVar21 = (MVRuntimeDataVariable_OnChangeDelegate *)
                                        mscorlib.dll::System::Delegate::Delegate_Combine
                                                  ((Delegate *)pMVar21,(Delegate *)pUVar20,
                                                   (MethodInfo *)0x0);
                              if (pMVar21 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                                (pMVar24->fields)._._.OnChange =
                                     (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                              }
                              else {
                                pMVar22 = pMVar19;
                                if (pMVar21->klass ==
                                    TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                                  pMVar22 = pMVar21;
                                }
                                if (pMVar22 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                                  FUN_?(pMVar21);
                                  pcVar13 = (code *)swi(3);
                                  (*pcVar13)();
                                  return;
                                }
                                (pMVar24->fields)._._.OnChange = pMVar22;
                                if (pMVar21->klass ==
                                    TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                                  pMVar19 = pMVar21;
                                }
                                if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                                  FUN_?(pMVar21);
                                  pcVar13 = (code *)swi(3);
                                  (*pcVar13)();
                                  return;
                                }
                              }
                              if (iRam_? != 0) {
                                uVar5 = (uint)((ulonglong)&(pMVar24->fields)._._.OnChange >> 0xc);
                                uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                                do {
                                  uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                                  puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                                  LOCK();
                                  bVar9 = uVar7 == *puVar8;
                                  if (bVar9) {
                                    *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar9);
                              }
                              pMVar24 = (this->fields).Size;
                              if (pMVar24 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                                uVar25 = (*(pMVar24->klass->vtable).get_Value.methodPtr)
                                                   (pMVar24,(pMVar24->klass->vtable).get_Value.
                                                            method);
                                pMVar24 = (this->fields).Size;
                                if (pMVar24 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                                  uVar26 = (*(pMVar24->klass->vtable).get_Value.methodPtr)
                                                     (pMVar24,(pMVar24->klass->vtable).get_Value.
                                                              method);
                                  pMVar24 = (this->fields).Size;
                                  if (pMVar24 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                                    uStack_27 = (*(pMVar24->klass->vtable).get_Value.methodPtr)
                                                          (pMVar24,(pMVar24->klass->vtable).
                                                                   get_Value.method);
                                    uStack_28 = CONCAT44(uVar26,uVar25);
                                    (*(this->klass->vtable).set_Scale.methodPtr)
                                              (this,&uStack_28,
                                               (this->klass->vtable).set_Scale.method);
                                    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
                                      FUN_?();
                                    }
                                    UpdateController::UpdateController_AddLateUpdateObject
                                              ((IUpdatecontrollerSubscriberLateUpdate *)this,
                                               UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
                                               (MethodInfo *)0x0);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void InitializeModifiers() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_InitializeModifiers(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVAvatar___InitializeModifiers_b__60_0_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).Modifiers;
  if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
    a = (pMVar1->fields).OnChange;
    this_03 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__MVAvatar___InitializeModifiers_b__60_0_System__Object_,(MethodInfo *)0x0)
    ;
    pAVar2 = (AvatarModifierPackageType__Enum__Class *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
    this_07 = (AvatarModifierPackageType__Enum__Class *)0x0;
    if (pAVar2 == (AvatarModifierPackageType__Enum__Class *)0x0) {
      (pMVar1->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    }
    else {
      pAVar3 = this_07;
      if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)(pAVar2->_0).image ==
          TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pAVar3 = pAVar2;
      }
      if (pAVar3 == (AvatarModifierPackageType__Enum__Class *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (pMVar1->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)pAVar3;
      pAVar3 = this_07;
      if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)(pAVar2->_0).image ==
          TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pAVar3 = pAVar2;
      }
      if (pAVar3 == (AvatarModifierPackageType__Enum__Class *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&(pMVar1->fields).OnChange >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    pMVar1 = (this->fields).Modifiers;
    owner = (this->fields).avatar;
    if ((pMVar1 != (MVRuntimeDataVariable *)0x0) &&
       (pAVar2 = (AvatarModifierPackageType__Enum__Class *)
                  ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                            ((pMVar1->fields).value,(MethodInfo *)0x0), owner != (Avatar *)0x0)) {
      if (pAVar2 != (AvatarModifierPackageType__Enum__Class *)0x0) {
        pIVar9 = (pAVar2->_0).image;
        bVar10 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if ((*(byte *)&pIVar9[4].assembly < bVar10) ||
           (this_07 = pAVar2,
           *(Dictionary_2_System_Object_System_Object___Class **)
            ((longlong)pIVar9[2].codeGenModule + (ulonglong)bVar10 * 8 + -8) !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(pAVar2,
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                   *)0x0;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AvatarModifierPackageFactory);
        LOCK();
        UNLOCK();
        FUN_?(&TypeRef__AvatarModifierPackageType);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__AvatarModifierPackageType);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Add_AvatarModifierPackageType__unsigned_char_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Add_AvatarModifierPackageType__AvatarModifier_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__ContainsKey_AvatarModifierPackageType_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Remove_AvatarModifierPackageType_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Remove_AvatarModifierPackageType_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Item_AvatarModifierPackageType_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__get_Item_AvatarModifierPackageType_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Keys__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__set_Item_AvatarModifierPackageType__unsigned_char_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_AvatarModifier>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_AvatarModifier>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_AvatarModifier>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<AvatarModifierPackageType,_AvatarModifier>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__Add_AvatarModifierPackageType_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__List__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Collections__Generic__List<AvatarModifierPackageType>);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&::StringLiteral__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_11 = (undefined1  [8])0x0;
      pMStack_12 = (MonitorData *)0x0;
      pSStack_13 = (String *)0x0;
      pLStack_14 = (List_1_System_UInt32Enum_ *)0x0;
      uStack_15._0_4_ = 0;
      uStack_15._4_4_ = 0;
      this_04 = (List_1_System_UInt32Enum_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__List<AvatarModifierPackageType>
                             );
      pLStack_16 = this_04;
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_04,
                 MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__List__);
      this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(owner->fields).modifiers;
      pLStack_17 = this_04;
      if ((this_00 !=
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0) && (pDVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                              UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                              Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                                        (this_00,
                                         MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Keys__
                                        ),
                   pDVar18 !=
                   (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0)) {
        pDStack_19 = (pDVar18->fields)._dictionary;
        ppDStack_20 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        **)0x0;
        uStack_21 = 0;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&pDStack_22 >> 0xc);
          lVar23 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)(ulonglong)(uVar5 & 0x3f);
          do {
            uVar8 = *(ulonglong *)(lVar23 + 0xADDR);
            puVar6 = (ulonglong *)(lVar23 + 0xADDR);
            LOCK();
            bVar24 = uVar8 == *puVar6;
            if (bVar24) {
              *puVar6 = uVar8 | 1L << (longlong)method_01;
            }
            UNLOCK();
          } while (!bVar24);
        }
        if (pDStack_19 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) {
          pDStack_22 = pDStack_19;
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iStack_25 = (pDStack_19->fields)._version;
        uStack_21 = 0;
        uStack_26 = 0;
        uStack_27 = 0;
        pDStack_22 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                       *)0x0;
        ppDStack_20 = &pDStack_19;
        value = this_04;
code_?:
        if (pDStack_19 !=
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) {
          if (iStack_25 == (pDStack_19->fields)._version) {
            do {
              if (pDStack_19 ==
                  (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) goto code_?;
              if ((uint)(pDStack_19->fields)._count <= uStack_26) {
                _uStack_180 = CONCAT44(iStack_25,(pDStack_19->fields)._count + 1);
                uStack_27 = (ulonglong)uStack_27._4_4_ << 0x20;
                pSVar28 = (String *)0x0;
                uVar5 = 0;
                if (this_04 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
                lVar23 = 0x20;
                goto code_?;
              }
              method_01 = (pDStack_19->fields)._entries;
              lVar23 = (longlong)(int)uStack_26;
              uVar5 = uStack_26 + 1;
              if (method_01 ==
                  (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                   *)0x0) goto code_?;
              if (*(uint *)&method_01->max_length <= uStack_26) {
                uStack_26 = uVar5;
                FUN_?();
                goto code_?;
              }
              uStack_26 = uVar5;
            } while (((_union_86 *)&method_01->vector[0].hashCode)[lVar23 * 3].__klassIndex < 0);
            uVar29 = *(undefined4 *)((longlong)&method_01->vector[0].key + lVar23 * 0x18);
            uStack_27 = CONCAT44(uStack_27._4_4_,uVar29);
            EStack_30.klass = (Enum__Class *)TypeInfo__AvatarModifierPackageType;
            EStack_30.monitor = (MonitorData *)0xffffffffffffffff;
            uStack_31 = CONCAT44(uStack_31._4_4_,uVar29);
            pSVar28 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_30,(MethodInfo *)0x0);
            pSVar28 = mscorlib.dll::System::String::String_Concat_4
                                (::StringLiteral__,pSVar28,(MethodInfo *)0x0);
            if (this_07 != (AvatarModifierPackageType__Enum__Class *)0x0) goto code_?;
            goto code_?;
          }
          goto code_?;
        }
code_?:
        FUN_?();
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
code_?:
  if ((pLStack_16->fields)._size <= (int)uVar5) goto code_?;
  uVar5 = (uint)pSVar28;
  if ((uint)(this_04->fields)._size <= uVar5) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    goto code_?;
  }
  pUVar32 = (this_04->fields)._items;
  if (pUVar32 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
  if ((uint)pUVar32->max_length <= uVar5) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  IVar33 = *(Int32Enum__Enum *)((longlong)pUVar32->vector + lVar23 + -0x20);
  value = (List_1_System_UInt32Enum_ *)(ulonglong)IVar33;
  pDVar34 = (owner->fields).modifiers;
  if (pDVar34 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0)
  goto code_?;
  pOVar35 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar34,IVar33,
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Item_AvatarModifierPackageType_
                      );
  pDVar34 = (owner->fields).modifiers;
  if (pDVar34 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0)
  goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__Remove
            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar34,IVar33,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Remove_AvatarModifierPackageType_
            );
  this_01 = (Dictionary_2_System_Int32Enum_System_Single_ *)(owner->fields).currentModifierByteState
  ;
  if (this_01 == (Dictionary_2_System_Int32Enum_System_Single_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
  Dictionary_2_System_Int32Enum_System_Single__Remove
            (this_01,IVar33,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Remove_AvatarModifierPackageType_
            );
  if (*(int *)&(TypeInfo__AvatarModifierPackageFactory->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar36 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                      (&AStack_37,IVar33,(MethodInfo *)0x0);
  uVar38 = 0;
  pAVar39 = pAVar36->avatarModifiers;
  piVar40 = &pAVar39->vector[0].avatarModifierEffect;
  while( true ) {
    if (pAVar39 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) goto code_?;
    uVar41 = (uint)pAVar39->max_length;
    if ((int)uVar41 <= (int)uVar38) break;
    pBVar42 = (owner->fields).modifierEffectCount;
    if (uVar41 <= uVar38) goto code_?;
    if (pBVar42 == (Byte__Array *)0x0) goto code_?;
    if ((uint)pBVar42->max_length <= (uint)*piVar40) goto code_?;
    pBVar42->vector[*piVar40] = pBVar42->vector[*piVar40] - 1;
    uVar38 = uVar38 + 1;
    piVar40 = piVar40 + 4;
  }
  if (pOVar35 == (Object *)0x0) goto code_?;
  *(undefined1 *)((longlong)&pOVar35[2].klass + 4) = 0;
  method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
               *)pOVar35->klass[1]._0.castClass;
  (*(code *)pOVar35->klass[1]._0.element_class)(pOVar35,owner);
  uVar5 = uVar5 + 1;
  pSVar28 = (String *)(ulonglong)uVar5;
  lVar23 = lVar23 + 4;
  goto code_?;
code_?:
  method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
               *)MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 ->klass->rgctx_data[0x21].method;
  iVar43 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::StyleComplexSelector+PseudoStateData]::
           Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                     ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)this_07,(Object *)pSVar28,(MethodInfo *)method_01);
  pIVar44 = TypeRef__AvatarModifierPackageType;
  if (iVar43 < 0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    pTVar45 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar44,(MethodInfo *)0x0);
    if (pSVar28 != (String *)0x0) {
      auStackX_20[0] = 0x5f;
      value = (List_1_System_UInt32Enum_ *)
              mscorlib.dll::System::String::String_TrimHelper
                        (pSVar28,auStackX_20,1,String_TrimType__Enum_Head,(MethodInfo *)0x0);
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pOVar35 = mscorlib.dll::System::Enum::Enum_Parse(pTVar45,(String *)value,(MethodInfo *)0x0);
      if (pOVar35 != (Object *)0x0) {
        method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                     *)TypeInfo__AvatarModifierPackageType;
        if ((pOVar35->klass->_0).element_class ==
            (TypeInfo__AvatarModifierPackageType->_0).element_class) {
          if (this_04 != (List_1_System_UInt32Enum_ *)0x0) {
            method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                         *)
                        MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__Add_AvatarModifierPackageType_
            ;
            mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
            List_1_System_UInt32Enum__Add
                      (this_04,*(UInt32Enum__Enum *)&pOVar35[1].klass,
                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__Add_AvatarModifierPackageType_
                      );
            goto code_?;
          }
code_?:
          pOVar35 = (Object *)FUN_?();
        }
        FUN_?(pOVar35,method_01);
      }
      FUN_?();
    }
    FUN_?();
code_?:
    FUN_?();
    uVar5 = uStack_26;
code_?:
    uStack_26 = uVar5;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
    goto code_?;
  }
  goto code_?;
code_?:
  FUN_?(value);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(value,method_01);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  uVar46 = func_?(&UNK_?);
  FUN_?(uVar46,0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pSVar28,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(method_01);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
code_?:
  if (this_07 != (AvatarModifierPackageType__Enum__Class *)0x0) {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&EStack_30 >> 0xc);
      lVar23 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar23 + 0xADDR);
        puVar6 = (ulonglong *)(lVar23 + 0xADDR);
        LOCK();
        bVar24 = uVar8 == *puVar6;
        if (bVar24) {
          *puVar6 = uVar8 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar24);
    }
    EStack_30.monitor = (MonitorData *)(ulonglong)*(uint *)&(this_07->_0).byval_arg.field_0xc;
    uStack_47 = 2;
    uStack_31 = 0;
    uStack_48 = 0;
    pMStack_12 = EStack_30.monitor;
    pSStack_13 = (String *)0x0;
    pLStack_14 = (List_1_System_UInt32Enum_ *)0x0;
    uStack_15._0_4_ = 2;
    uStack_15._4_4_ = 0;
    pDStack_22 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0;
    ppDStack_20 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    **)auStack_11;
    EStack_30.klass = (Enum__Class *)this_07;
    auStack_11 = (undefined1  [8])this_07;
    do {
      bVar49 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
               Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          auStack_11,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                         );
      value = pLStack_14;
      pIVar44 = TypeRef__AvatarModifierPackageType;
      if (bVar49 == 0) {
        return;
      }
      pSVar28 = (String *)0x0;
      if (pSStack_13 != (String *)0x0) {
        if (pSStack_13->klass == pSRam0000000182dbbc60) {
          pSVar28 = pSStack_13;
        }
        if (pSVar28 == (String *)0x0) goto code_?;
      }
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pTVar45 = (Type *)0x0;
      if (pIVar44 != (Il2CppType *)0x0) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar23 = FUN_?(pIVar44,1);
        pTVar45 = (Type *)FUN_?(lVar23 + 0x20);
      }
      if (pSVar28 == (String *)0x0) goto code_?;
      pSVar28 = mscorlib.dll::System::String::String_TrimHelper
                          (pSVar28,(uint16_t *)&stack0x00000008,1,String_TrimType__Enum_Head,
                           (MethodInfo *)0x0);
      if ((*(int *)(lRam_? + 0xe4) == 0) &&
         (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
        FUN_?();
      }
      uVar46 = 0;
      method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                   *)mscorlib.dll::System::Enum::Enum_Parse_1(pTVar45,pSVar28,0,(MethodInfo *)0x0);
      if (method_01 ==
          (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
           *)0x0) goto code_?;
      if (*(Il2CppClass **)&((Il2CppClass_0 *)&method_01->klass)->image->token !=
          (TypeInfo__AvatarModifierPackageType->_0).element_class) goto code_?;
      IVar33 = *(Int32Enum__Enum *)&method_01->bounds;
      this_02 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(owner->fields).modifiers;
      if (this_02 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                   *)MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__ContainsKey_AvatarModifierPackageType_
                     ->klass->rgctx_data[0x21].method;
      iVar43 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
               Int32Enum,UnityEngine::Vector3]::
               Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                         (this_02,IVar33,(MethodInfo *)method_01);
      if (iVar43 < 0) {
        method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                     *)0x0;
        this_05 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                   *)AvatarModifier::AvatarModifier_CreateFromType(IVar33,owner,(MethodInfo *)0x0);
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
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this_05 ==
            (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
             *)0x0) {
          bVar24 = false;
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar24 = this_05->bounds != (Il2CppArrayBounds *)0x0;
        }
        if (bVar24) {
          if (this_05 ==
              (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
               *)0x0) goto code_?;
          pIVar9 = ((Il2CppClass_0 *)&this_05->klass)->image;
          method_01 = *(Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                        **)&pIVar9[5].typeCount;
          cVar50 = (*(code *)pIVar9[5].assembly)(this_05);
          if (cVar50 == '\0') {
            obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_05,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)obj,(MethodInfo *)0x0);
          }
          else {
            this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_05,(MethodInfo *)0x0);
            value_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)owner,(MethodInfo *)0x0);
            if (this_06 == (Transform *)0x0) goto code_?;
            method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                         *)0x0;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (this_06,value_00,(MethodInfo *)0x0);
            pSVar28 = (String *)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_05,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pSVar28 == (String *)0x0) goto code_?;
            pLStack_16 = *(List_1_System_UInt32Enum_ **)
                           &TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
            fStack_51 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            SVar52 = pSVar28->fields;
            if (SVar52 == (String__Fields)0x0) goto code_?;
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0))
            goto code_?;
            pcRam_? = pcVar4;
            (*pcRam_?)(SVar52);
            pDVar34 = (owner->fields).modifiers;
            if (pDVar34 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0)
            goto code_?;
            uVar46 = CONCAT71((int7)((ulonglong)uVar46 >> 8),2);
            method_01 = this_05;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar34,IVar33,
                       (Object *)this_05,(InsertionBehavior__Enum)uVar46,
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Add_AvatarModifierPackageType__AvatarModifier_
                       ->klass->rgctx_data[0x22].method);
            pDVar53 = (owner->fields).currentModifierByteState;
            if (pDVar53 == (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)0x0)
            goto code_?;
            method_01 = pDRam0000000182dbbbe8;
            if (value == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
            if ((value->klass->_0).element_class !=
                (Il2CppClass *)((_union_155 *)(pDRam0000000182dbbbe8->vector + 1))->genericMethod)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Byte]
            ::Dictionary_2_System_Int32Enum_System_Byte__TryInsert
                      ((Dictionary_2_System_Int32Enum_System_Byte_ *)pDVar53,IVar33,
                       *(uint8_t *)&(value->fields)._items,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar46 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Add_AvatarModifierPackageType__unsigned_char_
                       ->klass->rgctx_data[0x22].method);
            *(undefined1 *)&this_05->vector[0].next = 1;
            (**(code **)&((Il2CppClass_0 *)&this_05->klass)->image[5].token)(this_05,owner);
            pIVar9 = ((Il2CppClass_0 *)&this_05->klass)->image;
            packageType = (*(code *)pIVar9[5].nameToClassHashTable)(this_05,pIVar9[5].codeGenModule)
            ;
            if (*(int *)&(TypeInfo__AvatarModifierPackageFactory->_1).field_0x1c == 0) {
              FUN_?();
            }
            pAVar36 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                                (&AStack_37,packageType,(MethodInfo *)0x0);
            method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                         *)pAVar36->avatarModifiers;
            uVar5 = 0;
            if (method_01 ==
                (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                 *)0x0) goto code_?;
            for (; (int)uVar5 < (int)*(uint *)&method_01->max_length; uVar5 = uVar5 + 1) {
              pBVar42 = (owner->fields).modifierEffectCount;
              if (*(uint *)&method_01->max_length <= uVar5) goto code_?;
              uVar38 = (&method_01->vector[0].next)[(longlong)(int)uVar5 * 4];
              if (pBVar42 == (Byte__Array *)0x0) goto code_?;
              if ((uint)pBVar42->max_length <= uVar38) goto code_?;
              pBVar42->vector[(int)uVar38] = pBVar42->vector[(int)uVar38] + 1;
            }
          }
        }
      }
      else {
        pDVar53 = (owner->fields).currentModifierByteState;
        if (pDVar53 == (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)0x0)
        goto code_?;
        cVar50 = FUN_?(pDVar53,IVar33);
        method_01 = pDRam0000000182dbbbe8;
        if (value == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
        if ((value->klass->_0).element_class !=
            (Il2CppClass *)((_union_155 *)(pDRam0000000182dbbbe8->vector + 1))->genericMethod)
        goto code_?;
        if (*(char *)&(value->fields)._items != cVar50) {
          pDVar34 = (owner->fields).modifiers;
          if (pDVar34 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0)
          goto code_?;
          method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Item_AvatarModifierPackageType_
          ;
          pOVar35 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar34,IVar33,
                               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Item_AvatarModifierPackageType_
                              );
          if (pOVar35 == (Object *)0x0) goto code_?;
          method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)pOVar35->klass[1]._0.name;
          (*(code *)method_01)(pOVar35,pOVar35->klass[1]._0.namespaze);
          pDVar53 = (owner->fields).currentModifierByteState;
          if (pDVar53 == (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)0x0)
          goto code_?;
          if ((value->klass->_0).element_class !=
              (Il2CppClass *)((_union_155 *)(pDRam0000000182dbbbe8->vector + 1))->genericMethod)
          goto code_?;
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__set_Item_AvatarModifierPackageType__unsigned_char_
                      ->klass->rgctx_data[0x22].method;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Byte]::
          Dictionary_2_System_Int32Enum_System_Byte__TryInsert
                    ((Dictionary_2_System_Int32Enum_System_Byte_ *)pDVar53,IVar33,
                     *(uint8_t *)&(value->fields)._items,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),1),
                     method_00);
        }
      }
    } while( true );
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsInMode(SpawnRoleModeType) */

bool Assembly-CSharp.dll::MVAvatar::MVAvatar_IsInMode
               (MVAvatar *this,SpawnRoleModeType__Enum t,MethodInfo *method)

{
  pMVar1 = (this->fields).SpawnRoleModeTypes;
  if (pMVar1 != (MVRuntimeDataVariable *)0x0) {
    pOVar2 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       ((pMVar1->fields).value,(MethodInfo *)0x0);
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return 0 < (int)(*(SpawnRoleModeType__Enum *)&pOVar2[1].klass & t);
      }
      FUN_?(pOVar2,lRam_?);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void OnAnimationChange(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnAnimationChange
               (MVAvatar *this,Object *newAnimationData,MethodInfo *method)

{
  pMVar1 = (this->fields).body;
  if (((pMVar1 == (MVBody *)0x0) ||
      (pMVar2 = (pMVar1->fields).bodyObject, pMVar2 == (MVBodyObject *)0x0)) ||
     (pBVar3 = (pMVar2->fields).boneAnimation, pBVar3 == (BoneAnimation *)0x0)) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_timeStamp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_state);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (newAnimationData == (Object *)0x0) goto code_?;
  bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment;
  if (((newAnimationData->klass->_1).naturalAligment < bVar5) ||
     ((Dictionary_2_System_Object_System_Object___Class *)
      (newAnimationData->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
    FUN_?(newAnimationData);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pOVar6 = (Object__Class *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)newAnimationData,
                       (Object *)StringLiteral_state,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  pOVar7 = (Object__Class *)0x0;
  if (pOVar6 != (Object__Class *)0x0) {
    if ((Object__Class *)(pOVar6->_0).image == pORam0000000182dbbc60) {
      pOVar7 = pOVar6;
    }
    if (pOVar7 == (Object__Class *)0x0) {
      FUN_?(pOVar6);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      ((Dictionary_2_System_Object_System_Object_ *)newAnimationData,
                       (Object *)StringLiteral_timeStamp,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pOVar8 == (Object *)0x0) goto code_?;
  if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(pOVar8);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = *(int32_t *)&pOVar8[1].klass;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AnimationData,pOVar7,iVar9,0,unaff_RDI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pBVar3->fields).OnAnimationChange != (Action_1_String_ *)0x0) {
    pAVar10 = (pBVar3->fields).OnAnimationChange;
    (*(pAVar10->fields)._._.invoke_impl)((pAVar10->fields)._._.method_code,pOVar7);
  }
  if ((pBVar3->fields).isLocal == 0) {
    pQVar11 = (pBVar3->fields).animationQueue;
    pOVar8 = (Object *)FUN_?(TypeInfo__AnimationData);
    bVar12 = iRam_? != 0;
    pOVar8[1].klass = pOVar7;
    if (bVar12) {
      uVar13 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
      lVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
      do {
        uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
        puVar16 = (ulonglong *)(lVar14 + 0xADDR);
        LOCK();
        bVar12 = uVar15 == *puVar16;
        if (bVar12) {
          *puVar16 = uVar15 | 1L << (ulonglong)(uVar13 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    *(int32_t *)&pOVar8[1].monitor = iVar9;
    if (pQVar11 == (Queue_1_AnimationData_ *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
    Queue_1_System_Object__Enqueue
              ((Queue_1_System_Object_ *)pQVar11,pOVar8,
               MethodInfo__System__Collections__Generic__Queue<AnimationData>__Enqueue_AnimationData_
              );
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__,0);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__Collections__Generic__Queue<AnimationData>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__TransformNetworkManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pQVar11 = (pBVar3->fields).animationQueue;
    iVar17 = TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField + 0x14;
    if (pQVar11 == (Queue_1_AnimationData_ *)0x0) goto code_?;
    pAVar18 = (pBVar3->fields).nextAnim;
    if ((pQVar11->fields)._size < 1) {
      if ((pAVar18 != (AnimationData *)0x0) && ((pAVar18->fields).timeStamp <= iVar17)) {
        (pBVar3->fields).currentAnim = pAVar18;
        func_?(&(pBVar3->fields).currentAnim);
        (pBVar3->fields).nextAnim = (AnimationData *)0x0;
        func_?(&(pBVar3->fields).nextAnim);
      }
    }
    else {
      if (pAVar18 == (AnimationData *)0x0) {
        if (pQVar11 == (Queue_1_AnimationData_ *)0x0) goto code_?;
        pAVar18 = (AnimationData *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar11,
                             MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__
                            );
        bVar12 = iRam_? != 0;
        (pBVar3->fields).nextAnim = pAVar18;
        if (bVar12) {
          uVar13 = (uint)((ulonglong)&(pBVar3->fields).nextAnim >> 0xc);
          uVar15 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
          do {
            uVar19 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
            puVar16 = (ulonglong *)(uVar15 * 8 + 0xADDR);
            LOCK();
            bVar12 = uVar19 == *puVar16;
            if (bVar12) {
              *puVar16 = uVar19 | 1L << (ulonglong)(uVar13 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
        }
      }
      if ((pBVar3->fields).nextAnim != (AnimationData *)0x0) {
        if (((pBVar3->fields).currentAnim == (AnimationData *)0x0) &&
           (pAVar18 = (pBVar3->fields).nextAnim, (pAVar18->fields).timeStamp <= iVar17)) {
          (pBVar3->fields).currentAnim = pAVar18;
          func_?(&(pBVar3->fields).currentAnim);
          (pBVar3->fields).nextAnim = (AnimationData *)0x0;
          func_?(&(pBVar3->fields).nextAnim);
        }
        pAVar18 = (pBVar3->fields).nextAnim;
        while (pAVar18 != (AnimationData *)0x0) {
          pAVar18 = (pBVar3->fields).nextAnim;
          if (pAVar18 == (AnimationData *)0x0) goto code_?;
          if (iVar17 < (pAVar18->fields).timeStamp) break;
          pQVar11 = (pBVar3->fields).animationQueue;
          if (pQVar11 == (Queue_1_AnimationData_ *)0x0) goto code_?;
          if ((pQVar11->fields)._size < 1) break;
          bVar12 = iRam_? != 0;
          (pBVar3->fields).currentAnim = (pBVar3->fields).nextAnim;
          if (bVar12) {
            uVar13 = (uint)((ulonglong)&(pBVar3->fields).currentAnim >> 0xc);
            uVar15 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
            do {
              uVar19 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
              puVar16 = (ulonglong *)(uVar15 * 8 + 0xADDR);
              LOCK();
              bVar12 = uVar19 == *puVar16;
              if (bVar12) {
                *puVar16 = uVar19 | 1L << (ulonglong)(uVar13 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
          pQVar11 = (pBVar3->fields).animationQueue;
          if (pQVar11 == (Queue_1_AnimationData_ *)0x0) goto code_?;
          pAVar18 = (AnimationData *)
                    mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                    Queue_1_System_Object__Dequeue
                              ((Queue_1_System_Object_ *)pQVar11,
                               MethodInfo__System__Collections__Generic__Queue<AnimationData>__Dequeue__
                              );
          bVar12 = iRam_? != 0;
          (pBVar3->fields).nextAnim = pAVar18;
          if (bVar12) {
            uVar13 = (uint)((ulonglong)&(pBVar3->fields).nextAnim >> 0xc);
            uVar15 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
            do {
              uVar19 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
              puVar16 = (ulonglong *)(uVar15 * 8 + 0xADDR);
              LOCK();
              bVar12 = uVar19 == *puVar16;
              if (bVar12) {
                *puVar16 = uVar19 | 1L << (ulonglong)(uVar13 & 0x3f);
              }
              UNLOCK();
            } while (!bVar12);
          }
          pAVar18 = (pBVar3->fields).nextAnim;
        }
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_Jump);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pBVar3->fields).currentAnim != (AnimationData *)0x0) {
      if ((pBVar3->fields).prevAnim != (AnimationData *)0x0) {
        pSVar20 = (((pBVar3->fields).currentAnim)->fields).state;
        pSVar21 = (((pBVar3->fields).prevAnim)->fields).state;
        if (pSVar20 == pSVar21) {
          return;
        }
        if ((((pSVar20 != (String *)0x0) && (pSVar21 != (String *)0x0)) &&
            ((pSVar20->fields)._stringLength == (pSVar21->fields)._stringLength)) &&
           (bVar22 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar20->fields)._firstChar,
                                (uint8_t *)&(pSVar21->fields)._firstChar,
                                (longlong)(pSVar20->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar22 != 0)) {
          return;
        }
      }
      pSVar20 = StringLiteral_Jump;
      pAVar18 = (pBVar3->fields).currentAnim;
      if (pAVar18 == (AnimationData *)0x0) goto code_?;
      pSVar21 = (pAVar18->fields).state;
      if ((pSVar21 == StringLiteral_Jump) ||
         (((pSVar21 != (String *)0x0 && (StringLiteral_Jump != (String *)0x0)) &&
          (((pSVar21->fields)._stringLength == (StringLiteral_Jump->fields)._stringLength &&
           (bVar22 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar21->fields)._firstChar,
                                (uint8_t *)&(StringLiteral_Jump->fields)._firstChar,
                                (longlong)(pSVar21->fields)._stringLength * 2,(MethodInfo *)0x0),
           bVar22 != 0)))))) {
        pAVar23 = (pBVar3->fields).avatarAnimation;
        if (pAVar23 == (Animation *)0x0) goto code_?;
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_RewindNamed
                  (pAVar23,pSVar20,(MethodInfo *)0x0);
        pAVar18 = (pBVar3->fields).currentAnim;
        if ((pAVar18 == (AnimationData *)0x0) ||
           (pAVar23 = (pBVar3->fields).avatarAnimation, pAVar23 == (Animation *)0x0))
        goto code_?;
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                  (pAVar23,(pAVar18->fields).state,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
      }
      else {
        pAVar18 = (pBVar3->fields).currentAnim;
        if ((pAVar18 == (AnimationData *)0x0) ||
           (pAVar23 = (pBVar3->fields).avatarAnimation, pAVar23 == (Animation *)0x0))
        goto code_?;
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                  (pAVar23,(pAVar18->fields).state,_UNK_?,PlayMode__Enum_StopAll,
                   (MethodInfo *)0x0);
      }
      pAVar18 = (pBVar3->fields).currentAnim;
      if (pAVar18 == (AnimationData *)0x0) goto code_?;
      iVar17 = (pAVar18->fields).timeStamp;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__TransformNetworkManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (iVar17 < TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField) {
        iVar17 = FUN_?();
        pAVar18 = (pBVar3->fields).currentAnim;
        if (pAVar18 == (AnimationData *)0x0) {
code_?:
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar24 = (pAVar18->fields).timeStamp;
        pAVar23 = (pBVar3->fields).avatarAnimation;
        if ((pAVar23 == (Animation *)0x0) ||
           (pAVar25 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                (pAVar23,(pAVar18->fields).state,(MethodInfo *)0x0),
           pAVar25 == (AnimationState *)0x0)) goto code_?;
        pvVar26 = (pAVar25->fields)._.m_Ptr;
        if (pvVar26 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar25,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar27 = func_?(&UNK_?);
          FUN_?(uVar27,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        fVar28 = (float)(iVar17 - iVar24) * _UNK_?;
        fVar29 = (float)(*pcRam_?)(pvVar26);
        pAVar18 = (pBVar3->fields).currentAnim;
        if (((pAVar18 == (AnimationData *)0x0) ||
            (pAVar23 = (pBVar3->fields).avatarAnimation, pAVar23 == (Animation *)0x0)) ||
           (pAVar25 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                (pAVar23,(pAVar18->fields).state,(MethodInfo *)0x0),
           pAVar25 == (AnimationState *)0x0)) goto code_?;
        pvVar26 = (pAVar25->fields)._.m_Ptr;
        if (pvVar26 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar25,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar27 = func_?(&UNK_?);
          FUN_?(uVar27,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar26,fVar28 / fVar29);
      }
      (pBVar3->fields).prevAnim = (pBVar3->fields).currentAnim;
      if (iRam_? != 0) {
        uVar13 = (uint)((ulonglong)&(pBVar3->fields).prevAnim >> 0xc);
        uVar15 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
        do {
          uVar19 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
          puVar16 = (ulonglong *)(uVar15 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar19 == *puVar16;
          if (bVar12) {
            *puVar16 = uVar19 | 1L << (uVar13 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      iVar17 = iRam_?;
      (pBVar3->fields).currentAnim = (AnimationData *)0x0;
      if (iVar17 != 0) {
        uVar13 = (uint)((ulonglong)&(pBVar3->fields).currentAnim >> 0xc);
        uVar15 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
        do {
          uVar19 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
          puVar16 = (ulonglong *)(uVar15 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar19 == *puVar16;
          if (bVar12) {
            *puVar16 = uVar19 | 1L << (uVar13 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
    }
    return;
  }
  pAVar18 = (AnimationData *)FUN_?(TypeInfo__AnimationData);
  iVar17 = iRam_?;
  (pAVar18->fields).state = (String *)pOVar7;
  if (iVar17 != 0) {
    uVar13 = (uint)((ulonglong)&pAVar18->fields >> 0xc);
    lVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
    do {
      uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
      puVar16 = (ulonglong *)(lVar14 + 0xADDR);
      LOCK();
      bVar12 = uVar15 == *puVar16;
      if (bVar12) {
        *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
      iVar17 = iRam_?;
    } while (!bVar12);
  }
  (pAVar18->fields).timeStamp = iVar9;
  (pBVar3->fields).currentAnim = pAVar18;
  if (iVar17 != 0) {
    uVar13 = (uint)((ulonglong)&(pBVar3->fields).currentAnim >> 0xc);
    lVar14 = (ulonglong)((uVar13 & 0x1fffff) >> 6) * 8;
    do {
      uVar15 = *(ulonglong *)(lVar14 + 0xADDR);
      puVar16 = (ulonglong *)(lVar14 + 0xADDR);
      LOCK();
      bVar12 = uVar15 == *puVar16;
      if (bVar12) {
        *puVar16 = uVar15 | 1L << (uVar13 & 0x3f);
      }
      UNLOCK();
    } while (!bVar12);
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Jump,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pBVar3->fields).currentAnim != (AnimationData *)0x0) {
    if ((pBVar3->fields).prevAnim != (AnimationData *)0x0) {
      pSVar20 = (((pBVar3->fields).currentAnim)->fields).state;
      pSVar21 = (((pBVar3->fields).prevAnim)->fields).state;
      if (pSVar20 == pSVar21) {
        return;
      }
      if (((pSVar20 != (String *)0x0) && (pSVar21 != (String *)0x0)) &&
         (((pSVar20->fields)._stringLength == (pSVar21->fields)._stringLength &&
          (bVar22 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar20->fields)._firstChar,
                               (uint8_t *)&(pSVar21->fields)._firstChar,
                               (longlong)(pSVar20->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar22 != 0)))) {
        return;
      }
    }
    pSVar20 = StringLiteral_Jump;
    pAVar18 = (pBVar3->fields).currentAnim;
    if (pAVar18 == (AnimationData *)0x0) goto DAT_?;
    pSVar21 = (pAVar18->fields).state;
    if ((pSVar21 == StringLiteral_Jump) ||
       ((((pSVar21 != (String *)0x0 && (StringLiteral_Jump != (String *)0x0)) &&
         ((pSVar21->fields)._stringLength == (StringLiteral_Jump->fields)._stringLength)) &&
        (bVar22 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar21->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_Jump->fields)._firstChar,
                             (longlong)(pSVar21->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar22 != 0)))) {
      pAVar23 = (pBVar3->fields).avatarAnimation;
      if (pAVar23 == (Animation *)0x0) goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_RewindNamed
                (pAVar23,pSVar20,(MethodInfo *)0x0);
      pAVar18 = (pBVar3->fields).currentAnim;
      if ((pAVar18 == (AnimationData *)0x0) ||
         (pAVar23 = (pBVar3->fields).avatarAnimation, pAVar23 == (Animation *)0x0))
      goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                (pAVar23,(pAVar18->fields).state,PlayMode__Enum_StopAll,(MethodInfo *)0x0);
    }
    else {
      pAVar18 = (pBVar3->fields).currentAnim;
      if ((pAVar18 == (AnimationData *)0x0) ||
         (pAVar23 = (pBVar3->fields).avatarAnimation, pAVar23 == (Animation *)0x0))
      goto DAT_?;
      UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_CrossFade
                (pAVar23,(pAVar18->fields).state,_UNK_?,PlayMode__Enum_StopAll,
                 (MethodInfo *)0x0);
    }
    pAVar18 = (pBVar3->fields).currentAnim;
    if (pAVar18 == (AnimationData *)0x0) goto DAT_?;
    iVar17 = (pAVar18->fields).timeStamp;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__TransformNetworkManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (iVar17 < TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField) {
      iVar17 = FUN_?();
      pAVar18 = (pBVar3->fields).currentAnim;
      if (pAVar18 == (AnimationData *)0x0) {
DAT_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar24 = (pAVar18->fields).timeStamp;
      pAVar23 = (pBVar3->fields).avatarAnimation;
      if ((pAVar23 == (Animation *)0x0) ||
         (pAVar25 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar23,(pAVar18->fields).state,(MethodInfo *)0x0),
         pAVar25 == (AnimationState *)0x0)) goto DAT_?;
      pvVar26 = (pAVar25->fields)._.m_Ptr;
      if (pvVar26 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar25,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar27 = func_?(&UNK_?);
        FUN_?(uVar27,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      fVar28 = (float)(iVar17 - iVar24) * _UNK_?;
      fVar29 = (float)(*pcRam_?)(pvVar26);
      pAVar18 = (pBVar3->fields).currentAnim;
      if (((pAVar18 == (AnimationData *)0x0) ||
          (pAVar23 = (pBVar3->fields).avatarAnimation, pAVar23 == (Animation *)0x0)) ||
         (pAVar25 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar23,(pAVar18->fields).state,(MethodInfo *)0x0),
         pAVar25 == (AnimationState *)0x0)) goto DAT_?;
      pvVar26 = (pAVar25->fields)._.m_Ptr;
      if (pvVar26 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar25,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar27 = func_?(&UNK_?);
        FUN_?(uVar27,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar26,fVar28 / fVar29);
    }
    (pBVar3->fields).prevAnim = (pBVar3->fields).currentAnim;
    if (iRam_? != 0) {
      uVar13 = (uint)((ulonglong)&(pBVar3->fields).prevAnim >> 0xc);
      uVar15 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
      do {
        uVar19 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
        puVar16 = (ulonglong *)(uVar15 * 8 + 0xADDR);
        LOCK();
        bVar12 = uVar19 == *puVar16;
        if (bVar12) {
          *puVar16 = uVar19 | 1L << (uVar13 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    iVar17 = iRam_?;
    (pBVar3->fields).currentAnim = (AnimationData *)0x0;
    if (iVar17 != 0) {
      uVar13 = (uint)((ulonglong)&(pBVar3->fields).currentAnim >> 0xc);
      uVar15 = (ulonglong)((uVar13 & 0x1fffff) >> 6);
      do {
        uVar19 = *(ulonglong *)(uVar15 * 8 + 0xADDR);
        puVar16 = (ulonglong *)(uVar15 * 8 + 0xADDR);
        LOCK();
        bVar12 = uVar19 == *puVar16;
        if (bVar12) {
          *puVar16 = uVar19 | 1L << (uVar13 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
  }
  return;
}


/* Void OnEnterVehicle() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnEnterVehicle(MVAvatar *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatar;
  if ((pAVar1 == (Avatar *)0x0) ||
     (obj = (pAVar1->fields).waterSplashComponent, obj == (WaterSplashComponent *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (WaterSplashComponent *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,0);
  return;
}


/* Void OnHealthChange(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnHealthChange
               (MVAvatar *this,Object *newHealthData,MethodInfo *method)

{
  pMVar1 = (this->fields).body;
  if ((((pMVar1 != (MVBody *)0x0) &&
       (pMVar2 = (pMVar1->fields).bodyObject, pMVar2 != (MVBodyObject *)0x0)) &&
      (this_00 = (pMVar2->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)) &&
     (newHealthData != (Object *)0x0)) {
    if ((newHealthData->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40))
    {
      fVar3 = *(float *)&newHealthData[1].klass;
      if (fVar3 < (this_00->fields).previousBlinkHealth) {
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_00,BlinkType__Enum_Damage,_UNK_?,(MethodInfo *)0x0);
      }
      (this_00->fields).previousBlinkHealth = fVar3;
      return;
    }
    FUN_?(newHealthData);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnLeaveVehicle() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnLeaveVehicle(MVAvatar *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatar;
  if ((pAVar1 == (Avatar *)0x0) ||
     (obj = (pAVar1->fields).waterSplashComponent, obj == (WaterSplashComponent *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (WaterSplashComponent *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,1);
  return;
}


/* Void OnShieldChange(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnShieldChange
               (MVAvatar *this,Object *newShieldData,MethodInfo *method)

{
  pMVar1 = (this->fields).body;
  if ((((pMVar1 != (MVBody *)0x0) &&
       (pMVar2 = (pMVar1->fields).bodyObject, pMVar2 != (MVBodyObject *)0x0)) &&
      (this_00 = (pMVar2->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)) &&
     (newShieldData != (Object *)0x0)) {
    if ((newShieldData->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40))
    {
      fVar3 = *(float *)&newShieldData[1].klass;
      if (fVar3 < (this_00->fields).previousBlinkShield) {
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_00,BlinkType__Enum_ShieldDamage,_UNK_?,
                   (MethodInfo *)0x0);
      }
      (this_00->fields).previousBlinkShield = fVar3;
      return;
    }
    FUN_?(newShieldData);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnStateChangeToHidden() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_OnStateChangeToHidden
               (MVAvatar *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatar;
  if ((pAVar1 != (Avatar *)0x0) &&
     (pCVar2 = (pAVar1->fields).chatBubbleAnchor, pCVar2 != (ChatAnchor *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pCVar3 = (pCVar2->fields).AttachedBubble;
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
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pCVar3 != (ChatBubble *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pCVar3->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pCVar3 = (pCVar2->fields).AttachedBubble;
        if (pCVar3 == (ChatBubble *)0x0) goto code_?;
        ChatBubble::ChatBubble_HideBubble(pCVar3,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetTeam() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_SetTeam(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarUIHandlerRemote);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatar;
  if (pAVar1 != (Avatar *)0x0) {
    if ((pAVar1->fields).isLocal == 0) {
      if ((pAVar1 != (Avatar *)0x0) &&
         (pAVar2 = (AvatarUIHandlerRemote *)(pAVar1->fields).avatarUIHandler,
         pAVar2 != (AvatarUIHandlerRemote *)0x0)) {
        bVar3 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
        if (((pAVar2->klass->_1).naturalAligment < bVar3) ||
           ((pAVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
            (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
          FUN_?(pAVar2);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        AvatarUIHandlerRemote::AvatarUIHandlerRemote_UpdateNameTag(pAVar2,(MethodInfo *)0x0);
        pAVar1 = (this->fields).avatar;
        if (pAVar1 != (Avatar *)0x0) {
          pAVar2 = (AvatarUIHandlerRemote *)(pAVar1->fields).avatarUIHandler;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((((pMVar5 != (MVGameControllerBase *)0x0) &&
               (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
              (pMVar7 = (pMVar6->fields).playerContainer, pMVar7 != (MVPlayerContainer *)0x0)) &&
             ((pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                   (pMVar7,(MethodInfo *)0x0), pMVar8 != (MVLocalPlayer *)0x0 &&
              (isFriendly = MVPlayer::MVPlayer_IsOnSameTeam_1
                                      ((MVPlayer *)pMVar8,(MVWorldObjectClient *)this,
                                       (MethodInfo *)0x0), pAVar2 != (AvatarUIHandlerRemote *)0x0))
             )) {
            bVar3 = (TypeInfo__AvatarUIHandlerRemote->_1).naturalAligment;
            if ((bVar3 <= (pAVar2->klass->_1).naturalAligment) &&
               ((pAVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
                (Il2CppClass *)TypeInfo__AvatarUIHandlerRemote)) {
              AvatarUIHandlerRemote::AvatarUIHandlerRemote_SetHealthBarColor
                        (pAVar2,isFriendly,(MethodInfo *)0x0);
              return;
            }
            FUN_?(pAVar2,TypeInfo__AvatarUIHandlerRemote);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar5 != (MVGameControllerBase *)0x0) &&
          (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
         ((pMVar7 = (pMVar6->fields).playerContainer, pMVar7 != (MVPlayerContainer *)0x0 &&
          (pDVar9 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers
                               (pMVar7,(MethodInfo *)0x0),
          pDVar9 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)))) {
        pDStack_10 = (pDVar9->fields)._dictionary;
        ppDStack_11 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
        uStack_12 = 0;
        if (iRam_? != 0) {
          uVar13 = (uint)((ulonglong)&pDStack_14 >> 0xc);
          puVar15 = (ulonglong *)((ulonglong)((uVar13 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar16 = *puVar15;
            LOCK();
            uVar17 = *puVar15;
            if (uVar16 == uVar17) {
              *puVar15 = uVar16 | 1L << (uVar13 & 0x3f);
            }
            UNLOCK();
          } while (uVar16 != uVar17);
        }
        if (pDStack_10 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
          pDStack_14 = pDStack_10;
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        ppDStack_11 = (Dictionary_2_System_Int32_MVPlayer_ **)
                      ((ulonglong)(uint)(pDStack_10->fields)._version << 0x20);
        uStack_12 = 0;
        uStack_18 = (ulonglong)ppDStack_11;
        pMStack_19 = (MVPlayer *)0x0;
        pDStack_14 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
        ppDStack_11 = &pDStack_10;
        while (pDStack_10 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
          if (uStack_18._4_4_ != (pDStack_10->fields)._version) goto code_?;
          uVar17 = uStack_18 & 0xffffffff;
          do {
            if (pDStack_10 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
            uVar13 = (uint)uVar17;
            if ((uint)(pDStack_10->fields)._count <= uVar13) {
              return;
            }
            pDVar20 = (pDStack_10->fields)._entries;
            uVar17 = (ulonglong)(uVar13 + 1);
            uStack_18 = CONCAT44(uStack_18._4_4_,uVar13 + 1);
            if (pDVar20 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
            goto code_?;
            if ((uint)pDVar20->max_length <= uVar13) goto code_?;
          } while (pDVar20->vector[(int)uVar13].hashCode < 0);
          pMStack_19 = pDVar20->vector[(int)uVar13].value;
          func_?();
          if (pMStack_19 == (MVPlayer *)0x0) goto code_?;
          iVar21 = (pMStack_19->fields)._ActorNr_k__BackingField;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (pMVar5 == (MVGameControllerBase *)0x0) goto code_?;
          pMVar6 = (pMVar5->fields).game;
          if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
          pMVar7 = (pMVar6->fields).playerContainer;
          if (pMVar7 == (MVPlayerContainer *)0x0) goto code_?;
          pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar7,(MethodInfo *)0x0);
          if (pMVar8 == (MVLocalPlayer *)0x0) goto code_?;
          if (iVar21 != (pMVar8->fields)._._ActorNr_k__BackingField) {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_Reimplement_with_callback_functi,(MethodInfo *)0x0);
          }
        }
        goto code_?;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TransferChild(Int32) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_TransferChild
               (MVAvatar *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBody);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Transfer_child);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_TransferChild((MVGroup *)this,id,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Transfer_child,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,id,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      bVar2 = (TypeInfo__MVBody->_1).naturalAligment;
      if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
         ((MVBody__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
          TypeInfo__MVBody)) {
        (*(this->klass->vtable).AttachBody.methodPtr)
                  (this,pMVar1,(this->klass->vtable).AttachBody.method);
      }
    }
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TrySpawningHealParticles(Single, Single) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_TrySpawningHealParticles
               (MVAvatar *this,float previousHealth,float currentHealth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  if ((currentHealth <= previousHealth) ||
     (fVar3 - (this->fields).healParticleSpawnTime <= _UNK_?)) {
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  bVar4 = cRam_? == '\0';
  (this->fields).healParticleSpawnTime = fVar3;
  if (bVar4) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar5 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar5 != (PrefabPool *)0x0) {
    original = (pPVar5->fields).healingParticles;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_02 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                        );
    this_00 = (this->fields)._._.gameObject;
    if ((this_00 != (GameObject *)0x0) &&
       (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar7 != (void *)0x0) {
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(pvVar7);
        if ((this_02 != (Component *)0x0) &&
           (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               (this_02,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar7 = (pTVar6->fields)._._.m_CachedPtr;
          if (pvVar7 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcVar1 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pcRam_? = pcVar1;
          (*pcRam_?)(pvVar7);
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             (this_02,(MethodInfo *)0x0);
          if (pTVar6 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (pTVar6,(this->fields)._._.transform,1,(MethodInfo *)0x0);
            pAVar8 = (this->fields).avatar;
            if ((((pAVar8 != (Avatar *)0x0) &&
                 (pMVar9 = (pAVar8->fields).mvAvatar, pMVar9 != (MVAvatar *)0x0)) &&
                (pMVar10 = (pMVar9->fields).body, pMVar10 != (MVBody *)0x0)) &&
               ((pMVar11 = (pMVar10->fields).bodyObject, pMVar11 != (MVBodyObject *)0x0 &&
                (this_01 = (pMVar11->fields).avatarBlinker, this_01 != (AvatarBlinker *)0x0)))) {
              BlinkerBase::BlinkerBase_StartBlinking
                        ((BlinkerBase *)this_01,BlinkType__Enum_Healing,_UNK_?,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateControllerLateUpdate() */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_UpdateControllerLateUpdate
               (MVAvatar *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarPickupOwner;
  pAVar2 = (this->fields).limbManager;
  if (pAVar1 != (AvatarPickupOwner *)0x0) {
    pDStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)&UNK_?;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                        ((Vector3 *)&stack0xffffffffffffffe8,&(pAVar1->fields)._.lookDirection,in_R8
                        );
    if (pAVar2 != (AvatarLimbManager *)0x0) {
      pBStack_5 = *(Blinker **)pVVar4;
      fStack_6 = pVVar4->z;
      pDStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)&UNK_?;
      (*(pAVar2->klass->vtable).UpdateLimbRotations.methodPtr)
                (pAVar2,&pBStack_5,(pAVar2->klass->vtable).UpdateLimbRotations.method);
      pMVar7 = (this->fields).body;
      if (((pMVar7 != (MVBody *)0x0) &&
          (pMVar8 = (pMVar7->fields).bodyObject, pMVar8 != (MVBodyObject *)0x0)) &&
         (pAVar9 = (pMVar8->fields).avatarBlinker, pAVar9 != (AvatarBlinker *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                        ,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__get_Current__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BlinkType,_Blinker>__GetEnumerator__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((((pAVar9->fields)._.visible == 0) ||
            ((pAVar9->fields)._.blinkers == (Dictionary_2_BlinkType_Blinker_ *)0x0)) ||
           (pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                ((Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                  *)(pAVar9->fields)._.blinkers,
                                 MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                                ),
           pDVar10 ==
           (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
            *)0x0)) {
          return;
        }
        this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)(pAVar9->fields)._.blinkers;
        if ((this_00 ==
             (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)0x0) ||
           (pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                (this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Values__
                                ),
           pDVar10 ==
           (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
            *)0x0)) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pDStack_12 = (pDVar10->fields)._dictionary;
        ppDStack_13 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                       **)0x0;
        uStack_14 = 0;
        if (iRam_? != 0) {
          uVar15 = (uint)((ulonglong)&pDStack_3 >> 0xc);
          puVar16 = (ulonglong *)((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar17 = *puVar16;
            LOCK();
            uVar18 = *puVar16;
            if (uVar17 == uVar18) {
              *puVar16 = uVar17 | 1L << (uVar15 & 0x3f);
            }
            UNLOCK();
          } while (uVar17 != uVar18);
        }
        if (pDStack_12 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) {
          pDStack_3 = pDStack_12;
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iStack_19 = (pDStack_12->fields)._version;
        uStack_14 = 0;
        uStack_20 = 0;
        pBStack_5 = (Blinker *)0x0;
        pDStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      *)0x0;
        ppDStack_13 = &pDStack_12;
code_?:
        if (pDStack_12 !=
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) {
          if (iStack_19 == (pDStack_12->fields)._version) {
            do {
              if (pDStack_12 ==
                  (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) goto code_?;
              if ((uint)(pDStack_12->fields)._count <= uStack_20) {
                return;
              }
              pDVar21 = (pDStack_12->fields)._entries;
              lVar22 = (longlong)(int)uStack_20;
              uVar15 = uStack_20 + 1;
              if (pDVar21 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                             *)0x0) goto code_?;
              if ((uint)pDVar21->max_length <= uStack_20) {
                uStack_20 = uVar15;
                FUN_?();
                goto code_?;
              }
              uStack_20 = uVar15;
            } while ((&pDVar21->vector[0].hashCode)[lVar22 * 6] < 0);
            pBStack_5 = *(Blinker **)((longlong)&pDVar21->vector[0].key + lVar22 * 0x18 + 8);
            func_?();
            this_02 = pBStack_5;
            if (pBStack_5 != (Blinker *)0x0) goto code_?;
            goto code_?;
          }
          goto code_?;
        }
code_?:
        FUN_?();
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
  }
  pDStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)&UNK_?;
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
code_?:
  bVar23 = Blinker::Blinker_get_IsExpired(pBStack_5,(MethodInfo *)0x0);
  if ((bVar23 == 0) &&
     ((*(pAVar9->klass->vtable).BeforeDraw.methodPtr)(),
     (pAVar9->fields)._.meshFilters != (MeshFilter__Array *)0x0)) {
    pMVar24 = (pAVar9->fields)._.meshFilters;
    for (uVar15 = 0; uVar25 = (uint)pMVar24->max_length, (int)uVar15 < (int)uVar25; uVar15 = uVar15 + 1
        ) {
      if (uVar25 <= uVar15) goto code_?;
      this_01 = pMVar24->vector[(int)uVar15];
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
      if (this_01 != (MeshFilter *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_01->fields)._._.m_CachedPtr != (void *)0x0) {
          this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_01,(MethodInfo *)0x0);
          if (this_03 == (GameObject *)0x0) goto code_?;
          bVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_get_activeInHierarchy(this_03,(MethodInfo *)0x0);
          if (bVar23 != 0) {
            tfm = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_01,(MethodInfo *)0x0);
            mesh = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                             (this_01,(MethodInfo *)0x0);
            if (this_02 == (Blinker *)0x0) goto code_?;
            Blinker::Blinker_Draw
                      (this_02,mesh,tfm,(pAVar9->fields)._.targetCamera,
                       (pAVar9->fields)._.layerMask,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
  goto code_?;
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  uVar15 = uStack_20;
code_?:
  uStack_20 = uVar15;
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
  goto code_?;
}


/* Void <InitializeModifiers>b__60_0(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar__InitializeModifiers_b__60_0
               (MVAvatar *this,Object *modifiers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  owner = (this->fields).avatar;
  if (owner == (Avatar *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (modifiers != (Object *)0x0) {
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((modifiers->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (modifiers->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(modifiers,
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
               *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackageFactory);
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__AvatarModifierPackageType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarModifierPackageType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Add_AvatarModifierPackageType__unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Add_AvatarModifierPackageType__AvatarModifier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__ContainsKey_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Remove_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Remove_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Item_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__get_Item_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__set_Item_AvatarModifierPackageType__unsigned_char_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_AvatarModifier>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_AvatarModifier>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<AvatarModifierPackageType,_AvatarModifier>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<AvatarModifierPackageType,_AvatarModifier>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__Add_AvatarModifierPackageType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<AvatarModifierPackageType>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_3 = (undefined1  [8])0x0;
  pMStack_4 = (MonitorData *)0x0;
  pSStack_5 = (String *)0x0;
  pLStack_6 = (List_1_System_UInt32Enum_ *)0x0;
  uStack_7._0_4_ = 0;
  uStack_7._4_4_ = 0;
  this_03 = (List_1_System_UInt32Enum_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<AvatarModifierPackageType>);
  pLStack_8 = this_03;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
             MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__List__);
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(owner->fields).modifiers;
  pLStack_9 = this_03;
  if ((this_00 !=
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     && (pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::TypeConverterRegistry+ConverterKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                             (this_00,
                              MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Keys__
                             ),
        pDVar10 !=
        (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
         *)0x0)) {
    pDStack_11 = (pDVar10->fields)._dictionary;
    ppDStack_12 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    **)0x0;
    uStack_13 = 0;
    if (iRam_? != 0) {
      uVar14 = (uint)((ulonglong)&pDStack_15 >> 0xc);
      lVar16 = (ulonglong)((uVar14 & 0x1fffff) >> 6) * 8;
      method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                   *)(ulonglong)(uVar14 & 0x3f);
      do {
        uVar17 = *(ulonglong *)(lVar16 + 0xADDR);
        puVar18 = (ulonglong *)(lVar16 + 0xADDR);
        LOCK();
        bVar19 = uVar17 == *puVar18;
        if (bVar19) {
          *puVar18 = uVar17 | 1L << (longlong)method_01;
        }
        UNLOCK();
      } while (!bVar19);
    }
    if (pDStack_11 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      pDStack_15 = pDStack_11;
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iStack_20 = (pDStack_11->fields)._version;
    uStack_13 = 0;
    uStack_21 = 0;
    uStack_22 = 0;
    pDStack_15 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0;
    ppDStack_12 = &pDStack_11;
    value = this_03;
code_?:
    if (pDStack_11 !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      if (iStack_20 == (pDStack_11->fields)._version) {
        do {
          if (pDStack_11 ==
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) goto code_?;
          if ((uint)(pDStack_11->fields)._count <= uStack_21) {
            _uStack_180 = CONCAT44(iStack_20,(pDStack_11->fields)._count + 1);
            uStack_22 = (ulonglong)uStack_22._4_4_ << 0x20;
            pSVar23 = (String *)0x0;
            uVar14 = 0;
            if (this_03 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
            lVar16 = 0x20;
            goto code_?;
          }
          method_01 = (pDStack_11->fields)._entries;
          lVar16 = (longlong)(int)uStack_21;
          uVar14 = uStack_21 + 1;
          if (method_01 ==
              (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
               *)0x0) goto code_?;
          if (*(uint *)&method_01->max_length <= uStack_21) {
            uStack_21 = uVar14;
            FUN_?();
            goto code_?;
          }
          uStack_21 = uVar14;
        } while (((_union_86 *)&method_01->vector[0].hashCode)[lVar16 * 3].__klassIndex < 0);
        uVar24 = *(undefined4 *)((longlong)&method_01->vector[0].key + lVar16 * 0x18);
        uStack_22 = CONCAT44(uStack_22._4_4_,uVar24);
        EStack_25.klass = (Enum__Class *)TypeInfo__AvatarModifierPackageType;
        EStack_25.monitor = (MonitorData *)0xffffffffffffffff;
        uStack_26 = CONCAT44(uStack_26._4_4_,uVar24);
        pSVar23 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_25,(MethodInfo *)0x0);
        pSVar23 = mscorlib.dll::System::String::String_Concat_4
                            (::StringLiteral__,pSVar23,(MethodInfo *)0x0);
        if (modifiers != (Object *)0x0) goto code_?;
        goto code_?;
      }
      goto code_?;
    }
code_?:
    FUN_?();
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  goto code_?;
code_?:
  if ((pLStack_8->fields)._size <= (int)uVar14) goto code_?;
  uVar14 = (uint)pSVar23;
  if ((uint)(this_03->fields)._size <= uVar14) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    goto code_?;
  }
  pUVar27 = (this_03->fields)._items;
  if (pUVar27 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
  if ((uint)pUVar27->max_length <= uVar14) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  IVar28 = *(Int32Enum__Enum *)((longlong)pUVar27->vector + lVar16 + -0x20);
  value = (List_1_System_UInt32Enum_ *)(ulonglong)IVar28;
  pDVar29 = (owner->fields).modifiers;
  if (pDVar29 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0)
  goto code_?;
  pOVar30 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar29,IVar28,
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Item_AvatarModifierPackageType_
                      );
  pDVar29 = (owner->fields).modifiers;
  if (pDVar29 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0)
  goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
  Dictionary_2_System_Int32Enum_System_Object__Remove
            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar29,IVar28,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Remove_AvatarModifierPackageType_
            );
  this_01 = (Dictionary_2_System_Int32Enum_System_Single_ *)(owner->fields).currentModifierByteState
  ;
  if (this_01 == (Dictionary_2_System_Int32Enum_System_Single_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
  Dictionary_2_System_Int32Enum_System_Single__Remove
            (this_01,IVar28,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Remove_AvatarModifierPackageType_
            );
  if (*(int *)&(TypeInfo__AvatarModifierPackageFactory->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar31 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                      (&AStack_32,IVar28,(MethodInfo *)0x0);
  uVar33 = 0;
  pAVar34 = pAVar31->avatarModifiers;
  piVar35 = &pAVar34->vector[0].avatarModifierEffect;
  while( true ) {
    if (pAVar34 == (AvatarModifierPackage_AvatarModifier__Array *)0x0) goto code_?;
    uVar36 = (uint)pAVar34->max_length;
    if ((int)uVar36 <= (int)uVar33) break;
    pBVar37 = (owner->fields).modifierEffectCount;
    if (uVar36 <= uVar33) goto code_?;
    if (pBVar37 == (Byte__Array *)0x0) goto code_?;
    if ((uint)pBVar37->max_length <= (uint)*piVar35) goto code_?;
    pBVar37->vector[*piVar35] = pBVar37->vector[*piVar35] - 1;
    uVar33 = uVar33 + 1;
    piVar35 = piVar35 + 4;
  }
  if (pOVar30 == (Object *)0x0) goto code_?;
  *(undefined1 *)((longlong)&pOVar30[2].klass + 4) = 0;
  method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
               *)pOVar30->klass[1]._0.castClass;
  (*(code *)pOVar30->klass[1]._0.element_class)(pOVar30,owner);
  uVar14 = uVar14 + 1;
  pSVar23 = (String *)(ulonglong)uVar14;
  lVar16 = lVar16 + 4;
  goto code_?;
code_?:
  method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
               *)MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 ->klass->rgctx_data[0x21].method;
  iVar38 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::StyleComplexSelector+PseudoStateData]::
           Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                     ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)modifiers,(Object *)pSVar23,(MethodInfo *)method_01);
  pIVar39 = TypeRef__AvatarModifierPackageType;
  if (iVar38 < 0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    pTVar40 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar39,(MethodInfo *)0x0);
    if (pSVar23 != (String *)0x0) {
      auStackX_20[0] = 0x5f;
      value = (List_1_System_UInt32Enum_ *)
              mscorlib.dll::System::String::String_TrimHelper
                        (pSVar23,auStackX_20,1,String_TrimType__Enum_Head,(MethodInfo *)0x0);
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pOVar30 = mscorlib.dll::System::Enum::Enum_Parse(pTVar40,(String *)value,(MethodInfo *)0x0);
      if (pOVar30 != (Object *)0x0) {
        method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                     *)TypeInfo__AvatarModifierPackageType;
        if ((pOVar30->klass->_0).element_class ==
            (TypeInfo__AvatarModifierPackageType->_0).element_class) {
          if (this_03 != (List_1_System_UInt32Enum_ *)0x0) {
            method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                         *)
                        MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__Add_AvatarModifierPackageType_
            ;
            mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
            List_1_System_UInt32Enum__Add
                      (this_03,*(UInt32Enum__Enum *)&pOVar30[1].klass,
                       MethodInfo__System__Collections__Generic__List<AvatarModifierPackageType>__Add_AvatarModifierPackageType_
                      );
            goto code_?;
          }
code_?:
          pOVar30 = (Object *)FUN_?();
        }
        FUN_?(pOVar30,method_01);
      }
      FUN_?();
    }
    FUN_?();
code_?:
    FUN_?();
    uVar14 = uStack_21;
code_?:
    uStack_21 = uVar14;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
    goto code_?;
  }
  goto code_?;
code_?:
  FUN_?(value);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(value,method_01);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  uVar41 = func_?(&UNK_?);
  FUN_?(uVar41,0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pSVar23,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(method_01);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
code_?:
  if (modifiers != (Object *)0x0) {
    if (iRam_? != 0) {
      uVar14 = (uint)((ulonglong)&EStack_25 >> 0xc);
      lVar16 = (ulonglong)((uVar14 & 0x1fffff) >> 6) * 8;
      do {
        uVar17 = *(ulonglong *)(lVar16 + 0xADDR);
        puVar18 = (ulonglong *)(lVar16 + 0xADDR);
        LOCK();
        bVar19 = uVar17 == *puVar18;
        if (bVar19) {
          *puVar18 = uVar17 | 1L << (uVar14 & 0x3f);
        }
        UNLOCK();
      } while (!bVar19);
    }
    EStack_25.monitor = (MonitorData *)(ulonglong)*(uint *)((longlong)&modifiers[2].monitor + 4);
    uStack_42 = 2;
    uStack_26 = 0;
    uStack_43 = 0;
    pMStack_4 = EStack_25.monitor;
    pSStack_5 = (String *)0x0;
    pLStack_6 = (List_1_System_UInt32Enum_ *)0x0;
    uStack_7._0_4_ = 2;
    uStack_7._4_4_ = 0;
    pDStack_15 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0;
    ppDStack_12 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    **)auStack_3;
    EStack_25.klass = (Enum__Class *)modifiers;
    auStack_3 = (undefined1  [8])modifiers;
    do {
      bVar44 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
               Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          auStack_3,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                         );
      value = pLStack_6;
      pIVar39 = TypeRef__AvatarModifierPackageType;
      if (bVar44 == 0) {
        return;
      }
      pSVar23 = (String *)0x0;
      if (pSStack_5 != (String *)0x0) {
        if (pSStack_5->klass == pSRam0000000182dbbc60) {
          pSVar23 = pSStack_5;
        }
        if (pSVar23 == (String *)0x0) goto code_?;
      }
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pTVar40 = (Type *)0x0;
      if (pIVar39 != (Il2CppType *)0x0) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar16 = FUN_?(pIVar39,1);
        pTVar40 = (Type *)FUN_?(lVar16 + 0x20);
      }
      if (pSVar23 == (String *)0x0) goto code_?;
      pSVar23 = mscorlib.dll::System::String::String_TrimHelper
                          (pSVar23,(uint16_t *)&stack0x00000008,1,String_TrimType__Enum_Head,
                           (MethodInfo *)0x0);
      if ((*(int *)(lRam_? + 0xe4) == 0) &&
         (FUN_?(), *(int *)(lRam_? + 0xe4) == 0)) {
        FUN_?();
      }
      uVar41 = 0;
      method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                   *)mscorlib.dll::System::Enum::Enum_Parse_1(pTVar40,pSVar23,0,(MethodInfo *)0x0);
      if (method_01 ==
          (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
           *)0x0) goto code_?;
      if (*(Il2CppClass **)&((Il2CppClass_0 *)&method_01->klass)->image->token !=
          (TypeInfo__AvatarModifierPackageType->_0).element_class) goto code_?;
      IVar28 = *(Int32Enum__Enum *)&method_01->bounds;
      this_02 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(owner->fields).modifiers;
      if (this_02 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                   *)MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__ContainsKey_AvatarModifierPackageType_
                     ->klass->rgctx_data[0x21].method;
      iVar38 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
               Int32Enum,UnityEngine::Vector3]::
               Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                         (this_02,IVar28,(MethodInfo *)method_01);
      if (iVar38 < 0) {
        method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                     *)0x0;
        this_04 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                   *)AvatarModifier::AvatarModifier_CreateFromType(IVar28,owner,(MethodInfo *)0x0);
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
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this_04 ==
            (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
             *)0x0) {
          bVar19 = false;
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar19 = this_04->bounds != (Il2CppArrayBounds *)0x0;
        }
        if (bVar19) {
          if (this_04 ==
              (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
               *)0x0) goto code_?;
          pIVar45 = ((Il2CppClass_0 *)&this_04->klass)->image;
          method_01 = *(Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                        **)&pIVar45[5].typeCount;
          cVar46 = (*(code *)pIVar45[5].assembly)(this_04);
          if (cVar46 == '\0') {
            obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_04,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                      ((Object_1 *)obj,(MethodInfo *)0x0);
          }
          else {
            this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_04,(MethodInfo *)0x0);
            value_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)owner,(MethodInfo *)0x0);
            if (this_05 == (Transform *)0x0) goto code_?;
            method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                         *)0x0;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (this_05,value_00,(MethodInfo *)0x0);
            pSVar23 = (String *)
                      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_04,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pSVar23 == (String *)0x0) goto code_?;
            pLStack_8 = *(List_1_System_UInt32Enum_ **)
                           &TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
            fStack_47 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            SVar48 = pSVar23->fields;
            if (SVar48 == (String__Fields)0x0) goto code_?;
            pcVar1 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
            goto code_?;
            pcRam_? = pcVar1;
            (*pcRam_?)(SVar48);
            pDVar29 = (owner->fields).modifiers;
            if (pDVar29 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0)
            goto code_?;
            uVar41 = CONCAT71((int7)((ulonglong)uVar41 >> 8),2);
            method_01 = this_04;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar29,IVar28,
                       (Object *)this_04,(InsertionBehavior__Enum)uVar41,
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__Add_AvatarModifierPackageType__AvatarModifier_
                       ->klass->rgctx_data[0x22].method);
            pDVar49 = (owner->fields).currentModifierByteState;
            if (pDVar49 == (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)0x0)
            goto code_?;
            method_01 = pDRam0000000182dbbbe8;
            if (value == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
            if ((value->klass->_0).element_class !=
                (Il2CppClass *)((_union_155 *)(pDRam0000000182dbbbe8->vector + 1))->genericMethod)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Byte]
            ::Dictionary_2_System_Int32Enum_System_Byte__TryInsert
                      ((Dictionary_2_System_Int32Enum_System_Byte_ *)pDVar49,IVar28,
                       *(uint8_t *)&(value->fields)._items,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar41 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__Add_AvatarModifierPackageType__unsigned_char_
                       ->klass->rgctx_data[0x22].method);
            *(undefined1 *)&this_04->vector[0].next = 1;
            (**(code **)&((Il2CppClass_0 *)&this_04->klass)->image[5].token)(this_04,owner);
            pIVar45 = ((Il2CppClass_0 *)&this_04->klass)->image;
            packageType = (*(code *)pIVar45[5].nameToClassHashTable)
                                    (this_04,pIVar45[5].codeGenModule);
            if (*(int *)&(TypeInfo__AvatarModifierPackageFactory->_1).field_0x1c == 0) {
              FUN_?();
            }
            pAVar31 = AvatarModifierPackageFactory::AvatarModifierPackageFactory_GetPackage
                                (&AStack_32,packageType,(MethodInfo *)0x0);
            method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                         *)pAVar31->avatarModifiers;
            uVar14 = 0;
            if (method_01 ==
                (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                 *)0x0) goto code_?;
            for (; (int)uVar14 < (int)*(uint *)&method_01->max_length; uVar14 = uVar14 + 1) {
              pBVar37 = (owner->fields).modifierEffectCount;
              if (*(uint *)&method_01->max_length <= uVar14) goto code_?;
              uVar33 = (&method_01->vector[0].next)[(longlong)(int)uVar14 * 4];
              if (pBVar37 == (Byte__Array *)0x0) goto code_?;
              if ((uint)pBVar37->max_length <= uVar33) goto code_?;
              pBVar37->vector[(int)uVar33] = pBVar37->vector[(int)uVar33] + 1;
            }
          }
        }
      }
      else {
        pDVar49 = (owner->fields).currentModifierByteState;
        if (pDVar49 == (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)0x0)
        goto code_?;
        cVar46 = FUN_?(pDVar49,IVar28);
        method_01 = pDRam0000000182dbbbe8;
        if (value == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
        if ((value->klass->_0).element_class !=
            (Il2CppClass *)((_union_155 *)(pDRam0000000182dbbbe8->vector + 1))->genericMethod)
        goto code_?;
        if (*(char *)&(value->fields)._items != cVar46) {
          pDVar29 = (owner->fields).modifiers;
          if (pDVar29 == (Dictionary_2_AvatarModifierPackageType_AvatarModifier_ *)0x0)
          goto code_?;
          method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)
                      MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Item_AvatarModifierPackageType_
          ;
          pOVar30 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar29,IVar28,
                               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_AvatarModifier>__get_Item_AvatarModifierPackageType_
                              );
          if (pOVar30 == (Object *)0x0) goto code_?;
          method_01 = (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)pOVar30->klass[1]._0.name;
          (*(code *)method_01)(pOVar30,pOVar30->klass[1]._0.namespaze);
          pDVar49 = (owner->fields).currentModifierByteState;
          if (pDVar49 == (Dictionary_2_AvatarModifierPackageType_System_Byte_ *)0x0)
          goto code_?;
          if ((value->klass->_0).element_class !=
              (Il2CppClass *)((_union_155 *)(pDRam0000000182dbbbe8->vector + 1))->genericMethod)
          goto code_?;
          method_00 = MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_unsigned_char>__set_Item_AvatarModifierPackageType__unsigned_char_
                      ->klass->rgctx_data[0x22].method;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Byte]::
          Dictionary_2_System_Int32Enum_System_Byte__TryInsert
                    ((Dictionary_2_System_Int32Enum_System_Byte_ *)pDVar49,IVar28,
                     *(uint8_t *)&(value->fields)._items,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),1),
                     method_00);
        }
      }
    } while( true );
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Initialize>b__54_0(Object) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar__Initialize_b__54_0
               (MVAvatar *this,Object *val,MethodInfo *method)

{
  if (val == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((val->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(val);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = *(undefined4 *)&val[1].klass;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ScaleChangedEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = (this->fields)._._.transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_3 = CONCAT44(uVar2,uVar2);
  uStack_4 = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  if ((this->fields)._._.ScaleChanged !=
      (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
    pUVar7 = (this->fields)._._.ScaleChanged;
    lVar8 = FUN_?(TypeInfo__ScaleChangedEventArgs);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    *(ulonglong *)(lVar8 + 0x10) = CONCAT44(uVar2,uVar2);
    *(undefined4 *)(lVar8 + 0x18) = uVar2;
    (*(pUVar7->fields)._._.invoke_impl)
              ((pUVar7->fields)._._.method_code,this,lVar8,(pUVar7->fields)._._.method);
  }
  return;
}


/* MVAvatar(Dictionary`2[System.Object,System.Object], GameObject,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar__ctor
               (MVAvatar *this,Dictionary_2_System_Object_System_Object_ *data,
               GameObject *avatarPrefab,Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&Avatar_MethodInfo__UnityEngine__GameObject__GetComponent<Avatar>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LimbRotationRuntimeData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVRuntimeDataVariable<int>_MethodInfo__MVRuntimeDataVariables__New<int>_System__String__float__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVRuntimeDataVariable<float>_MethodInfo__MVRuntimeDataVariables__New<float>_System__String__float__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_modifiers);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pointRotationPitch);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_headRotationYaw);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_headRotationPitch);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_size);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_maxHealth);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isFiring);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_currentItem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_emote);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_shield);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pointRotationYaw);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_hasHandEquippableItem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_spawnRoleModeType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_animation);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (LimbRotationRuntimeData *)FUN_?(TypeInfo__LimbRotationRuntimeData);
  bVar2 = iRam_? != 0;
  (this->fields).LimbRotationRuntimeData = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).LimbRotationRuntimeData >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  uVar4 = (ulonglong)_UNK_?;
  (this->fields).characterControllerCenterOffset.x = (float)(int)(uVar4 << 0x20);
  (this->fields).characterControllerCenterOffset.y = (float)(int)((uVar4 << 0x20) >> 0x20);
  (this->fields).characterControllerCenterOffset.z = 0.0;
  MVGroup::MVGroup__ctor((MVGroup *)this,data,avatarPrefab,worldObjects,(MethodInfo *)0x0);
  iVar7 = (this->fields)._._._.ownerActorNr;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar8 != (MVGameControllerBase *)0x0) &&
       (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar9->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar10 != (MVLocalPlayer *)0x0)) {
    iVar11 = (pMVar10->fields)._._ActorNr_k__BackingField;
    pMVar12 = (this->fields)._._.runtimeDataVariables;
    (this->fields)._._.interactionFlags = 0;
    (this->fields).isLocal = iVar7 == iVar11;
    (this->fields)._._._PlayInteractionType_k__BackingField = 1;
    fVar13 = _UNK_?;
    if (pMVar12 != (MVRuntimeDataVariables *)0x0) {
      pMVar14 = MVRuntimeDataVariables::MVRuntimeDataVariables_New_2
                          (pMVar12,StringLiteral_health,_UNK_?,0,
                           MVRuntimeDataVariable<float>_MethodInfo__MVRuntimeDataVariables__New<float>_System__String__float__bool_
                          );
      bVar2 = iRam_? != 0;
      (this->fields).Health = pMVar14;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).Health >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pMVar12 = (this->fields)._._.runtimeDataVariables;
      if (pMVar12 != (MVRuntimeDataVariables *)0x0) {
        pMVar14 = MVRuntimeDataVariables::MVRuntimeDataVariables_New_2
                            (pMVar12,StringLiteral_maxHealth,0.0,1,
                             MVRuntimeDataVariable<int>_MethodInfo__MVRuntimeDataVariables__New<int>_System__String__float__bool_
                            );
        bVar2 = iRam_? != 0;
        (this->fields).MaxHealth = (MVRuntimeDataVariable_1_System_Int32_ *)pMVar14;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(this->fields).MaxHealth >> 0xc);
          uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
          do {
            uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        pMVar12 = (this->fields)._._.runtimeDataVariables;
        if (pMVar12 != (MVRuntimeDataVariables *)0x0) {
          pMVar15 = MVRuntimeDataVariables::MVRuntimeDataVariables_NewClampedFloat
                              (pMVar12,StringLiteral_shield,fVar13,0,0.0,_UNK_?,
                               (MethodInfo *)0x0);
          bVar2 = iRam_? != 0;
          (this->fields).shield = pMVar15;
          if (bVar2) {
            uVar3 = (uint)((ulonglong)&(this->fields).shield >> 0xc);
            uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
            do {
              uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
              puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
          pMVar12 = (this->fields)._._.runtimeDataVariables;
          if (pMVar12 != (MVRuntimeDataVariables *)0x0) {
            pMVar16 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                (pMVar12,StringLiteral_isFiring,0.0,0,(MethodInfo *)0x0);
            bVar2 = iRam_? != 0;
            (this->fields).IsFiring = pMVar16;
            if (bVar2) {
              uVar3 = (uint)((ulonglong)&(this->fields).IsFiring >> 0xc);
              uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
              do {
                uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                LOCK();
                bVar2 = uVar5 == *puVar6;
                if (bVar2) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar2);
            }
            pMVar12 = (this->fields)._._.runtimeDataVariables;
            if (pMVar12 != (MVRuntimeDataVariables *)0x0) {
              pMVar16 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                  (pMVar12,StringLiteral_modifiers,_UNK_?,0,(MethodInfo *)0x0
                                  );
              bVar2 = iRam_? != 0;
              (this->fields).Modifiers = pMVar16;
              if (bVar2) {
                uVar3 = (uint)((ulonglong)&(this->fields).Modifiers >> 0xc);
                uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                do {
                  uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                  puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                  LOCK();
                  bVar2 = uVar5 == *puVar6;
                  if (bVar2) {
                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar2);
              }
              pMVar12 = (this->fields)._._.runtimeDataVariables;
              if (pMVar12 != (MVRuntimeDataVariables *)0x0) {
                pMVar16 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                    (pMVar12,StringLiteral_currentItem,0.0,1,(MethodInfo *)0x0);
                bVar2 = iRam_? != 0;
                (this->fields).CurrentItem = pMVar16;
                if (bVar2) {
                  uVar3 = (uint)((ulonglong)&(this->fields).CurrentItem >> 0xc);
                  uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                  do {
                    uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                    puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                    LOCK();
                    bVar2 = uVar5 == *puVar6;
                    if (bVar2) {
                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar2);
                }
                pMVar12 = (this->fields)._._.runtimeDataVariables;
                if (pMVar12 != (MVRuntimeDataVariables *)0x0) {
                  pMVar16 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                      (pMVar12,StringLiteral_spawnRoleModeType,0.0,1,
                                       (MethodInfo *)0x0);
                  bVar2 = iRam_? != 0;
                  (this->fields).SpawnRoleModeTypes = pMVar16;
                  if (bVar2) {
                    uVar3 = (uint)((ulonglong)&(this->fields).SpawnRoleModeTypes >> 0xc);
                    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                    do {
                      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                      LOCK();
                      bVar2 = uVar5 == *puVar6;
                      if (bVar2) {
                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar2);
                  }
                  pMVar12 = (this->fields)._._.runtimeDataVariables;
                  if (pMVar12 != (MVRuntimeDataVariables *)0x0) {
                    pMVar16 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                        (pMVar12,StringLiteral_animation,0.0,0,(MethodInfo *)0x0);
                    bVar2 = iRam_? != 0;
                    (this->fields).Animation = pMVar16;
                    if (bVar2) {
                      uVar3 = (uint)((ulonglong)&(this->fields).Animation >> 0xc);
                      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                      do {
                        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                        LOCK();
                        bVar2 = uVar5 == *puVar6;
                        if (bVar2) {
                          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar2);
                    }
                    fVar13 = _UNK_?;
                    pMVar12 = (this->fields)._._.runtimeDataVariables;
                    pLVar1 = (this->fields).LimbRotationRuntimeData;
                    if ((pMVar12 != (MVRuntimeDataVariables *)0x0) &&
                       (pMVar16 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                            (pMVar12,StringLiteral_headRotationYaw,_UNK_?,0,
                                             (MethodInfo *)0x0),
                       pLVar1 != (LimbRotationRuntimeData *)0x0)) {
                      bVar2 = iRam_? != 0;
                      (pLVar1->fields).HeadRotationYaw = pMVar16;
                      if (bVar2) {
                        uVar3 = (uint)((ulonglong)&pLVar1->fields >> 0xc);
                        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                        do {
                          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                          LOCK();
                          bVar2 = uVar5 == *puVar6;
                          if (bVar2) {
                            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar2);
                      }
                      pMVar12 = (this->fields)._._.runtimeDataVariables;
                      pLVar1 = (this->fields).LimbRotationRuntimeData;
                      if ((pMVar12 != (MVRuntimeDataVariables *)0x0) &&
                         (pMVar16 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                              (pMVar12,StringLiteral_headRotationPitch,fVar13,0,
                                               (MethodInfo *)0x0),
                         pLVar1 != (LimbRotationRuntimeData *)0x0)) {
                        bVar2 = iRam_? != 0;
                        (pLVar1->fields).HeadRotationPitch = pMVar16;
                        if (bVar2) {
                          uVar3 = (uint)((ulonglong)&(pLVar1->fields).HeadRotationPitch >> 0xc);
                          uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                          do {
                            uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                            puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                            LOCK();
                            bVar2 = uVar5 == *puVar6;
                            if (bVar2) {
                              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar2);
                        }
                        pMVar12 = (this->fields)._._.runtimeDataVariables;
                        pLVar1 = (this->fields).LimbRotationRuntimeData;
                        if ((pMVar12 != (MVRuntimeDataVariables *)0x0) &&
                           (pMVar16 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                                (pMVar12,StringLiteral_pointRotationYaw,fVar13,0,
                                                 (MethodInfo *)0x0),
                           pLVar1 != (LimbRotationRuntimeData *)0x0)) {
                          bVar2 = iRam_? != 0;
                          (pLVar1->fields).PointRotationYaw = pMVar16;
                          if (bVar2) {
                            uVar3 = (uint)((ulonglong)&(pLVar1->fields).PointRotationYaw >> 0xc);
                            uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                            do {
                              uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                              puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                              LOCK();
                              bVar2 = uVar5 == *puVar6;
                              if (bVar2) {
                                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar2);
                          }
                          pMVar12 = (this->fields)._._.runtimeDataVariables;
                          pLVar1 = (this->fields).LimbRotationRuntimeData;
                          if ((pMVar12 != (MVRuntimeDataVariables *)0x0) &&
                             (pMVar16 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                                  (pMVar12,StringLiteral_pointRotationPitch,fVar13,0,
                                                   (MethodInfo *)0x0),
                             pLVar1 != (LimbRotationRuntimeData *)0x0)) {
                            bVar2 = iRam_? != 0;
                            (pLVar1->fields).PointRotationPitch = pMVar16;
                            if (bVar2) {
                              uVar3 = (uint)((ulonglong)&(pLVar1->fields).PointRotationPitch >>
                                             0xc);
                              uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                              do {
                                uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                                puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                                LOCK();
                                bVar2 = uVar5 == *puVar6;
                                if (bVar2) {
                                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar2);
                            }
                            pMVar12 = (this->fields)._._.runtimeDataVariables;
                            pLVar1 = (this->fields).LimbRotationRuntimeData;
                            if ((pMVar12 != (MVRuntimeDataVariables *)0x0) &&
                               (pMVar16 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                                    (pMVar12,StringLiteral_hasHandEquippableItem,0.0,
                                                     0,(MethodInfo *)0x0),
                               pLVar1 != (LimbRotationRuntimeData *)0x0)) {
                              bVar2 = iRam_? != 0;
                              (pLVar1->fields).HasHandEquippableItem = pMVar16;
                              if (bVar2) {
                                uVar3 = (uint)((ulonglong)&(pLVar1->fields).HasHandEquippableItem
                                               >> 0xc);
                                uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                do {
                                  uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                                  puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                                  LOCK();
                                  bVar2 = uVar5 == *puVar6;
                                  if (bVar2) {
                                    *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar2);
                              }
                              pMVar12 = (this->fields)._._.runtimeDataVariables;
                              pLVar1 = (this->fields).LimbRotationRuntimeData;
                              if ((pMVar12 != (MVRuntimeDataVariables *)0x0) &&
                                 (pMVar16 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                                      (pMVar12,StringLiteral_emote,_UNK_?,0,
                                                       (MethodInfo *)0x0),
                                 pLVar1 != (LimbRotationRuntimeData *)0x0)) {
                                bVar2 = iRam_? != 0;
                                (pLVar1->fields).Emote = pMVar16;
                                if (bVar2) {
                                  uVar3 = (uint)((ulonglong)&(pLVar1->fields).Emote >> 0xc);
                                  uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                  do {
                                    uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                                    puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                                    LOCK();
                                    bVar2 = uVar5 == *puVar6;
                                    if (bVar2) {
                                      *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar2);
                                }
                                pGVar17 = (this->fields)._._.gameObject;
                                value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::
                                        LayerMask_NameToLayer
                                                  (StringLiteral_Player,(MethodInfo *)0x0);
                                if (pGVar17 != (GameObject *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_set_layer(pGVar17,value,(MethodInfo *)0x0);
                                  pGVar17 = (this->fields)._._.gameObject;
                                  if (pGVar17 != (GameObject *)0x0) {
                                    pAVar18 = (Avatar *)
                                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_GetComponent_1
                                                        (pGVar17,
                                                  Avatar_MethodInfo__UnityEngine__GameObject__GetComponent<Avatar>__
                                                  );
                                    bVar2 = iRam_? != 0;
                                    (this->fields).avatar = pAVar18;
                                    if (bVar2) {
                                      uVar3 = (uint)((ulonglong)&(this->fields).avatar >> 0xc);
                                      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                      do {
                                        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                                        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                                        LOCK();
                                        bVar2 = uVar5 == *puVar6;
                                        if (bVar2) {
                                          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                        }
                                        UNLOCK();
                                      } while (!bVar2);
                                    }
                                    pMVar12 = (this->fields)._._.runtimeDataVariables;
                                    if (pMVar12 != (MVRuntimeDataVariables *)0x0) {
                                      pMVar15 = MVRuntimeDataVariables::
                                                MVRuntimeDataVariables_NewClampedFloat
                                                          (pMVar12,StringLiteral_size,0.0,1,
                                                           _UNK_?,_UNK_?,
                                                           (MethodInfo *)0x0);
                                      bVar2 = iRam_? != 0;
                                      (this->fields).Size = pMVar15;
                                      if (bVar2) {
                                        uVar3 = (uint)((ulonglong)&(this->fields).Size >> 0xc);
                                        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                                        do {
                                          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                                          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                                          LOCK();
                                          bVar2 = uVar5 == *puVar6;
                                          if (bVar2) {
                                            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                                          }
                                          UNLOCK();
                                        } while (!bVar2);
                                      }
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* MVBody get_Body() */

MVBody * Assembly-CSharp.dll::MVAvatar::MVAvatar_get_Body(MVAvatar *this,MethodInfo *method)

{
  return (this->fields).body;
}


/* Vector3 get_CharacterControllerCenterOffset() */

Vector3 * Assembly-CSharp.dll::MVAvatar::MVAvatar_get_CharacterControllerCenterOffset
                    (Vector3 *__return_storage_ptr__,MVAvatar *this,MethodInfo *method)

{
  fVar1 = (this->fields).characterControllerCenterOffset.z;
  fVar2 = (this->fields).characterControllerCenterOffset.y;
  __return_storage_ptr__->x = (this->fields).characterControllerCenterOffset.x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* PickupItem get_CurrentPickup() */

PickupItem *
Assembly-CSharp.dll::MVAvatar::MVAvatar_get_CurrentPickup(MVAvatar *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarPickupOwner;
  if (pAVar1 != (AvatarPickupOwner *)0x0) {
    return (pAVar1->fields)._.currentItem;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pPVar3 = (PickupItem *)(*pcVar2)();
  return pPVar3;
}


/* Boolean get_IsSeated() */

bool Assembly-CSharp.dll::MVAvatar::MVAvatar_get_IsSeated(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_seat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MVAvatar_does_not_contain_key_se);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           (*(this->klass->vtable).get_RunTimeData.methodPtr)
                     (this,(this->klass->vtable).get_RunTimeData.method);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar2 = Extensions::Extensions_ContainsObscuredKey(pDVar1,StringLiteral_seat,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             (*(this->klass->vtable).get_RunTimeData.methodPtr)
                       (this,(this->klass->vtable).get_RunTimeData.method);
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar3 = Extensions::Extensions_GetObscuredType(pDVar1,StringLiteral_seat,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
        OStack_4.currentCryptoKey = *(int32_t *)&pOVar3[1].klass;
        OStack_4.hiddenValue = *(int32_t *)((longlong)&pOVar3[1].klass + 4);
        OStack_4.fakeValue = *(int32_t *)&pOVar3[1].monitor;
        OStack_4._12_4_ = *(undefined4 *)((longlong)&pOVar3[1].monitor + 4);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_InternalDecrypt(&OStack_4,(MethodInfo *)0x0);
        return iVar5 != -1;
      }
      FUN_?(pOVar3,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      pcVar6 = (code *)swi(3);
      bVar2 = (*pcVar6)();
      return bVar2;
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    bVar2 = (*pcVar6)();
    return bVar2;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_MVAvatar_does_not_contain_key_se,(MethodInfo *)0x0);
  return 0;
}


/* Int32 get_SeatID() */

int32_t Assembly-CSharp.dll::MVAvatar::MVAvatar_get_SeatID(MVAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_seat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MVAvatar_does_not_contain_key_se);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           (*(this->klass->vtable).get_RunTimeData.methodPtr)
                     (this,(this->klass->vtable).get_RunTimeData.method);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar2 = Extensions::Extensions_ContainsObscuredKey(pDVar1,StringLiteral_seat,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
             (*(this->klass->vtable).get_RunTimeData.methodPtr)
                       (this,(this->klass->vtable).get_RunTimeData.method);
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar3 = Extensions::Extensions_GetObscuredType(pDVar1,StringLiteral_seat,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
        OStack_4.currentCryptoKey = *(int32_t *)&pOVar3[1].klass;
        OStack_4.hiddenValue = *(int32_t *)((longlong)&pOVar3[1].klass + 4);
        OStack_4.fakeValue = *(int32_t *)&pOVar3[1].monitor;
        OStack_4._12_4_ = *(undefined4 *)((longlong)&pOVar3[1].monitor + 4);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_InternalDecrypt(&OStack_4,(MethodInfo *)0x0);
        return iVar5;
      }
      FUN_?(pOVar3,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      pcVar6 = (code *)swi(3);
      iVar5 = (*pcVar6)();
      return iVar5;
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    iVar5 = (*pcVar6)();
    return iVar5;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_MVAvatar_does_not_contain_key_se,(MethodInfo *)0x0);
  return -1;
}


/* Void set_HealParticleSpawnTime(Single) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_set_HealParticleSpawnTime
               (MVAvatar *this,float value,MethodInfo *method)

{
  (this->fields).healParticleSpawnTime = value;
  return;
}


/* Void set_IsHidden(Boolean) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_set_IsHidden
               (MVAvatar *this,bool value,MethodInfo *method)

{
  (this->fields).isHidden = value;
  pAVar1 = (this->fields).avatar;
  if (pAVar1 != (Avatar *)0x0) {
    fVar2 = _UNK_?;
    if (value != 0) {
      fVar2 = 0.0;
    }
    this_00 = (pAVar1->fields).avatarFader;
    if (this_00 != (AvatarFader *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__RemoveAt_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__TextureAtlasData);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_SM3);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_CubeModel);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar3 = _UNK_?;
      if ((fVar2 == _UNK_?) && ((this_00->fields).fading == 0)) {
        return;
      }
      bVar4 = fVar2 == _UNK_?;
      (this_00->fields).fading = fVar2 < _UNK_?;
      if (bVar4) {
        (this_00->fields).changedShaders = 0;
        (this_00->fields).prevFading = 0;
      }
      pLVar5 = (this_00->fields).avatarMaterials;
      index = 0;
      if (pLVar5 != (List_1_UnityEngine_Material_ *)0x0) {
        lVar6 = 0x20;
        do {
          if ((pLVar5->fields)._size <= (int)index) {
            if ((this_00->fields).changedShaders == 0) {
              return;
            }
            (this_00->fields).prevFading = 1;
            return;
          }
          pLVar5 = (this_00->fields).avatarMaterials;
          if (pLVar5 == (List_1_UnityEngine_Material_ *)0x0) break;
          if ((uint)(pLVar5->fields)._size <= index) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pMVar8 = (pLVar5->fields)._items;
          if (pMVar8 == (Material__Array *)0x0) break;
          if ((uint)pMVar8->max_length <= index) {
            FUN_?();
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          this_01 = *(Material **)((longlong)pMVar8->vector + lVar6 + -0x20);
          pMStackX_20 = this_01;
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
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (this_01 == (Material *)0x0) {
code_?:
            pLVar5 = (this_00->fields).avatarMaterials;
            if (pLVar5 == (List_1_UnityEngine_Material_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__RemoveAt
                      ((List_1_System_Object_ *)pLVar5,index,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__RemoveAt_int_
                      );
            index = index - 1;
            lVar6 = lVar6 + -8;
          }
          else {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((this_01->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
            if ((this_00->fields).prevFading == 0) {
              pSVar9 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                                 (this_01,(MethodInfo *)0x0);
              pSVar9 = AvatarFader::AvatarFader_GetShader
                                 (this_00,pSVar9,(this_00->fields).fading,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader
                        (this_01,pSVar9,(MethodInfo *)0x0);
              if ((pSVar9 == (Shader *)0x0) ||
                 (pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                      ((Object_1 *)pSVar9,(MethodInfo *)0x0),
                 pSVar10 == (String *)0x0)) break;
              bVar11 = mscorlib.dll::System::String::String_Contains
                                (pSVar10,StringLiteral_CubeModel,(MethodInfo *)0x0);
              if (bVar11 != 0) {
                pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                    ((Object_1 *)pSVar9,(MethodInfo *)0x0);
                if (pSVar10 == (String *)0x0) break;
                bVar11 = mscorlib.dll::System::String::String_Contains
                                  (pSVar10,StringLiteral_SM3,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
                  FUN_?();
                }
                TextureAtlasData::TextureAtlasData_StreamAtlasDataToMaterial
                          (&pMStackX_20,bVar11,(MethodInfo *)0x0);
                this_01 = pMStackX_20;
              }
            }
            if (this_01 == (Material *)0x0) break;
            iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                              ((this_00->fields).transparencyProperty,(MethodInfo *)0x0);
            bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                              (this_01,iVar12,(MethodInfo *)0x0);
            if (bVar11 == 0) {
              iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                ((this_00->fields).colorProperty,(MethodInfo *)0x0);
              bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                                (this_01,iVar12,(MethodInfo *)0x0);
              if (bVar11 == 0) {
                iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                  ((this_00->fields).tintProperty,(MethodInfo *)0x0);
                bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                                  (this_01,iVar12,(MethodInfo *)0x0);
                if (bVar11 != 0) {
                  pCVar13 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                                      (&CStack_14,this_01,(this_00->fields).tintProperty,
                                       (MethodInfo *)0x0);
                  CStack_15.r = pCVar13->r;
                  CStack_15.g = pCVar13->g;
                  CStack_15.b = pCVar13->b;
                  CStack_15.a = fVar2;
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                            (this_01,(this_00->fields).tintProperty,&CStack_15,(MethodInfo *)0x0);
                }
              }
              else {
                pCVar13 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                    (&CStack_16,this_01,(MethodInfo *)0x0);
                CStack_15.r = pCVar13->r;
                CStack_15.g = pCVar13->g;
                CStack_15.b = pCVar13->b;
                CStack_15.a = fVar2;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                          (this_01,&CStack_15,(MethodInfo *)0x0);
              }
            }
            else {
              iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                ((this_00->fields).transparencyProperty,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                        (this_01,iVar12,fVar3 - fVar2,(MethodInfo *)0x0);
            }
          }
          pLVar5 = (this_00->fields).avatarMaterials;
          index = index + 1;
          lVar6 = lVar6 + 8;
        } while (pLVar5 != (List_1_UnityEngine_Material_ *)0x0);
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void set_SeatID(Int32) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_set_SeatID
               (MVAvatar *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_seat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVAvatar_get_IsSeated(this,(MethodInfo *)0x0);
  uVar2 = (*(this->klass->vtable).get_RunTimeData.methodPtr)(this);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  uStack_4 = 0;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_Encrypt(value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  uStack_4._0_5_ = CONCAT14(1,(int32_t)uStack_4);
  uStack_3 = CONCAT44(iVar5,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->
                             static_fields->cryptoKey);
  bVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  iVar5 = 0;
  if (bVar6 != 0) {
    iVar5 = value;
  }
  uStack_4._0_4_ = iVar5;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  FUN_?(uVar2,StringLiteral_seat,&uStack_3);
  bVar6 = MVAvatar_get_IsSeated(this,(MethodInfo *)0x0);
  if (bVar6 != bVar1) {
    bVar1 = MVAvatar_get_IsSeated(this,(MethodInfo *)0x0);
    (*(this->klass->vtable).OnSeatedChanged.methodPtr)
              (this,(ulonglong)bVar1,(this->klass->vtable).OnSeatedChanged.method);
  }
  return;
}


/* Void set_SetTransparency(Single) */

void Assembly-CSharp.dll::MVAvatar::MVAvatar_set_SetTransparency
               (MVAvatar *this,float value,MethodInfo *method)

{
  if ((this->fields).isHidden != 0) {
    return;
  }
  pAVar1 = (this->fields).avatar;
  if ((pAVar1 == (Avatar *)0x0) ||
     (this_00 = (pAVar1->fields).avatarFader, this_00 == (AvatarFader *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TextureAtlasData);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SM3);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CubeModel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar3 = _UNK_?;
  if ((value == _UNK_?) && ((this_00->fields).fading == 0)) {
    return;
  }
  bVar4 = value == _UNK_?;
  (this_00->fields).fading = value < _UNK_?;
  if (bVar4) {
    (this_00->fields).changedShaders = 0;
    (this_00->fields).prevFading = 0;
  }
  pLVar5 = (this_00->fields).avatarMaterials;
  index = 0;
  if (pLVar5 != (List_1_UnityEngine_Material_ *)0x0) {
    lVar6 = 0x20;
    do {
      if ((pLVar5->fields)._size <= (int)index) {
        if ((this_00->fields).changedShaders == 0) {
          return;
        }
        (this_00->fields).prevFading = 1;
        return;
      }
      pLVar5 = (this_00->fields).avatarMaterials;
      if (pLVar5 == (List_1_UnityEngine_Material_ *)0x0) break;
      if ((uint)(pLVar5->fields)._size <= index) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pMVar7 = (pLVar5->fields)._items;
      if (pMVar7 == (Material__Array *)0x0) break;
      if ((uint)pMVar7->max_length <= index) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_01 = *(Material **)((longlong)pMVar7->vector + lVar6 + -0x20);
      pMStackX_20 = this_01;
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
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_01 == (Material *)0x0) {
code_?:
        pLVar5 = (this_00->fields).avatarMaterials;
        if (pLVar5 == (List_1_UnityEngine_Material_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)pLVar5,index,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__RemoveAt_int_
                  );
        index = index - 1;
        lVar6 = lVar6 + -8;
      }
      else {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((this_01->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
        if ((this_00->fields).prevFading == 0) {
          pSVar8 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                             (this_01,(MethodInfo *)0x0);
          pSVar8 = AvatarFader::AvatarFader_GetShader
                             (this_00,pSVar8,(this_00->fields).fading,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader
                    (this_01,pSVar8,(MethodInfo *)0x0);
          if ((pSVar8 == (Shader *)0x0) ||
             (pSVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                  ((Object_1 *)pSVar8,(MethodInfo *)0x0), pSVar9 == (String *)0x0))
          break;
          bVar10 = mscorlib.dll::System::String::String_Contains
                            (pSVar9,StringLiteral_CubeModel,(MethodInfo *)0x0);
          if (bVar10 != 0) {
            pSVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                                ((Object_1 *)pSVar8,(MethodInfo *)0x0);
            if (pSVar9 == (String *)0x0) break;
            bVar10 = mscorlib.dll::System::String::String_Contains
                              (pSVar9,StringLiteral_SM3,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__TextureAtlasData->_1).field_0x1c == 0) {
              FUN_?();
            }
            TextureAtlasData::TextureAtlasData_StreamAtlasDataToMaterial
                      (&pMStackX_20,bVar10,(MethodInfo *)0x0);
            this_01 = pMStackX_20;
          }
        }
        if (this_01 == (Material *)0x0) break;
        iVar11 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                          ((this_00->fields).transparencyProperty,(MethodInfo *)0x0);
        bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                          (this_01,iVar11,(MethodInfo *)0x0);
        if (bVar10 == 0) {
          iVar11 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                            ((this_00->fields).colorProperty,(MethodInfo *)0x0);
          bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                            (this_01,iVar11,(MethodInfo *)0x0);
          if (bVar10 == 0) {
            iVar11 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                              ((this_00->fields).tintProperty,(MethodInfo *)0x0);
            bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                              (this_01,iVar11,(MethodInfo *)0x0);
            if (bVar10 != 0) {
              pCVar12 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                                  (&CStack_13,this_01,(this_00->fields).tintProperty,
                                   (MethodInfo *)0x0);
              CStack_14.r = pCVar12->r;
              CStack_14.g = pCVar12->g;
              CStack_14.b = pCVar12->b;
              CStack_14.a = value;
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                        (this_01,(this_00->fields).tintProperty,&CStack_14,(MethodInfo *)0x0);
            }
          }
          else {
            pCVar12 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                (&CStack_15,this_01,(MethodInfo *)0x0);
            CStack_14.r = pCVar12->r;
            CStack_14.g = pCVar12->g;
            CStack_14.b = pCVar12->b;
            CStack_14.a = value;
            UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                      (this_01,&CStack_14,(MethodInfo *)0x0);
          }
        }
        else {
          iVar11 = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                            ((this_00->fields).transparencyProperty,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloatImpl
                    (this_01,iVar11,fVar3 - value,(MethodInfo *)0x0);
        }
      }
      pLVar5 = (this_00->fields).avatarMaterials;
      index = index + 1;
      lVar6 = lVar6 + 8;
    } while (pLVar5 != (List_1_UnityEngine_Material_ *)0x0);
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

