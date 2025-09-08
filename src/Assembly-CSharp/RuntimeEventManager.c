
/* Void ExecuteRuntimeEventLocal(ExplosionEvent) */

void Assembly-CSharp.dll::RuntimeEventManager::RuntimeEventManager_ExecuteRuntimeEventLocal
               (RuntimeEventManager *this,ExplosionEvent *explosion,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>);
    func_?(0x8390);
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
          particlePrefab = *(ParticleSystem **)(iVar5 + 0x224);
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
    func_?(0x8390);
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
  VVar1 = voxelHit;
  if (cRam_? == '\0') {
    func_?(0x9ab4);
    func_?(&TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>);
    func_?(&TypeInfo__MVCubeModelBase);
    func_?(&MethodInfo__MVMaterialRepository__GetMaterialPhysicalProperties_unsigned_char_)
    ;
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    cRam_? = '\x01';
  }
  this_02 = (MVCubeModelBase__Class *)
            MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 != (MVCubeModelBase__Class *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Int32_System_Object_ *)(this_02->_0).name;
    uVar2 = 0;
    uVar3 = 0;
    if (this_00 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                (this_00,voxelHit._36_4_,(Object **)&stack0xfffffff4,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      this_02 = TypeInfo__MVCubeModelBase;
      piVar4 = (int *)CONCAT22(uVar3,uVar2);
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      if (*(byte *)(*piVar4 + 0xb8) < (TypeInfo__MVCubeModelBase->_1).naturalAligment) {
        return 0;
      }
      if (*(MVCubeModelBase__Class **)
           (*(int *)(*piVar4 + 100) + -4 + (uint)(TypeInfo__MVCubeModelBase->_1).naturalAligment * 4
           ) != TypeInfo__MVCubeModelBase) {
        return 0;
      }
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((this_03 != (MVWorldObjectClientManager *)0x0) &&
         (this_02 = (MVCubeModelBase__Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_03,voxelHit._36_4_,(MethodInfo *)0x0),
         this_02 != (MVCubeModelBase__Class *)0x0)) {
        pIVar5 = (this_02->_0).image;
        pMVar6 = TypeInfo__MVCubeModelBase;
        if ((*(byte *)&pIVar5[4].assembly < (TypeInfo__MVCubeModelBase->_1).naturalAligment) ||
           (*(MVCubeModelBase__Class **)
             ((pIVar5[2].typeCount - 4) + (uint)(TypeInfo__MVCubeModelBase->_1).naturalAligment * 4)
            != TypeInfo__MVCubeModelBase)) goto code_?;
        pCVar7 = MVCubeModelBase::MVCubeModelBase_GetCube
                           ((MVCubeModelBase *)this_02,voxelHit._20_6_,(MethodInfo *)0x0);
        uVar2 = SUB42(pCVar7,0);
        uVar3 = (undefined2)((uint)pCVar7 >> 0x10);
        if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
          voxelHit.point.x = (float)TypeInfo__MV__WorldObject__CubeBase;
          in_stack_8 = &UNK_?;
          func_?();
          pCVar7 = (Cube *)CONCAT22(uVar3,uVar2);
        }
        bVar9 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                          ((CubeBase *)pCVar7,(CubeBase *)0x0,(MethodInfo *)0x0);
        if (bVar9 != 0) {
          worldPos.y = (float)in_stack_8;
          worldPos.x = (float)&stack0xffffffe8;
          worldPos.z = voxelHit.point.x;
          IVar10 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                   CubeMathFunctions_WorldPosToFineGrainedLocalPos_1
                             (worldPos,VVar1._4_12_,(MethodInfo *)voxelHit.normal.y);
          this_01 = (this->fields).cubeModelFineGrainedTerrain;
          in_stack_11 = (IVar10._0_4_)->z;
          if (this_01 == (MVCubeModelFineGrainedTerrain *)0x0) goto code_?;
          pCVar7 = MVCubeModelBase::MVCubeModelBase_GetCube
                             ((MVCubeModelBase *)this_01,*IVar10._0_4_,(MethodInfo *)0x0);
          uVar2 = SUB42(pCVar7,0);
          uVar3 = (undefined2)((uint)pCVar7 >> 0x10);
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MV__WorldObject__CubeBase);
            pCVar7 = (Cube *)CONCAT22(uVar3,uVar2);
          }
          bVar9 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                            ((CubeBase *)pCVar7,(CubeBase *)0x0,(MethodInfo *)0x0);
          if (bVar9 != 0) {
            return 0;
          }
        }
        if ((this_02->_0).implementedInterfaces == (Il2CppClass **)0x8) {
          in_stack_11 = 0x5f55;
          in_stack_12 = 0x1068;
          worldPos_00.y = (float)in_stack_8;
          worldPos_00.x = (float)&stack0xffffffe8;
          worldPos_00.z = voxelHit.point.x;
          IVar10 = MVWorldObject.dll::MV::WorldObject::CubeMathFunctions::
                   CubeMathFunctions_WorldPosToFineGrainedLocalPos_1
                             (worldPos_00,VVar1._4_12_,(MethodInfo *)voxelHit.normal.y);
          voxelHit.cubePos.x = *(int16_t *)(IVar10._0_4_ + 1);
          voxelHit.normal.z = *IVar10._0_4_;
        }
        this_02 = (MVCubeModelBase__Class *)(this->fields).localAccumulatedCubeDamages;
        if (this_02 != (MVCubeModelBase__Class *)0x0) {
          if (cRam_? == '\0') {
            func_?(&
                            TypeInfo__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage
                           );
            func_?(0x7344);
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__ContainsKey_MV__WorldObject__IntVector_
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Item_MV__WorldObject__IntVector_
                           );
            cRam_? = '\x01';
          }
          pDVar13 = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)(this_02->_0).name;
          if (pDVar13 != (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0) {
            IVar10.z = voxelHit.cubePos.x;
            IVar10._0_4_ = voxelHit.normal.z;
            bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                    IntVector,System::Object]::
                    Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                              (pDVar13,IVar10,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__ContainsKey_MV__WorldObject__IntVector_
                              );
            if (bVar9 == 0) {
              pDVar13 = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)&UNK_?;
              value = (Object *)func_?();
              pOVar14 = (Object__Class *)
                        UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                  ((MethodInfo *)0x0);
              value[1].klass = pOVar14;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        (value,ExceptionArgument__Enum_obj,
                         (MethodInfo *)CONCAT22(in_stack_12,in_stack_11));
              if (pDVar13 == (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0)
              goto code_?;
              key.z = voxelHit.cubePos.x;
              key._0_4_ = voxelHit.normal.z;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              IntVector,System::Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Add
                        (pDVar13,key,value,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Add_MV__WorldObject__IntVector__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage_
                        );
            }
            pDVar13 = (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)(this_02->_0).name;
            if ((pDVar13 != (Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)0x0) &&
               (key_00.z = voxelHit.cubePos.x, key_00._0_4_ = voxelHit.normal.z,
               this_02 = (MVCubeModelBase__Class *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                         IntVector,System::Object]::
                         Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                   (pDVar13,key_00,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Item_MV__WorldObject__IntVector_
                                   ), this_02 != (MVCubeModelBase__Class *)0x0)) {
              pcVar15 = (char *)UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                          ((MethodInfo *)0x0);
              damage_00 = (char *)(voxelHit.interactionFlags._4_4_ + (float)(this_02->_0).namespaze)
              ;
              (this_02->_0).name = pcVar15;
              (this_02->_0).namespaze = damage_00;
              pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar16 != (MVNetworkGame *)0x0) {
                uVar2 = SUB42(TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>
                               ,0);
                iVar17 = (int16_t)((uint)
                                   TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>
                                  >> 0x10);
                this_02 = (MVCubeModelBase__Class *)
                          (pMVar16->fields)._MaterialRepository_k__BackingField;
                this_04 = (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)func_?();
                mscorlib.dll::System::Func`2[Byte,MV::WorldObject::PhysicalProperties]::
                Func_2_Byte_MV_WorldObject_PhysicalProperties___ctor
                          (this_04,(Object *)this_02,
                           MethodInfo__MVMaterialRepository__GetMaterialPhysicalProperties_unsigned_char_
                           ,(MethodInfo *)0x0);
                CVar18 = RemoveCubes+RemoveOneCube::RemoveCubes_RemoveOneCube_CanRemoveCube
                                  ((CubeBase *)CONCAT22(iVar17,uVar2),(float)damage_00,this_04,
                                   (MethodInfo *)0x0);
                if (CVar18 == CubeDamageState__Enum_NoDamage) {
                  return 0;
                }
                if (CVar18 != CubeDamageState__Enum_ReceivedDamage) {
                  if (CVar18 == CubeDamageState__Enum_Destroyed) {
                    this_05 = (SingleCubeFineGrainedEvent *)func_?();
                    position.z = iVar17;
                    position._0_4_ = voxelHit.normal.z;
                    MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
                    SingleCubeFineGrainedEvent__ctor_1(this_05,position,(MethodInfo *)0x0);
                    RuntimeEventManager_SendRuntimeEvent_1
                              ((RuntimeEventManager *)&UNK_?,this_05,(MethodInfo *)0x0);
                  }
                  return 1;
                }
                iVar19 = func_?();
                if (iVar19 != 0) {
                  position_00.y = voxelHit.point.x;
                  position_00.x = (float)in_stack_8;
                  position_00.z = (float)&UNK_?;
                  SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                            (*(ParticleSystem **)(iVar19 + 0x220),position_00,1.0,(MethodInfo *)0x0);
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pMVar6 = extraout_EDX;
code_?:
  func_?((short)this_02,pMVar6);
  pcVar20 = (code *)swi(3);
  bVar9 = (*pcVar20)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
  return;
}

