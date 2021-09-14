
/* CellCursorCubeLineMesh GetCellCursor(IntVector) */

CellCursorCubeLineMesh *
Assembly-CSharp.dll::CellCursor::CellCursor_GetCellCursor
          (CellCursor *this,IntVector iLocalPos,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pCStack_6 = (CellCursorCubeLineMesh *)0x0;
  uStack_7 = 0;
  iStack_8 = 0;
  CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_9.monitor = (MonitorData *)0x0;
  CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_9.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_10 = 0xffffffff;
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).cursorCubes;
  piStack_11 = (int *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    piStack_11 = (int *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffac,this_00,
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
    CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar12->l;
    CStack_9.monitor = (MonitorData *)pLVar12->next;
    CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar12->ver;
    CStack_9.fields.syncRoot = (Object *)(pLVar12->current).rgba;
    uStack_1 = 0;
    do {
      cVar13 = func_?();
      if (cVar13 == '\0') {
        *piStack_11 = 0x50;
        goto code_?;
      }
      pCVar14 = (CellCursorCubeLineMesh *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_9,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__get_Current__
                         );
      if (pCVar14 == (CellCursorCubeLineMesh *)0x0) goto code_?;
      uStack_15._0_2_ = (pCVar14->fields).pos.x;
      uStack_15._2_2_ = (pCVar14->fields).pos.y;
      iStack_16 = (pCVar14->fields).pos.z;
      if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__WorldObject__IntVector);
      }
      a.z = iStack_16;
      a.x = (undefined2)uStack_15;
      a.y = uStack_15._2_2_;
      bVar17 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Equality
                        (a,iLocalPos,(MethodInfo *)0x0);
    } while (bVar17 == 0);
    pCStack_6 = pCVar14;
    *piStack_11 = 0xaa;
code_?:
    uStack_1 = 0xffffffff;
    func_?();
    iVar18 = iStack_8;
    if (iStack_8 != 0) goto code_?;
    if (*piStack_11 == 0xaa) {
      *unaff_FS_OFFSET = uStack_3;
      return pCStack_6;
    }
    pLVar19 = (this->fields).cursorCubes;
    if (pLVar19 != (List_1_CellCursorCubeLineMesh_ *)0x0) {
      pCVar14 = (CellCursorCubeLineMesh *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar19,0,
                          MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__get_Item_int_
                         );
      iStack_8 = 1;
      pLVar19 = (this->fields).cursorCubes;
      iVar18 = iStack_8;
      while (iStack_8 = iVar18, pLVar19 != (List_1_CellCursorCubeLineMesh_ *)0x0) {
        pOVar20 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar19,
                            MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__get_Count__
                           );
        if ((int)pOVar20 <= iStack_8) {
          *unaff_FS_OFFSET = uStack_3;
          return pCVar14;
        }
        pLVar19 = (this->fields).cursorCubes;
        if (((pLVar19 == (List_1_CellCursorCubeLineMesh_ *)0x0) ||
            (pIVar21 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar19,
                                  iVar18,
                                  MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__get_Item_int_
                                 ), pIVar21 == (IEventSystemHandler *)0x0)) ||
           (pCVar14 == (CellCursorCubeLineMesh *)0x0)) break;
        fVar22 = (pCVar14->fields).prevCursorSetTime;
        if ((float)pIVar21[3].klass <= fVar22 && fVar22 != (float)pIVar21[3].klass) {
          pLVar19 = (this->fields).cursorCubes;
          if (pLVar19 == (List_1_CellCursorCubeLineMesh_ *)0x0) break;
          pCVar14 = (CellCursorCubeLineMesh *)
                   mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar19,iVar18,
                              MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__get_Item_int_
                             );
        }
        iVar18 = iVar18 + 1;
        pLVar19 = (this->fields).cursorCubes;
      }
    }
  }
code_?:
  iVar18 = func_?(0);
code_?:
  func_?(iVar18,0,0);
  pcVar23 = (code *)swi(3);
  pCVar14 = (CellCursorCubeLineMesh *)(*pcVar23)();
  return pCVar14;
}


/* IntVector GetCubeCursorPos(CubePickingInfo) */

IntVector Assembly-CSharp.dll::CellCursor::CellCursor_GetCubeCursorPos
                    (CellCursor *this,CubePickingInfo *info,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?((short)_UNK_?);
    cRam_? = '\x01';
  }
  aiStack_1[0] = 0;
  aiStack_1[1] = 0;
  aiStack_1[2] = 0;
  if (method == (MethodInfo *)0x0) {
    func_?(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cube = (Cube *)method->invoker_method;
  face = method->name;
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?((short)TypeInfo__Cube);
  }
  bVar2 = Cube::Cube_IsFaceBoxSideAligened(cube,(Face__Enum)face,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    uVar3 = 0;
    uVar4 = 0;
    func_?((short)aiStack_1,0,0,0,0);
    switch(method->name) {
    case (char *)0x0:
      aiStack_1[1] = 1;
      break;
    case (char *)0x1:
      aiStack_1[1] = 0xffff;
      break;
    case (char *)0x2:
      aiStack_1[2] = 0xffff;
      break;
    case (char *)0x3:
      aiStack_1[2] = 1;
      break;
    case (char *)0x4:
      aiStack_1[0] = -1;
      break;
    case (char *)0x5:
      aiStack_1[0] = 1;
    }
    iVar5 = aiStack_1[2];
    iVar6 = aiStack_1[0];
    pIVar7 = method[1].methodPointer;
    uVar8 = *(undefined2 *)&method[1].virtualMethodPointer;
    if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
      uVar3 = 0x102f;
      func_?(TypeInfo__MV__WorldObject__IntVector);
    }
    i1.z = (int16_t)pIVar7;
    i1._0_4_ = auStack_9;
    i2.y = uVar4;
    i2.x = uVar8;
    i2.z = iVar6;
    IVar10 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                      (i1,i2,(MethodInfo *)CONCAT22(uVar3,iVar5));
    this->klass = (CellCursor__Class *)*IVar10._0_4_;
    *(undefined2 *)&this->monitor = *(undefined2 *)(IVar10._0_4_ + 1);
    IVar11.z = (int16_t)this;
    IVar11._0_4_ = this;
    return IVar11;
  }
  this->klass = (CellCursor__Class *)method[1].methodPointer;
  *(undefined2 *)&this->monitor = *(undefined2 *)&method[1].virtualMethodPointer;
  IVar10.z = extraout_DX;
  IVar10._0_4_ = this;
  return IVar10;
}


/* Void Remove() */

void Assembly-CSharp.dll::CellCursor::CellCursor_Remove(CellCursor *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).cursorCubes;
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while (cVar10 = func_?(), cVar10 != '\0') {
      pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__get_Current__
                         );
      if (pOVar11 == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      obj = (Object_1 *)pOVar11[3].monitor;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0);
    }
    *puStack_7 = 0x3e;
    uStack_1 = 0xffffffff;
    func_?(&CStack_6,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                   );
    this_01 = (List_1_UnityEngine_UIVertex_ *)(this->fields).cursorCubes;
    if (this_01 != (List_1_UnityEngine_UIVertex_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
      List_1_UnityEngine_UIVertex__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__Clear__);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?(0);
  func_?(0,0,0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetCursor(CubePickingInfo, GameObject) */

void Assembly-CSharp.dll::CellCursor::CellCursor_SetCursor
               (CellCursor *this,CubePickingInfo *info,GameObject *cubeGameObject,MethodInfo *method
               )

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_3 = Face__Enum_Top;
  uStack_4 = 0;
  if (info == (CubePickingInfo *)0x0) goto code_?;
  cube = (info->fields).cube;
  face = (info->fields).pickedFace;
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?(TypeInfo__Cube);
  }
  bVar5 = Cube::Cube_IsFaceBoxSideAligened(cube,face,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    uVar6._0_2_ = (info->fields).iLocalPos.x;
    uVar6._2_2_ = (info->fields).iLocalPos.y;
    iVar7 = (info->fields).iLocalPos.z;
    goto code_?;
  }
  func_?(&uStack_3,0,0,0,0);
  switch((info->fields).pickedFace) {
  case 0:
    uStack_3 = CONCAT22(1,(undefined2)uStack_3);
    break;
  case 1:
    uStack_3 = CONCAT22(0xffff,(undefined2)uStack_3);
    break;
  case 2:
    uStack_4 = 0xffff;
    break;
  case 3:
    uStack_4 = 1;
    break;
  case 4:
    uVar8 = 0xffff;
    goto code_?;
  case 5:
    uVar8 = 1;
code_?:
    uStack_3 = CONCAT22(uStack_3._2_2_,uVar8);
  }
  uVar8 = uStack_4;
  face = uStack_3;
  uVar9 = (info->fields).iLocalPos.x;
  iVar7 = (info->fields).iLocalPos.z;
  if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
    uVar1 = 0x102f;
    func_?(TypeInfo__MV__WorldObject__IntVector);
  }
  IVar10.z = uVar9;
  IVar10._0_4_ = auStack_11;
  i2.y = in_stack_12;
  i2.x = iVar7;
  i2.z = (int16_t)face;
  IVar10 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                     (IVar10,i2,(MethodInfo *)CONCAT22(uVar1,uVar8));
  uVar6 = *IVar10._0_4_;
  iVar7 = *(int16_t *)(IVar10._0_4_ + 1);
code_?:
  unaff_BL = (byte)face;
  iLocalPos.z = iVar7;
  iLocalPos.x = (short)uVar6;
  iLocalPos.y = (short)((uint)uVar6 >> 0x10);
  this_00 = CellCursor_GetCellCursor(this,iLocalPos,(MethodInfo *)0x0);
  if (this_00 != (CellCursorCubeLineMesh *)0x0) {
    position.z = iVar7;
    position.x = (short)uVar6;
    position.y = (short)((uint)uVar6 >> 0x10);
    CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
              (this_00,position,cubeGameObject,(MethodInfo *)0x0);
    return;
  }
code_?:
  uVar13 = func_?(0);
  pbVar14 = (byte *)((ulonglong)uVar13 >> 0x20);
  uVar15 = (uint)uVar13;
  bVar16 = CARRY1(*extraout_ECX,unaff_BL) || CARRY1(*extraout_ECX + unaff_BL,0xefefd025 < uVar15);
  *extraout_ECX = *extraout_ECX + unaff_BL + (0xefefd025 < uVar15);
  bVar17 = *pbVar14;
  bVar18 = (byte)((uint)(&UNK_? + uVar15) >> 8);
  bVar19 = *pbVar14 + bVar18;
  *pbVar14 = bVar19 + bVar16;
  cRam_? = cRam_? + (char)((uint)extraout_ECX >> 8) +
                 (CARRY1(bVar17,bVar18) || CARRY1(bVar19,bVar16));
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void SetCursor(IntVector, GameObject) */

void Assembly-CSharp.dll::CellCursor::CellCursor_SetCursor_1
               (CellCursor *this,IntVector position,GameObject *cubeGameObject,MethodInfo *method)

{
  this_00 = CellCursor_GetCellCursor(this,position,(MethodInfo *)0x0);
  if (this_00 != (CellCursorCubeLineMesh *)0x0) {
    CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
              (this_00,position,cubeGameObject,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateCursor() */

void Assembly-CSharp.dll::CellCursor::CellCursor_UpdateCursor(CellCursor *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  method_00 = unaff_ESI;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).cursorCubes;
  puStack_7 = (undefined4 *)&stack0xffffffa0;
  puStack_4 = &stack0xffffffa0;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffa0;
    puStack_4 = &stack0xffffffa0;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       (&LStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while( true ) {
      cVar10 = func_?(&CStack_6,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                             );
      if (cVar10 == '\0') {
        *puStack_7 = 0x3e;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      unaff_ESI = (MethodInfo *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__get_Current__
                            );
      pMStack_11 = unaff_ESI;
      if (unaff_ESI == (MethodInfo *)0x0) break;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pIVar12 = unaff_ESI->klass;
      pMStack_13 = (Material__Array *)
                   UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
      ;
      fVar14 = (float)pIVar12 - ((float)pMStack_13 - (float)unaff_ESI->parameters);
      this_01 = (GameObject *)(unaff_ESI->field7_0x1c).methodMetadataHandle;
      if (fVar14 <= 0.0) {
        if (this_01 == (GameObject *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,0,(MethodInfo *)0x0);
      }
      else {
        if ((this_01 == (GameObject *)0x0) ||
           (this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_GetComponent_47
                                (this_01,
                                 UnityEngine__Renderer_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Renderer>__
                                ), this_03 == (UseInteractorHandler *)0x0)) break;
        pMStack_13 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                               ((Renderer *)this_03,method_00);
        unaff_ESI = (MethodInfo *)0x0;
        while( true ) {
          if (pMStack_13 == (Material__Array *)0x0) goto code_?;
          if ((int)pMStack_13->max_length <= (int)unaff_ESI) break;
          if ((MethodInfo *)pMStack_13->max_length <= unaff_ESI) {
            uVar15 = func_?();
            func_?(uVar15,0,0);
            goto code_?;
          }
          this_02 = pMStack_13->vector[(int)unaff_ESI];
          if (this_02 == (Material *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
                    ((Object_1 *)this_02,HideFlags__Enum_DontSave,(MethodInfo *)0x0);
          pCVar16 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor
                             ((Color *)&stack0xffffffac,this_02,StringLiteral__Color,
                              (MethodInfo *)0x0);
          LStack_9.l = (List_1_UnityEngine_Color32_ *)pCVar16->r;
          LStack_9.next = (int32_t)pCVar16->g;
          LStack_9.ver = (int32_t)pCVar16->b;
          uVar17 = pCVar16->r;
          uVar18 = pCVar16->g;
          uVar19 = pCVar16->b;
          value.z = (float)uVar19;
          value.y = (float)uVar18;
          value.x = (float)uVar17;
          LStack_9.current.rgba =
               (int32_t)((fVar14 / (float)pMStack_11->klass) * (float)pMStack_11->return_type);
          value.w = (float)LStack_9.current.rgba;
          method_00 = (MethodInfo *)StringLiteral__Color;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_02,StringLiteral__Color,value,(MethodInfo *)0x0);
          unaff_ESI = (MethodInfo *)((int)&unaff_ESI->methodPointer + 1);
        }
      }
    }
  }
code_?:
  func_?(0);
  func_?(unaff_ESI,0,0);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* CellCursor(Int32, Single, Material, Single, Vector3[]) */

void Assembly-CSharp.dll::CellCursor::CellCursor__ctor
               (CellCursor *this,int32_t cursorCubeCount,float diagonalWidth,Material *material,
               float fadeOutTime,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>;
  this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__List__)
  ;
  (this->fields).cursorCubes = (List_1_CellCursorCubeLineMesh_ *)this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  iVar1 = 0;
  if (0 < cursorCubeCount) {
    do {
      this_00 = (this->fields).cursorCubes;
      this_02 = (CellCursorCubeLineMesh *)func_?(TypeInfo__CellCursorCubeLineMesh);
      CellCursorCubeLineMesh::CellCursorCubeLineMesh__ctor
                (this_02,diagonalWidth,material,fadeOutTime,cubeCorners,(MethodInfo *)0x0);
      if (this_00 == (List_1_CellCursorCubeLineMesh_ *)0x0) {
        func_?(0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)this_02,
                 MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__Add_CellCursorCubeLineMesh_
                );
      iVar1 = iVar1 + 1;
    } while (iVar1 < cursorCubeCount);
  }
  return;
}


/* Void set_Active(Boolean) */

void Assembly-CSharp.dll::CellCursor::CellCursor_set_Active
               (CellCursor *this,bool value,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).cursorCubes;
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while( true ) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *puStack_7 = 0x44;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__get_Current__
                         );
      if ((pOVar11 == (Object *)0x0) || ((GameObject *)pOVar11[3].monitor == (GameObject *)0x0))
      break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pOVar11[3].monitor,value,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

