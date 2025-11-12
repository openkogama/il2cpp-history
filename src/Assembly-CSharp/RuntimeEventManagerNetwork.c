
/* Void DeserializeRuntimeEvents(BytePacker) */

void Assembly-CSharp.dll::RuntimeEventManagerNetwork::
     RuntimeEventManagerNetwork_DeserializeRuntimeEvents
               (RuntimeEventManagerNetwork *this,BytePacker *bytePacker,MethodInfo *method)

{
  if (bytePacker == (BytePacker *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                    (bytePacker,(MethodInfo *)0x0);
  if (0 < (int)uVar2) {
    uVar3 = (ulonglong)uVar2;
    do {
      runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                     RuntimeEvent_Create(bytePacker,(MethodInfo *)0x0);
      RuntimeEventManagerNetwork_HandleRuntimeEvent(this,runtimeEvent,(MethodInfo *)0x0);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  (this->fields)._.doEffects = 1;
  return;
}


/* Void HandleRuntimeEvent(RuntimeEvent) */

void Assembly-CSharp.dll::RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
               (RuntimeEventManagerNetwork *this,RuntimeEvent *runtimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (runtimeEvent == (RuntimeEvent *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RVar2 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
           RuntimeEvent_GetRuntimeEventObjectType
                     ((uint)(runtimeEvent->fields)._RuntimeEventType_k__BackingField,
                      (MethodInfo *)0x0);
  if ((char)RVar2 == '\x01') {
    bVar3 = (TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
            naturalAligment;
    if (((runtimeEvent->klass->_1).naturalAligment < bVar3) ||
       ((runtimeEvent->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent)) {
      FUN_?(runtimeEvent);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RuntimeEventManager::RuntimeEventManager_HandleEvent
              ((RuntimeEventManager *)this,(SingleCubeFineGrainedEvent *)runtimeEvent,
               (MethodInfo *)0x0);
  }
  else if ((char)RVar2 == '\x02') {
    bVar3 = (TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).naturalAligment;
    if (((runtimeEvent->klass->_1).naturalAligment < bVar3) ||
       ((runtimeEvent->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent)) {
      FUN_?(runtimeEvent);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>,
                    runtimeEvent,0);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__MVMaterialRepository__GetMaterialPhysicalProperties_unsigned_char_)
      ;
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (runtimeEvent != (RuntimeEvent *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::RuntimeEventType,_MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionValues>__get_Item_MV__Common__RuntimeEventType_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
      }
      pDVar4 = TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->static_fields->
               explosionValues;
      if (pDVar4 != (Dictionary_2_MV_Common_RuntimeEventType_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                     *)0x0) {
        puVar5 = (undefined8 *)
                  FUN_?(&IStack_6,pDVar4,
                                (runtimeEvent->fields)._RuntimeEventType_k__BackingField);
        cm = (this->fields)._.cubeModelPrototypeTerrain;
        uStack_7 = *puVar5;
        damageFallOffType = *(DamageFallOffType__Enum *)(puVar5 + 1);
        fineGrainedTerrainWorldObject = (this->fields)._.cubeModelFineGrainedTerrain;
        IVar8 = (runtimeEvent->fields).position;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar9 != (MVGameControllerBase *)0x0) &&
           (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) {
          pMVar11 = (pMVar10->fields)._MaterialRepository_k__BackingField;
          getPhysicalProperites =
               (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)
               FUN_?(
                            TypeInfo__System__Func<unsigned_char,_MV::WorldObject::PhysicalProperties>
                            );
          FUN_?(getPhysicalProperites,pMVar11);
          IStack_6 = IVar8;
          bVar12 = RemoveCubes+RemoveCubesWithinRadius::
                   RemoveCubes_RemoveCubesWithinRadius_HandleRemoveCubes
                             ((MVCubeModelBase *)cm,(float)uStack_7,&IStack_6,uStack_7._4_4_,
                              damageFallOffType,(MVCubeModelBase *)fineGrainedTerrainWorldObject,
                              getPhysicalProperites,(MethodInfo *)0x0);
          if ((bVar12 != 0) && ((this->fields)._.doEffects != 0)) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__PrefabPool);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pPVar13 = TypeInfo__PrefabPool->static_fields->instance;
            if (pPVar13 == (PrefabPool *)0x0) goto code_?;
            particlePrefab = (pPVar13->fields).particleCubeDust;
            uVar14 = (runtimeEvent->fields).position.x;
            uVar15 = (runtimeEvent->fields).position.y;
            sVar16 = (runtimeEvent->fields).position.z;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar18 = (pVVar17->oneVector).x;
            uVar19 = (pVVar17->oneVector).y;
            IStack_6._0_4_ = (float)(int)(short)uVar14 - (float)uVar18 * _UNK_?;
            fStack_20 = (float)(int)sVar16 - (pVVar17->oneVector).z * _UNK_?;
            radius = _UNK_?;
            if (_UNK_? <= (float)uStack_7) {
              radius = (float)uStack_7;
            }
            register0x000013c4 = (float)(int)(short)uVar15 - (float)uVar19 * _UNK_?;
            SharedWorldObjectGameplayFunctions::SharedWorldObjectGameplayFunctions_DustEfffect
                      (particlePrefab,(Vector3 *)&IStack_6,radius,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}


/* RuntimeEventManagerNetwork(MVCubeModelPrototypeTerrain, MVCubeModelFineGrainedTerrain) */

void Assembly-CSharp.dll::RuntimeEventManagerNetwork::RuntimeEventManagerNetwork__ctor
               (RuntimeEventManagerNetwork *this,
               MVCubeModelPrototypeTerrain *cubeModelPrototypeTerrain,
               MVCubeModelFineGrainedTerrain *cubeModelFineGrainedTerrain,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RuntimeEventManager__AccumulatedCubeDamages);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = (RuntimeEventManager_AccumulatedCubeDamages *)
        FUN_?(TypeInfo__RuntimeEventManager__AccumulatedCubeDamages);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (obj->fields).accumulatedCubeDamages =
       (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
        *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&obj->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)obj,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  iVar6 = iRam_?;
  (this->fields)._.localAccumulatedCubeDamages = obj;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.localAccumulatedCubeDamages >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar1);
  }
  (this->fields)._.cubeModelPrototypeTerrain = cubeModelPrototypeTerrain;
  iVar7 = 0;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar1);
  }
  (this->fields)._.cubeModelFineGrainedTerrain = cubeModelFineGrainedTerrain;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.cubeModelFineGrainedTerrain >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

