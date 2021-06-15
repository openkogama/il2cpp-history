
/* Void HandleLaser(CubePickingInfo, CubePickingInfo, GameObject, BuildState, Boolean) */

void Assembly-CSharp.dll::ModelCursor::ModelCursor_HandleLaser
               (ModelCursor *this,CubePickingInfo *movingEdgeCube,CubePickingInfo *selectedCube,
               GameObject *targetGameObject,BuildState__Enum buildState,bool addCube,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  if (buildState == BuildState__Enum_PaintCubes) {
    bVar2 = DrawPlane::DrawPlane_Pick((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar3 != (GameEventManager *)0x0) &&
        (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
        pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       (pGVar5 = (pGVar4->fields).LaserCommands,
       pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                (pGVar5,(this->fields).addCubeLaserOnTime,(MethodInfo *)0x0);
      uVar6._0_4_ = 3.609361e-29;
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
  else if (movingEdgeCube == (CubePickingInfo *)0x0) {
    if (addCube == 0) {
      if (selectedCube != (CubePickingInfo *)0x0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if (((pGVar3 == (GameEventManager *)0x0) ||
            (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
            pGVar4 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
           (pGVar5 = (pGVar4->fields).LaserCommands,
           pGVar5 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
        goto code_?;
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                  (pGVar5,(selectedCube->fields).point,(MethodInfo *)0x0);
      }
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar3 != (GameEventManager *)0x0) &&
        (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
        pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       (pGVar5 = (pGVar4->fields).LaserCommands,
       pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                (pGVar5,(this->fields).addCubeLaserOnTime,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    ModelCursor_HandleLaserMovingEdge(this,movingEdgeCube,targetGameObject,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar3 != (GameEventManager *)0x0) &&
        (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
        pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       (pGVar5 = (pGVar4->fields).LaserCommands,
       pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                (pGVar5,(this->fields).addCubeLaserOnTime,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (movingEdgeCube == (CubePickingInfo *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0,0);
    func_?(uVar1);
  }
  else {
    uVar1._0_2_ = (movingEdgeCube->fields).iLocalPos.x;
    uVar1._2_2_ = (movingEdgeCube->fields).iLocalPos.y;
    pCVar2 = (movingEdgeCube->fields).cube;
    face = (movingEdgeCube->fields).pickedFace;
    uStack_3 = CONCAT44(uVar1,(undefined4)uStack_3);
    iVar4 = (movingEdgeCube->fields).iLocalPos.z;
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    uVar5 = uStack_3;
    IVar6.z = iVar4;
    IVar6.x = uStack_3._4_2_;
    IVar6.y = uStack_3._6_2_;
    uStack_3 = uVar5;
    pVVar7 = Cube::Cube_GetFaceVerticesWorld(targetGameObject,pCVar2,face,IVar6,(MethodInfo *)0x0);
    if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
    if (pVVar7->max_length == 0) goto code_?;
    fStack_8 = pVVar7->vector[0].x;
    fStack_9 = pVVar7->vector[0].y;
    fVar10 = pVVar7->vector[0].z;
    if (pVVar7->max_length < 2) goto code_?;
    fVar11 = pVVar7->vector[1].z;
    VStack_12.y = pVVar7->vector[1].x;
    VStack_12.z = pVVar7->vector[1].y;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      pVStack_13 = TypeInfo__UnityEngine__Vector3;
      auStack_14._4_4_ = &UNK_?;
      func_?();
    }
    a.z = fVar10;
    a.x = fStack_8;
    a.y = fStack_9;
    b.z = fVar11;
    b.x = VStack_12.y;
    b.y = VStack_12.z;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (&VStack_16,a,b,(MethodInfo *)0x0);
    if (pVVar7->max_length < 3) goto code_?;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (&VStack_16,*pVVar15,pVVar7->vector[2],(MethodInfo *)0x0);
    if (pVVar7->max_length < 4) goto code_?;
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (&VStack_16,*pVVar15,pVVar7->vector[3],(MethodInfo *)0x0);
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                        (&VStack_12,*pVVar15,4.0,(MethodInfo *)0x0);
    VStack_16.y = pVVar15->x;
    VStack_16.z = pVVar15->y;
    fStack_9 = pVVar15->z;
    iVar17 = (movingEdgeCube->fields).pickedEdge;
    uStack_3 = CONCAT44(iVar17,(undefined4)uStack_3);
    if (iVar17 == 0) {
      VStack_18.y = pVVar15->x;
      VStack_18.z = pVVar15->y;
      fVar10 = pVVar15->z;
      VStack_16.y = pVVar15->x;
      VStack_16.z = pVVar15->y;
      _fStack_20 = VStack_18._4_8_;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                          ((Vector3 *)(auStack_14 + 4),(MethodInfo *)0x0);
      a_03.z = fVar10;
      a_03.x = VStack_16.y;
      a_03.y = VStack_16.z;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)(auStack_14 + 4),a_03,*pVVar15,(MethodInfo *)0x0);
      VStack_16.y = pVVar15->x;
      VStack_16.z = pVVar15->y;
      fVar11 = pVVar15->z;
      pCVar19 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                          ((Color *)auStack_14,(MethodInfo *)0x0);
      auStack_14._0_4_ = pCVar19->r;
      auStack_14._4_4_ = pCVar19->g;
      pVStack_13 = (Vector3__Class *)pCVar19->b;
      fStack_20 = pCVar19->a;
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      start_00.z = fVar10;
      start_00.x = VStack_18.y;
      start_00.y = VStack_18.z;
      end_00.z = fVar11;
      end_00.x = VStack_16.y;
      end_00.y = VStack_16.z;
      color_00.g = (float)auStack_14._4_4_;
      color_00.r = (float)auStack_14._0_4_;
      color_00.b = (float)pVStack_13;
      color_00.a = fStack_20;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_1
                (start_00,end_00,color_00,(MethodInfo *)0x0);
code_?:
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?((short)TypeInfo__MVGameControllerBase);
      }
      pGVar21 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar21 != (GameEventManager *)0x0) &&
          (pGVar22 = (pGVar21->fields).AvatarCommandsBuildMode,
          pGVar22 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (this_00 = (pGVar22->fields).LaserCommands,
         this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        to.z._0_2_ = SUB42(fVar10,0);
        to.x = fStack_8;
        to.y = fStack_9;
        to.z._2_2_ = (short)((uint)fVar10 >> 0x10);
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                  (this_00,to,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pCVar2 = (movingEdgeCube->fields).cube;
    VStack_12.z = (float)(movingEdgeCube->fields).pickedFace;
    IVar6 = (movingEdgeCube->fields).iLocalPos;
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    pVVar7 = Cube::Cube_GetEdgeVerticesWorld
                       (targetGameObject,pCVar2,(Face__Enum)VStack_12.z,uStack_3._4_4_,IVar6,
                        (MethodInfo *)0x0);
    if ((movingEdgeCube->fields).pickedEdgeIndex0 != 0) {
      if (pVVar7 != (Vector3__Array *)0x0) {
        if (pVVar7->max_length == 0) goto code_?;
        VStack_18.y = pVVar7->vector[0].x;
        VStack_18.z = pVVar7->vector[0].y;
        fVar10 = pVVar7->vector[0].z;
        uStack_3._0_4_ = pVVar7->vector[0].x;
        uStack_3._4_4_ = (Edge__Enum)pVVar7->vector[0].y;
        VStack_12._4_8_ = VStack_18._4_8_;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                            ((Vector3 *)(auStack_14 + 4),(MethodInfo *)0x0);
        a_00.z = fVar10;
        a_00.x = (float)(undefined4)uStack_3;
        a_00.y = (float)uStack_3._4_4_;
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            ((Vector3 *)(auStack_14 + 4),a_00,*pVVar15,(MethodInfo *)0x0);
        uStack_3._0_4_ = pVVar15->x;
        uStack_3._4_4_ = (Edge__Enum)pVVar15->y;
        fVar11 = pVVar15->z;
        pCVar19 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                            ((Color *)auStack_14,(MethodInfo *)0x0);
        auStack_14._0_4_ = pCVar19->r;
        auStack_14._4_4_ = pCVar19->g;
        pVStack_13 = (Vector3__Class *)pCVar19->b;
        fStack_20 = pCVar19->a;
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        start.z = fVar10;
        start.x = VStack_18.y;
        start.y = VStack_18.z;
        end.z = fVar11;
        end.x = (float)(undefined4)uStack_3;
        end.y = (float)uStack_3._4_4_;
        color.g = (float)auStack_14._4_4_;
        color.r = (float)auStack_14._0_4_;
        color.b = (float)pVStack_13;
        color.a = fStack_20;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_DrawLine_1
                  (start,end,color,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
    if (pVVar7 == (Vector3__Array *)0x0) goto code_?;
    if ((movingEdgeCube->fields).pickedEdgeIndex1 == 0) {
      if (pVVar7->max_length == 0) goto code_?;
      VStack_12.y = pVVar7->vector[0].x;
      VStack_12.z = pVVar7->vector[0].y;
      fVar10 = pVVar7->vector[0].z;
      if (1 < pVVar7->max_length) {
        uStack_3._0_4_ = pVVar7->vector[1].x;
        uStack_3._4_4_ = (Edge__Enum)pVVar7->vector[1].y;
        fVar11 = pVVar7->vector[1].z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a_01.z = fVar10;
        a_01.x = VStack_12.y;
        a_01.y = VStack_12.z;
        b_00.z = fVar11;
        b_00.x = (float)(undefined4)uStack_3;
        b_00.y = (float)uStack_3._4_4_;
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            (&VStack_18,a_01,b_00,(MethodInfo *)0x0);
        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Division
                            (&VStack_18,*pVVar15,2.0,(MethodInfo *)0x0);
        VStack_12.y = pVVar15->x;
        VStack_12.z = pVVar15->y;
        fVar10 = pVVar15->z;
        goto code_?;
      }
      goto code_?;
    }
    if (1 < pVVar7->max_length) {
      VStack_12.y = pVVar7->vector[1].x;
      VStack_12.z = pVVar7->vector[1].y;
      fVar10 = pVVar7->vector[1].z;
code_?:
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a_02.z = fStack_9;
      a_02.x = VStack_16.y;
      a_02.y = VStack_16.z;
      b_01.z = fVar10;
      b_01.x = VStack_12.y;
      b_01.y = VStack_12.z;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                          ((Vector3 *)(auStack_14 + 4),a_02,b_01,(MethodInfo *)0x0);
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          ((Vector3 *)(auStack_14 + 4),*pVVar15,0.2,(MethodInfo *)0x0);
      a_04.z = fVar10;
      a_04.x = VStack_12.y;
      a_04.y = VStack_12.z;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)(auStack_14 + 4),a_04,*pVVar15,(MethodInfo *)0x0);
      fStack_8 = pVVar15->x;
      fStack_9 = pVVar15->y;
      fVar10 = pVVar15->z;
      goto code_?;
    }
  }
  uVar1 = func_?(0,0);
  func_?(uVar1);
code_?:
  uVar1 = func_?(0,0);
  func_?(uVar1);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void Remove() */

void Assembly-CSharp.dll::ModelCursor::ModelCursor_Remove(ModelCursor *this,MethodInfo *method)

{
  this_00 = (this->fields).faceCursor;
  if (this_00 != (FaceCursor *)0x0) {
    FaceCursor::FaceCursor_Remove(this_00,(MethodInfo *)0x0);
    if ((this->fields).errorCursor != (CellCursor *)0x0) {
      uVar1 = *unaff_FS_OFFSET;
      *unaff_FS_OFFSET = &stack0xfffffff8;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      CStack_2.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
      CStack_2.monitor = (MonitorData *)0x0;
      CStack_2.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
      CStack_2.fields.syncRoot = (Object *)0x0;
      puVar3 = (undefined4 *)&stack0xffffffc0;
      func_?();
      if (*(List_1_UnityEngine_Color32_ **)(in_stack_4 + 8) !=
          (List_1_UnityEngine_Color32_ *)0x0) {
        pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                 List_1_UnityEngine_Color32__GetEnumerator
                           ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_6,
                            *(List_1_UnityEngine_Color32_ **)(in_stack_4 + 8),
                            MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                           );
        CStack_2.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar5->l;
        CStack_2.monitor = (MonitorData *)pLVar5->next;
        CStack_2.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5->ver;
        CStack_2.fields.syncRoot = (Object *)(pLVar5->current).rgba;
        while (cVar7 = func_?(), cVar7 != '\0') {
          pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (&CStack_2,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__get_Current__
                             );
          if (pOVar8 == (Object *)0x0) goto code_?;
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          obj = (Object_1 *)pOVar8[3].monitor;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0)
          ;
        }
        *puVar3 = 0x3e;
        func_?(&CStack_2,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                       );
        if (*(List_1_UnityEngine_UIVertex_ **)(in_stack_4 + 8) !=
            (List_1_UnityEngine_UIVertex_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
          List_1_UnityEngine_UIVertex__Clear
                    (*(List_1_UnityEngine_UIVertex_ **)(in_stack_4 + 8),
                     MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__Clear__
                    );
          *unaff_FS_OFFSET = uVar1;
          return;
        }
      }
code_?:
      func_?(0);
      func_?(0,0,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetErrorCursor(IntVector, GameObject) */

void Assembly-CSharp.dll::ModelCursor::ModelCursor_SetErrorCursor
               (ModelCursor *this,IntVector iPos,GameObject *targetGameObject,MethodInfo *method)

{
  this_00 = (this->fields).errorCursor;
  if (this_00 != (CellCursor *)0x0) {
    CellCursor::CellCursor_SetCursor_1(this_00,iPos,targetGameObject,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ModelCursor(Vector3[]) */

void Assembly-CSharp.dll::ModelCursor::ModelCursor__ctor
               (ModelCursor *this,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).addCubeLaserOnTime = 0.2;
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
    (this->fields).errorCursor = this_01;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void set_CursorVisible(Boolean) */

void Assembly-CSharp.dll::ModelCursor::ModelCursor_set_CursorVisible
               (ModelCursor *this,bool value,MethodInfo *method)

{
  pMVar1 = this;
  this_00 = (KogamaSettingNumericBase_1_System_Single_ *)(this->fields).faceCursor;
  if (this_00 != (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
    this_01 = (GameObject *)
              MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
              KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
              KogamaSettingNumericBase_1_System_Single__get_KogamaSetting(this_00,(MethodInfo *)0x0)
    ;
    if ((this_01 != (GameObject *)0x0) &&
       (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,(bool)_value,(MethodInfo *)0x0),
       (pMVar1->fields).errorCursor != (CellCursor *)0x0)) {
      method = (MethodInfo *)0xffffffff;
      _value = &DAT_?;
      this = (ModelCursor *)*unaff_FS_OFFSET;
      *unaff_FS_OFFSET = &this;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pCStack_2 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
      pMStack_3 = (MonitorData *)0x0;
      puVar4 = (undefined4 *)&stack0xffffffcc;
      func_?();
      if (*(List_1_UnityEngine_Color32_ **)(in_stack_5 + 8) !=
          (List_1_UnityEngine_Color32_ *)0x0) {
        pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                 List_1_UnityEngine_Color32__GetEnumerator
                           ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_7,
                            *(List_1_UnityEngine_Color32_ **)(in_stack_5 + 8),
                            MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                           );
        pCStack_2 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar6->l;
        pMStack_3 = (MonitorData *)pLVar6->next;
        method = (MethodInfo *)0x0;
        while( true ) {
          cVar8 = func_?();
          if (cVar8 == '\0') {
            *puVar4 = 0x44;
            method = (MethodInfo *)0xffffffff;
            func_?(&pCStack_2,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                           );
            *unaff_FS_OFFSET = this;
            return;
          }
          pOVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                              &pCStack_2,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__get_Current__
                             );
          if ((pOVar9 == (Object *)0x0) || ((GameObject *)pOVar9[3].monitor == (GameObject *)0x0))
          break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)pOVar9[3].monitor,in_stack_10,(MethodInfo *)0x0);
        }
      }
      func_?(0);
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

