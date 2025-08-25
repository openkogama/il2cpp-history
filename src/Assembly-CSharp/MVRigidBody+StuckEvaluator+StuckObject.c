
/* Boolean HandleFineGrained() */

bool Assembly-CSharp.dll::MVRigidBody+StuckEvaluator+StuckObject::
     MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
               (MVRigidBody_StuckEvaluator_StuckObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(0x20);
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 != (MVWorldObjectClientManager *)0x0) {
    unaff_EBX = (MVCubeModelBase *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_02,(this->fields).overlapResult.woId,(MethodInfo *)0x0);
    if (unaff_EBX == (MVCubeModelBase *)0x0) {
      return 0;
    }
    if ((unaff_EBX->klass->_1).naturalAligment <
        (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment) {
      return 0;
    }
    if ((MVCubeModelFineGrainedTerrain__Class *)
        (unaff_EBX->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment - 1] !=
        TypeInfo__MVCubeModelFineGrainedTerrain) {
      return 0;
    }
    pMVar1 = TypeInfo__MVCubeModelFineGrainedTerrain;
    if (((unaff_EBX->klass->_1).naturalAligment <
         (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment) ||
       ((MVCubeModelFineGrainedTerrain__Class *)
        (unaff_EBX->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment - 1] !=
        TypeInfo__MVCubeModelFineGrainedTerrain)) goto code_?;
    pIVar2 = (this->fields).overlapResult.localCubePos;
    uVar3 = 0;
    if (pIVar2 != (IntVector__Array *)0x0) {
      pIVar4 = pIVar2->vector;
      do {
        while( true ) {
          if ((int)pIVar2->max_length <= (int)uVar3) {
            return 1;
          }
          if (pIVar2->max_length <= uVar3) goto code_?;
          uVar5._0_2_ = pIVar4->x;
          uVar5._2_2_ = pIVar4->y;
          iVar6 = pIVar4->z;
          IVar7 = *pIVar4;
          uVar8 = *(undefined5 *)pIVar4;
          a = MVCubeModelBase::MVCubeModelBase_GetCube(unaff_EBX,*pIVar4,(MethodInfo *)0x0);
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MV__WorldObject__CubeBase);
          }
          bVar9 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                            ((CubeBase *)a,(CubeBase *)0x0,(MethodInfo *)0x0);
          if (bVar9 == 0) break;
code_?:
          uVar3 = uVar3 + 1;
          pIVar4 = pIVar4 + 1;
        }
        pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar10 == (MVNetworkGame *)0x0) || (a == (Cube *)0x0)) ||
           (pBVar11 = (a->fields)._.faceMaterials, pBVar11 == (Byte__Array *)0x0)) break;
        if (pBVar11->max_length == 0) goto code_?;
        this_00 = (pMVar10->fields)._MaterialRepository_k__BackingField;
        if ((this_00 == (MVMaterialRepository *)0x0) ||
           (pMVar12 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                (this_00,pBVar11->vector[0],(MethodInfo *)0x0),
           pMVar12 == (MVMaterial *)0x0)) break;
        fVar13 = (pMVar12->fields)._PhysicalProperties_k__BackingField.bouncyness;
        fVar14 = (pMVar12->fields)._PhysicalProperties_k__BackingField.softness;
        fVar15 = (pMVar12->fields)._PhysicalProperties_k__BackingField.staticFriction;
        if ((pMVar12->fields)._PhysicalProperties_k__BackingField.toughness != 0.0) {
          pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar10 != (MVNetworkGame *)0x0) &&
             (pWVar16 = (pMVar10->fields).worldNetwork, pWVar16 != (WorldNetwork *)0x0)) {
            this_01 = (RuntimeEventManager *)(pWVar16->fields)._.runtimeEventManagerNetwork;
            this_03 = (SingleCubeFineGrainedEvent *)
                      func_?(TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent
                                      ,fVar13,fVar14,fVar15);
            IVar7.z._1_1_ = (char)((ushort)iVar6 >> 8);
            IVar7._0_5_ = uVar8;
            MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
            SingleCubeFineGrainedEvent__ctor_1(this_03,IVar7,(MethodInfo *)0x0);
            if (this_01 != (RuntimeEventManager *)0x0) {
              RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent_1
                        (this_01,this_03,(MethodInfo *)0x0);
              func_?(0x65,unaff_EBX,uVar5,iVar6);
              goto code_?;
            }
          }
          break;
        }
        MVCubeModelBase::MVCubeModelBase_RemoveCube(unaff_EBX,IVar7,(MethodInfo *)0x0);
        MVCubeModelBase::MVCubeModelBase_HandleDelta(unaff_EBX,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
        pIVar4 = pIVar4 + 1;
      } while( true );
    }
  }
  func_?();
code_?:
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?((short)unaff_EBX,pMVar1);
  pcVar17 = (code *)swi(3);
  bVar9 = (*pcVar17)();
  return bVar9;
}


/* Boolean IsStuckInObject() */

bool Assembly-CSharp.dll::MVRigidBody+StuckEvaluator+StuckObject::
     MVRigidBody_StuckEvaluator_StuckObject_IsStuckInObject
               (MVRigidBody_StuckEvaluator_StuckObject *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar1 - (this->fields).stuckTime < _UNK_?) {
    return 0;
  }
  bVar2 = MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained(this,(MethodInfo *)0x0);
  return bVar2 ^ 1;
}


/* MVRigidBody+StuckEvaluator+StuckObject(MVOverlapResult) */

void Assembly-CSharp.dll::MVRigidBody+StuckEvaluator+StuckObject::
     MVRigidBody_StuckEvaluator_StuckObject__ctor
               (MVRigidBody_StuckEvaluator_StuckObject *this,MVOverlapResult overlapResult,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).overlapResult.woId = overlapResult.woId;
  (this->fields).overlapResult.localCubePos = overlapResult.localCubePos;
  func_?(&(this->fields).overlapResult.localCubePos,0);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).stuckTime = fVar1;
  return;
}


/* Void set_OverlapResult(MVOverlapResult) */

void Assembly-CSharp.dll::MVRigidBody+StuckEvaluator+StuckObject::
     MVRigidBody_StuckEvaluator_StuckObject_set_OverlapResult
               (MVRigidBody_StuckEvaluator_StuckObject *this,MVOverlapResult value,
               MethodInfo *method)

{
  (this->fields).overlapResult.woId = value.woId;
  (this->fields).overlapResult.localCubePos = value.localCubePos;
  func_?(&(this->fields).overlapResult.localCubePos,0);
  return;
}

