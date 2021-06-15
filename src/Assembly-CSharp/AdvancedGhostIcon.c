
/* Void AddSphereVolumeIndicator(Int32) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_AddSphereVolumeIndicator
               (AdvancedGhostIcon *this,int32_t Id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    this_02 = (DayNightCycle *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_01,Id,(MethodInfo *)0x0);
    if (this_02 == (DayNightCycle *)0x0) {
      return;
    }
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?();
    }
    this_03 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (this_03 != (PrefabPool *)0x0) {
      pXVar1 = (XpBoostParticlePreviewer *)
               PrefabPool::PrefabPool_get_LineRangeIndicator(this_03,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar1,
                          LineRangeIndicator_MethodInfo__UnityEngine__Object__Instantiate<LineRangeIndicator>_LineRangeIndicator_
                         );
      (this->fields).lineRangeIndicator = (LineRangeIndicator *)pXVar1;
      if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pXVar1,(MethodInfo *)0x0);
        this_04 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_02,(MethodInfo *)0x0);
        if ((this_04 != (CelestialParam *)0x0) &&
           (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               ((GameObject *)this_04,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar2,pTVar3,0,(MethodInfo *)0x0);
          this_00 = (this->fields).lineRangeIndicator;
          if (this_00 != (LineRangeIndicator *)0x0) {
            pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this_00,(MethodInfo *)0x0);
            this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)this,(MethodInfo *)0x0);
            if (((this_05 != (GameObject *)0x0) &&
                (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(this_05,(MethodInfo *)0x0),
                pTVar3 != (Transform *)0x0)) &&
               (pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                   ((Vector3 *)&stack0xfffffff0,pTVar3,(MethodInfo *)0x0),
               pTVar2 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_forward
                        (pTVar2,*pVVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AdvancedGhostOnPositionChanged(Object, PositionChangedEventArgs) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_AdvancedGhostOnPositionChanged
               (AdvancedGhostIcon *this,Object *sender,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if ((positionChangedEventArgs != (PositionChangedEventArgs *)0x0) &&
     (this_00 = (this->fields).cullingSubscriberBase, this_00 != (CullingSubscriberBase *)0x0)) {
    CullingSubscriberBase::CullingSubscriberBase_set_Position
              (this_00,(positionChangedEventArgs->fields).NewPos,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void CloneCubeMeshes(MVCubeModelBase) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_CloneCubeMeshes
               (AdvancedGhostIcon *this,MVCubeModelBase *body,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff74;
  puVar5 = &stack0xffffff74;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0;
  func_?();
  iStack_7 = -1;
  pGVar8 = (this->fields).ghostBody;
  piStack_9 = (int *)&stack0xffffff74;
  puStack_4 = &stack0xffffff74;
  if (pGVar8 != (GhostBody *)0x0) {
    piStack_9 = (int *)&stack0xffffff74;
    puStack_4 = &stack0xffffff74;
    method_00 = (MethodInfo *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pGVar8,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                       (&VStack_11,(MethodInfo *)0x0);
    if (method_00 != (MethodInfo *)0x0) {
      this_02 = (MethodInfo *)pVVar10->y;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                ((Transform *)method_00,*pVVar10,(MethodInfo *)0x0);
      pGVar8 = (this->fields).ghostBody;
      if ((pGVar8 != (GhostBody *)0x0) &&
         (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pGVar8,(MethodInfo *)0x0), pTVar12 != (Transform *)0x0)
         ) {
        uVar13 = ZEXT48(pGVar8);
        pOVar14 = (Object_1__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                           (pTVar12,(MethodInfo *)0x0);
        uStack_1 = 0;
        pOStack_15 = pOVar14;
        while (pOVar14 != (Object_1__Class *)0x0) {
          method_04 = (Action_1_UnityEngine_Quaternion_ *)&UNK_?;
          cVar16 = func_?();
          fVar17 = (float)uVar13;
          if (cVar16 == '\0') {
            *piStack_9 = 0x66;
            iStack_7 = 0;
            uStack_1 = 0xffffffff;
            iVar18 = func_?();
            if (iVar18 != 0) {
              method_04 = (Action_1_UnityEngine_Quaternion_ *)&UNK_?;
              func_?();
            }
            if (iStack_6 != 0) goto code_?;
            if (*piStack_9 == 0x66) {
              iStack_7 = -1;
            }
            if (body != (MVCubeModelBase *)0x0) {
              this_04 = (MethodInfo *)&UNK_?;
              pOVar14 = (Object_1__Class *)
                       MVMovingPlatformNode::MVMovingPlatformNode_get_Next
                                 ((MVMovingPlatformNode *)body,(MethodInfo *)0x0);
              if (pOVar14 != (Object_1__Class *)0x0) {
                QStack_19.x = (float)TypeInfo__System__Collections__IEnumerable;
                QStack_19.y = (float)pOVar14;
                pOStack_15 = (Object_1__Class *)func_?();
                uStack_1 = 2;
                goto code_?;
              }
            }
            break;
          }
          pCVar20 = (Component_1 *)func_?();
          if (pCVar20 == (Component_1 *)0x0) break;
          bVar21 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
          if (((pCVar20->klass->_1).naturalAligment < bVar21) ||
             ((pCVar20->klass->_1).typeHierarchy[bVar21 - 1] !=
              (Il2CppClass *)TypeInfo__UnityEngine__Transform)) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          this_00 = (Component_1 *)0x0;
          if (bVar22) {
            this_00 = pCVar20;
          }
          if (this_00 == (Component_1 *)0x0) {
            func_?();
            break;
          }
          pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              (this_00,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            QStack_19.y = (float)TypeInfo__UnityEngine__Object;
            QStack_19.x = (float)&UNK_?;
            func_?();
          }
          uVar13 = (ulonglong)(uint)fVar17;
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar23,(MethodInfo *)0x0);
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
code_?:
  pOVar14 = pOStack_15;
  pMVar25 = (MethodInfo *)uVar13;
  if (pOStack_15 == (Object_1__Class *)0x0) goto code_?;
  QStack_19.y = (float)TypeInfo__System__Collections__IEnumerator;
  QStack_19.x = 1.4013e-45;
  QStack_19.z = (float)pOStack_15;
  cVar16 = func_?();
  iVar18 = iStack_6;
  if (cVar16 == '\0') {
    piStack_9[iStack_7 + 1] = 0x135;
    uStack_1 = 0xffffffff;
    QStack_19.z = (float)TypeInfo__System__IDisposable;
    QStack_19.x = (float)&UNK_?;
    QStack_19.y = (float)pOVar14;
    pDVar26 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)func_?();
    if (pDVar26 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      func_?();
      this_01 = pDVar26;
    }
    if (iVar18 != 0) goto code_?;
    pGVar8 = (this->fields).ghostBody;
    if ((((pGVar8 != (GhostBody *)0x0) &&
         (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pGVar8,(MethodInfo *)this_01),
         body != (MVCubeModelBase *)0x0)) &&
        (this_03 = PrefabPool::PrefabPool_get_MVPointLightPrefab((PrefabPool *)body,pMVar25),
        this_03 != (MVPointLightObject *)0x0)) &&
       (pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                           (&VStack_27,(Transform *)this_03,(MethodInfo *)method_04),
       pTVar12 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (pTVar12,*pVVar10,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    goto code_?;
  }
  QStack_19.y = (float)TypeInfo__System__Collections__IEnumerator;
  QStack_19.x = 0.0;
  QStack_19.z = (float)pOVar14;
  QStack_19.y = (float)func_?();
  QStack_19.z = (float)
                TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
  ;
  QStack_19.x = (float)&UNK_?;
  puVar28 = (undefined4 *)func_?();
  method_03 = (SubscribableVariableBase_1_UnityEngine_Quaternion___Class *)*puVar28;
  pMVar25 = (MethodInfo *)((ulonglong)*(undefined8 *)(puVar28 + 4) >> 0x20);
  pQVar29 = SubscribableVariableBase`1[UnityEngine::Quaternion]::
            SubscribableVariableBase_1_UnityEngine_Quaternion__get_Value
                      (&QStack_19,
                       (SubscribableVariableBase_1_UnityEngine_Quaternion_ *)&stack0xffffff80,
                       MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                      );
  pXStack_30 = (XpBoostParticlePreviewer *)pQVar29->x;
  VStack_27.x = pQVar29->y;
  VStack_27.y = pQVar29->z;
  VStack_27.z = pQVar29->w;
  method_01 = in_stack_31;
  method_02 = this_02;
  method_05 = this_04;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
    method_01 = in_stack_31;
    method_02 = this_02;
    method_05 = this_04;
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXStack_30,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
  if (this_01 ==
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) goto code_?;
  in_stack_31 =
       (MethodInfo *)
       UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                 ((GameObject *)this_01,in_stack_32);
  pGVar8 = (this->fields).ghostBody;
  if (pGVar8 == (GhostBody *)0x0) goto code_?;
  in_stack_32 = (MethodInfo *)&UNK_?;
  pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)pGVar8,method_01);
  if (in_stack_31 == (MethodInfo *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
            ((Transform *)in_stack_31,pTVar12,in_stack_33);
  pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     ((GameObject *)this_01,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_11,(MethodInfo *)0x0);
  if (pTVar12 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
            (pTVar12,*pVVar10,in_stack_34);
  pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                     ((GameObject *)this_01,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar29 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                      ((Quaternion *)&stack0xffffff98,(MethodInfo *)0x0);
  if (pTVar12 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
            (pTVar12,*pQVar29,in_stack_35);
  this_02 = (MethodInfo *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                      (this_01,(MethodInfo *)0x0);
  pGVar8 = (this->fields).ghostBody;
  if ((pGVar8 == (GhostBody *)0x0) ||
     (pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pGVar8,method_00), pGVar23 == (GameObject *)0x0))
  goto code_?;
  method_00 = (MethodInfo *)&UNK_?;
  value_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                       (pGVar23,method_02);
  if (this_02 == (MethodInfo *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
            ((GameObject *)this_02,value_00,(MethodInfo *)method_03);
  this_04 = (MethodInfo *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                      (this_01,(MethodInfo *)0x0);
  pGVar8 = (this->fields).ghostBody;
  if ((pGVar8 == (GhostBody *)0x0) ||
     (pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pGVar8,pMVar25), pGVar23 == (GameObject *)0x0))
  goto code_?;
  uVar13 = ZEXT48(pGVar8);
  value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                    (pGVar23,method_05);
  if (this_04 == (MethodInfo *)0x0) goto code_?;
  method_04 = (Action_1_UnityEngine_Quaternion_ *)&UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            ((GameObject *)this_04,value,(MethodInfo *)0x0);
  goto code_?;
}


/* Void Init(MVAdvancedGhost, MVCubeModelBase, Boolean, MVTeam) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_Init
               (AdvancedGhostIcon *this,MVAdvancedGhost *advancedGhost,MVCubeModelBase *body,
               bool enabledCulling,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    if (advancedGhost != (MVAdvancedGhost *)0x0) {
      Id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items
                     ((Collection_1_VoxelHit_ *)advancedGhost,(MethodInfo *)0x0);
      AdvancedGhostIcon_AddSphereVolumeIndicator(this,(int32_t)Id,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
code_?:
    if (body != (MVCubeModelBase *)0x0) {
      pAVar2 = (body->fields).Changed;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__AdvancedGhostIcon__body_Changed_CubeModelChangedEventArgs_,
                 MethodInfo__System__Action<CubeModelChangedEventArgs>__Action_System__Object__void__
                );
      pAVar4 = (Action_1_CubeModelChangedEventArgs_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pAVar2 = (Action_1_CubeModelChangedEventArgs_ *)0x0;
      if (pAVar4 != (Action_1_CubeModelChangedEventArgs_ *)0x0) {
        if (pAVar4->klass == TypeInfo__System__Action<CubeModelChangedEventArgs>) {
          pAVar2 = pAVar4;
        }
        if (pAVar2 == (Action_1_CubeModelChangedEventArgs_ *)0x0) goto code_?;
      }
      (body->fields).Changed = pAVar2;
      AdvancedGhostIcon_CloneCubeMeshes(this,body,(MethodInfo *)0x0);
      if (enabledCulling == 0) {
        (this->fields).visible = 1;
        (this->fields).wantsVisible = 1;
code_?:
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (team == MVTeam__Enum_None) {
          team = MVTeam__Enum_Server;
        }
        index = MVTeam__Enum_Blue;
        pLVar5 = (this->fields).teamIrisObjects;
        if (pLVar5 != (List_1_OculusTeamGameObject_ *)0x0) {
          while( true ) {
            pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5
                                 ,
                                 MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Count__
                                );
            if ((int)pOVar6 <= (int)index) {
              return;
            }
            pLVar5 = (this->fields).teamIrisObjects;
            if (((pLVar5 == (List_1_OculusTeamGameObject_ *)0x0) ||
                (pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                           EventSystems::IEventSystemHandler]::
                           List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                     ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                      pLVar5,index,
                                      MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                                     ), pIVar7 == (IEventSystemHandler *)0x0)) ||
               ((GameObject *)pIVar7[1].monitor == (GameObject *)0x0)) break;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      ((GameObject *)pIVar7[1].monitor,0,(MethodInfo *)0x0);
            pLVar5 = (this->fields).teamIrisObjects;
            if ((pLVar5 == (List_1_OculusTeamGameObject_ *)0x0) ||
               (pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                          EventSystems::IEventSystemHandler]::
                          List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                    ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar5
                                     ,index,
                                     MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                                    ), pIVar7 == (IEventSystemHandler *)0x0)) break;
            if (pIVar7[1].klass == (IEventSystemHandler__Class *)team) {
              pLVar5 = (this->fields).teamIrisObjects;
              if (((pLVar5 == (List_1_OculusTeamGameObject_ *)0x0) ||
                  (pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                             EventSystems::IEventSystemHandler]::
                             List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                        pLVar5,index,
                                        MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                                       ), pIVar7 == (IEventSystemHandler *)0x0)) ||
                 ((GameObject *)pIVar7[1].monitor == (GameObject *)0x0)) break;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        ((GameObject *)pIVar7[1].monitor,1,(MethodInfo *)0x0);
              team = index;
            }
            pLVar5 = (this->fields).teamIrisObjects;
            index = index + MVTeam__Enum_Red;
            if (pLVar5 == (List_1_OculusTeamGameObject_ *)0x0) break;
          }
        }
      }
      else {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this,(MethodInfo *)0x0);
        if (this_00 != (Transform *)0x0) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
          uVar9._0_4_ = pVVar8->x;
          uVar9._4_4_ = pVVar8->y;
          fVar10 = pVVar8->z;
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this,
                     MethodInfo__AdvancedGhostIcon__OnStateChange_UnityEngine__CullingGroupEvent_,
                     MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
                    );
          this_01 = (CullingSubscriberBase *)func_?();
          position.z = fVar10;
          position.x = (float)(int)uVar9;
          position.y = (float)(int)((ulonglong)uVar9 >> 0x20);
          CullingSubscriberBase::CullingSubscriberBase__ctor_2
                    (this_01,4.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar3,
                     (MethodInfo *)0x0);
          (this->fields).cullingSubscriberBase = this_01;
          if ((this_01 != (CullingSubscriberBase *)0x0) &&
             (LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                        ((LockCursorManager3DMode *)this_01,(Action_1_Boolean_ *)0x3,
                         (MethodInfo *)0x0), advancedGhost != (MVAdvancedGhost *)0x0)) {
            pUVar11 = (advancedGhost->fields)._._._.PositionChanged;
            pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar3,(Object *)this,
                       MethodInfo__AdvancedGhostIcon__AdvancedGhostOnPositionChanged_System__Object__PositionChangedEventArgs_
                       ,
                       MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                      );
            pUVar12 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pUVar11,(Delegate *)pUVar3,(MethodInfo *)0x0);
            pUVar11 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
            if (pUVar12 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
              if (pUVar12->klass ==
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 ) {
                pUVar11 = pUVar12;
              }
              if (pUVar11 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
              goto code_?;
            }
            (advancedGhost->fields)._._._.PositionChanged = pUVar11;
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_OnDestroy
               (AdvancedGhostIcon *this,MethodInfo *method)

{
  this_00 = (this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
  }
  return;
}


/* Void OnStateChange(CullingGroupEvent) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_OnStateChange
               (AdvancedGhostIcon *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__CullingApiWrapper);
  }
  bVar1 = CullingApiWrapper::CullingApiWrapper_Visible(cullingGroupEvent,3,(MethodInfo *)0x0);
  (this->fields).visible = bVar1;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if ((this->fields).wantsVisible == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (this->fields).visible;
  }
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,bVar1 != 0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetGameMode(Boolean) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_SetGameMode
               (AdvancedGhostIcon *this,bool isPlayMode,MethodInfo *method)

{
  (this->fields).wantsVisible = isPlayMode ^ 1;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar1 == (GameObject *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0))
  {
    uVar3 = func_?(&UNK_?,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(0);
  return;
}


/* Void SetVisibility() */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_SetVisibility
               (AdvancedGhostIcon *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if ((this->fields).wantsVisible == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (this->fields).visible;
  }
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,bVar1 != 0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetupCulling(MVAdvancedGhost) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_SetupCulling
               (AdvancedGhostIcon *this,MVAdvancedGhost *advancedGhost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uStack_3._0_4_ = pVVar1->x;
    uStack_3._4_4_ = pVVar1->y;
    fVar4 = pVVar1->z;
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,(Object *)this,
               MethodInfo__AdvancedGhostIcon__OnStateChange_UnityEngine__CullingGroupEvent_,
               MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
              );
    this_01 = (CullingSubscriberBase *)func_?();
    position.z = fVar4;
    position.x = (float)(undefined4)uStack_3;
    position.y = (float)uStack_3._4_4_;
    pUStack_6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)this_01;
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (this_01,4.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar5,
               (MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = this_01;
    if (this_01 != (CullingSubscriberBase *)0x0) {
      LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                ((LockCursorManager3DMode *)this_01,(Action_1_Boolean_ *)0x3,(MethodInfo *)0x0);
      if (advancedGhost != (MVAdvancedGhost *)0x0) {
        pUVar7 = (advancedGhost->fields)._._._.PositionChanged;
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)this,
                   MethodInfo__AdvancedGhostIcon__AdvancedGhostOnPositionChanged_System__Object__PositionChangedEventArgs_
                   ,
                   MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                  );
        pUVar7 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pUVar7,(Delegate *)pUVar5,(MethodInfo *)0x0);
        pUVar8 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
        if (pUVar7 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
code_?:
          (advancedGhost->fields)._._._.PositionChanged = pUVar8;
          return;
        }
        if (pUVar7->klass ==
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
           ) {
          pUVar8 = pUVar7;
        }
        pUStack_6 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        if (pUVar8 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
        goto code_?;
        goto code_?;
      }
    }
  }
  func_?();
  pUVar7 = extraout_ECX;
  pUStack_6 = extraout_EDX;
code_?:
  uStack_3 = CONCAT44(pUVar7,&UNK_?);
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void body_Changed(CubeModelChangedEventArgs) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_body_Changed
               (AdvancedGhostIcon *this,CubeModelChangedEventArgs *e,MethodInfo *method)

{
  if (e != (CubeModelChangedEventArgs *)0x0) {
    AdvancedGhostIcon_CloneCubeMeshes(this,(e->fields).Sender,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_set_Radius
               (AdvancedGhostIcon *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    this_00 = (this->fields).lineRangeIndicator;
    if (this_00 == (LineRangeIndicator *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    LineRangeIndicator::LineRangeIndicator_SetRange(this_00,value,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_Team(MVTeam) */

void Assembly-CSharp.dll::AdvancedGhostIcon::AdvancedGhostIcon_set_Team
               (AdvancedGhostIcon *this,MVTeam__Enum value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = (IEventSystemHandler__Class *)0x0;
  pLVar1 = (this->fields).teamIrisObjects;
  if (pLVar1 != (List_1_OculusTeamGameObject_ *)0x0) {
    while( true ) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Count__
                         );
      if ((int)pOVar2 <= (int)index) {
        return;
      }
      pLVar1 = (this->fields).teamIrisObjects;
      if (((pLVar1 == (List_1_OculusTeamGameObject_ *)0x0) ||
          (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                               (int32_t)index,
                               MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                              ), pIVar3 == (IEventSystemHandler *)0x0)) ||
         ((GameObject *)pIVar3[1].monitor == (GameObject *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pIVar3[1].monitor,0,(MethodInfo *)0x0);
      pLVar1 = (this->fields).teamIrisObjects;
      if ((pLVar1 == (List_1_OculusTeamGameObject_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                              (int32_t)index,
                              MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) break;
      if (pIVar3[1].klass == index) {
        pLVar1 = (this->fields).teamIrisObjects;
        if (((pLVar1 == (List_1_OculusTeamGameObject_ *)0x0) ||
            (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                 (int32_t)index,
                                 MethodInfo__System__Collections__Generic__List<OculusTeamGameObject>__get_Item_int_
                                ), pIVar3 == (IEventSystemHandler *)0x0)) ||
           ((GameObject *)pIVar3[1].monitor == (GameObject *)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)pIVar3[1].monitor,1,(MethodInfo *)0x0);
      }
      pLVar1 = (this->fields).teamIrisObjects;
      index = (IEventSystemHandler__Class *)((int)&(index->_0).image + 1);
      if (pLVar1 == (List_1_OculusTeamGameObject_ *)0x0) break;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

