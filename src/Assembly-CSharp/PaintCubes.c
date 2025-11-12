
/* Void Enter(CubeModelingStateMachine) */

void Assembly-CSharp.dll::PaintCubes::PaintCubes_Enter
               (PaintCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PaintCursor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (e != (CubeModelingStateMachine *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
      FUN_?();
    }
    cubeCorners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                            ((MethodInfo *)0x0);
    pPVar1 = (PaintCursor *)FUN_?(TypeInfo__PaintCursor);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CellCursor);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar2 != (PrefabPool *)0x0) {
      material = (pPVar2->fields).cellCursorMaterial;
      this_00 = (CellCursor *)FUN_?(TypeInfo__CellCursor);
      CellCursor::CellCursor__ctor
                (this_00,1,_UNK_?,material,_UNK_?,cubeCorners,(MethodInfo *)0x0);
      iVar3 = iRam_?;
      (pPVar1->fields).paintCursor = this_00;
      if (iVar3 != 0) {
        uVar4 = (uint)((ulonglong)&pPVar1->fields >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
          iVar3 = iRam_?;
        } while (!bVar8);
      }
      (this->fields).paintCursor = pPVar1;
      if (iVar3 != 0) {
        uVar4 = (uint)((ulonglong)&(this->fields).paintCursor >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar9 != (MVGameControllerBase *)0x0) &&
           (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
          (pGVar11 = (pMVar10->fields).GameEventManager, pGVar11 != (GameEventManager *)0x0)) &&
         ((pGVar12 = (pGVar11->fields).AvatarCommandsBuildMode,
          pGVar12 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
          (pGVar13 = (pGVar12->fields).LaserCommands,
          pGVar13 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))))
      {
        pAVar14 = (pGVar13->fields).OnChangeState;
        if (pAVar14 != (Action_1_LaserPointerState_ *)0x0) {
          (*(pAVar14->fields)._._.invoke_impl)((pAVar14->fields)._._.method_code,6);
        }
        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVInputWrapper);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar15 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                           (KogamaControls__Enum_PointerSelect,KeyState__Enum_Pressed,
                            (MethodInfo *)0x0);
        (this->fields)._.waitForMouseUp = bVar15;
        return;
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::PaintCubes::PaintCubes_Execute
               (PaintCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CubeModelTool::CubeModelTool_Execute((CubeModelTool *)this,e,(MethodInfo *)0x0);
  if ((this->fields)._.waitForMouseUp != 0) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                       (KogamaControls__Enum_PointerSelect,KeyState__Enum_Pressed,(MethodInfo *)0x0)
    ;
    (this->fields)._.waitForMouseUp = bVar1;
    return;
  }
  bVar1 = 0;
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                     (KogamaControls__Enum_PointerSelect,KeyState__Enum_Pressed,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
  }
  else {
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    if ((e->fields)._SelectedCube_k__BackingField != (CubePickingInfo *)0x0) {
      pCVar3 = (((e->fields)._SelectedCube_k__BackingField)->fields).cube;
      if ((pCVar3 == (Cube *)0x0) ||
         (pBVar4 = (pCVar3->fields)._.faceMaterials, pBVar4 == (Byte__Array *)0x0))
      goto code_?;
      if ((int)pBVar4->max_length == 0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar6 = pBVar4->vector[0];
      uVar7 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                         (e,(MethodInfo *)0x0);
      if (uVar6 != uVar7) {
        uVar6 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                           (e,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar8 == (MVGameControllerBase *)0x0) ||
            (pMVar9 = (pMVar8->fields).game, pMVar9 == (MVNetworkGame *)0x0)) ||
           (this_00 = (pMVar9->fields)._MaterialRepository_k__BackingField,
           this_00 == (MVMaterialRepository *)0x0)) goto code_?;
        pMVar10 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                            (this_00,uVar6,(MethodInfo *)0x0);
        if (pMVar10 == (MVMaterial *)0x0) goto code_?;
        if ((pMVar10->fields).isUnlocked == 0) {
          pPVar11 = (this->fields).paintCursor;
          if (pPVar11 == (PaintCursor *)0x0) goto code_?;
          bVar12 = cRam_? == '\0';
          this_01 = (pPVar11->fields).paintCursor;
          (pPVar11->fields).flashingTime = 1.0;
          (pPVar11->fields).flashing = 1;
          if (bVar12) {
            FUN_?(&TypeInfo__PrefabPool);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar13 = TypeInfo__PrefabPool->static_fields->instance;
          if ((pPVar13 == (PrefabPool *)0x0) || (this_01 == (CellCursor *)0x0))
          goto code_?;
          CellCursor::CellCursor_ChangeMaterial
                    (this_01,(pPVar13->fields).cellCursorErrorMaterial,(MethodInfo *)0x0);
          ModelCursor::ModelCursor_ShowUnlockMaterialNotification
                    (0,NotificationLifetime__Enum_Low,(MethodInfo *)0x0);
          bVar1 = 1;
          goto code_?;
        }
        pCVar14 = (e->fields)._SelectedCube_k__BackingField;
        if (pCVar14 == (CubePickingInfo *)0x0) goto code_?;
        IStackX_8.x = (pCVar14->fields).iLocalPos.x;
        IStackX_8.y = (pCVar14->fields).iLocalPos.y;
        IStackX_8.z = (pCVar14->fields).iLocalPos.z;
        CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                  (e,&IStackX_8,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
        pCVar14 = (e->fields)._SelectedCube_k__BackingField;
        pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
        if (pCVar14 == (CubePickingInfo *)0x0) goto code_?;
        uVar16._0_2_ = (pCVar14->fields).iLocalPos.x;
        uVar16._2_2_ = (pCVar14->fields).iLocalPos.y;
        iVar17 = (pCVar14->fields).iLocalPos.z;
        uVar6 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                           (e,(MethodInfo *)0x0);
        if (pMVar15 == (MVCubeModelBase *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__CubeModelChangedEventArgs);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        MVCubeModelBase::MVCubeModelBase_MakeUnique(pMVar15,(MethodInfo *)0x0);
        pRVar18 = (pMVar15->fields).prototypeCubeModel;
        if (pRVar18 == (RuntimePrototypeCubeModel *)0x0) goto code_?;
        iVector = &IStackX_8;
        IStackX_8._0_4_ = uVar16;
        IStackX_8.z = iVar17;
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_ReplaceCube
                  (pRVar18,iVector,uVar6,(MethodInfo *)0x0);
        this_02 = (pMVar15->fields).changedEventArgsQueue;
        this_03 = (CubeModelChangedEventArgs *)FUN_?(TypeInfo__CubeModelChangedEventArgs);
        IStackX_8._0_4_ = uVar16;
        IStackX_8.z = iVar17;
        CubeModelChangedEventArgs::CubeModelChangedEventArgs__ctor
                  (this_03,(CubeAction__Enum)CONCAT71((int7)((ulonglong)iVector >> 8),3),&IStackX_8,
                   pMVar15,(MethodInfo *)0x0);
        if (this_02 == (Queue_1_CubeModelChangedEventArgs_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
        Queue_1_System_Object__Enqueue
                  ((Queue_1_System_Object_ *)this_02,(Object *)this_03,
                   MethodInfo__System__Collections__Generic__Queue<CubeModelChangedEventArgs>__Enqueue_CubeModelChangedEventArgs_
                  );
        pMVar15 = (e->fields)._TargetCubeModel_k__BackingField;
        if ((pMVar15 == (MVCubeModelBase *)0x0) ||
           (pRVar18 = (pMVar15->fields).prototypeCubeModel,
           pRVar18 == (RuntimePrototypeCubeModel *)0x0)) goto code_?;
        cubeCount = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_get_CubeCount
                              (pRVar18,(MethodInfo *)0x0);
        CubeModelTool::CubeModelTool_SendCubeEvent
                  (cubeCount,EditCubeChange__Enum_CubePainted,(MethodInfo *)0x0);
      }
      bVar1 = 1;
    }
  }
code_?:
  pPVar11 = (this->fields).paintCursor;
  if (pPVar11 != (PaintCursor *)0x0) {
    PaintCursor::PaintCursor_UpdateCursor
              (pPVar11,(e->fields)._SelectedCube_k__BackingField,
               (e->fields)._TargetCubeModel_k__BackingField,bVar1,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Exit(CubeModelingStateMachine) */

void Assembly-CSharp.dll::PaintCubes::PaintCubes_Exit
               (PaintCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) &&
     ((pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
      pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
      (pGVar5 = (pGVar4->fields).LaserCommands,
      pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) {
    pAVar6 = (pGVar5->fields).OnChangeState;
    if (pAVar6 != (Action_1_LaserPointerState_ *)0x0) {
      (*(pAVar6->fields)._._.invoke_impl)
                ((pAVar6->fields)._._.method_code,0,(pAVar6->fields)._._.method);
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).HideCursor.methodPtr)(this,(this->klass->vtable).HideCursor.method);
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

