
/* Boolean HandleFineGrained() */

bool Assembly-CSharp.dll::MVRigidBody+StuckEvaluator+StuckObject::
     MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
               (MVRigidBody_StuckEvaluator_StuckObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelFineGrainedTerrain);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_03 != (MVWorldObjectClientManager *)0x0) {
    this_04 = (MVCubeModelBase *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (this_03,(this->fields).overlapResult.woId,(MethodInfo *)0x0);
    if (this_04 != (MVCubeModelBase *)0x0) {
      pMVar1 = this_04->klass;
      bVar2 = (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment;
      if ((bVar2 <= (pMVar1->_1).naturalAligment) &&
         ((MVCubeModelFineGrainedTerrain__Class *)(pMVar1->_1).typeHierarchy[(ulonglong)bVar2 - 1]
          == TypeInfo__MVCubeModelFineGrainedTerrain)) {
        bVar2 = (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment;
        if (((pMVar1->_1).naturalAligment < bVar2) ||
           ((MVCubeModelFineGrainedTerrain__Class *)(pMVar1->_1).typeHierarchy[(ulonglong)bVar2 - 1]
            != TypeInfo__MVCubeModelFineGrainedTerrain)) {
          FUN_?(this_04);
          pcVar3 = (code *)swi(3);
          bVar4 = (*pcVar3)();
          return bVar4;
        }
        pIVar5 = (this->fields).overlapResult.localCubePos;
        uVar6 = 0;
        if (pIVar5 != (IntVector__Array *)0x0) {
          pIVar7 = pIVar5->vector;
code_?:
          do {
            if ((int)pIVar5->max_length <= (int)uVar6) {
              return 1;
            }
            if ((uint)pIVar5->max_length <= uVar6) {
code_?:
              FUN_?();
              pcVar3 = (code *)swi(3);
              bVar4 = (*pcVar3)();
              return bVar4;
            }
            this_00 = (this_04->fields).prototypeCubeModel;
            uVar8._0_2_ = pIVar7->x;
            uVar8._2_2_ = pIVar7->y;
            iVar9 = pIVar7->z;
            if (this_00 == (RuntimePrototypeCubeModel *)0x0) break;
            IStackX_8._0_4_ = uVar8;
            IStackX_8.z = iVar9;
            pCVar10 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                                (this_00,&IStackX_8,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (pCVar10 == (Cube *)0x0) {
code_?:
              uVar6 = uVar6 + 1;
              pIVar7 = pIVar7 + 1;
              goto code_?;
            }
            pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar11 == (MVNetworkGame *)0x0) ||
               (pBVar12 = (pCVar10->fields)._.faceMaterials, pBVar12 == (Byte__Array *)0x0)) break;
            if ((int)pBVar12->max_length == 0) goto code_?;
            this_01 = (pMVar11->fields)._MaterialRepository_k__BackingField;
            if ((this_01 == (MVMaterialRepository *)0x0) ||
               (pMVar13 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                    (this_01,pBVar12->vector[0],(MethodInfo *)0x0),
               pMVar13 == (MVMaterial *)0x0)) break;
            if ((pMVar13->fields)._PhysicalProperties_k__BackingField.toughness != 0.0) {
              pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar11 != (MVNetworkGame *)0x0) &&
                 (pWVar14 = (pMVar11->fields).worldNetwork, pWVar14 != (WorldNetwork *)0x0)) {
                this_02 = (RuntimeEventManager *)(pWVar14->fields)._.runtimeEventManagerNetwork;
                singleCubeFineGrainedEvent =
                     (SingleCubeFineGrainedEvent *)
                     FUN_?(
                                  TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent
                                  );
                (singleCubeFineGrainedEvent->fields)._.position.x = (int16_t)uVar8;
                (singleCubeFineGrainedEvent->fields)._.position.y = uVar8._2_2_;
                (singleCubeFineGrainedEvent->fields)._.position.z = iVar9;
                (singleCubeFineGrainedEvent->fields)._._RuntimeEventType_k__BackingField = 2;
                if (this_02 != (RuntimeEventManager *)0x0) {
                  RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent_1
                            (this_02,singleCubeFineGrainedEvent,(MethodInfo *)0x0);
                  aIStack_15[0]._0_4_ = uVar8;
                  aIStack_15[0].z = iVar9;
                  (*(this_04->klass->vtable).RemoveCubeNetworkUpdate_1.methodPtr)
                            (this_04,aIStack_15);
                  goto code_?;
                }
              }
              break;
            }
            IStackX_18._0_4_ = uVar8;
            IStackX_18.z = iVar9;
            MVCubeModelBase::MVCubeModelBase_RemoveCube(this_04,&IStackX_18,(MethodInfo *)0x0);
            MVCubeModelBase::MVCubeModelBase_HandleDelta(this_04,(MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
            pIVar7 = pIVar7 + 1;
          } while( true );
        }
        goto code_?;
      }
    }
    return 0;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean IsStuckInObject() */

bool Assembly-CSharp.dll::MVRigidBody+StuckEvaluator+StuckObject::
     MVRigidBody_StuckEvaluator_StuckObject_IsStuckInObject
               (MVRigidBody_StuckEvaluator_StuckObject *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)(*pcRam_?)();
  if (TypeRef__System__Activator__T._0_4_ <= fVar4 - (this->fields).stuckTime) {
    bVar3 = MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained(this,(MethodInfo *)0x0);
    return bVar3 ^ 1;
  }
  return 0;
}


/* MVRigidBody+StuckEvaluator+StuckObject(MVOverlapResult) */

void Assembly-CSharp.dll::MVRigidBody+StuckEvaluator+StuckObject::
     MVRigidBody_StuckEvaluator_StuckObject__ctor
               (MVRigidBody_StuckEvaluator_StuckObject *this,MVOverlapResult *overlapResult,
               MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  uVar2 = *(undefined4 *)&overlapResult->field_0x4;
  uVar3 = *(undefined4 *)&overlapResult->localCubePos;
  uVar4 = *(undefined4 *)((longlong)&overlapResult->localCubePos + 4);
  (this->fields).overlapResult.woId = overlapResult->woId;
  *(undefined4 *)&(this->fields).overlapResult.field_0x4 = uVar2;
  *(undefined4 *)&(this->fields).overlapResult.localCubePos = uVar3;
  *(undefined4 *)((longlong)&(this->fields).overlapResult.localCubePos + 4) = uVar4;
  if (bVar1) {
    uVar5 = (uint)((ulonglong)&(this->fields).overlapResult.localCubePos >> 0xc);
    overlapResult = (MVOverlapResult *)(ulonglong)((uVar5 & 0x1fffff) >> 6);
    method = (MethodInfo *)(ulonglong)(uVar5 & 0x3f);
    do {
      uVar6 = *(ulonglong *)((longlong)overlapResult * 8 + 0xADDR);
      puVar7 = (ulonglong *)((longlong)overlapResult * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar6 == *puVar7;
      if (bVar1) {
        *puVar7 = uVar6 | 1L << (longlong)method;
      }
      UNLOCK();
    } while (!bVar1);
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?,overlapResult,method), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
  fVar10 = (float)(*pcRam_?)();
  (this->fields).stuckTime = fVar10;
  return;
}


/* Void set_OverlapResult(MVOverlapResult) */

void Assembly-CSharp.dll::MVRigidBody+StuckEvaluator+StuckObject::
     MVRigidBody_StuckEvaluator_StuckObject_set_OverlapResult
               (MVRigidBody_StuckEvaluator_StuckObject *this,MVOverlapResult *value,
               MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  uVar2 = *(undefined4 *)&value->field_0x4;
  pIVar3 = value->localCubePos;
  (this->fields).overlapResult.woId = value->woId;
  *(undefined4 *)&(this->fields).overlapResult.field_0x4 = uVar2;
  (this->fields).overlapResult.localCubePos = pIVar3;
  if (bVar1) {
    uVar4 = (uint)((ulonglong)&(this->fields).overlapResult.localCubePos >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}

