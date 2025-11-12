
/* Void AddChild(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar_AddChild
               (MVBuildModeAvatar *this,MVWorldObjectClient *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVBody);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_AddChild((MVGroup *)this,child,(MethodInfo *)0x0);
  pMVar1 = (MVBody *)0x0;
  if (child != (MVWorldObjectClient *)0x0) {
    bVar2 = (TypeInfo__MVBody->_1).naturalAligment;
    if (((child->klass->_1).naturalAligment < bVar2) ||
       (bVar3 = true,
       (MVBody__Class *)(child->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] != TypeInfo__MVBody))
    {
      bVar3 = false;
    }
    if (bVar3) {
      pMVar1 = (MVBody *)child;
    }
  }
  bVar3 = iRam_? != 0;
  (this->fields).body = pMVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).body >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pMVar1 = (this->fields).body;
  if ((pMVar1 == (MVBody *)0x0) ||
     (obj = (pMVar1->fields)._._._.gameObject, obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pvVar9 = (obj->fields)._.m_CachedPtr;
  if (pvVar9 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar9,0);
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar_Destroy
               (MVBuildModeAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_RemoveLateUpdateObject
            ((IUpdatecontrollerSubscriberLateUpdate *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._._.gameObject;
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
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar1 = (this->fields)._._.gameObject;
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar1,0.0,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._._.initializedFromInventory != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
    pRVar4 = (pMVar3->fields).runtimeVariableNetworkManager;
    item = (this->fields)._._._.id;
    if (pRVar4 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (HashSet_1_System_Int32Enum_ *)(pRVar4->fields).runtimeDataVariables;
      if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar5 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          (this_00,item,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar5 != 0) {
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 == (MVNetworkGame *)0x0) ||
             (pRVar4 = (pMVar3->fields).runtimeVariableNetworkManager,
             pRVar4 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar4,(this->fields)._._._.id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* LaserPointer InitLaser(Boolean) */

LaserPointer *
Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar_InitLaser
          (MVBuildModeAvatar *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&LaserPointer_MethodInfo__UnityEngine__GameObject__GetComponent<LaserPointer>__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?();
  if (lVar1 != 0) {
    original = *(Object **)(lVar1 + 0x390);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pGVar2 = (GameObject *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       (original,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    if ((pGVar2 != (GameObject *)0x0) &&
       (pLVar3 = (LaserPointer *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (pGVar2,
                            LaserPointer_MethodInfo__UnityEngine__GameObject__GetComponent<LaserPointer>__
                           ), pLVar3 != (LaserPointer *)0x0)) {
      LaserPointer::LaserPointer_Initialize
                (pLVar3,isLocal,(this->fields).CurrentItem,(this->fields)._._.transform,
                 (MethodInfo *)0x0);
      if ((pLVar3->fields).isLocal != 0) {
        pTVar4 = (pLVar3->fields).cube;
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if ((this_00 == (Camera *)0x0) ||
           (value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_00,(MethodInfo *)0x0), pTVar4 == (Transform *)0x0))
        {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          pLVar3 = (LaserPointer *)(*pcVar5)();
          return pLVar3;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (pTVar4,value,(MethodInfo *)0x0);
        pTVar4 = (pLVar3->fields).cube;
        if (pTVar4 == (Transform *)0x0) goto code_?;
        uStack_6._0_4_ = (pLVar3->fields).offset.x;
        uStack_6._4_4_ = (pLVar3->fields).offset.y;
        fStack_7 = (pLVar3->fields).offset.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar8 = (pTVar4->fields)._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          pLVar3 = (LaserPointer *)(*pcVar5)();
          return pLVar3;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar5 = (code *)swi(3);
          pLVar3 = (LaserPointer *)(*pcVar5)();
          return pLVar3;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pvVar8,&uStack_6);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pLVar3,1,(MethodInfo *)0x0);
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pLVar3,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        pTVar4 = (pLVar3->fields).cube;
        if ((pTVar4 != (Transform *)0x0) &&
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar4,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)
           ) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,1,(MethodInfo *)0x0);
          return pLVar3;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pLVar3 = (LaserPointer *)(*pcVar5)();
  return pLVar3;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar_Initialize
               (MVBuildModeAvatar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_Initialize((MVGroup *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__Add_PriorityDataLateUpdate_
                  ,2,1,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&uStack_2 >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  uStack_6 = 2;
  uStack_7 = 1;
  uStack_2 = this;
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UpdateController);
  }
  pLVar8 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
  if (pLVar8 != (List_1_PriorityDataLateUpdate___Array *)0x0) {
    if ((uint)pLVar8->max_length < 3) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (pLVar8->vector[2] != (List_1_PriorityDataLateUpdate_ *)0x0) {
      uStack_10 = (undefined4)uStack_2;
      uStack_11 = uStack_2._4_4_;
      uStack_12 = uStack_6;
      uStack_13 = uStack_7;
      FUN_?(pLVar8->vector[2],&uStack_10,
                    MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__Add_PriorityDataLateUpdate_
                   );
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateControllerLateUpdate() */

void Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar_UpdateControllerLateUpdate
               (MVBuildModeAvatar *this,MethodInfo *method)

{
  pAVar1 = (this->fields).limbManager;
  puVar2 = (undefined8 *)
           (*(this->klass->vtable).__unknown.methodPtr)
                     (auStack_3,this,(this->klass->vtable).__unknown.method);
  if (pAVar1 != (AvatarLimbManager *)0x0) {
    uStack_4 = *puVar2;
    uStack_5 = *(undefined4 *)(puVar2 + 1);
    (*(pAVar1->klass->vtable).UpdateLimbRotations.methodPtr)
              (pAVar1,&uStack_4,(pAVar1->klass->vtable).UpdateLimbRotations.method);
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVBuildModeAvatar(Dictionary`2[System.Object,System.Object], GameObject,
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVBuildModeAvatar::MVBuildModeAvatar__ctor
               (MVBuildModeAvatar *this,Dictionary_2_System_Object_System_Object_ *data,
               GameObject *prefabObject,Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LimbRotationRuntimeData);
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
    FUN_?(&StringLiteral_currentItem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_emote);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pointRotationYaw);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_hasHandEquippableItem);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (LimbRotationRuntimeData *)FUN_?(TypeInfo__LimbRotationRuntimeData);
  bVar2 = iRam_? != 0;
  (this->fields).limbRotationRuntimeData = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).limbRotationRuntimeData >> 0xc);
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
  MVGroup::MVGroup__ctor((MVGroup *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
  pMVar7 = (this->fields)._._.runtimeDataVariables;
  if (pMVar7 != (MVRuntimeDataVariables *)0x0) {
    pMVar8 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                       (pMVar7,StringLiteral_currentItem,0.0,1,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).CurrentItem = pMVar8;
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
    sendInterval = _UNK_?;
    pMVar7 = (this->fields)._._.runtimeDataVariables;
    pLVar1 = (this->fields).limbRotationRuntimeData;
    if ((pMVar7 != (MVRuntimeDataVariables *)0x0) &&
       (pMVar8 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                           (pMVar7,StringLiteral_headRotationYaw,_UNK_?,0,(MethodInfo *)0x0)
       , pLVar1 != (LimbRotationRuntimeData *)0x0)) {
      bVar2 = iRam_? != 0;
      (pLVar1->fields).HeadRotationYaw = pMVar8;
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
      pMVar7 = (this->fields)._._.runtimeDataVariables;
      pLVar1 = (this->fields).limbRotationRuntimeData;
      if ((pMVar7 != (MVRuntimeDataVariables *)0x0) &&
         (pMVar8 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                             (pMVar7,StringLiteral_headRotationPitch,sendInterval,0,
                              (MethodInfo *)0x0), pLVar1 != (LimbRotationRuntimeData *)0x0)) {
        bVar2 = iRam_? != 0;
        (pLVar1->fields).HeadRotationPitch = pMVar8;
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
        pMVar7 = (this->fields)._._.runtimeDataVariables;
        pLVar1 = (this->fields).limbRotationRuntimeData;
        if ((pMVar7 != (MVRuntimeDataVariables *)0x0) &&
           (pMVar8 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                               (pMVar7,StringLiteral_pointRotationYaw,sendInterval,0,
                                (MethodInfo *)0x0), pLVar1 != (LimbRotationRuntimeData *)0x0)) {
          bVar2 = iRam_? != 0;
          (pLVar1->fields).PointRotationYaw = pMVar8;
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
          pMVar7 = (this->fields)._._.runtimeDataVariables;
          pLVar1 = (this->fields).limbRotationRuntimeData;
          if ((pMVar7 != (MVRuntimeDataVariables *)0x0) &&
             (pMVar8 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                 (pMVar7,StringLiteral_pointRotationPitch,sendInterval,0,
                                  (MethodInfo *)0x0), pLVar1 != (LimbRotationRuntimeData *)0x0)) {
            bVar2 = iRam_? != 0;
            (pLVar1->fields).PointRotationPitch = pMVar8;
            if (bVar2) {
              uVar3 = (uint)((ulonglong)&(pLVar1->fields).PointRotationPitch >> 0xc);
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
            pMVar7 = (this->fields)._._.runtimeDataVariables;
            pLVar1 = (this->fields).limbRotationRuntimeData;
            if ((pMVar7 != (MVRuntimeDataVariables *)0x0) &&
               (pMVar8 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                   (pMVar7,StringLiteral_hasHandEquippableItem,0.0,0,
                                    (MethodInfo *)0x0), pLVar1 != (LimbRotationRuntimeData *)0x0)) {
              bVar2 = iRam_? != 0;
              (pLVar1->fields).HasHandEquippableItem = pMVar8;
              if (bVar2) {
                uVar3 = (uint)((ulonglong)&(pLVar1->fields).HasHandEquippableItem >> 0xc);
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
              pMVar7 = (this->fields)._._.runtimeDataVariables;
              pLVar1 = (this->fields).limbRotationRuntimeData;
              if ((pMVar7 != (MVRuntimeDataVariables *)0x0) &&
                 (pMVar8 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                                     (pMVar7,StringLiteral_emote,_UNK_?,0,(MethodInfo *)0x0)
                 , pLVar1 != (LimbRotationRuntimeData *)0x0)) {
                bVar2 = iRam_? != 0;
                (pLVar1->fields).Emote = pMVar8;
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
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

