
/* Void HandleLaser(CubePickingInfo, CubePickingInfo, GameObject, BuildState, Boolean) */

void Assembly-CSharp.dll::ModelCursor::ModelCursor_HandleLaser
               (ModelCursor *this,CubePickingInfo *movingEdgeCube,CubePickingInfo *selectedCube,
               GameObject *targetGameObject,BuildState__Enum buildState,bool addCube,
               MethodInfo *method)

{
  if (buildState == BuildState__Enum_PaintCubes) {
    fVar1 = 0.0;
    bVar2 = DrawPlane::DrawPlane_Pick((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar3 != (GameEventManager *)0x0) &&
        (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
        pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       (pGVar5 = (pGVar4->fields).LaserCommands,
       pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                (pGVar5,0.2,(MethodInfo *)0x0);
      uVar6._0_4_ = 3.908746e-29;
      uVar6._4_4_ = 0.0;
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar3 != (GameEventManager *)0x0) &&
          (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
          pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (pGVar5 = (pGVar4->fields).LaserCommands,
         pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        to.z = fVar1;
        to.x = (float)uVar6;
        to.y = SUB84(uVar6,4);
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                  (pGVar5,to,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if (movingEdgeCube == (CubePickingInfo *)0x0) {
      if (addCube == 0) {
        if (selectedCube == (CubePickingInfo *)0x0) {
          return;
        }
        pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if (((pGVar3 != (GameEventManager *)0x0) &&
            (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
            pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
           (pGVar5 = (pGVar4->fields).LaserCommands,
           pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                    (pGVar5,(selectedCube->fields).point,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    }
    else {
      ModelCursor_HandleLaserMovingEdge(this,movingEdgeCube,targetGameObject,(MethodInfo *)0x0);
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    }
    if (((pGVar3 != (GameEventManager *)0x0) &&
        (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
        pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       (pGVar5 = (pGVar4->fields).LaserCommands,
       pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                (pGVar5,0.2,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HandleLaserMovingEdge(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::ModelCursor::ModelCursor_HandleLaserMovingEdge
               (ModelCursor *this,CubePickingInfo *movingEdgeCube,GameObject *targetGameObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(0xa8d8);
    cRam_? = '\x01';
  }
  if (movingEdgeCube != (CubePickingInfo *)0x0) {
    FVar1 = (movingEdgeCube->fields).pickedFace;
    pCVar2 = (movingEdgeCube->fields).cube;
    IVar3 = (movingEdgeCube->fields).iLocalPos;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    pVVar4 = Cube::Cube_GetFaceVerticesWorld
                        (targetGameObject,pCVar2,FVar1,IVar3,(MethodInfo *)0x0);
    if (pVVar4 != (Vector3__Array *)0x0) {
      if ((pVVar4->max_length == 0) || (pVVar4->max_length < 2)) goto code_?;
      uVar5 = pVVar4->vector[1].x;
      uVar6 = pVVar4->vector[1].y;
      uVar7 = pVVar4->vector[0].x;
      uVar8 = pVVar4->vector[0].y;
      if (pVVar4->max_length < 3) goto code_?;
      uVar9 = pVVar4->vector[2].x;
      uVar10 = pVVar4->vector[2].y;
      if (pVVar4->max_length < 4) goto code_?;
      uVar11 = pVVar4->vector[3].x;
      uVar12 = pVVar4->vector[3].y;
      fStack_13 = ((float)uVar11 + (float)uVar9 + (float)uVar5 + (float)uVar7) * _UNK_?;
      fStack_14 = ((float)uVar12 + (float)uVar10 + (float)uVar6 + (float)uVar8) * _UNK_?;
      fVar15 = (pVVar4->vector[3].z +
               pVVar4->vector[2].z + pVVar4->vector[1].z + pVVar4->vector[0].z) * _UNK_?;
      if ((movingEdgeCube->fields).pickedEdge == 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar17 = (pVVar16->upVector).x;
        uVar18 = (pVVar16->upVector).y;
        fVar19 = (pVVar16->upVector).z;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        VVar20.y = fStack_14;
        VVar20.x = fStack_13;
        VVar20.z = fVar15;
        end_00.z = fVar15 + fVar19;
        end_00.x = fStack_13 + (float)uVar17;
        end_00.y = fStack_14 + (float)uVar18;
        color_00.g = (float)_UNK_?;
        color_00.r = (float)_UNK_?;
        color_00.b = (float)_UNK_?;
        color_00.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                  (VVar20,end_00,color_00,(MethodInfo *)0x0);
code_?:
        pGVar21 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0)
        ;
        if (((pGVar21 != (GameEventManager *)0x0) &&
            (pGVar22 = (pGVar21->fields).AvatarCommandsBuildMode,
            pGVar22 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
           (this_00 = (pGVar22->fields).LaserCommands,
           this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
        {
          to.y = fStack_14;
          to.x = fStack_13;
          to.z._0_2_ = SUB42(fVar15,0);
          to.z._2_2_ = (short)((uint)fVar15 >> 0x10);
          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                    (this_00,to,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pCVar2 = (movingEdgeCube->fields).cube;
        FVar1 = (movingEdgeCube->fields).pickedFace;
        edge = (movingEdgeCube->fields).pickedEdge;
        IVar3 = (movingEdgeCube->fields).iLocalPos;
        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar4 = Cube::Cube_GetEdgeVerticesWorld
                            (targetGameObject,pCVar2,FVar1,edge,IVar3,(MethodInfo *)0x0);
        if ((movingEdgeCube->fields).pickedEdgeIndex0 == 0) {
          if (pVVar4 != (Vector3__Array *)0x0) {
            if ((movingEdgeCube->fields).pickedEdgeIndex1 == 0) {
              if ((pVVar4->max_length == 0) || (pVVar4->max_length < 2)) goto code_?;
              uVar23 = pVVar4->vector[1].x;
              uVar24 = pVVar4->vector[1].y;
              uVar25 = pVVar4->vector[0].x;
              uVar26 = pVVar4->vector[0].y;
              fStack_27 = (pVVar4->vector[1].z + pVVar4->vector[0].z) * _UNK_?;
              fStack_28 = ((float)uVar23 + (float)uVar25) * _UNK_?;
              fStack_29 = ((float)uVar24 + (float)uVar26) * _UNK_?;
            }
            else {
              if (pVVar4->max_length < 2) goto code_?;
              uVar30 = pVVar4->vector[1].x;
              uVar31 = pVVar4->vector[1].y;
              fStack_27 = pVVar4->vector[1].z;
              fStack_28 = (float)uVar30;
              fStack_29 = (float)uVar31;
            }
code_?:
            fVar15 = (fVar15 - fStack_27) * _UNK_? + fStack_27;
            fStack_14 = (fStack_14 - fStack_29) * _UNK_? + fStack_29;
            fStack_13 = fStack_28 + (fStack_13 - fStack_28) * _UNK_?;
            goto code_?;
          }
        }
        else if (pVVar4 != (Vector3__Array *)0x0) {
          if (pVVar4->max_length == 0) goto code_?;
          pVVar32 = pVVar4->vector;
          uVar33 = pVVar32->x;
          uVar34 = pVVar32->y;
          fStack_27 = pVVar4->vector[0].z;
          VVar20 = *pVVar32;
          uVar35 = pVVar4->vector[0].x;
          uVar36 = pVVar4->vector[0].y;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar37 = (pVVar16->upVector).x;
          uVar38 = (pVVar16->upVector).y;
          fVar19 = (pVVar16->upVector).z;
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          end.z = fStack_27 + fVar19;
          end.x = (float)uVar35 + (float)uVar37;
          end.y = (float)uVar36 + (float)uVar38;
          color.g = (float)_UNK_?;
          color.r = (float)_UNK_?;
          color.b = (float)_UNK_?;
          color.a = _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine_1
                    (VVar20,end,color,(MethodInfo *)0x0);
          fStack_28 = (float)uVar33;
          fStack_29 = (float)uVar34;
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
  return;
}


/* Void Remove() */

void Assembly-CSharp.dll::ModelCursor::ModelCursor_Remove(ModelCursor *this,MethodInfo *method)

{
  pFVar1 = (this->fields).faceCursor;
  if (pFVar1 != (FaceCursor *)0x0) {
    if (cRam_? == '\0') {
      pOStack_2 = (Object_1__Class *)&TypeInfo__UnityEngine__Object;
      func_?();
      cRam_? = '\x01';
    }
    obj_00 = (pFVar1->fields).gameObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      pOStack_2 = TypeInfo__UnityEngine__Object;
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj_00,(MethodInfo *)0x0);
    if ((this->fields).errorCursor != (CellCursor *)0x0) {
      pOStack_2 = (Object_1__Class *)0xffffffff;
      puStack_3 = &DAT_?;
      uStack_4 = *unaff_FS_OFFSET;
      *unaff_FS_OFFSET = &uStack_4;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__get_Current__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__Clear__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
        cRam_? = '\x01';
      }
      LStack_5._list = (List_1_System_Object_ *)0x0;
      LStack_5._index = 0;
      LStack_5._version = 0;
      LStack_5._current = (Object *)0x0;
      method_00 = *(MethodInfo **)(unaff_EBP + 8);
      if (method_00 != (MethodInfo *)0x0) {
        pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                             *)&stack0xffffffd0,
                            (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            method_00,
                            MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                           );
        LStack_5._list = (List_1_System_Object_ *)pLVar6->_list;
        LStack_5._index = pLVar6->_index;
        LStack_5._version = pLVar6->_version;
        LStack_5._current = *(Object **)&pLVar6->_current;
        puStack_7 = (undefined *)0x0;
        pOStack_2 = (Object_1__Class *)0x1;
        while( true ) {
          bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_5,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                            );
          pOVar9 = LStack_5._current;
          if (bVar8 == 0) break;
          if ((RegexCharClass_SingleRange)LStack_5._current == (RegexCharClass_SingleRange)0x0)
          goto code_?;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Object);
            cRam_? = '\x01';
          }
          obj = *(Object_1 **)((int)pOVar9 + 0x1c);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0)
          ;
        }
        pOStack_2 = (Object_1__Class *)0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_5,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                   ,method_00);
        pOStack_2 = (Object_1__Class *)0xffffffff;
        iVar10 = *(int *)(unaff_EBP + 8);
        if (iVar10 != 0) {
          length = *(int *)(iVar10 + 0xc);
          *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
          *(undefined4 *)(iVar10 + 0xc) = 0;
          if (0 < length) {
            mscorlib.dll::System::Array::Array_Clear
                      (*(Array **)(iVar10 + 8),0,length,(MethodInfo *)0x0);
          }
          *unaff_FS_OFFSET = uStack_4;
          return;
        }
      }
code_?:
      func_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetErrorCursor(IntVector, GameObject, Boolean) */

void Assembly-CSharp.dll::ModelCursor::ModelCursor_SetErrorCursor
               (ModelCursor *this,IntVector iPos,GameObject *targetGameObject,
               bool showUnlockNotification,MethodInfo *method)

{
  this_00 = (this->fields).errorCursor;
  if (this_00 != (CellCursor *)0x0) {
    this_01 = CellCursor::CellCursor_GetCellCursor(this_00,iPos,(MethodInfo *)0x0);
    if (this_01 != (CellCursorCubeLineMesh *)0x0) {
      CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                (this_01,iPos,targetGameObject,(MethodInfo *)0x0);
      if (showUnlockNotification != 0) {
        uStack1 = 0;
        ModelCursor_ShowUnlockMaterialNotification
                  (0,NotificationLifetime__Enum_Low,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowUnlockMaterialNotification(Boolean, NotificationLifetime) */

void Assembly-CSharp.dll::ModelCursor::ModelCursor_ShowUnlockMaterialNotification
               (bool useIt,NotificationLifetime__Enum lifetime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__NotificationController);
    func_?(&StringLiteral_Unlock_this_material_in_order_to);
    func_?(&StringLiteral_Unlock_this_material_in_order_to);
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Unlock_this_material_in_order_to;
  if (useIt != 0) {
    pSVar1 = StringLiteral_Unlock_this_material_in_order_to;
  }
  pSVar1 = TM::TM__(pSVar1,(MethodInfo *)0x0);
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  key = (Object *)func_?(TypeInfo__System__Byte,&stack0x00000007);
  if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            ((Dictionary_2_System_Object_System_Object_ *)this,key,(Object *)pSVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
            );
  if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
    method = (MethodInfo *)&UNK_?;
    func_?();
  }
  lifeTime = lifetime;
  method = (MethodInfo *)lifetime;
  lifetime = (NotificationLifetime__Enum)this;
  NotificationController::NotificationController_PushNotification_2
            (NotificationType__Enum_ModalNotification,
             (Dictionary_2_System_Object_System_Object_ *)this,lifeTime,(MethodInfo *)0x0);
  return;
}


/* ModelCursor(Vector3[]) */

void Assembly-CSharp.dll::ModelCursor::ModelCursor__ctor
               (ModelCursor *this,Vector3__Array *cubeCorners,MethodInfo *method)

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
    material = (pPVar1->fields).cellCursorErrorMaterial;
    this_00 = (CellCursor *)func_?(TypeInfo__CellCursor);
    CellCursor::CellCursor__ctor(this_00,1,0.03,material,1.0,cubeCorners,(MethodInfo *)0x0);
    (this->fields).errorCursor = this_00;
    func_?(&(this->fields).errorCursor,this_00);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_CursorVisible(Boolean) */

void Assembly-CSharp.dll::ModelCursor::ModelCursor_set_CursorVisible
               (ModelCursor *this,bool value,MethodInfo *method)

{
  pFVar1 = (this->fields).faceCursor;
  if ((pFVar1 != (FaceCursor *)0x0) &&
     (this_00 = (pFVar1->fields).gameObject, this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,value,(MethodInfo *)0x0);
    if ((this->fields).errorCursor != (CellCursor *)0x0) {
      uVar2 = *unaff_FS_OFFSET;
      *unaff_FS_OFFSET = &stack0xfffffffc;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__get_Current__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
        cRam_? = '\x01';
      }
      LStack_3._list = (List_1_System_Object_ *)0x0;
      LStack_3._index = 0;
      LStack_3._version = 0;
      LStack_3._current = (Object *)0x0;
      if (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
           (in_stack_4 + 8) !=
          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                             *)&stack0xffffffe4,
                            *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                             (in_stack_4 + 8),
                            MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                           );
        LStack_3._list = (List_1_System_Object_ *)pLVar5->_list;
        LStack_3._index = pLVar5->_index;
        LStack_3._version = pLVar5->_version;
        LStack_3._current = *(Object **)&pLVar5->_current;
        while( true ) {
          bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_3,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                            );
          if (bVar6 == 0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&LStack_3,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                       ,unaff_EDI);
            *unaff_FS_OFFSET = uVar2;
            return;
          }
          if (((RegexCharClass_SingleRange)LStack_3._current == (RegexCharClass_SingleRange)0x0) ||
             (*(GameObject **)((int)LStack_3._current + 0x1c) == (GameObject *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (*(GameObject **)((int)LStack_3._current + 0x1c),in_stack_7,
                     (MethodInfo *)0x0);
        }
      }
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

