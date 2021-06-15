
/* Void UpdateCursor(CubePickingInfo, MVCubeModelBase, Boolean) */

void Assembly-CSharp.dll::PaintCursor::PaintCursor_UpdateCursor
               (PaintCursor *this,CubePickingInfo *selectedCube,MVCubeModelBase *targetCubeModel,
               bool isPainting,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).paintCursor;
  if (selectedCube == (CubePickingInfo *)0x0) {
    if (pCVar1 != (CellCursor *)0x0) {
      CellCursor::CellCursor_set_Active(pCVar1,0,(MethodInfo *)0x0);
      return;
    }
  }
  else if (pCVar1 != (CellCursor *)0x0) {
    CellCursor::CellCursor_set_Active(pCVar1,1,(MethodInfo *)0x0);
    pCVar1 = (this->fields).paintCursor;
    position = (selectedCube->fields).iLocalPos;
    if (targetCubeModel != (MVCubeModelBase *)0x0) {
      cubeGameObject =
           DayNightCycle::DayNightCycle_get_CurrentMoonParam
                     ((DayNightCycle *)targetCubeModel,(MethodInfo *)0x0);
      if (pCVar1 != (CellCursor *)0x0) {
        CellCursor::CellCursor_SetCursor_1
                  (pCVar1,position,(GameObject *)cubeGameObject,(MethodInfo *)0x0);
        if (isPainting != 0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if (((pGVar2 == (GameEventManager *)0x0) ||
              (pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode,
              pGVar3 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
             (pGVar4 = (pGVar3->fields).LaserCommands,
             pGVar4 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
          goto code_?;
          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                    (pGVar4,0.5,(MethodInfo *)0x0);
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if (((pGVar2 != (GameEventManager *)0x0) &&
            (pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode,
            pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
           (pGVar4 = (pGVar3->fields).LaserCommands,
           pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                    (pGVar4,(selectedCube->fields).point,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* PaintCursor(Vector3[]) */

void Assembly-CSharp.dll::PaintCursor::PaintCursor__ctor
               (PaintCursor *this,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    material = PrefabPool::PrefabPool_get_CellCursorMaterial(this_00,(MethodInfo *)0x0);
    this_01 = (CellCursor *)func_?(TypeInfo__CellCursor);
    CellCursor::CellCursor__ctor(this_01,1,0.03,material,1.0,cubeCorners,(MethodInfo *)0x0);
    (this->fields).paintCursor = this_01;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

