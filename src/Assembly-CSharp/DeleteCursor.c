
/* Void UpdateCursor(CubePickingInfo, MVCubeModelBase, Boolean) */

void Assembly-CSharp.dll::DeleteCursor::DeleteCursor_UpdateCursor
               (DeleteCursor *this,CubePickingInfo *selectedCube,MVCubeModelBase *targetCubeModel,
               bool deletedCube,MethodInfo *method)

{
  if (deletedCube != 0) {
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar1 == (GameEventManager *)0x0) ||
        (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
        pGVar2 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
       (pGVar3 = (pGVar2->fields).LaserCommands,
       pGVar3 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
    goto code_?;
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
              (pGVar3,0.2,(MethodInfo *)0x0);
  }
  if (selectedCube == (CubePickingInfo *)0x0) {
    pCVar4 = (this->fields).deleteCursor;
    if (pCVar4 != (CellCursor *)0x0) {
      CellCursor::CellCursor_set_Active(pCVar4,0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar1 != (GameEventManager *)0x0) &&
        (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
        pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       (pGVar3 = (pGVar2->fields).LaserCommands,
       pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                (pGVar3,(selectedCube->fields).point,(MethodInfo *)0x0);
      pCVar4 = (this->fields).deleteCursor;
      if (pCVar4 != (CellCursor *)0x0) {
        CellCursor::CellCursor_set_Active(pCVar4,1,(MethodInfo *)0x0);
        cubeGameObject = pGRam00000089;
        uVar5._0_2_ = (selectedCube->fields).iLocalPos.x;
        uVar5._2_2_ = (selectedCube->fields).iLocalPos.y;
        pCVar4 = (this->fields).deleteCursor;
        if ((pCVar4 != (CellCursor *)0x0) &&
           (this_00 = CellCursor::CellCursor_GetCellCursor
                                (pCVar4,(selectedCube->fields).iLocalPos,(MethodInfo *)0x0),
           this_00 != (CellCursorCubeLineMesh *)0x0)) {
          iStack6 = (int16_t)((uint)pCVar4 >> 0x10);
          uStack7 = 0x103d;
          position.z = iStack6;
          position.x = (short)uVar5;
          position.y = (short)((uint)uVar5 >> 0x10);
          CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                    (this_00,position,cubeGameObject,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* DeleteCursor(Vector3[]) */

void Assembly-CSharp.dll::DeleteCursor::DeleteCursor__ctor
               (DeleteCursor *this,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CellCursor);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    material = (pPVar1->fields).cellCursorErrorMaterial;
    this_00 = (CellCursor *)func_?(TypeInfo__CellCursor);
    if (this_00 != (CellCursor *)0x0) {
      CellCursor::CellCursor__ctor(this_00,1,0.03,material,1.0,cubeCorners,(MethodInfo *)0x0);
      (this->fields).deleteCursor = this_00;
      func_?(&this->fields,this_00);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

