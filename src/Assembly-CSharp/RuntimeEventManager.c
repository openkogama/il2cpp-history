
/* Void ExecuteRuntimeEventLocal(ExplosionEvent) */

void Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_ExecuteRuntimeEventLocal
               (RuntimeEventManager *this,ExplosionEvent *explosion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (explosion != (ExplosionEvent *)0x0) {
    MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
    ExplosionEvent_get_ExplosionValuesStruct
              ((ExplosionEvent_ExplosionValues *)&stack0xffffffd4,explosion,(MethodInfo *)0x0);
    cm = (this->fields).cubeModelPrototypeTerrain;
    fVar1 = (float10)func_?(&stack0xffffffc8,0);
    uVar2 = 0;
    fVar3 = (float)fVar1;
    IVar4 = CellCursorCubeMesh::CellCursorCubeMesh_get_LocalPos
                      ((CellCursorCubeMesh *)&pCStack_5,(MethodInfo *)explosion);
    IVar4 = *IVar4._0_4_;
    fVar1 = (float10)func_?(&stack0xffffffc8,0,uVar2);
    pCStack_5 = (CellCursorCubeMesh__Class *)(float)fVar1;
    pIStack_6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          ((Collection_1_VoxelHit_ *)&stack0xffffffc8,(MethodInfo *)0x0);
    pMStack_7 = (this->fields).cubeModelFineGrainedTerrain;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      object = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                         ((DayNightCycle *)this_00,(MethodInfo *)0x0);
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)object,
                 MethodInfo__MVMaterialRepository__GetMaterialPhysicalProperties_unsigned_char_,
                 MethodInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>__Func_System__Object__void__
                );
      bVar8 = RemoveCubes+RemoveCubesWithinRadius::
              RemoveCubes_RemoveCubesWithinRadius_HandleRemoveCubes
                        ((MVCubeModelBase *)cm,fVar3,IVar4,(float)pCStack_5,
                         (DamageFallOffType__Enum)pIStack_6,(MVCubeModelBase *)pMStack_7,
                         (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)this_01,(MethodInfo *)0x0
                        );
      if ((bVar8 != 0) && ((this->fields).doEffects != 0)) {
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?(TypeInfo__PrefabPool);
        }
        this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (this_02 == (PrefabPool *)0x0) goto code_?;
        particlePrefab = PrefabPool::PrefabPool_get_ParticleCubeDust(this_02,(MethodInfo *)0x0);
        IVar4 = CellCursorCubeMesh::CellCursorCubeMesh_get_LocalPos
                          ((CellCursorCubeMesh *)&stack0xffffffd8,(MethodInfo *)explosion);
        pVVar9 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                 CubeMathFunctions_FineGrainedLocalPosToWorldPos
                           ((Vector3 *)&stack0xffffffd4,*IVar4._0_4_,(MethodInfo *)0x0);
        fVar3 = pVVar9->z;
        fVar1 = (float10)func_?((short)&stack0xffffffc8);
        b = (MonitorData *)(float)fVar1;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        radius = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
                           (1.5,(float)b,(MethodInfo *)0x0);
        position.y = 0.0;
        position.x = radius;
        position.z = fVar3;
        SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                  (particlePrefab,position,radius,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean HandleEvent(SingleCubeFineGrainedEvent) */

bool Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_HandleEvent
               (RuntimeEventManager *this,SingleCubeFineGrainedEvent *singleCubeFineGrainedEvent,
               MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (singleCubeFineGrainedEvent != (SingleCubeFineGrainedEvent *)0x0) {
    RVar3 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
            RuntimeEvent_get_RuntimeEventType
                      ((RuntimeEvent *)singleCubeFineGrainedEvent,(MethodInfo *)0x0);
    if ((char)RVar3 == '\x01') {
      pMVar4 = (this->fields).cubeModelFineGrainedTerrain;
      IVar5 = CellCursorCubeMesh::CellCursorCubeMesh_get_LocalPos
                         ((CellCursorCubeMesh *)&stack0xffffffe4,
                          (MethodInfo *)singleCubeFineGrainedEvent);
      uVar6 = *IVar5._0_4_;
      uVar1 = *(undefined2 *)(IVar5._0_4_ + 1);
      bVar7 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
              CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
                        ((CrossPlatformInputManager_VirtualAxis *)singleCubeFineGrainedEvent,
                         (MethodInfo *)0x0);
      pCVar8 = (CubeBase *)func_?(TypeInfo__MV__WorldObject__CubeBase);
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor_2(pCVar8,bVar7,(MethodInfo *)0x0)
      ;
      if (pMVar4 != (MVCubeModelFineGrainedTerrain *)0x0) {
        (*(code *)(pMVar4->klass->vtable).AddCubeNetworkUpdate_1.method)
                  (pMVar4,uVar6,uVar1,pCVar8,
                   (pMVar4->klass->vtable).DirtyChunksRegeneratedHandler.methodPtr);
        return 1;
      }
    }
    else {
      RVar3 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
              RuntimeEvent_get_RuntimeEventType
                        ((RuntimeEvent *)singleCubeFineGrainedEvent,(MethodInfo *)0x0);
      if (((char)RVar3 != '\x02') &&
         (RVar3 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                  RuntimeEvent_get_RuntimeEventType
                            ((RuntimeEvent *)singleCubeFineGrainedEvent,(MethodInfo *)0x0),
         (char)RVar3 != '\x05')) {
        return 1;
      }
      IVar5 = CellCursorCubeMesh::CellCursorCubeMesh_get_LocalPos
                         ((CellCursorCubeMesh *)&stack0xffffffe4,
                          (MethodInfo *)singleCubeFineGrainedEvent);
      pIVar9 = IVar5._0_4_;
      iVar10 = pIVar9->x;
      fineGrainedTerrainWorldObject = (this->fields).cubeModelPrototypeTerrain;
      iVar11 = pIVar9->z;
      pMVar4 = (this->fields).cubeModelFineGrainedTerrain;
      bVar7 = RemoveCubes+RemoveOneCube::
              RemoveCubes_RemoveOneCube_TryRemoveCubeFromFineGrainedTerrain
                        (*pIVar9,(ICubeModel *)pMVar4,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        IVar5.z = iVar10;
        IVar5._0_4_ = &stack0xffffffe4;
        IVar5 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                 CubeMathFunctions_FromLocalPosToLocalPos
                           (IVar5,(ICubeModel *)CONCAT22(uVar1,iVar11),
                            (ICubeModel *)fineGrainedTerrainWorldObject,(MethodInfo *)pMVar4);
        puVar12 = IVar5._0_4_;
        uVar6 = *puVar12;
        uVar1 = *(undefined2 *)(puVar12 + 1);
        if (fineGrainedTerrainWorldObject == (MVCubeModelPrototypeTerrain *)0x0)
        goto code_?;
        pCVar8 = (CubeBase *)
                 func_?(1,TypeInfo__MV__WorldObject__ICubeModel,
                                 fineGrainedTerrainWorldObject,(short)*puVar12);
        uVar13 = SUB41(pCVar8,0);
        uVar14 = (undefined1)((uint)pCVar8 >> 8);
        uVar15 = (undefined2)((uint)pCVar8 >> 0x10);
        if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0
            ) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
          func_?();
          pCVar8 = (CubeBase *)CONCAT22(uVar15,CONCAT11(uVar14,uVar13));
        }
        bVar7 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                          (pCVar8,(CubeBase *)0x0,(MethodInfo *)0x0);
        if (bVar7 == 0) {
          return 1;
        }
        if ((((uint)(TypeInfo__MoveCubeFromCoarseToFine->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_started == 0)) {
          func_?();
        }
        fromPos.z._0_1_ = (char)uVar1;
        fromPos.x = (int16_t)uVar6;
        fromPos.y = SUB42(uVar6,2);
        fromPos.z._1_1_ = (char)((ushort)uVar1 >> 8);
        MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_MoveCube
                  ((ICubeModel *)fineGrainedTerrainWorldObject,(ICubeModel *)pMVar4,fromPos,
                   (MethodInfo *)0x0);
        fineGrainedTerrainWorldObject_00 = TypeInfo__MV__WorldObject__ICubeModel;
        puVar16 = &UNK_?;
        func_?();
        fineGrainedPosition.z = (int16_t)((uint)fineGrainedTerrainWorldObject >> 0x10);
        fineGrainedPosition._0_4_ = puVar16;
        RemoveCubes+RemoveOneCube::RemoveCubes_RemoveOneCube_TryRemoveCubeFromFineGrainedTerrain
                  (fineGrainedPosition,(ICubeModel *)fineGrainedTerrainWorldObject_00,
                   (MethodInfo *)0x0);
      }
      if ((this->fields).doEffects == 0) {
        return 1;
      }
      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
        func_?(TypeInfo__PrefabPool);
      }
      this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if (this_00 != (PrefabPool *)0x0) {
        particlePrefab =
             PrefabPool::PrefabPool_get_ParticleCubeDustDestroyed(this_00,(MethodInfo *)0x0);
        IVar5 = CellCursorCubeMesh::CellCursorCubeMesh_get_LocalPos
                           ((CellCursorCubeMesh *)&stack0xffffffe4,
                            (MethodInfo *)singleCubeFineGrainedEvent);
        pVVar17 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                  CubeMathFunctions_FineGrainedLocalPosToWorldPos
                            ((Vector3 *)&stack0xffffffe0,*IVar5._0_4_,(MethodInfo *)0x0);
        position.z._1_1_ = (char)((uint)pVVar17->z >> 8);
        position._0_9_ = *(unkbyte9 *)pVVar17;
        position.z._2_2_ = (short)((uint)pVVar17->z >> 0x10);
        SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                  (particlePrefab,position,1.0,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
code_?:
  func_?(0);
  pcVar18 = (code *)swi(3);
  bVar7 = (*pcVar18)();
  return bVar7;
}


/* Boolean HandleEvent(ExplosionEvent) */

bool Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_HandleEvent_1
               (RuntimeEventManager *this,ExplosionEvent *explosion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (explosion != (ExplosionEvent *)0x0) {
    MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
    ExplosionEvent_get_ExplosionValuesStruct
              ((ExplosionEvent_ExplosionValues *)&stack0xffffffd4,explosion,(MethodInfo *)0x0);
    cm = (this->fields).cubeModelPrototypeTerrain;
    fVar1 = (float10)func_?(&stack0xffffffc8,0);
    uVar2 = 0;
    fVar3 = (float)fVar1;
    IVar4 = CellCursorCubeMesh::CellCursorCubeMesh_get_LocalPos
                      ((CellCursorCubeMesh *)&pCStack_5,(MethodInfo *)explosion);
    IVar4 = *IVar4._0_4_;
    fVar1 = (float10)func_?(&stack0xffffffc8,0,uVar2);
    pCStack_5 = (CellCursorCubeMesh__Class *)(float)fVar1;
    pIStack_6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          ((Collection_1_VoxelHit_ *)&stack0xffffffc8,(MethodInfo *)0x0);
    pMStack_7 = (this->fields).cubeModelFineGrainedTerrain;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame *)0x0) {
      object = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                         ((DayNightCycle *)this_00,(MethodInfo *)0x0);
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)object,
                 MethodInfo__MVMaterialRepository__GetMaterialPhysicalProperties_unsigned_char_,
                 MethodInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>__Func_System__Object__void__
                );
      bVar8 = RemoveCubes+RemoveCubesWithinRadius::
              RemoveCubes_RemoveCubesWithinRadius_HandleRemoveCubes
                        ((MVCubeModelBase *)cm,fVar3,IVar4,(float)pCStack_5,
                         (DamageFallOffType__Enum)pIStack_6,(MVCubeModelBase *)pMStack_7,
                         (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)this_01,(MethodInfo *)0x0
                        );
      if ((bVar8 != 0) && ((this->fields).doEffects != 0)) {
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?(TypeInfo__PrefabPool);
        }
        this_02 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (this_02 == (PrefabPool *)0x0) goto code_?;
        particlePrefab = PrefabPool::PrefabPool_get_ParticleCubeDust(this_02,(MethodInfo *)0x0);
        IVar4 = CellCursorCubeMesh::CellCursorCubeMesh_get_LocalPos
                          ((CellCursorCubeMesh *)&stack0xffffffd8,(MethodInfo *)explosion);
        pVVar9 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                 CubeMathFunctions_FineGrainedLocalPosToWorldPos
                           ((Vector3 *)&stack0xffffffd4,*IVar4._0_4_,(MethodInfo *)0x0);
        fVar3 = pVVar9->z;
        fVar1 = (float10)func_?((short)&stack0xffffffc8);
        b = (MonitorData *)(float)fVar1;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        radius = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
                           (1.5,(float)b,(MethodInfo *)0x0);
        position.y = 0.0;
        position.x = radius;
        position.z = fVar3;
        SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                  (particlePrefab,position,radius,(MethodInfo *)0x0);
      }
      return bVar8;
    }
  }
code_?:
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar8 = (*pcVar10)();
  return bVar8;
}


/* Boolean IsRemovingAddedFineGrainedCube(SingleCubeFineGrainedEvent) */

bool Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_IsRemovingAddedFineGrainedCube
               (RuntimeEventManager *this,SingleCubeFineGrainedEvent *singleCubeFineGrainedEvent,
               MethodInfo *method)

{
  if (singleCubeFineGrainedEvent != (SingleCubeFineGrainedEvent *)0x0) {
    RVar1 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
            RuntimeEvent_get_RuntimeEventType
                      ((RuntimeEvent *)singleCubeFineGrainedEvent,(MethodInfo *)0x0);
    if ((char)RVar1 != '\x02') {
      return 0;
    }
    IVar2 = CellCursorCubeMesh::CellCursorCubeMesh_get_LocalPos
                      ((CellCursorCubeMesh *)&stack0xfffffff4,
                       (MethodInfo *)singleCubeFineGrainedEvent);
    IVar3.z = (int16_t)*IVar2._0_4_;
    IVar3._0_4_ = &stack0xfffffff4;
    IVar3 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
            CubeMathFunctions_FromLocalPosToLocalPos
                      (IVar3,(ICubeModel *)
                             CONCAT22((short)((uint)singleCubeFineGrainedEvent >> 0x10),
                                      *(undefined2 *)(IVar2._0_4_ + 1)),
                       (ICubeModel *)(this->fields).cubeModelPrototypeTerrain,
                       (MethodInfo *)(this->fields).cubeModelFineGrainedTerrain);
    this_00 = (this->fields).cubeModelPrototypeTerrain;
    if (this_00 != (MVCubeModelPrototypeTerrain *)0x0) {
      bVar4 = MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_RemovedCubesContainsKey
                        (this_00,*IVar3._0_4_,(MethodInfo *)0x0);
      return bVar4 == 0;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void ResetTerrain() */

void Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_ResetTerrain
               (RuntimeEventManager *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cubeModelFineGrainedTerrain;
  if (pMVar1 != (MVCubeModelFineGrainedTerrain *)0x0) {
    (*(code *)(pMVar1->klass->vtable).Reset.method)
              (pMVar1,(pMVar1->klass->vtable).OnObjectLinkChanged.methodPtr);
    pMVar2 = (this->fields).cubeModelPrototypeTerrain;
    if (pMVar2 != (MVCubeModelPrototypeTerrain *)0x0) {
      (*(code *)(pMVar2->klass->vtable).Reset.method)
                (pMVar2,(pMVar2->klass->vtable).OnObjectLinkChanged.methodPtr);
      pRVar3 = (this->fields).localAccumulatedCubeDamages;
      if (pRVar3 != (RuntimeEventManager_AccumulatedCubeDamages *)0x0) {
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(pRVar3->fields).accumulatedCubeDamages;
        if (this_00 !=
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                    (this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Clear__
                    );
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean SendRemoveOneFineGrainedCube(VoxelHit, Single) */

bool Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
               (RuntimeEventManager *this,VoxelHit voxelHit,float damage,MethodInfo *method)

{
  this_08 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  id = voxelHit._36_4_;
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
code_?:
    voxelHit._60_4_ = 0;
    voxelHit.transform._0_2_ = 0xb8fc;
    voxelHit.transform._2_2_ = 0x1028;
    func_?();
  }
  else {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,voxelHit._36_4_,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObject *)0x0) {
      return 0;
    }
    bVar3 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    if (((pMVar2->klass->_1).naturalAligment < bVar3) ||
       ((MVCubeModelBase__Class *)(pMVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__MVCubeModelBase)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pMVar5 = (MVWorldObject *)0x0;
    if (bVar4) {
      pMVar5 = pMVar2;
    }
    if (pMVar5 == (MVWorldObject *)0x0) {
      return 0;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar1 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar6 = (MVCubeModelBase *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar1,id,(MethodInfo *)0x0), pMVar6 == (MVCubeModelBase *)0x0))
    goto code_?;
    bVar3 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    if (((pMVar6->klass->_1).naturalAligment < bVar3) ||
       ((MVCubeModelBase__Class *)(pMVar6->klass->_1).typeHierarchy[bVar3 - 1] !=
        TypeInfo__MVCubeModelBase)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    this_09 = (MVCubeModelBase *)0x0;
    if (bVar4) {
      this_09 = pMVar6;
    }
    if (this_09 == (MVCubeModelBase *)0x0) goto code_?;
    IVar7.z = voxelHit.cubePos.x;
    IVar7._0_4_ = voxelHit.normal.z;
    pCVar8 = (Collider *)voxelHit.normal.z;
    iVar9 = voxelHit.cubePos.x;
    this_02 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)MVCubeModelBase::MVCubeModelBase_GetCube(this_09,IVar7,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
      func_?();
    }
    bVar10 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                      ((CubeBase *)this_02,(CubeBase *)0x0,(MethodInfo *)0x0);
    if (bVar10 != 0) {
      worldPos_00.y._2_2_ = in_stack_11;
      worldPos_00.y._0_2_ = in_stack_12;
      worldPos_00.x = (float)&stack0xffffffe8;
      worldPos_00.z = voxelHit.point.x;
      normal_00.y = voxelHit.point.z;
      normal_00.x = voxelHit.point.y;
      normal_00.z._0_2_ = SUB42(voxelHit.normal.x,0);
      normal_00.z._2_2_ = (short)((uint)voxelHit.normal.x >> 0x10);
      IVar7 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_WorldPosToFineGrainedLocalPos_1
                         (worldPos_00,normal_00,(MethodInfo *)voxelHit.normal.y);
      this_00 = (this->fields).cubeModelFineGrainedTerrain;
      if (this_00 == (MVCubeModelFineGrainedTerrain *)0x0) goto code_?;
      this._0_2_ = (IVar7._0_4_)->z;
      in_stack_12 = 0;
      in_stack_11 = 0;
      iVar9 = 0x1028;
      this_02 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)MVCubeModelBase::MVCubeModelBase_GetCube
                             ((MVCubeModelBase *)this_00,*IVar7._0_4_,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
        voxelHit.normal.x = (float)TypeInfo__MV__WorldObject__CubeBase;
        voxelHit.point.z = (float)&UNK_?;
        func_?();
      }
      voxelHit.normal.x = 0.0;
      voxelHit.point.z = 0.0;
      voxelHit.point.x = (float)&UNK_?;
      voxelHit.point.y = (float)this_02;
      bVar10 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                        ((CubeBase *)this_02,(CubeBase *)0x0,(MethodInfo *)0x0);
      if (bVar10 != 0) {
        return 0;
      }
    }
    voxelHit.cubePos.x = 0;
    voxelHit.cubePos.y = 0;
    voxelHit.normal.y = (float)&UNK_?;
    voxelHit.normal.z = (float)this_09;
    pOVar13 = System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System
              ::Object,System::Object]::
              Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                        ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                          *)this_09,(MethodInfo *)0x0);
    method_00 = voxelHit.normal.y;
    fVar14 = voxelHit.point.x;
    if (pOVar13 == (Object *)0x8) {
      voxelHit.face._0_2_ = 0;
      voxelHit.face._2_2_ = 0;
      voxelHit.normal.z = voxelHit.point.z;
      voxelHit.cubePos.x = SUB42(voxelHit.normal.x,0);
      voxelHit.cubePos.y = (int16_t)((uint)voxelHit.normal.x >> 0x10);
      voxelHit._28_4_ = voxelHit.normal.y;
      voxelHit.normal.x = voxelHit.point.x;
      voxelHit.normal.y = voxelHit.point.y;
      voxelHit.point.x = (float)&UNK_?;
      worldPos.y = (float)CONCAT22(in_stack_11,in_stack_12);
      worldPos.x = (float)&stack0xffffffe8;
      worldPos.z = fVar14;
      normal.y = voxelHit.point.z;
      normal.x = voxelHit.point.y;
      normal.z._0_2_ = voxelHit.cubePos.x;
      normal.z._2_2_ = voxelHit.cubePos.y;
      voxelHit.point.y = (float)&stack0xffffffe8;
      voxelHit.point.z = (float)CONCAT22(in_stack_11,in_stack_12);
      IVar7 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
               CubeMathFunctions_WorldPosToFineGrainedLocalPos_1
                         (worldPos,normal,(MethodInfo *)method_00);
      pCVar8 = (Collider *)*IVar7._0_4_;
      iVar9 = *(int16_t *)(IVar7._0_4_ + 1);
    }
    pRVar15 = (this_08->fields).localAccumulatedCubeDamages;
    if (pRVar15 == (RuntimeEventManager_AccumulatedCubeDamages *)0x0) goto code_?;
    voxelHit.transform._0_2_ = iVar9;
    if (cRam_? == '\0') {
      voxelHit._60_4_ = _UNK_?;
      voxelHit.transform._0_2_ = 0xb559;
      voxelHit.transform._2_2_ = 0x1028;
      func_?();
      voxelHit.transform._0_2_ = iVar9;
      cRam_? = '\x01';
    }
    pDVar16 = (pRVar15->fields).accumulatedCubeDamages;
    if (pDVar16 ==
        (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
         *)0x0) goto code_?;
    voxelHit._60_4_ =
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__ContainsKey_MV__WorldObject__IntVector_
    ;
    voxelHit.cube = (Cube *)&UNK_?;
    key_00.z = (int16_t)voxelHit.transform;
    key_00._0_4_ = pCVar8;
    voxelHit.distance = (float)pDVar16;
    voxelHit.collider = pCVar8;
    iVar9 = (int16_t)voxelHit.transform;
    bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar16,key_00,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar10 == 0) {
      pDVar16 = (pRVar15->fields).accumulatedCubeDamages;
      this_03 = (ScaleAnimationBase *)func_?();
      voxelHit.cubePos.x = 0;
      voxelHit.cubePos.y = 0;
      voxelHit.normal.z = (float)&UNK_?;
      pvVar17 = (void *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                  ((MethodInfo *)0x0);
      voxelHit.cubePos.x = 0;
      voxelHit.cubePos.y = 0;
      (this_03->fields)._._._._.m_CachedPtr = pvVar17;
      voxelHit.normal.y = (float)&UNK_?;
      voxelHit.normal.z = (float)this_03;
      ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,(MethodInfo *)voxelHit._28_4_);
      if (pDVar16 ==
          (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
           *)0x0) goto code_?;
      voxelHit.woId =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Add_MV__WorldObject__IntVector__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage_
      ;
      voxelHit.cubePos.x = (int16_t)pDVar16;
      voxelHit.cubePos.y = (int16_t)((uint)pDVar16 >> 0x10);
      voxelHit.normal.z = (float)&UNK_?;
      key.z = iVar9;
      key._0_4_ = pCVar8;
      voxelHit._28_4_ = pCVar8;
      voxelHit.face._0_2_ = iVar9;
      voxelHit._36_4_ = this_03;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
      Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Add
                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar16,key,
                 (Object *)this_03,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Add_MV__WorldObject__IntVector__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage_
                );
      this_08 = (RuntimeEventManager *)CONCAT22(this._2_2_,(int16_t)this);
    }
    voxelHit.transform._0_2_ = iVar9;
    pDVar16 = (pRVar15->fields).accumulatedCubeDamages;
    if (pDVar16 ==
        (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
         *)0x0) goto code_?;
    voxelHit._60_4_ =
         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Item_MV__WorldObject__IntVector_
    ;
    voxelHit.cube = (Cube *)&UNK_?;
    key_01.z = (int16_t)voxelHit.transform;
    key_01._0_4_ = pCVar8;
    voxelHit.distance = (float)pDVar16;
    voxelHit.collider = pCVar8;
    pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::
              Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar16,key_01,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Item_MV__WorldObject__IntVector_
                        );
    if (pOVar13 == (Object *)0x0) goto code_?;
    pOVar18 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pMVar19 = (MonitorData *)((float)pOVar13[1].monitor + voxelHit.interactionFlags._4_4_);
    pOVar13[1].klass = pOVar18;
    pOVar13[1].monitor = pMVar19;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    voxelHit.transform._0_2_ = 0;
    voxelHit.transform._2_2_ = 0;
    voxelHit.collider = (Collider *)&UNK_?;
    this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_04 == (MVNetworkGame *)0x0) goto code_?;
    voxelHit._60_4_ = 0;
    voxelHit.transform._0_2_ = (int16_t)this_04;
    voxelHit.transform._2_2_ = (undefined2)((uint)this_04 >> 0x10);
    voxelHit.collider = (Collider *)&UNK_?;
    object = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)this_04,(MethodInfo *)0x0);
    voxelHit._60_4_ = TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>;
    voxelHit.transform._0_2_ = 0xb686;
    voxelHit.transform._2_2_ = 0x1028;
    this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    puVar20 = &UNK_?;
    pUVar21 = this_05;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_05,(Object *)object,
               MethodInfo__MVMaterialRepository__GetMaterialPhysicalProperties_unsigned_char_,
               MethodInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>__Func_System__Object__void__
              );
    iVar9 = (int16_t)((uint)pUVar21 >> 0x10);
    if (cRam_? == '\0') {
      voxelHit.normal.z = _UNK_?;
      voxelHit.normal.y = (float)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
      voxelHit.normal.z = (float)TypeInfo__MV__WorldObject__CubeBase;
      voxelHit.normal.y = (float)&UNK_?;
      func_?();
    }
    voxelHit.normal.z = 0.0;
    voxelHit.normal.y = 0.0;
    voxelHit.point.z = (float)&UNK_?;
    voxelHit.normal.x = (float)this_02;
    bVar10 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                      ((CubeBase *)this_02,(CubeBase *)0x0,(MethodInfo *)0x0);
    if (bVar10 == 0) {
      return 0;
    }
    if (this_02 ==
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) goto code_?;
    voxelHit.face._0_2_ = 0;
    voxelHit.face._2_2_ = 0;
    voxelHit.cubePos.x = -0x4901;
    voxelHit.cubePos.y = 0x1028;
    voxelHit._28_4_ = this_02;
    pOVar13 = System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        (this_02,(MethodInfo *)0x0);
    if (pOVar13 == (Object *)0x0) goto code_?;
    if (pOVar13[1].monitor != (MonitorData *)0x0) {
      if (this_05 !=
          (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)0x0)
      {
        voxelHit.woId =
             (int32_t)
             MethodInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>__Invoke_unsigned_char_
        ;
        voxelHit._37_3_ = (undefined3)((uint)this_05 >> 8);
        voxelHit.isCubeHit = *(uint8_t *)&pOVar13[2].klass;
        voxelHit._28_4_ = &stack0xffffffc0;
        voxelHit.face._0_2_ = (int16_t)this_05;
        voxelHit.face._2_2_ = (undefined2)((uint)this_05 >> 0x10);
        voxelHit.cubePos.x = -0x48c8;
        voxelHit.cubePos.y = 0x1028;
        pPVar22 = System.Core.dll::System::Func`2[Byte,MV::WorldObject::PhysicalProperties]::
                  Func_2_Byte_MV_WorldObject_PhysicalProperties__Invoke
                            ((PhysicalProperties *)voxelHit._28_4_,
                             (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)this_05,
                             *(uint8_t *)&pOVar13[2].klass,
                             MethodInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>__Invoke_unsigned_char_
                            );
        fVar14 = pPVar22->toughness;
        if (fVar14 == _UNK_?) {
          return 0;
        }
        if (fVar14 <= (float)pMVar19) {
          voxelHit.transform._0_2_ =
               (int16_t)TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
          voxelHit.transform._2_2_ =
               (undefined2)
               ((uint)TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent >> 0x10);
          voxelHit.collider = (Collider *)&UNK_?;
          method_01 = (MethodInfo *)func_?();
          position_00.z = iVar9;
          position_00._0_4_ = puVar20;
          MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
          SingleCubeFineGrainedEvent__ctor_1
                    ((SingleCubeFineGrainedEvent *)method_01,position_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          bVar10 = RuntimeEventManager_HandleEvent
                            (this_08,(SingleCubeFineGrainedEvent *)method_01,(MethodInfo *)0x0);
          if (bVar10 == 0) {
            return 1;
          }
          if (method_01 != (MethodInfo *)0x0) {
            RVar23 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                     RuntimeEvent_get_RuntimeEventType((RuntimeEvent *)method_01,(MethodInfo *)0x0);
            uVar24 = (undefined2)((uint)method_01 >> 0x10);
            if ((char)RVar23 == '\x02') {
              voxelHit.point.x = 0.0;
              uVar25 = uVar24;
              IVar7 = CellCursorCubeMesh::CellCursorCubeMesh_get_LocalPos
                                 ((CellCursorCubeMesh *)&voxelHit.field_0x3c,method_01);
              voxelHit.point.z = 0.0;
              voxelHit.point.y = (float)(this_08->fields).cubeModelFineGrainedTerrain;
              voxelHit.point.x = (float)(this_08->fields).cubeModelPrototypeTerrain;
              this._0_2_ = (int16_t)*IVar7._0_4_;
              fineGrainedPosition.z = (int16_t)this;
              fineGrainedPosition._0_4_ = &voxelHit.field_0x3c;
              IVar7 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                       CubeMathFunctions_FromLocalPosToLocalPos
                                 (fineGrainedPosition,
                                  (ICubeModel *)CONCAT22(uVar25,*(undefined2 *)(IVar7._0_4_ + 1)),
                                  (ICubeModel *)voxelHit.point.x,(MethodInfo *)voxelHit.point.y);
              pIVar26 = IVar7._0_4_;
              this_01 = (this_08->fields).cubeModelPrototypeTerrain;
              if (this_01 == (MVCubeModelPrototypeTerrain *)0x0) goto code_?;
              voxelHit.normal.z = *(float *)pIVar26;
              voxelHit.cubePos.x = pIVar26->z;
              voxelHit.cubePos.z = 0;
              voxelHit._30_2_ = 0;
              voxelHit.normal.x = (float)&UNK_?;
              voxelHit.normal.y = (float)this_01;
              bVar10 = MVCubeModelPrototypeTerrain::
                      MVCubeModelPrototypeTerrain_RemovedCubesContainsKey
                                (this_01,*pIVar26,(MethodInfo *)0x0);
              if (bVar10 == 0) {
                voxelHit.cube = (Cube *)0x0;
                voxelHit.woId = 5;
                voxelHit.face._0_2_ = -0x474e;
                voxelHit.face._2_2_ = 0x1028;
                voxelHit._36_4_ = method_01;
                MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
                SingleCubeFineGrainedEvent_OverrideRuntimeType
                          ((SingleCubeFineGrainedEvent *)method_01,
                           RuntimeEventType__Enum_FineGrainedSingleCubeRemovedAddedFineGrainedCube,
                           (MethodInfo *)0x0);
              }
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              voxelHit.transform._0_2_ = (int16_t)TypeInfo__MVGameControllerBase;
              voxelHit.transform._2_2_ = (undefined2)((uint)TypeInfo__MVGameControllerBase >> 0x10);
              voxelHit.collider = (Collider *)&UNK_?;
              func_?();
            }
            voxelHit.transform._0_2_ = 0;
            voxelHit.transform._2_2_ = 0;
            voxelHit.collider = (Collider *)&UNK_?;
            this_07 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_07 != (MVNetworkGame_OperationRequests *)0x0) {
              voxelHit._60_4_ = 0;
              voxelHit.transform._0_2_ = (int16_t)method_01;
              voxelHit.distance = (float)&UNK_?;
              voxelHit.collider = (Collider *)this_07;
              voxelHit.transform._2_2_ = uVar24;
              MVNetworkGame+OperationRequests::
              MVNetworkGame_OperationRequests_SendRuntimeEventOperation
                        (this_07,(RuntimeEvent *)method_01,(MethodInfo *)0x0);
              return 1;
            }
          }
        }
        else {
          if (fVar14 <= (float)pMVar19) {
            return 0;
          }
          if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
            voxelHit.transform._0_2_ = (int16_t)TypeInfo__PrefabPool;
            voxelHit.transform._2_2_ = (undefined2)((uint)TypeInfo__PrefabPool >> 0x10);
            voxelHit.collider = (Collider *)&UNK_?;
            func_?();
          }
          voxelHit.transform._0_2_ = 0;
          voxelHit.transform._2_2_ = 0;
          voxelHit.collider = (Collider *)&UNK_?;
          this_06 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
          if (this_06 != (PrefabPool *)0x0) {
            voxelHit._60_4_ = 0;
            voxelHit.transform._0_2_ = (int16_t)this_06;
            voxelHit.transform._2_2_ = (undefined2)((uint)this_06 >> 0x10);
            voxelHit.collider = (Collider *)&UNK_?;
            voxelHit.distance =
                 (float)PrefabPool::PrefabPool_get_ParticleCubeDust(this_06,(MethodInfo *)0x0);
            voxelHit.collider = (Collider *)CONCAT22(in_stack_11,in_stack_12);
            voxelHit.interactionFlags._4_4_ = 0.0;
            voxelHit.interactionFlags._0_4_ = 0x3f800000;
            voxelHit.transform._0_2_ = SUB42(voxelHit.point.x,0);
            voxelHit.transform._2_2_ = (undefined2)((uint)voxelHit.point.x >> 0x10);
            voxelHit._60_4_ = voxelHit.point.y;
            voxelHit.cube = (Cube *)&UNK_?;
            position.y._0_2_ = (int16_t)voxelHit.transform;
            position.x = (float)voxelHit.collider;
            position.y._2_2_ = voxelHit.transform._2_2_;
            position.z = voxelHit.point.y;
            SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                      ((ParticleSystem *)voxelHit.distance,position,1.0,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
      goto code_?;
    }
  }
  voxelHit._60_4_ = 0;
  voxelHit.transform._0_2_ = 0;
  voxelHit.transform._2_2_ = 0;
  voxelHit.collider = (Collider *)&UNK_?;
  voxelHit.collider = (Collider *)func_?();
  voxelHit.distance = (float)&UNK_?;
  func_?();
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  bVar10 = (*pcVar27)();
  return bVar10;
}


/* Void SendRuntimeEvent(ExplosionEvent) */

void Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent
               (RuntimeEventManager *this,ExplosionEvent *explosion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = RuntimeEventManager_HandleEvent_1(this,explosion,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if (in_stack_3 != (int *)0x0) {
      value = (Object *)(**(code **)(*in_stack_3 + 0xe0))();
      if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__Add
                  (this_00,0xf5,value,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        piVar4 = *(int **)(in_stack_5 + 0x10);
        if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
          func_?();
        }
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x110))(piVar4,0x34,this_00);
          return;
        }
      }
    }
    func_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SendRuntimeEvent(SingleCubeFineGrainedEvent) */

void Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent_1
               (RuntimeEventManager *this,SingleCubeFineGrainedEvent *singleCubeFineGrainedEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = RuntimeEventManager_HandleEvent(this,singleCubeFineGrainedEvent,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (singleCubeFineGrainedEvent != (SingleCubeFineGrainedEvent *)0x0) {
    RVar2 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
            RuntimeEvent_get_RuntimeEventType
                      ((RuntimeEvent *)singleCubeFineGrainedEvent,(MethodInfo *)0x0);
    if ((char)RVar2 == '\x02') {
      pSVar3 = singleCubeFineGrainedEvent;
      IVar4 = CellCursorCubeMesh::CellCursorCubeMesh_get_LocalPos
                        ((CellCursorCubeMesh *)&stack0xfffffff4,
                         (MethodInfo *)singleCubeFineGrainedEvent);
      IVar5.z = (int16_t)*IVar4._0_4_;
      IVar5._0_4_ = &stack0xfffffff4;
      IVar5 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
              CubeMathFunctions_FromLocalPosToLocalPos
                        (IVar5,(ICubeModel *)
                               CONCAT22((short)((uint)pSVar3 >> 0x10),
                                        *(undefined2 *)(IVar4._0_4_ + 1)),
                         (ICubeModel *)(this->fields).cubeModelPrototypeTerrain,
                         (MethodInfo *)(this->fields).cubeModelFineGrainedTerrain);
      this_00 = (this->fields).cubeModelPrototypeTerrain;
      if (this_00 == (MVCubeModelPrototypeTerrain *)0x0) goto code_?;
      bVar1 = MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_RemovedCubesContainsKey
                        (this_00,*IVar5._0_4_,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
        SingleCubeFineGrainedEvent_OverrideRuntimeType
                  (singleCubeFineGrainedEvent,
                   RuntimeEventType__Enum_FineGrainedSingleCubeRemovedAddedFineGrainedCube,
                   (MethodInfo *)0x0);
      }
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SendRuntimeEventOperation
                (this_01,(RuntimeEvent *)singleCubeFineGrainedEvent,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* RuntimeEventManager() */

void Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager__ctor
               (RuntimeEventManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)
            func_?(TypeInfo__RuntimeEventManager__AccumulatedCubeDamages);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
  ;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
            );
  (this_00->fields)._._._._.m_CachedPtr = this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this_00,UpdatePriority__Enum_UPDATEBUCKET_STANDARD
             ,1,(MethodInfo *)0x0);
  pSRam00000010 = this_00;
  return;
}

