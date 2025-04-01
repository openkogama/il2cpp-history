
/* Boolean HandleFineGrained() */

bool Assembly-CSharp.dll::MVRigidBody+StuckEvaluator+StuckObject::
     MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
               (MVRigidBody_StuckEvaluator_StuckObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(0xac);
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 != (MVWorldObjectClientManager *)0x0) {
    this_03 = (MVCubeModelBase *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_02,(this->fields).overlapResult.woId,(MethodInfo *)0x0);
    if (this_03 == (MVCubeModelBase *)0x0) {
      return 0;
    }
    pMVar1 = this_03->klass;
    bVar2 = (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment;
    if ((pMVar1->_1).naturalAligment < bVar2) {
      return 0;
    }
    if ((MVCubeModelFineGrainedTerrain__Class *)(pMVar1->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__MVCubeModelFineGrainedTerrain) {
      return 0;
    }
    bVar2 = (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment;
    pMVar3 = TypeInfo__MVCubeModelFineGrainedTerrain;
    unaff_ESI = this_03;
    if (((pMVar1->_1).naturalAligment < bVar2) ||
       ((MVCubeModelFineGrainedTerrain__Class *)(pMVar1->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__MVCubeModelFineGrainedTerrain)) goto code_?;
    pIVar4 = (this->fields).overlapResult.localCubePos;
    unaff_ESI = (MVCubeModelBase *)0x0;
    if (pIVar4 != (IntVector__Array *)0x0) {
      pIVar5 = pIVar4->vector;
      while( true ) {
        while( true ) {
          if ((int)pIVar4->max_length <= (int)unaff_ESI) {
            return 1;
          }
          if ((MVCubeModelBase *)pIVar4->max_length <= unaff_ESI) goto code_?;
          uVar6._0_2_ = pIVar5->x;
          uVar6._2_2_ = pIVar5->y;
          iVar7 = pIVar5->z;
          IVar8 = *pIVar5;
          uVar9 = *(undefined5 *)pIVar5;
          a = MVCubeModelBase::MVCubeModelBase_GetCube(this_03,*pIVar5,(MethodInfo *)0x0);
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MV__WorldObject__CubeBase);
          }
          bVar10 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                             ((CubeBase *)a,(CubeBase *)0x0,(MethodInfo *)0x0);
          if (bVar10 == 0) break;
          unaff_ESI = (MVCubeModelBase *)((int)&unaff_ESI->klass + 1);
          pIVar5 = pIVar5 + 1;
        }
        pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar11 == (MVNetworkGame *)0x0) || (a == (Cube *)0x0)) ||
           (pBVar12 = (a->fields)._.faceMaterials, pBVar12 == (Byte__Array *)0x0)) break;
        if (pBVar12->max_length == 0) goto code_?;
        this_00 = (pMVar11->fields)._MaterialRepository_k__BackingField;
        if ((this_00 == (MVMaterialRepository *)0x0) ||
           (pMVar13 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                (this_00,pBVar12->vector[0],(MethodInfo *)0x0),
           pMVar13 == (MVMaterial *)0x0)) break;
        fVar14 = (pMVar13->fields)._PhysicalProperties_k__BackingField.bouncyness;
        fVar15 = (pMVar13->fields)._PhysicalProperties_k__BackingField.softness;
        fVar16 = (pMVar13->fields)._PhysicalProperties_k__BackingField.staticFriction;
        if ((pMVar13->fields)._PhysicalProperties_k__BackingField.toughness == 0.0) {
          MVCubeModelBase::MVCubeModelBase_RemoveCube(this_03,IVar8,(MethodInfo *)0x0);
          MVCubeModelBase::MVCubeModelBase_HandleDelta(this_03,(MethodInfo *)0x0);
          unaff_ESI = (MVCubeModelBase *)((int)&unaff_ESI->klass + 1);
          pIVar5 = pIVar5 + 1;
        }
        else {
          pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar11 == (MVNetworkGame *)0x0) ||
             (pWVar17 = (pMVar11->fields).worldNetwork, pWVar17 == (WorldNetwork *)0x0)) break;
          this_01 = (RuntimeEventManager *)(pWVar17->fields)._.runtimeEventManagerNetwork;
          this_04 = (SingleCubeFineGrainedEvent *)
                    func_?(TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent
                                    ,fVar14,fVar15,fVar16);
          IVar8.z._1_1_ = (char)((ushort)iVar7 >> 8);
          IVar8._0_5_ = uVar9;
          MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
          SingleCubeFineGrainedEvent__ctor_1(this_04,IVar8,(MethodInfo *)0x0);
          if (this_01 == (RuntimeEventManager *)0x0) break;
          RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent_1
                    (this_01,this_04,(MethodInfo *)0x0);
          func_?(0x65,this_03,uVar6,iVar7);
          unaff_ESI = (MVCubeModelBase *)((int)&unaff_ESI->klass + 1);
          pIVar5 = pIVar5 + 1;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pMVar3 = extraout_EDX;
code_?:
  func_?((short)unaff_ESI,pMVar3);
  pcVar18 = (code *)swi(3);
  bVar10 = (*pcVar18)();
  return bVar10;
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
  return bVar2 == 0;
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

