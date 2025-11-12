
/* Void Add(MVPlayer) */

void Assembly-CSharp.dll::PlayerListHold::PlayerListHold_Add
               (PlayerListHold *this,MVPlayer *player,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  PlayerElementHold_MethodInfo__UnityEngine__Object__Instantiate<PlayerElementHold>_PlayerElementHold__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).playerElementPrefab;
  parent = (Transform *)(this->fields).contentPanel;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pPVar1 = (PlayerElementHold *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pPVar1,parent,0,
                      PlayerElementHold_MethodInfo__UnityEngine__Object__Instantiate<PlayerElementHold>_PlayerElementHold__UnityEngine__Transform__bool_
                     );
  if (((pPVar1 != (PlayerElementHold *)0x0) &&
      (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pPVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0))
     && (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                   (this_00,1,(MethodInfo *)0x0), player != (MVPlayer *)0x0)) {
    uVar2 = MVPlayer::MVPlayer_GetGameStat
                      (player,(uint)(this->fields).typeToDisplay,(MethodInfo *)0x0);
    PlayerElementHold::PlayerElementHold_Initialize
              (pPVar1,player,(uint)(this->fields).typeToDisplay,uVar2,(MethodInfo *)0x0);
    piVar3 = &(this->fields).playerCount;
    *piVar3 = *piVar3 + 1;
    PStack_4._4_4_ = 0;
    PStack_4.score = uVar2;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&PStack_4.playerElement >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    PStack_4.playerElement = pPVar1;
    PlayerListHold_SortAfterScore(this,&PStack_4,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize(MVTeam, Int32, GameStatCounterType) */

void Assembly-CSharp.dll::PlayerListHold::PlayerListHold_Initialize
               (PlayerListHold *this,MVTeam__Enum team,int32_t score,
               GameStatCounterType__Enum typeToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PlayerListHold::PlayerElementHoldData>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PlayerListHold::ScoreIconDef>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PlayerListHold::ScoreIconDef>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<PlayerListHold::PlayerElementHoldData>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).teamTab;
  (this->fields).score = score;
  (this->fields).team = team;
  (this->fields).typeToDisplay = (uint8_t)typeToDisplay;
  if (this_00 != (TeamTab *)0x0) {
    TeamTab::TeamTab_Initialize(this_00,team,typeToDisplay & 0xff,(MethodInfo *)0x0);
    pLVar1 = (List_1_PlayerListHold_PlayerElementHoldData_ *)
             FUN_?(
                          TypeInfo__System__Collections__Generic__List<PlayerListHold::PlayerElementHoldData>
                          );
    FUN_?(pLVar1,
                  MethodInfo__System__Collections__Generic__List<PlayerListHold::PlayerElementHoldData>__List__
                 );
    bVar2 = iRam_? != 0;
    (this->fields).playerElementList = pLVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).playerElementList >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pLVar7 = (this->fields).winningConditionIcons;
    uVar3 = 0;
    if (pLVar7 != (List_1_PlayerListHold_ScoreIconDef_ *)0x0) {
      lVar8 = 0x20;
      while( true ) {
        if ((pLVar7->fields)._size <= (int)uVar3) {
          return;
        }
        pLVar7 = (this->fields).winningConditionIcons;
        if (pLVar7 == (List_1_PlayerListHold_ScoreIconDef_ *)0x0) break;
        if ((uint)(pLVar7->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pPVar10 = (pLVar7->fields)._items;
        if (pPVar10 == (PlayerListHold_ScoreIconDef__Array *)0x0) break;
        if ((uint)pPVar10->max_length <= uVar3) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar11 = *(longlong *)((longlong)pPVar10->vector + lVar8 + -0x20);
        if ((lVar11 == 0) || (obj = *(Object **)(lVar11 + 0x18), obj == (Object *)0x0)) break;
        uVar12 = *(uint8_t *)(lVar11 + 0x10);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar13 = obj[1].klass;
        if (pOVar13 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pOVar13,uVar12 == (uint8_t)typeToDisplay);
        pLVar7 = (this->fields).winningConditionIcons;
        uVar3 = uVar3 + 1;
        lVar8 = lVar8 + 8;
        if (pLVar7 == (List_1_PlayerListHold_ScoreIconDef_ *)0x0) break;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SortAfterScore(PlayerListHold+PlayerElementHoldData) */

void Assembly-CSharp.dll::PlayerListHold::PlayerListHold_SortAfterScore
               (PlayerListHold *this,PlayerListHold_PlayerElementHoldData *playerElementHoldData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PlayerListHold::PlayerElementHoldData>__Add_PlayerListHold__PlayerElementHoldData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PlayerListHold::PlayerElementHoldData>__Insert_int__PlayerListHold__PlayerElementHoldData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PlayerListHold::PlayerElementHoldData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PlayerListHold::PlayerElementHoldData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).playerElementList;
  uVar2 = 0;
  bVar3 = false;
  uVar4 = 0;
  if (pLVar1 != (List_1_PlayerListHold_PlayerElementHoldData_ *)0x0) {
    lVar5 = 0x20;
    lVar6 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar4) {
        if (!bVar3) {
          pLVar1 = (this->fields).playerElementList;
          if (pLVar1 == (List_1_PlayerListHold_PlayerElementHoldData_ *)0x0) break;
          iStack_7 = playerElementHoldData->score;
          uStack_8 = *(undefined4 *)&playerElementHoldData->field_0x4;
          uStack_9 = *(undefined4 *)&playerElementHoldData->playerElement;
          uStack_10 = *(undefined4 *)((longlong)&playerElementHoldData->playerElement + 4);
          FUN_?(pLVar1,&iStack_7,
                        MethodInfo__System__Collections__Generic__List<PlayerListHold::PlayerElementHoldData>__Add_PlayerListHold__PlayerElementHoldData_
                       );
        }
        pLVar1 = (this->fields).playerElementList;
        goto joined_?;
      }
      pLVar1 = (this->fields).playerElementList;
      if (bVar3) {
        if (pLVar1 == (List_1_PlayerListHold_PlayerElementHoldData_ *)0x0) break;
        if ((uint)(pLVar1->fields)._size <= uVar4) goto code_?;
        pPVar11 = (pLVar1->fields)._items;
        if (pPVar11 == (PlayerListHold_PlayerElementHoldData__Array *)0x0) break;
        if ((uint)pPVar11->max_length <= uVar4) goto code_?;
        this_00 = *(Component **)((longlong)pPVar11->vector + lVar6 + -0x18);
        if ((this_00 == (Component *)0x0) ||
           (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (this_00,(MethodInfo *)0x0), this_02 == (Transform *)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                  (this_02,(MethodInfo *)0x0);
      }
      else {
        if (pLVar1 == (List_1_PlayerListHold_PlayerElementHoldData_ *)0x0) break;
        if ((uint)(pLVar1->fields)._size <= uVar4) goto code_?;
        pPVar11 = (pLVar1->fields)._items;
        if (pPVar11 == (PlayerListHold_PlayerElementHoldData__Array *)0x0) break;
        if ((uint)pPVar11->max_length <= uVar4) goto code_?;
        bVar12 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_IsNewScoreBetter
                          (playerElementHoldData->score,
                           *(int32_t *)
                            ((longlong)
                             &((PlayerListHold_PlayerElementHoldData__Array *)(pPVar11->vector + -2))
                              ->klass + lVar6),(uint)(this->fields).typeToDisplay,(MethodInfo *)0x0)
        ;
        if (bVar12 != 0) {
          pLVar1 = (this->fields).playerElementList;
          if (pLVar1 == (List_1_PlayerListHold_PlayerElementHoldData_ *)0x0) break;
          iStack_7 = playerElementHoldData->score;
          uStack_8 = *(undefined4 *)&playerElementHoldData->field_0x4;
          uStack_9 = *(undefined4 *)&playerElementHoldData->playerElement;
          uStack_10 = *(undefined4 *)((longlong)&playerElementHoldData->playerElement + 4);
          FUN_?(pLVar1,uVar4,&iStack_7);
          bVar3 = true;
        }
      }
      pLVar1 = (this->fields).playerElementList;
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 0x10;
    } while (pLVar1 != (List_1_PlayerListHold_PlayerElementHoldData_ *)0x0);
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
joined_?:
  if (pLVar1 == (List_1_PlayerListHold_PlayerElementHoldData_ *)0x0) goto code_?;
  if ((pLVar1->fields)._size <= (int)uVar2) {
    return;
  }
  if (pLVar1 == (List_1_PlayerListHold_PlayerElementHoldData_ *)0x0) goto code_?;
  if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pPVar11 = (pLVar1->fields)._items;
  if (pPVar11 == (PlayerListHold_PlayerElementHoldData__Array *)0x0) goto code_?;
  if ((uint)pPVar11->max_length <= uVar2) {
code_?:
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  this_01 = *(PlayerElement **)((longlong)pPVar11->vector + lVar5 + -0x18);
  if (this_01 == (PlayerElement *)0x0) goto code_?;
  PlayerElement::PlayerElement_UpdateScoreIndex(this_01,(MethodInfo *)0x0);
  pLVar1 = (this->fields).playerElementList;
  uVar2 = uVar2 + 1;
  lVar5 = lVar5 + 0x10;
  goto joined_?;
}

