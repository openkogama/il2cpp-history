
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
      ppPVar2 = &(this->fields).cursor;
      *ppPVar2 = value;
      func_?(ppPVar2,value);
      (this->fields).lastCubePicked = 0xff;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::ColorPicker::ColorPicker_Execute
               (ColorPicker *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  this_03 = e;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  CubeModelTool::CubeModelTool_Execute((CubeModelTool *)this,e,(MethodInfo *)0x0);
  if (e != (CubeModelingStateMachine *)0x0) {
    pCVar1 = (e->fields)._SelectedCube_k__BackingField;
    if (pCVar1 == (CubePickingInfo *)0x0) goto code_?;
    pCVar2 = (pCVar1->fields).cube;
    if ((pCVar2 != (Cube *)0x0) &&
       (pBVar3 = (pCVar2->fields)._.faceMaterials, pBVar3 != (Byte__Array *)0x0)) {
      if (pBVar3->max_length == 0) goto code_?;
      uVar4 = pBVar3->vector[0];
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if ((bVar5 == 0) && (uVar4 == (this->fields).lastCubePicked)) goto code_?;
      uVar4 = 0x10;
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar6 == (MVNetworkGame *)0x0) ||
         ((this_00 = (pMVar6->fields)._MaterialRepository_k__BackingField,
          this_00 == (MVMaterialRepository *)0x0 ||
          (pMVar7 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                               (this_00,uVar4,(MethodInfo *)0x0), pMVar7 == (MVMaterial *)0x0))))
      goto code_?;
      if ((pMVar7->fields).isUnlocked == 0) {
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar6 == (MVNetworkGame *)0x0) ||
            (pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
            pMVar8 == (MVLocalPlayer *)0x0)) ||
           (this_01 = (pMVar8->fields)._._SubscriptionRules_k__BackingField,
           this_01 == (SubscriptionRulesWrapper *)0x0)) goto code_?;
        e._3_1_ = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                  SubscriptionRulesWrapper_HasBenefit
                            (this_01,SubscriptionBenefit__Enum_FreeBuildingMaterials,
                             (MethodInfo *)0x0);
      }
      else {
        e._3_1_ = 1;
      }
      if (cRam_? == '\0') {
        func_?(8);
        cRam_? = '\x01';
      }
      cVar9 = (char)((uint)unaff_ESI >> 0x18);
      value = (this_03->fields).currentMaterialId;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
      }
      value_00 = 0;
      uVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
              ObscuredByte_op_Implicit_1(value,(MethodInfo *)0x0);
      cVar10 = '\0';
      if (value_00 != uVar4) {
        cVar10 = cVar9;
      }
      if (cVar10 != '\0') {
        if (e._3_1_ == 0) {
          pPVar11 = (this->fields).cursor;
          if (pPVar11 != (PickColorCursor *)0x0) {
            this_02 = (pPVar11->fields).paintCursor;
            (pPVar11->fields).flashingTime = 1.0;
            (pPVar11->fields).flashing = 1;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__PrefabPool);
              cRam_? = '\x01';
            }
            pPVar12 = TypeInfo__PrefabPool->static_fields->instance;
            if ((pPVar12 != (PrefabPool *)0x0) && (this_02 != (CellCursor *)0x0)) {
              CellCursor::CellCursor_ChangeMaterial
                        (this_02,(pPVar12->fields).cellCursorErrorMaterial,(MethodInfo *)0x0);
              ModelCursor::ModelCursor_ShowUnlockMaterialNotification
                        (1,NotificationLifetime__Enum_Low,(MethodInfo *)0x0);
              goto code_?;
            }
          }
          goto code_?;
        }
        CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                  (this_03,value_00,(MethodInfo *)0x0);
      }
code_?:
      pPVar11 = (this->fields).cursor;
      if (pPVar11 != (PickColorCursor *)0x0) {
        PickColorCursor::PickColorCursor_UpdateCursor
                  (pPVar11,(this_03->fields)._SelectedCube_k__BackingField,
                   (this_03->fields)._TargetCubeModel_k__BackingField,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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

