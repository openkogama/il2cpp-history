
/* Boolean CanSense(Vector3) */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_CanSense
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,Vector3 targetPosition,
               MethodInfo *method)

{
  fVar1 = targetPosition.z;
  bVar2 = AdvancedGhostBehaviour_AdvancedGhostPerception_IsWithinRoamRadius
                    (this,targetPosition,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 0;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pAVar3 = (this->fields).ghostBehaviour;
  if ((pAVar3 != (AdvancedGhostBehaviour *)0x0) &&
     (pAVar4 = (pAVar3->fields).networkedValues,
     pAVar4 != (AdvancedGhostBehaviour_NetworkedValues *)0x0)) {
    a = (pAVar4->fields).nextPosition;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    b.z = fVar1;
    b.x = targetPosition.x;
    b.y = targetPosition.y;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              (&targetPosition,a,b,(MethodInfo *)0x0);
    fVar5 = (float10)func_?();
    pAVar3 = (this->fields).ghostBehaviour;
    targetPosition.z = (float)fVar5;
    if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
      pfVar6 = &(pAVar3->fields).perceptionRadius;
      if (*pfVar6 <= targetPosition.z && targetPosition.z != *pfVar6) {
        return 0;
      }
      return 1;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar2 = (*pcVar7)();
  return bVar2;
}


/* Single DistanceToTargetPosition(Vector3) */

float Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
      AdvancedGhostBehaviour_AdvancedGhostPerception_DistanceToTargetPosition
                (AdvancedGhostBehaviour_AdvancedGhostPerception *this,Vector3 targetPosition,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  pAVar3 = (this->fields).ghostBehaviour;
  if ((pAVar3 != (AdvancedGhostBehaviour *)0x0) &&
     (pAVar4 = (pAVar3->fields).networkedValues,
     pAVar4 != (AdvancedGhostBehaviour_NetworkedValues *)0x0)) {
    VStack_5.y = (pAVar4->fields).nextPosition.x;
    VStack_5.z = (pAVar4->fields).nextPosition.y;
    fVar6 = (pAVar4->fields).nextPosition.z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar6;
    a.x = VStack_5.y;
    a.y = VStack_5.z;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       (&VStack_5,a,targetPosition,(MethodInfo *)0x0);
    uStack_1._0_4_ = pVVar7->x;
    uStack_1._4_4_ = pVVar7->y;
    fStack_2 = pVVar7->z;
    fVar8 = (float10)func_?(&uStack_1,0);
    return (float)fVar8;
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  fVar8 = (float10)(*pcVar9)();
  return (float)fVar8;
}


/* Boolean IsWithinPerceptionRadius(Vector3) */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_IsWithinPerceptionRadius
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,Vector3 targetPosition,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  pAVar3 = (this->fields).ghostBehaviour;
  if ((pAVar3 != (AdvancedGhostBehaviour *)0x0) &&
     (pAVar4 = (pAVar3->fields).networkedValues,
     pAVar4 != (AdvancedGhostBehaviour_NetworkedValues *)0x0)) {
    VStack_5.y = (pAVar4->fields).nextPosition.x;
    VStack_5.z = (pAVar4->fields).nextPosition.y;
    fVar6 = (pAVar4->fields).nextPosition.z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar6;
    a.x = VStack_5.y;
    a.y = VStack_5.z;
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       (&VStack_5,a,targetPosition,(MethodInfo *)0x0);
    uStack_1._0_4_ = pVVar7->x;
    uStack_1._4_4_ = pVVar7->y;
    fStack_2 = pVVar7->z;
    fVar8 = (float10)func_?(&uStack_1,0);
    pAVar3 = (this->fields).ghostBehaviour;
    if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
      pfVar9 = &(pAVar3->fields).perceptionRadius;
      return (float)fVar8 < *pfVar9 || (float)fVar8 == *pfVar9;
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Boolean IsWithinRoamRadius(Vector3) */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_IsWithinRoamRadius
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,Vector3 targetPosition,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  pAVar3 = (this->fields).ghostBehaviour;
  if ((pAVar3 != (AdvancedGhostBehaviour *)0x0) &&
     (this_00 = (pAVar3->fields).transformParent, this_00 != (Transform *)0x0)) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffdc,this_00,(MethodInfo *)0x0);
    uStack_5._0_4_ = pVVar4->x;
    uStack_5._4_4_ = pVVar4->y;
    fVar6 = pVVar4->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = fVar6;
    a.x = (float)(undefined4)uStack_5;
    a.y = (float)uStack_5._4_4_;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)&stack0xffffffdc,a,targetPosition,(MethodInfo *)0x0);
    uStack_1._0_4_ = pVVar4->x;
    uStack_1._4_4_ = pVVar4->y;
    fStack_2 = pVVar4->z;
    fVar7 = (float10)func_?(&uStack_1);
    pAVar3 = (this->fields).ghostBehaviour;
    if (pAVar3 != (AdvancedGhostBehaviour *)0x0) {
      return (float)fVar7 <= (pAVar3->fields).perceptionRadius + (pAVar3->fields).radius;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void Reset() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_Reset
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,MethodInfo *method)

{
  pDVar1 = (this->fields).syncedInterval;
  if (pDVar1 != (DeterministicSyncedInterval *)0x0) {
    iVar2 = WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
    iVar3 = (pDVar1->fields).nextTickThres;
    if (iVar3 <= iVar2) {
      iVar4 = (pDVar1->fields).range;
      (pDVar1->fields).nextTickThres = (iVar4 - (iVar2 - iVar3) % iVar4) + iVar2;
    }
    return;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean TryGetCurrentTarget(MVWorldObjectClient ByRef) */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetCurrentTarget
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,
               MVWorldObjectClient **worldObjectClient,MethodInfo *method)

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
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMStack_1 = (MVWorldObjectClient *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,(this->fields).currentWoID,(MethodInfo *)0x0);
    *worldObjectClient = pMStack_1;
    if (pMStack_1 != (MVWorldObjectClient *)0x0) {
      pIStack_2 = (Il2CppClass *)pMStack_1->klass[1]._0.image;
      pVVar3 = (Vector3 *)
               (*(code *)(pMStack_1->klass->vtable).GetTargetPosition.method)(&pMStack_1);
      bVar4 = AdvancedGhostBehaviour_AdvancedGhostPerception_IsWithinRoamRadius
                        (this,*pVVar3,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        if (*worldObjectClient != (MVWorldObjectClient *)0x0) {
          pIVar5 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                             (*worldObjectClient,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pIVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar4 != 0) {
            return 0;
          }
          if ((*worldObjectClient != (MVWorldObjectClient *)0x0) &&
             (pIVar5 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                 (*worldObjectClient,(MethodInfo *)0x0),
             pIVar5 != (InteractionDataHandlerBase *)0x0)) {
            bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                              ((Behaviour *)pIVar5,(MethodInfo *)0x0);
            if (bVar4 == 0) {
              return 0;
            }
            return 1;
          }
        }
        goto code_?;
      }
    }
    return 0;
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Boolean TryGetNewTarget(MVWorldObjectClient ByRef) */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetNewTarget
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,
               MVWorldObjectClient **worldObjectClient,MethodInfo *method)

{
  this_00 = (this->fields).perception;
  if (this_00 != (OptimizedPerception *)0x0) {
    targets = OptimizedPerception::OptimizedPerception_GetTargets
                        (this_00,(this->fields).alliedTeam,(MethodInfo *)0x0);
    bVar1 = AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetTarget
                      (this,targets,worldObjectClient,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 0;
    }
    if (*worldObjectClient != (MVWorldObjectClient *)0x0) {
      pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items
                         ((Collection_1_VoxelHit_ *)*worldObjectClient,(MethodInfo *)0x0);
      (this->fields).currentWoID = (int32_t)pIVar2;
      return 1;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean TryGetTarget(List`1[WorldObjectClientRef], MVWorldObjectClient ByRef) */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_TryGetTarget
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,
               List_1_WorldObjectClientRef_ *targets,MVWorldObjectClient **target,MethodInfo *method
               )

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  pWStack_7 = (WorldObjectClientRef_1_MVRoundCube_ *)0x0;
  *target = (MVWorldObjectClient *)0x0;
  pAVar8 = (this->fields).ghostBehaviour;
  puStack_9 = (undefined4 *)&stack0xffffffa4;
  puStack_4 = &stack0xffffffa4;
  if ((pAVar8 != (AdvancedGhostBehaviour *)0x0) &&
     (fStack_10 = (pAVar8->fields).perceptionRadius + (pAVar8->fields).radius,
     puStack_9 = (undefined4 *)&stack0xffffffa4, puStack_4 = &stack0xffffffa4,
     targets != (List_1_WorldObjectClientRef_ *)0x0)) {
    puStack_9 = (undefined4 *)&stack0xffffffa4;
    puStack_4 = &stack0xffffffa4;
    pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_12,
                        (List_1_UnityEngine_Color32_ *)targets,
                        MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar11->l;
    CStack_6.monitor = (MonitorData *)pLVar11->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar11->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar11->current).rgba;
    uStack_1 = 0;
    this_00 = (WorldObjectClientRef_1_MVRoundCube_ *)0x0;
    while( true ) {
      do {
        do {
          cVar13 = func_?();
          if (cVar13 == '\0') {
            *puStack_9 = 0xa7;
            uStack_1 = 0xffffffff;
            func_?(&CStack_6,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                           );
            if ((this_00 != (WorldObjectClientRef_1_MVRoundCube_ *)0x0) &&
               (pMVar14 = WorldObjectClientRef`1[MVRoundCube]::
                         WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                                   (this_00,
                                    MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                   ), pMVar14 != (MVRoundCube *)0x0)) {
              pMVar14 = WorldObjectClientRef`1[MVRoundCube]::
                       WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                                 (this_00,
                                  MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                 );
              *target = (MVWorldObjectClient *)pMVar14;
              *unaff_FS_OFFSET = uStack_3;
              return pMVar14 != (MVRoundCube *)0x0;
            }
            *unaff_FS_OFFSET = uStack_3;
            return 0;
          }
          unaff_ESI = (WorldObjectClientRef_1_MVRoundCube_ *)
                      mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                (&CStack_6,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__get_Current__
                                );
        } while ((unaff_ESI == (WorldObjectClientRef_1_MVRoundCube_ *)0x0) ||
                (pMVar14 = WorldObjectClientRef`1[MVRoundCube]::
                          WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                                    (unaff_ESI,
                                     MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                    ), pMVar14 == (MVRoundCube *)0x0));
        pMVar14 = WorldObjectClientRef`1[MVRoundCube]::
                 WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                           (unaff_ESI,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           );
        if (pMVar14 == (MVRoundCube *)0x0) goto code_?;
        pOVar15 = System.Core.dll::System::Linq::
                 Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                 Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                           ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                             *)pMVar14,(MethodInfo *)0x0);
      } while (pOVar15 == (Object *)0x3d);
      pCVar16 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
               WorldObjectClientRef`1[MVRoundCube]::
               WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                         (unaff_ESI,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         );
      if (pCVar16 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0) break;
      CStack_6.klass = pCVar16;
      pVVar17 = (Vector3 *)func_?();
      fStack_18 = pVVar17->z;
      auStack_12._16_4_ = pVVar17->x;
      auStack_12._20_4_ = pVVar17->y;
      bVar19 = AdvancedGhostBehaviour_AdvancedGhostPerception_CanSense
                        (this,*pVVar17,(MethodInfo *)0x0);
      if ((bVar19 != 0) &&
         (targetPosition.z = fStack_18, targetPosition.x = (float)auStack_12._16_4_,
         targetPosition.y = (float)auStack_12._20_4_,
         fStack_18 = AdvancedGhostBehaviour_AdvancedGhostPerception_DistanceToTargetPosition
                               (this,targetPosition,(MethodInfo *)0x0), fStack_18 < fStack_10)) {
        this_00 = unaff_ESI;
        pWStack_7 = unaff_ESI;
        fStack_10 = fStack_18;
      }
    }
  }
code_?:
  func_?(0);
  func_?(unaff_ESI,0,0);
  pcVar20 = (code *)swi(3);
  bVar19 = (*pcVar20)();
  return bVar19;
}


/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception_Update
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,MethodInfo *method)

{
  this_00 = (this->fields).syncedInterval;
  if (this_00 != (DeterministicSyncedInterval *)0x0) {
    bVar1 = DeterministicSyncedInterval::DeterministicSyncedInterval_Update
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pAVar2 = (this->fields).ghostBehaviour;
      if ((((pAVar2 == (AdvancedGhostBehaviour *)0x0) ||
           (pAVar3 = (pAVar2->fields).networkedValues,
           pAVar3 == (AdvancedGhostBehaviour_NetworkedValues *)0x0)) ||
          (pAVar2 == (AdvancedGhostBehaviour *)0x0)) ||
         (this_01 = (this->fields).perception, this_01 == (OptimizedPerception *)0x0))
      goto code_?;
      OptimizedPerception::OptimizedPerception_Update
                (this_01,(pAVar3->fields).nextPosition,(pAVar2->fields).perceptionRadius,
                 (MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* AdvancedGhostBehaviour+AdvancedGhostPerception(AdvancedGhostBehaviour, Int32) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+AdvancedGhostPerception::
     AdvancedGhostBehaviour_AdvancedGhostPerception__ctor
               (AdvancedGhostBehaviour_AdvancedGhostPerception *this,
               AdvancedGhostBehaviour *ghostBehaviour,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).alliedTeam = 4;
  (this->fields).currentWoID = -1;
  (this->fields).perceptionIntervalMilliseconds = 1000;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).ghostBehaviour = ghostBehaviour;
  this_00 = (OptimizedPerception *)func_?(TypeInfo__OptimizedPerception);
  OptimizedPerception::OptimizedPerception__ctor(this_00,(MethodInfo *)0x0);
  (this->fields).perception = this_00;
  range = (this->fields).perceptionIntervalMilliseconds;
  this_01 = (DeterministicSyncedInterval *)func_?(TypeInfo__DeterministicSyncedInterval);
  DeterministicSyncedInterval::DeterministicSyncedInterval__ctor
            (this_01,woID,range,(MethodInfo *)0x0);
  (this->fields).syncedInterval = this_01;
  return;
}

