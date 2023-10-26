
/* Boolean HandleFineGrained() */

bool Assembly-CSharp.dll::MVRigidBody+StuckEvaluator+StuckObject::
     MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
               (MVRigidBody_StuckEvaluator_StuckObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(0xf8);
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
    if ((this_03->klass->_1).typeHierarchyDepth <
        (TypeInfo__MVCubeModelFineGrainedTerrain->_1).typeHierarchyDepth) {
      return 0;
    }
    if ((MVCubeModelFineGrainedTerrain__Class *)
        (this_03->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).typeHierarchyDepth - 1] !=
        TypeInfo__MVCubeModelFineGrainedTerrain) {
      return 0;
    }
    pMVar1 = TypeInfo__MVCubeModelFineGrainedTerrain;
    unaff_ESI = this_03;
    if (((this_03->klass->_1).typeHierarchyDepth <
         (TypeInfo__MVCubeModelFineGrainedTerrain->_1).typeHierarchyDepth) ||
       ((MVCubeModelFineGrainedTerrain__Class *)
        (this_03->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelFineGrainedTerrain->_1).typeHierarchyDepth - 1] !=
        TypeInfo__MVCubeModelFineGrainedTerrain)) goto code_?;
    pIVar2 = (this->fields).overlapResult.localCubePos;
    unaff_ESI = (MVCubeModelBase *)0x0;
    if (pIVar2 != (IntVector__Array *)0x0) {
      pIVar3 = pIVar2->vector;
      while( true ) {
        while( true ) {
          if ((int)pIVar2->max_length <= (int)unaff_ESI) {
            return 1;
          }
          if ((MVCubeModelBase *)pIVar2->max_length <= unaff_ESI) goto code_?;
          uVar4._0_2_ = pIVar3->x;
          uVar4._2_2_ = pIVar3->y;
          iVar5 = pIVar3->z;
          IVar6 = *pIVar3;
          uVar7 = *(undefined5 *)pIVar3;
          a = MVCubeModelBase::MVCubeModelBase_GetCube(this_03,*pIVar3,(MethodInfo *)0x0);
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MV__WorldObject__CubeBase);
          }
          bVar8 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                            ((CubeBase *)a,(CubeBase *)0x0,(MethodInfo *)0x0);
          if (bVar8 == 0) break;
          unaff_ESI = (MVCubeModelBase *)((int)&unaff_ESI->klass + 1);
          pIVar3 = pIVar3 + 1;
        }
        pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar9 == (MVNetworkGame *)0x0) || (a == (Cube *)0x0)) ||
           (pBVar10 = (a->fields)._.faceMaterials, pBVar10 == (Byte__Array *)0x0)) break;
        if (pBVar10->max_length == 0) goto code_?;
        this_00 = (pMVar9->fields)._MaterialRepository_k__BackingField;
        if ((this_00 == (MVMaterialRepository *)0x0) ||
           (pMVar11 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                (this_00,pBVar10->vector[0],(MethodInfo *)0x0),
           pMVar11 == (MVMaterial *)0x0)) break;
        fVar12 = (pMVar11->fields)._PhysicalProperties_k__BackingField.bouncyness;
        fVar13 = (pMVar11->fields)._PhysicalProperties_k__BackingField.softness;
        fVar14 = (pMVar11->fields)._PhysicalProperties_k__BackingField.staticFriction;
        if ((pMVar11->fields)._PhysicalProperties_k__BackingField.toughness == 0.0) {
          MVCubeModelBase::MVCubeModelBase_RemoveCube(this_03,IVar6,(MethodInfo *)0x0);
          MVCubeModelBase::MVCubeModelBase_HandleDelta(this_03,(MethodInfo *)0x0);
          unaff_ESI = (MVCubeModelBase *)((int)&unaff_ESI->klass + 1);
          pIVar3 = pIVar3 + 1;
        }
        else {
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar9 == (MVNetworkGame *)0x0) ||
             (pWVar15 = (pMVar9->fields).worldNetwork, pWVar15 == (WorldNetwork *)0x0)) break;
          this_01 = (RuntimeEventManager *)(pWVar15->fields)._.runtimeEventManagerNetwork;
          this_04 = (SingleCubeFineGrainedEvent *)
                    func_?(TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent
                                    ,fVar12,fVar13,fVar14);
          if ((this_04 == (SingleCubeFineGrainedEvent *)0x0) ||
             (IVar6.z._1_1_ = (char)((ushort)iVar5 >> 8), IVar6._0_5_ = uVar7,
             MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
             SingleCubeFineGrainedEvent__ctor_1(this_04,IVar6,(MethodInfo *)0x0),
             this_01 == (RuntimeEventManager *)0x0)) break;
          RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent_1
                    (this_01,this_04,(MethodInfo *)0x0);
          func_?(0x65,this_03,uVar4,iVar5);
          unaff_ESI = (MVCubeModelBase *)((int)&unaff_ESI->klass + 1);
          pIVar3 = pIVar3 + 1;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pMVar1 = extraout_EDX;
code_?:
  func_?((short)unaff_ESI,pMVar1);
  pcVar16 = (code *)swi(3);
  bVar8 = (*pcVar16)();
  return bVar8;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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

