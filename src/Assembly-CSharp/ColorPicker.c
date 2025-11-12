
/* Void Enter(CubeModelingStateMachine) */

void Assembly-CSharp.dll::ColorPicker::ColorPicker_Enter
               (ColorPicker *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PickColorCursor);
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
    pPVar1 = (PickColorCursor *)FUN_?(TypeInfo__PickColorCursor);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CellCursor);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar2 = cRam_? == '\0';
    (pPVar1->fields).currentMaterial = 1;
    if (bVar2) {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar3 != (PrefabPool *)0x0) {
      material = (pPVar3->fields).cellCursorMaterial;
      this_00 = (CellCursor *)FUN_?(TypeInfo__CellCursor);
      CellCursor::CellCursor__ctor
                (this_00,1,_UNK_?,material,_UNK_?,cubeCorners,(MethodInfo *)0x0);
      iVar4 = iRam_?;
      (pPVar1->fields).paintCursor = this_00;
      if (iVar4 != 0) {
        uVar5 = (uint)((ulonglong)&pPVar1->fields >> 0xc);
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar7 == *puVar8;
          if (bVar2) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
          iVar4 = iRam_?;
        } while (!bVar2);
      }
      (this->fields).cursor = pPVar1;
      if (iVar4 != 0) {
        uVar5 = (uint)((ulonglong)&(this->fields).cursor >> 0xc);
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar7 == *puVar8;
          if (bVar2) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      (this->fields).lastCubePicked = 0xff;
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::ColorPicker::ColorPicker_Execute
               (ColorPicker *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CubeModelTool::CubeModelTool_Execute((CubeModelTool *)this,e,(MethodInfo *)0x0);
  bVar1 = 1;
  if (e == (CubeModelingStateMachine *)0x0) goto code_?;
  if ((e->fields)._SelectedCube_k__BackingField != (CubePickingInfo *)0x0) {
    pCVar2 = (((e->fields)._SelectedCube_k__BackingField)->fields).cube;
    if ((pCVar2 == (Cube *)0x0) ||
       (pBVar3 = (pCVar2->fields)._.faceMaterials, pBVar3 == (Byte__Array *)0x0))
    goto code_?;
    if ((int)pBVar3->max_length == 0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    materialId = pBVar3->vector[0];
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
    bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                       (KogamaControls__Enum_PointerSelect,KeyState__Enum_Up,(MethodInfo *)0x0);
    if ((bVar5 != 0) || (materialId != (this->fields).lastCubePicked)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar6 == (MVGameControllerBase *)0x0) ||
           (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
          (this_00 = (pMVar7->fields)._MaterialRepository_k__BackingField,
          this_00 == (MVMaterialRepository *)0x0)) ||
         (pMVar8 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                              (this_00,materialId,(MethodInfo *)0x0), pMVar8 == (MVMaterial *)0x0))
      goto code_?;
      bVar1 = 1;
      if ((pMVar8->fields).isUnlocked == 0) {
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar7 == (MVNetworkGame *)0x0) ||
            (this_01 = (pMVar7->fields).playerContainer, this_01 == (MVPlayerContainer *)0x0)) ||
           ((pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (this_01,(MethodInfo *)0x0), pMVar9 == (MVLocalPlayer *)0x0 ||
            (this_02 = (pMVar9->fields)._._SubscriptionRules_k__BackingField,
            this_02 == (SubscriptionRulesWrapper *)0x0)))) goto code_?;
        bVar1 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                 SubscriptionRulesWrapper_HasBenefit
                           (this_02,SubscriptionBenefit__Enum_FreeBuildingMaterials,
                            (MethodInfo *)0x0);
      }
      uVar10 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                         (e,(MethodInfo *)0x0);
      bVar11 = 0;
      if (materialId != uVar10) {
        bVar11 = bVar5;
      }
      if (bVar11 != 0) {
        if (bVar1 == 0) {
          pPVar12 = (this->fields).cursor;
          if (pPVar12 == (PickColorCursor *)0x0) goto code_?;
          bVar13 = cRam_? == '\0';
          pCVar14 = (pPVar12->fields).paintCursor;
          (pPVar12->fields).flashingTime = 1.0;
          (pPVar12->fields).flashing = 1;
          if (bVar13) {
            FUN_?(&TypeInfo__PrefabPool);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pPVar15 = TypeInfo__PrefabPool->static_fields->instance;
          if ((pPVar15 == (PrefabPool *)0x0) || (pCVar14 == (CellCursor *)0x0))
          goto code_?;
          CellCursor::CellCursor_ChangeMaterial
                    (pCVar14,(pPVar15->fields).cellCursorErrorMaterial,(MethodInfo *)0x0);
          ModelCursor::ModelCursor_ShowUnlockMaterialNotification
                    (1,NotificationLifetime__Enum_Low,(MethodInfo *)0x0);
        }
        else {
          CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                    (e,materialId,(MethodInfo *)0x0);
        }
      }
    }
  }
  pPVar12 = (this->fields).cursor;
  pCVar16 = (e->fields)._SelectedCube_k__BackingField;
  pMVar17 = (e->fields)._TargetCubeModel_k__BackingField;
  if (pPVar12 != (PickColorCursor *)0x0) {
    if ((pPVar12->fields).flashing != 0) {
      fVar18 = (pPVar12->fields).flashingTime;
      if (0.0 < fVar18) {
        (pPVar12->fields).flashingTime = fVar18 - _UNK_?;
      }
      else {
        bVar13 = cRam_? == '\0';
        pCVar14 = (pPVar12->fields).paintCursor;
        (pPVar12->fields).flashing = 0;
        if (bVar13) {
          FUN_?(&TypeInfo__PrefabPool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar15 = TypeInfo__PrefabPool->static_fields->instance;
        if ((pPVar15 == (PrefabPool *)0x0) || (pCVar14 == (CellCursor *)0x0))
        goto code_?;
        CellCursor::CellCursor_ChangeMaterial
                  (pCVar14,(pPVar15->fields).cellCursorMaterial,(MethodInfo *)0x0);
      }
    }
    pCVar14 = (pPVar12->fields).paintCursor;
    if (pCVar14 != (CellCursor *)0x0) {
      if (pCVar16 == (CubePickingInfo *)0x0) {
        CellCursor::CellCursor_set_Active(pCVar14,0,(MethodInfo *)0x0);
        return;
      }
      CellCursor::CellCursor_set_Active(pCVar14,1,(MethodInfo *)0x0);
      if (bVar1 != (pPVar12->fields).currentMaterial) {
        pCVar14 = (pPVar12->fields).paintCursor;
        lVar19 = FUN_?();
        if (bVar1 == 0) {
          if (lVar19 == 0) goto code_?;
          material = *(Material **)(lVar19 + 0x528);
        }
        else {
          if (lVar19 == 0) goto code_?;
          material = *(Material **)(lVar19 + 0x530);
        }
        if (pCVar14 == (CellCursor *)0x0) goto code_?;
        CellCursor::CellCursor_ChangeMaterial(pCVar14,material,(MethodInfo *)0x0);
        (pPVar12->fields).currentMaterial = bVar1;
      }
      if (pMVar17 != (MVCubeModelBase *)0x0) {
        pCVar14 = (pPVar12->fields).paintCursor;
        cubeGameObject = (pMVar17->fields)._.gameObject;
        if (pCVar14 != (CellCursor *)0x0) {
          iVar20 = (pCVar16->fields).iLocalPos.z;
          uVar21._0_2_ = (pCVar16->fields).iLocalPos.x;
          uVar21._2_2_ = (pCVar16->fields).iLocalPos.y;
          aIStack_22[0]._0_4_ = uVar21;
          aIStack_22[0].z = iVar20;
          this_03 = CellCursor::CellCursor_GetCellCursor(pCVar14,aIStack_22,(MethodInfo *)0x0);
          if (this_03 != (CellCursorCubeLineMesh *)0x0) {
            aIStack_22[0]._0_4_ = uVar21;
            aIStack_22[0].z = iVar20;
            CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                      (this_03,aIStack_22,cubeGameObject,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Exit(CubeModelingStateMachine) */

void Assembly-CSharp.dll::ColorPicker::ColorPicker_Exit
               (ColorPicker *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  (*(this->klass->vtable).HideCursor.methodPtr)(this,(this->klass->vtable).HideCursor.method);
  (this->fields).lastCubePicked = 0xff;
  return;
}

