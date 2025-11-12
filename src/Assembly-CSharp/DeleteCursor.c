
/* Void UpdateCursor(CubePickingInfo, MVCubeModelBase, Boolean) */

void Assembly-CSharp.dll::DeleteCursor::DeleteCursor_UpdateCursor
               (DeleteCursor *this,CubePickingInfo *selectedCube,MVCubeModelBase *targetCubeModel,
               bool deletedCube,MethodInfo *method)

{
  if (deletedCube != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
         (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
        (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 == (GameEventManager *)0x0)) ||
       ((pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
        pGVar4 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0 ||
        (pGVar5 = (pGVar4->fields).LaserCommands,
        pGVar5 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))))
    goto code_?;
    pAVar6 = (pGVar5->fields).OnActivateLaserForDuration;
    if (pAVar6 != (Action_1_Single_ *)0x0) {
      (*(pAVar6->fields)._._.invoke_impl)((pAVar6->fields)._._.method_code,_UNK_?);
    }
  }
  if (selectedCube == (CubePickingInfo *)0x0) {
    pCVar7 = (this->fields).deleteCursor;
    if (pCVar7 != (CellCursor *)0x0) {
      CellCursor::CellCursor_set_Active(pCVar7,0,(MethodInfo *)0x0);
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
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       ((pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0 &&
        ((pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
         pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
         (pGVar5 = (pGVar4->fields).LaserCommands,
         pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))))))
    {
      pAVar8 = (pGVar5->fields).OnUpdatePosition;
      if (pAVar8 != (Action_1_UnityEngine_Vector3_ *)0x0) {
        fStack_9 = (selectedCube->fields).point.z;
        uStack_10._0_4_ = (selectedCube->fields).point.x;
        uStack_10._4_4_ = (selectedCube->fields).point.y;
        (*(pAVar8->fields)._._.invoke_impl)((pAVar8->fields)._._.method_code,&uStack_10);
      }
      pCVar7 = (this->fields).deleteCursor;
      if ((pCVar7 != (CellCursor *)0x0) &&
         (CellCursor::CellCursor_set_Active(pCVar7,1,(MethodInfo *)0x0),
         targetCubeModel != (MVCubeModelBase *)0x0)) {
        pCVar7 = (this->fields).deleteCursor;
        cubeGameObject = (targetCubeModel->fields)._.gameObject;
        if (pCVar7 != (CellCursor *)0x0) {
          pIVar11 = &(selectedCube->fields).iLocalPos;
          uVar12._0_2_ = pIVar11->x;
          uVar12._2_2_ = pIVar11->y;
          IVar13 = *pIVar11;
          uStack_10 = CONCAT44(CONCAT22(uStack_10._6_2_,(selectedCube->fields).iLocalPos.z),uVar12);
          this_00 = CellCursor::CellCursor_GetCellCursor
                              (pCVar7,(IntVector *)&uStack_10,(MethodInfo *)0x0);
          if (this_00 != (CellCursorCubeLineMesh *)0x0) {
            uStack_10 = CONCAT26(uStack_10._6_2_,IVar13);
            CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                      (this_00,(IntVector *)&uStack_10,cubeGameObject,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* DeleteCursor(Vector3[]) */

void Assembly-CSharp.dll::DeleteCursor::DeleteCursor__ctor
               (DeleteCursor *this,Vector3__Array *cubeCorners,MethodInfo *method)

{
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
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 == (PrefabPool *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  material = (pPVar1->fields).cellCursorErrorMaterial;
  this_00 = (CellCursor *)FUN_?(TypeInfo__CellCursor);
  CellCursor::CellCursor__ctor
            (this_00,1,_UNK_?,material,_UNK_?,cubeCorners,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).deleteCursor = this_00;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}

