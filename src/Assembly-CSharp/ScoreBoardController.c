
/* ScoreBoardBase GetInstantiatedScoreboard(WinningConditionType) */

ScoreBoardBase *
Assembly-CSharp.dll::ScoreBoardController::ScoreBoardController_GetInstantiatedScoreboard
          (ScoreBoardController *this,WinningConditionType__Enum winConType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  ScoreBoardSingleBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardSingleBase>_ScoreBoardSingleBase_
                  ,CONCAT44(in_register_00000014,winConType));
    LOCK();
    UNLOCK();
    FUN_?(&
                  ScoreBoardTeamBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardTeamBase>_ScoreBoardTeamBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
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
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar4 = (pMVar3->fields).teams;
    if (pDVar4 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
      if ((pDVar4->fields)._count - (pDVar4->fields)._freeCount < 2) {
        data = (this->fields).scoreboardSingle;
        pMVar5 = 
        ScoreBoardSingleBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardSingleBase>_ScoreBoardSingleBase_
        ;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
          pMVar5 = 
          ScoreBoardSingleBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardSingleBase>_ScoreBoardSingleBase_
          ;
        }
      }
      else {
        data = (ScoreBoardSingleBase *)(this->fields).scoreboardTeam;
        pMVar5 = 
        ScoreBoardTeamBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardTeamBase>_ScoreBoardTeamBase_
        ;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
          pMVar5 = 
          ScoreBoardTeamBase_MethodInfo__UnityEngine__Object__Instantiate<ScoreBoardTeamBase>_ScoreBoardTeamBase_
          ;
        }
      }
      if ((pMVar5->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_The_Object_you_want_to_instantia);
        LOCK();
        UNLOCK();
        if ((pMVar5->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar5);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar6 = StringLiteral_The_Object_you_want_to_instantia;
      if (data != (ScoreBoardSingleBase *)0x0) {
        pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Internal_CloneSingle
                           ((Object_1 *)data,(MethodInfo *)0x0);
        pvVar8 = ((pMVar5->field7_0x38).rgctx_data)->rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar8 + 0x135) & 1) == 0) {
          pvVar8 = (void *)FUN_?(pvVar8);
        }
        if (pOVar7 == (Object_1 *)0x0) {
          pSVar9 = (ScoreBoardBase *)0x0;
        }
        else {
          pSVar9 = (ScoreBoardBase *)FUN_?(pOVar7,pvVar8);
          if (pSVar9 == (ScoreBoardBase *)0x0) {
            FUN_?(pOVar7,pvVar8);
            pcVar10 = (code *)swi(3);
            pSVar9 = (ScoreBoardBase *)(*pcVar10)();
            return pSVar9;
          }
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pSVar9 != (ScoreBoardBase *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pSVar9->fields)._._._._.m_CachedPtr != (void *)0x0) {
            return pSVar9;
          }
        }
        uVar11 = func_?(&TypeInfo__UnityEngine__UnityException);
        this_01 = (UnityException *)func_?(uVar11);
        pSVar6 = (String *)func_?(&StringLiteral_Instantiate_failed_because_the_c);
        UnityEngine.CoreModule.dll::UnityEngine::UnityException::UnityException__ctor_1
                  (this_01,pSVar6,(MethodInfo *)0x0);
        FUN_?(this_01,pMVar5);
        pcVar10 = (code *)swi(3);
        pSVar9 = (ScoreBoardBase *)(*pcVar10)();
        return pSVar9;
      }
      uVar11 = func_?(&TypeInfo__System__ArgumentException);
      this_00 = (InvalidEnumArgumentException *)func_?(uVar11);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(this_00,pSVar6,(MethodInfo *)0x0);
      uVar11 = func_?(&
                                  MethodInfo__UnityEngine__Object__CheckNullArgument_System__Object__System__String_
                                 );
      FUN_?(this_00,uVar11);
      pcVar10 = (code *)swi(3);
      pSVar9 = (ScoreBoardBase *)(*pcVar10)();
      return pSVar9;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  pSVar9 = (ScoreBoardBase *)(*pcVar10)();
  return pSVar9;
}

