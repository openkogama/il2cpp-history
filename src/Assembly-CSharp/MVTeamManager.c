
/* MVTeam GetDefaultTeam() */

MVTeam__Enum
Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetDefaultTeam
          (MVTeamManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVar1 = MVTeam__Enum_Blue;
  do {
    this_00 = (this->fields).teams;
    if (this_00 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
      func_?(0);
      break;
    }
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System
            ::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this_00,MVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    if (bVar2 != 0) {
      return MVar1;
    }
    MVar1 = MVar1 + MVTeam__Enum_Red;
  } while ((int)MVar1 < 4);
  this_01 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_01,StringLiteral_Could_not_find_default_team,(MethodInfo *)0x0);
  func_?(this_01,0,MethodInfo__MVTeamManager__GetDefaultTeam__);
  pcVar3 = (code *)swi(3);
  MVar1 = (*pcVar3)();
  return MVar1;
}


/* Int32 GetNoOfPlayersInTeam(MVTeam) */

int32_t Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetNoOfPlayersInTeam
                  (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVTeamManager___GetPlayersInTeam_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)team;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVAvatar *)0x0) {
      this_02 = MVAvatar::MVAvatar_get_Shield(this_01,(MethodInfo *)0x0);
      if (this_02 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        source = MVPlayerContainer::MVPlayerContainer_get_Values
                           ((MVPlayerContainer *)this_02,(MethodInfo *)0x0);
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this_00,
                   MethodInfo__MVTeamManager___GetPlayersInTeam_c__AnonStorey0____m__0_MVPlayer_,
                   MethodInfo__System__Func<MVPlayer,_bool>__Func_System__Object__void__);
        source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                              ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source,
                               (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                                *)this_03,
                               System__Collections__Generic__IEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__Where<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_bool>_
                              );
        this_04 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                            ((IEnumerable_1_UseInteractor_ *)source_00,
                             System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                            );
        if (this_04 != (List_1_UseInteractor_ *)0x0) {
          pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                              MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__)
          ;
          return (int32_t)pOVar1;
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* List`1[MVWorldObjectClient] GetOnlySpawnPointsForTeam(MVTeam) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetOnlySpawnPointsForTeam
          (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_01 != (MVNetworkGame *)0x0) &&
     (this_02 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)this_01,(MethodInfo *)0x0), this_02 != (SkyParam *)0x0))
  {
    pLVar4 = MVTeamManager_GetSpawnPointsForTeam((MVTeamManager *)this_02,team,(MethodInfo *)0x0);
    unaff_EDI = (MVSpawnPoint__Class *)0x0;
    index = unaff_EDI;
    if (pLVar4 != (List_1_MVWorldObjectClient_ *)0x0) {
      do {
        pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                           );
        if ((int)pOVar5 <= (int)index) {
          pLVar4 = MVTeamManager_GetSpawnPointsForTeam(this,team,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return pLVar4;
        }
        pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,
                            (int32_t)index,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                           );
        unaff_EDI = TypeInfo__MVSpawnPoint;
        if (pIVar6 != (IEventSystemHandler *)0x0) {
          bVar7 = (TypeInfo__MVSpawnPoint->_1).naturalAligment;
          if (((pIVar6->klass->_1).naturalAligment < bVar7) ||
             ((MVSpawnPoint__Class *)(pIVar6->klass->_1).typeHierarchy[bVar7 - 1] !=
              TypeInfo__MVSpawnPoint)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          pIVar9 = (IEventSystemHandler *)0x0;
          if (bVar8) {
            pIVar9 = pIVar6;
          }
          if (pIVar9 != (IEventSystemHandler *)0x0) {
            this_03 = (List_1_UnityEngine_Vector4_ *)func_?();
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
            List_1_UnityEngine_Vector4___ctor
                      (this_03,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
            this_00 = (this->fields).teams;
            if ((this_00 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) ||
               (this_04 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                          MVTeam,System::Object]::
                          Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                                    ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this_00,
                                     team,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                                    ),
               this_04 == (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)) break;
            System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
            FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                      ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)&pMStack_10
                       ,this_04,
                       MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
            uStack_1 = 0;
            goto code_?;
          }
        }
        index = (MVSpawnPoint__Class *)((int)&(index->_0).image + 1);
      } while( true );
    }
  }
code_?:
  func_?();
  func_?(unaff_EDI,0,0);
  pcVar11 = (code *)swi(3);
  pLVar4 = (List_1_MVWorldObjectClient_ *)(*pcVar11)();
  return pLVar4;
code_?:
  do {
    cVar12 = func_?(&stack0xffffffd0);
    if (cVar12 == '\0') {
      uStack_1 = 0xffffffff;
      func_?(&stack0xffffffd0,
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                     );
      *unaff_FS_OFFSET = uStack_3;
      return (List_1_MVWorldObjectClient_ *)this_03;
    }
    unaff_EDI = (MVSpawnPoint__Class *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                           &stack0xffffffd0,
                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                          );
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_05 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_05 == (MVWorldObjectClientManager *)0x0) goto code_?;
    unaff_EDI = (MVSpawnPoint__Class *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_05,(int32_t)unaff_EDI,(MethodInfo *)0x0);
    pMStack_10 = TypeInfo__MVSpawnPoint;
    iVar13 = func_?();
  } while (iVar13 == 0);
  if (this_03 == (List_1_UnityEngine_Vector4_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
            ((List_1_UIPushOption_ *)this_03,(UIPushOption__Enum)unaff_EDI,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
            );
  goto code_?;
}


/* List`1[MVPlayer] GetPlayersInTeam(MVTeam) */

List_1_MVPlayer_ *
Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetPlayersInTeam
          (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVTeamManager___GetPlayersInTeam_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = (void *)team;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVAvatar *)0x0) {
      this_02 = MVAvatar::MVAvatar_get_Shield(this_01,(MethodInfo *)0x0);
      if (this_02 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        source = MVPlayerContainer::MVPlayerContainer_get_Values
                           ((MVPlayerContainer *)this_02,(MethodInfo *)0x0);
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this_00,
                   MethodInfo__MVTeamManager___GetPlayersInTeam_c__AnonStorey0____m__0_MVPlayer_,
                   MethodInfo__System__Func<MVPlayer,_bool>__Func_System__Object__void__);
        source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                              ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source,
                               (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                                *)this_03,
                               System__Collections__Generic__IEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__Where<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_bool>_
                              );
        pLVar1 = (List_1_MVPlayer_ *)
                 System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                           ((IEnumerable_1_UseInteractor_ *)source_00,
                            System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                           );
        return pLVar1;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pLVar1 = (List_1_MVPlayer_ *)(*pcVar2)();
  return pLVar1;
}


/* Int32 GetScore(MVTeam, GameStatCounterType) */

int32_t Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetScore
                  (MVTeamManager *this,MVTeam__Enum team,
                  GameStatCounterType__Enum gameStatCounterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).teams;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System
            ::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this_00,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame *)0x0) {
      this_02 = (GameStatCounterManager *)
                DayNightCycle::DayNightCycle_get_CurrentStarsParam
                          ((DayNightCycle *)this_01,(MethodInfo *)0x0);
      if (this_02 != (GameStatCounterManager *)0x0) {
        iVar2 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                          (this_02,gameStatCounterType,team,(MethodInfo *)0x0);
        return iVar2;
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* List`1[MVWorldObjectClient] GetSpawnPointsForTeam(MVTeam) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetSpawnPointsForTeam
          (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
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
  puStack_7 = (undefined4 *)&stack0xffffffb4;
  puStack_4 = &stack0xffffffb4;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  this_00 = (this->fields).teams;
  pLStack_8 = this_01;
  if ((this_00 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) &&
     (this_02 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                MVTeam,System::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                          ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this_00,team,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                          ), this_02 != (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0)) {
    pHVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                        &stack0xffffffc0,this_02,
                        MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    CStack_6.monitor = (MonitorData *)pHVar9->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar9->stamp;
    CStack_6.fields.syncRoot = (Object *)pHVar9->current;
    uStack_1 = 0;
    while( true ) {
      CStack_6.klass =
           (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__;
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *puStack_7 = 0x55;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return (List_1_MVWorldObjectClient_ *)this_01;
      }
      unaff_EDI = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_6,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                            );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((this_03 == (MVWorldObjectClientManager *)0x0) ||
         (item = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_03,(int32_t)unaff_EDI,(MethodInfo *)0x0),
         this_01 == (List_1_UnityEngine_Vector4_ *)0x0)) break;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)item,
                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                );
    }
  }
  func_?();
  func_?(unaff_EDI,0,0);
  pcVar11 = (code *)swi(3);
  pLVar12 = (List_1_MVWorldObjectClient_ *)(*pcVar11)();
  return pLVar12;
}


/* List`1[TeamData] GetTeamDatas(GameStatCounterType) */

List_1_TeamData_ *
Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetTeamDatas
          (MVTeamManager *this,GameStatCounterType__Enum gameStatCounterType,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Il2CppClass *)0x0;
  auStack_6._0_4_ = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  auStack_6._4_4_ = (MVTeamManager_GetPlayersInTeam_c_AnonStorey0__Class *)0x0;
  auStack_6._8_4_ = (InvokerMethod)0x0;
  auStack_6._12_4_ = (char *)0x0;
  func_?();
  auStack_6._28_4_ = (Il2CppRGCTXData *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  this_01.genericMethod =
       (Il2CppGenericMethod *)
       func_?(TypeInfo__System__Collections__Generic__List<TeamData>);
  auStack_6._32_4_ = this_01.genericMethod;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_01.genericMethod,
             MethodInfo__System__Collections__Generic__List<TeamData>__List__);
  pDVar7 = (this->fields).teams;
  auStack_6._24_4_ = this_01.genericMethod;
  if ((pDVar7 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) &&
     (this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                          ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar7,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Keys__
                          ),
     this_02 != (Dictionary_2_TKey_TValue_KeyCollection_WinningConditionType_System_Object_ *)0x0))
  {
    pDVar8 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                         *)&stack0xffffffa8,
                        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                         *)this_02,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__GetEnumerator__
                       );
    auStack_6._0_4_ = (pDVar8->host_enumerator).dictionary;
    auStack_6._4_4_ = (pDVar8->host_enumerator).next;
    auStack_6._8_4_ = (pDVar8->host_enumerator).stamp;
    auStack_6._12_4_ = (pDVar8->host_enumerator).current.key;
    auStack_6._16_4_ = (pDVar8->host_enumerator).current.value;
    uStack_1 = 0;
    while( true ) {
      cVar9 = func_?();
      if (cVar9 == '\0') {
        *(Il2CppRGCTXData *)auStack_6._28_4_ = (Il2CppRGCTXData)0x70;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return (List_1_TeamData_ *)this_01.genericMethod;
      }
      method_01 = (MethodInfo *)auStack_6;
      key = (MethodInfo *)func_?();
      auStack_6._40_4_ = key;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pDVar7 = (this->fields).teams;
      if (pDVar7 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) break;
      method_00 = key;
      bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              MVTeam,System::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__ContainsKey
                        ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar7,
                         (MVTeam__Enum)key,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                        );
      if (bVar10 == 0) {
        KStack_11 = KeyState__Enum_Up;
      }
      else {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          method_01 = (MethodInfo *)&UNK_?;
          func_?();
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((this_03 == (MVNetworkGame *)0x0) ||
           (method_00 = (MethodInfo *)
                        DayNightCycle::DayNightCycle_get_CurrentStarsParam
                                  ((DayNightCycle *)this_03,(MethodInfo *)0x0),
           method_00 == (MethodInfo *)0x0)) break;
        KStack_11 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                              ((GameStatCounterManager *)method_00,gameStatCounterType,
                               (MVTeam__Enum)key,method_01);
      }
      if (cRam_? == '\0') {
        auStack_6._4_4_ = _UNK_?;
        auStack_6._0_4_ = &UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        auStack_6._4_4_ = _UNK_?;
        auStack_6._0_4_ = &UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      auStack_6._4_4_ = TypeInfo__MVTeamManager___GetPlayersInTeam_c__AnonStorey0;
      auStack_6._0_4_ = &UNK_?;
      this_04 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(this_04,0.0,method_00);
      if (this_04 == (ScaleAnimationBase *)0x0) break;
      (this_04->fields)._._._._.m_CachedPtr = key;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_05 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((this_05 == (MVAvatar *)0x0) ||
         (this_06 = MVAvatar::MVAvatar_get_Shield(this_05,(MethodInfo *)0x0),
         this_06 == (MVRuntimeDataVariableClampedFloat *)0x0)) break;
      auStack_6._36_4_ =
           MVPlayerContainer::MVPlayerContainer_get_Values((MVPlayerContainer *)this_06,method_01);
      this_07 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_07,(Object *)this_04,
                 MethodInfo__MVTeamManager___GetPlayersInTeam_c__AnonStorey0____m__0_MVPlayer_,
                 MethodInfo__System__Func<MVPlayer,_bool>__Func_System__Object__void__);
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                         ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)
                          auStack_6._36_4_,
                          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                           *)this_07,
                          System__Collections__Generic__IEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__Where<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_bool>_
                         );
      this_08 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                          ((IEnumerable_1_UseInteractor_ *)source,
                           System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                          );
      if (this_08 == (List_1_UseInteractor_ *)0x0) break;
      auStack_6._36_4_ =
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_08,
                      MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
      this_00 = (this->fields).teamNames;
      if (this_00 == (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) break;
      callback = (UnityAction *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 MVTeam,System::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                           ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this_00,
                            auStack_6._40_4_,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                           );
      this_09 = (BackButtonManager_BackButtonSubscriber *)func_?();
      BackButtonManager+BackButtonSubscriber::BackButtonManager_BackButtonSubscriber__ctor
                (this_09,(BackButtonHandler *)auStack_6._40_4_,auStack_6._36_4_,KStack_11,callback
                 ,(MethodInfo *)0x0);
      this_01 = (_union_155)auStack_6._32_4_;
      if ((List_1_UnityEngine_Vector4_ *)auStack_6._32_4_ == (List_1_UnityEngine_Vector4_ *)0x0)
      break;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)auStack_6._32_4_,(UIPushOption__Enum)this_09,
                 MethodInfo__System__Collections__Generic__List<TeamData>__Add_TeamData_);
    }
  }
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  pLVar13 = (List_1_TeamData_ *)(*pcVar12)();
  return pLVar13;
}


/* MVTeam GetTeamFromActorNr(Int32) */

MVTeam__Enum
Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetTeamFromActorNr
          (MVTeamManager *this,int32_t actorNumber,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (actorNumber != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_00 != (MVAvatar *)0x0) {
      this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0);
      if (this_01 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        this_02 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                            ((MVPlayerContainer *)this_01,actorNumber,(MethodInfo *)0x0);
        if (this_02 != (MVPlayer *)0x0) {
          pIVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                   KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                   KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                             ((KogamaSettingNumericBase_1_System_Single_ *)this_02,(MethodInfo *)0x0
                             );
          return (MVTeam__Enum)pIVar1;
        }
      }
    }
    func_?();
    pcVar2 = (code *)swi(3);
    MVar3 = (*pcVar2)();
    return MVar3;
  }
  return MVTeam__Enum_Server;
}


/* List`1[MV.WorldObject.MVTeam] GetTeamList() */

List_1_MV_WorldObject_MVTeam_ *
Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetTeamList
          (MVTeamManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).teams;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                       ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Keys__
                       );
    pLVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                       ((IEnumerable_1_UseInteractor_ *)source,
                        System__Collections__Generic__List<MV::WorldObject::MVTeam>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::MVTeam>_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                       );
    return (List_1_MV_WorldObject_MVTeam_ *)pLVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pLVar3 = (List_1_MV_WorldObject_MVTeam_ *)(*pcVar2)();
  return pLVar3;
}


/* Boolean HasTeam(MVTeam) */

bool Assembly-CSharp.dll::MVTeamManager::MVTeamManager_HasTeam
               (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).teams;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System
            ::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this_00,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean IsTeamActive(MVTeam) */

bool Assembly-CSharp.dll::MVTeamManager::MVTeamManager_IsTeamActive
               (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).teams;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System
            ::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this_00,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    return bVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void OnAddSpawnPoint(Int32, MVTeam) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_OnAddSpawnPoint
               (MVTeamManager *this,int32_t woId,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (team == MVTeam__Enum_Server) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Attempt_to_AddTeam_of_type_Serve,(MethodInfo *)0x0);
    return;
  }
  bVar1 = false;
  pDVar2 = (this->fields).teams;
  if (pDVar2 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System
            ::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar2,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    if (bVar3 == 0) {
      pDVar2 = (this->fields).teams;
      this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      if (pDVar2 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
      Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
                ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar2,team,(Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__HashSet<int>_
                );
      bVar1 = true;
    }
    pDVar2 = (this->fields).teams;
    if (pDVar2 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
      this_02 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                MVTeam,System::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                          ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar2,team,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                          );
      if (this_02 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
        UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                  (this_02,(UnityWebRequest *)woId,
                   MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
        if (bVar1) {
          this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).OnTeamsUpdated;
          if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
            AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                      (this_00,(MethodInfo *)0x0);
          }
          if ((this->fields).OnTeamAdded != (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)0x0) {
            pTStack4 = TypeInfo__MV__WorldObject__TeamEventArgs;
            e = (InitializedGameQueryDataEventArgs *)func_?();
            MVWorldObject.dll::MV::WorldObject::TeamEventArgs::TeamEventArgs__ctor
                      ((TeamEventArgs *)e,team,(MethodInfo *)0x0);
            mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
            EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                      ((EventHandler_1_InitializedGameQueryDataEventArgs_ *)this,(Object *)this,e,
                       MethodInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>__Invoke_System__Object__MV__WorldObject__TeamEventArgs_
                      );
          }
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnRemoveSpawnPoint(Int32, MVTeam) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_OnRemoveSpawnPoint
               (MVTeamManager *this,int32_t id,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).teams;
  if ((pDVar1 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) ||
     (this_02 = (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                MVTeam,System::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                          ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,team,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                          ), this_02 == (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0))
  goto code_?;
  bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
          FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__Remove
                    (this_02,id,MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_)
  ;
  if (bVar2 == 0) goto code_?;
  pDVar1 = (this->fields).teams;
  if ((pDVar1 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) ||
     (this_03 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                 *)mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                   MVTeam,System::Object]::
                   Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                             ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,team,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                             ),
     this_03 ==
     (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)0x0)) {
code_?:
    func_?(0);
  }
  else {
    JVar3 = System.Core.dll::System::Linq::
            Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
            JsonSchemaType]::
            Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                      (this_03,MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    if (JVar3 != JsonSchemaType__Enum_None) {
code_?:
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_OnRemoveSpawnPoint,(MethodInfo *)0x0);
      message = (Object *)(*(code *)(this->klass->vtable).ToString.method)();
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields).teams;
    if (pDVar1 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::Object]
    ::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Remove
              ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,team,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Remove_MV__WorldObject__MVTeam_
              );
    this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).OnTeamsUpdated;
    if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
      AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                (this_00,(MethodInfo *)0x0);
    }
    this_01 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)(this->fields).OnTeamRemoved;
    if (this_01 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      e = (InitializedGameQueryDataEventArgs *)
          func_?(TypeInfo__MV__WorldObject__TeamEventArgs);
      MVWorldObject.dll::MV::WorldObject::TeamEventArgs::TeamEventArgs__ctor
                ((TeamEventArgs *)e,0xADDR,(MethodInfo *)0x0);
      mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
      EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                (this_01,(Object *)this,e,
                 MethodInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>__Invoke_System__Object__MV__WorldObject__TeamEventArgs_
                );
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    key = MVTeam__Enum_Blue;
    do {
      pDVar1 = (this->fields).teams;
      if (pDVar1 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0)
      goto code_?;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
              MVTeam,System::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__ContainsKey
                        ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,key,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                        );
      if (bVar2 != 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_04 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
        ;
        if ((this_04 == (MVAvatar *)0x0) ||
           (this_05 = MVAvatar::MVAvatar_get_Shield(this_04,(MethodInfo *)0x0),
           this_05 == (MVRuntimeDataVariableClampedFloat *)0x0)) goto code_?;
        MVPlayerContainer::MVPlayerContainer_UpdateTeamForPlayersOnRemovedTeam
                  ((MVPlayerContainer *)this_05,0xADDR,key,(MethodInfo *)0x0);
        goto code_?;
      }
      key = key + MVTeam__Enum_Red;
    } while ((int)key < 4);
  }
  pIVar4 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (pIVar4,StringLiteral_Could_not_find_default_team,(MethodInfo *)0x0);
  func_?(pIVar4,0,MethodInfo__MVTeamManager__GetDefaultTeam__);
code_?:
  pIVar4 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (pIVar4,StringLiteral_Team_wo_id_already_removed,(MethodInfo *)0x0);
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetTeamNameToDefault(MVTeam) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_SetTeamNameToDefault
               (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).teamNames;
  this_01 = (this->fields).teamNamesDefault;
  if (this_01 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
    value = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System
            ::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                      ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this_01,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                      );
    if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
      Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__set_Item
                ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this_00,team,value,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__set_Item_MV__WorldObject__MVTeam__System__String_
                );
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 TeamCount() */

int32_t Assembly-CSharp.dll::MVTeamManager::MVTeamManager_TeamCount
                  (MVTeamManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).teams;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
    pOVar1 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                       );
    return (int32_t)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Boolean TeamHasSpawnPoints(MVTeam) */

bool Assembly-CSharp.dll::MVTeamManager::MVTeamManager_TeamHasSpawnPoints
               (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                        ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (this_01 != (SkyParam *)0x0) {
      this_02 = MVTeamManager_GetSpawnPointsForTeam((MVTeamManager *)this_01,team,(MethodInfo *)0x0)
      ;
      index = 0;
      if (this_02 != (List_1_MVWorldObjectClient_ *)0x0) {
        do {
          bVar1 = 0x10;
          pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                             );
          if ((int)pOVar2 <= index) {
            return bVar1;
          }
          pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,index,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                             );
          if (pIVar3 != (IEventSystemHandler *)0x0) {
            bVar4 = (TypeInfo__MVSpawnPoint->_1).naturalAligment;
            if (((pIVar3->klass->_1).naturalAligment < bVar4) ||
               ((MVSpawnPoint__Class *)(pIVar3->klass->_1).typeHierarchy[bVar4 - 1] !=
                TypeInfo__MVSpawnPoint)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            pIVar6 = (IEventSystemHandler *)0x0;
            if (bVar5) {
              pIVar6 = pIVar3;
            }
            if (pIVar6 != (IEventSystemHandler *)0x0) {
              return 1;
            }
          }
          index = index + 1;
        } while( true );
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar1 = (*pcVar7)();
  return bVar1;
}


/* Boolean TeamHasSpawnRoles(MVTeam) */

bool Assembly-CSharp.dll::MVTeamManager::MVTeamManager_TeamHasSpawnRoles
               (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                        ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (this_01 != (SkyParam *)0x0) {
      this_02 = MVTeamManager_GetSpawnPointsForTeam((MVTeamManager *)this_01,team,(MethodInfo *)0x0)
      ;
      index = 0;
      if (this_02 != (List_1_MVWorldObjectClient_ *)0x0) {
        while( true ) {
          bVar1 = 0x10;
          pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                             );
          if ((int)pOVar2 <= index) {
            return bVar1;
          }
          this_03 = (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,index
                               ,
                               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                              );
          if (this_03 ==
              (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)0x0)
          break;
          pOVar2 = System.Core.dll::System::Linq::
                   Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                   Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                             (this_03,(MethodInfo *)0x0);
          if (pOVar2 == (Object *)0x86) {
            return 1;
          }
          index = index + 1;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* String ToString() */

String * Assembly-CSharp.dll::MVTeamManager::MVTeamManager_ToString
                   (MVTeamManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
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
  puStack_7 = (undefined4 *)&stack0xffffffb4;
  puStack_4 = &stack0xffffffb4;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_7 = (undefined4 *)&stack0xffffffb4, puStack_4 = &stack0xffffffb4,
     (TypeInfo__System__String->_1).cctor_started == 0)) {
    puStack_7 = (undefined4 *)&stack0xffffffb4;
    puStack_4 = &stack0xffffffb4;
    func_?(TypeInfo__System__String);
  }
  pSVar8 = TypeInfo__System__String->static_fields->Empty;
  pSStack_9 = pSVar8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).teams;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                       ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Keys__
                       );
    this_01 = (List_1_UnityEngine_Color32_ *)
              System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                        ((IEnumerable_1_UseInteractor_ *)source,
                         System__Collections__Generic__List<MV::WorldObject::MVTeam>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::MVTeam>_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                        );
    if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
      pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc0,this_01,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                         );
      CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar10->l
      ;
      CStack_6.monitor = (MonitorData *)pLVar10->next;
      CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar10->ver;
      CStack_6.fields.syncRoot = (Object *)(pLVar10->current).rgba;
      uStack_1 = 0;
      while (cVar11 = func_?(), cVar11 != '\0') {
        this = (MVTeamManager *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                         );
        CStack_6.monitor = (MonitorData *)&this;
        CStack_6.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
             TypeInfo__MV__WorldObject__MVTeam;
        arg2 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar8 = mscorlib.dll::System::String::String_Concat_1
                           ((Object *)pSVar8,(Object *)StringLiteral_u000A,arg2,(MethodInfo *)0x0);
        pSStack_9 = pSVar8;
      }
      *puStack_7 = 0x50;
      uStack_1 = 0xffffffff;
      func_?();
      *unaff_FS_OFFSET = uStack_3;
      return pSVar8;
    }
  }
  func_?(0);
  func_?();
  pcVar12 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar12)();
  return pSVar8;
}


/* Void UpdateTeamName(MVTeam, String) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_UpdateTeamName
               (MVTeamManager *this,MVTeam__Enum team,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).teamNames;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::Object]
    ::Dictionary_2_MV_WorldObject_MVTeam_System_Object__set_Item
              ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)this_00,team,(Object *)name,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__set_Item_MV__WorldObject__MVTeam__System__String_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MVTeamManager() */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager__ctor(MVTeamManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary__
            );
  pSVar2 = TM::TM__(StringLiteral_Blue_Team,(MethodInfo *)0x0);
  if (pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::Object]
    ::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
              ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,MVTeam__Enum_Blue,
               (Object *)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
              );
    pSVar2 = TM::TM__(StringLiteral_Red_Team,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::Object]
    ::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
              ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,MVTeam__Enum_Red,
               (Object *)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
              );
    pSVar2 = TM::TM__(StringLiteral_Green_Team,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::Object]
    ::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
              ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,MVTeam__Enum_Green,
               (Object *)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
              );
    pSVar2 = TM::TM__(StringLiteral_Yellow_Team,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::Object]
    ::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
              ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,MVTeam__Enum_Yellow,
               (Object *)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
              );
    (this->fields).teamNamesDefault = pDVar1;
    pDVar1 = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary__
              );
    pSVar2 = TM::TM__(StringLiteral_Blue_Team,(MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
      Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
                ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,MVTeam__Enum_Blue,
                 (Object *)pSVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
                );
      pSVar2 = TM::TM__(StringLiteral_Red_Team,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
      Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
                ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,MVTeam__Enum_Red,
                 (Object *)pSVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
                );
      pSVar2 = TM::TM__(StringLiteral_Green_Team,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
      Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
                ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,MVTeam__Enum_Green,
                 (Object *)pSVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
                );
      pSVar2 = TM::TM__(StringLiteral_Yellow_Team,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
      Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
                ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar1,MVTeam__Enum_Yellow,
                 (Object *)pSVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
                );
      (this->fields).teamNames = pDVar1;
      method_00 = 
      TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>
      ;
      this_00 = (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Dictionary__
                );
      (this->fields).teams = this_00;
      ScaleAnimationBase::ScaleAnimationBase_Play
                ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void add_OnTeamAdded(EventHandler`1[MV.WorldObject.TeamEventArgs]) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_add_OnTeamAdded
               (MVTeamManager *this,EventHandler_1_MV_WorldObject_TeamEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnTeamAdded;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_MV_WorldObject_TeamEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnTeamRemoved(EventHandler`1[MV.WorldObject.TeamEventArgs]) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_add_OnTeamRemoved
               (MVTeamManager *this,EventHandler_1_MV_WorldObject_TeamEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnTeamRemoved;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_MV_WorldObject_TeamEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Int32 get_NumSpawnPoint() */

int32_t Assembly-CSharp.dll::MVTeamManager::MVTeamManager_get_NumSpawnPoint
                  (MVTeamManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pOStack_6 = (Object *)0x0;
  pDStack_7 = (Dictionary_2_WinningConditionType_System_Object_ *)0x0;
  iStack_8 = 0;
  iStack_9 = 0;
  iStack_10 = 0;
  func_?();
  iVar11 = 0;
  iStack_12 = 0;
  this_00 = (this->fields).teams;
  puStack_13 = (undefined4 *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  if ((this_00 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) &&
     (puStack_13 = (undefined4 *)&stack0xffffffac, puStack_4 = &stack0xffffffac,
     this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Values__
                         ),
     this_01 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
    pDVar14 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_15,this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__GetEnumerator__
                       );
    pDStack_7 = (pDVar14->host_enumerator).dictionary;
    iStack_8 = (pDVar14->host_enumerator).next;
    iStack_9 = (pDVar14->host_enumerator).stamp;
    iStack_10 = (pDVar14->host_enumerator).current.key;
    pOStack_6 = (pDVar14->host_enumerator).current.value;
    uStack_1 = 0;
    while( true ) {
      cVar16 = func_?();
      if (cVar16 == '\0') {
        *puStack_13 = 0x48;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return iVar11;
      }
      this_02 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                 *)func_?();
      if (this_02 ==
          (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)
          0x0) break;
      JVar17 = System.Core.dll::System::Linq::
              Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
              JsonSchemaType]::
              Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                        (this_02,MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__
                        );
      iVar11 = iVar11 + JVar17;
      iStack_12 = iVar11;
    }
  }
  func_?(0);
  func_?(0);
  pcVar18 = (code *)swi(3);
  iVar19 = (*pcVar18)();
  return iVar19;
}


/* Void remove_OnTeamAdded(EventHandler`1[MV.WorldObject.TeamEventArgs]) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_remove_OnTeamAdded
               (MVTeamManager *this,EventHandler_1_MV_WorldObject_TeamEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnTeamAdded;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_MV_WorldObject_TeamEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnTeamRemoved(EventHandler`1[MV.WorldObject.TeamEventArgs]) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_remove_OnTeamRemoved
               (MVTeamManager *this,EventHandler_1_MV_WorldObject_TeamEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnTeamRemoved;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_MV_WorldObject_TeamEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

