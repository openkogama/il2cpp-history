
/* Void AddOptimizationData(SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData) */

void Assembly-CSharp.dll::SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager_AddOptimizationData
               (SkinnedMeshOptimizeManager *this,
               SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData optimizationData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).optimizationDataList;
  if (this_00 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Count__
                       );
    if (pOVar1 == (Object *)0x0) {
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?(TypeInfo__UpdateController);
      }
      UpdateController::UpdateController_AddUpdateObject
                ((IUpdatecontrollerSubscriberUpdate *)this,
                 UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
    }
    this_01 = (List_1_UnityEngine_BeforeRenderHelper_OrderBlock_ *)
              (this->fields).optimizationDataList;
    if (this_01 != (List_1_UnityEngine_BeforeRenderHelper_OrderBlock_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::BeforeRenderHelper+OrderBlock]
      ::List_1_UnityEngine_BeforeRenderHelper_OrderBlock__Add
                (this_01,(BeforeRenderHelper_OrderBlock)optimizationData,
                 MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean IsNewMeshCloser(SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData,
   List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData], Int32 ByRef) */

bool Assembly-CSharp.dll::SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager_IsNewMeshCloser
               (SkinnedMeshOptimizeManager *this,
               SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData newMesh,
               List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *oldMeshes,
               int32_t *index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uStack_3 = 0;
  *index = -1;
  fStack_4 = 0.0;
  if (newMesh.skinnedMesh != (List_1_UnityEngine_SkinnedMeshRenderer_ *)0x0) {
    pCVar5 = (Component_1 *)
             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)newMesh.skinnedMesh,
                        0,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
                       );
    if (pCVar5 != (Component_1 *)0x0) {
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         (pCVar5,(MethodInfo *)0x0);
      if (pTVar6 != (Transform *)0x0) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_8,pTVar6,(MethodInfo *)0x0);
        uStack_9._0_4_ = pVVar7->x;
        uStack_9._4_4_ = pVVar7->y;
        fVar10 = pVVar7->z;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          pMStack_11 = TypeInfo__MVGameControllerBase;
          func_?();
        }
        pSVar12 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                           ((MethodInfo *)0x0);
        if (pSVar12 != (SpawnRoleDataMediator *)0x0) {
          s = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
              PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
              PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                        ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)pSVar12,(MethodInfo *)0x0
                        );
          pVVar7 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                   SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                   SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                             (&VStack_8,s,
                              MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                             );
          VVar13 = *pVVar7;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          a.z = fVar10;
          a.x = (float)(undefined4)uStack_9;
          a.y = uStack_9._4_4_;
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                             (&VStack_8,a,VVar13,(MethodInfo *)0x0);
          uStack_1._0_4_ = pVVar7->x;
          uStack_1._4_4_ = pVVar7->y;
          fStack_2 = pVVar7->z;
          fVar14 = (float10)func_?();
          index_00 = 0;
          uStack_9 = CONCAT44((float)fVar14,(undefined4)uStack_9);
          if (oldMeshes != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
            while( true ) {
              pOVar15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   oldMeshes,
                                   MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Count__
                                  );
              if ((int)pOVar15 <= index_00) {
                return 0;
              }
              SVar16 = mscorlib.dll::System::Collections::Generic::
                       List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
                       List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__get_Item
                                 (oldMeshes,index_00,
                                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                 );
              if (SVar16.skinnedMesh == (List_1_UnityEngine_SkinnedMeshRenderer_ *)0x0) break;
              pCVar5 = (Component_1 *)
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                  SVar16.skinnedMesh,0,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
                                 );
              if (pCVar5 == (Component_1 *)0x0) break;
              pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 (pCVar5,(MethodInfo *)0x0);
              if (pTVar6 == (Transform *)0x0) break;
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 (&VStack_17,pTVar6,(MethodInfo *)0x0);
              VStack_8.y = pVVar7->x;
              VStack_8.z = pVVar7->y;
              fVar10 = pVVar7->z;
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              pSVar12 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                 ((MethodInfo *)0x0);
              if (pSVar12 == (SpawnRoleDataMediator *)0x0) break;
              pOVar15 = PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                        PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                  ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)pSVar12,
                                   (MethodInfo *)0x0);
              puVar18 = (undefined8 *)
                        func_?(&puStack_19,pOVar15,
                                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                                       );
              uStack_20 = *puVar18;
              fVar21 = *(float *)(puVar18 + 1);
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector3);
              }
              VVar13.z = fVar10;
              VVar13.x = VStack_8.y;
              VVar13.y = VStack_8.z;
              b.z = fVar21;
              b.x = (float)(undefined4)uStack_20;
              b.y = (float)uStack_20._4_4_;
              pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                 ((Vector3 *)&stack0xffffffa4,VVar13,b,(MethodInfo *)0x0);
              uStack_3._0_4_ = pVVar7->x;
              uStack_3._4_4_ = pVVar7->y;
              fStack_4 = pVVar7->z;
              fVar14 = (float10)func_?(&uStack_3,0);
              if (uStack_9._4_4_ < (float)fVar14) {
                *index = index_00;
                return 1;
              }
              index_00 = index_00 + 1;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar22 = (code *)swi(3);
  bVar23 = (*pcVar22)();
  return bVar23;
}


/* Void RemoveoptimizationData(SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData) */

void Assembly-CSharp.dll::SkinnedMeshOptimizeManager::
     SkinnedMeshOptimizeManager_RemoveoptimizationData
               (SkinnedMeshOptimizeManager *this,
               SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData optimizationData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).optimizationDataList;
  if (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__Contains
                      ((List_1_UnityEngine_Vector2_ *)pLVar1,(Vector2)optimizationData,
                       MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Contains_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                      );
    if (bVar2 != 0) {
      pLVar1 = (this->fields).optimizationDataList;
      if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
      List_1_UnityEngine_Vector2__Remove
                ((List_1_UnityEngine_Vector2_ *)pLVar1,(Vector2)optimizationData,
                 MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Remove_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                );
    }
    pLVar1 = (this->fields).optimizationDataList;
    if (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Count__
                         );
      if (pOVar3 == (Object *)0x0) {
        if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
          func_?();
        }
        UpdateController::UpdateController_RemoveUpdateObject
                  ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::SkinnedMeshOptimizeManager::
     SkinnedMeshOptimizeManager_UpdateControllerUpdate
               (SkinnedMeshOptimizeManager *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index_02 = (List_1_UnityEngine_Vector4___Class *)0x0;
  pLVar1 = (this->fields).optimizationDataList;
  if (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Count__
                       );
    if ((int)pOVar2 < 1) {
      return;
    }
    this_01 = (List_1_UnityEngine_Vector4_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                             );
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
              );
    pMVar3 = (MethodInfo *)
             func_?(
                            TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                            );
    BVar4.order = 0;
    BVar4.callback = (UnityAction *)0xADDR;
    this_03 = pMVar3;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              ((List_1_UnityEngine_Vector4_ *)pMVar3,
               MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
              );
    index_00 = (List_1_UnityEngine_Vector4_ *)0x0;
    pLVar1 = (this->fields).optimizationDataList;
    while (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Count__
                         );
      if ((int)pOVar2 <= (int)index_00) {
        iVar5 = 0;
        if (this_01 != (List_1_UnityEngine_Vector4_ *)0x0) {
          for (; pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     this_01,
                                     MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Count__
                                    ), iVar5 < (int)pOVar2; iVar5 = iVar5 + 1) {
            pMVar3 = (MethodInfo *)0x0;
            while( true ) {
              SVar6 = mscorlib.dll::System::Collections::Generic::
                      List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
                      List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__get_Item
                                ((List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)
                                 this_01,iVar5,
                                 MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                );
              if (SVar6.skinnedMesh == (List_1_UnityEngine_SkinnedMeshRenderer_ *)0x0)
              goto code_?;
              pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                  SVar6.skinnedMesh,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Count__
                                 );
              if ((int)pOVar2 <= (int)pMVar3) break;
              SVar6 = mscorlib.dll::System::Collections::Generic::
                      List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
                      List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__get_Item
                                ((List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)
                                 this_01,iVar5,
                                 MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                );
              if ((SVar6.skinnedMesh == (List_1_UnityEngine_SkinnedMeshRenderer_ *)0x0) ||
                 (this_03 = pMVar3,
                 pRVar7 = (Renderer *)
                          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                     SVar6.skinnedMesh,(int32_t)pMVar3,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
                                    ), pRVar7 == (Renderer *)0x0)) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                        (pRVar7,1,(MethodInfo *)0x0);
              pMVar3 = (MethodInfo *)((int)&pMVar3->methodPointer + 1);
            }
          }
          iVar5 = 0;
          if (this_03 != (MethodInfo *)0x0) {
            do {
              pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                  this_03,
                                  MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Count__
                                 );
              if ((int)pOVar2 <= iVar5) {
                return;
              }
              index = 0;
              while( true ) {
                SVar6 = mscorlib.dll::System::Collections::Generic::
                        List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
                        List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__get_Item
                                  ((List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *
                                   )this_03,iVar5,
                                   MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                  );
                if (SVar6.mesh == (List_1_UnityEngine_MeshRenderer_ *)0x0) goto code_?;
                pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                    SVar6.mesh,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Count__
                                   );
                if ((int)pOVar2 <= index) break;
                SVar6 = mscorlib.dll::System::Collections::Generic::
                        List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
                        List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__get_Item
                                  ((List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *
                                   )this_03,iVar5,
                                   MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                                  );
                if ((SVar6.mesh == (List_1_UnityEngine_MeshRenderer_ *)0x0) ||
                   (pRVar7 = (Renderer *)
                             mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                             EventSystems::IEventSystemHandler]::
                             List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                        SVar6.mesh,index,
                                        MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                                       ), pRVar7 == (Renderer *)0x0)) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                          (pRVar7,1,(MethodInfo *)0x0);
                index = index + 1;
              }
              iVar5 = iVar5 + 1;
            } while( true );
          }
        }
        break;
      }
      pMVar8 = (MethodInfo *)0x0;
      this = (SkinnedMeshOptimizeManager *)0x0;
      while( true ) {
        pLVar1 = (this_00->fields).optimizationDataList;
        if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
        goto code_?;
        SVar6 = mscorlib.dll::System::Collections::Generic::
                List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
                List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__get_Item
                          (pLVar1,(int32_t)index_00,
                           MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                          );
        if (SVar6.skinnedMesh == (List_1_UnityEngine_SkinnedMeshRenderer_ *)0x0)
        goto code_?;
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                            SVar6.skinnedMesh,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Count__
                           );
        if ((int)pOVar2 <= (int)pMVar8) break;
        pLVar1 = (this_00->fields).optimizationDataList;
        if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
        goto code_?;
        SVar6 = mscorlib.dll::System::Collections::Generic::
                List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
                List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__get_Item
                          (pLVar1,(int32_t)index_00,
                           MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                          );
        this_01 = (List_1_UnityEngine_Vector4_ *)SVar6.skinnedMesh;
        if ((this_01 == (List_1_UnityEngine_Vector4_ *)0x0) ||
           (this_03 = pMVar8,
           index_02 = (List_1_UnityEngine_Vector4___Class *)
                      MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
           , pRVar7 = (Renderer *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,
                                 (int32_t)pMVar8,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
                                ), pRVar7 == (Renderer *)0x0)) goto code_?;
        bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_isVisible
                          (pRVar7,(MethodInfo *)0x0);
        if (bVar9 == 0) {
          this = (SkinnedMeshOptimizeManager *)(this_00->fields).optimizationDataList;
          if ((List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)this ==
              (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
          goto code_?;
          SVar6 = mscorlib.dll::System::Collections::Generic::
                  List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
                  List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__get_Item
                            ((List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)this,
                             (int32_t)index_00,
                             MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                            );
          if ((SVar6.mesh == (List_1_UnityEngine_MeshRenderer_ *)0x0) ||
             (pRVar7 = (Renderer *)
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)SVar6.mesh
                                  ,(int32_t)pMVar8,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                                 ), pRVar7 == (Renderer *)0x0)) goto code_?;
          bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_isVisible
                            (pRVar7,(MethodInfo *)0x0);
          if (bVar9 != 0) goto code_?;
        }
        else {
code_?:
          this = (SkinnedMeshOptimizeManager *)0x1000000;
        }
        pMVar8 = (MethodInfo *)((int)&pMVar8->methodPointer + 1);
      }
      this_02 = this_01;
      if (this._3_1_ != '\0') {
        if (this_01 == (List_1_UnityEngine_Vector4_ *)0x0) break;
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                            MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Count__
                           );
        pLVar1 = (this_00->fields).optimizationDataList;
        if ((int)pOVar2 < 5) {
          if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
          break;
          index_01 = BVar4.callback;
          this_02 = index_00;
          this_03 = 
          MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
          ;
code_?:
          BVar4 = (BeforeRenderHelper_OrderBlock)
                  mscorlib.dll::System::Collections::Generic::
                  List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
                  List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__get_Item
                            (pLVar1,(int32_t)index_01,pMVar3);
          pMVar3 = 
          MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
          ;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          BeforeRenderHelper+OrderBlock]::List_1_UnityEngine_BeforeRenderHelper_OrderBlock__Add
                    ((List_1_UnityEngine_BeforeRenderHelper_OrderBlock_ *)this_01,BVar4,
                     MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                    );
        }
        else {
          if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
          break;
          SVar6 = mscorlib.dll::System::Collections::Generic::
                  List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
                  List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__get_Item
                            (pLVar1,(int32_t)index_00,
                             MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                            );
          this_03 = (MethodInfo *)0x0;
          this_02 = (List_1_UnityEngine_Vector4_ *)&stack0xfffffff8;
          bVar9 = SkinnedMeshOptimizeManager_IsNewMeshCloser
                            (this_00,SVar6,
                             (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)
                             this_01,(int32_t *)this_02,(MethodInfo *)0x0);
          index_01 = BVar4.callback;
          if (bVar9 != 0) {
            BVar4 = (BeforeRenderHelper_OrderBlock)
                    mscorlib.dll::System::Collections::Generic::
                    List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
                    List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__get_Item
                              ((List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)
                               this_01,(int32_t)index_02,
                               MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                              );
            if (this_03 != (MethodInfo *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
              BeforeRenderHelper+OrderBlock]::List_1_UnityEngine_BeforeRenderHelper_OrderBlock__Add
                        ((List_1_UnityEngine_BeforeRenderHelper_OrderBlock_ *)this_03,BVar4,
                         MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                        );
              mscorlib.dll::System::Collections::Generic::
              List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
              List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__RemoveAt
                        ((List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)this_01,
                         (int32_t)index_02,
                         MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__RemoveAt_int_
                        );
              pLVar1 = (this_00->fields).optimizationDataList;
              if (pLVar1 != (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
              goto code_?;
            }
            break;
          }
          pLVar1 = (this_00->fields).optimizationDataList;
          if ((pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0) ||
             (item = (BeforeRenderHelper_OrderBlock)
                     mscorlib.dll::System::Collections::Generic::
                     List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
                     List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__get_Item
                               (pLVar1,(int32_t)index_00,
                                MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                               ), this_03 == (MethodInfo *)0x0)) break;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
          BeforeRenderHelper+OrderBlock]::List_1_UnityEngine_BeforeRenderHelper_OrderBlock__Add
                    ((List_1_UnityEngine_BeforeRenderHelper_OrderBlock_ *)this_03,item,
                     MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__Add_SkinnedMeshOptimizeManager__SkinnedMeshOptimizationData_
                    );
        }
        pMVar8 = (MethodInfo *)0x0;
        while( true ) {
          pLVar1 = (this_00->fields).optimizationDataList;
          if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
          goto code_?;
          SVar6 = mscorlib.dll::System::Collections::Generic::
                  List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
                  List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__get_Item
                            (pLVar1,(int32_t)index_00,
                             MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                            );
          if (SVar6.skinnedMesh == (List_1_UnityEngine_SkinnedMeshRenderer_ *)0x0)
          goto code_?;
          pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                              SVar6.skinnedMesh,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Count__
                             );
          if ((int)pOVar2 <= (int)pMVar8) break;
          pLVar1 = (this_00->fields).optimizationDataList;
          if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
          goto code_?;
          SVar6 = mscorlib.dll::System::Collections::Generic::
                  List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
                  List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__get_Item
                            (pLVar1,(int32_t)index_00,
                             MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                            );
          this_02 = (List_1_UnityEngine_Vector4_ *)SVar6.skinnedMesh;
          if ((this_02 == (List_1_UnityEngine_Vector4_ *)0x0) ||
             (this_03 = pMVar8,
             pRVar7 = (Renderer *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,
                                 (int32_t)pMVar8,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::SkinnedMeshRenderer>__get_Item_int_
                                ), pRVar7 == (Renderer *)0x0)) goto code_?;
          index_02 = (List_1_UnityEngine_Vector4___Class *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                    (pRVar7,0,(MethodInfo *)0x0);
          pLVar1 = (this_00->fields).optimizationDataList;
          if (pLVar1 == (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)0x0)
          goto code_?;
          SVar6 = mscorlib.dll::System::Collections::Generic::
                  List`1[SkinnedMeshOptimizeManager+SkinnedMeshOptimizationData]::
                  List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData__get_Item
                            (pLVar1,(int32_t)index_00,
                             MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__get_Item_int_
                            );
          if ((SVar6.mesh == (List_1_UnityEngine_MeshRenderer_ *)0x0) ||
             (pRVar7 = (Renderer *)
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)SVar6.mesh
                                  ,(int32_t)pMVar8,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::MeshRenderer>__get_Item_int_
                                 ), pRVar7 == (Renderer *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                    (pRVar7,0,(MethodInfo *)0x0);
          pMVar8 = (MethodInfo *)((int)&pMVar8->methodPointer + 1);
        }
      }
      index_00 = (List_1_UnityEngine_Vector4_ *)((int)&index_00->klass + 1);
      this_01 = this_02;
      pLVar1 = (this_00->fields).optimizationDataList;
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* SkinnedMeshOptimizeManager() */

void Assembly-CSharp.dll::SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager__ctor
               (SkinnedMeshOptimizeManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<SkinnedMeshOptimizeManager::SkinnedMeshOptimizationData>__List__
            );
  (this->fields).optimizationDataList =
       (List_1_SkinnedMeshOptimizeManager_SkinnedMeshOptimizationData_ *)this_00;
  return;
}

