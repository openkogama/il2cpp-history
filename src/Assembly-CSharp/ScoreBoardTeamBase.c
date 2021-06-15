
/* Void AddTeamsToScoreBoard() */

void Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_AddTeamsToScoreBoard
               (ScoreBoardTeamBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  while( true ) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                       ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (pSVar2 == (SkyParam *)0x0) break;
    this_00 = MVTeamManager::MVTeamManager_GetTeamList((MVTeamManager *)pSVar2,(MethodInfo *)0x0);
    if (this_00 == (List_1_MV_WorldObject_MVTeam_ *)0x0) break;
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                       );
    if ((int)pOVar3 <= index) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                       ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (pSVar2 == (SkyParam *)0x0) break;
    this_01 = MVTeamManager::MVTeamManager_GetTeamList((MVTeamManager *)pSVar2,(MethodInfo *)0x0);
    if (this_01 == (List_1_MV_WorldObject_MVTeam_ *)0x0) break;
    team = mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::MVTeam]::
           List_1_MV_WorldObject_MVTeam__get_Item
                     (this_01,index,
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                     );
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    playerName = TypeInfo__System__String->static_fields->Empty;
    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_02 == (MVNetworkGame *)0x0) break;
    this_03 = (GameStatCounterManager *)
              DayNightCycle::DayNightCycle_get_CurrentStarsParam
                        ((DayNightCycle *)this_02,(MethodInfo *)0x0);
    if (this_03 == (GameStatCounterManager *)0x0) break;
    scoreCount = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                           (this_03,CONCAT31((int3)((uint)this_00 >> 8),
                                             *(undefined1 *)
                                              &(pMVar1->fields).ReceivedAvatarBodiesFromQuery),team,
                            (MethodInfo *)0x0);
    ScoreBoardBase::ScoreBoardBase_SortNewScore
              ((ScoreBoardBase *)pMVar1,playerName,team,scoreCount,0,(MethodInfo *)0x0);
    index = index + 1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Color GetBackgroundColor(Int32) */

Color * Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_GetBackgroundColor
                  (Color *__return_storage_ptr__,ScoreBoardTeamBase *this,int32_t teamId,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (teamId != -1) {
    if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Styles->_1).cctor_started == 0)) {
      func_?(TypeInfo__Styles);
    }
    pCVar1 = Styles::Styles_GetTeamColor(&CStack_2,teamId,0,(MethodInfo *)0x0);
    fVar3 = pCVar1->g;
    fVar4 = pCVar1->b;
    fVar5 = (this->fields)._.backgroundAlpha;
    __return_storage_ptr__->r = pCVar1->r;
    __return_storage_ptr__->g = fVar3;
    __return_storage_ptr__->b = fVar4;
    __return_storage_ptr__->a = fVar5;
    return __return_storage_ptr__;
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  pCVar1 = Styles::Styles_GetColor
                     (&CStack_2,ColorStyle__Enum_OffWhiteTransparent,(MethodInfo *)0x0);
  fVar5 = pCVar1->g;
  fVar3 = pCVar1->b;
  fVar4 = pCVar1->a;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar5;
  __return_storage_ptr__->b = fVar3;
  __return_storage_ptr__->a = fVar4;
  return __return_storage_ptr__;
}


/* Void HandleParticipantListChanged() */

void Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_HandleParticipantListChanged
               (ScoreBoardTeamBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    while (pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                               MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                              ), index < (int)pOVar2) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar3 == (MVNetworkGame *)0x0) ||
          (pSVar4 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                              ((DayNightCycle *)pMVar3,(MethodInfo *)0x0), pSVar4 == (SkyParam *)0x0
          )) || (pLVar5 = MVTeamManager::MVTeamManager_GetTeamList
                                    ((MVTeamManager *)pSVar4,(MethodInfo *)0x0),
                pLVar5 == (List_1_MV_WorldObject_MVTeam_ *)0x0)) goto code_?;
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                         );
      if ((int)pOVar2 <= index) break;
      pLVar1 = (this->fields)._.scoreBoardPlayerData;
      if ((((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
           (pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index
                                ,
                                MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                               ), pIVar6 == (IEventSystemHandler *)0x0)) ||
          ((Component_1 *)pIVar6[3].monitor == (Component_1 *)0x0)) ||
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pIVar6[3].monitor,(MethodInfo *)0x0),
         this_00 == (GameObject *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      pLVar1 = (this->fields)._.scoreBoardPlayerData;
      index = index + 1;
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar3 != (MVNetworkGame *)0x0) &&
        (pSVar4 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)pMVar3,(MethodInfo *)0x0), pSVar4 != (SkyParam *)0x0))
       && (pLVar5 = MVTeamManager::MVTeamManager_GetTeamList
                              ((MVTeamManager *)pSVar4,(MethodInfo *)0x0),
          pLVar5 != (List_1_MV_WorldObject_MVTeam_ *)0x0)) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                         );
      pLVar1 = (this->fields)._.scoreBoardPlayerData;
      if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
code_?:
  pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                       MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                      );
  if ((int)pOVar8 <= (int)pOVar2) {
    return;
  }
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  if ((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
     (pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                          (int32_t)pOVar2,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         ), pIVar6 == (IEventSystemHandler *)0x0)) goto code_?;
  pMVar9 = pIVar6[3].monitor;
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?();
  }
  pCVar10 = Styles::Styles_GetColor
                      ((Color *)&stack0xffffffec,ColorStyle__Enum_OffWhiteTransparent,
                       (MethodInfo *)0x0);
  if (pMVar9 == (MonitorData *)0x0) goto code_?;
  func_?(0x17,pMVar9,pCVar10->r,pCVar10->g,pCVar10->b,pCVar10->a);
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  if ((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
     (pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                          (int32_t)pOVar2,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         ), pIVar6 == (IEventSystemHandler *)0x0)) goto code_?;
  pIVar11 = pIVar6[2].klass;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  if (pIVar11 == (IEventSystemHandler__Class *)0x0) goto code_?;
  func_?(0x49,pIVar11,TypeInfo__System__String->static_fields->Empty);
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  if (((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
      (pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                           (int32_t)pOVar2,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          ), pIVar6 == (IEventSystemHandler *)0x0)) ||
     (pIVar6[1].monitor == (MonitorData *)0x0)) goto code_?;
  func_?(0x49,pIVar6[1].monitor,TypeInfo__System__String->static_fields->Empty);
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  if (((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
      (pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                           (int32_t)pOVar2,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          ), pIVar6 == (IEventSystemHandler *)0x0)) ||
     (pIVar6[1].klass == (IEventSystemHandler__Class *)0x0)) goto code_?;
  func_?(0x49,pIVar6[1].klass,TypeInfo__System__String->static_fields->Empty);
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  if ((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
     (pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                          (int32_t)pOVar2,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         ), pIVar6 == (IEventSystemHandler *)0x0)) goto code_?;
  pIVar6[3].klass = (IEventSystemHandler__Class *)0xffffffff;
  pOVar2 = (Object *)((int)&pOVar2->klass + 1);
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
  goto code_?;
}


/* Void Initialize(GameStatCounterType) */

void Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_Initialize
               (ScoreBoardTeamBase *this,GameStatCounterType__Enum statType,MethodInfo *method)

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
  ScoreBoardBase::ScoreBoardBase_Initialize((ScoreBoardBase *)this,statType,(MethodInfo *)0x0);
  ScoreBoardTeamBase_AddTeamsToScoreBoard(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVAvatar *)0x0) {
    this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0);
    if ((this_01 != (MVRuntimeDataVariableClampedFloat *)0x0) &&
       (this_02 = MVPlayerContainer::MVPlayerContainer_get_Values
                            ((MVPlayerContainer *)this_01,(MethodInfo *)0x0),
       this_02 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                  *)&pDStack_4,
                 (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)
                 this_02,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                );
      uStack_1 = 0;
      while( true ) {
        cVar5 = func_?();
        if (cVar5 == '\0') {
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        this_03 = (MVPlayer *)func_?();
        if (this_03 == (MVPlayer *)0x0) break;
        ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
        NamedThemeAttribute_1_UnityEngine_Color__get_Name
                  ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_03,(MethodInfo *)0x0);
        MVPlayer::MVPlayer_GetGameStat(this_03,statType,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).OnStatsChange.method)();
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean IsNewScoreBetter(Int32, Int32, Int32, Int32) */

bool Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_IsNewScoreBetter
               (ScoreBoardTeamBase *this,int32_t newScore,int32_t oldScore,int32_t newId,
               int32_t oldId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (newScore == oldScore) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      unaff_EDI = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
      if (unaff_EDI != (SkyParam *)0x0) {
        newScore = (int32_t)MVTeamManager::MVTeamManager_GetPlayersInTeam
                                      ((MVTeamManager *)unaff_EDI,newId,(MethodInfo *)0x0);
        if ((List_1_MVPlayer_ *)newScore != (List_1_MVPlayer_ *)0x0) {
          this = (ScoreBoardTeamBase *)&UNK_?;
          pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)newScore,
                              MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__)
          ;
          if (pOVar2 == (Object *)0x0) {
            return 0;
          }
          unaff_EBP = (MethodInfo *)newId;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            oldId = (int32_t)TypeInfo__MVGameControllerBase;
            func_?();
            unaff_EBP = (MethodInfo *)newId;
          }
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVNetworkGame *)0x0) {
            this_00 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
            if (this_00 != (SkyParam *)0x0) {
              this_01 = MVTeamManager::MVTeamManager_GetPlayersInTeam
                                  ((MVTeamManager *)this_00,oldId,(MethodInfo *)0x0);
              if (this_01 != (List_1_MVPlayer_ *)0x0) {
                pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                    this_01,
                                    MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__
                                   );
                if (pOVar2 == (Object *)0x0) {
                  return 1;
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
    func_?(0);
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
code_?:
  bVar4 = ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter_1
                    ((ScoreBoardBase *)this,newScore,oldScore,0,(int32_t)unaff_EDI,unaff_EBP);
  return bVar4;
}


/* Void OnStatsChange(Int32, Int32) */

void Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_OnStatsChange
               (ScoreBoardTeamBase *this,int32_t actorNumber,int32_t scoreCount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_01 != (MVAvatar *)0x0) &&
     (this_02 = MVAvatar::MVAvatar_get_Shield(this_01,(MethodInfo *)0x0),
     this_02 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    bVar1 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                      ((MVPlayerContainer *)this_02,actorNumber,(MVPlayer **)&stack0xfffffff8,
                       (MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_00 = (this->fields)._.scoreBoardPlayerData;
    if (this_00 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                         );
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                          (int32_t)((int)&pOVar2[-1].monitor + 3),
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         );
      if (pIVar3 != (IEventSystemHandler *)0x0) {
        bVar1 = ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter_1
                          ((ScoreBoardBase *)this,unaff_EDI,(int32_t)pIVar3[3].klass,0,
                           in_stack_4,in_stack_5);
        if (bVar1 != 0) {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          playerName = TypeInfo__System__String->static_fields->Empty;
          if ((MVPlayer *)actorNumber == (MVPlayer *)0x0) goto code_?;
          id = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         ((KogamaSettingNumericBase_1_System_Single_ *)actorNumber,(MethodInfo *)0x0
                         );
          ScoreBoardBase::ScoreBoardBase_SortNewScore
                    ((ScoreBoardBase *)this,playerName,(int32_t)id,unaff_EDI,0,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ReSortScoreBoard() */

void Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_ReSortScoreBoard
               (ScoreBoardTeamBase *this,MethodInfo *method)

{
  ScoreBoardBase::ScoreBoardBase_ReSortScoreBoard((ScoreBoardBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  while( true ) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                       ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (pSVar2 == (SkyParam *)0x0) break;
    this_00 = MVTeamManager::MVTeamManager_GetTeamList((MVTeamManager *)pSVar2,(MethodInfo *)0x0);
    if (this_00 == (List_1_MV_WorldObject_MVTeam_ *)0x0) break;
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                       );
    if ((int)pOVar3 <= index) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) break;
    pSVar2 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                       ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
    if (pSVar2 == (SkyParam *)0x0) break;
    this_01 = MVTeamManager::MVTeamManager_GetTeamList((MVTeamManager *)pSVar2,(MethodInfo *)0x0);
    if (this_01 == (List_1_MV_WorldObject_MVTeam_ *)0x0) break;
    team = mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::MVTeam]::
           List_1_MV_WorldObject_MVTeam__get_Item
                     (this_01,index,
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                     );
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    playerName = TypeInfo__System__String->static_fields->Empty;
    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_02 == (MVNetworkGame *)0x0) break;
    this_03 = (GameStatCounterManager *)
              DayNightCycle::DayNightCycle_get_CurrentStarsParam
                        ((DayNightCycle *)this_02,(MethodInfo *)0x0);
    if (this_03 == (GameStatCounterManager *)0x0) break;
    scoreCount = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                           (this_03,CONCAT31((int3)((uint)this_00 >> 8),
                                             *(undefined1 *)
                                              &(pMVar1->fields).ReceivedAvatarBodiesFromQuery),team,
                            (MethodInfo *)0x0);
    ScoreBoardBase::ScoreBoardBase_SortNewScore
              ((ScoreBoardBase *)pMVar1,playerName,team,scoreCount,0,(MethodInfo *)0x0);
    index = index + 1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UnSubscribeToCallbacks() */

void Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_UnSubscribeToCallbacks
               (ScoreBoardTeamBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 == (MVNetworkGame *)0x0) {
        func_?();
        pAStack3 = extraout_ECX;
        pAStack4 = extraout_EDX;
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pAVar6 = (pMVar2->fields).OnWinningConditionFulfilled;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action<IWinningCondition>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__ScoreBoardBase__OnWinningConditionFulfilled_IWinningCondition_,
                 MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
      pAStack3 =
           (Action_1_IWinningCondition_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar6,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar6 = (Action_1_IWinningCondition_ *)0x0;
      if (pAStack3 != (Action_1_IWinningCondition_ *)0x0) {
        if (pAStack3->klass == TypeInfo__System__Action<IWinningCondition>) {
          pAVar6 = pAStack3;
        }
        pAStack4 = TypeInfo__System__Action<IWinningCondition>;
        if (pAVar6 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
      }
      (pMVar2->fields).OnWinningConditionFulfilled = pAVar6;
    }
  }
  return;
}

