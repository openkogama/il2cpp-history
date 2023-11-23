
/* Void ExecuteRuntimeEventLocal(ExplosionEvent) */

void Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_ExecuteRuntimeEventLocal
               (RuntimeEventManager *this,ExplosionEvent *explosion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>);
    func_?(0x5690);
    cRam_? = '\x01';
  }
  if (explosion != (ExplosionEvent *)0x0) {
    pEVar1 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
             ExplosionEvent_get_ExplosionValuesStruct
                       ((ExplosionEvent_ExplosionValues *)&stack0xffffffd4,explosion,
                        (MethodInfo *)0x0);
    radius = pEVar1->radius;
    centerDamage = pEVar1->centerDamage;
    damageFallOffType = pEVar1->damageFallOffType;
    cm = (this->fields).cubeModelPrototypeTerrain;
    fineGrainedTerrainWorldObject = (this->fields).cubeModelFineGrainedTerrain;
    fineGrainedTerrainLocalPos = (explosion->fields)._.position;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      object = (pMVar2->fields)._MaterialRepository_k__BackingField;
      this_00 = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)func_?();
      mscorlib.dll::System::Func`2[Byte,MV::WorldObject::PhysicalProperties]::
      Func_2_Byte_MV_WorldObject_PhysicalProperties___ctor
                (this_00,(Object *)object,
                 MethodInfo__MVMaterialRepository__GetMaterialPhysicalProperties_unsigned_char_,
                 (MethodInfo *)0x0);
      bVar3 = RemoveCubes+RemoveCubesWithinRadius::
              RemoveCubes_RemoveCubesWithinRadius_HandleRemoveCubes
                        ((MVCubeModelBase *)cm,(float)radius,fineGrainedTerrainLocalPos,
                         (float)centerDamage,damageFallOffType,
                         (MVCubeModelBase *)fineGrainedTerrainWorldObject,this_00,(MethodInfo *)0x0)
      ;
      if ((bVar3 == 0) || ((this->fields).doEffects == 0)) {
        return;
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PrefabPool);
        cRam_? = '\x01';
      }
      pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar4 != (PrefabPool *)0x0) {
        particlePrefab = (pPVar4->fields).particleCubeDust;
        pVVar5 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                 CubeMathFunctions_FineGrainedLocalPosToWorldPos
                           ((Vector3 *)&stack0xffffffd4,(explosion->fields)._.position,
                            (MethodInfo *)0x0);
        radius_00 = _UNK_?;
        if (_UNK_? <= (float)radius) {
          radius_00 = (float)radius;
        }
        SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                  (particlePrefab,*pVVar5,radius_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean HandleEvent(SingleCubeFineGrainedEvent) */

bool Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_HandleEvent
               (RuntimeEventManager *this,SingleCubeFineGrainedEvent *singleCubeFineGrainedEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if (singleCubeFineGrainedEvent != (SingleCubeFineGrainedEvent *)0x0) {
    if ((singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField == 1) {
      uVar1 = (singleCubeFineGrainedEvent->fields)._.position.x;
      pMVar2 = (this->fields).cubeModelFineGrainedTerrain;
      iVar3 = (singleCubeFineGrainedEvent->fields)._.position.z;
      material = (singleCubeFineGrainedEvent->fields).material;
      this_00 = (CubeBase *)func_?(TypeInfo__MV__WorldObject__CubeBase);
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor_2
                (this_00,material,(MethodInfo *)0x0);
      if (pMVar2 == (MVCubeModelFineGrainedTerrain *)0x0) goto code_?;
      (*(code *)(pMVar2->klass->vtable).AddCubeNetworkUpdate_1.method)
                (pMVar2,uVar1,iVar3,(short)this_00,
                 (pMVar2->klass->vtable).DirtyChunksRegeneratedHandler.methodPtr);
    }
    else if (((singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField == 2) ||
            ((singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField == 5)) {
      bVar4 = RemoveCubes+RemoveOneCube::RemoveCubes_RemoveOneCube_HandleRemoveOneCube
                        ((singleCubeFineGrainedEvent->fields)._.position,
                         (ICubeModel *)(this->fields).cubeModelPrototypeTerrain,
                         (ICubeModel *)(this->fields).cubeModelFineGrainedTerrain,(MethodInfo *)0x0)
      ;
      if ((bVar4 != 0) && ((this->fields).doEffects != 0)) {
        iVar5 = func_?();
        if (iVar5 != 0) {
          particlePrefab = *(ParticleSystem **)(iVar5 + 0x218);
          pVVar6 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                   CubeMathFunctions_FineGrainedLocalPosToWorldPos
                             ((Vector3 *)&stack0xffffffec,
                              (singleCubeFineGrainedEvent->fields)._.position,(MethodInfo *)0x0);
          SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                    (particlePrefab,*pVVar6,1.0,(MethodInfo *)0x0);
          return 1;
        }
        goto code_?;
      }
    }
    return 1;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar4 = (*pcVar7)();
  return bVar4;
}


/* Boolean HandleEvent(ExplosionEvent) */

bool Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_HandleEvent_1
               (RuntimeEventManager *this,ExplosionEvent *explosion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>);
    func_?(0x5690);
    cRam_? = '\x01';
  }
  if (explosion != (ExplosionEvent *)0x0) {
    pEVar1 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::
             ExplosionEvent_get_ExplosionValuesStruct
                       ((ExplosionEvent_ExplosionValues *)&stack0xffffffd4,explosion,
                        (MethodInfo *)0x0);
    radius = pEVar1->radius;
    centerDamage = pEVar1->centerDamage;
    damageFallOffType = pEVar1->damageFallOffType;
    cm = (this->fields).cubeModelPrototypeTerrain;
    fineGrainedTerrainWorldObject = (this->fields).cubeModelFineGrainedTerrain;
    fineGrainedTerrainLocalPos = (explosion->fields)._.position;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      object = (pMVar2->fields)._MaterialRepository_k__BackingField;
      this_00 = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)func_?();
      mscorlib.dll::System::Func`2[Byte,MV::WorldObject::PhysicalProperties]::
      Func_2_Byte_MV_WorldObject_PhysicalProperties___ctor
                (this_00,(Object *)object,
                 MethodInfo__MVMaterialRepository__GetMaterialPhysicalProperties_unsigned_char_,
                 (MethodInfo *)0x0);
      bVar3 = RemoveCubes+RemoveCubesWithinRadius::
              RemoveCubes_RemoveCubesWithinRadius_HandleRemoveCubes
                        ((MVCubeModelBase *)cm,(float)radius,fineGrainedTerrainLocalPos,
                         (float)centerDamage,damageFallOffType,
                         (MVCubeModelBase *)fineGrainedTerrainWorldObject,this_00,(MethodInfo *)0x0)
      ;
      if ((bVar3 == 0) || ((this->fields).doEffects == 0)) {
        return bVar3;
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PrefabPool);
        cRam_? = '\x01';
      }
      pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar4 != (PrefabPool *)0x0) {
        particlePrefab = (pPVar4->fields).particleCubeDust;
        pVVar5 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                 CubeMathFunctions_FineGrainedLocalPosToWorldPos
                           ((Vector3 *)&stack0xffffffd4,(explosion->fields)._.position,
                            (MethodInfo *)0x0);
        radius_00 = _UNK_?;
        if (_UNK_? <= (float)radius) {
          radius_00 = (float)radius;
        }
        SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                  (particlePrefab,*pVVar5,radius_00,(MethodInfo *)0x0);
        return bVar3;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* Boolean IsRemovingAddedFineGrainedCube(SingleCubeFineGrainedEvent) */

bool Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_IsRemovingAddedFineGrainedCube
               (RuntimeEventManager *this,SingleCubeFineGrainedEvent *singleCubeFineGrainedEvent,
               MethodInfo *method)

{
  if (singleCubeFineGrainedEvent != (SingleCubeFineGrainedEvent *)0x0) {
    if ((singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField != 2) {
      return 0;
    }
    uVar1 = (singleCubeFineGrainedEvent->fields)._.position.x;
    IVar2.z = uVar1;
    IVar2._0_4_ = &stack0xfffffff4;
    IVar2 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
            CubeMathFunctions_FromLocalPosToLocalPos
                      (IVar2,(ICubeModel *)
                             CONCAT22((short)((uint)in_stack_3 >> 0x10),
                                      (singleCubeFineGrainedEvent->fields)._.position.z),
                       (ICubeModel *)(this->fields).cubeModelPrototypeTerrain,
                       (MethodInfo *)(this->fields).cubeModelFineGrainedTerrain);
    this_00 = (this->fields).cubeModelPrototypeTerrain;
    if (this_00 != (MVCubeModelPrototypeTerrain *)0x0) {
      bVar4 = MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_RemovedCubesContainsKey
                        (this_00,*IVar2._0_4_,(MethodInfo *)0x0);
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
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Clear__
                         );
          cRam_? = '\x01';
        }
        this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)(pRVar3->fields).accumulatedCubeDamages;
        if (this_00 !=
            (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
          StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
          Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                    (this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Clear__
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean SendRemoveOneFineGrainedCube(VoxelHit, Single) */

bool Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
               (RuntimeEventManager *this,VoxelHit voxelHit,float damage,MethodInfo *method)

{
  fVar1 = voxelHit.point.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>);
    func_?(&TypeInfo__MVCubeModelBase);
    func_?(&MethodInfo__MVMaterialRepository__GetMaterialPhysicalProperties_unsigned_char_)
    ;
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    cRam_? = '\x01';
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar2,voxelHit._36_4_,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObject *)0x0) {
      return 0;
    }
    if ((pMVar3->klass->_1).naturalAligment < (TypeInfo__MVCubeModelBase->_1).naturalAligment) {
      return 0;
    }
    if ((MVCubeModelBase__Class *)
        (pMVar3->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] !=
        TypeInfo__MVCubeModelBase) {
      return 0;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar2 != (MVWorldObjectClientManager *)0x0) &&
       (this_00 = (MVCubeModelBase *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar2,voxelHit._36_4_,(MethodInfo *)0x0),
       this_00 != (MVCubeModelBase *)0x0)) {
      if (((this_00->klass->_1).naturalAligment < (TypeInfo__MVCubeModelBase->_1).naturalAligment)
         || ((MVCubeModelBase__Class *)
             (this_00->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1]
             != TypeInfo__MVCubeModelBase)) goto code_?;
      iVar4 = voxelHit.cubePos.x;
      pCVar5 = MVCubeModelBase::MVCubeModelBase_GetCube
                         (this_00,voxelHit._20_6_,
                          (MethodInfo *)((uint)(ushort)voxelHit.cubePos.x << 0x10));
      uVar6 = SUB42(pCVar5,0);
      uStack_7 = (undefined2)((uint)pCVar5 >> 0x10);
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        pCVar5 = (Cube *)CONCAT22(uStack_7,uVar6);
      }
      fVar8 = 0.0;
      this = (RuntimeEventManager *)0x0;
      bVar9 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                        ((CubeBase *)pCVar5,(CubeBase *)0x0,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        voxelHit.point.z = 0.0;
        voxelHit.point.y = voxelHit.normal.y;
        this = (RuntimeEventManager *)voxelHit.normal.y;
        uVar10 = CONCAT44(fVar1,&stack0xffffffe8);
        worldPos_00.z = voxelHit.normal.x;
        worldPos_00.x = (float)&stack0xffffffe8;
        worldPos_00.y = fVar1;
        normal.y = fVar1;
        normal.x = voxelHit.normal.y;
        normal.z = voxelHit.normal.x;
        IVar11 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                 CubeMathFunctions_WorldPosToFineGrainedLocalPos_1
                           (worldPos_00,normal,(MethodInfo *)voxelHit.normal.y);
        iVar4 = (int16_t)((ulonglong)uVar10 >> 0x10);
        if (*(MVCubeModelBase **)((int)voxelHit.normal.y + 0xc) == (MVCubeModelBase *)0x0)
        goto code_?;
        voxelHit.face._0_2_ = (IVar11._0_4_)->z;
        pCVar5 = MVCubeModelBase::MVCubeModelBase_GetCube
                           (*(MVCubeModelBase **)((int)voxelHit.normal.y + 0xc),*IVar11._0_4_,
                            (MethodInfo *)0x0);
        uVar6 = SUB42(pCVar5,0);
        uStack_7 = (undefined2)((uint)pCVar5 >> 0x10);
        fVar8 = fVar1;
        if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          pCVar5 = (Cube *)CONCAT22(uStack_7,uVar6);
          fVar8 = fVar1;
        }
        bVar9 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                          ((CubeBase *)pCVar5,(CubeBase *)0x0,(MethodInfo *)0x0);
        voxelHit.point.x = voxelHit.normal.x;
        if (bVar9 != 0) {
          return 0;
        }
      }
      if ((this_00->fields)._._.type == 8) {
        voxelHit.face._0_2_ = 0x330a;
        voxelHit.face._2_2_ = 0x1055;
        worldPos.y = fVar8;
        worldPos.x = (float)&stack0xffffffe8;
        worldPos.z = voxelHit.point.x;
        normal_00.y = voxelHit.point.z;
        normal_00.x = voxelHit.point.y;
        normal_00.z = voxelHit.normal.x;
        IVar11 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                 CubeMathFunctions_WorldPosToFineGrainedLocalPos_1
                           (worldPos,normal_00,(MethodInfo *)voxelHit.normal.y);
        voxelHit.cubePos.x = *(int16_t *)(IVar11._0_4_ + 1);
        voxelHit.normal.z = *IVar11._0_4_;
        iVar4 = voxelHit.cubePos.x;
      }
      pRVar12 = (this->fields).localAccumulatedCubeDamages;
      if (pRVar12 != (RuntimeEventManager_AccumulatedCubeDamages *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pDVar13 = (pRVar12->fields).accumulatedCubeDamages;
        if (pDVar13 !=
            (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
             *)0x0) {
          IVar11.z = voxelHit.cubePos.x;
          IVar11._0_4_ = voxelHit.normal.z;
          bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  IntVector,System::Object]::
                  Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                            ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar13,IVar11,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__ContainsKey_MV__WorldObject__IntVector_
                            );
          if (bVar9 == 0) {
            pDVar13 = (pRVar12->fields).accumulatedCubeDamages;
            pOVar14 = (Object *)func_?();
            pOVar15 = (Object__Class *)
                      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                ((MethodInfo *)0x0);
            pOVar14[1].klass = pOVar15;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      (pOVar14,ExceptionArgument__Enum_obj,
                       (MethodInfo *)CONCAT22(voxelHit.face._2_2_,(int16_t)voxelHit.face));
            if (pDVar13 ==
                (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                 *)0x0) goto code_?;
            key.z = voxelHit.cubePos.x;
            key._0_4_ = voxelHit.normal.z;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Add
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar13,key,pOVar14,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Add_MV__WorldObject__IntVector__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage_
                      );
          }
          pDVar13 = (pRVar12->fields).accumulatedCubeDamages;
          if ((pDVar13 !=
               (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                *)0x0) &&
             (key_00.z = voxelHit.cubePos.x, key_00._0_4_ = voxelHit.normal.z,
             pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                      IntVector,System::Object]::
                      Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar13,
                                 key_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Item_MV__WorldObject__IntVector_
                                ), pOVar14 != (Object *)0x0)) {
            pOVar15 = (Object__Class *)
                      UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                ((MethodInfo *)0x0);
            pOVar14[1].klass = pOVar15;
            pOVar14[1].monitor =
                 (MonitorData *)(voxelHit.interactionFlags._4_4_ + (float)pOVar14[1].monitor);
            pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar16 != (MVNetworkGame *)0x0) {
              object = (pMVar16->fields)._MaterialRepository_k__BackingField;
              this_01 = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)func_?();
              mscorlib.dll::System::Func`2[Byte,MV::WorldObject::PhysicalProperties]::
              Func_2_Byte_MV_WorldObject_PhysicalProperties___ctor
                        (this_01,(Object *)object,
                         MethodInfo__MVMaterialRepository__GetMaterialPhysicalProperties_unsigned_char_
                         ,(MethodInfo *)0x0);
              CVar17 = RemoveCubes+RemoveOneCube::RemoveCubes_RemoveOneCube_CanRemoveCube
                                ((CubeBase *)CONCAT22(uStack_7,uVar6),4.2047188e-29,this_01,
                                 (MethodInfo *)0x0);
              if (CVar17 == CubeDamageState__Enum_NoDamage) {
                return 0;
              }
              if (CVar17 != CubeDamageState__Enum_ReceivedDamage) {
                if (CVar17 == CubeDamageState__Enum_Destroyed) {
                  this_02 = (SingleCubeFineGrainedEvent *)func_?();
                  position_00.z = iVar4;
                  position_00._0_4_ = voxelHit.normal.z;
                  MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
                  SingleCubeFineGrainedEvent__ctor_1(this_02,position_00,(MethodInfo *)0x0);
                  RuntimeEventManager_SendRuntimeEvent_1(this,this_02,(MethodInfo *)0x0);
                }
                return 1;
              }
              iVar18 = func_?();
              if (iVar18 != 0) {
                position.y = voxelHit.point.x;
                position.x = fVar8;
                position.z = voxelHit.point.y;
                SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                          (*(ParticleSystem **)(iVar18 + 0x214),position,1.0,(MethodInfo *)0x0);
                return 1;
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
  func_?();
  pcVar19 = (code *)swi(3);
  bVar9 = (*pcVar19)();
  return bVar9;
}


/* Void SendRuntimeEvent(ExplosionEvent) */

void Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent
               (RuntimeEventManager *this,ExplosionEvent *explosion,MethodInfo *method)

{
  bVar1 = RuntimeEventManager_HandleEvent_1(this,explosion,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if ((in_stack_3 != (int *)0x0) &&
       (value = (Object *)(**(code **)(*in_stack_3 + 0xe0))(),
       this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0xf5,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      piVar4 = *(int **)(in_stack_5 + 0x10);
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x110))(piVar4);
        return;
      }
    }
  }
  func_?();
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
  uVar1 = 0;
  bVar2 = RuntimeEventManager_HandleEvent(this,singleCubeFineGrainedEvent,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  if (singleCubeFineGrainedEvent != (SingleCubeFineGrainedEvent *)0x0) {
    if ((singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField == 2) {
      uVar3 = (singleCubeFineGrainedEvent->fields)._.position.x;
      uStack_4 = 0;
      IVar5.z = uVar3;
      IVar5._0_4_ = &uStack_4;
      IVar5 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
              CubeMathFunctions_FromLocalPosToLocalPos
                        (IVar5,(ICubeModel *)
                               CONCAT22(uVar1,(singleCubeFineGrainedEvent->fields)._.position.z),
                         (ICubeModel *)(this->fields).cubeModelPrototypeTerrain,
                         (MethodInfo *)(this->fields).cubeModelFineGrainedTerrain);
      this_00 = (this->fields).cubeModelPrototypeTerrain;
      if (this_00 == (MVCubeModelPrototypeTerrain *)0x0) goto code_?;
      bVar2 = MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_RemovedCubesContainsKey
                        (this_00,*IVar5._0_4_,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        UnityEngine.SharedInternalsModule.dll::UnityEngine::Bindings::NativeMethodAttribute::
        NativeMethodAttribute_set_ThrowsException
                  ((NativeMethodAttribute *)singleCubeFineGrainedEvent,5,(MethodInfo *)0x0);
      }
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
    func_?(&TypeInfo__RuntimeEventManager__AccumulatedCubeDamages);
    cRam_? = '\x01';
  }
  value = (RuntimeEventManager_AccumulatedCubeDamages *)
          func_?(TypeInfo__RuntimeEventManager__AccumulatedCubeDamages);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
                   );
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
            );
  pMVar1 = (MethodInfo *)&value->fields;
  (value->fields).accumulatedCubeDamages =
       (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
        *)this_00;
  func_?(pMVar1,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,pMVar1);
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)value,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1
             ,(MethodInfo *)0x0);
  pMVar1 = (MethodInfo *)&(this->fields).localAccumulatedCubeDamages;
  (this->fields).localAccumulatedCubeDamages = value;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
  return;
}

