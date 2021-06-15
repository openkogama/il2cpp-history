
/* List`1[ScoreActorEntry] GenerateActorScores() */

List_1_ScoreActorEntry_ *
MVWorldObject.dll::HighScores::HighScores_GenerateActorScores(HighScores *this,MethodInfo *method)

{
  uStack_1 = 0xff;
  uStack_2 = 0xffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff78;
  puVar6 = &stack0xffffff78;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  pMStack_7 = (MVPlayer *)0x0;
  KStack_8.key = 0;
  KStack_8.value = 0;
  CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_9.monitor = (MonitorData *)0x0;
  CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_9.fields.syncRoot = (Object *)0x0;
  func_?();
  pMStack_10 = (MVPlayer *)0xffffffff;
  puStack_11 = &stack0xffffff78;
  puStack_5 = &stack0xffffff78;
  this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>
                              );
  pDStack_12 = this_01;
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__Dictionary__
            );
  this_00 = (this->fields).highScores;
  value = (MVPlayer *)0xffffffff;
  pDStack_13 = this_01;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_HighScore_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
    Dictionary_2_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)auStack_14
               ,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__GetEnumerator__
              );
    uStack_1 = 0;
    uStack_2 = 0;
    pMVar15 = (MVPlayer *)0xffffffff;
    while (cVar16 = func_?(), value = pMStack_7, cVar16 != '\0') {
      KStack_8 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)&stack0xffffff84,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__get_Current__
                            );
      iVar17 = func_?();
      value = pMVar15;
      if ((iVar17 == 0) ||
         (*(List_1_UnityEngine_Color32_ **)(iVar17 + 8) == (List_1_UnityEngine_Color32_ *)0x0))
      goto code_?;
      pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)(auStack_14 + 4),
                          *(List_1_UnityEngine_Color32_ **)(iVar17 + 8),
                          MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__GetEnumerator__
                         );
      CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar18->l
      ;
      CStack_9.monitor = (MonitorData *)pLVar18->next;
      CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18->ver;
      CStack_9.fields.syncRoot = (Object *)(pLVar18->current).rgba;
      uStack_1 = 1;
      while (cVar16 = func_?(), pMVar19 = pMStack_10, cVar16 != '\0') {
        pOVar20 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           (&CStack_9,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__get_Current__
                           );
        if (pOVar20 == (Object *)0x0) goto code_?;
        pOStack_21 = pOVar20[1].klass;
        pFStack_22 = (Friend *)pOVar20[1].monitor;
        value = (MVPlayer *)func_?();
        Assembly-CSharp.dll::PlayerElementData::PlayerElementData__ctor
                  ((PlayerElementData *)value,(MVPlayer *)pOStack_21,pFStack_22,(MethodInfo *)0x0);
        if (pDStack_12 ==
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) goto code_?;
        bVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                          ((Dictionary_2_System_Int32_System_Object_ *)pDStack_12,
                           (int32_t)pOVar20[1].klass,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__ContainsKey_int_
                          );
        this_01 = pDStack_12;
        if (bVar23 != 0) {
          if (value == (MVPlayer *)0x0) goto code_?;
          pMStack_24 = ((PlayerElementData__Fields *)&value->fields)->player;
          pTVar25 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (pDStack_12,(int32_t)pOVar20[1].klass,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__get_Item_int_
                             );
          if (pTVar25 == (TerrainUtility_TerrainMap *)0x0) goto code_?;
          pOStack_21 = (Object__Class *)(pTVar25->fields).m_patchSize.y;
          pFStack_22 = (Friend *)(value->fields).playerPlanetDataRemote;
          value = (MVPlayer *)func_?();
          Assembly-CSharp.dll::PlayerElementData::PlayerElementData__ctor
                    ((PlayerElementData *)value,pMStack_24,
                     (Friend *)((int)&pFStack_22->klass + (int)&pOStack_21->_0),(MethodInfo *)0x0);
        }
        if (value == (MVPlayer *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                  (this_01,(value->fields).checkpointWOID,(TerrainUtility_TerrainMap *)value,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__set_Item_int__ScoreActorEntry_
                  );
      }
      value = (MVPlayer *)((int)&pMStack_10->klass + 1);
      uStack_1 = 0;
      *(undefined4 *)(puStack_11 + (int)value * 4) = 0xa7;
      pMStack_24 = value;
      pMStack_10 = value;
      func_?(&CStack_9,
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__Dispose__
                     );
      if (pMStack_7 != (MVPlayer *)0x0) goto code_?;
      pMVar15 = value;
      if (((value != (MVPlayer *)0xffffffff) && (*(int *)(puStack_11 + (int)value * 4) == 0xa7)) &&
         (pMVar15 = pMVar19, pMStack_10 = pMVar19, (int)value < 0)) {
        pMVar15 = value;
        pMStack_10 = value;
      }
    }
    *(undefined4 *)(puStack_11 + (int)pMVar15 * 4 + 4) = 0xc3;
    uStack_1 = 0xff;
    uStack_2 = 0xffffff;
    func_?();
    if (value != (MVPlayer *)0x0) goto code_?;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      collection = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[WinningConditionType,System::Object]::
                   Dictionary_2_WinningConditionType_System_Object__get_Values
                             ((Dictionary_2_WinningConditionType_System_Object_ *)this_01,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_ScoreActorEntry>__get_Values__
                             );
      this_02 = (List_1_VoxelHit_ *)func_?();
      mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
                (this_02,(IEnumerable_1_VoxelHit_ *)collection,
                 MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                );
      if ((this->fields).byAscending == 0) {
        if (TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate7 ==
            (Func_2_ScoreActorEntry_Int32_ *)0x0) {
          pUVar26 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar26,(Object *)0x0,
                     MethodInfo__HighScores___GenerateActorScores_b__5_ScoreActorEntry_,
                     MethodInfo__System__Func<ScoreActorEntry,_int>__Func_System__Object__void__);
          TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate7 =
               (Func_2_ScoreActorEntry_Int32_ *)pUVar26;
        }
        source = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                           ((IOrderedEnumerable_1_System_Object_ *)this_02,
                            (Func_2_Object_Int64_ *)
                            TypeInfo__HighScores->static_fields->
                            CS___9__CachedAnonymousMethodDelegate7,
                            System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                           );
      }
      else {
        if (TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate6 ==
            (Func_2_ScoreActorEntry_Int32_ *)0x0) {
          pUVar26 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar26,(Object *)0x0,
                     MethodInfo__HighScores___GenerateActorScores_b__4_ScoreActorEntry_,
                     MethodInfo__System__Func<ScoreActorEntry,_int>__Func_System__Object__void__);
          TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate6 =
               (Func_2_ScoreActorEntry_Int32_ *)pUVar26;
        }
        source = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                           ((IOrderedEnumerable_1_System_Object_ *)this_02,
                            (Func_2_Object_Int64_ *)
                            TypeInfo__HighScores->static_fields->
                            CS___9__CachedAnonymousMethodDelegate6,
                            System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderBy<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                           );
      }
      pLVar27 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                          ((IEnumerable_1_UseInteractor_ *)source,
                           System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                          );
      *unaff_FS_OFFSET = uStack_4;
      return (List_1_ScoreActorEntry_ *)pLVar27;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
code_?:
  func_?(value);
  pcVar28 = (code *)swi(3);
  pLVar29 = (List_1_ScoreActorEntry_ *)(*pcVar28)();
  return pLVar29;
}


/* List`1[ScoreTeamEntry] GenerateTeamScores() */

List_1_ScoreTeamEntry_ *
MVWorldObject.dll::HighScores::HighScores_GenerateTeamScores(HighScores *this,MethodInfo *method)

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
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  puStack_8 = (undefined4 *)&stack0xffffff9c;
  puStack_4 = &stack0xffffff9c;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ScoreTeamEntry>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__List__);
  this_00 = (this->fields).highScores;
  pLStack_9 = this_01;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_HighScore_ *)0x0) {
    pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffa8,(Dictionary_2_WinningConditionType_System_Object_ *)this_00
                        ,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar10->dictionary;
    auStack_6._4_4_ = pDVar10->next;
    auStack_6._8_4_ = pDVar10->stamp;
    auStack_6._12_4_ = (pDVar10->current).key;
    auStack_6._16_4_ = (pDVar10->current).value;
    uStack_1 = 0;
    while( true ) {
      cVar11 = func_?();
      if (cVar11 == '\0') {
        *puStack_8 = 0x53;
        uStack_1 = 0xffffffff;
        func_?();
        if ((this->fields).byAscending == 0) {
          if (TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate3 ==
              (Func_2_ScoreTeamEntry_Int32_ *)0x0) {
            pUVar12 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar12,(Object *)0x0,
                       MethodInfo__HighScores___GenerateTeamScores_b__1_ScoreTeamEntry_,
                       MethodInfo__System__Func<ScoreTeamEntry,_int>__Func_System__Object__void__);
            TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate3 =
                 (Func_2_ScoreTeamEntry_Int32_ *)pUVar12;
          }
          source = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                             ((IOrderedEnumerable_1_System_Object_ *)this_01,
                              (Func_2_Object_Int64_ *)
                              TypeInfo__HighScores->static_fields->
                              CS___9__CachedAnonymousMethodDelegate3,
                              System__Linq__IOrderedEnumerable<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreTeamEntry,_int>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>__System__Func<ScoreTeamEntry,_int>_
                             );
        }
        else {
          if (TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate2 ==
              (Func_2_ScoreTeamEntry_Int32_ *)0x0) {
            pUVar12 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar12,(Object *)0x0,
                       MethodInfo__HighScores___GenerateTeamScores_b__0_ScoreTeamEntry_,
                       MethodInfo__System__Func<ScoreTeamEntry,_int>__Func_System__Object__void__);
            TypeInfo__HighScores->static_fields->CS___9__CachedAnonymousMethodDelegate2 =
                 (Func_2_ScoreTeamEntry_Int32_ *)pUVar12;
          }
          source = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                             ((IOrderedEnumerable_1_System_Object_ *)this_01,
                              (Func_2_Object_Int64_ *)
                              TypeInfo__HighScores->static_fields->
                              CS___9__CachedAnonymousMethodDelegate2,
                              System__Linq__IOrderedEnumerable<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__OrderBy<ScoreTeamEntry,_int>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>__System__Func<ScoreTeamEntry,_int>_
                             );
        }
        pLVar13 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                           ((IEnumerable_1_UseInteractor_ *)source,
                            System__Collections__Generic__List<ScoreTeamEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreTeamEntry>_System__Collections__Generic__IEnumerable<ScoreTeamEntry>_
                           );
        *unaff_FS_OFFSET = uStack_3;
        return (List_1_ScoreTeamEntry_ *)pLVar13;
      }
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__get_Current__
                            );
      pMStack_14 = (MVPlayer *)func_?();
      iVar15 = func_?();
      if (iVar15 == 0) break;
      pFStack_16 = *(Friend **)(iVar15 + 0xc);
      this_02 = (PlayerElementData *)func_?();
      Assembly-CSharp.dll::PlayerElementData::PlayerElementData__ctor
                (this_02,pMStack_14,pFStack_16,(MethodInfo *)0x0);
      if (this_01 == (List_1_UnityEngine_Vector4_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)this_02,
                 MethodInfo__System__Collections__Generic__List<ScoreTeamEntry>__Add_ScoreTeamEntry_
                );
    }
  }
  func_?();
  func_?();
  pcVar17 = (code *)swi(3);
  pLVar18 = (List_1_ScoreTeamEntry_ *)(*pcVar17)();
  return pLVar18;
}


/* String ToString() */

String * MVWorldObject.dll::HighScores::HighScores_ToString(HighScores *this,MethodInfo *method)

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
  auStack_6._16_4_ = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pSVar8 = StringLiteral_HighScore_pr_team_u000A;
  pSStack_9 = StringLiteral_HighScore_pr_team_u000A;
  this_00 = (this->fields).highScores;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_HighScore_ *)0x0) {
    puStack_10 = (undefined4 *)&stack0xffffffa4;
    puStack_4 = &stack0xffffffa4;
    pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffb0,(Dictionary_2_WinningConditionType_System_Object_ *)this_00
                        ,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar11->dictionary;
    auStack_6._4_4_ = pDVar11->next;
    auStack_6._8_4_ = pDVar11->stamp;
    auStack_6._12_4_ = (pDVar11->current).key;
    auStack_6._16_4_ = (pDVar11->current).value;
    uStack_1 = 0;
    while (cVar12 = func_?(), cVar12 != '\0') {
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_HighScore>__get_Current__
                            );
      func_?();
      pOVar13 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      str1 = mscorlib.dll::System::String::String_Format
                       (StringLiteral_Team___0_u000A,pOVar13,(MethodInfo *)0x0);
      pSVar8 = mscorlib.dll::System::String::String_Concat_2(pSVar8,str1,(MethodInfo *)0x0);
      auStack_6._4_4_ = &KStack_7;
      auStack_6._8_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_HighScore>__get_Value__
      ;
      auStack_6._0_4_ = &UNK_?;
      pSStack_9 = pSVar8;
      pOVar13 = (Object *)func_?();
      pSVar8 = mscorlib.dll::System::String::String_Concat
                         ((Object *)pSVar8,pOVar13,(MethodInfo *)0x0);
      pSStack_9 = pSVar8;
    }
    *puStack_10 = 0x60;
    uStack_1 = 0xffffffff;
    func_?();
    *unaff_FS_OFFSET = uStack_3;
    return pSVar8;
  }
  puStack_10 = (undefined4 *)&stack0xffffffa4;
  puStack_4 = &stack0xffffffa4;
  func_?(0);
  func_?();
  pcVar14 = (code *)swi(3);
  pSVar8 = (String *)(*pcVar14)();
  return pSVar8;
}


/* HighScores(GameStatCounterType, Dictionary`2[MV.WorldObject.MVTeam,TeamCounter], Boolean,
   WinningConditionPresentStyle, Boolean) */

void MVWorldObject.dll::HighScores::HighScores__ctor
               (HighScores *this,GameStatCounterType__Enum gameStatCounterType,
               Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *teamCounters,bool presentAsTeamScore
               ,WinningConditionPresentStyle__Enum winningConditionPresentStyle,bool byAscending,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  KStack_6.key = 0;
  KStack_6.value = 0;
  func_?();
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>
  ;
  puStack_7 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  pDVar8 = (Dictionary_2_MV_WorldObject_MVTeam_HighScore_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar8,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__Dictionary__
            );
  (this->fields).highScores = pDVar8;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).gameStatCounterType = (undefined1)gameStatCounterType;
  if (teamCounters != (Dictionary_2_MV_WorldObject_MVTeam_TeamCounter_ *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffb4,
                        (Dictionary_2_WinningConditionType_System_Object_ *)teamCounters,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__GetEnumerator__
                       );
    auStack_10._0_4_ = pDVar9->dictionary;
    auStack_10._4_4_ = pDVar9->next;
    auStack_10._8_4_ = pDVar9->stamp;
    auStack_10._12_4_ = (pDVar9->current).key;
    auStack_10._16_4_ = (pDVar9->current).value;
    uStack_1 = 0;
    while (cVar11 = func_?(), cVar11 != '\0') {
      KStack_6 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_10,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_TeamCounter>__get_Current__
                            );
      auStack_10._0_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_TeamCounter>__get_Key__
      ;
      iVar12 = func_?();
      if (iVar12 != 4) {
        pDVar8 = (this->fields).highScores;
        key = func_?();
        this_00 = (TeamCounter *)func_?();
        if ((this_00 == (TeamCounter *)0x0) ||
           (value = TeamCounter::TeamCounter_get_HighScore(this_00,(MethodInfo *)0x0),
           pDVar8 == (Dictionary_2_MV_WorldObject_MVTeam_HighScore_ *)0x0)) {
          func_?();
          func_?();
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MVTeam,System::
        Object]::Dictionary_2_MV_WorldObject_MVTeam_System_Object__Add
                  ((Dictionary_2_MV_WorldObject_MVTeam_System_Object_ *)pDVar8,key,(Object *)value,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_HighScore>__Add_MV__WorldObject__MVTeam__HighScore_
                  );
      }
    }
    *puStack_7 = 0x6d;
    uStack_1 = 0xffffffff;
    func_?();
  }
  (this->fields).presentAsTeamScore = presentAsTeamScore;
  (this->fields).winningConditionPresentStyle = (undefined1)winningConditionPresentStyle;
  (this->fields).byAscending = byAscending;
  *unaff_FS_OFFSET = uStack_3;
  return;
}

