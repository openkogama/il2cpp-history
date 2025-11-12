
/* Boolean CanShowSpawnRoleSelect() */

bool Assembly-CSharp.dll::TeamMenu::TeamMenu_CanShowSpawnRoleSelect
               (TeamMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     ((pMVar2->fields).teamManager == (MVTeamManager *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  team = (this->fields)._.selectedTeam;
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
    pLVar5 = MVTeamManager::MVTeamManager_GetSpawnPointsForTeam(this_00,team,(MethodInfo *)0x0);
    uVar6 = 0;
    if (pLVar5 != (List_1_MVWorldObjectClient_ *)0x0) {
      uVar7 = (pLVar5->fields)._size;
      lVar8 = 0x20;
      while( true ) {
        if ((int)uVar7 <= (int)uVar6) {
          return 0;
        }
        if (uVar7 <= uVar6) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          bVar4 = (*pcVar3)();
          return bVar4;
        }
        pMVar9 = (pLVar5->fields)._items;
        if (pMVar9 == (MVWorldObjectClient__Array *)0x0) break;
        if ((uint)pMVar9->max_length <= uVar6) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          bVar4 = (*pcVar3)();
          return bVar4;
        }
        lVar10 = *(longlong *)((longlong)pMVar9->vector + lVar8 + -0x20);
        if (lVar10 == 0) break;
        if (*(int *)(lVar10 + 0x68) == 0x86) {
          return 1;
        }
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 8;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean CanSpawnAsSelectedClass() */

bool Assembly-CSharp.dll::TeamMenu::TeamMenu_CanSpawnAsSelectedClass
               (TeamMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData != (PlayerPlanetData *)0x0) {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
    if ((((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0xb0), lVar1 != 0)) &&
       (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) {
      if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
           ->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      bVar2 = *(byte *)(lVar1 + 0x10);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        bVar4 = (pPVar3->fields).gamePassTier;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar3 != (PlayerPlanetData *)0x0) {
          if (bVar2 <= bVar4) {
            return 1;
          }
          return bVar2 <= (pPVar3->fields).previewGamePassTier;
        }
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  return 1;
}


/* Void OnTeamSelected(MVTeam) */

void Assembly-CSharp.dll::TeamMenu::TeamMenu_OnTeamSelected
               (TeamMenu *this,MVTeam__Enum selectedTeam,MethodInfo *method)

{
  (this->fields)._.selectedTeam = selectedTeam;
  LobbyFlowMenu::LobbyFlowMenu_UpdateAvailableMenues((LobbyFlowMenu *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 0;
  bVar2 = false;
  bVar3 = false;
  iVar4 = 0;
  pLVar5 = (this->fields)._.menuOrder;
  while (pLVar5 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
    if ((pLVar5->fields)._size <= iVar4) {
      if (!bVar3) {
        (*(this->klass->vtable).StartPlaying.methodPtr)
                  (this,(this->klass->vtable).StartPlaying.method);
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar5 = (this->fields)._.menuOrder;
      bVar2 = false;
      if (pLVar5 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
      break;
    }
    if (bVar2) {
      bVar3 = true;
    }
    pLVar5 = (this->fields)._.menuOrder;
    if (pLVar5 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) break;
    iVar6 = FUN_?(pLVar5,iVar4);
    iVar7 = (*(this->klass->vtable).get_MenuType.methodPtr)
                      (this,(this->klass->vtable).get_MenuType.method);
    if (iVar6 == iVar7) {
      bVar2 = true;
    }
    iVar4 = iVar4 + 1;
    pLVar5 = (this->fields)._.menuOrder;
  }
  goto code_?;
  while( true ) {
    newMenuType = FUN_?(pLVar5,iVar1);
    if (bVar2) goto code_?;
    LVar8 = (*(this->klass->vtable).get_MenuType.methodPtr)
                      (this,(this->klass->vtable).get_MenuType.method);
    if (newMenuType == LVar8) {
      bVar2 = true;
    }
    pLVar5 = (this->fields)._.menuOrder;
    iVar1 = iVar1 + 1;
    if (pLVar5 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) break;
code_?:
    if ((pLVar5->fields)._size <= iVar1) {
      newMenuType = LobbyFlowMenu_LobbyFlowMenuType__Enum_None;
code_?:
      LobbyFlowMenu::LobbyFlowMenu_GoToMenu((LobbyFlowMenu *)this,newMenuType,(MethodInfo *)0x0);
      return;
    }
    pLVar5 = (this->fields)._.menuOrder;
    if (pLVar5 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) break;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TeamMenu::TeamMenu_Start(TeamMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Linq__IOrderedEnumerable<TeamData>_MethodInfo__System__Linq__Enumerable__OrderBy<TeamData,_int>_System__Collections__Generic__IEnumerable<TeamData>__System__Func<TeamData,_int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<TeamData>_MethodInfo__System__Linq__Enumerable__ToList<TeamData>_System__Collections__Generic__IEnumerable<TeamData>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<TeamData,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TeamData>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<TeamData>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TeamSelectButton_MethodInfo__UnityEngine__Object__Instantiate<TeamSelectButton>_TeamSelectButton_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TeamMenu__OnTeamSelected_MV__WorldObject__MVTeam_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TeamMenu____c___Start_b__5_0_TeamData_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamMenu____c);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    value = (this->fields)._.cameraMaskMode;
    player = (MVPlayer *)(ulonglong)value;
    pMVar1 = (MethodInfo *)0x0;
    MainCameraManager::MainCameraManager_set_CamMaskMode(this_01,value,(MethodInfo *)0x0);
    if ((this->fields)._.haveSetSelectedTeam == 0) {
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,pMVar1);
      if (extraout_RAX == 0) goto code_?;
      (this->fields)._.selectedTeam = *(int32_t *)(extraout_RAX + 0x84);
    }
    uVar2 = 0;
    LobbyFlowMenu::LobbyFlowMenu_UpdateAvailableMenues((LobbyFlowMenu *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 != (MVGameControllerBase *)0x0) &&
        (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar4->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
      source = MVTeamManager::MVTeamManager_GetTeamDatas
                         (this_00,(GameStatCounterType__Enum)
                                  CONCAT71((int7)((ulonglong)uVar2 >> 8),1),(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__TeamMenu____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TeamMenu____c);
      }
      this_02 = TypeInfo__TeamMenu____c->static_fields->__9__5_0;
      if (this_02 == (Func_2_TeamData_Int32_ *)0x0) {
        if (*(int *)&(TypeInfo__TeamMenu____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__TeamMenu____c);
        }
        object = TypeInfo__TeamMenu____c->static_fields->__9;
        this_02 = (Func_2_TeamData_Int32_ *)FUN_?(TypeInfo__System__Func<TeamData,_int>);
        mscorlib.dll::System::Func`2[Object,Int32Enum]::Func_2_Object_Int32Enum___ctor
                  ((Func_2_Object_Int32Enum_ *)this_02,(Object *)object,
                   MethodInfo__TeamMenu____c___Start_b__5_0_TeamData_,(MethodInfo *)0x0);
        TypeInfo__TeamMenu____c->static_fields->__9__5_0 = this_02;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&TypeInfo__TeamMenu____c->static_fields->__9__5_0 >> 0xc);
          lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
            puVar8 = (ulonglong *)(lVar6 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
      }
      collection = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_5
                             ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Int32_ *)this_02
                              ,
                              System__Linq__IOrderedEnumerable<TeamData>_MethodInfo__System__Linq__Enumerable__OrderBy<TeamData,_int>_System__Collections__Generic__IEnumerable<TeamData>__System__Func<TeamData,_int>_
                             );
      pMVar1 = 
      System__Collections__Generic__List<TeamData>_MethodInfo__System__Linq__Enumerable__ToList<TeamData>_System__Collections__Generic__IEnumerable<TeamData>_
      ;
      if ((
          System__Collections__Generic__List<TeamData>_MethodInfo__System__Linq__Enumerable__ToList<TeamData>_System__Collections__Generic__IEnumerable<TeamData>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     System__Collections__Generic__List<TeamData>_MethodInfo__System__Linq__Enumerable__ToList<TeamData>_System__Collections__Generic__IEnumerable<TeamData>_
                     );
      }
      if (collection == (IOrderedEnumerable_1_System_Object_ *)0x0) {
        s = (String *)func_?(&StringLiteral_source);
        pEVar10 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
        FUN_?(pEVar10,pMVar1);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pvVar12 = (pMVar1->field7_0x38).rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar12 + 0x135) & 1) == 0) {
        pvVar12 = (void *)FUN_?(pvVar12);
      }
      this_03 = (List_1_System_Object_ *)FUN_?(pvVar12);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                (this_03,(IEnumerable_1_System_Object_ *)collection,
                 (pMVar1->field7_0x38).rgctx_data[2].method);
      uVar5 = 0;
      if (this_03 != (List_1_System_Object_ *)0x0) {
        lVar6 = 0x20;
        while( true ) {
          if ((this_03->fields)._size <= (int)uVar5) {
            return;
          }
          pTVar13 = (this->fields).teamPrefab;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pTVar13 = (TeamSelectButton *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pTVar13,
                               TeamSelectButton_MethodInfo__UnityEngine__Object__Instantiate<TeamSelectButton>_TeamSelectButton_
                              );
          if ((uint)(this_03->fields)._size <= uVar5) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pOVar14 = (this_03->fields)._items;
          if (pOVar14 == (Object__Array *)0x0) break;
          if ((uint)pOVar14->max_length <= uVar5) {
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          teamData = *(TeamData **)((longlong)pOVar14->vector + lVar6 + -0x20);
          OnTeamSelected =
               (UnityAction_1_MV_WorldObject_MVTeam_ *)
               FUN_?(TypeInfo__UnityEngine__Events__UnityAction<MV::WorldObject::MVTeam>);
          pMVar1 = MethodInfo__TeamMenu__OnTeamSelected_MV__WorldObject__MVTeam_;
          bVar9 = iRam_? != 0;
          (OnTeamSelected->fields)._._.method_ptr =
               MethodInfo__TeamMenu__OnTeamSelected_MV__WorldObject__MVTeam_->virtualMethodPointer;
          (OnTeamSelected->fields)._._.method = pMVar1;
          (OnTeamSelected->fields)._._.m_target = (Object *)this;
          if (bVar9) {
            uVar15 = (uint)((ulonglong)&(OnTeamSelected->fields)._._.m_target >> 0xc);
            lVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
            do {
              uVar7 = *(ulonglong *)(lVar16 + 0xADDR);
              puVar8 = (ulonglong *)(lVar16 + 0xADDR);
              LOCK();
              bVar9 = uVar7 == *puVar8;
              if (bVar9) {
                *puVar8 = uVar7 | 1L << (uVar15 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          uVar17 = pMVar1->parameters_count;
          (OnTeamSelected->fields)._._.method_code = OnTeamSelected;
          if (((pMVar1->flags & 0x10) == 0) || (uVar17 != 1)) {
            (OnTeamSelected->fields)._._.method_code = (OnTeamSelected->fields)._._.m_target;
            puVar18 = (OnTeamSelected->fields)._._.method_ptr;
          }
          else {
            puVar18 = &UNK_?;
          }
          (OnTeamSelected->fields)._._.invoke_impl = puVar18;
          (OnTeamSelected->fields)._._.extra_arg = FUN_?;
          if (pTVar13 == (TeamSelectButton *)0x0) break;
          TeamSelectButton::TeamSelectButton_Initialize
                    (pTVar13,teamData,OnTeamSelected,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar12 = (pTVar13->fields)._._._._.m_CachedPtr;
          if (pvVar12 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcRam_? = pcVar11;
          pvVar12 = (void *)(*pcRam_?)(pvVar12);
          obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                   Unmarshal_UnmarshalUnityObject
                             (pvVar12,
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
          obj = (this->fields).teamLayoutGroup;
          if (obj == (VerticalLayoutGroup *)0x0) break;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          CVar19._.m_CachedPtr = (obj->fields)._._._._._._._;
          if (CVar19._.m_CachedPtr == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcRam_? = pcVar11;
          pvVar12 = (void *)(*pcRam_?)(CVar19._.m_CachedPtr);
          pOVar20 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar12,
                               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                              );
          if (obj_00 == (Object *)0x0) break;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar21 = obj_00[1].klass;
          if (pOVar21 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          pOVar22 = (Object__Class *)0x0;
          if (pOVar20 != (Object *)0x0) {
            pOVar22 = pOVar20[1].klass;
          }
          pcVar11 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
            uVar2 = func_?(&UNK_?);
            FUN_?(uVar2,0);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pcRam_? = pcVar11;
          (*pcRam_?)(pOVar21,pOVar22,0);
          uVar5 = uVar5 + 1;
          lVar6 = lVar6 + 8;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::TeamMenu::TeamMenu_StartPlaying(TeamMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TeamMenu____c___StartPlaying_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamMenu____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__TeamMenu____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__TeamMenu____c);
  }
  this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            TypeInfo__TeamMenu____c->static_fields->__9__11_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
    if (*(int *)&(TypeInfo__TeamMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TeamMenu____c);
    }
    object = TypeInfo__TeamMenu____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,(Object *)object,
               MethodInfo__TeamMenu____c___StartPlaying_b__11_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__TeamMenu____c->static_fields->__9__11_0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__TeamMenu____c->static_fields->__9__11_0 >> 0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimePressPlayController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  player = (ILockCursorManager__Class *)(ulonglong)bRam_?;
  if (bRam_? == 0) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    player = (ILockCursorManager__Class *)CONCAT71((int7)((ulonglong)player >> 8),1);
    bRam_? = 1;
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__ILockCursorManager);
      LOCK();
      UNLOCK();
      player = (ILockCursorManager__Class *)(ulonglong)bRam_?;
      cRam_? = '\x01';
    }
    if ((char)player == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      bRam_? = 1;
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      pMVar5 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
      if ((pMVar5 == (MVGameControllerDesktop *)0x0) ||
         (this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    (pMVar5->fields).lockCursorManager,
         this_00 == (ExecuteEvents_EventFunction_1_System_Object_ *)0x0)) goto code_?;
      player = TypeInfo__ILockCursorManager;
      FUN_?();
    }
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)player,(MethodInfo *)this_00);
    if (((extraout_RAX == 0) || (*(longlong *)(extraout_RAX + 200) == 0)) ||
       (MVTriggerBox::MVTriggerBox_OnExit
                  ((MVTriggerBox *)0x0,(MVPlayer *)player,(MethodInfo *)this_00),
       extraout_RAX_00 == 0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((*(longlong *)(extraout_RAX_00 + 0x90) == 0) ||
       (pDVar6 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                  (*(longlong *)(extraout_RAX_00 + 0x90) + 0x10),
       pDVar6 == (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) goto code_?;
    pMVar7 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
    ;
    IVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                       (pDVar6,0,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                       );
    player_00 = (MVPlayer *)(ulonglong)IVar8;
    cVar9 = FUN_?();
    if (cVar9 == '\0') {
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar7 = (MethodInfo *)
              TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pMVar7 == (MethodInfo *)0x0) goto code_?;
    player_01 = TypeInfo__IPlayModeUI;
    FUN_?();
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)player_01,pMVar7);
    if (((extraout_RAX_01 == 0) || (*(longlong *)(extraout_RAX_01 + 200) == 0)) ||
       (MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)player_01,pMVar7),
       extraout_RAX_02 == 0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((*(longlong *)(extraout_RAX_02 + 0x90) == 0) ||
       (pDVar6 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                  (*(longlong *)(extraout_RAX_02 + 0x90) + 0x10),
       pDVar6 == (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) goto code_?;
    pMVar7 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
    ;
    IVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                       (pDVar6,0,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                       );
    player_00 = (MVPlayer *)(ulonglong)IVar8;
    cVar9 = FUN_?();
    if (cVar9 == '\0') {
      pSVar10 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if ((pSVar10 != (SpawnRoleDataMediator *)0x0) &&
         (pSVar11 = (pSVar10->fields).SpawnRoleModeTypeWrapper,
         pSVar11 != (SpawnRoleModeTypeWrapper *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar12 = (pSVar11->fields).spawnRoleType;
        if ((pSVar12 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
           (pSVar13 = (pSVar12->fields).subscribableVariable,
           pSVar13 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
          if (((pSVar13->fields)._.value & 4) == 0) {
            return;
          }
          pGVar14 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                              ((MethodInfo *)0x0);
          if ((pGVar14 != (GameEventManager *)0x0) &&
             (pGVar15 = (pGVar14->fields).AvatarCommandsPlayMode,
             pGVar15 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0)) {
            if ((pGVar15->fields).OnEnterPlaymode == (Action *)0x0) {
              return;
            }
            pAVar16 = (pGVar15->fields).OnEnterPlaymode;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pAVar16->fields)._._.invoke_impl)
                      ((pAVar16->fields)._._.method_code,(pAVar16->fields)._._.method);
            return;
          }
        }
      }
      goto code_?;
    }
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player_00,pMVar7);
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player_00,pMVar7);
  if ((this_02 != (MVLocalPlayer *)0x0) &&
     (existingAvatarWoId =
           MVLocalPlayer::MVLocalPlayer_get_DefaultSpawnRoleId(this_02,(MethodInfo *)0x0),
     this_01 != (MVLocalPlayer *)0x0)) {
    MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole(this_01,existingAvatarWoId,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TeamMenu::TeamMenu_Update(TeamMenu *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    if ((pMVar1->fields).blueModeEnabled == 0) {
      return;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar1 != (MainCameraManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_CamRotateTarget);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      (pMVar1->fields).maskMode = 2;
      obj = (pMVar1->fields).mainCamera;
      if (obj != (Camera *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                        ,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (Camera *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar3 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar3,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateBackButtonVisibility() */

void Assembly-CSharp.dll::TeamMenu::TeamMenu_UpdateBackButtonVisibility
               (TeamMenu *this,MethodInfo *method)

{
  obj = (this->fields).backButton;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData == (PlayerPlanetData *)0x0) {
code_?:
    bVar1 = true;
  }
  else {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
    if ((((extraout_RAX == 0) || (*(longlong *)(extraout_RAX + 200) == 0)) ||
        (lVar2 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0xb0), lVar2 == 0)) ||
       (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 == 0)) goto code_?;
    if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
         ->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    bVar3 = *(byte *)(lVar2 + 0x10);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar4 == (PlayerPlanetData *)0x0) goto code_?;
    bVar5 = (pPVar4->fields).gamePassTier;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar4 == (PlayerPlanetData *)0x0) goto code_?;
    if (bVar3 <= bVar5) goto code_?;
    bVar1 = bVar3 <= (pPVar4->fields).previewGamePassTier;
  }
  if (obj != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                    ,bVar1,0,in_R9,unaff_RSI);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (obj == (GameObject *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pvVar7 = (obj->fields)._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar7,bVar1);
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

