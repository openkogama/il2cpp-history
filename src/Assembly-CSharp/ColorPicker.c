
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  this_02 = e;
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
      materialId = pBVar5->vector[0];
      bVar6 = 1;
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      e = (CubeModelingStateMachine *)((uint)bVar7 << 0x18);
      if ((bVar7 == 0) && (materialId == (this->fields).lastCubePicked)) {
code_?:
        pPVar8 = (this->fields).cursor;
        pCVar9 = (this_02->fields)._SelectedCube_k__BackingField;
        pMVar10 = (this_02->fields)._TargetCubeModel_k__BackingField;
        if (pPVar8 != (PickColorCursor *)0x0) {
          if ((pPVar8->fields).flashing != 0) {
            fVar11 = (pPVar8->fields).flashingTime;
            if (_UNK_? < fVar11) {
              (pPVar8->fields).flashingTime = fVar11 - _UNK_?;
            }
            else {
              pCVar12 = (pPVar8->fields).paintCursor;
              (pPVar8->fields).flashing = 0;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__PrefabPool);
                cRam_? = '\x01';
              }
              pPVar13 = TypeInfo__PrefabPool->static_fields->instance;
              if ((pPVar13 == (PrefabPool *)0x0) || (pCVar12 == (CellCursor *)0x0))
              goto code_?;
              CellCursor::CellCursor_ChangeMaterial
                        (pCVar12,(pPVar13->fields).cellCursorMaterial,(MethodInfo *)0x0);
            }
          }
          pCVar12 = (pPVar8->fields).paintCursor;
          if (pCVar9 == (CubePickingInfo *)0x0) {
            if (pCVar12 != (CellCursor *)0x0) {
              CellCursor::CellCursor_set_Active(pCVar12,0,(MethodInfo *)0x0);
              return;
            }
          }
          else if (pCVar12 != (CellCursor *)0x0) {
            CellCursor::CellCursor_set_Active(pCVar12,1,(MethodInfo *)0x0);
            if (bVar6 == (pPVar8->fields).currentMaterial) {
code_?:
              uVar14._0_2_ = (pCVar9->fields).iLocalPos.x;
              uVar14._2_2_ = (pCVar9->fields).iLocalPos.y;
              pCVar12 = (pPVar8->fields).paintCursor;
              iVar15 = (pCVar9->fields).iLocalPos.z;
              if ((pMVar10 != (MVCubeModelBase *)0x0) &&
                 (cubeGameObject = (pMVar10->fields)._.gameObject, pCVar12 != (CellCursor *)0x0)) {
                iLocalPos.z._1_1_ = (char)((ushort)(pCVar9->fields).iLocalPos.z >> 8);
                iLocalPos._0_5_ = *(undefined5 *)&(pCVar9->fields).iLocalPos;
                this_03 = CellCursor::CellCursor_GetCellCursor(pCVar12,iLocalPos,(MethodInfo *)0x0);
                if (this_03 != (CellCursorCubeLineMesh *)0x0) {
                  position.z._0_1_ = (char)iVar15;
                  position.x = (short)uVar14;
                  position.y = (short)((uint)uVar14 >> 0x10);
                  position.z._1_1_ = (char)((ushort)iVar15 >> 8);
                  CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                            (this_03,position,cubeGameObject,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            else {
              pCVar12 = (pPVar8->fields).paintCursor;
              if (bVar6 == 0) {
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__PrefabPool);
                  cRam_? = '\x01';
                }
                pPVar13 = TypeInfo__PrefabPool->static_fields->instance;
                if (pPVar13 != (PrefabPool *)0x0) {
                  material = (pPVar13->fields).cellCursorErrorMaterial;
                  goto code_?;
                }
              }
              else {
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__PrefabPool);
                  cRam_? = '\x01';
                }
                pPVar13 = TypeInfo__PrefabPool->static_fields->instance;
                if (pPVar13 != (PrefabPool *)0x0) {
                  material = (pPVar13->fields).cellCursorMaterial;
code_?:
                  if (pCVar12 != (CellCursor *)0x0) {
                    CellCursor::CellCursor_ChangeMaterial(pCVar12,material,(MethodInfo *)0x0);
                    (pPVar8->fields).currentMaterial = bVar6;
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar16 != (MVNetworkGame *)0x0) &&
           (this_00 = (pMVar16->fields)._MaterialRepository_k__BackingField,
           this_00 != (MVMaterialRepository *)0x0)) {
          pMVar17 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                              (this_00,materialId,(MethodInfo *)0x0);
          if (pMVar17 != (MVMaterial *)0x0) {
            if ((pMVar17->fields).isUnlocked != 0) {
              uVar3 = CONCAT31((uint3)materialId,1);
              value_00 = materialId;
code_?:
              if (cRam_? == '\0') {
                func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
                cRam_? = '\x01';
              }
              value = (this_02->fields).currentMaterialId;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
              }
              uVar18 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredByte::ObscuredByte_op_Implicit_1(value,(MethodInfo *)0x0);
              uVar19 = 0;
              if ((uint8_t)(uVar3 >> 8) != uVar18) {
                uVar19 = (uint)e >> 0x18;
              }
              if (uVar19 != 0) {
                if ((char)uVar3 == '\0') {
                  pPVar8 = (this->fields).cursor;
                  if (pPVar8 != (PickColorCursor *)0x0) {
                    pCVar12 = (pPVar8->fields).paintCursor;
                    (pPVar8->fields).flashingTime = 1.0;
                    (pPVar8->fields).flashing = 1;
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__PrefabPool);
                      cRam_? = '\x01';
                    }
                    pPVar13 = TypeInfo__PrefabPool->static_fields->instance;
                    if ((pPVar13 != (PrefabPool *)0x0) && (pCVar12 != (CellCursor *)0x0)) {
                      CellCursor::CellCursor_ChangeMaterial
                                (pCVar12,(pPVar13->fields).cellCursorErrorMaterial,(MethodInfo *)0x0);
                      ModelCursor::ModelCursor_ShowUnlockMaterialNotification
                                (1,NotificationLifetime__Enum_Low,(MethodInfo *)0x0);
                      goto code_?;
                    }
                  }
                  goto code_?;
                }
                CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                          (this_02,value_00,(MethodInfo *)0x0);
              }
code_?:
              bVar6 = (bool)uVar3;
              goto code_?;
            }
            pMVar16 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (pMVar16 != (MVNetworkGame *)0x0) {
              value_00 = 0x49;
              pMVar20 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar16,(MethodInfo *)0x0);
              if ((pMVar20 != (MVLocalPlayer *)0x0) &&
                 (this_01 = (pMVar20->fields)._._SubscriptionRules_k__BackingField,
                 this_01 != (SubscriptionRulesWrapper *)0x0)) {
                e = (CubeModelingStateMachine *)0x0;
                this = (ColorPicker *)0x4;
                bVar6 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper
                         ::SubscriptionRulesWrapper_HasBenefit
                                   (this_01,SubscriptionBenefit__Enum_FreeBuildingMaterials,
                                    (MethodInfo *)0x0);
                uVar3 = (uint)CONCAT11(materialId,bVar6);
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
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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

