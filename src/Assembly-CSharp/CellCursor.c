
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
    func_?();
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = (uint)uStack_3._2_2_ << 0x10;
  bVar4 = 0;
  if (method != (MethodInfo *)0x0) {
    cube = (Cube *)method->invoker_method;
    face = method->name;
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?();
    }
    bVar5 = Cube::Cube_IsFaceBoxSideAligened(cube,(Face__Enum)face,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      uVar6 = 0;
      uVar7 = 0;
      func_?();
      switch(method->name) {
      case (char *)0x0:
        uStack_2 = 1;
        break;
      case (char *)0x1:
        uStack_2 = 0xffff;
        break;
      case (char *)0x2:
        uStack_3 = CONCAT22(uStack_3._2_2_,0xffff);
        break;
      case (char *)0x3:
        uStack_3 = CONCAT22(uStack_3._2_2_,1);
        break;
      case (char *)0x4:
        iStack_1 = -1;
        break;
      case (char *)0x5:
        iStack_1 = 1;
      }
      iVar8 = iStack_1;
      uVar9 = (undefined2)uStack_3;
      pIVar10 = method[1].methodPointer;
      uVar11 = *(undefined2 *)&method[1].virtualMethodPointer;
      if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
        uVar6 = 0x102f;
        func_?();
      }
      i1.z = (int16_t)pIVar10;
      i1._0_4_ = &puStack_12;
      i2.y = uVar7;
      i2.x = uVar11;
      i2.z = iVar8;
      IVar13 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                         (i1,i2,(MethodInfo *)CONCAT22(uVar6,uVar9));
      this->klass = (CellCursor__Class *)*IVar13._0_4_;
      *(undefined2 *)&this->monitor = *(undefined2 *)(IVar13._0_4_ + 1);
      IVar14.z = (int16_t)this;
      IVar14._0_4_ = this;
      return IVar14;
    }
    this->klass = (CellCursor__Class *)method[1].methodPointer;
    *(undefined2 *)&this->monitor = *(undefined2 *)&method[1].virtualMethodPointer;
    IVar15.z = extraout_DX;
    IVar15._0_4_ = this;
    return IVar15;
  }
  uVar16 = func_?();
  puStack_17 = unaff_EDI + 1;
  *unaff_EDI = uRam_?;
  bVar18 = -bVar4;
  in_AF = 9 < (bVar18 & 0xf) | in_AF;
  bVar4 = 0x99 < bVar18 | bVar4;
  pbVar19 = (byte *)(CONCAT31((int3)((ulonglong)uVar16 >> 8),bVar18 + in_AF * -6 + bVar4 * -0x60) +
                   -0x46efd02a);
  bVar20 = (byte)((ulonglong)uVar16 >> 0x28);
  bVar18 = *pbVar19 + bVar20;
  bVar21 = CARRY1(*pbVar19,bVar20) || CARRY1(bVar18,bVar4);
  *pbVar19 = bVar18 + bVar4;
  bVar4 = -bVar21;
  bVar21 = 0x99 < bVar4 || bVar21;
  bVar18 = bVar4 + (9 < (bVar4 & 0xf) | in_AF) * -6 + bVar21 * -0x60;
  bVar20 = (byte)((ulonglong)uVar16 >> 0x20);
  bVar4 = bVar20 + bVar18;
  bVar22 = CARRY1(bVar20,bVar18) || CARRY1(bVar4,bVar21);
  bVar18 = (byte)((ushort)extraout_CX >> 8);
  bVar22 = CARRY1(bVar18,(byte)extraout_CX) ||
           CARRY1(bVar18 + (byte)extraout_CX,0x99 < (byte)-bVar22 || bVar22);
  in((short)CONCAT31((int3)((ulonglong)uVar16 >> 0x28),
                     (bVar4 + bVar21) * '\x02' + (0x99 < (byte)-bVar22 || bVar22)));
  puStack_23 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_23;
  pMStack_24 = (MethodInfo *)0x4;
  puStack_12 = (undefined1 *)&puStack_17;
  ppuVar25 = &puStack_17;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    ppuVar25 = (undefined4 **)puStack_12;
  }
  puStack_12 = (undefined1 *)ppuVar25;
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).cursorCubes;
  puStack_12 = (undefined1 *)&puStack_17;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_12 = (undefined1 *)&puStack_17;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
    List_1_UnityEngine_Color32__GetEnumerator
              ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc4,this_00,
               MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
              );
    uStack_3 = 0;
    while( true ) {
      pMStack_24 = 
      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
      ;
      puStack_17 = (undefined4 *)&stack0xffffffd4;
      cVar26 = func_?();
      if (cVar26 == '\0') break;
      pOVar27 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                           &stack0xffffffd4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__get_Current__
                          );
      if (pOVar27 == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      obj = (Object_1 *)pOVar27[3].monitor;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0);
    }
    puStack_17 = (undefined4 *)0x3e;
    uStack_3 = -1;
    func_?(&stack0xffffffd4,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                   );
    this_01 = (List_1_UnityEngine_UIVertex_ *)(this->fields).cursorCubes;
    if (this_01 != (List_1_UnityEngine_UIVertex_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
      List_1_UnityEngine_UIVertex__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__Clear__);
      *unaff_FS_OFFSET = uStack_28;
      IVar13.z = extraout_DX_00;
      IVar13.x = (short)extraout_EAX;
      IVar13.y = (short)((uint)extraout_EAX >> 0x10);
      return IVar13;
    }
  }
code_?:
  func_?(0);
  func_?(0,0,0);
  pcVar29 = (code *)swi(3);
  IVar13 = (IntVector)(*pcVar29)();
  return IVar13;
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
  bVar3 = (byte)((uint)unaff_EBX >> 8);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_4 = Face__Enum_Top;
  uStack_5 = 0;
  if (info == (CubePickingInfo *)0x0) goto code_?;
  cube = (info->fields).cube;
  face = (info->fields).pickedFace;
  if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Cube->_1).cctor_started == 0)) {
    func_?(TypeInfo__Cube);
  }
  bVar6 = Cube::Cube_IsFaceBoxSideAligened(cube,face,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    uVar7._0_2_ = (info->fields).iLocalPos.x;
    uVar7._2_2_ = (info->fields).iLocalPos.y;
    iVar8 = (info->fields).iLocalPos.z;
    goto code_?;
  }
  func_?(&uStack_4,0,0,0,0);
  switch((info->fields).pickedFace) {
  case 0:
    uStack_4 = CONCAT22(1,(undefined2)uStack_4);
    break;
  case 1:
    uStack_4 = CONCAT22(0xffff,(undefined2)uStack_4);
    break;
  case 2:
    uStack_5 = 0xffff;
    break;
  case 3:
    uStack_5 = 1;
    break;
  case 4:
    uVar9 = 0xffff;
    goto code_?;
  case 5:
    uVar9 = 1;
code_?:
    uStack_4 = CONCAT22(uStack_4._2_2_,uVar9);
  }
  uVar9 = uStack_5;
  face = uStack_4;
  uVar10 = (info->fields).iLocalPos.x;
  iVar8 = (info->fields).iLocalPos.z;
  if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
    uVar1 = 0x102f;
    func_?(TypeInfo__MV__WorldObject__IntVector);
  }
  IVar11.z = uVar10;
  IVar11._0_4_ = auStack_12;
  i2.y = in_stack_13;
  i2.x = iVar8;
  i2.z = (int16_t)face;
  IVar11 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                     (IVar11,i2,(MethodInfo *)CONCAT22(uVar1,uVar9));
  uVar7 = *IVar11._0_4_;
  iVar8 = *(int16_t *)(IVar11._0_4_ + 1);
code_?:
  bVar3 = (byte)(face >> 8);
  iLocalPos.z = iVar8;
  iLocalPos.x = (short)uVar7;
  iLocalPos.y = (short)((uint)uVar7 >> 0x10);
  this_00 = CellCursor_GetCellCursor(this,iLocalPos,(MethodInfo *)0x0);
  if (this_00 != (CellCursorCubeLineMesh *)0x0) {
    position.z = iVar8;
    position.x = (short)uVar7;
    position.y = (short)((uint)uVar7 >> 0x10);
    CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
              (this_00,position,cubeGameObject,(MethodInfo *)0x0);
    return;
  }
code_?:
  bVar14 = 0;
  func_?(0);
  uVar7 = in(0xd9);
  bVar15 = (byte)uVar7;
  bVar14 = 0x99 < bVar15 | bVar14;
  bVar16 = bVar15 + (9 < (bVar15 & 0xf) | in_AF) * -6 + bVar14 * -0x60;
  bVar17 = (byte)((uint)extraout_EDX >> 8);
  bVar15 = bVar16 + bVar17;
  bVar18 = CARRY1(bVar16,bVar17) || CARRY1(bVar15,bVar14);
  bVar15 = bVar15 + bVar14;
  bVar19 = CARRY1(extraout_CL,bVar3) || CARRY1(extraout_CL + bVar3,bVar18);
  bVar14 = *extraout_EDX;
  bVar16 = *extraout_EDX + bVar15;
  *extraout_EDX = bVar16 + bVar19;
  cRam_? = cRam_? + extraout_CL + bVar3 + bVar18 +
                 (CARRY1(bVar14,bVar15) || CARRY1(bVar16,bVar19));
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

