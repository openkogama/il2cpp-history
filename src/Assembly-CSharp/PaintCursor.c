
/* Void UnlockMaterialToRemove() */

void Assembly-CSharp.dll::PaintCursor::PaintCursor_UnlockMaterialToRemove
               (PaintCursor *this,MethodInfo *method)

{
  this_00 = (this->fields).paintCursor;
  (this->fields).flashingTime = 1.0;
  (this->fields).flashing = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if ((pPVar1 != (PrefabPool *)0x0) && (this_00 != (CellCursor *)0x0)) {
    CellCursor::CellCursor_ChangeMaterial
              (this_00,(pPVar1->fields).cellCursorErrorMaterial,(MethodInfo *)0x0);
    ModelCursor::ModelCursor_ShowUnlockMaterialNotification
              (0,NotificationLifetime__Enum_Low,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateCursor(CubePickingInfo, MVCubeModelBase, Boolean) */

void Assembly-CSharp.dll::PaintCursor::PaintCursor_UpdateCursor
               (PaintCursor *this,CubePickingInfo *selectedCube,MVCubeModelBase *targetCubeModel,
               bool isPainting,MethodInfo *method)

{
  if ((this->fields).flashing != 0) {
    fVar1 = (this->fields).flashingTime;
    if (_UNK_? < fVar1) {
      (this->fields).flashingTime = fVar1 - _UNK_?;
    }
    else {
      pCVar2 = (this->fields).paintCursor;
      (this->fields).flashing = 0;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PrefabPool);
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
      if ((pPVar3 == (PrefabPool *)0x0) || (pCVar2 == (CellCursor *)0x0)) goto code_?;
      CellCursor::CellCursor_ChangeMaterial
                (pCVar2,(pPVar3->fields).cellCursorMaterial,(MethodInfo *)0x0);
    }
  }
  pCVar2 = (this->fields).paintCursor;
  if (selectedCube == (CubePickingInfo *)0x0) {
    if (pCVar2 != (CellCursor *)0x0) {
      CellCursor::CellCursor_set_Active(pCVar2,0,(MethodInfo *)0x0);
      return;
    }
  }
  else if (pCVar2 != (CellCursor *)0x0) {
    CellCursor::CellCursor_set_Active(pCVar2,1,(MethodInfo *)0x0);
    uVar4._0_2_ = (selectedCube->fields).iLocalPos.x;
    uVar4._2_2_ = (selectedCube->fields).iLocalPos.y;
    if (targetCubeModel != (MVCubeModelBase *)0x0) {
      pCVar2 = (this->fields).paintCursor;
      cubeGameObject = (targetCubeModel->fields)._.gameObject;
      if (pCVar2 != (CellCursor *)0x0) {
        this_00 = CellCursor::CellCursor_GetCellCursor
                            (pCVar2,(selectedCube->fields).iLocalPos,(MethodInfo *)0x0);
        if (this_00 != (CellCursorCubeLineMesh *)0x0) {
          position.z = 0;
          position.x = (short)uVar4;
          position.y = (short)(uVar4 >> 0x10);
          CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                    (this_00,position,cubeGameObject,(MethodInfo *)0x0);
          if (isPainting != 0) {
            pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                               ((MethodInfo *)0x0);
            if (((pGVar5 == (GameEventManager *)0x0) ||
                (pGVar6 = (pGVar5->fields).AvatarCommandsBuildMode,
                pGVar6 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
               (pGVar7 = (pGVar6->fields).LaserCommands,
               pGVar7 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0
               )) goto code_?;
            GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
            GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                      (pGVar7,0.5,(MethodInfo *)0x0);
          }
          pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if (((pGVar5 != (GameEventManager *)0x0) &&
              (pGVar6 = (pGVar5->fields).AvatarCommandsBuildMode,
              pGVar6 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
             (pGVar7 = (pGVar6->fields).LaserCommands,
             pGVar7 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
          {
            GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
            GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                      (pGVar7,(selectedCube->fields).point,(MethodInfo *)0x0);
            return;
          }
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


/* PaintCursor(Vector3[]) */

void Assembly-CSharp.dll::PaintCursor::PaintCursor__ctor
               (PaintCursor *this,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CellCursor);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    material = (pPVar1->fields).cellCursorMaterial;
    this_00 = (CellCursor *)func_?(TypeInfo__CellCursor);
    CellCursor::CellCursor__ctor(this_00,1,0.03,material,1.0,cubeCorners,(MethodInfo *)0x0);
    (this->fields).paintCursor = this_00;
    func_?(&this->fields,this_00);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

