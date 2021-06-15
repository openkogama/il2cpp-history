
/* Void UpdateCursor(CubePickingInfo, MVCubeModelBase, Boolean) */

void Assembly-CSharp.dll::DeleteCursor::DeleteCursor_UpdateCursor
               (DeleteCursor *this,CubePickingInfo *selectedCube,MVCubeModelBase *targetCubeModel,
               bool deletedCube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (deletedCube != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar1 == (GameEventManager *)0x0) ||
        (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
        pGVar2 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
       (pGVar3 = (pGVar2->fields).LaserCommands,
       pGVar3 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
    goto code_?;
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
              (pGVar3,(this->fields).deleteCubeLaserOnTime,(MethodInfo *)0x0);
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).deleteCubeTime = fVar4;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (selectedCube == (CubePickingInfo *)0x0) {
    pCVar5 = (this->fields).deleteCursor;
    if (pCVar5 != (CellCursor *)0x0) {
      CellCursor::CellCursor_set_Active(pCVar5,0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar1 != (GameEventManager *)0x0) &&
        (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
        pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       (pGVar3 = (pGVar2->fields).LaserCommands,
       pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                (pGVar3,(selectedCube->fields).point,(MethodInfo *)0x0);
      pCVar5 = (this->fields).deleteCursor;
      if (pCVar5 != (CellCursor *)0x0) {
        CellCursor::CellCursor_set_Active(pCVar5,1,(MethodInfo *)0x0);
        pCVar5 = (this->fields).deleteCursor;
        position = (selectedCube->fields).iLocalPos;
        if (targetCubeModel != (MVCubeModelBase *)0x0) {
          cubeGameObject =
               DayNightCycle::DayNightCycle_get_CurrentMoonParam
                         ((DayNightCycle *)targetCubeModel,(MethodInfo *)0x0);
          if (pCVar5 != (CellCursor *)0x0) {
            CellCursor::CellCursor_SetCursor_1
                      (pCVar5,position,(GameObject *)cubeGameObject,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* DeleteCursor(Vector3[]) */

void Assembly-CSharp.dll::DeleteCursor::DeleteCursor__ctor
               (DeleteCursor *this,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).deleteCubeLaserOnTime = 0.2;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    material = PrefabPool::PrefabPool_get_CellCursorErrorMaterial(this_00,(MethodInfo *)0x0);
    this_01 = (CellCursor *)func_?(TypeInfo__CellCursor);
    CellCursor::CellCursor__ctor(this_01,1,0.03,material,1.0,cubeCorners,(MethodInfo *)0x0);
    (this->fields).deleteCursor = this_01;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

