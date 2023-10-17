
/* MVTeam GetDefaultTeam() */

MVTeam__Enum
Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetDefaultTeam
          (MVTeamManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                   );
    cRam_? = '\x01';
  }
  key = (Object *)0x0;
  do {
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).teams;
    if (this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      func_?();
      break;
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    if (bVar1 != 0) {
      return (MVTeam__Enum)key;
    }
    key = (Object *)((int)&key->klass + 1);
  } while ((int)key < 4);
  uVar2 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar2);
  func_?(this_01);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Could_not_find_default_team);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,method_00);
  uVar2 = func_?(&MethodInfo__MVTeamManager__GetDefaultTeam__);
  func_?(this_01,uVar2);
  pcVar3 = (code *)swi(3);
  MVar4 = (*pcVar3)();
  return MVar4;
}


/* Int32 GetNoOfPlayersInTeam(MVTeam) */

int32_t Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetNoOfPlayersInTeam
                  (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__Where<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_bool>_
                   );
    func_?(&TypeInfo__System__Func<MVPlayer,_bool>);
    func_?(&
                    MethodInfo__MVTeamManager____c__DisplayClass29_0___GetPlayersInTeam_b__0_MVPlayer_
                   );
    func_?(&TypeInfo__MVTeamManager____c__DisplayClass29_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__MVTeamManager____c__DisplayClass29_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)team;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar1->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
      source = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
      this_01 = (Func_2_Object_Boolean_ *)func_?(TypeInfo__System__Func<MVPlayer,_bool>);
      if (this_01 != (Func_2_Object_Boolean_ *)0x0) {
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  (this_01,value,
                   MethodInfo__MVTeamManager____c__DisplayClass29_0___GetPlayersInTeam_b__0_MVPlayer_
                   ,(MethodInfo *)0x0);
        source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_4
                              ((IEnumerable_1_System_Object_ *)source,this_01,
                               System__Collections__Generic__IEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__Where<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_bool>_
                              );
        pLVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                           (source_00,
                            System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                           );
        if (pLVar2 != (List_1_System_Object_ *)0x0) {
          return (pLVar2->fields)._size;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
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
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    func_?(&TypeInfo__MVSpawnPoint);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVSpawnPoint);
    cRam_? = '\x01';
  }
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar6 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar6->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    method_00 = (MethodInfo *)team;
    pLStack_7 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 MVTeamManager_GetSpawnPointsForTeam(this_00,team,(MethodInfo *)0x0);
    index = 0;
    if (pLStack_7 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      while( true ) {
        if ((pLStack_7->fields)._size <= index) {
          pLVar8 = MVTeamManager_GetSpawnPointsForTeam(this,team,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return pLVar8;
        }
        RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLStack_7,index,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                          );
        if (((RVar9 != (RegexCharClass_SingleRange)0x0) &&
            ((TypeInfo__MVSpawnPoint->_1).typeHierarchyDepth <= *(byte *)(*(int *)RVar9 + 0xb4))) &&
           (*(MVSpawnPoint__Class **)
             (*(int *)(*(int *)RVar9 + 100) + -4 +
             (uint)(TypeInfo__MVSpawnPoint->_1).typeHierarchyDepth * 4) == TypeInfo__MVSpawnPoint))
        break;
        index = index + 1;
      }
      pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               func_?();
      pLStack_11 = pLVar10;
      if (pLVar10 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)pLVar10,
                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
        pLStack_12 = pLVar10;
        pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 func_?();
        pLStack_13 = pLVar10;
        if (pLVar10 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
          LowLevelList_1_System_Object___ctor
                    ((LowLevelList_1_System_Object_ *)pLVar10,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
          this_01 = (this->fields).teams;
          pLStack_7 = pLVar10;
          if ((this_01 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) &&
             (this_03 = (HashSet_1_System_Object_ *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,team,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                                  ), this_03 != (HashSet_1_System_Object_ *)0x0)) {
            pHVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                     HashSet_1_System_Object__GetEnumerator
                               (&HStack_15,this_03,
                                MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                               );
            pOStack_16 = pHVar14->_current;
            HStack_15._version = 0;
            uStack_1 = 1;
            HStack_15._current = (Object *)&stack0xffffffb4;
code_?:
            bVar17 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                    Int32]::HashSet_1_T_Enumerator_System_Int32__MoveNext
                              ((HashSet_1_T_Enumerator_System_Int32_ *)&stack0xffffffb4,
                               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                              );
            if (bVar17 != 0) {
              pOStack_18 = pOStack_16;
              pMVar19 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (pMVar19 == (MVWorldObjectClientManager *)0x0) goto code_?;
              if (cRam_? == '\0') {
                func_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                               );
                cRam_? = '\x01';
              }
              this_02 = (Dictionary_2_System_Object_System_Object_ *)(pMVar19->fields).worldObjects;
              team = MVTeam__Enum_Blue;
              if (this_02 == (Dictionary_2_System_Object_System_Object_ *)0x0)
              goto code_?;
              method_00 = (MethodInfo *)&UNK_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        (this_02,pOStack_18,(Object **)&team,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                        );
              item = team;
              if (((team != MVTeam__Enum_Blue) &&
                  ((TypeInfo__MVSpawnPoint->_1).typeHierarchyDepth <= *(byte *)(*(int *)team + 0xb4)
                  )) && ((*(MVSpawnPoint__Class **)
                           (*(int *)(*(int *)team + 100) + -4 +
                           (uint)(TypeInfo__MVSpawnPoint->_1).typeHierarchyDepth * 4) ==
                          TypeInfo__MVSpawnPoint && (team != MVTeam__Enum_Blue)))) {
                HStack_15._set = (HashSet_1_System_Object_ *)TypeInfo__MVSpawnPoint;
                pOStack_16 = *(Object **)team;
                cVar20 = func_?();
                MVar21 = MVTeam__Enum_Blue;
                if (cVar20 != '\0') {
                  MVar21 = item;
                }
                if (MVar21 != MVTeam__Enum_Blue) {
                  cVar20 = func_?(*(undefined4 *)item,TypeInfo__MVSpawnPoint);
                  this_05 = (MVSpawnPoint *)0x0;
                  if (cVar20 != '\0') {
                    this_05 = (MVSpawnPoint *)item;
                  }
                  if (this_05 != (MVSpawnPoint *)0x0) {
                    bVar17 = MVSpawnPoint::MVSpawnPoint_get_SpawnPointOnlyFirstDeath
                                      (this_05,(MethodInfo *)0x0);
                    if (bVar17 == 0) {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__Add
                                ((List_1_System_Object_ *)pLStack_11,(Object *)item,
                                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                                );
                    }
                    else {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__Add
                                ((List_1_System_Object_ *)pLStack_13,(Object *)item,
                                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                                );
                    }
                    goto code_?;
                  }
                }
                func_?(item,TypeInfo__MVSpawnPoint);
                goto code_?;
              }
              goto code_?;
            }
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffffb4,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       ,method_00);
            pLVar22 = pLStack_11;
            pLVar10 = pLStack_13;
            uStack_1 = 0xffffffff;
            if ((pLStack_13->fields)._size != 0) {
              pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar6 == (MVNetworkGame *)0x0) ||
                 (this_04 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
                 this_04 == (MVLocalPlayer *)0x0)) goto code_?;
              bVar17 = MVLocalPlayer::MVLocalPlayer_HasDiedInRound(this_04,(MethodInfo *)0x0);
              if (bVar17 == 0) {
                *unaff_FS_OFFSET = uStack_3;
                return (List_1_MVWorldObjectClient_ *)pLVar10;
              }
            }
            if ((pLVar22->fields)._size == 0) {
              pLVar22 = pLVar10;
            }
            *unaff_FS_OFFSET = uStack_3;
            return (List_1_MVWorldObjectClient_ *)pLVar22;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar23 = (code *)swi(3);
  pLVar8 = (List_1_MVWorldObjectClient_ *)(*pcVar23)();
  return pLVar8;
}


/* List`1[MVPlayer] GetPlayersInTeam(MVTeam) */

List_1_MVPlayer_ *
Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetPlayersInTeam
          (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__Where<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_bool>_
                   );
    func_?(&TypeInfo__System__Func<MVPlayer,_bool>);
    func_?(&
                    MethodInfo__MVTeamManager____c__DisplayClass29_0___GetPlayersInTeam_b__0_MVPlayer_
                   );
    func_?(&TypeInfo__MVTeamManager____c__DisplayClass29_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__MVTeamManager____c__DisplayClass29_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)team;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar1->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
      source = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
      this_01 = (Func_2_Object_Boolean_ *)func_?(TypeInfo__System__Func<MVPlayer,_bool>);
      if (this_01 != (Func_2_Object_Boolean_ *)0x0) {
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  (this_01,value,
                   MethodInfo__MVTeamManager____c__DisplayClass29_0___GetPlayersInTeam_b__0_MVPlayer_
                   ,(MethodInfo *)0x0);
        source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_4
                              ((IEnumerable_1_System_Object_ *)source,this_01,
                               System__Collections__Generic__IEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__Where<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_bool>_
                              );
        pLVar2 = (List_1_MVPlayer_ *)
                 System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                           (source_00,
                            System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                           );
        return pLVar2;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pLVar2 = (List_1_MVPlayer_ *)(*pcVar3)();
  return pLVar2;
}


/* Int32 GetScore(MVTeam, GameStatCounterType) */

int32_t Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetScore
                  (MVTeamManager *this,MVTeam__Enum team,
                  GameStatCounterType__Enum gameStatCounterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).teams;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    if (bVar1 == 0) {
      return 0;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (this_01 = (pMVar2->fields).gameStatCounterManager, this_01 != (GameStatCounterManager *)0x0)
       ) {
      iVar3 = MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                        (this_01,gameStatCounterType,MVTeam__Enum_Blue,(MethodInfo *)0x0);
      return iVar3;
    }
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  iVar3 = (*pcVar5)();
  return iVar3;
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
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pLVar6 = (List_1_MVWorldObjectClient_ *)
           func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  if (pLVar6 != (List_1_MVWorldObjectClient_ *)0x0) {
    pLVar7 = pLVar6;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar6,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    this_00 = (this->fields).teams;
    if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
      this_02 = (HashSet_1_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,team,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                          );
      if (this_02 != (HashSet_1_System_Object_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
        HashSet_1_System_Object__GetEnumerator
                  ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,this_02,
                   MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
        uStack_1 = 1;
        method_00.rgctx_data = ((Il2CppRGCTXData *)&stack0xffffffb8).rgctx_data;
        while( true ) {
          this_03 = (HashSet_1_T_Enumerator_System_Int32_ *)&stack0xffffffb8;
          bVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  Int32]::HashSet_1_T_Enumerator_System_Int32__MoveNext
                            (this_03,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                            );
          if (bVar8 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffffb8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       ,(MethodInfo *)method_00.methodMetadataHandle);
            *unaff_FS_OFFSET = uStack_3;
            return pLVar6;
          }
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar9 == (MVWorldObjectClientManager *)0x0) break;
          pLVar6 = pLVar7;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
            pLVar6 = pLVar7;
          }
          this_01 = (Dictionary_2_System_Object_System_Object_ *)(pMVar9->fields).worldObjects;
          pLStack_10 = (List_1_MVWorldObjectClient_ *)0x0;
          if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
          method_00 = (_union_154)
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
          ;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (this_01,(Object *)this_03,(Object **)&pLStack_10,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                    );
          pLVar7 = pLStack_10;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar6,(Object *)pLStack_10,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                    );
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  pLVar6 = (List_1_MVWorldObjectClient_ *)(*pcVar11)();
  return pLVar6;
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
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<TeamData>__Add_TeamData_);
    func_?(&MethodInfo__System__Collections__Generic__List<TeamData>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<TeamData>);
    func_?(&TypeInfo__TeamData);
    cRam_? = '\x01';
  }
  pLVar4 = (List_1_TeamData_ *)
           func_?(TypeInfo__System__Collections__Generic__List<TeamData>);
  if (pLVar4 != (List_1_TeamData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLVar4,
               MethodInfo__System__Collections__Generic__List<TeamData>__List__);
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).teams;
    if ((this_00 !=
         (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
       && (this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                     RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                     Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                               (this_00,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Keys__
                               ),
          this_04 !=
          (Dictionary_2_TKey_TValue_KeyCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
           *)0x0)) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[System::
      Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)&stack0xffffffc0,
                 (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)this_04,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__GetEnumerator__
                );
      pMVar5 = (MethodInfo *)0x0;
      uStack_1 = 1;
      while( true ) {
        key = (Object__Class *)
              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__MoveNext__
        ;
        bVar6 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                Int32Enum,System::Single]::
                Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__MoveNext
                          ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                            *)&stack0xffffffb0,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__MoveNext__
                          );
        if (bVar6 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffb0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Dispose__
                     ,pMVar5);
          *unaff_FS_OFFSET = uStack_3;
          return pLVar4;
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pMVar5 = (MethodInfo *)(this->fields).teams;
        if (pMVar5 == (MethodInfo *)0x0) break;
        bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)pMVar5,
                           (Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                          );
        if (bVar6 != 0) {
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar7 == (MVNetworkGame *)0x0) ||
             (this_01 = (pMVar7->fields).gameStatCounterManager,
             this_01 == (GameStatCounterManager *)0x0)) break;
          MVWorldObject.dll::GameStatCounterManager::GameStatCounterManager_GetTeamCount
                    (this_01,gameStatCounterType,(MVTeam__Enum)key,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          cRam_? = '\x01';
        }
        pMVar8 = TypeInfo__MVTeamManager____c__DisplayClass29_0;
        pOVar9 = (Object *)func_?();
        if (pOVar9 == (Object *)0x0) break;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (pOVar9,ExceptionArgument__Enum_obj,pMVar5);
        pOVar9[1].klass = key;
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar7 == (MVNetworkGame *)0x0) ||
           (this_02 = (pMVar7->fields).playerContainer, this_02 == (MVPlayerContainer *)0x0)) break;
        source = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_02,(MethodInfo *)0x0);
        pMVar5 = (MethodInfo *)&UNK_?;
        this_05 = (Func_2_Object_Boolean_ *)func_?();
        if (this_05 == (Func_2_Object_Boolean_ *)0x0) break;
        mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
                  (this_05,pOVar9,
                   MethodInfo__MVTeamManager____c__DisplayClass29_0___GetPlayersInTeam_b__0_MVPlayer_
                   ,(MethodInfo *)0x0);
        source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_4
                              ((IEnumerable_1_System_Object_ *)source,this_05,
                               System__Collections__Generic__IEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__Where<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_bool>_
                              );
        pLVar10 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                           (source_00,
                            System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                           );
        if (pLVar10 == (List_1_System_Object_ *)0x0) break;
        pMVar11 = (MonitorData *)(pLVar10->fields)._size;
        this_03 = (this->fields).teamNames;
        if (this_03 == (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) break;
        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,
                            (Int32Enum__Enum)key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                           );
        value = (Object *)func_?();
        if (value == (Object *)0x0) break;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,pMVar5);
        value[1].klass = key;
        value[1].monitor = pMVar11;
        value[2].klass = (Object__Class *)pMVar8;
        value[2].monitor = (MonitorData *)pOVar9;
        pMVar5 = (MethodInfo *)&value[2].monitor;
        func_?();
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar4,value,
                   MethodInfo__System__Collections__Generic__List<TeamData>__Add_TeamData_);
      }
    }
  }
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  pLVar4 = (List_1_TeamData_ *)(*pcVar12)();
  return pLVar4;
}


/* MVTeam GetTeamFromActorNr(Int32) */

MVTeam__Enum
Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetTeamFromActorNr
          (MVTeamManager *this,int32_t actorNumber,MethodInfo *method)

{
  if (actorNumber == 0) {
    return MVTeam__Enum_Server;
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar2 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                       (this_00,actorNumber,(MethodInfo *)0x0);
    if (pMVar2 != (MVPlayer *)0x0) {
      return (pMVar2->fields)._Team_k__BackingField;
    }
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  MVar5 = (*pcVar4)();
  return MVar5;
}


/* List`1[MV.WorldObject.MVTeam] GetTeamList() */

List_1_MV_WorldObject_MVTeam_ *
Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetTeamList
          (MVTeamManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).teams;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                       (this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Keys__
                       );
    pLVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_3
                       ((IEnumerable_1_System_Int32Enum_ *)source,
                        System__Collections__Generic__List<MV::WorldObject::MVTeam>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::MVTeam>_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                       );
    return (List_1_MV_WorldObject_MVTeam_ *)pLVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pLVar5 = (List_1_MV_WorldObject_MVTeam_ *)(*pcVar4)();
  return pLVar5;
}


/* Boolean HasTeam(MVTeam) */

bool Assembly-CSharp.dll::MVTeamManager::MVTeamManager_HasTeam
               (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).teams;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean IsTeamActive(MVTeam) */

bool Assembly-CSharp.dll::MVTeamManager::MVTeamManager_IsTeamActive
               (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).teams;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void OnAddSpawnPoint(Int32, MVTeam) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_OnAddSpawnPoint
               (MVTeamManager *this,int32_t woId,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__HashSet<int>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__MV__WorldObject__TeamEventArgs);
    func_?(&StringLiteral_Attempt_to_AddTeam_of_type_Serve);
    cRam_? = '\x01';
  }
  if (team == MVTeam__Enum_Server) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Attempt_to_AddTeam_of_type_Serve,(MethodInfo *)0x0);
    return;
  }
  bVar1 = false;
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).teams;
  if (this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
  goto code_?;
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Object,GUILoginHandler+PlanetData]::
          Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                    (this_00,(Object *)team,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                    );
  if (bVar2 == 0) {
    this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).teams;
    this_03 = (HashSet_1_UnityEngine_Vector3_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    if (this_03 == (HashSet_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this_03,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_01,(Object *)team,(Object *)this_03,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__HashSet<int>_
              );
    bVar1 = true;
  }
  this_02 = (this->fields).teams;
  if (this_02 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
    this_04 = (HashSet_1_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,team,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                        );
    if (this_04 != (HashSet_1_System_Object_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
      HashSet_1_System_Object__Add
                (this_04,(Object *)woId,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      if (bVar1) {
        if ((this->fields).OnTeamsUpdated != (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
          (*(((this->fields).OnTeamsUpdated)->fields)._._.invoke_impl)();
        }
        if ((this->fields).OnTeamAdded != (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)0x0) {
          this_05 = (TeamEventArgs *)func_?();
          if (this_05 == (TeamEventArgs *)0x0) goto code_?;
          MVWorldObject.dll::MV::WorldObject::TeamEventArgs::TeamEventArgs__ctor
                    (this_05,team,(MethodInfo *)0x0);
          (*_UNK_?)(_UNK_?,this,this_05,_UNK_?);
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnRemoveSpawnPoint(Int32, MVTeam) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_OnRemoveSpawnPoint
               (MVTeamManager *this,int32_t id,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Remove_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    func_?(&TypeInfo__MV__WorldObject__TeamEventArgs);
    func_?(&StringLiteral_OnRemoveSpawnPoint);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).teams;
  if ((pDVar1 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) ||
     (this_02 = (HashSet_1_System_Int32_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,team,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                          ), this_02 == (HashSet_1_System_Int32_ *)0x0)) goto code_?;
  bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__Remove
                    (this_02,id,MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_)
  ;
  if (bVar2 == 0) goto code_?;
  pDVar1 = (this->fields).teams;
  if ((pDVar1 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) ||
     (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,team,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                         ), pOVar3 == (Object *)0x0)) {
code_?:
    func_?();
  }
  else {
    if (pOVar3[2].klass != (Object__Class *)0x0) {
code_?:
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_OnRemoveSpawnPoint,(MethodInfo *)0x0);
      pOVar3 = (Object *)(*(this->klass->vtable).ToString.methodPtr)();
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar3,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields).teams;
    if (pDVar1 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Remove
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,team,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Remove_MV__WorldObject__MVTeam_
              );
    if ((this->fields).OnTeamsUpdated != (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
      (*(((this->fields).OnTeamsUpdated)->fields)._._.invoke_impl)();
    }
    if ((this->fields).OnTeamRemoved != (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)0x0) {
      pEVar4 = (this->fields).OnTeamRemoved;
      this_03 = (TeamEventArgs *)func_?(TypeInfo__MV__WorldObject__TeamEventArgs);
      if (this_03 == (TeamEventArgs *)0x0) goto code_?;
      MVWorldObject.dll::MV::WorldObject::TeamEventArgs::TeamEventArgs__ctor
                (this_03,team,(MethodInfo *)0x0);
      (*(pEVar4->fields)._._.invoke_impl)
                ((pEVar4->fields)._._.method_code,this,this_03,(pEVar4->fields)._._.method);
    }
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                     );
      cRam_? = '\x01';
    }
    pOVar3 = (Object *)0x0;
    do {
      this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).teams;
      if (this_00 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
      goto code_?;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,pOVar3,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                        );
      if (bVar2 != 0) {
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar5 == (MVNetworkGame *)0x0) ||
           (this_01 = (pMVar5->fields).playerContainer, this_01 == (MVPlayerContainer *)0x0))
        goto code_?;
        MVPlayerContainer::MVPlayerContainer_UpdateTeamForPlayersOnRemovedTeam
                  (this_01,team,(MVTeam__Enum)pOVar3,(MethodInfo *)0x0);
        goto code_?;
      }
      pOVar3 = (Object *)((int)&pOVar3->klass + 1);
    } while ((int)pOVar3 < 4);
  }
  uVar6 = func_?(&TypeInfo__System__Exception);
  pEVar7 = (Exception *)func_?(uVar6);
  func_?(pEVar7);
  method_00 = (MethodInfo *)0x0;
  pSVar8 = (String *)func_?(&StringLiteral_Could_not_find_default_team);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar7,pSVar8,method_00);
  func_?(&MethodInfo__MVTeamManager__GetDefaultTeam__);
  func_?();
code_?:
  func_?();
  pEVar7 = (Exception *)func_?();
  func_?(pEVar7);
  pSVar8 = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar7,pSVar8,(MethodInfo *)0x0);
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetTeamNameToDefault(MVTeam) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_SetTeamNameToDefault
               (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__set_Item_MV__WorldObject__MVTeam__System__String_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).teamNames;
  this_01 = (this->fields).teamNamesDefault;
  if (this_01 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
    value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                      );
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)team,value,
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
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).teams;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                      (this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                      );
    return iVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar1 = (*pcVar4)();
  return iVar1;
}


/* Boolean TeamHasSpawnPoints(MVTeam) */

bool Assembly-CSharp.dll::MVTeamManager::MVTeamManager_TeamHasSpawnPoints
               (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVSpawnPoint);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              MVTeamManager_GetSpawnPointsForTeam(this_00,team,(MethodInfo *)0x0);
    index = 0;
    pMVar2 = (MethodInfo *)0x0;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      do {
        if ((this_01->fields)._size <= index) {
          return (bool)((uint)pMVar2 >> 0x18);
        }
        pMVar2 = MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_;
        RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_01,index,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                          );
        if (RVar3 != (RegexCharClass_SingleRange)0x0) {
          if (((TypeInfo__MVSpawnPoint->_1).typeHierarchyDepth <= *(byte *)(*(int *)RVar3 + 0xb4))
             && (*(MVSpawnPoint__Class **)
                  (*(int *)(*(int *)RVar3 + 100) + -4 +
                  (uint)(TypeInfo__MVSpawnPoint->_1).typeHierarchyDepth * 4) ==
                 TypeInfo__MVSpawnPoint)) {
            return 1;
          }
        }
        index = index + 1;
      } while( true );
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean TeamHasSpawnRoles(MVTeam) */

bool Assembly-CSharp.dll::MVTeamManager::MVTeamManager_TeamHasSpawnRoles
               (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              MVTeamManager_GetSpawnPointsForTeam(this_00,team,(MethodInfo *)0x0);
    index = 0;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      while( true ) {
        if ((this_01->fields)._size <= index) {
          return 0;
        }
        RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_01,index,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                          );
        if (RVar2 == (RegexCharClass_SingleRange)0x0) break;
        if (*(int *)((int)RVar2 + 0x54) == 0x86) {
          return 1;
        }
        index = index + 1;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* String ToString() */

String * Assembly-CSharp.dll::MVTeamManager::MVTeamManager_ToString
                   (MVTeamManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                   );
    func_?(&TypeInfo__MV__WorldObject__MVTeam);
    func_?(&StringLiteral_u000A);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pSVar4 = ::StringLiteral__;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Keys__
                   );
    func_?(&
                    System__Collections__Generic__List<MV::WorldObject::MVTeam>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::MVTeam>_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).teams;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                       (this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Keys__
                       );
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_3
                        ((IEnumerable_1_System_Int32Enum_ *)source,
                         System__Collections__Generic__List<MV::WorldObject::MVTeam>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::MVTeam>_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                        );
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 &stack0xffffffcc,this_01,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                );
      uStack_1 = 1;
      while( true ) {
        bVar5 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                RegularExpressions::RegexCharClass+SingleRange]::
                List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&stack0xffffffbc,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                          );
        if (bVar5 == 0) break;
        in_stack_6 =
             (MethodInfo *)
             mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffd0,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Concat_4
                           (pSVar4,StringLiteral_u000A,(String *)in_stack_6,(MethodInfo *)0x0
                           );
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffffbc,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                 ,in_stack_6);
      *unaff_FS_OFFSET = uStack_3;
      return pSVar4;
    }
  }
  uVar7 = func_?();
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar8)();
  return pSVar4;
}


/* Void UpdateTeamName(MVTeam, String) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_UpdateTeamName
               (MVTeamManager *this,MVTeam__Enum team,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).teamNames;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)team,(Object *)name,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__set_Item_MV__WorldObject__MVTeam__System__String_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVTeamManager() */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager__ctor(MVTeamManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>
                   );
    func_?(&StringLiteral_Yellow_Team);
    func_?(&StringLiteral_Green_Team);
    func_?(&StringLiteral_Blue_Team);
    func_?(&StringLiteral_Red_Team);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>
                          );
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary__
              );
    pSVar2 = TM::TM__(StringLiteral_Blue_Team,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x0,(Object *)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
              );
    pSVar2 = TM::TM__(StringLiteral_Red_Team,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x1,(Object *)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
              );
    pSVar2 = TM::TM__(StringLiteral_Green_Team,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x2,(Object *)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
              );
    pSVar2 = TM::TM__(StringLiteral_Yellow_Team,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar1,(Object *)0x3,(Object *)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
              );
    (this->fields).teamNamesDefault = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)pDVar1;
    func_?();
    pDVar1 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary__
                );
      pSVar2 = TM::TM__(StringLiteral_Blue_Team,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar1,(Object *)0x0,(Object *)pSVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
                );
      pSVar2 = TM::TM__(StringLiteral_Red_Team,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar1,(Object *)0x1,(Object *)pSVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
                );
      pSVar2 = TM::TM__(StringLiteral_Green_Team,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar1,(Object *)0x2,(Object *)pSVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
                );
      pSVar2 = TM::TM__(StringLiteral_Yellow_Team,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (pDVar1,(Object *)0x3,(Object *)pSVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
                );
      (this->fields).teamNames = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)pDVar1;
      func_?();
      this_00 = (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)func_?();
      if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Dictionary__
                  );
        method_00 = (MethodInfo *)&(this->fields).teams;
        (this->fields).teams = this_00;
        func_?(method_00,this_00);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)this,ExceptionArgument__Enum_obj,method_00);
        return;
      }
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
    func_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnTeamAdded;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>)
      ;
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)
             func_?(&(this->fields).OnTeamAdded,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Void add_OnTeamRemoved(EventHandler`1[MV.WorldObject.TeamEventArgs]) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_add_OnTeamRemoved
               (MVTeamManager *this,EventHandler_1_MV_WorldObject_TeamEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnTeamRemoved;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>)
      ;
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)
             func_?(&(this->fields).OnTeamRemoved,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
  return;
}


/* Int32 get_NumSpawnPoint() */

int32_t Assembly-CSharp.dll::MVTeamManager::MVTeamManager_get_NumSpawnPoint
                  (MVTeamManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iVar6 = 0;
  iStack_7 = 0;
  DStack_8._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_8._index = 0;
  DStack_8._version = 0;
  DStack_8._currentValue = (Object *)0x0;
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).teams;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    method_00 = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Values__
                          );
    if (method_00 != (MethodInfo *)0x0) {
      pDVar9 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         (&DStack_10,
                          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)method_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__GetEnumerator__
                         );
      DStack_8._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar9->_dictionary;
      DStack_8._index = pDVar9->_index;
      DStack_8._version = pDVar9->_version;
      DStack_8._currentValue = pDVar9->_currentValue;
      DStack_10._version = 0;
      uStack_1 = 1;
      DStack_10._currentValue = (Object *)&DStack_8;
      while( true ) {
        bVar11 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__MoveNext__
                          );
        if (bVar11 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&DStack_8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return iVar6;
        }
        if (DStack_8._currentValue == (Object *)0x0) break;
        iVar6 = (int)&((DStack_8._currentValue[2].klass)->_0).image + iVar6;
        iStack_7 = iVar6;
      }
    }
  }
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  iVar14 = (*pcVar13)();
  return iVar14;
}


/* Void remove_OnTeamAdded(EventHandler`1[MV.WorldObject.TeamEventArgs]) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_remove_OnTeamAdded
               (MVTeamManager *this,EventHandler_1_MV_WorldObject_TeamEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnTeamAdded;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>)
      ;
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)
             func_?(&(this->fields).OnTeamAdded,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}


/* Void remove_OnTeamRemoved(EventHandler`1[MV.WorldObject.TeamEventArgs]) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_remove_OnTeamRemoved
               (MVTeamManager *this,EventHandler_1_MV_WorldObject_TeamEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnTeamRemoved;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>)
      ;
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)
             func_?(&(this->fields).OnTeamRemoved,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}

