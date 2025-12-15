
/* MVTeam GetDefaultTeam() */

MVTeam__Enum
Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetDefaultTeam
          (MVTeamManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  key = 0;
  while( true ) {
    this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).teams;
    if (this_00 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      MVar2 = (*pcVar1)();
      return MVar2;
    }
    iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar3) break;
    key = key + 1;
    if (3 < (int)key) {
      uVar4 = func_?(&TypeInfo__System__Exception);
      this_01 = (Exception *)func_?(uVar4);
      message = (String *)func_?(&StringLiteral_Could_not_find_default_team);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,(MethodInfo *)0x0);
      uVar4 = func_?(&MethodInfo__MVTeamManager__GetDefaultTeam__);
      FUN_?(this_01,uVar4);
      pcVar1 = (code *)swi(3);
      MVar2 = (*pcVar1)();
      return MVar2;
    }
  }
  return key;
}


/* Int32 GetNoOfPlayersInTeam(MVTeam) */

int32_t Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetNoOfPlayersInTeam
                  (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = MVTeamManager_GetPlayersInTeam(this,team,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_MVPlayer_ *)0x0) {
    return (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Int32 GetNoOfPlayersInTeamWithoutLocalPlayer(MVTeam) */

int32_t Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetNoOfPlayersInTeamWithoutLocalPlayer
                  (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__Where<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<MVPlayer,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVTeamManager____c__DisplayClass32_0___GetNoOfPlayersInTeamWithoutLocalPlayer_g__predicate_0_MVPlayer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTeamManager____c__DisplayClass32_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVTeamManager____c__DisplayClass32_0);
  if (object != (Object *)0x0) {
    bVar1 = cRam_? == '\0';
    *(MVTeam__Enum *)&object[1].klass = team;
    if (bVar1) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
      source = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
      this_01 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<MVPlayer,_bool>);
      mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                (this_01,object,
                 MethodInfo__MVTeamManager____c__DisplayClass32_0___GetNoOfPlayersInTeamWithoutLocalPlayer_g__predicate_0_MVPlayer_
                 ,(MethodInfo *)0x0);
      collection = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_1
                             ((IEnumerable_1_System_Object_ *)source,
                              (Func_2_Object_Boolean_ *)this_01,
                              System__Collections__Generic__IEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__Where<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_bool>_
                             );
      pMVar4 = 
      System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
      ;
      if ((
          System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                     );
      }
      if (collection == (IEnumerable_1_System_Object_ *)0x0) {
        s = (String *)func_?(&StringLiteral_source);
        pEVar5 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
        FUN_?(pEVar5,pMVar4);
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      pvVar8 = (pMVar4->field7_0x38).rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
        pvVar8 = (void *)FUN_?(pvVar8);
      }
      this_02 = (List_1_System_Object_ *)FUN_?(pvVar8);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1(this_02,collection,(pMVar4->field7_0x38).rgctx_data[2].method);
      if (this_02 != (List_1_System_Object_ *)0x0) {
        return (this_02->fields)._size;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* List`1[MVWorldObjectClient] GetOnlySpawnPointsForTeam(MVTeam) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetOnlySpawnPointsForTeam
          (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  pMVar1 = (MVSpawnPoint *)(ulonglong)team;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSpawnPoint);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = MVTeamManager_TeamHasSpawnPoints(this,team,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pLVar3 = MVTeamManager_GetSpawnPointsForTeam(this,team,(MethodInfo *)0x0);
    return pLVar3;
  }
  pLVar3 = (List_1_MVWorldObjectClient_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar3,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  pLStack_4 = pLVar3;
  this_03 = (List_1_MVWorldObjectClient_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  this_00 = (this->fields).teams;
  pLStack_5 = this_03;
  if ((this_00 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) &&
     (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,team,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                          ), pOVar6 != (Object *)0x0)) {
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)auStack_8 >> 0xc);
      puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar10 = *puVar9;
        LOCK();
        uVar11 = *puVar9;
        if (uVar10 == uVar11) {
          *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar10 != uVar11);
    }
    auStack_8._8_8_ = (ulonglong)*(uint *)&pOVar6[3].monitor << 0x20;
    uStack_12 = 0;
    lStack_13 = auStack_8._8_8_;
    uStack_14 = 0;
    auStack_8._0_4_ = 0;
    auStack_8._4_4_ = 0;
    auStack_8._8_8_ = &pOStack_15;
    pOStack_15 = pOVar6;
    while (cVar16 = FUN_?(&pOStack_15), cVar16 != '\0') {
      iVar17 = (int32_t)uStack_14;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar18 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar18 == (MVGameControllerBase *)0x0) goto code_?;
      pMVar19 = (pMVar18->fields).game;
      if (pMVar19 == (MVNetworkGame *)0x0) goto code_?;
      if (((pMVar19->fields).worldNetwork == (WorldNetwork *)0x0) ||
         (pMVar20 = (((pMVar19->fields).worldNetwork)->fields)._.worldObjectClientManager,
         pMVar20 == (MVWorldObjectClientManagerNetwork *)0x0)) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMStackX_20 = (MVSpawnPoint *)0x0;
      this_01 = (pMVar20->fields)._.worldObjects;
      if (this_01 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_01,iVar17,(Object **)&pMStackX_20,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      pMVar1 = pMStackX_20;
      if (pMStackX_20 != (MVSpawnPoint *)0x0) {
        pMVar21 = pMStackX_20->klass;
        bVar22 = (TypeInfo__MVSpawnPoint->_1).naturalAligment;
        if (((bVar22 <= (pMVar21->_1).naturalAligment) &&
            ((MVSpawnPoint__Class *)(pMVar21->_1).typeHierarchy[(ulonglong)bVar22 - 1] ==
             TypeInfo__MVSpawnPoint)) && (pMStackX_20 != (MVSpawnPoint *)0x0)) {
          bVar22 = (TypeInfo__MVSpawnPoint->_1).naturalAligment;
          if (((pMVar21->_1).naturalAligment < bVar22) ||
             ((MVSpawnPoint__Class *)(pMVar21->_1).typeHierarchy[(ulonglong)bVar22 - 1] !=
              TypeInfo__MVSpawnPoint)) goto code_?;
          bVar2 = MVSpawnPoint::MVSpawnPoint_get_SpawnPointOnlyFirstDeath
                             (pMStackX_20,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            if (pLVar3 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
            FUN_?(pLVar3,pMVar1);
          }
          else {
            if (this_03 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
            FUN_?(this_03,pMVar1);
          }
        }
      }
    }
    if (this_03 != (List_1_MVWorldObjectClient_ *)0x0) {
      if ((this_03->fields)._size != 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar18 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar18 == (MVGameControllerBase *)0x0) ||
            (pMVar19 = (pMVar18->fields).game, pMVar19 == (MVNetworkGame *)0x0)) ||
           ((this_02 = (pMVar19->fields).playerContainer, this_02 == (MVPlayerContainer *)0x0 ||
            (pMVar1 = (MVSpawnPoint *)
                       MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (this_02,(MethodInfo *)0x0), pMVar1 == (MVSpawnPoint *)0x0))))
        goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uVar23 = *(undefined8 *)((longlong)&(pMVar1->fields)._._.ScaleChanged + 4);
        ppOVar24 = *(Object ***)((longlong)&(pMVar1->fields)._._.SelectedChanged + 4);
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        auStack_8._0_8_ = uVar23;
        auStack_8._8_8_ = ppOVar24;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c ==
            0) {
          FUN_?();
        }
        iVar17 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                 ObscuredInt_InternalDecrypt((ObscuredInt *)auStack_8,(MethodInfo *)0x0);
        if (iVar17 + 0xe91 < 1) {
          return this_03;
        }
      }
      if (pLVar3 != (List_1_MVWorldObjectClient_ *)0x0) {
        if ((pLVar3->fields)._size != 0) {
          return pLVar3;
        }
        return this_03;
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(pMVar1);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar25 = (code *)swi(3);
  pLVar3 = (List_1_MVWorldObjectClient_ *)(*pcVar25)();
  return pLVar3;
}


/* List`1[MVPlayer] GetPlayersInTeam(MVTeam) */

List_1_MVPlayer_ *
Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetPlayersInTeam
          (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__Where<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<MVPlayer,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVTeamManager____c__DisplayClass29_0___GetPlayersInTeam_b__0_MVPlayer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVTeamManager____c__DisplayClass29_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MVTeamManager____c__DisplayClass29_0);
  if (object != (Object *)0x0) {
    bVar1 = cRam_? == '\0';
    *(MVTeam__Enum *)&object[1].klass = team;
    if (bVar1) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
      source = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(this_00,(MethodInfo *)0x0);
      this_01 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<MVPlayer,_bool>);
      mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                (this_01,object,
                 MethodInfo__MVTeamManager____c__DisplayClass29_0___GetPlayersInTeam_b__0_MVPlayer_,
                 (MethodInfo *)0x0);
      collection = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_1
                             ((IEnumerable_1_System_Object_ *)source,
                              (Func_2_Object_Boolean_ *)this_01,
                              System__Collections__Generic__IEnumerable<MVPlayer>_MethodInfo__System__Linq__Enumerable__Where<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>__System__Func<MVPlayer,_bool>_
                             );
      pMVar4 = 
      System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
      ;
      if ((
          System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     System__Collections__Generic__List<MVPlayer>_MethodInfo__System__Linq__Enumerable__ToList<MVPlayer>_System__Collections__Generic__IEnumerable<MVPlayer>_
                     );
      }
      if (collection != (IEnumerable_1_System_Object_ *)0x0) {
        pvVar5 = (pMVar4->field7_0x38).rgctx_data[1].rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
          pvVar5 = (void *)FUN_?(pvVar5);
        }
        pLVar6 = (List_1_MVPlayer_ *)FUN_?(pvVar5);
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object___ctor_1
                  ((List_1_System_Object_ *)pLVar6,collection,
                   (pMVar4->field7_0x38).rgctx_data[2].method);
        return pLVar6;
      }
      s = (String *)func_?(&StringLiteral_source);
      pEVar7 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
      FUN_?(pEVar7,pMVar4);
      pcVar8 = (code *)swi(3);
      pLVar6 = (List_1_MVPlayer_ *)(*pcVar8)();
      return pLVar6;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pLVar6 = (List_1_MVPlayer_ *)(*pcVar8)();
  return pLVar6;
}


/* Int32 GetScore(MVTeam, GameStatCounterType) */

int32_t Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetScore
                  (MVTeamManager *this,MVTeam__Enum team,
                  GameStatCounterType__Enum gameStatCounterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).teams;
  if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this_00,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return 0;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
       (pGVar4 = (pMVar3->fields).gameStatCounterManager, pGVar4 != (GameStatCounterManager *)0x0))
    {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                      ,(char)gameStatCounterType,team,0,unaff_RDI);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                 *)(pGVar4->fields).statTypeCounters;
      if (this_01 !=
          (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
           *)0x0) {
        iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
                WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
                Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                          (this_01,gameStatCounterType & 0xff,
                           MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__ContainsKey_GameStatCounterType_
                           ->klass->rgctx_data[0x21].method);
        if (iVar1 < 0) {
          return 0;
        }
        this_02 = (pGVar4->fields).statTypeCounters;
        if ((this_02 != (Dictionary_2_GameStatCounterType_TeamsCounter_ *)0x0) &&
           (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,
                                gameStatCounterType & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<GameStatCounterType,_TeamsCounter>__get_Item_GameStatCounterType_
                               ), pOVar5 != (Object *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pOVar5[1].klass != (Object__Class *)0x0) {
            iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,UnityEngine::Vector3]::
                    Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                              ((Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)pOVar5[1].klass
                               ,team,MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__ContainsKey_MV__WorldObject__MVTeam_
                                     ->klass->rgctx_data[0x21].method);
            if (iVar1 < 0) {
              return 0;
            }
            if ((pOVar5[1].klass != (Object__Class *)0x0) &&
               (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32Enum,System::Object]::
                         Dictionary_2_System_Int32Enum_System_Object__get_Item
                                   ((Dictionary_2_System_Int32Enum_System_Object_ *)pOVar5[1].klass,
                                    team,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_TeamCounter>__get_Item_MV__WorldObject__MVTeam_
                                   ), pOVar5 != (Object *)0x0)) {
              return *(int32_t *)&pOVar5[1].monitor;
            }
          }
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      iVar1 = (*pcVar6)();
      return iVar1;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar1 = (*pcVar6)();
  return iVar1;
}


/* List`1[MVWorldObjectClient] GetSpawnPointsForTeam(MVTeam) */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetSpawnPointsForTeam
          (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_MVWorldObjectClient_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  this_00 = (this->fields).teams;
  if ((this_00 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) ||
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,team,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                          ), pOVar2 == (Object *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    ppOStack_8 = (Object **)((ulonglong)*(uint *)&pOVar2[3].monitor << 0x20);
    uStack_9 = 0;
    lStack_10 = (longlong)ppOStack_8;
    uStack_11 = 0;
    uStack_4 = 0;
    ppOStack_8 = &pOStack_12;
    pOStack_12 = pOVar2;
    while( true ) {
      cVar13 = FUN_?(&pOStack_12,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                            );
      if (cVar13 == '\0') {
        return pLVar1;
      }
      key = (int32_t)uStack_11;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar14 == (MVGameControllerBase *)0x0) break;
      pMVar15 = (pMVar14->fields).game;
      if (pMVar15 == (MVNetworkGame *)0x0) goto code_?;
      if (((pMVar15->fields).worldNetwork == (WorldNetwork *)0x0) ||
         (pMVar16 = (((pMVar15->fields).worldNetwork)->fields)._.worldObjectClientManager,
         pMVar16 == (MVWorldObjectClientManagerNetwork *)0x0)) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOStackX_8 = (Object *)0x0;
      this_01 = (pMVar16->fields)._.worldObjects;
      if (this_01 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,&pOStackX_8,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      pMVar17 = 
      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_;
      if (pLVar1 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
      piVar18 = &(pLVar1->fields)._version;
      *piVar18 = *piVar18 + 1;
      pMVar19 = (pLVar1->fields)._items;
      uVar3 = (pLVar1->fields)._size;
      if (pMVar19 == (MVWorldObjectClient__Array *)0x0) goto code_?;
      if (uVar3 < (uint)pMVar19->max_length) {
        (pLVar1->fields)._size = uVar3 + 1;
        FUN_?(pMVar19,(longlong)(int)uVar3,pOStackX_8);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)pLVar1,pOStackX_8,
                   pMVar17->klass->rgctx_data[0xe].method);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar20 = (code *)swi(3);
  pLVar1 = (List_1_MVWorldObjectClient_ *)(*pcVar20)();
  return pLVar1;
}


/* List`1[TeamData] GetTeamDatas(GameStatCounterType) */

List_1_TeamData_ *
Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetTeamDatas
          (MVTeamManager *this,GameStatCounterType__Enum gameStatCounterType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TeamData>__Add_TeamData_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TeamData>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<TeamData>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_TeamData_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<TeamData>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<TeamData>__List__);
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).teams;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::TypeConverterRegistry+ConverterKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                             (this_00,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Keys__
                             ),
        pDVar2 ==
        (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
         *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    pDStack_3 = (pDVar2->fields)._dictionary;
    ppDStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)0x0;
    uStack_5 = 0;
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&pDStack_7 >> 0xc);
      lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    if (pDStack_3 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      pDStack_7 = pDStack_3;
      FUN_?();
      pcVar12 = (code *)swi(3);
      pLVar1 = (List_1_TeamData_ *)(*pcVar12)();
      return pLVar1;
    }
    ppDStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)((ulonglong)(uint)(pDStack_3->fields)._version << 0x20);
    uStack_5 = 0;
    uStack_13 = (longlong)ppDStack_4;
    uStack_14 = 0;
    pDStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0;
    ppDStack_4 = &pDStack_3;
    while (pDStack_3 !=
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0) {
      if (uStack_13._4_4_ != (pDStack_3->fields)._version) goto code_?;
      uVar6 = (uint)uStack_13;
      do {
        if (pDStack_3 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        if ((uint)(pDStack_3->fields)._count <= uVar6) {
          return pLVar1;
        }
        pDVar15 = (pDStack_3->fields)._entries;
        lVar8 = (longlong)(int)uVar6;
        uStack_13 = CONCAT44(uStack_13._4_4_,uVar6 + 1);
        if (pDVar15 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)0x0) goto code_?;
        if ((uint)pDVar15->max_length <= uVar6) goto code_?;
        uVar6 = uVar6 + 1;
      } while ((&pDVar15->vector[0].hashCode)[lVar8 * 6] < 0);
      key = *(Int32Enum__Enum *)((longlong)&pDVar15->vector[0].key + lVar8 * 0x18);
      uStack_14 = CONCAT44(uStack_14._4_4_,key);
      iVar16 = MVTeamManager_GetScore(this,key,gameStatCounterType & 0xff,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar17 = MVTeamManager_GetPlayersInTeam(this,key,(MethodInfo *)0x0);
      if (pLVar17 == (List_1_MVPlayer_ *)0x0) goto code_?;
      iVar18 = (pLVar17->fields)._size;
      this_01 = (this->fields).teamNames;
      if (this_01 == (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0)
      goto code_?;
      pOVar19 = (Object__Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,key,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                          );
      item = (Object *)FUN_?();
      *(Int32Enum__Enum *)&item[1].klass = key;
      *(int32_t *)((longlong)&item[1].klass + 4) = iVar18;
      *(int32_t *)&item[1].monitor = iVar16;
      item[2].klass = pOVar19;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(item + 2) >> 0xc);
        lVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      pMVar20 = MethodInfo__System__Collections__Generic__List<TeamData>__Add_TeamData_;
      if (pLVar1 == (List_1_TeamData_ *)0x0) goto code_?;
      piVar21 = &(pLVar1->fields)._version;
      *piVar21 = *piVar21 + 1;
      pTVar22 = (pLVar1->fields)._items;
      uVar6 = (pLVar1->fields)._size;
      if (pTVar22 == (TeamData__Array *)0x0) goto code_?;
      if (uVar6 < (uint)pTVar22->max_length) {
        (pLVar1->fields)._size = uVar6 + 1;
        FUN_?(pTVar22,(longlong)(int)uVar6,item);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)pLVar1,item,pMVar20->klass->rgctx_data[0xe].method);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  pLVar1 = (List_1_TeamData_ *)(*pcVar12)();
  return pLVar1;
}


/* MVTeam GetTeamFromActorNr(Int32) */

MVTeam__Enum
Assembly-CSharp.dll::MVTeamManager::MVTeamManager_GetTeamFromActorNr
          (MVTeamManager *this,int32_t actorNumber,MethodInfo *method)

{
  if (actorNumber == 0) {
    return MVTeam__Enum_Server;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar3 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                       (this_00,actorNumber,(MethodInfo *)0x0);
    if (pMVar3 != (MVPlayer *)0x0) {
      return (pMVar3->fields)._Team_k__BackingField;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<MV::WorldObject::MVTeam>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::MVTeam>_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).teams;
  if (this_00 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_MV_WorldObject_MVTeam_ *)(*pcVar1)();
    return pLVar2;
  }
  collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               TypeConverterRegistry+ConverterKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                         (this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Keys__
                         );
  pMVar3 = 
  System__Collections__Generic__List<MV::WorldObject::MVTeam>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::MVTeam>_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
  ;
  if ((
      System__Collections__Generic__List<MV::WorldObject::MVTeam>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::MVTeam>_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 System__Collections__Generic__List<MV::WorldObject::MVTeam>_MethodInfo__System__Linq__Enumerable__ToList<MV::WorldObject::MVTeam>_System__Collections__Generic__IEnumerable<MV::WorldObject::MVTeam>_
                 );
  }
  if (collection !=
      (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
       *)0x0) {
    pvVar4 = (pMVar3->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar4 + 0x135) & 1) == 0) {
      pvVar4 = (void *)FUN_?(pvVar4);
    }
    this_01 = (List_1_System_Int32Enum_ *)FUN_?(pvVar4);
    mscorlib.dll::System::Collections::Generic::List`1[System::Int32Enum]::
    List_1_System_Int32Enum___ctor_1
              (this_01,(IEnumerable_1_System_Int32Enum_ *)collection,
               (pMVar3->field7_0x38).rgctx_data[2].method);
    return (List_1_MV_WorldObject_MVTeam_ *)this_01;
  }
  s = (String *)func_?(&StringLiteral_source);
  pEVar5 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
  FUN_?(pEVar5,pMVar3);
  pcVar1 = (code *)swi(3);
  pLVar2 = (List_1_MV_WorldObject_MVTeam_ *)(*pcVar1)();
  return pLVar2;
}


/* Boolean HasTeam(MVTeam) */

bool Assembly-CSharp.dll::MVTeamManager::MVTeamManager_HasTeam
               (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).teams;
  if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this_00,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return 0;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar2 = (this->fields).teams;
    if (pDVar2 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
      return 1 < (pDVar2->fields)._count - (pDVar2->fields)._freeCount;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean IsTeamActive(MVTeam) */

bool Assembly-CSharp.dll::MVTeamManager::MVTeamManager_IsTeamActive
               (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).teams;
  if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this_00,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void OnAddSpawnPoint(Int32, MVTeam) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_OnAddSpawnPoint
               (MVTeamManager *this,int32_t woId,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__HashSet<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__TeamEventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempt_to_AddTeam_of_type_Serve);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (team == MVTeam__Enum_Server) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar1 = StringLiteral_Attempt_to_AddTeam_of_type_Serve;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar2 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar2 != (ILogger_1 *)0x0) {
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar2,0,pSVar1);
      return;
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).teams;
  bVar4 = false;
  if (this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this_00,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                       ->klass->rgctx_data[0x21].method);
    if (iVar5 < 0) {
      pDVar6 = (this->fields).teams;
      value = (Object *)FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
      FUN_?(value,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      if (pDVar6 == (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0)
      goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,team,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Add_MV__WorldObject__MVTeam__System__Collections__Generic__HashSet<int>_
                 ->klass->rgctx_data[0x22].method);
      bVar4 = true;
    }
    pDVar6 = (this->fields).teams;
    if (pDVar6 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
      this_01 = (HashSet_1_System_Int32_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,team,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                          );
      if (this_01 != (HashSet_1_System_Int32_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
        HashSet_1_System_Int32__AddIfNotPresent
                  (this_01,woId,
                   MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->
                   rgctx_data[0x15].method);
        if (bVar4) {
          if ((this->fields).OnTeamsUpdated != (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
            pMVar7 = (this->fields).OnTeamsUpdated;
            (*(pMVar7->fields)._._.invoke_impl)
                      ((pMVar7->fields)._._.method_code,(pMVar7->fields)._._.method);
          }
          if ((this->fields).OnTeamAdded != (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)0x0) {
            pEVar8 = (this->fields).OnTeamAdded;
            this_02 = (TeamEventArgs *)FUN_?(TypeInfo__MV__WorldObject__TeamEventArgs);
            MVWorldObject.dll::MV::WorldObject::TeamEventArgs::TeamEventArgs__ctor
                      (this_02,team,(MethodInfo *)0x0);
            (*(pEVar8->fields)._._.invoke_impl)
                      ((pEVar8->fields)._._.method_code,this,this_02,(pEVar8->fields)._._.method);
          }
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnRemoveSpawnPoint(Int32, MVTeam) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_OnRemoveSpawnPoint
               (MVTeamManager *this,int32_t id,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Remove_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__TeamEventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_OnRemoveSpawnPoint);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).teams;
  if ((pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) &&
     (this_02 = (HashSet_1_System_Int32Enum_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,team,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                          ), this_02 != (HashSet_1_System_Int32Enum_ *)0x0)) {
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Remove
                      (this_02,id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Remove_int_);
    if (bVar2 == 0) {
      uVar3 = func_?(&TypeInfo__System__Exception);
      pEVar4 = (Exception *)func_?(uVar3);
      pSVar5 = (String *)func_?(&StringLiteral_Team_wo_id_already_removed);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar4,pSVar5,(MethodInfo *)0x0);
      uVar3 = func_?(&
                                   MethodInfo__MVTeamManager__OnRemoveSpawnPoint_int__MV__WorldObject__MVTeam_
                                  );
      FUN_?(pEVar4,uVar3);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pDVar1 = (this->fields).teams;
    if ((pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) &&
       (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,team,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Item_MV__WorldObject__MVTeam_
                           ), pOVar7 != (Object *)0x0)) {
      if (*(int *)&pOVar7[2].klass != 0) {
code_?:
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_OnRemoveSpawnPoint,(MethodInfo *)0x0);
        uVar3 = (*(this->klass->vtable).ToString.methodPtr)
                           (this,(this->klass->vtable).ToString.method);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__ILogger);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Debug);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pIVar8 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar8 == (ILogger_1 *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar8,3,uVar3);
        return;
      }
      pDVar1 = (this->fields).teams;
      if (pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Remove
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,team,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Remove_MV__WorldObject__MVTeam_
                  );
        if ((this->fields).OnTeamsUpdated != (MVTeamManager_OnTeamsUpdatedDelegate *)0x0) {
          pMVar9 = (this->fields).OnTeamsUpdated;
          (*(pMVar9->fields)._._.invoke_impl)
                    ((pMVar9->fields)._._.method_code,(pMVar9->fields)._._.method);
        }
        if ((this->fields).OnTeamRemoved != (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)0x0) {
          pEVar10 = (this->fields).OnTeamRemoved;
          this_03 = (TeamEventArgs *)FUN_?(TypeInfo__MV__WorldObject__TeamEventArgs);
          MVWorldObject.dll::MV::WorldObject::TeamEventArgs::TeamEventArgs__ctor
                    (this_03,team,(MethodInfo *)0x0);
          (*(pEVar10->fields)._._.invoke_impl)((pEVar10->fields)._._.method_code,this,this_03);
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        key = 0;
        while (this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)(this->fields).teams,
              this_00 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
          iVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Int32Enum,UnityEngine::Vector3]::
                  Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                            (this_00,key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__ContainsKey_MV__WorldObject__MVTeam_
                             ->klass->rgctx_data[0x21].method);
          if (-1 < iVar11) {
            pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar12 == (MVNetworkGame *)0x0) ||
               (this_01 = (pMVar12->fields).playerContainer, this_01 == (MVPlayerContainer *)0x0))
            break;
            MVPlayerContainer::MVPlayerContainer_UpdateTeamForPlayersOnRemovedTeam
                      (this_01,team,key,(MethodInfo *)0x0);
            goto code_?;
          }
          key = key + 1;
          if (3 < (int)key) {
            uVar3 = func_?(&TypeInfo__System__Exception);
            pEVar4 = (Exception *)func_?(uVar3);
            pSVar5 = (String *)func_?(&StringLiteral_Could_not_find_default_team);
            mscorlib.dll::System::Exception::Exception__ctor_1(pEVar4,pSVar5,(MethodInfo *)0x0);
            uVar3 = func_?(&MethodInfo__MVTeamManager__GetDefaultTeam__);
            FUN_?(pEVar4,uVar3);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetTeamNameToDefault(MVTeam) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_SetTeamNameToDefault
               (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__set_Item_MV__WorldObject__MVTeam__System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).teamNamesDefault;
  this_01 = (this->fields).teamNames;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
    value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,team,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__get_Item_MV__WorldObject__MVTeam_
                      );
    if (this_01 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,team,value,
                 CONCAT31((int3)((uint)in_R9D >> 8),1),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__set_Item_MV__WorldObject__MVTeam__System__String_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 TeamCount() */

int32_t Assembly-CSharp.dll::MVTeamManager::MVTeamManager_TeamCount
                  (MVTeamManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).teams;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
    return (pDVar1->fields)._count - (pDVar1->fields)._freeCount;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Boolean TeamHasSpawnPoints(MVTeam) */

bool Assembly-CSharp.dll::MVTeamManager::MVTeamManager_TeamHasSpawnPoints
               (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSpawnPoint);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    pLVar3 = MVTeamManager_GetSpawnPointsForTeam(this_00,team,(MethodInfo *)0x0);
    uVar4 = 0;
    if (pLVar3 != (List_1_MVWorldObjectClient_ *)0x0) {
      lVar5 = 0x20;
      uVar6 = (pLVar3->fields)._size;
      while( true ) {
        if ((int)uVar6 <= (int)uVar4) {
          return 0;
        }
        if (uVar6 <= uVar4) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          bVar8 = (*pcVar7)();
          return bVar8;
        }
        pMVar9 = (pLVar3->fields)._items;
        if (pMVar9 == (MVWorldObjectClient__Array *)0x0) break;
        if ((uint)pMVar9->max_length <= uVar4) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          bVar8 = (*pcVar7)();
          return bVar8;
        }
        plVar10 = *(longlong **)((longlong)pMVar9->vector + lVar5 + -0x20);
        if (plVar10 != (longlong *)0x0) {
          lVar11 = *plVar10;
          bVar12 = (TypeInfo__MVSpawnPoint->_1).naturalAligment;
          if ((bVar12 <= *(byte *)(lVar11 + 0x130)) &&
             (*(MVSpawnPoint__Class **)(*(longlong *)(lVar11 + 200) + -8 + (ulonglong)bVar12 * 8) ==
              TypeInfo__MVSpawnPoint)) {
            return 1;
          }
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 8;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Boolean TeamHasSpawnRoles(MVTeam) */

bool Assembly-CSharp.dll::MVTeamManager::MVTeamManager_TeamHasSpawnRoles
               (MVTeamManager *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
    pLVar3 = MVTeamManager_GetSpawnPointsForTeam(this_00,team,(MethodInfo *)0x0);
    uVar4 = 0;
    if (pLVar3 != (List_1_MVWorldObjectClient_ *)0x0) {
      uVar5 = (pLVar3->fields)._size;
      lVar6 = 0x20;
      while( true ) {
        if ((int)uVar5 <= (int)uVar4) {
          return 0;
        }
        if (uVar5 <= uVar4) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          bVar8 = (*pcVar7)();
          return bVar8;
        }
        pMVar9 = (pLVar3->fields)._items;
        if (pMVar9 == (MVWorldObjectClient__Array *)0x0) break;
        if ((uint)pMVar9->max_length <= uVar4) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          bVar8 = (*pcVar7)();
          return bVar8;
        }
        lVar10 = *(longlong *)((longlong)pMVar9->vector + lVar6 + -0x20);
        if (lVar10 == 0) break;
        if (*(int *)(lVar10 + 0x68) == 0x86) {
          return 1;
        }
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + 8;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* String ToString() */

String * Assembly-CSharp.dll::MVTeamManager::MVTeamManager_ToString
                   (MVTeamManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  pLVar2 = MVTeamManager_GetTeamList(this,(MethodInfo *)0x0);
  if (pLVar2 == (List_1_MV_WorldObject_MVTeam_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    iStack_8 = (pLVar2->fields)._version;
    uStack_9 = 0;
    uStack_4._0_4_ = SUB84(pLVar2,0);
    uStack_4._4_4_ = (undefined4)((ulonglong)pLVar2 >> 0x20);
    uStack_10 = (undefined4)uStack_4;
    uStack_11 = uStack_4._4_4_;
    uStack_12 = 0;
    uStack_13 = 0;
    uStack_4 = 0;
    puStack_14 = &uStack_10;
    while (lVar15 = CONCAT44(uStack_11,uStack_10), lVar15 != 0) {
      if ((iStack_8 != *(int *)(lVar15 + 0x1c)) || (*(uint *)(lVar15 + 0x18) <= uStack_12)) {
        if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MVTeam>__MoveNext__
             ->klass->field_0x135 & 1) == 0) {
          FUN_?();
          lVar15 = CONCAT44(uStack_11,uStack_10);
        }
        if (lVar15 == 0) goto code_?;
        if (iStack_8 == *(int *)(lVar15 + 0x1c)) {
          return pSVar1;
        }
        goto code_?;
      }
      lVar15 = *(longlong *)(lVar15 + 0x10);
      if (lVar15 == 0) goto code_?;
      if (*(uint *)(lVar15 + 0x18) <= uStack_12) goto code_?;
      uStack_16 = *(undefined4 *)(lVar15 + 0x20 + (longlong)(int)uStack_12 * 4);
      uStack_13 = CONCAT44(uStack_13._4_4_,uStack_16);
      uStack_12 = uStack_12 + 1;
      EStack_17.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
      EStack_17.monitor = (MonitorData *)0xffffffffffffffff;
      str2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_17,(MethodInfo *)0x0);
      pSVar1 = mscorlib.dll::System::String::String_Concat_5
                         (pSVar1,StringLiteral_u000A,str2,(MethodInfo *)0x0);
    }
  }
  FUN_?();
  FUN_?();
  pcVar18 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar18)();
  return pSVar1;
}


/* Void UpdateTeamName(MVTeam, String) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_UpdateTeamName
               (MVTeamManager *this,MVTeam__Enum team,String *name,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__set_Item_MV__WorldObject__MVTeam__System__String_
                  ,CONCAT44(in_register_00000014,team),name,uVar1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).teamNames;
  if (this_00 != (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,team,(Object *)name,
               CONCAT31((int3)((uint)uVar1 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__set_Item_MV__WorldObject__MVTeam__System__String_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVTeamManager() */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager__ctor(MVTeamManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Yellow_Team);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Green_Team);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Blue_Team);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Red_Team);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary__
            );
  pSVar2 = TM::TM__(StringLiteral_Blue_Team,(MethodInfo *)0x0);
  if (pDVar1 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    IVar3 = CONCAT31((int3)((uint)in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0,(Object *)pSVar2,IVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
               ->klass->rgctx_data[0x22].method);
    pSVar2 = TM::TM__(StringLiteral_Red_Team,(MethodInfo *)0x0);
    IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,1,(Object *)pSVar2,IVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
               ->klass->rgctx_data[0x22].method);
    pSVar2 = TM::TM__(StringLiteral_Green_Team,(MethodInfo *)0x0);
    IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,2,(Object *)pSVar2,IVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
               ->klass->rgctx_data[0x22].method);
    pSVar2 = TM::TM__(StringLiteral_Yellow_Team,(MethodInfo *)0x0);
    IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,3,(Object *)pSVar2,IVar3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
               ->klass->rgctx_data[0x22].method);
    bVar4 = iRam_? != 0;
    (this->fields).teamNamesDefault = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)pDVar1;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&this->fields >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
             FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>
                          );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
    Int32Enum,GamePassesHighScoreList+HighScoreListData]::
    Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
              (pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary__
              );
    pSVar2 = TM::TM__(StringLiteral_Blue_Team,(MethodInfo *)0x0);
    if (pDVar1 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
      IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0,(Object *)pSVar2,IVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
                 ->klass->rgctx_data[0x22].method);
      pSVar2 = TM::TM__(StringLiteral_Red_Team,(MethodInfo *)0x0);
      IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,1,(Object *)pSVar2,IVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
                 ->klass->rgctx_data[0x22].method);
      pSVar2 = TM::TM__(StringLiteral_Green_Team,(MethodInfo *)0x0);
      IVar3 = CONCAT31((int3)(IVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,2,(Object *)pSVar2,IVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
                 ->klass->rgctx_data[0x22].method);
      pSVar2 = TM::TM__(StringLiteral_Yellow_Team,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,3,(Object *)pSVar2,
                 CONCAT31((int3)(IVar3 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Add_MV__WorldObject__MVTeam__System__String_
                 ->klass->rgctx_data[0x22].method);
      bVar4 = iRam_? != 0;
      (this->fields).teamNames = (Dictionary_2_MV_WorldObject_MVTeam_System_String_ *)pDVar1;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).teamNames >> 0xc);
        lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
          LOCK();
          bVar4 = uVar7 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
               FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>
                            );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Int32Enum,GamePassesHighScoreList+HighScoreListData]::
      Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                (pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Dictionary__
                );
      bVar4 = iRam_? != 0;
      (this->fields).teams = (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)pDVar1;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).teams >> 0xc);
        uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar4 = uVar9 == *puVar8;
          if (bVar4) {
            *puVar8 = uVar9 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar4);
      }
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void add_OnTeamAdded(EventHandler`1[MV.WorldObject.TeamEventArgs]) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_add_OnTeamAdded
               (MVTeamManager *this,EventHandler_1_MV_WorldObject_TeamEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnTeamAdded;
  a = (this->fields).OnTeamAdded;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
      if (pEVar4 == (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* Void add_OnTeamRemoved(EventHandler`1[MV.WorldObject.TeamEventArgs]) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_add_OnTeamRemoved
               (MVTeamManager *this,EventHandler_1_MV_WorldObject_TeamEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnTeamRemoved;
  a = (this->fields).OnTeamRemoved;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
      if (pEVar4 == (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* Int32 get_NumSpawnPoint() */

int32_t Assembly-CSharp.dll::MVTeamManager::MVTeamManager_get_NumSpawnPoint
                  (MVTeamManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 0;
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).teams;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Values__
                            ),
        pDVar2 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    uVar3 = uStack_4;
code_?:
    uStack_4 = uVar3;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    uStack_5 = (pDVar2->fields)._dictionary;
    puStack_6 = (undefined4 *)0x0;
    uStack_7 = 0;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_5 >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    if (uStack_5 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar11 = (code *)swi(3);
      iVar12 = (*pcVar11)();
      return iVar12;
    }
    iStack_13 = (uStack_5->fields)._version;
    uStack_7 = 0;
    uStack_5._4_4_ = (undefined4)((ulonglong)uStack_5 >> 0x20);
    uStack_14 = (undefined4)uStack_5;
    uStack_15 = uStack_5._4_4_;
    uStack_4 = 0;
    lStack_16 = 0;
    uStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_6 = &uStack_14;
    while (lVar17 = CONCAT44(uStack_15,uStack_14), lVar17 != 0) {
      if (iStack_13 != *(int *)(lVar17 + 0x2c)) goto code_?;
      do {
        if (lVar17 == 0) goto code_?;
        if (*(uint *)(lVar17 + 0x20) <= uStack_4) {
          return iVar1;
        }
        lVar18 = *(longlong *)(lVar17 + 0x18);
        lVar19 = (longlong)(int)uStack_4;
        uVar3 = uStack_4 + 1;
        if (lVar18 == 0) goto code_?;
        bVar20 = *(uint *)(lVar18 + 0x18) <= uStack_4;
        uStack_4 = uVar3;
        if (bVar20) goto code_?;
      } while (*(int *)(lVar18 + 0x20 + lVar19 * 0x18) < 0);
      lStack_16 = *(longlong *)(lVar18 + (lVar19 + 2) * 0x18);
      func_?();
      if (lStack_16 == 0) goto code_?;
      iVar1 = iVar1 + *(int *)(lStack_16 + 0x20);
    }
  }
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  iVar12 = (*pcVar11)();
  return iVar12;
}


/* Void remove_OnTeamAdded(EventHandler`1[MV.WorldObject.TeamEventArgs]) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_remove_OnTeamAdded
               (MVTeamManager *this,EventHandler_1_MV_WorldObject_TeamEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnTeamAdded;
  source = (this->fields).OnTeamAdded;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
      if (pEVar4 == (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}


/* Void remove_OnTeamRemoved(EventHandler`1[MV.WorldObject.TeamEventArgs]) */

void Assembly-CSharp.dll::MVTeamManager::MVTeamManager_remove_OnTeamRemoved
               (MVTeamManager *this,EventHandler_1_MV_WorldObject_TeamEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnTeamRemoved;
  source = (this->fields).OnTeamRemoved;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<MV::WorldObject::TeamEventArgs>);
      if (pEVar4 == (EventHandler_1_MV_WorldObject_TeamEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}

