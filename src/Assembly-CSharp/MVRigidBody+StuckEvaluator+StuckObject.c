
/* Boolean HandleFineGrained() */

bool Assembly-CSharp.dll::MVRigidBody+StuckEvaluator+StuckObject::
     MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
               (MVRigidBody_StuckEvaluator_StuckObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
  }
  else {
    pMVar1 = (MVCubeModelBase *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields).overlapResult.woId,(MethodInfo *)0x0);
    if (pMVar1 == (MVCubeModelBase *)0x0) {
      return 0;
    }
    pMVar2 = pMVar1->klass;
    bVar3 = (pMVar2->_1).naturalAligment;
    bVar4 = (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment;
    if ((bVar3 < bVar4) ||
       ((MVCubeModelFineGrainedTerrain__Class *)(pMVar2->_1).typeHierarchy[bVar4 - 1] !=
        TypeInfo__MVCubeModelFineGrainedTerrain)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVCubeModelBase *)0x0;
    if (bVar5) {
      pMVar6 = pMVar1;
    }
    if (pMVar6 == (MVCubeModelBase *)0x0) {
      return 0;
    }
    bVar4 = (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment;
    if ((bVar3 < bVar4) ||
       ((MVCubeModelFineGrainedTerrain__Class *)(pMVar2->_1).typeHierarchy[bVar4 - 1] !=
        TypeInfo__MVCubeModelFineGrainedTerrain)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    pMVar6 = (MVCubeModelBase *)0x0;
    if (bVar5) {
      pMVar6 = pMVar1;
    }
    if (pMVar6 == (MVCubeModelBase *)0x0) goto code_?;
    uVar7 = 0;
    pIVar8 = (this->fields).overlapResult.localCubePos;
    if (pIVar8 == (IntVector__Array *)0x0) goto code_?;
    pIVar9 = pIVar8->vector;
    while( true ) {
      if ((int)pIVar8->max_length <= (int)uVar7) {
        return 1;
      }
      if (pIVar8->max_length <= uVar7) break;
      position = *pIVar9;
      pos_00 = *pIVar9;
      pos.z._1_1_ = (char)((ushort)pIVar9->z >> 8);
      pos._0_5_ = *(undefined5 *)pIVar9;
      pSVar10 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)MVCubeModelBase::MVCubeModelBase_GetCube(pMVar6,pos,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
        func_?();
      }
      bVar11 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                        ((CubeBase *)pSVar10,(CubeBase *)0x0,(MethodInfo *)0x0);
      if (bVar11 == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?((short)TypeInfo__MVGameControllerBase);
        }
        pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((((pMVar12 == (MVNetworkGame *)0x0) ||
             (this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                  ((DayNightCycle *)pMVar12,(MethodInfo *)0x0),
             pSVar10 ==
             (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
              *)0x0)) ||
            (pOVar13 = System.dll::System::Collections::Generic::
                       SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                       ::Single,System::Object]::
                       SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                 (pSVar10,(MethodInfo *)0x0), pOVar13 == (Object *)0x0)) ||
           ((materialId = func_?(), this_01 == (CelestialParam *)0x0 ||
            (this_02 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                 ((MVMaterialRepository *)this_01,materialId,(MethodInfo *)0x0),
            this_02 == (MVMaterial *)0x0)))) goto code_?;
        pPVar14 = MVMaterial::MVMaterial_get_PhysicalProperties
                            ((PhysicalProperties *)&stack0xffffffc0,this_02,(MethodInfo *)0x0);
        if (pPVar14->toughness != 0.0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar12 != (MVNetworkGame *)0x0) &&
             (pSVar10 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)CloudyTheme::CloudyTheme_get_Identifier
                                     ((CloudyTheme *)pMVar12,(MethodInfo *)0x0),
             pSVar10 !=
             (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
              *)0x0)) {
            this_03 = (RuntimeEventManager *)
                      System.dll::System::Collections::Generic::
                      SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                      ::Single,System::Object]::
                      SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                (pSVar10,(MethodInfo *)0x0);
            this_04 = (SingleCubeFineGrainedEvent *)func_?();
            MVWorldObject.dll::MV::WorldObject::RuntimeEvents::SingleCubeFineGrainedEvent::
            SingleCubeFineGrainedEvent__ctor_1(this_04,position,(MethodInfo *)0x0);
            if (this_03 != (RuntimeEventManager *)0x0) {
              RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent_1
                        (this_03,this_04,(MethodInfo *)0x0);
              func_?();
              goto code_?;
            }
          }
          goto code_?;
        }
        MVCubeModelBase::MVCubeModelBase_RemoveCube(pMVar6,pos_00,(MethodInfo *)0x0);
        MVCubeModelBase::MVCubeModelBase_HandleDelta(pMVar6,(MethodInfo *)0x0);
        uVar7 = uVar7 + 1;
        pIVar9 = pIVar9 + 1;
      }
      else {
code_?:
        uVar7 = uVar7 + 1;
        pIVar9 = pIVar9 + 1;
      }
    }
  }
  uVar15 = func_?(0);
  func_?(uVar15);
  pMVar1 = extraout_EDX;
code_?:
  func_?((char)pMVar1);
  pcVar16 = (code *)swi(3);
  bVar11 = (*pcVar16)();
  return bVar11;
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
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).overlapResult.woId = overlapResult.woId;
  (this->fields).overlapResult.localCubePos = overlapResult.localCubePos;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).stuckTime = fVar1;
  return;
}

