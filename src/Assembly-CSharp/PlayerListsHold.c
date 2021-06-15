
/* PlayerListHold CreatePlayerList(MVTeam, Int32) */

PlayerListHold *
Assembly-CSharp.dll::PlayerListsHold::PlayerListsHold_CreatePlayerList
          (PlayerListsHold *this,MVTeam__Enum team,int32_t score,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).playerListPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pPVar1 = (PlayerListHold *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pPVar1,
                      PlayerListHold_MethodInfo__UnityEngine__Object__Instantiate<PlayerListHold>_PlayerListHold_
                     );
  if (pPVar1 != (PlayerListHold *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pPVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).gridGroup;
    if (this_00 != (GridLayoutGroup *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,parent,0,(MethodInfo *)0x0);
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pPVar1,(MethodInfo *)0x0);
        if (this_02 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_02,1,(MethodInfo *)0x0);
          puStack2 = (undefined *)team;
          (*(code *)(pPVar1->klass->vtable).Initialize.method)();
          return pPVar1;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pPVar1 = (PlayerListHold *)(*pcVar3)();
  return pPVar1;
}


/* Void CreatePlayerLists(IEnumerable`1[MVPlayer], List`1[MV.WorldObject.MVTeam]) */

void Assembly-CSharp.dll::PlayerListsHold::PlayerListsHold_CreatePlayerLists
               (PlayerListsHold *this,IEnumerable_1_MVPlayer_ *players,
               List_1_MV_WorldObject_MVTeam_ *teams,MethodInfo *method)

{
  uStack_1 = 0xff;
  uStack_2 = 0xffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff64;
  puVar6 = &stack0xffffff64;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  KStack_7.key = 0;
  KStack_7.value = 0;
  pCStack_8 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_9.monitor = (MonitorData *)0x0;
  CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_9.fields.syncRoot = (Object *)0x0;
  pCStack_10 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  func_?();
  pCVar11 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0xffffffff;
  pCStack_12 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0xffffffff;
  piStack_13 = (int *)&stack0xffffff64;
  puStack_5 = &stack0xffffff64;
  if (teams == (List_1_MV_WorldObject_MVTeam_ *)0x0) {
code_?:
    pCVar14 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)func_?(0);
  }
  else {
    piStack_13 = (int *)&stack0xffffff64;
    puStack_5 = &stack0xffffff64;
    pOStack_15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)teams,
                            MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                           );
    cStack_16 = '\0';
    if (pOStack_15 != (Object *)0x1) {
      if (2 < (int)pOStack_15) {
        fStack_17 = (this->fields).cellSize4Teams.x;
        this_04 = (this->fields).gridGroup;
        pOStack_18 = (Object *)(this->fields).cellSize4Teams.y;
        if (this_04 != (GridLayoutGroup *)0x0) goto code_?;
        goto code_?;
      }
      if ((int)pOStack_15 < 2) goto code_?;
      fStack_17 = (this->fields).cellSize2Teams.x;
      this_04 = (this->fields).gridGroup;
      pOStack_18 = (Object *)(this->fields).cellSize2Teams.y;
      if (this_04 != (GridLayoutGroup *)0x0) goto code_?;
code_?:
      func_?();
      goto code_?;
    }
    cStack_16 = '\x01';
code_?:
    fStack_17 = (this->fields).cellSize1Team.x;
    this_04 = (this->fields).gridGroup;
    pOStack_18 = (Object *)(this->fields).cellSize1Team.y;
    if (this_04 == (GridLayoutGroup *)0x0) {
code_?:
      func_?();
      goto code_?;
    }
code_?:
    value.y = (float)pOStack_18;
    value.x = fStack_17;
    UnityEngine.UI.dll::UnityEngine::UI::GridLayoutGroup::GridLayoutGroup_set_cellSize
              (this_04,value,(MethodInfo *)0x0);
    unaff_ESI = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)func_?()
    ;
    pCStack_19 = unaff_ESI;
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)unaff_ESI,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__Dictionary__
              );
    pCStack_20 = unaff_ESI;
    if (cStack_16 != '\0') {
      pPVar21 = PlayerListsHold_CreatePlayerList(this,MVTeam__Enum_None,0,(MethodInfo *)0x0);
      if (unaff_ESI == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
      Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
                ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)unaff_ESI,MVTeam__Enum_None,
                 (Object *)pPVar21,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__Add_MV__WorldObject__MVTeam__PlayerListHold_
                );
code_?:
      if ((int)pOStack_15 < 1) {
code_?:
        *unaff_FS_OFFSET = uStack_4;
        return;
      }
      this_02 = PlayerListsHold_GetSortedTeamLists(this,players,teams,(MethodInfo *)0x0);
      if (this_02 != (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
        Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                  ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                   auStack_22,(Dictionary_2_WinningConditionType_System_Object_ *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                  );
        uStack_1 = 2;
        uStack_2 = 0;
        while( true ) {
          pCVar14 = pCVar11;
          pCStack_10 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
                       &UNK_?;
          cVar23 = func_?();
          pCVar11 = pCStack_8;
          if (cVar23 == '\0') break;
          pCStack_10 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
                       &UNK_?;
          KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                                ((LevelRewardsManager *)&stack0xffffff70,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Current__
                                );
          CStack_9.klass =
               (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
               MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Value__
          ;
          this_03 = (List_1_UnityEngine_Color32_ *)func_?();
          if (this_03 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
          pLVar24 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                   List_1_UnityEngine_Color32__GetEnumerator
                             ((List_1_T_Enumerator_UnityEngine_Color32_ *)(auStack_22 + 4),this_03,
                              MethodInfo__System__Collections__Generic__List<MVPlayer>__GetEnumerator__
                             );
          pCStack_10 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar24->l;
          uStack_1 = 3;
code_?:
          cVar23 = func_?(&pCStack_10,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__MoveNext__
                                 );
          if (cVar23 != '\0') {
            unaff_ESI = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
                        mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   &pCStack_10,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__get_Current__
                                  );
            if (unaff_ESI != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0)
            {
              key = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
                    KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
                    KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                              ((KogamaSettingNumericBase_1_System_Single_ *)unaff_ESI,
                               (MethodInfo *)0x0);
              if (cStack_16 == '\0') goto code_?;
              key = (IKogamaSetting *)0x5;
              goto code_?;
            }
            goto code_?;
          }
          unaff_ESI = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
                      ((int)&(pCVar14->_0).image + 1);
          uStack_1 = 2;
          piStack_13[(int)unaff_ESI] = 0x17f;
          pCStack_12 = unaff_ESI;
          func_?(&pCStack_10,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVPlayer>__Dispose__
                         );
          pCStack_10 = pCStack_8;
          if (pCStack_8 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0)
          goto code_?;
          pCVar11 = unaff_ESI;
          if (((unaff_ESI !=
                (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0xffffffff) &&
              (piStack_13[(int)unaff_ESI] == 0x17f)) &&
             (pCVar11 = pCVar14, pCStack_12 = pCVar14, (int)unaff_ESI < 0)) {
            pCVar11 = unaff_ESI;
            pCStack_12 = unaff_ESI;
          }
        }
        piStack_13[(int)((int)&(pCVar14->_0).image + 1)] = 0x19e;
        uStack_1 = 0xff;
        uStack_2 = 0xffffff;
        pCStack_10 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
                     &UNK_?;
        func_?();
        if (pCVar11 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0)
        goto code_?;
        goto code_?;
      }
      goto code_?;
    }
    pLVar24 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)(auStack_22 + 4),
                        (List_1_UnityEngine_Color32_ *)teams,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                       );
    CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar24->l;
    CStack_9.monitor = (MonitorData *)pLVar24->next;
    CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar24->ver;
    CStack_9.fields.syncRoot = (Object *)(pLVar24->current).rgba;
    uStack_1 = 0;
    uStack_2 = 0;
    while (cVar23 = func_?(&CStack_9,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                                  ), cVar23 != '\0') {
      pOStack_25 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (&CStack_9,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                             );
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_00 == (MVNetworkGame *)0x0) goto code_?;
      this_01 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                          ((DayNightCycle *)this_00,(MethodInfo *)0x0);
      pOStack_18 = (Object *)CONCAT31(pOStack_18._1_3_,(this->fields).typeToDisplay);
      if (this_01 == (SkyParam *)0x0) goto code_?;
      score = MVTeamManager::MVTeamManager_GetScore
                        ((MVTeamManager *)this_01,(MVTeam__Enum)pOStack_25,
                         (GameStatCounterType__Enum)pOStack_18,(MethodInfo *)0x0);
      pPVar21 = PlayerListsHold_CreatePlayerList
                         (this,(MVTeam__Enum)pOStack_25,score,(MethodInfo *)0x0);
      if (unaff_ESI == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
      Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
                ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)unaff_ESI,
                 (MVTeam__Enum)pOStack_25,(Object *)pPVar21,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__Add_MV__WorldObject__MVTeam__PlayerListHold_
                );
    }
    pCVar11 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
    pCStack_12 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
    *piStack_13 = 0xd5;
    uStack_1 = 0xff;
    uStack_2 = 0xffffff;
    func_?(&CStack_9,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                   );
    pCVar14 = pCStack_8;
    if (pCStack_8 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0) {
      if (*piStack_13 == 0xd5) {
        pCVar11 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0xffffffff;
        pCStack_12 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0xffffffff;
      }
      pOStack_18 = (Object *)CONCAT31(pOStack_18._1_3_,(this->fields).typeToDisplay);
      PlayerListsHold_SortPlayerListsAfterScore
                (this,(Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)unaff_ESI,teams,
                 (GameStatCounterType__Enum)pOStack_18,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  pCStack_10 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
               func_?(pCVar14,0,0);
code_?:
  func_?();
  pCVar11 = unaff_ESI;
code_?:
  pCStack_10 = pCVar11;
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
code_?:
  if (key != (IKogamaSetting *)0x5) {
code_?:
    if ((pCStack_19 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0) ||
       (pOVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 MVTeam,System::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                           ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pCStack_19,
                            (MVTeam__Enum)key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__get_Item_MV__WorldObject__MVTeam_
                           ), pOVar27 == (Object *)0x0)) goto code_?;
    func_?(5,pOVar27,unaff_ESI);
  }
  goto code_?;
}


/* Dictionary`2[MV.WorldObject.MVTeam,List`1[MVPlayer]] GetSortedTeamLists(IEnumerable`1[MVPlayer],
   List`1[MV.WorldObject.MVTeam]) */

Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *
Assembly-CSharp.dll::PlayerListsHold::PlayerListsHold_GetSortedTeamLists
          (PlayerListsHold *this,IEnumerable_1_MVPlayer_ *players,
          List_1_MV_WorldObject_MVTeam_ *teams,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff70;
  puVar5 = &stack0xffffff70;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_03 = (KogamaSettingNumericBase_1_System_Single_ *)0x0;
  iStack_6 = 0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  func_?();
  uStack_9 = 0xffffffff;
  piStack_10 = (int *)&stack0xffffff70;
  puStack_4 = &stack0xffffff70;
  pDVar11 = (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>
                          );
  pDStack_12 = pDVar11;
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar11,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Dictionary__
            );
  pDStack_13 = pDVar11;
  if (teams != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
    pLVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)(auStack_15 + 4),
                        (List_1_UnityEngine_Color32_ *)teams,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                       );
    CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar14->l;
    CStack_7.monitor = (MonitorData *)pLVar14->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar14->ver;
    CStack_7.fields.syncRoot = (Object *)(pLVar14->current).rgba;
    uStack_1 = 0;
    while (cVar16 = func_?(), cVar16 != '\0') {
      this_03 = (KogamaSettingNumericBase_1_System_Single_ *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_7,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                          );
      this_00 = (List_1_UnityEngine_Vector4_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
      List_1_UnityEngine_Vector4___ctor
                (this_00,MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
      if (pDStack_12 == (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
      Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
                ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDStack_12,
                 (MVTeam__Enum)this_03,(Object *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__List<MVPlayer>_
                );
    }
    uStack_9 = 0;
    this_03 = (KogamaSettingNumericBase_1_System_Single_ *)0x0;
    *piStack_10 = 0x45;
    teams = (List_1_MV_WorldObject_MVTeam_ *)0x0;
    uStack_1 = 0xffffffff;
    func_?();
    if (*piStack_10 == 0x45) {
      teams = (List_1_MV_WorldObject_MVTeam_ *)0xffffffff;
      uStack_9 = 0xffffffff;
    }
    if (players != (IEnumerable_1_MVPlayer_ *)0x0) {
      piVar17 = (int *)func_?(0,
                                      TypeInfo__System__Collections__Generic__IEnumerable<MVPlayer>)
      ;
      uStack_1 = 2;
      piStack_18 = piVar17;
      while (piVar17 != (int *)0x0) {
        iStack_19 = *piVar17;
        uVar20 = 0;
        uStack_21 = 0;
        uVar22 = *(ushort *)(iStack_19 + 0xb6);
        uStack_23 = (uint)uVar22;
        if (uVar22 != 0) {
          do {
            piVar17 = piStack_18;
            if (*(IEnumerator__Class **)(*(int *)(iStack_19 + 0x58) + (uint)uVar20 * 8) ==
                TypeInfo__System__Collections__IEnumerator) {
              puVar24 = (undefined4 *)
                       (*piStack_18 +
                       (*(int *)(*(int *)(*piStack_18 + 0x58) + 4 + (uint)uVar20 * 8) + 0x19) * 8);
              goto code_?;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar22);
        }
        puVar24 = (undefined4 *)func_?(piVar17,TypeInfo__System__Collections__IEnumerator);
code_?:
        cVar16 = (*(code *)*puVar24)(piVar17);
        if (cVar16 == '\0') {
          pLVar25 = (List_1_MV_WorldObject_MVTeam_ *)((int)&teams->klass + 1);
          piStack_10[(int)pLVar25] = 0x9d;
          uStack_1 = 0xffffffff;
          if (piVar17 != (int *)0x0) {
            func_?(0,TypeInfo__System__IDisposable);
          }
          iVar26 = iStack_6;
          if (iStack_6 != 0) goto code_?;
          if (((pLVar25 != (List_1_MV_WorldObject_MVTeam_ *)0xffffffff) &&
              (piStack_10[(int)pLVar25] == 0x9d)) && (-1 < (int)pLVar25)) {
            pLVar25 = teams;
          }
          teams = pLVar25;
          this_03 = (KogamaSettingNumericBase_1_System_Single_ *)0x0;
          if (pDStack_12 != (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)0x0) {
            pDVar11 = pDStack_12;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
            Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                      ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                       auStack_15,(Dictionary_2_WinningConditionType_System_Object_ *)pDStack_12,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__GetEnumerator__
                      );
            uStack_1 = 4;
            goto code_?;
          }
          break;
        }
        iStack_19 = *piVar17;
        uVar20 = 0;
        uStack_23 = 0;
        uVar22 = *(ushort *)(iStack_19 + 0xb6);
        uStack_21 = (uint)uVar22;
        if (uVar22 != 0) {
          do {
            piVar17 = piStack_18;
            if (*(IEnumerator_1_MVPlayer___Class **)(*(int *)(iStack_19 + 0x58) + (uint)uVar20 * 8)
                == TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>) {
              puVar24 = (undefined4 *)
                       (*piStack_18 +
                       (*(int *)(*(int *)(*piStack_18 + 0x58) + 4 + (uint)uVar20 * 8) + 0x18) * 8);
              goto code_?;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < uVar22);
        }
        puVar24 = (undefined4 *)
                 func_?(piVar17,
                                 TypeInfo__System__Collections__Generic__IEnumerator<MVPlayer>);
code_?:
        this_03 = (KogamaSettingNumericBase_1_System_Single_ *)(*(code *)*puVar24)(piVar17);
        if (this_03 == (KogamaSettingNumericBase_1_System_Single_ *)0x0) break;
        key = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
              KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
              KogamaSettingNumericBase_1_System_Single__get_KogamaSetting(this_03,(MethodInfo *)0x0)
        ;
        if (key != (IKogamaSetting *)0x5) {
          if ((pDStack_12 == (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)0x0) ||
             (this_01 = (List_1_UIPushOption_ *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                        MVTeam,System::Object]::
                        Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                                  ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDStack_12,
                                   (MVTeam__Enum)key,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Item_MV__WorldObject__MVTeam_
                                  ), this_01 == (List_1_UIPushOption_ *)0x0)) break;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    (this_01,(UIPushOption__Enum)this_03,
                     MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
        }
      }
    }
  }
code_?:
  func_?();
  iVar26 = func_?(this_03,0);
code_?:
  func_?(iVar26,0);
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  pDVar11 = (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)(*pcVar27)();
  return pDVar11;
code_?:
  cVar16 = func_?();
  pDVar28 = pDStack_12;
  iVar26 = iStack_6;
  if (cVar16 == '\0') goto code_?;
  KStack_8 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                        ((LevelRewardsManager *)&stack0xffffff7c,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::List<MVPlayer>_>__get_Current__
                        );
  this_02 = (List_1_VoxelHit_ *)func_?();
  pDVar28 = (Dictionary_2_MV_WorldObject_MVTeam_List_1_MVPlayer_ *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)pDVar28,0.0,(MethodInfo *)pDVar11);
  this_03 = (KogamaSettingNumericBase_1_System_Single_ *)0x0;
  if (this_02 == (List_1_VoxelHit_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__Sort_1
            (this_02,(IComparer_1_VoxelHit_ *)pDVar28,
             MethodInfo__System__Collections__Generic__List<MVPlayer>__Sort_System__Collections__Generic__IComparer<MVPlayer>_
            );
  pDVar11 = pDVar28;
  goto code_?;
code_?:
  piStack_10[(int)((int)&teams->klass + 1)] = 0xe3;
  uStack_1 = 0xffffffff;
  func_?();
  if (iVar26 == 0) {
    *unaff_FS_OFFSET = uStack_3;
    return pDVar28;
  }
  goto code_?;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerListsHold::PlayerListsHold_OnDestroy
               (PlayerListsHold *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVAvatar *)0x0) {
    pMVar1 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      pDVar2 = (Delegate *)(pMVar1->fields)._._.sendInterval;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,MethodInfo__PlayerListsHold__ReCreate__,(MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pDVar2 = (Delegate *)0x0;
      if (pDVar4 != (Delegate *)0x0) {
        if ((Action__Class *)pDVar4->klass == TypeInfo__System__Action) {
          pDVar2 = pDVar4;
        }
        pFVar5 = (FriendList_OnFriendListUpdatedDelegate__Class *)TypeInfo__System__Action;
        if (pDVar2 == (Delegate *)0x0) goto code_?;
      }
      (pMVar1->fields)._._.sendInterval = (float)pDVar2;
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_01 != (MVNetworkGame *)0x0) {
        pTVar6 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                           ((CloudyThemeBase *)this_01,(MethodInfo *)0x0);
        if (pTVar6 != (ThemeSkybox *)0x0) {
          pDVar2 = (pTVar6->fields)._._._._._.m_CachedPtr;
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)this,MethodInfo__PlayerListsHold__ReCreate__,(MethodInfo *)0x0
                    );
          pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                             (pDVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
          pDVar2 = (Delegate *)0x0;
          if (pDVar4 == (Delegate *)0x0) {
code_?:
            (pTVar6->fields)._._._._._.m_CachedPtr = pDVar2;
            return;
          }
          if ((FriendList_OnFriendListUpdatedDelegate__Class *)pDVar4->klass ==
              TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
            pDVar2 = pDVar4;
          }
          pFVar5 = TypeInfo__FriendList__OnFriendListUpdatedDelegate;
          if (pDVar2 != (Delegate *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?();
  pDVar4 = extraout_ECX;
  pFVar5 = (FriendList_OnFriendListUpdatedDelegate__Class *)extraout_EDX;
code_?:
  func_?(pDVar4,pFVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ReCreate() */

void Assembly-CSharp.dll::PlayerListsHold::PlayerListsHold_ReCreate
               (PlayerListsHold *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerListsHold___ReCreate_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__PlayerListsHold->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__PlayerListsHold___ReCreate_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__PlayerListsHold->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
  }
  pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__PlayerListsHold->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,pEVar3,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  original = (this->fields).playerListsPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)original,
                      PlayerListsHold_MethodInfo__UnityEngine__Object__Instantiate<PlayerListsHold>_PlayerListsHold_
                     );
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = pXVar4;
    uVar5 = (this->fields).typeToDisplay;
    if (pXVar4 != (XpBoostParticlePreviewer *)0x0) {
      (pXVar4->fields).layersToRender = (int32_t)(this->fields).playerListsPrefab;
      *(uint8_t *)&pXVar4[1].fields.layersToRender = uVar5;
      this = (PlayerListsHold *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__PlayerListsHold->static_fields->__f__am_cache1 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        this = (PlayerListsHold *)
               MethodInfo__PlayerListsHold___ReCreate_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
        ;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)0x0,
                   MethodInfo__PlayerListsHold___ReCreate_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__PlayerListsHold->static_fields->__f__am_cache1 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
      }
      pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__PlayerListsHold->static_fields->__f__am_cache1;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                ((GameObject *)this,(BaseEventData *)0x0,pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this_00,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this_01,
                 MethodInfo__PlayerListsHold___ReCreate_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SortPlayerListsAfterScore(Dictionary`2[MV.WorldObject.MVTeam,PlayerListHold],
   List`1[MV.WorldObject.MVTeam], GameStatCounterType) */

void Assembly-CSharp.dll::PlayerListsHold::PlayerListsHold_SortPlayerListsAfterScore
               (PlayerListsHold *this,
               Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *playerLists,
               List_1_MV_WorldObject_MVTeam_ *teams,GameStatCounterType__Enum typeToDisplay,
               MethodInfo *method)

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
  LStack_6.klass = (List_1_UnityEngine_Color32___Class *)0x0;
  LStack_6.monitor = (MonitorData *)0x0;
  LStack_6.fields._items = (Color32__Array *)0x0;
  LStack_6.fields._size = 0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  this_00 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)
            func_?(TypeInfo__System__Collections__Generic__List<PlayerListHold>);
  method_01 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)&UNK_?;
  pDStack_8 = this_00;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_00,
             MethodInfo__System__Collections__Generic__List<PlayerListHold>__List__);
  if (teams == (List_1_MV_WorldObject_MVTeam_ *)0x0) {
code_?:
    pDVar9 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)0x0;
  }
  else {
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_11,
                        (List_1_UnityEngine_Color32_ *)teams,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                       );
    LStack_6.klass = (List_1_UnityEngine_Color32___Class *)pLVar10->l;
    LStack_6.monitor = (MonitorData *)pLVar10->next;
    LStack_6.fields._items = (Color32__Array *)pLVar10->ver;
    LStack_6.fields._size = (pLVar10->current).rgba;
    uStack_1 = 0;
    while( true ) {
      do {
        auStack_11._4_4_ =
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
        ;
        auStack_11._0_4_ = &LStack_6;
        cVar12 = func_?();
        if (cVar12 == '\0') {
          *puStack_7 = 0xe9;
          uStack_1 = 0xffffffff;
          func_?(&LStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                         );
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pDStack_13 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)
                     mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                &LStack_6,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                               );
        bVar14 = false;
        unaff_ESI = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)0x0;
        while( true ) {
          if (this_00 == (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)0x0)
          goto code_?;
          pOVar15 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                              MethodInfo__System__Collections__Generic__List<PlayerListHold>__get_Count__
                             );
          if ((int)pOVar15 <= (int)unaff_ESI) break;
          if (bVar14) {
            pDVar9 = this_00;
            in_stack_16 =
                 (MVGameControllerBase__Class *)
                 MethodInfo__System__Collections__Generic__List<PlayerListHold>__get_Item_int_;
            pCVar17 = (Component_1 *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                                (int32_t)unaff_ESI,
                                MethodInfo__System__Collections__Generic__List<PlayerListHold>__get_Item_int_
                               );
            if (pCVar17 == (Component_1 *)0x0) goto code_?;
            pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               (pCVar17,(MethodInfo *)0x0);
            method_01 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)0x0;
            if (pTVar18 == (Transform *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                      (pTVar18,(MethodInfo *)0x0);
            unaff_ESI = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)
                        ((int)&unaff_ESI->klass + 1);
          }
          else {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              in_stack_16 = TypeInfo__MVGameControllerBase;
              func_?();
            }
            pMVar19 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            pDVar9 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)0x0;
            if (pMVar19 == (MVNetworkGame *)0x0) goto code_?;
            pSVar20 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                ((DayNightCycle *)pMVar19,(MethodInfo *)0x0);
            pDVar9 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)0x0;
            if (pSVar20 == (SkyParam *)0x0) goto code_?;
            iStack_21 = MVTeamManager::MVTeamManager_GetScore
                                  ((MVTeamManager *)pSVar20,(MVTeam__Enum)pDStack_13,typeToDisplay,
                                   (MethodInfo *)in_stack_16);
            pMVar19 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            pDVar9 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)0x0;
            if (pMVar19 == (MVNetworkGame *)0x0) goto code_?;
            pSVar20 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                                ((DayNightCycle *)pMVar19,(MethodInfo *)method_01);
            method_01 = pDStack_8;
            method_00 = (MethodInfo *)
                        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                   pDStack_8,(int32_t)unaff_ESI,
                                   MethodInfo__System__Collections__Generic__List<PlayerListHold>__get_Item_int_
                                  );
            if (method_00 == (MethodInfo *)0x0) goto code_?;
            team = func_?();
            pDVar9 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)0x0;
            if (pSVar20 == (SkyParam *)0x0) goto code_?;
            in_stack_16 =
                 (MVGameControllerBase__Class *)
                 MVTeamManager::MVTeamManager_GetScore
                           ((MVTeamManager *)pSVar20,team,typeToDisplay,(MethodInfo *)0x0);
            bVar22 = WinningConditionControl::WinningConditionControl_IsNewScoreBetter
                              (iStack_21,(int32_t)in_stack_16,typeToDisplay,(MethodInfo *)0x0)
            ;
            if (bVar22 == 0) {
              unaff_ESI = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)
                          ((int)&unaff_ESI->klass + 1);
              this_00 = pDStack_8;
            }
            else {
              if (playerLists == (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)0x0)
              goto code_?;
              pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                       MVTeam,System::Object]::
                       Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                                 ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)playerLists,
                                  (MVTeam__Enum)pDStack_13,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__get_Item_MV__WorldObject__MVTeam_
                                 );
              this_00 = pDStack_8;
              method_01 = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)&UNK_?;
              item._4_4_ = 
              MethodInfo__System__Collections__Generic__List<PlayerListHold>__Insert_int__PlayerListHold_
              ;
              item.rgba = (int32_t)pOVar15;
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
              List_1_UnityEngine_Color32__Insert
                        ((List_1_UnityEngine_Color32_ *)pDStack_8,(int32_t)unaff_ESI,item,method_00
                        );
              bVar14 = true;
              unaff_ESI = (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)
                          ((int)&unaff_ESI->klass + 1);
            }
          }
        }
      } while (bVar14);
      unaff_ESI = playerLists;
      if (playerLists == (Dictionary_2_MV_WorldObject_MVTeam_PlayerListHold_ *)0x0)
      goto code_?;
      pDVar9 = playerLists;
      pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               MVTeam,System::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                         ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)playerLists,
                          (MVTeam__Enum)pDStack_13,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__get_Item_MV__WorldObject__MVTeam_
                         );
      in_stack_16 = (MVGameControllerBase__Class *)&UNK_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)pOVar15,
                 MethodInfo__System__Collections__Generic__List<PlayerListHold>__Add_PlayerListHold_
                );
      method_01 = pDStack_13;
      pCVar17 = (Component_1 *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               MVTeam,System::Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__get_Item
                         ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)playerLists,
                          (MVTeam__Enum)pDStack_13,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_PlayerListHold>__get_Item_MV__WorldObject__MVTeam_
                         );
      if (pCVar17 == (Component_1 *)0x0) break;
      pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         (pCVar17,(MethodInfo *)0x0);
      if (pTVar18 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                (pTVar18,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?(pDVar9);
  func_?(unaff_ESI,0,0);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PlayerListsHold::PlayerListsHold_Start
               (PlayerListsHold *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVAvatar *)0x0) {
    pMVar2 = MVAvatar::MVAvatar_get_Shield(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      players = MVPlayerContainer::MVPlayerContainer_get_Values
                          ((MVPlayerContainer *)pMVar2,(MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame *)0x0) {
        this_00 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)pMVar3,(MethodInfo *)0x0);
        if (this_00 != (SkyParam *)0x0) {
          teams = MVTeamManager::MVTeamManager_GetTeamList
                            ((MVTeamManager *)this_00,(MethodInfo *)0x0);
          PlayerListsHold_CreatePlayerLists
                    ((PlayerListsHold *)pMVar3,(IEnumerable_1_MVPlayer_ *)players,teams,
                     (MethodInfo *)0x0);
          pMVar1 = (MVAvatar *)
                   MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar1 != (MVAvatar *)0x0) {
            pMVar2 = MVAvatar::MVAvatar_get_Shield(pMVar1,(MethodInfo *)0x0);
            if (pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0) {
              pAStack4 = TypeInfo__System__Action;
              pDVar5 = (Delegate *)(pMVar2->fields)._._.sendInterval;
              pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar6,(Object *)MethodInfo__PlayerListsHold__ReCreate__,
                         MethodInfo__PlayerListsHold__ReCreate__,(MethodInfo *)0x0);
              pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                                 (pDVar5,(Delegate *)pUVar6,(MethodInfo *)0x0);
              pDVar5 = (Delegate *)0x0;
              if (pDVar7 != (Delegate *)0x0) {
                if ((Action__Class *)pDVar7->klass == TypeInfo__System__Action) {
                  pDVar5 = pDVar7;
                }
                if (pDVar5 == (Delegate *)0x0) goto code_?;
              }
              (pMVar2->fields)._._.sendInterval = (float)pDVar5;
              pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (pMVar3 != (MVNetworkGame *)0x0) {
                pTVar8 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                                   ((CloudyThemeBase *)pMVar3,(MethodInfo *)0x0);
                if (pTVar8 != (ThemeSkybox *)0x0) {
                  pDVar5 = (pTVar8->fields)._._._._._.m_CachedPtr;
                  pUVar6 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar6,(Object *)0x0,MethodInfo__PlayerListsHold__ReCreate__,
                             (MethodInfo *)0x0);
                  pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                                     (pDVar5,(Delegate *)pUVar6,(MethodInfo *)0x0);
                  pDVar5 = (Delegate *)0x0;
                  if (pDVar7 == (Delegate *)0x0) {
code_?:
                    (pTVar8->fields)._._._._._.m_CachedPtr = pDVar5;
                    return;
                  }
                  if ((FriendList_OnFriendListUpdatedDelegate__Class *)pDVar7->klass ==
                      TypeInfo__FriendList__OnFriendListUpdatedDelegate) {
                    pDVar5 = pDVar7;
                  }
                  if (pDVar5 != (Delegate *)0x0) goto code_?;
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void <ReCreate>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerListsHold::PlayerListsHold__ReCreate_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <ReCreate>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerListsHold::PlayerListsHold__ReCreate_m__1
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,0xc);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

