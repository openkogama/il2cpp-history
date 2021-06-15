
/* List`1[WorldObjectClientRef] GetTargets(MVTeam) */

List_1_WorldObjectClientRef_ *
Assembly-CSharp.dll::OptimizedPerception::OptimizedPerception_GetTargets
          (OptimizedPerception *this,MVTeam__Enum alliedTeam,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pWStack_6 = (WorldObjectClientRef *)0x0;
  pUStack_7 = (UnityWebRequest *)0x0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_9.monitor = (MonitorData *)0x0;
  CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_9.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_10 = 0xffffffff;
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)(this->fields).removeSet;
  piStack_11 = (int *)&stack0xffffff98;
  puStack_4 = &stack0xffffff98;
  if (this_00 == (HashSet_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    pUVar12 = (UnityWebRequest *)func_?(0);
    pUVar13 = unaff_EDI;
  }
  else {
    piStack_11 = (int *)&stack0xffffff98;
    puStack_4 = &stack0xffffff98;
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3__Clear
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    this_01 = (List_1_UnityEngine_UIVertex_ *)(this->fields).targets;
    if (this_01 == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_01,MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Clear__
              );
    pHVar14 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this->fields).potentialTargets;
    if (pHVar14 == (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) goto code_?;
    pHVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                        &stack0xffffffa4,pHVar14,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    CStack_8.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar15->hashset;
    CStack_8.monitor = (MonitorData *)pHVar15->next;
    CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar15->stamp;
    CStack_8.fields.syncRoot = (Object *)pHVar15->current;
    uStack_1 = 0;
    while (cVar16 = func_?(), cVar16 != '\0') {
      unaff_EDI = (UnityWebRequest *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_8,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                            );
      bVar17 = OptimizedPerception_GetValidTarget
                        (this,(int32_t)unaff_EDI,alliedTeam,&pWStack_6,(MethodInfo *)0x0);
      if (bVar17 == 0) {
        this_02 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)(this->fields).removeSet;
        if (this_02 == (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0)
        goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
        UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                  (this_02,unaff_EDI,
                   MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      }
      else {
        pLVar18 = (this->fields).targets;
        if (pLVar18 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)pLVar18,(UIPushOption__Enum)pWStack_6,
                   MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
                  );
      }
    }
    unaff_EDI = (UnityWebRequest *)0x0;
    *piStack_11 = 0x7b;
    uStack_1 = 0xffffffff;
    func_?(&CStack_8,
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    pUVar12 = pUStack_7;
    pUVar13 = unaff_EDI;
    if (pUStack_7 == (UnityWebRequest *)0x0) {
      if (*piStack_11 == 0x7b) {
        unaff_EDI = (UnityWebRequest *)0xffffffff;
      }
      pHVar14 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)(this->fields).removeSet;
      if (pHVar14 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
        pHVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData
                 ::FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                           ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                            &stack0xffffffa4,pHVar14,
                            MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__)
        ;
        CStack_9.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar15->hashset;
        CStack_9.monitor = (MonitorData *)pHVar15->next;
        CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar15->stamp
        ;
        CStack_9.fields.syncRoot = (Object *)pHVar15->current;
        uStack_1 = 2;
        while (cVar16 = func_?(), pUVar13 = pUStack_7, cVar16 != '\0') {
          item = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           (&CStack_9,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                           );
          pHVar14 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                   (this->fields).potentialTargets;
          if (pHVar14 == (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)
          goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
          FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__Remove
                    (pHVar14,(FirstTimeEvent__Enum)item,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
        }
        piStack_11[(int)((int)&unaff_EDI->klass + 1)] = 0xc1;
        uStack_1 = 0xffffffff;
        func_?(&CStack_9,
                        MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       );
        if (pUVar13 == (UnityWebRequest *)0x0) {
          pLVar18 = (this->fields).targets;
          *unaff_FS_OFFSET = uStack_3;
          return pLVar18;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?(pUVar12,0,0);
code_?:
  func_?(pUVar13,0,0);
  pcVar19 = (code *)swi(3);
  pLVar18 = (List_1_WorldObjectClientRef_ *)(*pcVar19)();
  return pLVar18;
}


/* Boolean GetValidTarget(Int32, MVTeam, WorldObjectClientRef ByRef) */

bool Assembly-CSharp.dll::OptimizedPerception::OptimizedPerception_GetValidTarget
               (OptimizedPerception *this,int32_t woID,MVTeam__Enum alliedTeam,
               WorldObjectClientRef **wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    bVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_Contains
                      (pMVar1,woID,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pOVar3 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      message = mscorlib.dll::System::String::String_Concat
                          ((Object *)StringLiteral_Does_not_contain_woid_,pOVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      uRam_? = 0;
      return 0;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                          (pMVar1,woID,(MethodInfo *)0x0);
      *wo = this_00;
      if (this_00 == (WorldObjectClientRef *)0x0) {
        return 0;
      }
      pMVar4 = WorldObjectClientRef`1[MVRoundCube]::
               WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                         ((WorldObjectClientRef_1_MVRoundCube_ *)this_00,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         );
      if (pMVar4 == (MVRoundCube *)0x0) {
        return 0;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar5 != (MVNetworkGame *)0x0) {
        pSVar6 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                           ((DayNightCycle *)pMVar5,(MethodInfo *)0x0);
        if (((*wo != (WorldObjectClientRef *)0x0) &&
            (pMVar4 = WorldObjectClientRef`1[MVRoundCube]::
                      WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                                ((WorldObjectClientRef_1_MVRoundCube_ *)*wo,
                                 MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                ), pMVar4 != (MVRoundCube *)0x0)) &&
           (pOVar3 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                     TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                     TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                               ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)pMVar4,
                                (MethodInfo *)0x0), pSVar6 != (SkyParam *)0x0)) {
          MVar7 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                            ((MVTeamManager *)pSVar6,(int32_t)pOVar3,(MethodInfo *)0x0);
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar5 != (MVNetworkGame *)0x0) &&
             (pSVar6 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                 ((DayNightCycle *)pMVar5,(MethodInfo *)0x0),
             pSVar6 != (SkyParam *)0x0)) {
            iVar8 = MVTeamManager::MVTeamManager_TeamCount
                              ((MVTeamManager *)pSVar6,(MethodInfo *)0x0);
            if ((*wo != (WorldObjectClientRef *)0x0) &&
               (pMVar4 = WorldObjectClientRef`1[MVRoundCube]::
                         WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                                   ((WorldObjectClientRef_1_MVRoundCube_ *)*wo,
                                    MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                   ), pMVar4 != (MVRoundCube *)0x0)) {
              pIVar9 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                  ((MVWorldObjectClient *)pMVar4,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)pIVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar2 == 0) {
                return 0;
              }
              if (((*wo != (WorldObjectClientRef *)0x0) &&
                  (pMVar4 = WorldObjectClientRef`1[MVRoundCube]::
                            WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                                      ((WorldObjectClientRef_1_MVRoundCube_ *)*wo,
                                       MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                      ), pMVar4 != (MVRoundCube *)0x0)) &&
                 (pIVar9 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                      ((MVWorldObjectClient *)pMVar4,(MethodInfo *)0x0),
                 pIVar9 != (InteractionDataHandlerBase *)0x0)) {
                bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                                  ((Behaviour *)pIVar9,(MethodInfo *)0x0);
                return bVar2 & (MVar7 != alliedTeam || iVar8 < 2);
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar2 = (*pcVar10)();
  return bVar2;
}


/* Void Update(Vector3, Single) */

void Assembly-CSharp.dll::OptimizedPerception::OptimizedPerception_Update
               (OptimizedPerception *this,Vector3 position,float radius,MethodInfo *method)

{
  (this->fields).position.x = position.x;
  (this->fields).position.y = position.y;
  (this->fields).position.z = position.z;
  (this->fields).radius = radius;
  OptimizedPerception_UpdatePotentialTargets(this,(MethodInfo *)0x0);
  return;
}


/* Void UpdatePotentialTargets() */

void Assembly-CSharp.dll::OptimizedPerception::OptimizedPerception_UpdatePotentialTargets
               (OptimizedPerception *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)(this->fields).potentialTargets;
  if (this_00 == (HashSet_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
  HashSet_1_UnityEngine_Vector3__Clear
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
  uVar2._0_4_ = (this->fields).position.x;
  uStack_3 = (this->fields).position.y;
  fVar4 = (this->fields).position.z;
  radius = (this->fields).radius;
  if ((((uint)(TypeInfo__CollisionDetectionGlobalBuffers->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_started == 0)) {
    func_?(TypeInfo__CollisionDetectionGlobalBuffers);
  }
  results = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
  iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  position.z = fVar4;
  uStack_3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  position.x = (float)(undefined4)uVar2;
  position.y = (float)uStack_3;
  iVar5 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_OverlapSphereNonAlloc_1
                    (position,radius,results,1 << ((byte)iVar5 & 0x1f),(MethodInfo *)0x0);
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      if ((((uint)(TypeInfo__CollisionDetectionGlobalBuffers->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_started == 0)) {
        func_?(TypeInfo__CollisionDetectionGlobalBuffers);
      }
      if ((TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer ==
           (Collider__Array *)0x0) ||
         (this_02 = (Component_1 *)func_?(iVar6), this_02 == (Component_1 *)0x0))
      goto code_?;
      t = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                    (this_02,(MethodInfo *)0x0);
      this_03 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                          (t,(MethodInfo *)0x0);
      if (this_03 != (MVWorldObjectClient *)0x0) {
        item = (UnityWebRequest *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_03,(MethodInfo *)0x0)
        ;
        this_04 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                            (this_03,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)this_04,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          if (this_04 == (InteractionDataHandlerBase *)0x0) goto code_?;
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                            ((Behaviour *)this_04,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            this_01 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
                      (this->fields).potentialTargets;
            if (this_01 == (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0)
            goto code_?;
            System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
            UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                      (this_01,item,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_
                      );
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  return;
}


/* OptimizedPerception() */

void Assembly-CSharp.dll::OptimizedPerception::OptimizedPerception__ctor
               (OptimizedPerception *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
           func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields).potentialTargets = (HashSet_1_System_Int32_ *)pHVar1;
  pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
           func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar1,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields).removeSet = (HashSet_1_System_Int32_ *)pHVar1;
  method_00 = TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>;
  this_00 = (List_1_ThemeAttributes_ThemeAttribute_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            (this_00,0x10,
             MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List_int_);
  (this->fields).targets = (List_1_WorldObjectClientRef_ *)this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}

