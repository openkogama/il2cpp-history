
/* Void Enter(CubeModelingStateMachine) */

void Assembly-CSharp.dll::ColorPicker::ColorPicker_Enter
               (ColorPicker *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickColorCursor);
    cRam_? = '\x01';
  }
  if (e != (CubeModelingStateMachine *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__CubeBase);
      cRam_? = '\x01';
    }
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    cubeCorners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                            ((MethodInfo *)0x0);
    value = (PickColorCursor *)func_?(TypeInfo__PickColorCursor);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CellCursor);
      cRam_? = '\x01';
    }
    (value->fields).currentMaterial = 1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar1 != (PrefabPool *)0x0) {
      material = (pPVar1->fields).cellCursorMaterial;
      this_00 = (CellCursor *)func_?(TypeInfo__CellCursor);
      CellCursor::CellCursor__ctor(this_00,1,0.03,material,1.0,cubeCorners,(MethodInfo *)0x0);
      (value->fields).paintCursor = this_00;
      func_?(&value->fields,this_00);
      (this->fields).cursor = value;
      func_?(&(this->fields).cursor,value);
      (this->fields).lastCubePicked = 0xff;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::ColorPicker::ColorPicker_Execute
               (ColorPicker *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  this_01 = e;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelTool);
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__CubeModelTool->static_fields;
  if ((pCVar1->cubeChange != 0) &&
     (pCVar1->OnEditCubeChange != (Action_2_Int32_EditCubeChange_ *)0x0)) {
    pAVar2 = pCVar1->OnEditCubeChange;
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,pCVar1->cubeCount,(char)pCVar1->cubeChange,
               (pAVar2->fields)._._.method);
  }
  uVar3 = 1;
  TypeInfo__CubeModelTool->static_fields->cubeChange = 0;
  if (e != (CubeModelingStateMachine *)0x0) {
    if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) goto code_?;
    pCVar4 = (((e->fields)._SelectedCube_k__BackingField)->fields).cube;
    if ((pCVar4 != (Cube *)0x0) &&
       (pBVar5 = (pCVar4->fields)._.faceMaterials, pBVar5 != (Byte__Array *)0x0)) {
      if (pBVar5->max_length == 0) goto code_?;
      bVar6 = pBVar5->vector[0];
      bVar7 = 1;
      materialId = bVar6;
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar8 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      e = (CubeModelingStateMachine *)((uint)bVar8 << 0x18);
      if ((bVar8 == 0) && (bVar6 == (this->fields).lastCubePicked)) {
code_?:
        pPVar9 = (this->fields).cursor;
        pCVar10 = (this_01->fields)._SelectedCube_k__BackingField;
        pMVar11 = (this_01->fields)._TargetCubeModel_k__BackingField;
        if (pPVar9 != (PickColorCursor *)0x0) {
          if ((pPVar9->fields).flashing != 0) {
            fVar12 = (pPVar9->fields).flashingTime;
            if (_UNK_? < fVar12) {
              (pPVar9->fields).flashingTime = fVar12 - _UNK_?;
            }
            else {
              pCVar13 = (pPVar9->fields).paintCursor;
              (pPVar9->fields).flashing = 0;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__PrefabPool);
                cRam_? = '\x01';
              }
              pPVar14 = TypeInfo__PrefabPool->static_fields->instance;
              if ((pPVar14 == (PrefabPool *)0x0) || (pCVar13 == (CellCursor *)0x0))
              goto code_?;
              CellCursor::CellCursor_ChangeMaterial
                        (pCVar13,(pPVar14->fields).cellCursorMaterial,(MethodInfo *)0x0);
            }
          }
          pCVar13 = (pPVar9->fields).paintCursor;
          if (pCVar10 == (CubePickingInfo *)0x0) {
            if (pCVar13 != (CellCursor *)0x0) {
              CellCursor::CellCursor_set_Active(pCVar13,0,(MethodInfo *)0x0);
              return;
            }
          }
          else if (pCVar13 != (CellCursor *)0x0) {
            CellCursor::CellCursor_set_Active(pCVar13,1,(MethodInfo *)0x0);
            if (bVar7 == (pPVar9->fields).currentMaterial) {
code_?:
              iVar15 = (pCVar10->fields).iLocalPos.z;
              pCVar13 = (pPVar9->fields).paintCursor;
              pIVar16 = &(pCVar10->fields).iLocalPos;
              uVar17 = pIVar16->x;
              uVar18 = pIVar16->y;
              iLocalPos.y = uVar18;
              iLocalPos.x = uVar17;
              uVar19 = *(undefined5 *)pIVar16;
              if ((pMVar11 != (MVCubeModelBase *)0x0) &&
                 (cubeGameObject = (pMVar11->fields)._.gameObject, pCVar13 != (CellCursor *)0x0)) {
                iVar20 = (pCVar10->fields).iLocalPos.z;
                iLocalPos.z._0_1_ = (char)iVar20;
                iLocalPos.z._1_1_ = (char)((ushort)iVar20 >> 8);
                this_02 = CellCursor::CellCursor_GetCellCursor(pCVar13,iLocalPos,(MethodInfo *)0x0);
                if (this_02 != (CellCursorCubeLineMesh *)0x0) {
                  position.z._1_1_ = (char)((ushort)iVar15 >> 8);
                  position._0_5_ = uVar19;
                  CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                            (this_02,position,cubeGameObject,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            else {
              pCVar13 = (pPVar9->fields).paintCursor;
              if (bVar7 == 0) {
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__PrefabPool);
                  cRam_? = '\x01';
                }
                pPVar14 = TypeInfo__PrefabPool->static_fields->instance;
                if (pPVar14 != (PrefabPool *)0x0) {
                  material = (pPVar14->fields).cellCursorErrorMaterial;
                  goto code_?;
                }
              }
              else {
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__PrefabPool);
                  cRam_? = '\x01';
                }
                pPVar14 = TypeInfo__PrefabPool->static_fields->instance;
                if (pPVar14 != (PrefabPool *)0x0) {
                  material = (pPVar14->fields).cellCursorMaterial;
code_?:
                  if (pCVar13 != (CellCursor *)0x0) {
                    CellCursor::CellCursor_ChangeMaterial(pCVar13,material,(MethodInfo *)0x0);
                    (pPVar9->fields).currentMaterial = bVar7;
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar21 != (MVNetworkGame *)0x0) &&
           (this_00 = (pMVar21->fields)._MaterialRepository_k__BackingField,
           this_00 != (MVMaterialRepository *)0x0)) {
          pMVar22 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                              (this_00,materialId,(MethodInfo *)0x0);
          if (pMVar22 != (MVMaterial *)0x0) {
            if ((pMVar22->fields).isUnlocked != 0) {
              uVar3 = CONCAT31((uint3)bVar6,1);
code_?:
              if (cRam_? == '\0') {
                func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
                cRam_? = '\x01';
              }
              value = (this_01->fields).currentMaterialId;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
              }
              uVar23 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredByte::ObscuredByte_op_Implicit_1(value,(MethodInfo *)0x0);
              uVar24 = 0;
              if ((uint8_t)(uVar3 >> 8) != uVar23) {
                uVar24 = (uint)e >> 0x18;
              }
              if (uVar24 != 0) {
                if ((char)uVar3 == '\0') {
                  pPVar9 = (this->fields).cursor;
                  if (pPVar9 != (PickColorCursor *)0x0) {
                    pCVar13 = (pPVar9->fields).paintCursor;
                    (pPVar9->fields).flashingTime = 1.0;
                    (pPVar9->fields).flashing = 1;
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__PrefabPool);
                      cRam_? = '\x01';
                    }
                    pPVar14 = TypeInfo__PrefabPool->static_fields->instance;
                    if ((pPVar14 != (PrefabPool *)0x0) && (pCVar13 != (CellCursor *)0x0)) {
                      CellCursor::CellCursor_ChangeMaterial
                                (pCVar13,(pPVar14->fields).cellCursorErrorMaterial,(MethodInfo *)0x0
                                );
                      ModelCursor::ModelCursor_ShowUnlockMaterialNotification
                                (1,NotificationLifetime__Enum_Low,(MethodInfo *)0x0);
                      goto code_?;
                    }
                  }
                  goto code_?;
                }
                CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                          (this_01,materialId,(MethodInfo *)0x0);
              }
code_?:
              bVar7 = (bool)uVar3;
              goto code_?;
            }
            pMVar21 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar21 != (MVNetworkGame *)0x0) {
              pMVar25 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar21,(MethodInfo *)0x0);
              if ((pMVar25 != (MVLocalPlayer *)0x0) &&
                 (this = (ColorPicker *)(pMVar25->fields)._._SubscriptionRules_k__BackingField,
                 this != (ColorPicker *)0x0)) {
                e = (CubeModelingStateMachine *)0x0;
                bVar7 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper
                         ::SubscriptionRulesWrapper_HasBenefit
                                   ((SubscriptionRulesWrapper *)this,
                                    SubscriptionBenefit__Enum_FreeBuildingMaterials,
                                    (MethodInfo *)0x0);
                uVar3 = (uint)CONCAT11(bVar6,bVar7);
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void Exit(CubeModelingStateMachine) */

void Assembly-CSharp.dll::ColorPicker::ColorPicker_Exit
               (ColorPicker *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).HideCursor.method)(this,this->klass[1]._0.image);
  (this->fields).lastCubePicked = 0xff;
  return;
}

