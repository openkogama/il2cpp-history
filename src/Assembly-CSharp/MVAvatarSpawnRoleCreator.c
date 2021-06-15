
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_Delete
               (MVAvatarSpawnRoleCreator *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                        ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (this_01 != (SkyParam *)0x0) {
      iVar1 = MVTeamManager::MVTeamManager_get_NumSpawnPoint
                        ((MVTeamManager *)this_01,(MethodInfo *)0x0);
      if (iVar1 < 2) {
        *errorText = StringLiteral_You_cannot_delete_the_last_spawn;
        return 0;
      }
      if (*(GameObject **)(in_stack_2 + 0x88) != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (*(GameObject **)(in_stack_2 + 0x88),0,(MethodInfo *)0x0);
        if (in_stack_3 != (MVWorldObjectClientManager *)0x0) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                    (in_stack_3,*(int32_t *)(in_stack_2 + 8),(MethodInfo *)0x0);
          return 1;
        }
      }
      func_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_Destroy
               (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  if ((this->fields).isInWorld != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    bVar1 = MVGameControllerBase::MVGameControllerBase_get_Quitting((MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame *)0x0) {
        this_02 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)this_01,(MethodInfo *)0x0);
        id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
        team = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
        if (this_02 != (SkyParam *)0x0) {
          MVTeamManager::MVTeamManager_OnRemoveSpawnPoint
                    ((MVTeamManager *)this_02,(int32_t)id,team,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
code_?:
  this_00 = (this->fields).cullingSubscriberDynamic;
  if (this_00 != (CullingSubscriberDynamic *)0x0) {
    CullingSubscriberDynamic::CullingSubscriberDynamic_Destroy(this_00,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberDynamic = (CullingSubscriberDynamic *)0x0;
  }
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::
          MVAvatarSpawnRoleCreator_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVAvatarSpawnRoleCreator *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     ((Vector3 *)&stack0xffffffe4,*pVVar1,2.2,(MethodInfo *)0x0);
  fVar2 = pVVar1->z;
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      __return_storage_ptr___00 = (Quaternion *)&stack0xffffffe0;
      puVar3 = &UNK_?;
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         (__return_storage_ptr___00,this_01,(MethodInfo *)0x0);
      fVar5 = pQVar4->x;
      fVar6 = pQVar4->y;
      fVar7 = pQVar4->z;
      fVar8 = pQVar4->w;
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?();
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = fVar6;
      rotation.x = fVar5;
      rotation.z = fVar7;
      rotation.w = fVar8;
      scale.y = (float)__return_storage_ptr___00;
      scale.x = (float)puVar3;
      scale.z = fVar2;
      pVVar1 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,0.0,scale,(MethodInfo *)0x0);
      fVar5 = pVVar1->y;
      fVar2 = pVVar1->z;
      __return_storage_ptr___00->x = pVVar1->x;
      __return_storage_ptr___00->y = fVar5;
      __return_storage_ptr___00->z = fVar2;
      return (Vector3 *)__return_storage_ptr___00;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar9)();
  return pVVar1;
}


/* GameObject GetSpawnRolePreviewObject() */

GameObject *
Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetSpawnRolePreviewObject
          (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  pMVar1 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVPreviewAvatar *)0x0) {
    return *(GameObject **)(in_stack_2 + 0x88);
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pGVar4 = (GameObject *)(*pcVar3)();
  return pGVar4;
}


/* MVTeam GetTeamRequirement() */

MVTeam__Enum
Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_GetTeamRequirement
          (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,(Type *)StringLiteral_team,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      pIStack2 = TypeInfo__System__Int32;
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        pIStack2 = (Int32__Class *)pPVar1;
        pMVar3 = (MVTeam__Enum *)func_?();
        return *pMVar3;
      }
      goto code_?;
    }
  }
  pIStack2 = (Int32__Class *)0x0;
  func_?();
  pIStack2 = extraout_EDX;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  MVar5 = (*pcVar4)();
  return MVar5;
}


/* Void HideBody() */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_HideBody
               (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.childIdMap;
  if ((this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_00,(Type *)StringLiteral_bodyId,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pPVar1 == (Pool *)0x0)) goto code_?;
  if ((pPVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
  goto code_?;
  piVar2 = (int32_t *)func_?();
  unaff_ESI = (MVWorldObjectClient__Class *)*piVar2;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
    pDVar3 = extraout_EDX;
  }
  else {
    pDVar3 = (DayNightCycle *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,(int32_t)unaff_ESI,(MethodInfo *)0x0);
    unaff_ESI = TypeInfo__MVWorldObjectClient;
    if (pDVar3 == (DayNightCycle *)0x0) {
      return;
    }
    bVar4 = (TypeInfo__MVWorldObjectClient->_1).naturalAligment;
    if (((((MVWorldObject__Class *)pDVar3->klass)->_1).naturalAligment < bVar4) ||
       ((MVWorldObjectClient__Class *)
        (((MVWorldObject__Class *)pDVar3->klass)->_1).typeHierarchy[bVar4 - 1] !=
        TypeInfo__MVWorldObjectClient)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    this_02 = (DayNightCycle *)0x0;
    if (bVar5) {
      this_02 = pDVar3;
    }
    if (this_02 != (DayNightCycle *)0x0) {
      this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_02,(MethodInfo *)0x0);
      if (this_03 != (CelestialParam *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)this_03,0,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  pPVar1 = (Pool *)func_?(pDVar3,unaff_ESI);
code_?:
  func_?(pPVar1);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_Initialize
               (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)&stack0xffffffb4;
  func_?();
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pTVar4 = (this->fields)._._._.transform;
  (this->fields).isInWorld = 1;
  iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  LayerUtil::LayerUtil_SetLayerRecursively(pTVar4,iVar5,(MethodInfo *)0x0);
  cVar6 = '\0';
  this_01 = (List_1_UnityEngine_Color32_ *)
            MVGroup::MVGroup_get_Children((MVGroup *)this,(MethodInfo *)0x0);
  if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
    List_1_UnityEngine_Color32__GetEnumerator
              ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc0,this_01,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__)
    ;
    uStack_1 = 0;
    while (pMVar7 = 
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
          , cVar8 = func_?(), cVar8 != '\0') {
      this_02 = (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                           &stack0xffffffd0,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                          );
      if (this_02 ==
          (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)0x0)
      goto code_?;
      pOVar9 = System.Core.dll::System::Linq::
               Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
               Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                         (this_02,(MethodInfo *)0x0);
      if (pOVar9 == (Object *)0x0) {
        if (cVar6 != '\0') goto code_?;
        pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0);
        (this->fields)._AvatarRuntimePrototypeRoot_k__BackingField = (int32_t)pIVar10;
        cVar6 = '\x01';
      }
    }
    pMVar7->methodPointer = (Il2CppMethodPointer)0x86;
    uStack_1 = 0xffffffff;
    func_?();
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_03 != (MVNetworkGame *)0x0) {
      this_04 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)this_03,(MethodInfo *)0x0);
      pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      team = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
      if (this_04 != (SkyParam *)0x0) {
        MVTeamManager::MVTeamManager_OnAddSpawnPoint
                  ((MVTeamManager *)this_04,(int32_t)pIVar10,team,method_00);
        MVAvatarSpawnRoleCreator_HideBody(this,(MethodInfo *)0x0);
        this_00 = (MVAvatarSpawnRoleCreator *)(this->fields).useInteractor;
        data = (Dictionary_2_System_Object_System_Object_ *)
               PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
        if (this_00 != (MVAvatarSpawnRoleCreator *)0x0) {
          UseInteractor::UseInteractor_UpdateData((UseInteractor *)this_00,data,in_stack_11);
          pMVar12 = (this->fields).spawnRoleCreatorObject;
          if ((pMVar12 != (MVAvatarSpawnRoleCreatorObject *)0x0) &&
             (pGVar13 = (pMVar12->fields).useInteractionRotator, pGVar13 != (GameObject *)0x0)) {
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar13,in_stack_14);
            iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_Logic,(MethodInfo *)0x0);
            LayerUtil::LayerUtil_SetLayerRecursively(pTVar4,iVar5,(MethodInfo *)0x0);
            pMVar12 = (this->fields).spawnRoleCreatorObject;
            if (pMVar12 != (MVAvatarSpawnRoleCreatorObject *)0x0) {
              pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pMVar12,in_stack_15);
              this_05 = (CullingSubscriberDynamic *)func_?();
              CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
                        (this_05,4.0,3,pGVar13,(GameObject__Array *)0x0,(MethodInfo *)0x0);
              (this_00->fields).cullingSubscriberDynamic = this_05;
              this_06 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this_00,(MethodInfo *)0x0);
              pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
              if (this_06 != (MVPreviewAvatar *)0x0) {
                MVPreviewAvatar::MVPreviewAvatar_set_SpawnRoleCreatorId
                          (this_06,(int32_t)pIVar10,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  this_07 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_07,StringLiteral_Multiple_playmode_avatars_detect,(MethodInfo *)0x0);
  func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_InitializeInventory
               (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  MVAvatarSpawnRoleCreator_TryShowBody(this,(MethodInfo *)0x0);
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_OnDataUpdate
               (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  MVBlueprintBase::MVBlueprintBase_MapDataToFields((MVBlueprintBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).useInteractor;
  data = (Dictionary_2_System_Object_System_Object_ *)
         PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,data,(MethodInfo *)0x0);
    pMVar1 = (this->fields).spawnRoleCreatorObject;
    if ((pMVar1 != (MVAvatarSpawnRoleCreatorObject *)0x0) &&
       (pGVar2 = (pMVar1->fields).useInteractionRotator, pGVar2 != (GameObject *)0x0)) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar2,(MethodInfo *)0x0);
      layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Logic,(MethodInfo *)0x0);
      LayerUtil::LayerUtil_SetLayerRecursively(pTVar3,layer,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_01 != (MainCameraManager *)0x0) {
        bVar4 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_01,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pMVar1 = (this->fields).spawnRoleCreatorObject;
          if ((pMVar1 == (MVAvatarSpawnRoleCreatorObject *)0x0) ||
             (pGVar2 = (pMVar1->fields).useInteractionRotator, pGVar2 == (GameObject *)0x0))
          goto code_?;
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar2,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
            func_?();
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar3,1,(MethodInfo *)0x0);
        }
        pMVar1 = (this->fields).spawnRoleCreatorObject;
        if ((pMVar1 != (MVAvatarSpawnRoleCreatorObject *)0x0) &&
           (pGVar2 = (pMVar1->fields).useInteractionRotator, pGVar2 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,0,(MethodInfo *)0x0);
          pMVar1 = (this->fields).spawnRoleCreatorObject;
          if ((pMVar1 != (MVAvatarSpawnRoleCreatorObject *)0x0) &&
             (pGVar2 = (pMVar1->fields).useInteractionRotator, pGVar2 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,1,(MethodInfo *)0x0);
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


/* Void PartialDataRemove(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_PartialDataRemove
               (MVAvatarSpawnRoleCreator *this,int32_t arg1,
               Dictionary_2_System_Object_System_Object_ *arg2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffffc);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x16,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x13,(Object *)0x0,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      piVar2 = *(int **)(arg1 + 0x10);
      if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
        pSStack3 = TypeInfo__ExitGames__Client__Photon__SendOptions;
        func_?();
      }
      pSVar4 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields;
      if (piVar2 != (int *)0x0) {
        iVar5 = *piVar2;
        pSStack3 = *(SendOptions__Class **)(iVar5 + 0x114);
        puStack6._0_1_ = (pSVar4->SendReliable).Encrypt;
        puStack6._1_1_ = (pSVar4->SendReliable).Channel;
        puStack6._2_2_ = *(undefined2 *)&(pSVar4->SendReliable).field_0x6;
        (**(code **)(iVar5 + 0x110))();
        return;
      }
    }
    pSStack3 = (SendOptions__Class *)0x0;
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void PartialDataUpdate(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_PartialDataUpdate
               (MVAvatarSpawnRoleCreator *this,int32_t arg1,
               Dictionary_2_System_Object_System_Object_ *arg2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
              (this_00,arg1,arg2,(MethodInfo *)0x0);
    pMVar1 = (this->fields).spawnRoleCreatorObject;
    if (pMVar1 != (MVAvatarSpawnRoleCreatorObject *)0x0) {
      pTVar2 = (pMVar1->fields).spawnPlate;
      MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
      if (pTVar2 != (TintObject *)0x0) {
        (*(code *)(pTVar2->klass->vtable).TeamTint.method)();
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PartialRemoveFromWOData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_PartialRemoveFromWOData
               (MVAvatarSpawnRoleCreator *this,
               Dictionary_2_System_Object_System_Object_ *entriesToRemove,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_PartialRemoveFromWOData
            ((MVWorldObjectClient *)this,entriesToRemove,(MethodInfo *)0x0);
  pMVar1 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVPreviewAvatar *)0x0) {
    (*(code *)(pMVar1->klass->vtable).PartialRemoveFromWOData.method)();
    return;
  }
  func_?();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  team = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__MVTeam,&stack0xfffffff8);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_prevTeam_,pOVar1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
  MVWorldObjectClient::MVWorldObjectClient_PartialUpdateWOData
            ((MVWorldObjectClient *)this,woData,(MethodInfo *)0x0);
  MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?();
  pSVar2 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_Team_,pOVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
  pMVar3 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
  if (pMVar3 != (MVPreviewAvatar *)0x0) {
    pIStack4 = (pMVar3->klass->vtable).PartialRemoveFromWOData.methodPtr;
    pDStack5 = woData;
    (*(code *)(pMVar3->klass->vtable).PartialUpdateWOData.method)();
    MVar6 = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
    if (team == MVar6) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar7 != (MVNetworkGame *)0x0) {
      pSVar8 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)pMVar7,(MethodInfo *)0x0);
      pIVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      MVar6 = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
      if (pSVar8 != (SkyParam *)0x0) {
        MVTeamManager::MVTeamManager_OnAddSpawnPoint
                  ((MVTeamManager *)pSVar8,(int32_t)pIVar9,MVar6,(MethodInfo *)0x0);
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar7 != (MVNetworkGame *)0x0) {
          pSVar8 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                              ((DayNightCycle *)pMVar7,(MethodInfo *)0x0);
          pIVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                    Collection_1_VoxelHit__get_Items
                              ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
          if (pSVar8 != (SkyParam *)0x0) {
            MVTeamManager::MVTeamManager_OnRemoveSpawnPoint
                      ((MVTeamManager *)pSVar8,(int32_t)pIVar9,team,(MethodInfo *)0x0);
            pMVar10 = (this->fields).spawnRoleCreatorObject;
            if (pMVar10 != (MVAvatarSpawnRoleCreatorObject *)0x0) {
              pTVar11 = (pMVar10->fields).spawnPlate;
              pDStack5 =
                   (Dictionary_2_System_Object_System_Object_ *)
                   MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
              if (pTVar11 != (TintObject *)0x0) {
                pTVar12 = pTVar11->klass;
                pIStack4 = (pTVar12->vtable).Tint.methodPtr;
                (*(code *)(pTVar12->vtable).TeamTint.method)();
                return;
              }
            }
          }
        }
      }
    }
  }
  pIStack4 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SettingsReporterOnOnValueChangedLocal(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::
     MVAvatarSpawnRoleCreator_SettingsReporterOnOnValueChangedLocal
               (MVAvatarSpawnRoleCreator *this,Dictionary_2_System_Object_System_Object_ *obj,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Adding_setting,(MethodInfo *)0x0);
  pMVar1 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVPreviewAvatar *)0x0) {
    (*(code *)(pMVar1->klass->vtable).PartialUpdateWOData.method)();
    return;
  }
  func_?();
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Removing_setting,(MethodInfo *)0x0);
  pMVar1 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVPreviewAvatar *)0x0) {
    (*(code *)(pMVar1->klass->vtable).PartialRemoveFromWOData.method)();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowBody(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_ShowBody
               (MVAvatarSpawnRoleCreator *this,MVWorldObjectClient *originalBody,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6.klass = (List_1_UnityEngine_Color32___Class *)0x0;
  LStack_6.monitor = (MonitorData *)0x0;
  LStack_6.fields._items = (Color32__Array *)0x0;
  LStack_6.fields._size = 0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffb4;
  puStack_4 = &stack0xffffffb4;
  if (originalBody == (MVWorldObjectClient *)0x0) goto code_?;
  pMVar8 = originalBody->klass;
  bStack_9 = (TypeInfo__MVGroup->_1).naturalAligment;
  if ((pMVar8->_1).naturalAligment < bStack_9) {
code_?:
    bVar10 = false;
  }
  else {
    bVar10 = true;
    if ((MVGroup__Class *)(pMVar8->_1).typeHierarchy[bStack_9 - 1] != TypeInfo__MVGroup)
    goto code_?;
  }
  pMVar11 = (MVWorldObjectClient *)0x0;
  if (bVar10) {
    pMVar11 = originalBody;
  }
  if (pMVar11 != (MVWorldObjectClient *)0x0) {
    if ((pMVar8->_1).naturalAligment < bStack_9) {
code_?:
      bVar10 = false;
    }
    else {
      bVar10 = true;
      if ((MVGroup__Class *)(pMVar8->_1).typeHierarchy[bStack_9 - 1] != TypeInfo__MVGroup)
      goto code_?;
    }
    this_00 = (MVGroup *)0x0;
    if (bVar10) {
      this_00 = (MVGroup *)originalBody;
    }
    if (this_00 != (MVGroup *)0x0) {
      puStack_7 = (undefined4 *)&stack0xffffffb4;
      puStack_4 = &stack0xffffffb4;
      pLVar12 = (List_1_UnityEngine_Color32_ *)
               MVGroup::MVGroup_get_Children(this_00,(MethodInfo *)0x0);
      if (pLVar12 != (List_1_UnityEngine_Color32_ *)0x0) {
        pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                  List_1_UnityEngine_Color32__GetEnumerator
                            ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_14,pLVar12,
                             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                            );
        LStack_6.klass = (List_1_UnityEngine_Color32___Class *)pLVar13->l;
        LStack_6.monitor = (MonitorData *)pLVar13->next;
        LStack_6.fields._items = (Color32__Array *)pLVar13->ver;
        LStack_6.fields._size = (pLVar13->current).rgba;
        uStack_1 = 0;
        do {
          do {
            auStack_14._4_4_ =
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
            ;
            auStack_14._0_4_ = &LStack_6;
            cVar15 = func_?();
            if (cVar15 == '\0') goto code_?;
            pLVar12 = (List_1_UnityEngine_Color32_ *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                &LStack_6,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                               );
          } while (pLVar12 == (List_1_UnityEngine_Color32_ *)0x0);
          bVar16 = (TypeInfo__MVBody->_1).naturalAligment;
          if (((pLVar12->klass->_1).naturalAligment < bVar16) ||
             ((MVBody__Class *)(pLVar12->klass->_1).typeHierarchy[bVar16 - 1] != TypeInfo__MVBody)) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          pLVar17 = (List_1_UnityEngine_Color32_ *)0x0;
          if (bVar10) {
            pLVar17 = pLVar12;
          }
        } while (pLVar17 == (List_1_UnityEngine_Color32_ *)0x0);
        auStack_14._4_4_ = TypeInfo__MVBody;
        auStack_14._0_4_ = pLVar12;
        iVar18 = func_?();
        pSVar19 = StringLiteral_Hidden;
        if (iVar18 != 0) {
          iVar18 = func_?(pLVar12,TypeInfo__MVBody);
          *(String **)(iVar18 + 0x118) = pSVar19;
code_?:
          *puStack_7 = 0x5d;
          uStack_1 = 0xffffffff;
          func_?();
          transfrom = PrefabPool::PrefabPool_get_MVPointLightPrefab
                                ((PrefabPool *)this,(MethodInfo *)0x0);
          layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_Hidden,(MethodInfo *)0x0);
          LayerUtil::LayerUtil_SetLayerRecursively((Transform *)transfrom,layer,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
      goto code_?;
    }
  }
  puStack_7 = (undefined4 *)&stack0xffffffb4;
  puStack_4 = &stack0xffffffb4;
  func_?(originalBody,TypeInfo__MVGroup);
code_?:
  func_?(0);
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void TryShowBody() */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_TryShowBody
               (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  this_00 = (this->fields)._.childIdMap;
  if ((this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_00,(Type *)StringLiteral_bodyId,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pPVar4 == (Pool *)0x0)) goto code_?;
  if ((pPVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
    piVar5 = (int32_t *)func_?();
    id = *piVar5;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar6 = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,id,(MethodInfo *)0x0);
    if (pMVar6 != (MVWorldObjectClient *)0x0) {
      bVar7 = (TypeInfo__MVWorldObjectClient->_1).naturalAligment;
      if (((pMVar6->klass->_1).naturalAligment < bVar7) ||
         ((MVWorldObjectClient__Class *)(pMVar6->klass->_1).typeHierarchy[bVar7 - 1] !=
          TypeInfo__MVWorldObjectClient)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      originalBody = (MVWorldObjectClient *)0x0;
      if (bVar8) {
        originalBody = pMVar6;
      }
      if (originalBody == (MVWorldObjectClient *)0x0) goto code_?;
      bVar7 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((originalBody->klass->_1).naturalAligment < bVar7) ||
         ((MVGroup__Class *)(originalBody->klass->_1).typeHierarchy[bVar7 - 1] != TypeInfo__MVGroup)
         ) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      pMVar6 = (MVWorldObjectClient *)0x0;
      if (bVar8) {
        pMVar6 = originalBody;
      }
      if (pMVar6 != (MVWorldObjectClient *)0x0) {
        MVAvatarSpawnRoleCreator_ShowBody(this,originalBody,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    this_02 = (List_1_UnityEngine_Color32_ *)
              MVGroup::MVGroup_get_Children((MVGroup *)this,(MethodInfo *)0x0);
    if (this_02 != (List_1_UnityEngine_Color32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
      List_1_UnityEngine_Color32__GetEnumerator
                ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc4,this_02,
                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                );
      uStack_1 = 0;
      do {
        do {
          cVar9 = func_?();
          if (cVar9 == '\0') goto code_?;
          pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                              &stack0xffffffd4,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                             );
        } while (pOVar10 == (Object *)0x0);
        bVar7 = (TypeInfo__MVBody->_1).naturalAligment;
        if (((pOVar10->klass->_1).naturalAligment < bVar7) ||
           ((MVBody__Class *)(pOVar10->klass->_1).typeHierarchy[bVar7 - 1] != TypeInfo__MVBody)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        pOVar11 = (Object *)0x0;
        if (bVar8) {
          pOVar11 = pOVar10;
        }
      } while (pOVar11 == (Object *)0x0);
      MVAvatarSpawnRoleCreator_ShowBody(this,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
code_?:
      uStack_1 = 0xffffffff;
      func_?();
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  else {
    func_?();
code_?:
    func_?();
    func_?();
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateAvatarBody(SpawnRoleBodySwitchData) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
               (MVAvatarSpawnRoleCreator *this,SpawnRoleBodySwitchData *spawnRoleBodySwitchData,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  _Stack_c.genericMethod = (Il2CppGenericMethod *)&DAT_?;
  IStack_2.rgctxDataDummy = *(void **)unaff_FS_OFFSET;
  unaff_FS_OFFSET->rgctxDataDummy = &IStack_2;
  ppIStack_3 = (Il2CppType **)&stack0xffffffb8;
  ppIVar4 = (Il2CppType **)&stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    ppIVar4 = ppIStack_3;
  }
  ppIStack_3 = ppIVar4;
  CStack_5.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_5.monitor = (MonitorData *)0x0;
  CStack_5.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_5.fields.syncRoot = (Object *)0x0;
  func_?();
  this_05 = (this->fields)._.childIdMap;
  pIStack_6 = (Il2CppType *)&stack0xffffffb8;
  ppIStack_3 = (Il2CppType **)&stack0xffffffb8;
  if (spawnRoleBodySwitchData != (SpawnRoleBodySwitchData *)0x0) {
    spawnRoleBodySwitchData =
         (SpawnRoleBodySwitchData *)(spawnRoleBodySwitchData->fields).addedBodyWoId;
    pIStack_6 = (Il2CppType *)&stack0xffffffb8;
    ppIStack_3 = (Il2CppType **)&stack0xffffffb8;
    value = (Theme *)func_?(TypeInfo__System__Int32,&spawnRoleBodySwitchData);
    if (this_05 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      method_00 = this_05;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)this_05,StringLiteral_bodyId,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Children,(MethodInfo *)0x0);
      pMVar7 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
      if ((pMVar7 != (MVPreviewAvatar *)0x0) &&
         (this_02 = (List_1_UnityEngine_Color32_ *)
                    MVGroup::MVGroup_get_Children((MVGroup *)pMVar7,(MethodInfo *)0x0),
         this_02 != (List_1_UnityEngine_Color32_ *)0x0)) {
        pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                 List_1_UnityEngine_Color32__GetEnumerator
                           ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc4,this_02,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                           );
        CStack_5.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
        CStack_5.monitor = (MonitorData *)pLVar8->next;
        CStack_5.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
        CStack_5.fields.syncRoot = (Object *)(pLVar8->current).rgba;
        uStack_1 = 0;
        while( true ) {
          method_01 = (MethodInfo *)&CStack_5;
          cVar9 = func_?();
          if (cVar9 == '\0') break;
          message = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              (&CStack_5,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                              );
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
        }
        (pIStack_6->data).__klassIndex = 0x68;
        uStack_1 = 0xffffffff;
        func_?(&CStack_5);
        this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).OnBodyUpdate;
        if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
          JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                    (this_00,(MethodInfo *)0x0);
        }
        this_05 = (Dictionary_2_System_Object_System_Object_ *)(this->fields)._._._.transform;
        layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        LayerUtil::LayerUtil_SetLayerRecursively((Transform *)this_05,layer,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
        if (this_03 != (MainCameraManager *)0x0) {
          bVar10 = MVPlayer::MVPlayer_get_IsReady((MVPlayer *)this_03,(MethodInfo *)0x0);
          if (bVar10 != 0) {
            this_04 = (PrefabPool *)
                      MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
            if (this_04 == (PrefabPool *)0x0) goto code_?;
            this_05 = (Dictionary_2_System_Object_System_Object_ *)
                      PrefabPool::PrefabPool_get_MVPointLightPrefab(this_04,method_01);
            if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
              func_?();
            }
            SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                      ((Transform *)this_05,1,(MethodInfo *)0x0);
            pMVar11 = (this->fields).spawnRoleCreatorObject;
            if ((pMVar11 == (MVAvatarSpawnRoleCreatorObject *)0x0) ||
               (this_01 = (pMVar11->fields).spawnPlate, this_01 == (TintObject *)0x0))
            goto code_?;
            t = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_01,(MethodInfo *)method_00);
            SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,1,(MethodInfo *)0x0);
          }
          MVAvatarSpawnRoleCreator_HideBody(this,(MethodInfo *)0x0);
          pMVar7 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
          value_00 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
          this_05 = (Dictionary_2_System_Object_System_Object_ *)0x0;
          if (pMVar7 != (MVPreviewAvatar *)0x0) {
            MVPreviewAvatar::MVPreviewAvatar_set_SpawnRoleCreatorId
                      (pMVar7,(int32_t)value_00,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = IStack_2;
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  func_?(this_05,0,0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* MVAvatarSpawnRoleCreator(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator__ctor
               (MVAvatarSpawnRoleCreator *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    prefabObject = (ObjectPrefab *)
                   GamePointGainEffect::GamePointGainEffect_get_ID
                             ((GamePointGainEffect *)this_00,(MethodInfo *)0x0);
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)this,data,prefabObject,worldObjects,(MethodInfo *)0x0);
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)this,
               MethodInfo__MVAvatarSpawnRoleCreator__PartialDataUpdate_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,
               MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
              );
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__MVAvatarSpawnRoleCreator__PartialDataRemove_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,
               MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
              );
    pSVar2 = (SettingsReporter *)func_?();
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsReporter
    ::SettingsReporter__ctor
              (pSVar2,(MVWorldObject *)this,
               (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)pUVar1,
               (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)this_01,(MethodInfo *)0x0);
    (this->fields).settingsReporter = pSVar2;
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)this,
               MethodInfo__MVAvatarSpawnRoleCreator__SettingsReporterOnOnValueChangedLocal_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,
               MethodInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
              );
    unaff_ESI = (MVAvatarSpawnRoleCreatorObject__Class *)0x0;
    if (pSVar2 != (SettingsReporter *)0x0) {
      MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
      SettingsReporter::SettingsReporter_add_OnValueChangedLocal
                (pSVar2,(Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                         *)pUVar1,(MethodInfo *)0x0);
      pSVar2 = (this->fields).settingsReporter;
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)this,
                 MethodInfo__MVAvatarSpawnRoleCreator__SettingsReporterOnOnValueRemovedLocal_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,
                 MethodInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
                );
      unaff_ESI = (MVAvatarSpawnRoleCreatorObject__Class *)0x0;
      if (pSVar2 != (SettingsReporter *)0x0) {
        MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
        SettingsReporter::SettingsReporter_add_OnValueRemovedLocal
                  (pSVar2,(Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                           *)pUVar1,(MethodInfo *)0x0);
        IVar3 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                          ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
        MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
                  ((MVWorldObjectClient *)this,IVar3 | InteractionFlags__Enum_HasSettings,method_00)
        ;
        IVar3 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                          ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
        MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
                  ((MVWorldObjectClient *)this,IVar3 | InteractionFlags__Enum_CanEnterPlay,method_01
                  );
        unaff_ESI = TypeInfo__MVAvatarSpawnRoleCreatorObject;
        pMVar4 = (MVAvatarSpawnRoleCreatorObject *)(this->fields)._._._.component;
        if (pMVar4 == (MVAvatarSpawnRoleCreatorObject *)0x0) {
          pMVar5 = (MVAvatarSpawnRoleCreatorObject *)0x0;
        }
        else {
          bVar6 = (TypeInfo__MVAvatarSpawnRoleCreatorObject->_1).naturalAligment;
          if (((((ObjectPrefab__Class *)pMVar4->klass)->_1).naturalAligment < bVar6) ||
             ((((ObjectPrefab__Class *)pMVar4->klass)->_1).typeHierarchy[bVar6 - 1] !=
              (Il2CppClass *)TypeInfo__MVAvatarSpawnRoleCreatorObject)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          pMVar5 = (MVAvatarSpawnRoleCreatorObject *)0x0;
          if (bVar7) {
            pMVar5 = pMVar4;
          }
          if (pMVar5 == (MVAvatarSpawnRoleCreatorObject *)0x0) goto code_?;
        }
        (this->fields).spawnRoleCreatorObject = pMVar5;
        if (pMVar5 != (MVAvatarSpawnRoleCreatorObject *)0x0) {
          pTVar8 = (pMVar5->fields).spawnPlate;
          MVar9 = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
          unaff_ESI = (MVAvatarSpawnRoleCreatorObject__Class *)0x0;
          if (pTVar8 != (TintObject *)0x0) {
            (*(code *)(pTVar8->klass->vtable).TeamTint.method)
                      (pTVar8,MVar9,(pTVar8->klass->vtable).Tint.methodPtr);
            pMVar4 = (this->fields).spawnRoleCreatorObject;
            unaff_ESI = (MVAvatarSpawnRoleCreatorObject__Class *)0x0;
            if (pMVar4 != (MVAvatarSpawnRoleCreatorObject *)0x0) {
              owner = (pMVar4->fields).useInteractionRotator;
              pUVar10 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
              UseInteractor::UseInteractor__ctor
                        (pUVar10,(MVWorldObjectClient *)this,owner,0,(Collider *)0x0,
                         (Func_2_Int32_Boolean_ *)0x0,
                         (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,2.5,(MethodInfo *)0x0);
              pMVar4 = (this->fields).spawnRoleCreatorObject;
              (this->fields).useInteractor = pUVar10;
              unaff_ESI = (MVAvatarSpawnRoleCreatorObject__Class *)0x0;
              if (pMVar4 != (MVAvatarSpawnRoleCreatorObject *)0x0) {
                unaff_ESI = (MVAvatarSpawnRoleCreatorObject__Class *)
                            (pMVar4->fields).useInteractionRotator;
                this_02 = (GameRankRequirement *)func_?(TypeInfo__GameRankRequirement);
                GameRankRequirement::GameRankRequirement__ctor
                          (this_02,(GameObject *)unaff_ESI,(MVWorldObjectClient *)this,0,
                           (MethodInfo *)0x0);
                if (this_02 != (GameRankRequirement *)0x0) {
                  FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_set_IsShowing
                            ((FirstTimeActivatableElementBase *)this_02,0,(MethodInfo *)0x0);
                  pUVar10 = (this->fields).useInteractor;
                  if (pUVar10 != (UseInteractor *)0x0) {
                    UseInteractor::UseInteractor_AddRequirement
                              (pUVar10,(UseRequirement *)this_02,(MethodInfo *)0x0);
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
  func_?(0);
  pMVar4 = extraout_EDX;
code_?:
  func_?(pMVar4,unaff_ESI);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* AttributeSettingsManager get_AttributeSettingsManagerAvatar() */

AttributeSettingsManager *
Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::
MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
          (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  data = (Dictionary_2_System_Object_System_Object_ *)
         PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  settingsReporter = (this->fields).settingsReporter;
  this_00 = (AttributeSettingsManager *)
            func_?(
                           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsManager
                           );
  MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::AttributeSettings::
  AttributeSettingsManager::AttributeSettingsManager__ctor
            (this_00,data,AttributeSettingWoType__Enum_Avatar,settingsReporter,(MethodInfo *)0x0);
  return this_00;
}


/* MVPreviewAvatar get_AvatarPrototype() */

MVPreviewAvatar *
Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_AvatarPrototype
          (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields)._._.children;
  if (this_00 ==
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    func_?(0);
    pMVar1 = extraout_EDX;
  }
  else {
    pMVar1 = (MVPreviewAvatar *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                       (this_00,(this->fields)._AvatarRuntimePrototypeRoot_k__BackingField,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
    if (pMVar1 == (MVPreviewAvatar *)0x0) {
      return (MVPreviewAvatar *)0x0;
    }
    bVar2 = (TypeInfo__MVPreviewAvatar->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((MVPreviewAvatar__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__MVPreviewAvatar)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pMVar4 = (MVPreviewAvatar *)0x0;
    if (bVar3) {
      pMVar4 = pMVar1;
    }
    if (pMVar4 != (MVPreviewAvatar *)0x0) {
      return pMVar4;
    }
  }
  func_?(pMVar1);
  pcVar5 = (code *)swi(3);
  pMVar1 = (MVPreviewAvatar *)(*pcVar5)();
  return pMVar1;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,(Type *)StringLiteral_team,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      pIStack2 = TypeInfo__System__Int32;
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        pIStack2 = (Int32__Class *)pPVar1;
        pMVar3 = (MVTeam__Enum *)func_?();
        return *pMVar3;
      }
      goto code_?;
    }
  }
  pIStack2 = (Int32__Class *)0x0;
  func_?();
  pIStack2 = extraout_EDX;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  MVar5 = (*pcVar4)();
  return MVar5;
}


/* GamePassTier get_Tier() */

GamePassTier__Enum
Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
          (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Type_Pool_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Type_Pool_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       (this_00,(Type *)StringLiteral_RequiredRank,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      pIStack2 = TypeInfo__System__Int32;
      if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        pIStack2 = (Int32__Class *)pPVar1;
        puVar3 = (undefined1 *)func_?();
        return CONCAT31((int3)((uint)puVar3 >> 8),*puVar3);
      }
      goto code_?;
    }
  }
  pIStack2 = (Int32__Class *)0x0;
  func_?();
  pIStack2 = extraout_EDX;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  worldObjectID =
       mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
       Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  value_00 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
              (this_00,(int32_t)worldObjectID,StringLiteral_team,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_Tier(GamePassTier) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_set_Tier
               (MVAvatarSpawnRoleCreator *this,GamePassTier__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_Theme_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  GStack_1 = value & 0xff;
  value_00 = (Theme *)func_?(TypeInfo__System__Int32,&GStack_1);
  if (this_00 != (Dictionary_2_System_String_Theme_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              (this_00,StringLiteral_RequiredRank,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    worldObjectID =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
    woData = (Dictionary_2_System_Object_System_Object_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)woData,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this_01 = (Dictionary_2_System_Type_Pool_ *)
              PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
    if (this_01 != (Dictionary_2_System_Type_Pool_ *)0x0) {
      value_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           (this_01,(Type *)StringLiteral_RequiredRank,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
      if (woData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)woData,StringLiteral_RequiredRank,
                   (CrossPlatformInputManager_VirtualButton *)value_01,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                    (this_02,(int32_t)worldObjectID,woData,(MethodInfo *)0x0);
          pMVar2 = (this->fields).spawnRoleCreatorObject;
          if (pMVar2 != (MVAvatarSpawnRoleCreatorObject *)0x0) {
            pTVar3 = (pMVar2->fields).spawnPlate;
            MVar4 = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
            if (pTVar3 != (TintObject *)0x0) {
              (*(code *)(pTVar3->klass->vtable).TeamTint.method)
                        (pTVar3,MVar4,(pTVar3->klass->vtable).Tint.methodPtr);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

