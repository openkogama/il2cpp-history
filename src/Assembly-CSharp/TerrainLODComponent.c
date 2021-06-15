
/* Void AddToLOD(IntVector) */

void Assembly-CSharp.dll::TerrainLODComponent::TerrainLODComponent_AddToLOD
               (TerrainLODComponent *this,IntVector localPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fStack_1 = (this->fields).scale;
  this_00 = (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)(this->fields).LODBookkeeping;
  this_01 = (this->fields).prototypeCubeModel;
  if (this_01 != (RuntimePrototypeCubeModel *)0x0) {
    iVar2 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
            Int32]::
            Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                      ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this_01,
                       (MethodInfo *)0x0);
    uStack_3 = 0;
    fStack_4 = 0.0;
    func_?(&uStack_3);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = fStack_4;
    a.x = (float)(undefined4)uStack_3;
    a.y = (float)uStack_3._4_4_;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                       (&VStack_6,(float)iVar2 * fStack_1,a,(MethodInfo *)0x0);
    uVar7 = pVVar5->x;
    uVar8 = pVVar5->y;
    fVar9 = pVVar5->z;
    uStack_10 = (uint)(ushort)localPos.z;
    func_?();
    if (this_00 != (List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton_ *)0x0) {
      item.buttonNotSelected = (GameObject *)uVar7;
      item.buttonSelected = (GameObject *)uStack_10;
      item.buttonSelectedText = (Text *)uVar8;
      item.buttonNotSelectedText = (Text *)fVar9;
      item.team = 0;
      mscorlib.dll::System::Collections::Generic::List`1[SpawnRoleTeamEditor+SpawnRoleTeamButton]::
      List_1_SpawnRoleTeamEditor_SpawnRoleTeamButton__Add
                (this_00,item,
                 MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__Add_MVTerrainLOD_);
      return;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ChangeLODChunk(ChunkInstances+ChunkInstanceVariables, IntVector ByRef, Single, Single) */

void Assembly-CSharp.dll::TerrainLODComponent::TerrainLODComponent_ChangeLODChunk
               (TerrainLODComponent *this,ChunkInstances_ChunkInstanceVariables chunk,
               IntVector *chunkPosition,float distance,float renderDistance,MethodInfo *method)

{
  if (renderDistance < distance) {
    if (chunk.renderer == (MeshRenderer *)0x0) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      ((Renderer *)chunk.renderer,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)chunk.renderer,0,(MethodInfo *)0x0);
      pRVar2 = (this->fields).prototypeCubeModel;
      if (pRVar2 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_RemoveRefenceFromChunk
                (pRVar2,chunkPosition,(MethodInfo *)0x0);
    }
  }
  if (distance < renderDistance) {
    if (chunk.renderer == (MeshRenderer *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      ((Renderer *)chunk.renderer,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)chunk.renderer,1,(MethodInfo *)0x0);
      pRVar2 = (this->fields).prototypeCubeModel;
      if (pRVar2 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddRefenceToChunk
                (pRVar2,(IntVector *)0x0,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void ChangeLODTerrain() */

void Assembly-CSharp.dll::TerrainLODComponent::TerrainLODComponent_ChangeLODTerrain
               (TerrainLODComponent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = this;
  CStack_1.gameObject = (GameObject *)0x0;
  CStack_1.collider = (BoxCollider *)0x0;
  CStack_1.renderer = (MeshRenderer *)0x0;
  CStack_1.filter = (MeshFilter *)0x0;
  fStack_2 = 0.0;
  uStack_3._0_2_ = 0;
  uStack_3._2_2_ = 0;
  uStack_3._4_4_ = 0;
  uStack_4 = 0;
  uStack_5 = 0;
  pLVar6 = (this->fields).LODBookkeeping;
  if (pLVar6 != (List_1_MVTerrainLOD_ *)0x0) {
    pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar6,
                        MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__get_Count__);
    if (pOVar7 == (Object *)0x0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((this_02 != (MainCameraManager *)0x0) &&
       (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this_02,(MethodInfo *)0x0), this_03 != (Transform *)0x0)
       ) {
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_9,this_03,(MethodInfo *)0x0);
      uStack_10._0_4_ = pVVar8->x;
      uStack_10._4_4_ = pVVar8->y;
      fStack_11 = pVVar8->z;
      this = (TerrainLODComponent *)
             UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?((short)TypeInfo__UnityEngine__Mathf);
      }
      iVar12 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_RoundToInt
                         ((float)this * _UNK_?,(MethodInfo *)0x0);
      iStack_13 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_2
                            (1,iVar12,(MethodInfo *)0x0);
      iVar14 = 0;
      if (0 < iStack_13) {
        do {
          pLVar6 = (this_01->fields).LODBookkeeping;
          if (pLVar6 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
          pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar6,
                              MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__get_Count__
                             );
          if (pOVar7 == (Object *)0x0) {
            return;
          }
          pLVar6 = (this_01->fields).LODBookkeeping;
          iVar15 = (this_01->fields).currentLODPosition;
          if (pLVar6 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
          pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar6,
                              MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__get_Count__
                             );
          if (iVar15 < (int)pOVar7) {
            iVar12 = (this_01->fields).currentLODPosition;
          }
          else {
            (this_01->fields).currentLODPosition = 0;
            iVar12 = 0;
          }
          pLVar6 = (this_01->fields).LODBookkeeping;
          if (pLVar6 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
          pIVar16 = (IntVector *)
                    func_?(auStack_17,pLVar6,iVar12,
                                    MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__get_Item_int_
                                   );
          this_00 = (this_01->fields).chunkInstances;
          uStack_3._0_2_ = pIVar16->x;
          uStack_3._2_2_ = pIVar16->y;
          uStack_3._4_4_ = *(undefined4 *)&pIVar16->z;
          uStack_4._0_2_ = pIVar16[1].y;
          uStack_4._2_2_ = pIVar16[1].z;
          uStack_5._0_2_ = pIVar16[2].x;
          uStack_5._2_2_ = pIVar16[2].y;
          fStack_2 = *(float *)&pIVar16[2].z;
          if (this_00 == (ChunkInstances *)0x0) goto code_?;
          bVar18 = ChunkInstances::ChunkInstances_TryGetValue
                            (this_00,*pIVar16,&CStack_1,(MethodInfo *)0x0);
          pLVar6 = (this_01->fields).LODBookkeeping;
          if (bVar18 == 0) {
            if (pLVar6 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[MVTerrainLOD]::
            List_1_MVTerrainLOD__RemoveAt
                      (pLVar6,(this_01->fields).currentLODPosition,
                       MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__RemoveAt_int_);
          }
          else {
            if (pLVar6 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
            iVar15 = func_?(auStack_17,pLVar6,(this_01->fields).currentLODPosition,
                                     MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__get_Item_int_
                                    );
            uVar19 = *(undefined4 *)(iVar15 + 8);
            uVar20 = *(undefined4 *)(iVar15 + 0xc);
            fVar21 = *(float *)(iVar15 + 0x10);
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Vector3);
            }
            a.y = (float)uVar20;
            a.x = (float)uVar19;
            a.z = fVar21;
            b.z = fStack_11;
            b.x = (float)(undefined4)uStack_10;
            b.y = (float)uStack_10._4_4_;
            this = (TerrainLODComponent *)
                   UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Distance
                             (a,b,(MethodInfo *)0x0);
            pDVar22 = (this_01->fields).dynamicLodDistance;
            pGStack_23 = CStack_1.gameObject;
            VStack_9.x = (float)CStack_1.collider;
            VStack_9.y = (float)CStack_1.renderer;
            VStack_9.z = (float)CStack_1.filter;
            if (pDVar22 == (DynamicLODDistance *)0x0) goto code_?;
            fStack_24 = ProgressBarAndroid::ProgressBarAndroid_get_Progress
                                 ((ProgressBarAndroid *)pDVar22,(MethodInfo *)0x0);
            chunk.collider = (BoxCollider *)VStack_9.x;
            chunk.gameObject = pGStack_23;
            chunk.renderer = (MeshRenderer *)VStack_9.y;
            chunk.filter = (MeshFilter *)VStack_9.z;
            TerrainLODComponent_ChangeLODChunk
                      (this_01,chunk,(IntVector *)&uStack_3,(float)this,fStack_24,(MethodInfo *)0x0)
            ;
            pDVar22 = (this_01->fields).dynamicLodDistance;
            if (pDVar22 == (DynamicLODDistance *)0x0) goto code_?;
            pTVar25 = (this_01->fields).triangleCounter;
            if ((float)this < (pDVar22->fields).maxRadius) {
              if (pTVar25 == (TerrainLODComponent_TriangleCounter *)0x0) goto code_?;
              localPos_00.z = uStack_3._4_2_;
              localPos_00.x = (int16_t)uStack_3;
              localPos_00.y = uStack_3._2_2_;
              TerrainLODComponent+TriangleCounter::TerrainLODComponent_TriangleCounter_Add
                        (pTVar25,localPos_00,(MethodInfo *)0x0);
            }
            else {
              if (pTVar25 == (TerrainLODComponent_TriangleCounter *)0x0) goto code_?;
              localPos.z = uStack_3._4_2_;
              localPos.x = (int16_t)uStack_3;
              localPos.y = uStack_3._2_2_;
              TerrainLODComponent+TriangleCounter::TerrainLODComponent_TriangleCounter_Remove
                        (pTVar25,localPos,(MethodInfo *)0x0);
            }
            pLVar6 = (this_01->fields).LODBookkeeping;
            if (pLVar6 == (List_1_MVTerrainLOD_ *)0x0) goto code_?;
            value._4_4_ = uStack_3._4_4_;
            value.localPos.x = (int16_t)uStack_3;
            value.localPos.y = uStack_3._2_2_;
            value.worldPos.x = (float)uStack_4;
            value.worldPos.y._0_2_ = (short)uStack_5;
            value.worldPos.y._2_2_ = (short)((uint)uStack_5 >> 0x10);
            value.worldPos.z = fStack_2;
            mscorlib.dll::System::Collections::Generic::List`1[MVTerrainLOD]::
            List_1_MVTerrainLOD__set_Item
                      (pLVar6,(this_01->fields).currentLODPosition,value,
                       MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__set_Item_int__MVTerrainLOD_
                      );
          }
          piVar26 = &(this_01->fields).currentLODPosition;
          *piVar26 = *piVar26 + 1;
          iVar14 = iVar14 + 1;
        } while (iVar14 < iStack_13);
      }
      pTVar25 = (this_01->fields).triangleCounter;
      if (pTVar25 != (TerrainLODComponent_TriangleCounter *)0x0) {
        iVar12 = TerrainLODComponent+TriangleCounter::
                 TerrainLODComponent_TriangleCounter_GetEnabledTriangleCount
                           (pTVar25,(this_01->fields).prototypeCubeModel,(MethodInfo *)0x0);
        pDVar22 = (this_01->fields).dynamicLodDistance;
        if (pDVar22 != (DynamicLODDistance *)0x0) {
          DynamicLODDistance::DynamicLODDistance_Update(pDVar22,iVar12,(MethodInfo *)0x0);
          if ((this_01->fields).debug == 0) {
            return;
          }
          pDVar22 = (this_01->fields).dynamicLodDistance;
          if (pDVar22 != (DynamicLODDistance *)0x0) {
            this = (TerrainLODComponent *)
                   ProgressBarAndroid::ProgressBarAndroid_get_Progress
                             ((ProgressBarAndroid *)pDVar22,(MethodInfo *)0x0);
            pOVar7 = (Object *)func_?(TypeInfo__System__Single,&this);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?((short)TypeInfo__System__String);
            }
            pSVar27 = mscorlib.dll::System::String::String_Concat
                                ((Object *)StringLiteral_dynamicLodDistance_CurrentRadius,pOVar7,
                                 (MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?((short)TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)pSVar27,(MethodInfo *)0x0);
            pTVar25 = (this_01->fields).triangleCounter;
            if (pTVar25 != (TerrainLODComponent_TriangleCounter *)0x0) {
              iStack_13 = TerrainLODComponent+TriangleCounter::
                          TerrainLODComponent_TriangleCounter_GetEnabledTriangleCount
                                    (pTVar25,(this_01->fields).prototypeCubeModel,(MethodInfo *)0x0);
              pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&iStack_13);
              pSVar27 = mscorlib.dll::System::String::String_Concat
                                  ((Object *)StringLiteral_TriangleCount__,pOVar7,(MethodInfo *)0x0)
              ;
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)pSVar27,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* TerrainLODComponent(RuntimePrototypeCubeModel, ChunkInstances, DynamicLODDistance, Single,
   Boolean) */

void Assembly-CSharp.dll::TerrainLODComponent::TerrainLODComponent__ctor
               (TerrainLODComponent *this,RuntimePrototypeCubeModel *prototypeCubeModel,
               ChunkInstances *chunkInstances,DynamicLODDistance *dynamicLodDistance,float scale,
               bool debug,MethodInfo *method)

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
  this_00 = (List_1_MVTerrainLOD_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVTerrainLOD>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVTerrainLOD>__List__);
  (this->fields).LODBookkeeping = this_00;
  this_01 = (ScaleAnimationBase *)func_?(TypeInfo__TerrainLODComponent__TriangleCounter);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>;
  this_02 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::IntVector>__HashSet__
            );
  (this_01->fields)._._._._.m_CachedPtr = this_02;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  (this->fields).triangleCounter = (TerrainLODComponent_TriangleCounter *)this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).prototypeCubeModel = prototypeCubeModel;
  (this->fields).dynamicLodDistance = dynamicLodDistance;
  (this->fields).chunkInstances = chunkInstances;
  (this->fields).scale = scale;
  (this->fields).debug = debug;
  if (chunkInstances != (ChunkInstances *)0x0) {
    piVar4 = (int *)func_?();
    uStack_1 = 0;
    while (piVar4 != (int *)0x0) {
      cVar5 = func_?();
      if (cVar5 == '\0') {
        uStack_1 = 0xffffffff;
        iVar6 = func_?();
        if (iVar6 != 0) {
          func_?();
        }
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this,
                   MethodInfo__TerrainLODComponent__chunkInstances_Changed_System__Object__ChunkInstancesChanged_
                   ,
                   MethodInfo__System__EventHandler<ChunkInstancesChanged>__EventHandler_System__Object__void__
                  );
        if (chunkInstances != (ChunkInstances *)0x0) {
          ChunkInstances::ChunkInstances_add_Changed
                    (chunkInstances,(EventHandler_1_ChunkInstancesChanged_ *)this_03,
                     (MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        break;
      }
      uVar7 = 0;
      uVar8 = *(ushort *)(*piVar4 + 0xb6);
      if (uVar8 != 0) {
        do {
          if (*(IEnumerator__Class **)(*(int *)(*piVar4 + 0x58) + (uint)uVar7 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar9 = (undefined4 *)
                     (*piVar4 +
                     (*(int *)(*(int *)(*piVar4 + 0x58) + 4 + (uint)uVar7 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
      puVar9 = (undefined4 *)func_?();
code_?:
      piVar10 = (int *)(*(code *)*puVar9)();
      if (piVar10 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar10 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) {
        func_?();
        break;
      }
      func_?();
      pIVar11 = (IntVector *)func_?();
      TerrainLODComponent_AddToLOD(this,*pIVar11,(MethodInfo *)0x0);
    }
  }
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void chunkInstances_Changed(Object, ChunkInstancesChanged) */

void Assembly-CSharp.dll::TerrainLODComponent::TerrainLODComponent_chunkInstances_Changed
               (TerrainLODComponent *this,Object *sender,ChunkInstancesChanged *e,MethodInfo *method
               )

{
  if (e != (ChunkInstancesChanged *)0x0) {
    if ((e->fields).changeType == 0) {
      TerrainLODComponent_AddToLOD(this,(e->fields).chunkPos,(MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

