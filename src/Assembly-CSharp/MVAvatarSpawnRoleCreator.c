
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_Delete
               (MVAvatarSpawnRoleCreator *this,MVWorldObjectClientManager *worldObjectClientManager,
               String **errorText,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_You_cannot_delete_the_last_spawn);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  pMVar2 = (MVWorldObjectClientManager *)&stack0xfffffffc;
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).teamManager,
     pMVar2 = (MVWorldObjectClientManager *)&stack0xfffffffc, this_00 != (MVTeamManager *)0x0)) {
    iVar3 = MVTeamManager::MVTeamManager_get_NumSpawnPoint(this_00,(MethodInfo *)0x0);
    if (iVar3 < 2) {
      *errorText = StringLiteral_You_cannot_delete_the_last_spawn;
      func_?();
      return 0;
    }
    method = (MethodInfo *)0x0;
    if ((pGRam00000088 != (GameObject *)0x0) &&
       (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGRam00000088,0,(MethodInfo *)0x0),
       in_stack_4 != (MVWorldObjectClientManager *)0x0)) {
      errorText = (String **)0x0;
      worldObjectClientManager = pMRam00000008;
      MVWorldObjectClientManager::MVWorldObjectClientManager_UnregisterWorldObject
                (in_stack_4,(int32_t)pMRam00000008,(MethodInfo *)0x0);
      return 1;
    }
    errorText = (String **)&UNK_?;
    pMVar2 = (MVWorldObjectClientManager *)&worldObjectClientManager;
  }
  worldObjectClientManager = pMVar2;
  func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_Destroy
               (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  if ((this->fields).isInWorld != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_Quitting_k__BackingField == 0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        id = (this->fields)._._._._.id;
        this_00 = (pMVar1->fields).teamManager;
        team = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
        if (this_00 != (MVTeamManager *)0x0) {
          MVTeamManager::MVTeamManager_OnRemoveSpawnPoint(this_00,id,team,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
code_?:
  this_01 = (this->fields).cullingSubscriberDynamic;
  ppCVar3 = &(this->fields).cullingSubscriberDynamic;
  if (this_01 != (CullingSubscriberDynamic *)0x0) {
    CullingSubscriberDynamic::CullingSubscriberDynamic_Destroy(this_01,(MethodInfo *)0x0);
    *ppCVar3 = (CullingSubscriberDynamic *)0x0;
    func_?(ppCVar3,0);
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
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->oneVector).x;
  uVar3 = (pVVar1->oneVector).y;
  fVar4 = (float)uVar2 * _UNK_?;
  fVar5 = (float)uVar3 * _UNK_?;
  fVar6 = (pVVar1->oneVector).z * _UNK_?;
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      uVar7 = 0;
      pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffec,this_01,(MethodInfo *)0x0);
      fVar4 = pQVar8->z;
      fVar5 = pQVar8->w;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = 0.0;
      rotation.x = fVar6;
      rotation.z = fVar4;
      rotation.w = fVar5;
      scale.y = (float)uVar7;
      scale.x = (float)this_01;
      scale.z = fVar6;
      pVVar9 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,gridSize,scale,(MethodInfo *)0x0);
      fVar5 = pVVar9->y;
      fVar4 = pVVar9->z;
      __return_storage_ptr__->x = pVVar9->x;
      __return_storage_ptr__->y = fVar5;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
  }
  func_?(fVar4,fVar5);
  pcVar10 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar10)();
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
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
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
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._._._._.data;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_team,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        pMVar2 = (MVTeam__Enum *)func_?();
        return *pMVar2;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      MVar4 = (*pcVar3)();
      return MVar4;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar3 = (code *)swi(3);
  MVar4 = (*pcVar3)();
  return MVar4;
}


/* Void HideBody() */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_HideBody
               (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&StringLiteral_bodyId);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._.childIdMap;
  if ((this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
     (TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)StringLiteral_bodyId,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar1.m_Index == 0)) goto code_?;
  if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) != (TypeInfo__System__Int32->_0).element_class
     ) goto code_?;
  piVar2 = (int32_t *)func_?();
  id = *piVar2;
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
    pMVar3 = extraout_EDX;
  }
  else {
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_02,id,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObject *)0x0) {
      return;
    }
    bVar4 = (TypeInfo__MVWorldObjectClient->_1).naturalAligment;
    if ((bVar4 <= (pMVar3->klass->_1).naturalAligment) &&
       ((MVWorldObjectClient__Class *)(pMVar3->klass->_1).typeHierarchy[bVar4 - 1] ==
        TypeInfo__MVWorldObjectClient)) {
      this_01 = pMVar3[1].fields.inputLinkRefs;
      if (this_01 != (List_1_MV_WorldObject_Link_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)this_01,0,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  TVar1.m_Index = func_?(pMVar3);
code_?:
  func_?(TVar1.m_Index);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_Initialize
               (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  method_00 = (MethodInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingSubscriberDynamic);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._._._.transform;
  (this->fields).isInWorld = 1;
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Logic,(MethodInfo *)0x0);
  LayerUtil::LayerUtil_SetLayerRecursively(pTVar1,iVar2,(MethodInfo *)0x0);
  cVar3 = '\0';
  this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            MVGroup::MVGroup_get_Children((MVGroup *)this,(MethodInfo *)0x0);
  if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffd8,this_02,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                       );
    OStack_5.klass = (Object__Class *)pLVar4->_list;
    OStack_5.monitor = (MonitorData *)pLVar4->_index;
    puStack_6 = (undefined *)pLVar4->_version;
    RVar7 = pLVar4->_current;
    while( true ) {
      bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&OStack_5,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                        );
      if (bVar8 == 0) break;
      if (RVar7 == (RegexCharClass_SingleRange)0x0) goto code_?;
      if (*(int *)((int)RVar7 + 0x54) == 0) {
        if (cVar3 != '\0') {
          func_?();
          this_04 = (Exception *)func_?();
          message = (String *)func_?();
          mscorlib.dll::System::Exception::Exception__ctor_1(this_04,message,(MethodInfo *)0x0);
          func_?();
          func_?();
          goto code_?;
        }
        (this->fields)._AvatarRuntimePrototypeRoot_k__BackingField = *(int32_t *)((int)RVar7 + 8);
        cVar3 = '\x01';
      }
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (&OStack_5,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
               ,method_00);
    pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar9 != (MVNetworkGame *)0x0) {
      this_00 = (pMVar9->fields).teamManager;
      RVar7 = (RegexCharClass_SingleRange)(this->fields)._._._._.id;
      team = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
      if (this_00 != (MVTeamManager *)0x0) {
        puVar10 = &UNK_?;
        MVTeamManager::MVTeamManager_OnAddSpawnPoint(this_00,(int32_t)RVar7,team,(MethodInfo *)0x0)
        ;
        MVAvatarSpawnRoleCreator_HideBody(this,(MethodInfo *)0x0);
        this_01 = (this->fields).useInteractor;
        if (this_01 != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor_UpdateData
                    (this_01,(this->fields)._._._._.data,(MethodInfo *)0x0);
          pMVar11 = (this->fields).spawnRoleCreatorObject;
          if ((pMVar11 != (MVAvatarSpawnRoleCreatorObject *)0x0) &&
             (pGVar12 = (pMVar11->fields).useInteractionRotator, pGVar12 != (GameObject *)0x0)) {
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar12,(MethodInfo *)0x0);
            iVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_Logic,(MethodInfo *)0x0);
            LayerUtil::LayerUtil_SetLayerRecursively(pTVar1,iVar2,(MethodInfo *)0x0);
            pMVar11 = (this->fields).spawnRoleCreatorObject;
            if (pMVar11 != (MVAvatarSpawnRoleCreatorObject *)0x0) {
              pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pMVar11,(MethodInfo *)0x0);
              this_03 = (CullingSubscriberDynamic *)func_?();
              CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
                        (this_03,4.0,3,pGVar12,(GameObject__Array *)0x0,(MethodInfo *)0x0);
              (this->fields).cullingSubscriberDynamic = this_03;
              func_?();
              pMVar13 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
              if (pMVar13 != (MVPreviewAvatar *)0x0) {
                (pMVar13->fields).spawnRoleCreatorId = (this->fields)._._._._.id;
                *unaff_FS_OFFSET = puVar10;
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
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_OnDataUpdate((MVBlueprintBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._._.data,(MethodInfo *)0x0);
    pMVar1 = (this->fields).spawnRoleCreatorObject;
    if ((pMVar1 != (MVAvatarSpawnRoleCreatorObject *)0x0) &&
       (pGVar2 = (pMVar1->fields).useInteractionRotator, pGVar2 != (GameObject *)0x0)) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar2,(MethodInfo *)0x0);
      layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Logic,(MethodInfo *)0x0);
      LayerUtil::LayerUtil_SetLayerRecursively(pTVar3,layer,(MethodInfo *)0x0);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar4 != (MainCameraManager *)0x0) {
        if ((pMVar4->fields).blueModeEnabled != 0) {
          pMVar1 = (this->fields).spawnRoleCreatorObject;
          if ((pMVar1 == (MVAvatarSpawnRoleCreatorObject *)0x0) ||
             (pGVar2 = (pMVar1->fields).useInteractionRotator, pGVar2 == (GameObject *)0x0))
          goto code_?;
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar2,(MethodInfo *)0x0);
          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
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
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x110))(piVar2,5);
        return;
      }
    }
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PartialDataUpdate(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_PartialDataUpdate
               (MVAvatarSpawnRoleCreator *this,int32_t arg1,
               Dictionary_2_System_Object_System_Object_ *arg2,MethodInfo *method)

{
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&StringLiteral_prevTeam_);
    func_?(&StringLiteral_Team_);
    cRam_? = '\x01';
  }
  team = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_prevTeam_,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  MVWorldObjectClient::MVWorldObjectClient_PartialUpdateWOData
            ((MVWorldObjectClient *)this,woData,(MethodInfo *)0x0);
  MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffe4,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Team_,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pMVar2 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this,(MethodInfo *)0x0);
  if (pMVar2 != (MVPreviewAvatar *)0x0) {
    pIStack3 = (pMVar2->klass->vtable).PartialRemoveFromWOData.methodPtr;
    (*(code *)(pMVar2->klass->vtable).PartialUpdateWOData.method)();
    MVar4 = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
    if (team == MVar4) {
      return;
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 != (MVNetworkGame *)0x0) {
      pMVar6 = (pMVar5->fields).teamManager;
      woId = (this->fields)._._._._.id;
      MVar4 = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
      if (pMVar6 != (MVTeamManager *)0x0) {
        MVTeamManager::MVTeamManager_OnAddSpawnPoint(pMVar6,woId,MVar4,(MethodInfo *)0x0);
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar5 != (MVNetworkGame *)0x0) &&
           (pMVar6 = (pMVar5->fields).teamManager, pMVar6 != (MVTeamManager *)0x0)) {
          MVTeamManager::MVTeamManager_OnRemoveSpawnPoint
                    (pMVar6,(this->fields)._._._._.id,team,(MethodInfo *)0x0);
          pMVar7 = (this->fields).spawnRoleCreatorObject;
          if (pMVar7 != (MVAvatarSpawnRoleCreatorObject *)0x0) {
            pTVar8 = (pMVar7->fields).spawnPlate;
            MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
            if (pTVar8 != (TintObject *)0x0) {
              pTVar9 = pTVar8->klass;
              pIStack3 = (pTVar9->vtable).Tint.methodPtr;
              (*(code *)(pTVar9->vtable).TeamTint.method)();
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
    (*(code *)(pMVar1->klass->vtable).PartialUpdateWOData.method)();
    return;
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    (*(code *)(pMVar1->klass->vtable).PartialRemoveFromWOData.method)();
    return;
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&TypeInfo__MVBody);
    func_?(&TypeInfo__MVGroup);
    func_?(&StringLiteral_Hidden);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (originalBody == (MVWorldObjectClient *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar6 = (TypeInfo__MVGroup->_1).naturalAligment;
    pMVar7 = TypeInfo__MVGroup;
    if (((originalBody->klass->_1).naturalAligment < bVar6) ||
       ((MVGroup__Class *)(originalBody->klass->_1).typeHierarchy[bVar6 - 1] != TypeInfo__MVGroup))
    goto code_?;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              MVGroup::MVGroup_get_Children((MVGroup *)originalBody,(MethodInfo *)0x0);
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                       );
    originalBody = (MVWorldObjectClient *)&stack0xffffffc8;
    method_00 = (MethodInfo *)pLVar8->_version;
    RVar10 = pLVar8->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)originalBody;
    do {
      do {
        bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                          );
        if (bVar11 == 0) goto code_?;
      } while (RVar10 == (RegexCharClass_SingleRange)0x0);
      bVar6 = (TypeInfo__MVBody->_1).naturalAligment;
      if ((*(byte *)(*(int *)RVar10 + 0xb8) < bVar6) ||
         (*(MVBody__Class **)(*(int *)(*(int *)RVar10 + 100) + -4 + (uint)bVar6 * 4) !=
          TypeInfo__MVBody)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      RVar13.First = 0;
      RVar13.Last = 0;
      if (bVar12) {
        RVar13 = RVar10;
      }
    } while (RVar13 == (RegexCharClass_SingleRange)0x0);
    bVar6 = (TypeInfo__MVBody->_1).naturalAligment;
    if (((bVar6 <= *(byte *)(*(int *)RVar10 + 0xb8)) &&
        (*(MVBody__Class **)(*(int *)(*(int *)RVar10 + 100) + -4 + (uint)bVar6 * 4) ==
         TypeInfo__MVBody)) && (RVar10 != (RegexCharClass_SingleRange)0x0)) {
      method_00 = (MethodInfo *)((int)RVar10 + 0x120);
      method_00->methodPointer = (Il2CppMethodPointer)StringLiteral_Hidden;
      func_?();
code_?:
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)originalBody,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      transfrom = (this->fields)._._._.transform;
      layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Hidden,(MethodInfo *)0x0);
      LayerUtil::LayerUtil_SetLayerRecursively(transfrom,layer,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
  func_?();
  func_?();
  pMVar7 = extraout_EDX;
code_?:
  func_?(originalBody,pMVar7);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                   );
    func_?(&TypeInfo__MVBody);
    func_?(&TypeInfo__MVGroup);
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&StringLiteral_bodyId);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._.childIdMap;
  if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    func_?();
    originalBody = extraout_EDX;
  }
  else {
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_bodyId,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar4.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar5 = (int32_t *)func_?();
    unaff_EDI = (MVWorldObjectClient__Class *)*piVar5;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
    originalBody = (MVWorldObjectClient__Class *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_01,(int32_t)unaff_EDI,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__MVWorldObjectClient;
    if (originalBody == (MVWorldObjectClient__Class *)0x0) {
code_?:
      this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                MVGroup::MVGroup_get_Children((MVGroup *)this,(MethodInfo *)0x0);
      if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                             *)&stack0xffffffd8,this_02,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                           );
        RVar7 = pLVar6->_current;
        uStack_1 = 1;
        do {
          do {
            bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                              );
            if (bVar8 == 0) goto code_?;
          } while (RVar7 == (RegexCharClass_SingleRange)0x0);
          bVar9 = (TypeInfo__MVBody->_1).naturalAligment;
          if ((*(byte *)(*(int *)RVar7 + 0xb8) < bVar9) ||
             (*(MVBody__Class **)(*(int *)(*(int *)RVar7 + 100) + -4 + (uint)bVar9 * 4) !=
              TypeInfo__MVBody)) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          RVar11.First = 0;
          RVar11.Last = 0;
          if (bVar10) {
            RVar11 = RVar7;
          }
        } while (RVar11 == (RegexCharClass_SingleRange)0x0);
        MVAvatarSpawnRoleCreator_ShowBody(this,(MVWorldObjectClient *)this,(MethodInfo *)0x0);
code_?:
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                   ,in_stack_12);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      goto code_?;
    }
    pIVar13 = (originalBody->_0).image;
    bVar9 = (TypeInfo__MVWorldObjectClient->_1).naturalAligment;
    if ((bVar9 <= *(byte *)&pIVar13[4].assembly) &&
       (*(MVWorldObjectClient__Class **)((pIVar13[2].typeCount - 4) + (uint)bVar9 * 4) ==
        TypeInfo__MVWorldObjectClient)) {
      pIVar13 = (originalBody->_0).image;
      bVar9 = (TypeInfo__MVGroup->_1).naturalAligment;
      unaff_EDI = originalBody;
      if ((bVar9 <= *(byte *)&pIVar13[4].assembly) &&
         (*(MVGroup__Class **)((pIVar13[2].typeCount - 4) + (uint)bVar9 * 4) == TypeInfo__MVGroup)) {
        MVAvatarSpawnRoleCreator_ShowBody
                  (this,(MVWorldObjectClient *)originalBody,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      goto code_?;
    }
  }
  uVar14 = func_?(originalBody,unaff_EDI);
  func_?(uVar14);
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void UpdateAvatarBody(SpawnRoleBodySwitchData, Boolean) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_UpdateAvatarBody
               (MVAvatarSpawnRoleCreator *this,SpawnRoleBodySwitchData *spawnRoleBodySwitchData,
               bool removedObjectLinks,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&StringLiteral_Logic);
    func_?(&StringLiteral_bodyId);
    cRam_? = '\x01';
  }
  this_02 = this;
  this_00 = (this->fields)._.childIdMap;
  if (spawnRoleBodySwitchData != (SpawnRoleBodySwitchData *)0x0) {
    this = (MVAvatarSpawnRoleCreator *)(spawnRoleBodySwitchData->fields).addedBodyWoId;
    value = (Object *)func_?(TypeInfo__System__Int32,&this);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)StringLiteral_bodyId,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pAVar1 = (this_02->fields).OnBodyUpdate;
      if (pAVar1 != (Action *)0x0) {
        (*(pAVar1->fields)._._.invoke_impl)
                  ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
      }
      pTVar2 = (this_02->fields)._._._.transform;
      layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Logic,(MethodInfo *)0x0);
      LayerUtil::LayerUtil_SetLayerRecursively(pTVar2,layer,(MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar3 != (MainCameraManager *)0x0) {
        if ((pMVar3->fields).blueModeEnabled != 0) {
          pMVar4 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this_02,(MethodInfo *)0x0);
          if (pMVar4 == (MVPreviewAvatar *)0x0) goto code_?;
          pTVar2 = (pMVar4->fields)._._.transform;
          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__SharedCubeFunctions);
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar2,1,(MethodInfo *)0x0);
          pMVar5 = (this_02->fields).spawnRoleCreatorObject;
          if ((pMVar5 == (MVAvatarSpawnRoleCreatorObject *)0x0) ||
             (this_01 = (pMVar5->fields).spawnPlate, this_01 == (TintObject *)0x0))
          goto code_?;
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_01,(MethodInfo *)0x0);
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar2,1,(MethodInfo *)0x0);
        }
        MVAvatarSpawnRoleCreator_HideBody(this_02,(MethodInfo *)0x0);
        pMVar4 = MVAvatarSpawnRoleCreator_get_AvatarPrototype(this_02,(MethodInfo *)0x0);
        if (pMVar4 != (MVPreviewAvatar *)0x0) {
          (pMVar4->fields).spawnRoleCreatorId = (this_02->fields)._._._._.id;
          if ((removedObjectLinks != 0) &&
             (pAVar1 = (this_02->fields).OnRedoObjectLinks, pAVar1 != (Action *)0x0)) {
            (*(pAVar1->fields)._._.invoke_impl)
                      ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
          }
          return;
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


/* MVAvatarSpawnRoleCreator(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator__ctor
               (MVAvatarSpawnRoleCreator *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&TypeInfo__GameRankRequirement);
    func_?(&TypeInfo__MVAvatarSpawnRoleCreatorObject);
    func_?(&
                    MethodInfo__MVAvatarSpawnRoleCreator__PartialDataRemove_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__MVAvatarSpawnRoleCreator__PartialDataUpdate_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__MVAvatarSpawnRoleCreator__SettingsReporterOnOnValueChangedLocal_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__MVAvatarSpawnRoleCreator__SettingsReporterOnOnValueRemovedLocal_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsReporter
                   );
    func_?(&TypeInfo__UseInteractor);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 == (PrefabPool *)0x0) {
code_?:
    func_?();
  }
  else {
    MVBlueprintBase::MVBlueprintBase__ctor_1
              ((MVBlueprintBase *)this,data,
               (ObjectPrefab *)(pPVar1->fields).mvAvatarSpawnRoleCreatorPrefab,worldObjects,
               (MethodInfo *)0x0);
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
              func_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)this,
               MethodInfo__MVAvatarSpawnRoleCreator__PartialDataUpdate_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
              func_?(
                             TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_01,(Object *)this,
               MethodInfo__MVAvatarSpawnRoleCreator__PartialDataRemove_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    pSVar2 = (SettingsReporter *)
              func_?(
                             TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsReporter
                             );
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsReporter
    ::SettingsReporter__ctor
              (pSVar2,(MVWorldObject *)this,
               (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)this_00,
               (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)this_01,(MethodInfo *)0x0);
    ppSVar3 = &(this->fields).settingsReporter;
    *ppSVar3 = pSVar2;
    func_?();
    pSVar2 = *ppSVar3;
    pDVar4 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (pDVar4,(Object *)this,
               MethodInfo__MVAvatarSpawnRoleCreator__SettingsReporterOnOnValueChangedLocal_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    if (pSVar2 == (SettingsReporter *)0x0) goto code_?;
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsReporter
    ::SettingsReporter_add_OnValueChangedLocal
              (pSVar2,(Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                        *)pDVar4,(MethodInfo *)0x0);
    pSVar2 = *ppSVar3;
    pDVar4 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(
                                TypeInfo__System__Action<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                );
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (pDVar4,(Object *)this,
               MethodInfo__MVAvatarSpawnRoleCreator__SettingsReporterOnOnValueRemovedLocal_System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,(MethodInfo *)0x0);
    if (pSVar2 == (SettingsReporter *)0x0) goto code_?;
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsReporter
    ::SettingsReporter_add_OnValueRemovedLocal
              (pSVar2,(Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                        *)pDVar4,(MethodInfo *)0x0);
    piVar5 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar5 = (uint)*piVar5 | 0x8000;
    piVar5 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar5 = (uint)*piVar5 | 0x80000000;
    pMVar6 = (MVAvatarSpawnRoleCreatorObject *)(this->fields)._._._.component;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    if (pMVar6 == (MVAvatarSpawnRoleCreatorObject *)0x0) {
      (this->fields).spawnRoleCreatorObject = (MVAvatarSpawnRoleCreatorObject *)0x0;
code_?:
      ppMVar7 = &(this->fields).spawnRoleCreatorObject;
      func_?();
      pMVar6 = *ppMVar7;
      if (pMVar6 != (MVAvatarSpawnRoleCreatorObject *)0x0) {
        pTVar8 = (pMVar6->fields).spawnPlate;
        MVar9 = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
        if (pTVar8 != (TintObject *)0x0) {
          (*(code *)(pTVar8->klass->vtable).TeamTint.method)
                    (pTVar8,MVar9,(pTVar8->klass->vtable).Tint.methodPtr);
          pMVar6 = *ppMVar7;
          if (pMVar6 != (MVAvatarSpawnRoleCreatorObject *)0x0) {
            pGVar10 = (pMVar6->fields).useInteractionRotator;
            pUVar11 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
            UseInteractor::UseInteractor__ctor
                      (pUVar11,(MVWorldObjectClient *)this,pGVar10,0,(Collider *)0x0,
                       (Func_2_Int32_Boolean_ *)0x0,(Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,
                       2.5,0,(MethodInfo *)0x0);
            ppUVar12 = &(this->fields).useInteractor;
            *ppUVar12 = pUVar11;
            func_?(ppUVar12,pUVar11);
            pMVar6 = (this->fields).spawnRoleCreatorObject;
            if (pMVar6 != (MVAvatarSpawnRoleCreatorObject *)0x0) {
              pGVar10 = (pMVar6->fields).useInteractionRotator;
              this_02 = (GameRankRequirement *)func_?(TypeInfo__GameRankRequirement);
              GameRankRequirement::GameRankRequirement__ctor
                        (this_02,pGVar10,(MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
              if (this_02 != (GameRankRequirement *)0x0) {
                *(undefined1 *)((int)&(this_02->fields).worldObjectType + 1) = 0;
                pUVar11 = (this->fields).useInteractor;
                if (pUVar11 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            (pUVar11,(UseRequirement *)this_02,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    bVar13 = (TypeInfo__MVAvatarSpawnRoleCreatorObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar6->klass)->_1).naturalAligment < bVar13) ||
       ((((ObjectPrefab__Class *)pMVar6->klass)->_1).typeHierarchy[bVar13 - 1] !=
        (Il2CppClass *)TypeInfo__MVAvatarSpawnRoleCreatorObject)) goto code_?;
    (this->fields).spawnRoleCreatorObject = pMVar6;
    bVar13 = (TypeInfo__MVAvatarSpawnRoleCreatorObject->_1).naturalAligment;
    if ((bVar13 <= (((ObjectPrefab__Class *)pMVar6->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pMVar6->klass)->_1).typeHierarchy[bVar13 - 1] ==
        (Il2CppClass *)TypeInfo__MVAvatarSpawnRoleCreatorObject)) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* AttributeSettingsManager get_AttributeSettingsManagerAvatar() */

AttributeSettingsManager *
Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::
MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
          (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingsManager
                   );
    cRam_? = '\x01';
  }
  data = (this->fields)._._._._.data;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVPreviewAvatar);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._.children;
  if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    func_?();
    pMVar1 = extraout_EDX;
  }
  else {
    pMVar1 = (MVPreviewAvatar *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                        (this->fields)._AvatarRuntimePrototypeRoot_k__BackingField,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
    if (pMVar1 == (MVPreviewAvatar *)0x0) {
      return (MVPreviewAvatar *)0x0;
    }
    bVar2 = (TypeInfo__MVPreviewAvatar->_1).naturalAligment;
    if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVPreviewAvatar__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
        TypeInfo__MVPreviewAvatar)) {
      return pMVar1;
    }
  }
  func_?(pMVar1);
  pcVar3 = (code *)swi(3);
  pMVar1 = (MVPreviewAvatar *)(*pcVar3)();
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
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._._._._.data;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_team,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        pMVar2 = (MVTeam__Enum *)func_?();
        return *pMVar2;
      }
      func_?();
      pcVar3 = (code *)swi(3);
      MVar4 = (*pcVar3)();
      return MVar4;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar3 = (code *)swi(3);
  MVar4 = (*pcVar3)();
  return MVar4;
}


/* GamePassTier get_Tier() */

GamePassTier__Enum
Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
          (MVAvatarSpawnRoleCreator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._._._._.data;
  if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_RequiredRank,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar1.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar1.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        puVar2 = (undefined1 *)func_?();
        return CONCAT31((int3)((uint)puVar2 >> 8),*puVar2);
      }
      func_?();
      pcVar3 = (code *)swi(3);
      GVar4 = (*pcVar3)();
      return GVar4;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar3 = (code *)swi(3);
  GVar4 = (*pcVar3)();
  return GVar4;
}


/* Void set_Team(MVTeam) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_set_Team
               (MVAvatarSpawnRoleCreator *this,MVTeam__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_team);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  worldObjectID = (this->fields)._._._._.id;
  MStack_1 = value;
  value_00 = (Object *)func_?(TypeInfo__System__Int32,&MStack_1);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
              (this_00,worldObjectID,StringLiteral_team,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Tier(GamePassTier) */

void Assembly-CSharp.dll::MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_set_Tier
               (MVAvatarSpawnRoleCreator *this,GamePassTier__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_RequiredRank);
    cRam_? = '\x01';
  }
  value = value & 0xff;
  this_00 = (this->fields)._._._._.data;
  value_00 = (Object *)func_?(TypeInfo__System__Int32,&value);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)StringLiteral_RequiredRank,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    worldObjectID = (this->fields)._._._._.id;
    this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_02,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (this->fields)._._._._.data;
    if (this_01 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      value_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (this_01,(Object *)StringLiteral_RequiredRank,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
      if (this_02 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_02,
                   (Object *)StringLiteral_RequiredRank,(Object *)value_01.m_Index,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                    (this_03,worldObjectID,(Dictionary_2_System_Object_System_Object_ *)this_02,
                     (MethodInfo *)0x0);
          pMVar1 = (this->fields).spawnRoleCreatorObject;
          if (pMVar1 != (MVAvatarSpawnRoleCreatorObject *)0x0) {
            pTVar2 = (pMVar1->fields).spawnPlate;
            MVar3 = MVAvatarSpawnRoleCreator_get_Team(this,(MethodInfo *)0x0);
            if (pTVar2 != (TintObject *)0x0) {
              (*(code *)(pTVar2->klass->vtable).TeamTint.method)
                        (pTVar2,MVar3,(pTVar2->klass->vtable).Tint.methodPtr);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

