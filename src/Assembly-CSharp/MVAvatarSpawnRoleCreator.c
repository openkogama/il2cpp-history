
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_Delete
               (MVAvatarSpawnRoleCreator *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_You_cannot_delete_the_last_spawn);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    iVar3 = MVTeamManager::MVTeamManager_get_NumSpawnPoint(this_00,(MethodInfo *)0x0);
    if (iVar3 < 2) {
      bVar4 = iRam_? != 0;
      *errorText = StringLiteral_You_cannot_delete_the_last_spawn;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)errorText >> 0xc);
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
      return 0;
    }
    this_01 = (this->fields)._._._.gameObject;
    if ((this_01 != (GameObject *)0x0) &&
       (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,0,(MethodInfo *)0x0),
       worldObjectClientManager != (MVWorldObjectClientManager *)0x0)) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                (worldObjectClientManager,(this->fields)._._._._.id,(MethodInfo *)0x0);
      return 1;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_Destroy
               (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  if ((this->fields).isInWorld != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_Quitting_k__BackingField == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
        this_00 = (pMVar2->fields).teamManager;
        id = (this->fields)._._._._.id;
        team = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
        if (this_00 != (MVTeamManager *)0x0) {
          MVTeamManager::MVTeamManager_OnRemoveSpawnPoint(this_00,id,team,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
code_?:
  if ((this->fields).cullingSubscriberDynamic != (CullingSubscriberDynamic *)0x0) {
    CullingSubscriberDynamic::CullingSubscriberDynamic_Destroy
              ((this->fields).cullingSubscriberDynamic,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    (this->fields).cullingSubscriberDynamic = (CullingSubscriberDynamic *)0x0;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).cullingSubscriberDynamic >> 0xc);
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
  }
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::
          MVAvatarSpawnRoleCreator_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVAvatarSpawnRoleCreator *this,float gridSize,
                    Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_2.x = (pVVar1->oneVector).x;
  VStack_2.y = (pVVar1->oneVector).y;
  fVar3 = VStack_2.y * _UNK_?;
  fVar4 = VStack_2.x * _UNK_?;
  fVar5 = (pVVar1->oneVector).z * _UNK_?;
  this_00 = (this->fields)._._._.gameObject;
  if ((this_00 != (GameObject *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_6.x = 0.0;
    QStack_6.y = 0.0;
    QStack_6.z = 0.0;
    QStack_6.w = 0.0;
    pvVar7 = (obj->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar7,&QStack_6);
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_2.z = position->z;
    VStack_2.x = position->x;
    VStack_2.y = position->y;
    aQStack_11[0].x = QStack_6.x;
    aQStack_11[0].y = QStack_6.y;
    aQStack_11[0].z = QStack_6.z;
    aQStack_11[0].w = QStack_6.w;
    VStack_12.y = fVar3;
    VStack_12.x = fVar4;
    VStack_12.z = fVar5;
    pVVar9 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                       ((Vector3 *)&QStack_6,&VStack_2,aQStack_11,gridSize,&VStack_12,
                        (MethodInfo *)0x0);
    fVar4 = pVVar9->y;
    fVar3 = pVVar9->z;
    __return_storage_ptr__->x = pVVar9->x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* GameObject GetSpawnRolePreviewObject() */

GameObject *
Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetSpawnRolePreviewObject
          (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  pMVar1 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVPreviewAvatar *)0x0) {
    return (pMVar1->fields)._._.gameObject;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pGVar3 = (GameObject *)(*pcVar2)();
  return pGVar3;
}


/* MVTeam GetTeamRequirement() */

MVTeam__Enum
Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetTeamRequirement
          (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_team);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_team,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return *(MVTeam__Enum *)&pOVar1[1].klass;
      }
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      MVar3 = (*pcVar2)();
      return MVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  MVar3 = (*pcVar2)();
  return MVar3;
}


/* GamePassTier GetTierRequirement() */

GamePassTier__Enum
Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetTierRequirement
          (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RequiredRank);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_RequiredRank,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return (GamePassTier__Enum)*(byte *)&pOVar1[1].klass;
      }
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Void HideBody() */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_HideBody
               (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_bodyId);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.childIdMap;
  if ((this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,(Object *)StringLiteral_bodyId,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar1 != (Object *)0x0)) {
    if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    id = *(int32_t *)&pOVar1[1].klass;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_01,id,(MethodInfo *)0x0);
      if (pMVar3 == (MVWorldObjectClient *)0x0) {
        return;
      }
      bVar4 = (TypeInfo__MVWorldObjectClient->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
         ((MVWorldObjectClient__Class *)(pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          TypeInfo__MVWorldObjectClient)) {
        FUN_?(pMVar3,TypeInfo__MVWorldObjectClient);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      obj = (pMVar3->fields).gameObject;
      if (obj != (GameObject *)0x0) {
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
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar5 = (obj->fields)._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar5,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_Initialize
               (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingSubscriberDynamic);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  (this->fields).isInWorld = 1;
  pTVar1 = (this->fields)._._._.transform;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  LayerUtil::LayerUtil_SetLayerRecursively(pTVar1,iVar2,(MethodInfo *)0x0);
  bVar3 = false;
  pLVar4 = MVGroup::MVGroup_get_Children((MVGroup *)this,(MethodInfo *)0x0);
  if (pLVar4 != (List_1_MVWorldObjectClient_ *)0x0) {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&uStack_6 >> 0xc);
      uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (ulonglong)(uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pLStack_11 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar4->fields)._version << 0x20);
    uStack_12 = 0;
    LStack_13._8_8_ = pLStack_11;
    LStack_13._current = (Object *)0x0;
    uStack_6 = 0;
    pLStack_11 = &LStack_13;
    LStack_13._list = (List_1_System_Object_ *)pLVar4;
    while (bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_13,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                             ), bVar14 != 0) {
      if (LStack_13._current == (Object *)0x0) goto code_?;
      if (*(int *)&LStack_13._current[6].monitor == 0) {
        if (bVar3) goto code_?;
        (this->fields)._AvatarRuntimePrototypeRoot_k__BackingField =
             *(int32_t *)&LStack_13._current[1].klass;
        bVar3 = true;
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar15 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar15 != (MVGameControllerBase *)0x0) &&
       (pMVar16 = (pMVar15->fields).game, pMVar16 != (MVNetworkGame *)0x0)) {
      this_00 = (pMVar16->fields).teamManager;
      iVar2 = (this->fields)._._._._.id;
      team = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
      if (this_00 != (MVTeamManager *)0x0) {
        MVTeamManager::MVTeamManager_OnAddSpawnPoint(this_00,iVar2,team,(MethodInfo *)0x0);
        MVAvatarSpawnRoleCreator_HideBody(this,(MethodInfo *)0x0);
        pUVar17 = (this->fields).useInteractor;
        if ((pUVar17 != (UseInteractor *)0x0) &&
           (this_01 = (pUVar17->fields).useInteractorVisuals,
           this_01 != (UseInteractorVisualization *)0x0)) {
          UseInteractorVisualization::UseInteractorVisualization_UpdateData
                    (this_01,(this->fields)._._._._.data,(pUVar17->fields).woOwnerID,
                     (MethodInfo *)0x0);
          pMVar18 = (this->fields).spawnRoleCreatorObject;
          if ((pMVar18 != (MVAvatarSpawnRoleCreatorObject *)0x0) &&
             (pGVar19 = (pMVar18->fields).useInteractionRotator, pGVar19 != (GameObject *)0x0)) {
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar19,(MethodInfo *)0x0);
            iVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_Logic,(MethodInfo *)0x0);
            LayerUtil::LayerUtil_SetLayerRecursively(pTVar1,iVar2,(MethodInfo *)0x0);
            pMVar18 = (this->fields).spawnRoleCreatorObject;
            if (pMVar18 != (MVAvatarSpawnRoleCreatorObject *)0x0) {
              pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pMVar18,(MethodInfo *)0x0);
              this_02 = (CullingSubscriberDynamic *)
                        FUN_?(TypeInfo__CullingSubscriberDynamic);
              CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
                        (this_02,_UNK_?,3,pGVar19,(GameObject__Array *)0x0,0,
                         (MethodInfo *)0x0);
              (this->fields).cullingSubscriberDynamic = this_02;
              if (iRam_? != 0) {
                uVar5 = (uint)((ulonglong)&(this->fields).cullingSubscriberDynamic >> 0xc);
                uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                do {
                  uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                  puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                  LOCK();
                  bVar3 = uVar8 == *puVar9;
                  if (bVar3) {
                    *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar3);
              }
              pMVar20 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
              if (pMVar20 != (MVPreviewAvatar *)0x0) {
                (pMVar20->fields).spawnRoleCreatorId = (this->fields)._._._._.id;
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
code_?:
  uVar21 = func_?(&TypeInfo__System__Exception);
  this_03 = (Exception *)func_?(uVar21);
  message = (String *)func_?(&StringLiteral_Multiple_playmode_avatars_detect);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_03,message,(MethodInfo *)0x0);
  uVar21 = func_?(&MethodInfo__MVAvatarSpawnRoleCreator__Initialize__);
  FUN_?(this_03,uVar21);
code_?:
  FUN_?();
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_InitializeInventory
               (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBody);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_bodyId);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.childIdMap;
  if ((this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,(Object *)StringLiteral_bodyId,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar1 != (Object *)0x0)) {
    if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    id = *(int32_t *)&pOVar1[1].klass;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      originalBody = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (this_01,id,(MethodInfo *)0x0);
      if (originalBody != (MVWorldObjectClient *)0x0) {
        pMVar3 = originalBody->klass;
        bVar4 = (TypeInfo__MVWorldObjectClient->_1).naturalAligment;
        if (((pMVar3->_1).naturalAligment < bVar4) ||
           ((MVWorldObjectClient__Class *)(pMVar3->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
            TypeInfo__MVWorldObjectClient)) {
          FUN_?(originalBody);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar4 = (TypeInfo__MVGroup->_1).naturalAligment;
        if ((bVar4 <= (pMVar3->_1).naturalAligment) &&
           ((MVGroup__Class *)(pMVar3->_1).typeHierarchy[(ulonglong)bVar4 - 1] == TypeInfo__MVGroup)
           ) {
          MVAvatarSpawnRoleCreator_ShowBody(this,originalBody,(MethodInfo *)0x0);
          return;
        }
      }
      LStack_5._list =
           (List_1_System_Object_ *)MVGroup::MVGroup_get_Children((MVGroup *)this,(MethodInfo *)0x0)
      ;
      if ((List_1_MVWorldObjectClient_ *)LStack_5._list != (List_1_MVWorldObjectClient_ *)0x0) {
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
        pLStack_11 = (List_1_T_Enumerator_System_Object_ *)
                     ((ulonglong)
                      (uint)(((List_1_MVWorldObjectClient_ *)LStack_5._list)->fields)._version <<
                     0x20);
        puStack_12 = (undefined *)0x0;
        LStack_5._8_8_ = pLStack_11;
        LStack_5._current = (Object *)0x0;
        uStack_7 = 0;
        pLStack_11 = &LStack_5;
        do {
          do {
            bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_5,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                              );
            if (bVar13 == 0) {
              return;
            }
          } while (LStack_5._current == (Object *)0x0);
          bVar4 = (TypeInfo__MVBody->_1).naturalAligment;
        } while (((((LStack_5._current)->klass->_1).naturalAligment < bVar4) ||
                 ((MVBody__Class *)
                  ((LStack_5._current)->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
                  TypeInfo__MVBody)) || (LStack_5._current == (Object *)0x0));
        MVAvatarSpawnRoleCreator_ShowBody(this,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_OnDataUpdate
               (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_MapDataToFields((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pUVar1 = (this->fields).useInteractor;
  if ((pUVar1 != (UseInteractor *)0x0) &&
     (this_00 = (pUVar1->fields).useInteractorVisuals, this_00 != (UseInteractorVisualization *)0x0)
     ) {
    UseInteractorVisualization::UseInteractorVisualization_UpdateData
              (this_00,(this->fields)._._._._.data,(pUVar1->fields).woOwnerID,(MethodInfo *)0x0);
    pMVar2 = (this->fields).spawnRoleCreatorObject;
    if ((pMVar2 != (MVAvatarSpawnRoleCreatorObject *)0x0) &&
       (pGVar3 = (pMVar2->fields).useInteractionRotator, pGVar3 != (GameObject *)0x0)) {
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar3,(MethodInfo *)0x0);
      layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Logic,(MethodInfo *)0x0);
      LayerUtil::LayerUtil_SetLayerRecursively(pTVar4,layer,(MethodInfo *)0x0);
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar5 != (MainCameraManager *)0x0) {
        if ((pMVar5->fields).blueModeEnabled != 0) {
          pMVar2 = (this->fields).spawnRoleCreatorObject;
          if ((pMVar2 == (MVAvatarSpawnRoleCreatorObject *)0x0) ||
             (pGVar3 = (pMVar2->fields).useInteractionRotator, pGVar3 == (GameObject *)0x0))
          goto code_?;
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar3,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
            FUN_?();
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar4,1,(MethodInfo *)0x0);
        }
        pMVar2 = (this->fields).spawnRoleCreatorObject;
        if ((pMVar2 != (MVAvatarSpawnRoleCreatorObject *)0x0) &&
           (pGVar3 = (pMVar2->fields).useInteractionRotator, pGVar3 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          pMVar2 = (this->fields).spawnRoleCreatorObject;
          if ((pMVar2 != (MVAvatarSpawnRoleCreatorObject *)0x0) &&
             (pGVar3 = (pMVar2->fields).useInteractionRotator, pGVar3 != (GameObject *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                            ,1,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pGVar3 == (GameObject *)0x0) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pvVar7 = (pGVar3->fields)._.m_CachedPtr;
            if (pvVar7 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar3,(MethodInfo *)0x0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcVar6 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar7,1);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void PartialDataRemove(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_PartialDataRemove
               (MVAvatarSpawnRoleCreator *this,int32_t arg1,
               Dictionary_2_System_Object_System_Object_ *arg2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pMVar3 = (pMVar2->fields).operationRequests, pMVar3 == (MVNetworkGame_OperationRequests *)0x0)
     ) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ,arg1,arg2,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = arg1;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar6 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar7 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x17,value,(InsertionBehavior__Enum)uVar6,method_00);
    uVar5 = CONCAT71(uVar7,0x14);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x14,(Object *)arg2,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar8 = (pMVar3->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar8 != (PhotonPeer *)0x0) {
      (*(pPVar8->klass->vtable).SendOperation.methodPtr)
                (pPVar8,CONCAT71((int7)((ulonglong)uVar5 >> 8),5),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar8->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PartialDataUpdate(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_PartialDataUpdate
               (MVAvatarSpawnRoleCreator *this,int32_t arg1,
               Dictionary_2_System_Object_System_Object_ *arg2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).operationRequests,
     this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
              (this_00,arg1,arg2,(MethodInfo *)0x0);
    pMVar3 = (this->fields).spawnRoleCreatorObject;
    if (pMVar3 != (MVAvatarSpawnRoleCreatorObject *)0x0) {
      pTVar4 = (pMVar3->fields).spawnPlate;
      MVar5 = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
      if (pTVar4 != (TintObject *)0x0) {
        UNRECOVERED_JUMPTABLE = (pTVar4->klass->vtable).TeamTint.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (pTVar4,(ulonglong)MVar5,(pTVar4->klass->vtable).TeamTint.method,
                   UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void PartialRemoveFromWOData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_PartialRemoveFromWOData
               (MVAvatarSpawnRoleCreator *this,
               Dictionary_2_System_Object_System_Object_ *entriesToRemove,MethodInfo *method)

{
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
            ((this->fields)._._._._.data,entriesToRemove,0,(MethodInfo *)0x0);
  (*(this->klass->vtable).OnDataUpdate.methodPtr)(this);
  pMVar1 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVPreviewAvatar *)0x0) {
    UNRECOVERED_JUMPTABLE = (pMVar1->klass->vtable).PartialRemoveFromWOData.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (pMVar1,entriesToRemove,(pMVar1->klass->vtable).PartialRemoveFromWOData.method,
               UNRECOVERED_JUMPTABLE);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PartialUpdateWOData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_PartialUpdateWOData
               (MVAvatarSpawnRoleCreator *this,Dictionary_2_System_Object_System_Object_ *woData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_prevTeam_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Team_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVar1 = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
  EStack_2.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
  EStack_2.monitor = (MonitorData *)0xffffffffffffffff;
  MStack_3 = MVar1;
  pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_prevTeam_,pSVar4,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar4,(MethodInfo *)0x0);
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
            ((this->fields)._._._._.data,woData,(MethodInfo *)0x0);
  (*(this->klass->vtable).OnDataUpdate.methodPtr)(this);
  MStack_3 = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
  EStack_2.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
  EStack_2.monitor = (MonitorData *)0xffffffffffffffff;
  pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Team_,pSVar4,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar4,(MethodInfo *)0x0);
  pMVar5 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
  if (pMVar5 != (MVPreviewAvatar *)0x0) {
    (*(pMVar5->klass->vtable).PartialUpdateWOData.methodPtr)
              (pMVar5,woData,(pMVar5->klass->vtable).PartialUpdateWOData.method);
    MVar6 = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
    if (MVar1 == MVar6) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar7 != (MVGameControllerBase *)0x0) &&
       (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) {
      pMVar9 = (pMVar8->fields).teamManager;
      woId = (this->fields)._._._._.id;
      MVar6 = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
      if (pMVar9 != (MVTeamManager *)0x0) {
        MVTeamManager::MVTeamManager_OnAddSpawnPoint(pMVar9,woId,MVar6,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar7 != (MVGameControllerBase *)0x0) &&
            (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
           (pMVar9 = (pMVar8->fields).teamManager, pMVar9 != (MVTeamManager *)0x0)) {
          MVTeamManager::MVTeamManager_OnRemoveSpawnPoint
                    (pMVar9,(this->fields)._._._._.id,MVar1,(MethodInfo *)0x0);
          pMVar10 = (this->fields).spawnRoleCreatorObject;
          if (pMVar10 != (MVAvatarSpawnRoleCreatorObject *)0x0) {
            pTVar11 = (pMVar10->fields).spawnPlate;
            MVar1 = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
            if (pTVar11 != (TintObject *)0x0) {
              (*(pTVar11->klass->vtable).TeamTint.methodPtr)
                        (pTVar11,(ulonglong)MVar1,(pTVar11->klass->vtable).TeamTint.method);
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SettingsReporterOnOnValueChangedLocal(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::
     MVAvatarSpawnRoleCreator_SettingsReporterOnOnValueChangedLocal
               (MVAvatarSpawnRoleCreator *this,Dictionary_2_System_Object_System_Object_ *obj,
               MethodInfo *method)

{
  pMVar1 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVPreviewAvatar *)0x0) {
    UNRECOVERED_JUMPTABLE = (pMVar1->klass->vtable).PartialUpdateWOData.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (pMVar1,obj,(pMVar1->klass->vtable).PartialUpdateWOData.method,UNRECOVERED_JUMPTABLE);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SettingsReporterOnOnValueRemovedLocal(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::
     MVAvatarSpawnRoleCreator_SettingsReporterOnOnValueRemovedLocal
               (MVAvatarSpawnRoleCreator *this,Dictionary_2_System_Object_System_Object_ *obj,
               MethodInfo *method)

{
  pMVar1 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVPreviewAvatar *)0x0) {
    UNRECOVERED_JUMPTABLE = (pMVar1->klass->vtable).PartialRemoveFromWOData.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (pMVar1,obj,(pMVar1->klass->vtable).PartialRemoveFromWOData.method,
               UNRECOVERED_JUMPTABLE);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowBody(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_ShowBody
               (MVAvatarSpawnRoleCreator *this,MVWorldObjectClient *originalBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBody);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hidden);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (originalBody != (MVWorldObjectClient *)0x0) {
    method = (MethodInfo *)originalBody->klass;
    bVar1 = (TypeInfo__MVGroup->_1).naturalAligment;
    if (((((MVWorldObjectClient__Class *)method)->_1).naturalAligment < bVar1) ||
       ((MVGroup__Class *)
        (((MVWorldObjectClient__Class *)method)->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
        TypeInfo__MVGroup)) {
      FUN_?(originalBody);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pLVar3 = MVGroup::MVGroup_get_Children((MVGroup *)originalBody,(MethodInfo *)0x0);
    in_R9 = (MVBody__Class *)0x0;
    if (pLVar3 != (List_1_MVWorldObjectClient_ *)0x0) {
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
      pLStack_9 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar3->fields)._version << 0x20);
      uStack_10 = 0;
      LStack_11._8_8_ = pLStack_9;
      LStack_11._current = (Object *)0x0;
      uStack_5 = 0;
      pLStack_9 = &LStack_11;
      LStack_11._list = (List_1_System_Object_ *)pLVar3;
      do {
        do {
          bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_11,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                            );
          if (bVar12 == 0) goto code_?;
        } while ((MVWorldObjectClient__Class *)LStack_11._current ==
                 (MVWorldObjectClient__Class *)0x0);
        pIVar13 = ((Il2CppClass_0 *)&(LStack_11._current)->klass)->image;
        bVar1 = (TypeInfo__MVBody->_1).naturalAligment;
      } while (((*(byte *)&pIVar13[4].assembly < bVar1) ||
               (*(MVBody__Class **)((longlong)pIVar13[2].codeGenModule + (ulonglong)bVar1 * 8 + -8)
                != TypeInfo__MVBody)) ||
              ((MVWorldObjectClient__Class *)LStack_11._current == (MVWorldObjectClient__Class *)0x0
              ));
      bVar1 = (TypeInfo__MVBody->_1).naturalAligment;
      method = (MethodInfo *)LStack_11._current;
      in_R9 = TypeInfo__MVBody;
      if ((bVar1 <= *(byte *)&pIVar13[4].assembly) &&
         (*(MVBody__Class **)((longlong)pIVar13[2].codeGenModule + (ulonglong)bVar1 * 8 + -8) ==
          TypeInfo__MVBody)) {
        WorldObjectTypes::MVDoor::MVDoor::MVDoor_SetUseInteractorData
                  ((MVDoor *)LStack_11._current,
                   (Dictionary_2_System_Object_System_Object_ *)StringLiteral_Hidden,
                   (MethodInfo *)LStack_11._current);
code_?:
        transfrom = (this->fields)._._._.transform;
        layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Hidden,(MethodInfo *)0x0);
        LayerUtil::LayerUtil_SetLayerRecursively(transfrom,layer,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?(method,in_R9);
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void TryShowBody() */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_TryShowBody
               (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBody);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_bodyId);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.childIdMap;
  if ((this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,(Object *)StringLiteral_bodyId,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar1 != (Object *)0x0)) {
    if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    id = *(int32_t *)&pOVar1[1].klass;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      originalBody = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (this_01,id,(MethodInfo *)0x0);
      if (originalBody != (MVWorldObjectClient *)0x0) {
        pMVar3 = originalBody->klass;
        bVar4 = (TypeInfo__MVWorldObjectClient->_1).naturalAligment;
        if (((pMVar3->_1).naturalAligment < bVar4) ||
           ((MVWorldObjectClient__Class *)(pMVar3->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
            TypeInfo__MVWorldObjectClient)) {
          FUN_?(originalBody);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar4 = (TypeInfo__MVGroup->_1).naturalAligment;
        if ((bVar4 <= (pMVar3->_1).naturalAligment) &&
           ((MVGroup__Class *)(pMVar3->_1).typeHierarchy[(ulonglong)bVar4 - 1] == TypeInfo__MVGroup)
           ) {
          MVAvatarSpawnRoleCreator_ShowBody(this,originalBody,(MethodInfo *)0x0);
          return;
        }
      }
      LStack_5._list =
           (List_1_System_Object_ *)MVGroup::MVGroup_get_Children((MVGroup *)this,(MethodInfo *)0x0)
      ;
      if ((List_1_MVWorldObjectClient_ *)LStack_5._list != (List_1_MVWorldObjectClient_ *)0x0) {
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
        pLStack_11 = (List_1_T_Enumerator_System_Object_ *)
                     ((ulonglong)
                      (uint)(((List_1_MVWorldObjectClient_ *)LStack_5._list)->fields)._version <<
                     0x20);
        uStack_12 = 0;
        LStack_5._8_8_ = pLStack_11;
        LStack_5._current = (Object *)0x0;
        uStack_7 = 0;
        pLStack_11 = &LStack_5;
        do {
          do {
            bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_5,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                              );
            if (bVar13 == 0) {
              return;
            }
          } while (LStack_5._current == (Object *)0x0);
          bVar4 = (TypeInfo__MVBody->_1).naturalAligment;
        } while (((((LStack_5._current)->klass->_1).naturalAligment < bVar4) ||
                 ((MVBody__Class *)
                  ((LStack_5._current)->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
                  TypeInfo__MVBody)) || (LStack_5._current == (Object *)0x0));
        MVAvatarSpawnRoleCreator_ShowBody(this,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateAvatarBody(SpawnRoleBodySwitchData, Boolean) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
               (MVAvatarSpawnRoleCreator *this,SpawnRoleBodySwitchData *spawnRoleBodySwitchData,
               bool removedObjectLinks,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  ,spawnRoleBodySwitchData,CONCAT71(in_register_00000081,removedObjectLinks),uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Logic);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_bodyId);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.childIdMap;
  if (spawnRoleBodySwitchData != (SpawnRoleBodySwitchData *)0x0) {
    aiStackX_8[0] = (spawnRoleBodySwitchData->fields).addedBodyWoId;
    value = (Object *)FUN_?(uRam_?,aiStackX_8);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (this_00,(Object *)StringLiteral_bodyId,value,CONCAT31((int3)((uint)uVar1 >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      if ((this->fields).OnBodyUpdate != (Action *)0x0) {
        pAVar2 = (this->fields).OnBodyUpdate;
        (*(pAVar2->fields)._._.invoke_impl)((pAVar2->fields)._._.method_code);
      }
      pTVar3 = (this->fields)._._._.transform;
      layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Logic,(MethodInfo *)0x0);
      LayerUtil::LayerUtil_SetLayerRecursively(pTVar3,layer,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar4 != (MainCameraManager *)0x0) {
        if ((pMVar4->fields).blueModeEnabled != 0) {
          pMVar5 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
          if (pMVar5 == (MVPreviewAvatar *)0x0) goto code_?;
          pTVar3 = (pMVar5->fields)._._.transform;
          if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
            FUN_?();
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar3,1,(MethodInfo *)0x0);
          pMVar6 = (this->fields).spawnRoleCreatorObject;
          if ((pMVar6 == (MVAvatarSpawnRoleCreatorObject *)0x0) ||
             (this_01 = (pMVar6->fields).spawnPlate, this_01 == (TintObject *)0x0))
          goto code_?;
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_01,(MethodInfo *)0x0);
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar3,1,(MethodInfo *)0x0);
        }
        MVAvatarSpawnRoleCreator_HideBody(this,(MethodInfo *)0x0);
        pMVar5 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
        if (pMVar5 != (MVPreviewAvatar *)0x0) {
          (pMVar5->fields).spawnRoleCreatorId = (this->fields)._._._._.id;
          if ((removedObjectLinks != 0) && ((this->fields).OnRedoObjectLinks != (Action *)0x0)) {
            pAVar2 = (this->fields).OnRedoObjectLinks;
            (*(pAVar2->fields)._._.invoke_impl)
                      ((pAVar2->fields)._._.method_code,(pAVar2->fields)._._.method);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVAvatarSpawnRoleCreator(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator__ctor
               (MVAvatarSpawnRoleCreator *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameRankRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarSpawnRoleCreatorObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarSpawnRoleCreator__PartialDataRemove_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarSpawnRoleCreator__PartialDataUpdate_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarSpawnRoleCreator__SettingsReporterOnOnValueChangedLocal_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVAvatarSpawnRoleCreator__SettingsReporterOnOnValueRemovedLocal_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsReporter
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 == (PrefabPool *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  MVBlueprintBase::MVBlueprintBase__ctor_1
            ((MVBlueprintBase *)this,data,
             (ObjectPrefab *)(pPVar1->fields).mvAvatarSpawnRoleCreatorPrefab,worldObjects,
             (MethodInfo *)0x0);
  this_01 = (Action_2_Int32Enum_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                         );
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__MVAvatarSpawnRoleCreator__PartialDataUpdate_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  this_02 = (Action_2_Int32Enum_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                         );
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_02,(Object *)this,
             MethodInfo__MVAvatarSpawnRoleCreator__PartialDataRemove_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pSVar3 = (SettingsReporter *)
            FUN_?(
                         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsReporter
                         );
  MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsReporter::
  SettingsReporter__ctor
            (pSVar3,(MVWorldObject *)this,
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             this_01,(Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                      *)this_02,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  (this->fields).settingsReporter = pSVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).settingsReporter >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pSVar3 = (this->fields).settingsReporter;
  pUVar9 = (UnityAction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar9,(Object *)this,
             MethodInfo__MVAvatarSpawnRoleCreator__SettingsReporterOnOnValueChangedLocal_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  if (pSVar3 == (SettingsReporter *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar10 = (pSVar3->fields).OnValueChangedLocal;
  do {
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar10,(Delegate *)pUVar9,(MethodInfo *)0x0);
    pAVar12 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    if (pDVar11 == (Delegate *)0x0) {
      pAVar13 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0
      ;
    }
    else {
      pAVar13 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
                FUN_?(pDVar11,
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      if (pAVar13 ==
          (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
        FUN_?(pDVar11,pAVar12);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    ppAVar14 = &(pSVar3->fields).OnValueChangedLocal;
    LOCK();
    pAVar15 = *ppAVar14;
    bVar4 = pAVar10 == pAVar15;
    if (bVar4) {
      *ppAVar14 = pAVar13;
      pAVar15 = pAVar10;
    }
    UNLOCK();
    pAVar13 = pAVar10;
    if (!bVar4) {
      pAVar13 = pAVar15;
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&(pSVar3->fields).OnValueChangedLocal >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    bVar4 = pAVar13 != pAVar10;
    pAVar10 = pAVar13;
  } while (bVar4);
  pSVar3 = (this->fields).settingsReporter;
  pUVar9 = (UnityAction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (pUVar9,(Object *)this,
             MethodInfo__MVAvatarSpawnRoleCreator__SettingsReporterOnOnValueRemovedLocal_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  if (pSVar3 == (SettingsReporter *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar10 = (pSVar3->fields).OnValueRemovedLocal;
  do {
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar10,(Delegate *)pUVar9,(MethodInfo *)0x0);
    pAVar12 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
    ;
    if (pDVar11 == (Delegate *)0x0) {
      pAVar13 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0
      ;
    }
    else {
      pAVar13 = (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
                FUN_?(pDVar11,
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
      if (pAVar13 ==
          (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
        FUN_?(pDVar11,pAVar12);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    ppAVar14 = &(pSVar3->fields).OnValueRemovedLocal;
    LOCK();
    pAVar15 = *ppAVar14;
    bVar4 = pAVar10 == pAVar15;
    if (bVar4) {
      *ppAVar14 = pAVar13;
      pAVar15 = pAVar10;
    }
    UNLOCK();
    pAVar13 = pAVar10;
    if (!bVar4) {
      pAVar13 = pAVar15;
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&(pSVar3->fields).OnValueRemovedLocal >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    bVar4 = pAVar13 != pAVar10;
    pAVar10 = pAVar13;
  } while (bVar4);
  pMVar16 = (MVAvatarSpawnRoleCreatorObject *)(this->fields)._._._.component;
  piVar17 = &(this->fields)._._._.interactionFlags;
  *piVar17 = *piVar17 | 0x80008000;
  if (pMVar16 == (MVAvatarSpawnRoleCreatorObject *)0x0) {
    (this->fields).spawnRoleCreatorObject = (MVAvatarSpawnRoleCreatorObject *)0x0;
  }
  else {
    bVar18 = (TypeInfo__MVAvatarSpawnRoleCreatorObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar16->klass)->_1).naturalAligment < bVar18) ||
       ((((ObjectPrefab__Class *)pMVar16->klass)->_1).typeHierarchy[(ulonglong)bVar18 - 1] !=
        (Il2CppClass *)TypeInfo__MVAvatarSpawnRoleCreatorObject)) {
      FUN_?(pMVar16);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields).spawnRoleCreatorObject = pMVar16;
    bVar18 = (TypeInfo__MVAvatarSpawnRoleCreatorObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar16->klass)->_1).naturalAligment < bVar18) ||
       ((((ObjectPrefab__Class *)pMVar16->klass)->_1).typeHierarchy[(ulonglong)bVar18 - 1] !=
        (Il2CppClass *)TypeInfo__MVAvatarSpawnRoleCreatorObject)) {
      FUN_?(pMVar16);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&(this->fields).spawnRoleCreatorObject >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pMVar16 = (this->fields).spawnRoleCreatorObject;
  if (pMVar16 == (MVAvatarSpawnRoleCreatorObject *)0x0) goto code_?;
  pTVar19 = (pMVar16->fields).spawnPlate;
  MVar20 = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
  if (pTVar19 == (TintObject *)0x0) goto code_?;
  (*(pTVar19->klass->vtable).TeamTint.methodPtr)
            (pTVar19,(ulonglong)MVar20,(pTVar19->klass->vtable).TeamTint.method);
  pMVar16 = (this->fields).spawnRoleCreatorObject;
  if (pMVar16 == (MVAvatarSpawnRoleCreatorObject *)0x0) goto code_?;
  pGVar21 = (pMVar16->fields).useInteractionRotator;
  pUVar22 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
  UseInteractor::UseInteractor__ctor
            (pUVar22,(MVWorldObjectClient *)this,pGVar21,0,(Collider *)0x0,
             (Func_2_Int32_Boolean_ *)0x0,(Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,
             _UNK_?,0,1,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  (this->fields).useInteractor = pUVar22;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pMVar16 = (this->fields).spawnRoleCreatorObject;
  if (pMVar16 == (MVAvatarSpawnRoleCreatorObject *)0x0) goto code_?;
  pGVar21 = (pMVar16->fields).useInteractionRotator;
  this_03 = (GameRankRequirement *)FUN_?(TypeInfo__GameRankRequirement);
  GameRankRequirement::GameRankRequirement__ctor
            (this_03,pGVar21,(MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
  if (this_03 == (GameRankRequirement *)0x0) goto code_?;
  *(undefined1 *)((longlong)&this_03[1].klass + 1) = 0;
  pUVar22 = (this->fields).useInteractor;
  if (pUVar22 == (UseInteractor *)0x0) goto code_?;
  this_00 = (pUVar22->fields).useInteractorVisuals;
  if (this_00 == (UseInteractorVisualization *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_
                  ,this_03,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar23 = MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_;
  pLVar24 = (this_00->fields).useRequirements;
  if (pLVar24 == (List_1_UseRequirement_ *)0x0) goto code_?;
  piVar25 = &(pLVar24->fields)._version;
  *piVar25 = *piVar25 + 1;
  pUVar26 = (pLVar24->fields)._items;
  if (pUVar26 == (UseRequirement__Array *)0x0) goto code_?;
  uVar5 = (pLVar24->fields)._size;
  if (uVar5 < (uint)pUVar26->max_length) {
    (pLVar24->fields)._size = uVar5 + 1;
    FUN_?(pUVar26,(longlong)(int)uVar5,this_03);
  }
  else {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__AddWithResize
              ((List_1_System_Object_ *)pLVar24,(Object *)this_03,
               pMVar23->klass->rgctx_data[0xe].method);
  }
  if ((this_00->fields).hasInputBlockingRequirement == 0) {
    if (this_03 == (GameRankRequirement *)0x0) goto code_?;
    cVar27 = (*(this_03->klass->vtable).get_IsInputBlocking.methodPtr)
                       (this_03,(this_03->klass->vtable).get_IsInputBlocking.method);
  }
  else {
    cVar27 = '\x01';
  }
  (this_00->fields).hasInputBlockingRequirement = cVar27 != '\0';
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this_00->fields).active = 0;
  (this_00->fields).dist = 1.3;
  pLVar24 = (this_00->fields).useRequirements;
  if (pLVar24 == (List_1_UseRequirement_ *)0x0) {
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&stack0xffffffffffffffb8 >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pLStack_28 = pLVar24;
    bVar29 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
             List_1_T_Enumerator_System_Object__MoveNext
                       ((List_1_T_Enumerator_System_Object_ *)&pLStack_28,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                       );
    if (bVar29 == 0) {
      if ((this_00->fields).active == 1) {
        (this_00->fields).dist = 0.01;
      }
      bVar4 = (this_00->fields).active == 0;
      if (!bVar4) {
        (this_00->fields).spacing = (float)(int)(0x168 / (longlong)(this_00->fields).active);
        bVar4 = (this_00->fields).active == 0;
      }
      (this_00->fields)._HasUseRequirements_k__BackingField = !bVar4;
      pLVar24 = (this_00->fields).useRequirements;
      if (pLVar24 != (List_1_UseRequirement_ *)0x0) {
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&stack0xffffffffffffffb8 >> 0xc);
          uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
          do {
            uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
            puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
            LOCK();
            bVar4 = uVar7 == *puVar8;
            if (bVar4) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar4);
        }
        pLStack_28 = pLVar24;
        bVar29 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                 List_1_T_Enumerator_System_Object__MoveNext
                           ((List_1_T_Enumerator_System_Object_ *)&pLStack_28,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                           );
        if (bVar29 == 0) {
          if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) {
            if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
              UseInteractorVisualization::UseInteractorVisualization_SetupCulling
                        (this_00,(MethodInfo *)0x0);
              goto code_?;
            }
            if ((this_00->fields)._HasUseRequirements_k__BackingField != 0)
            goto code_?;
          }
          if ((this_00->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
            UseInteractorVisualization::UseInteractorVisualization_RemoveCulling
                      (this_00,(MethodInfo *)0x0);
          }
code_?:
          bVar29 = (this_00->fields)._HasUseRequirements_k__BackingField;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar30 = (this_00->fields)._._._._.m_CachedPtr;
          if (pvVar30 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar31 = func_?(&UNK_?);
            FUN_?(uVar31,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pvVar30,bVar29);
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AttributeSettingsManager get_AttributeSettingsManagerAvatar() */

AttributeSettingsManager *
Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::
MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
          (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsManager
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._._.data;
  pSVar2 = (this->fields).settingsReporter;
  pAVar3 = (AttributeSettingsManager *)
           FUN_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsManager
                        );
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsManager
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar4 = iRam_? != 0;
  (pAVar3->fields).woData = pDVar1;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(pAVar3->fields).woData >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  (pAVar3->fields).attributeSettingWoType = 0;
  pSVar9 = (SettingsManager *)
           FUN_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsManager
                        );
  iVar10 = iRam_?;
  (pSVar9->fields).settingsReporter = pSVar2;
  if (iVar10 != 0) {
    uVar5 = (uint)((ulonglong)&pSVar9->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
      iVar10 = iRam_?;
    } while (!bVar4);
  }
  (pAVar3->fields).settingsManager = pSVar9;
  if (iVar10 != 0) {
    uVar5 = (uint)((ulonglong)&pAVar3->fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  return pAVar3;
}


/* MVPreviewAvatar get_AvatarPrototype() */

MVPreviewAvatar *
Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_AvatarPrototype
          (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPreviewAvatar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._.children;
  if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pMVar2 = (MVPreviewAvatar *)(*pcVar1)();
    return pMVar2;
  }
  pMVar2 = (MVPreviewAvatar *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
           Dictionary_2_System_Int32_System_Object__get_Item
                     ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                      (this->fields)._AvatarRuntimePrototypeRoot_k__BackingField,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                     );
  if (pMVar2 != (MVPreviewAvatar *)0x0) {
    bVar3 = (TypeInfo__MVPreviewAvatar->_1).naturalAligment;
    if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
       ((MVPreviewAvatar__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        TypeInfo__MVPreviewAvatar)) {
      FUN_?(pMVar2,TypeInfo__MVPreviewAvatar);
      pcVar1 = (code *)swi(3);
      pMVar2 = (MVPreviewAvatar *)(*pcVar1)();
      return pMVar2;
    }
  }
  return pMVar2;
}


/* Int32 get_AvatarRuntimePrototypeRoot() */

int32_t Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::
        MVAvatarSpawnRoleCreator_get_AvatarRuntimePrototypeRoot
                  (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  return (this->fields)._AvatarRuntimePrototypeRoot_k__BackingField;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_DocumentationType
          (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_AvatarClass;
}


/* MVTeam get_Team() */

MVTeam__Enum
Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
          (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_team);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_team,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return *(MVTeam__Enum *)&pOVar1[1].klass;
      }
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      MVar3 = (*pcVar2)();
      return MVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  MVar3 = (*pcVar2)();
  return MVar3;
}


/* GamePassTier get_Tier() */

GamePassTier__Enum
Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
          (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RequiredRank);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (this_00,(Object *)StringLiteral_RequiredRank,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return (GamePassTier__Enum)*(byte *)&pOVar1[1].klass;
      }
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      GVar3 = (*pcVar2)();
      return GVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Void set_AvatarRuntimePrototypeRoot(Int32) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::
     MVAvatarSpawnRoleCreator_set_AvatarRuntimePrototypeRoot
               (MVAvatarSpawnRoleCreator *this,int32_t value,MethodInfo *method)

{
  (this->fields)._AvatarRuntimePrototypeRoot_k__BackingField = value;
  return;
}


/* Void set_Team(MVTeam) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_set_Team
               (MVAvatarSpawnRoleCreator *this,MVTeam__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_team);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    this_00 = (pMVar2->fields).operationRequests;
    worldObjectID = (this->fields)._._._._.id;
    aMStackX_20[0] = value;
    value_00 = (Object *)FUN_?(uRam_?,aMStackX_20);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                (this_00,worldObjectID,StringLiteral_team,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_Tier(GamePassTier) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_set_Tier
               (MVAvatarSpawnRoleCreator *this,GamePassTier__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RequiredRank);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._._._.data;
  aGStackX_10[0] = value & 0xff;
  pOVar2 = (Object *)FUN_?(uRam_?,aGStackX_10);
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (pDVar1,(Object *)StringLiteral_RequiredRank,pOVar2,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    worldObjectID = (this->fields)._._._._.id;
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pDVar1 = (this->fields)._._._._.data;
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar1,(Object *)StringLiteral_RequiredRank,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (this_01 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,
                   (Object *)StringLiteral_RequiredRank,pOVar2,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar4 != (MVGameControllerBase *)0x0) &&
            (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
           (this_00 = (pMVar5->fields).operationRequests,
           this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                    (this_00,worldObjectID,(Dictionary_2_System_Object_System_Object_ *)this_01,
                     (MethodInfo *)0x0);
          pMVar6 = (this->fields).spawnRoleCreatorObject;
          if (pMVar6 != (MVAvatarSpawnRoleCreatorObject *)0x0) {
            pTVar7 = (pMVar6->fields).spawnPlate;
            MVar8 = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
            if (pTVar7 != (TintObject *)0x0) {
              UNRECOVERED_JUMPTABLE = (pTVar7->klass->vtable).TeamTint.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)
                        (pTVar7,(ulonglong)MVar8,(pTVar7->klass->vtable).TeamTint.method,
                         UNRECOVERED_JUMPTABLE);
              return;
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

