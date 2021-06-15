
/* Void SortDescending() */

void MVWorldObject.dll::HighScore::HighScore_SortDescending(HighScore *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = (this->fields).highScoreEntries;
  if (TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3 ==
      (Func_2_ScoreActorEntry_Int32_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Func<ScoreActorEntry,_int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,MethodInfo__HighScore___SortDescending_b__2_ScoreActorEntry_,
               MethodInfo__System__Func<ScoreActorEntry,_int>__Func_System__Object__void__);
    TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3 =
         (Func_2_ScoreActorEntry_Int32_ *)this_00;
  }
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                        ((IOrderedEnumerable_1_System_Object_ *)source,
                         (Func_2_Object_Int64_ *)
                         TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3,
                         System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                        );
  pLVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                     ((IEnumerable_1_UseInteractor_ *)source_00,
                      System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                     );
  (this->fields).highScoreEntries = (List_1_ScoreActorEntry_ *)pLVar1;
  return;
}


/* String ToString() */

String * MVWorldObject.dll::HighScore::HighScore_ToString(HighScore *this,MethodInfo *method)

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
  iStack_7 = (this->fields).teamScore;
  puStack_8 = (undefined4 *)&stack0xffffffb4;
  puStack_4 = &stack0xffffffb4;
  pOVar9 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar10 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_TeamScore___0__u000A,pOVar9,(MethodInfo *)0x0);
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).highScoreEntries;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_12,this_00,
                        MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar11->l;
    CStack_6.monitor = (MonitorData *)pLVar11->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar11->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar11->current).rgba;
    uStack_1 = 0;
    while( true ) {
      auStack_12._8_4_ =
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__MoveNext__
      ;
      auStack_12._4_4_ = &CStack_6;
      auStack_12._0_4_ = &UNK_?;
      cVar13 = func_?();
      if (cVar13 == '\0') break;
      pOVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__get_Current__
                         );
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      str1 = mscorlib.dll::System::String::String_Format
                       (StringLiteral__0_u000A,pOVar9,(MethodInfo *)0x0);
      pSVar10 = mscorlib.dll::System::String::String_Concat_2(pSVar10,str1,(MethodInfo *)0x0);
    }
    *puStack_8 = 0x57;
    uStack_1 = 0xffffffff;
    func_?(&CStack_6,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ScoreActorEntry>__Dispose__
                   );
    *unaff_FS_OFFSET = uStack_3;
    return pSVar10;
  }
  func_?();
  func_?(this,0,0);
  pcVar14 = (code *)swi(3);
  pSVar10 = (String *)(*pcVar14)();
  return pSVar10;
}


/* HighScore(Int32, Dictionary`2[System.Int32,ActorCounter]) */

void MVWorldObject.dll::HighScore::HighScore__ctor
               (HighScore *this,int32_t teamScore,
               Dictionary_2_System_Int32_ActorCounter_ *actorCounters,MethodInfo *method)

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
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  method_00 = TypeInfo__System__Collections__Generic__List<ScoreActorEntry>;
  puStack_8 = (undefined4 *)&stack0xffffffa4;
  puStack_4 = &stack0xffffffa4;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__List__);
  (this->fields).highScoreEntries = (List_1_ScoreActorEntry_ *)this_00;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).teamScore = teamScore;
  if (actorCounters != (Dictionary_2_System_Int32_ActorCounter_ *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffb0,
                        (Dictionary_2_WinningConditionType_System_Object_ *)actorCounters,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_ActorCounter>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar9->dictionary;
    auStack_6._4_4_ = pDVar9->next;
    auStack_6._8_4_ = pDVar9->stamp;
    auStack_6._12_4_ = (pDVar9->current).key;
    auStack_6._16_4_ = (pDVar9->current).value;
    uStack_1 = 0;
    while (cVar10 = func_?(), cVar10 != '\0') {
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_ActorCounter>__get_Current__
                            );
      pLVar11 = (this->fields).highScoreEntries;
      auStack_6._0_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<int,_ActorCounter>__get_Key__;
      player = (MVPlayer *)func_?();
      auStack_6._0_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<int,_ActorCounter>__get_Value__;
      iVar12 = func_?();
      if (iVar12 == 0) goto code_?;
      friend_1 = *(Friend **)(iVar12 + 8);
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      Assembly-CSharp.dll::PlayerElementData::PlayerElementData__ctor
                ((PlayerElementData *)this_00,player,friend_1,(MethodInfo *)0x0);
      if (pLVar11 == (List_1_ScoreActorEntry_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)pLVar11,(UIPushOption__Enum)this_00,
                 MethodInfo__System__Collections__Generic__List<ScoreActorEntry>__Add_ScoreActorEntry_
                );
    }
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              0x0;
    *puStack_8 = 0x65;
    uStack_1 = 0xffffffff;
    func_?();
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pLVar11 = (this->fields).highScoreEntries;
    if (TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3 ==
        (Func_2_ScoreActorEntry_Int32_ *)0x0) {
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Func<ScoreActorEntry,_int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)0x0,MethodInfo__HighScore___SortDescending_b__2_ScoreActorEntry_,
                 MethodInfo__System__Func<ScoreActorEntry,_int>__Func_System__Object__void__);
      TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3 =
           (Func_2_ScoreActorEntry_Int32_ *)this_00;
    }
    source = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                       ((IOrderedEnumerable_1_System_Object_ *)pLVar11,
                        (Func_2_Object_Int64_ *)
                        TypeInfo__HighScore->static_fields->CS___9__CachedAnonymousMethodDelegate3,
                        System__Linq__IOrderedEnumerable<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__OrderByDescending<ScoreActorEntry,_int>_System__Collections__Generic__IEnumerable<ScoreActorEntry>__System__Func<ScoreActorEntry,_int>_
                       );
    pLVar13 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_21
                       ((IEnumerable_1_UseInteractor_ *)source,
                        System__Collections__Generic__List<ScoreActorEntry>_MethodInfo__System__Linq__Enumerable__ToList<ScoreActorEntry>_System__Collections__Generic__IEnumerable<ScoreActorEntry>_
                       );
    if (this != (HighScore *)0x0) {
      (this->fields).highScoreEntries = (List_1_ScoreActorEntry_ *)pLVar13;
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  func_?(this_00,0,0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

