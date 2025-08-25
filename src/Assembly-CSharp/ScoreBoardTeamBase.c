
/* Void AddTeamsToScoreBoard() */

void Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_AddTeamsToScoreBoard
               (ScoreBoardTeamBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                   );
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  index = 0;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    while ((pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0 &&
           (pLVar3 = MVTeamManager::MVTeamManager_GetTeamList(pMVar2,(MethodInfo *)0x0),
           pLVar3 != (List_1_MV_WorldObject_MVTeam_ *)0x0))) {
      if ((pLVar3->fields)._size <= index) {
        return;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar1 == (MVNetworkGame *)0x0) ||
          (pMVar2 = (pMVar1->fields).teamManager, pMVar2 == (MVTeamManager *)0x0)) ||
         (this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    MVTeamManager::MVTeamManager_GetTeamList(pMVar2,(MethodInfo *)0x0),
         this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
      break;
      team = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (this_01,index,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                       );
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (this_00 = (pMVar1->fields).gameStatCounterManager,
         this_00 == (GameStatCounterManager *)0x0)) break;
      scoreCount = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                             (this_00,CONCAT31((int3)((uint)this_01 >> 8),(this->fields)._.statType)
                              ,(MVTeam__Enum)team,(MethodInfo *)0x0);
      ScoreBoardBase::ScoreBoardBase_SortNewScore
                ((ScoreBoardBase *)this,::StringLiteral__,(int32_t)team,scoreCount,0,
                 (MethodInfo *)0x0);
      index = index + 1;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 == (MVNetworkGame *)0x0) break;
    }
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
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  if (teamId != -1) {
    if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
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
  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                   );
    func_?(&TypeInfo__Styles);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    while (index < (pLVar1->fields)._size) {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar2 == (MVNetworkGame *)0x0) ||
          (pMVar3 = (pMVar2->fields).teamManager, pMVar3 == (MVTeamManager *)0x0)) ||
         (pLVar4 = MVTeamManager::MVTeamManager_GetTeamList(pMVar3,(MethodInfo *)0x0),
         pLVar4 == (List_1_MV_WorldObject_MVTeam_ *)0x0)) goto code_?;
      if ((pLVar4->fields)._size <= index) break;
      pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields)._.scoreBoardPlayerData;
      if (((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
          (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar5,index,
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                             ), RVar6 == (RegexCharClass_SingleRange)0x0)) ||
         (*(Component **)((int)RVar6 + 0x1c) == (Component *)0x0)) goto code_?;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (*(Component **)((int)RVar6 + 0x1c),(MethodInfo *)0x0);
      if (this_00 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      pLVar1 = (this->fields)._.scoreBoardPlayerData;
      index = index + 1;
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar2 != (MVNetworkGame *)0x0) &&
        (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) &&
       (pLVar4 = MVTeamManager::MVTeamManager_GetTeamList(pMVar3,(MethodInfo *)0x0),
       pLVar4 != (List_1_MV_WorldObject_MVTeam_ *)0x0)) {
      index_00 = (pLVar4->fields)._size;
      pLVar1 = (this->fields)._.scoreBoardPlayerData;
      if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
code_?:
  if ((pLVar1->fields)._size <= index_00) {
    return;
  }
  pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields)._.scoreBoardPlayerData;
  if ((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
     (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar5,index_00,
                         MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                        ), RVar6 == (RegexCharClass_SingleRange)0x0)) goto code_?;
  piVar8 = *(int **)((int)RVar6 + 0x1c);
  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Styles);
  }
  pCVar9 = Styles::Styles_GetColor
                     ((Color *)&puStack_10,ColorStyle__Enum_OffWhiteTransparent,(MethodInfo *)0x0);
  if (piVar8 == (int *)0x0) goto code_?;
  (**(code **)(*piVar8 + 0x178))
            (piVar8,pCVar9->r,pCVar9->g,pCVar9->b,pCVar9->a,*(undefined4 *)(*piVar8 + 0x17c));
  pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields)._.scoreBoardPlayerData;
  if (((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
      (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar5,index_00,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         ), RVar6 == (RegexCharClass_SingleRange)0x0)) ||
     (piVar8 = *(int **)((int)RVar6 + 0x10), piVar8 == (int *)0x0)) goto code_?;
  (**(code **)(*piVar8 + 0x318))(piVar8,::StringLiteral__,*(undefined4 *)(*piVar8 + 0x31c));
  pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields)._.scoreBoardPlayerData;
  if (((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
      (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar5,index_00,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         ), RVar6 == (RegexCharClass_SingleRange)0x0)) ||
     (piVar8 = *(int **)((int)RVar6 + 0xc), piVar8 == (int *)0x0)) goto code_?;
  (**(code **)(*piVar8 + 0x318))(piVar8,::StringLiteral__,*(undefined4 *)(*piVar8 + 0x31c));
  pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields)._.scoreBoardPlayerData;
  if (((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
      (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar5,index_00,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         ), RVar6 == (RegexCharClass_SingleRange)0x0)) ||
     (piVar8 = *(int **)((int)RVar6 + 8), piVar8 == (int *)0x0)) goto code_?;
  (**(code **)(*piVar8 + 0x318))(piVar8,::StringLiteral__,*(undefined4 *)(*piVar8 + 0x31c));
  pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields)._.scoreBoardPlayerData;
  if ((pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
     (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar5,index_00,
                         MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                        ), RVar6 == (RegexCharClass_SingleRange)0x0)) goto code_?;
  *(undefined4 *)((int)RVar6 + 0x18) = 0xffffffff;
  index_00 = index_00 + 1;
  pLVar1 = (this->fields)._.scoreBoardPlayerData;
  if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
  goto code_?;
}


/* Void Initialize(GameStatCounterType) */

void Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_Initialize
               (ScoreBoardTeamBase *this,GameStatCounterType__Enum statType,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  pIStack_2 = (Il2CppMethodPointer)&DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  pMVar4 = (MethodInfo *)&stack0xffffffb8;
  method_00 = (MethodInfo *)&stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    cRam_? = '\x01';
    method_00 = pMVar4;
  }
  pOStack_5 = (Object__Class *)0x0;
  ScoreBoardBase::ScoreBoardBase_Initialize((ScoreBoardBase *)this,statType,(MethodInfo *)0x0);
  ScoreBoardTeamBase_AddTeamsToScoreBoard(this,(MethodInfo *)0x0);
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar6 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar6->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    this_01 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffd4,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                         );
      pOStack_5 = (Object__Class *)pDVar7->_dictionary;
      this_02 = (MVPlayer *)pDVar7->_currentValue;
      uStack_1 = 1;
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                            *)&pOStack_5,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                          );
        if (bVar8 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&pOStack_5,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = iStack_3;
          return;
        }
        if (this_02 == (MVPlayer *)0x0) break;
        method_00 = (MethodInfo *)(this_02->fields)._ActorNr_k__BackingField;
        iStack_3 = MVPlayer::MVPlayer_GetGameStat(this_02,statType,method_00);
        pIStack_2 = (this->klass->vtable).Initialize.methodPtr;
        (*(code *)(this->klass->vtable).OnStatsChange.method)();
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean IsNewScoreBetter(Int32, Int32, Int32, Int32) */

bool Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_IsNewScoreBetter
               (ScoreBoardTeamBase *this,int32_t newScore,int32_t oldScore,int32_t newId,
               int32_t oldId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    cRam_? = '\x01';
  }
  if (newScore == oldScore) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0)) {
      pLVar3 = MVTeamManager::MVTeamManager_GetPlayersInTeam(pMVar2,newId,(MethodInfo *)0x0);
      if (pLVar3 != (List_1_MVPlayer_ *)0x0) {
        if ((pLVar3->fields)._size == 0) {
          return 0;
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0)) {
          newScore = 0;
          this = (ScoreBoardTeamBase *)oldId;
          pLVar3 = MVTeamManager::MVTeamManager_GetPlayersInTeam(pMVar2,oldId,(MethodInfo *)0x0);
          if (pLVar3 != (List_1_MVPlayer_ *)0x0) {
            if ((pLVar3->fields)._size == 0) {
              return 1;
            }
            goto code_?;
          }
        }
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
code_?:
  bVar5 = ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter
                    ((ScoreBoardBase *)this,newScore,oldScore,(MethodInfo *)0x0);
  return bVar5;
}


/* Void OnStatsChange(Int32, Int32) */

void Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_OnStatsChange
               (ScoreBoardTeamBase *this,int32_t actorNumber,int32_t scoreCount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                   );
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    bVar2 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                      (this_00,actorNumber,(MVPlayer **)&stack0xfffffff8,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pLVar3 = (this->fields)._.scoreBoardPlayerData;
    if (pLVar3 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
      pMVar4 = (MVPlayer *)&UNK_?;
      RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (this->fields)._.scoreBoardPlayerData,(pLVar3->fields)._size + -1,
                         MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                        );
      if (RVar5 != (RegexCharClass_SingleRange)0x0) {
        newScore = *(int32_t *)((int)RVar5 + 0x18);
        bVar2 = ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter
                          ((ScoreBoardBase *)this,newScore,newScore,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if (pMVar4 == (MVPlayer *)0x0) goto code_?;
          ScoreBoardBase::ScoreBoardBase_SortNewScore
                    ((ScoreBoardBase *)this,::StringLiteral__,(pMVar4->fields)._Team_k__BackingField
                     ,newScore,0,(MethodInfo *)0x0);
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
  ScoreBoardBase::ScoreBoardBase_ResetScoreBoard((ScoreBoardBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                   );
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  index = 0;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    while ((pMVar2 = (pMVar1->fields).teamManager, pMVar2 != (MVTeamManager *)0x0 &&
           (pLVar3 = MVTeamManager::MVTeamManager_GetTeamList(pMVar2,(MethodInfo *)0x0),
           pLVar3 != (List_1_MV_WorldObject_MVTeam_ *)0x0))) {
      if ((pLVar3->fields)._size <= index) {
        return;
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar1 == (MVNetworkGame *)0x0) ||
          (pMVar2 = (pMVar1->fields).teamManager, pMVar2 == (MVTeamManager *)0x0)) ||
         (this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    MVTeamManager::MVTeamManager_GetTeamList(pMVar2,(MethodInfo *)0x0),
         this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
      break;
      team = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (this_01,index,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                       );
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 == (MVNetworkGame *)0x0) ||
         (this_00 = (pMVar1->fields).gameStatCounterManager,
         this_00 == (GameStatCounterManager *)0x0)) break;
      scoreCount = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                             (this_00,CONCAT31((int3)((uint)this_01 >> 8),
                                               (in_stack_4->fields).statType),
                              (MVTeam__Enum)team,(MethodInfo *)0x0);
      ScoreBoardBase::ScoreBoardBase_SortNewScore
                (in_stack_4,::StringLiteral__,(int32_t)team,scoreCount,0,(MethodInfo *)0x0);
      index = index + 1;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 == (MVNetworkGame *)0x0) break;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UnSubscribeToCallbacks() */

void Assembly-CSharp.dll::ScoreBoardTeamBase::ScoreBoardTeamBase_UnSubscribeToCallbacks
               (ScoreBoardTeamBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&MethodInfo__ScoreBoardBase__OnWinningConditionFulfilled_IWinningCondition_);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 == (MVNetworkGame *)0x0) {
        func_?();
        goto code_?;
      }
      pAVar3 = (pMVar2->fields).OnWinningConditionFulfilled;
      this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?(TypeInfo__System__Action<IWinningCondition>);
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_00,(Object *)this,
                 MethodInfo__ScoreBoardBase__OnWinningConditionFulfilled_IWinningCondition_,
                 (MethodInfo *)0x0);
      unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
      if (unaff_ESI == (Delegate *)0x0) {
        (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
        pAStack4 = (Action_1_IWinningCondition___Class *)0x0;
      }
      else {
        pAStack4 = TypeInfo__System__Action<IWinningCondition>;
        pDStack5 = unaff_ESI;
        pAVar3 = (Action_1_IWinningCondition_ *)func_?();
        if (pAVar3 == (Action_1_IWinningCondition_ *)0x0) {
code_?:
          pDStack5 = unaff_ESI;
          pAStack4 = unaff_EDI;
          func_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (pMVar2->fields).OnWinningConditionFulfilled = pAVar3;
        unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
        pAStack4 = TypeInfo__System__Action<IWinningCondition>;
        pDStack5 = unaff_ESI;
        pAStack4 = (Action_1_IWinningCondition___Class *)func_?();
        if (pAStack4 == (Action_1_IWinningCondition___Class *)0x0) goto code_?;
      }
      pDStack5 = (Delegate *)&(pMVar2->fields).OnWinningConditionFulfilled;
      func_?();
    }
  }
  return;
}

