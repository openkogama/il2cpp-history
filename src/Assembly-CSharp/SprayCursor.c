
/* IntVector FaceToOffset(Face) */

IntVector Assembly-CSharp.dll::SprayCursor::SprayCursor_FaceToOffset
                    (SprayCursor *this,Face__Enum face,MethodInfo *method)

{
  switch(method) {
  case (MethodInfo *)0x0:
    z = 0;
    y = 1;
    goto code_?;
  case (MethodInfo *)0x1:
    z = 0;
    y = -1;
    goto code_?;
  case (MethodInfo *)0x2:
    z = -1;
    break;
  case (MethodInfo *)0x3:
    z = 1;
    break;
  case (MethodInfo *)0x4:
    z = 0;
    y = 0;
    x = -1;
    goto code_?;
  case (MethodInfo *)0x5:
    z = 0;
    y = 0;
    x = 1;
    goto code_?;
  default:
    z = 0;
  }
  y = 0;
code_?:
  x = 0;
code_?:
  this->klass = (SprayCursor__Class *)0x0;
  *(undefined2 *)&this->monitor = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)this,x,y,z,(MethodInfo *)0x0);
  IVar1.z = extraout_DX;
  IVar1._0_4_ = this;
  return IVar1;
}


/* Void Remove() */

void Assembly-CSharp.dll::SprayCursor::SprayCursor_Remove(SprayCursor *this,MethodInfo *method)

{
  pCVar1 = (this->fields).sprayCursor;
  if (pCVar1 != (CellCursor *)0x0) {
    *unaff_FS_OFFSET = &stack0xfffffff0;
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
    LStack_2._list = (List_1_System_Object_ *)0x0;
    LStack_2._index = 0;
    LStack_2._version = 0;
    LStack_2._current = (Object *)0x0;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (pCVar1->fields).cursorCubes;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&stack0xffffffd8,this_00,
                          MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                         );
      array = (CellCursorCubeLineMesh__Array *)&LStack_2;
      LStack_2._list = (List_1_System_Object_ *)pLVar3->_list;
      LStack_2._index = pLVar3->_index;
      LStack_2._version = pLVar3->_version;
      LStack_2._current = *(Object **)&pLVar3->_current;
      while (bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_2,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                               ), pOVar5 = LStack_2._current, bVar4 != 0) {
        if ((RegexCharClass_SingleRange)LStack_2._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        obj = *(Object_1 **)((int)pOVar5 + 0x1c);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(obj,(MethodInfo *)0x0);
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)array,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                 ,(MethodInfo *)0xffffffff);
      pLVar6 = (pCVar1->fields).cursorCubes;
      if (pLVar6 != (List_1_CellCursorCubeLineMesh_ *)0x0) {
        length = (pLVar6->fields)._size;
        piVar7 = &(pLVar6->fields)._version;
        *piVar7 = *piVar7 + 1;
        (pLVar6->fields)._size = 0;
        if (0 < length) {
          array = (pLVar6->fields)._items;
          mscorlib.dll::System::Array::Array_Clear((Array *)array,0,length,(MethodInfo *)0x0);
        }
        *unaff_FS_OFFSET = array;
        return;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UnlockMaterialToRemove() */

void Assembly-CSharp.dll::SprayCursor::SprayCursor_UnlockMaterialToRemove
               (SprayCursor *this,MethodInfo *method)

{
  ModelCursor::ModelCursor_ShowUnlockMaterialNotification
            (0,NotificationLifetime__Enum_Low,(MethodInfo *)0x0);
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void UpdateCursor(CubePickingInfo, MVCubeModelBase, Boolean) */

void Assembly-CSharp.dll::SprayCursor::SprayCursor_UpdateCursor
               (SprayCursor *this,CubePickingInfo *selectedCube,MVCubeModelBase *targetCubeModel,
               bool addCube,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  puVar3 = (undefined4 *)&stack0xfffffffc;
  puVar4 = &stack0xfffffffc;
  puVar5 = &stack0xfffffffc;
  material = unaff_ESI;
  method_00 = unaff_EBX;
  if (cRam_? == '\0') {
    in_stack_6 = (MethodInfo *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if (addCube != 0) {
    in_stack_6 = (MethodInfo *)&UNK_?;
    pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    bVar8 = (POPCOUNT((uint)pGVar7 & 0xff) & 1U) == 0;
    if (pGVar7 != (GameEventManager *)0x0) {
      pGVar9 = (pGVar7->fields).AvatarCommandsBuildMode;
      bVar8 = (POPCOUNT((uint)pGVar9 & 0xff) & 1U) == 0;
      if (pGVar9 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
        this_02 = (MethodInfo *)(pGVar9->fields).LaserCommands;
        bVar8 = (POPCOUNT((uint)this_02 & 0xff) & 1U) == 0;
        if (this_02 != (MethodInfo *)0x0) {
          in_stack_10 = &UNK_?;
          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                    ((GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)this_02
                     ,(this->fields).addCubeLaserOnTime,(MethodInfo *)0x0);
          unaff_EDI = (Object *)0x0;
          fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          ;
          (this->fields).addCubeTime = fVar11;
          in_stack_6 = this_02;
          goto code_?;
        }
      }
    }
    goto code_?;
  }
code_?:
  pCVar12 = (this->fields).sprayCursor;
  unaff_ESI = selectedCube;
  if (selectedCube == (CubePickingInfo *)0x0) {
    bVar8 = (POPCOUNT((uint)pCVar12 & 0xff) & 1U) == 0;
    if (pCVar12 != (CellCursor *)0x0) {
      CellCursor::CellCursor_set_Active(pCVar12,0,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  bVar8 = (POPCOUNT((uint)pCVar12 & 0xff) & 1U) == 0;
  if (pCVar12 == (CellCursor *)0x0) goto code_?;
  in_stack_13 = (Object *)&UNK_?;
  CellCursor::CellCursor_set_Active(pCVar12,1,(MethodInfo *)0x0);
  in_stack_14 = (selectedCube->fields).iLocalPos.z;
  uVar15 = (selectedCube->fields).iLocalPos.x;
  switch((selectedCube->fields).pickedFace) {
  case 0:
    unaff_EDI = (Object *)0x1;
    break;
  case 1:
    unaff_EDI = (Object *)0xffffffff;
    break;
  case 2:
    x = 0;
    unaff_EDI = (Object *)0x0;
    material = (CubePickingInfo *)0xffffffff;
    uStack_16 = (Il2CppMethodPointer)((uint)uStack_16._2_2_ << 0x10);
    goto code_?;
  case 3:
    x = 0;
    unaff_EDI = (Object *)0x0;
    uStack_16 = (Il2CppMethodPointer)((uint)uStack_16._2_2_ << 0x10);
    material = (CubePickingInfo *)0x1;
    goto code_?;
  case 4:
    uStack_16 = (Il2CppMethodPointer)((uint)uStack_16._2_2_ << 0x10);
    x = -1;
    unaff_EDI = (Object *)0x0;
    goto code_?;
  case 5:
    unaff_EDI = (Object *)0x0;
    uStack_16 = (Il2CppMethodPointer)((uint)uStack_16._2_2_ << 0x10);
    x = 1;
    goto code_?;
  default:
    unaff_EDI = (Object *)0x0;
  }
  x = 0;
  uStack_16 = (Il2CppMethodPointer)((uint)uStack_16._2_2_ << 0x10);
code_?:
  material = (CubePickingInfo *)0x0;
code_?:
  pIStack_17 = (Il2CppMethodPointer)0x0;
  method_00 = (MethodInfo *)0x0;
  in_stack_6 = (MethodInfo *)&pIStack_17;
  in_stack_10 = &UNK_?;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)in_stack_6,x,(int32_t)unaff_EDI,(int32_t)material,(MethodInfo *)0x0
            );
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    pIStack_18 = TypeInfo__MV__WorldObject__IntVector;
    func_?();
  }
  IVar19.z = uVar15;
  IVar19._0_4_ = &stack0xffffffe8;
  i2.y = in_stack_20;
  i2.x = in_stack_14;
  i2.z = (int16_t)pIStack_17;
  IVar19 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                     (IVar19,i2,(MethodInfo *)CONCAT22(uVar1,(undefined2)uStack_16));
  unaff_EBX = IVar19._0_4_;
  pIStack_17 = unaff_EBX->methodPointer;
  in_stack_14 = *(int16_t *)&unaff_EBX->virtualMethodPointer;
  bVar8 = (POPCOUNT((uint)targetCubeModel & 0xff) & 1U) == 0;
  if (targetCubeModel != (MVCubeModelBase *)0x0) {
    pCVar12 = (this->fields).sprayCursor;
    pIStack_18 = (IntVector__Class *)(targetCubeModel->fields)._.gameObject;
    bVar8 = (POPCOUNT((uint)pCVar12 & 0xff) & 1U) == 0;
    if (pCVar12 != (CellCursor *)0x0) {
      this_01 = CellCursor::CellCursor_GetCellCursor
                          (pCVar12,*(IntVector *)unaff_EBX,(MethodInfo *)0x0);
      bVar8 = (POPCOUNT((uint)this_01 & 0xff) & 1U) == 0;
      if (this_01 != (CellCursorCubeLineMesh *)0x0) {
        position.z = in_stack_14;
        position._0_4_ = pIStack_17;
        CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                  (this_01,position,(GameObject *)pIStack_18,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        bVar8 = (POPCOUNT((uint)pGVar7 & 0xff) & 1U) == 0;
        if (pGVar7 != (GameEventManager *)0x0) {
          pGVar9 = (pGVar7->fields).AvatarCommandsBuildMode;
          bVar8 = (POPCOUNT((uint)pGVar9 & 0xff) & 1U) == 0;
          if (pGVar9 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
            this_00 = (pGVar9->fields).LaserCommands;
            bVar8 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
            if (this_00 !=
                (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0) {
              GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
              GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                        (this_00,(selectedCube->fields).point,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  bVar21 = 0;
  uVar22 = func_?();
  if (bVar8) {
    bVar23 = (byte)uVar22;
    bVar24 = *extraout_ECX;
    bVar25 = *extraout_ECX + bVar23;
    bVar8 = CARRY1(*extraout_ECX,bVar23) || CARRY1(bVar25,bVar21);
    *extraout_ECX = bVar25 + bVar21;
    if ((SCARRY1(bVar24,bVar23) != SCARRY1(bVar25,bVar21)) != (char)*extraout_ECX < '\0') {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                (unaff_EDI,(ExceptionArgument__Enum)material,method_00);
      goto code_?;
    }
    cVar26 = *(char *)&unaff_ESI->klass;
    bVar21 = *(char *)&unaff_ESI->klass + bVar23;
    bVar27 = CARRY1(*(byte *)&unaff_ESI->klass,bVar23) || CARRY1(bVar21,bVar8);
    *(byte *)&unaff_ESI->klass = bVar21 + bVar8;
    bVar24 = (byte)((uint6)uVar22 >> 0x28);
    if ((SCARRY1(cVar26,bVar23) != SCARRY1(bVar21,bVar8)) == *(char *)&unaff_ESI->klass < '\0') {
      bVar25 = (byte)((uint6)uVar22 >> 0x20);
      cVar26 = *(char *)&unaff_ESI->klass;
      bVar21 = *(char *)&unaff_ESI->klass + bVar25;
      bVar8 = CARRY1(*(byte *)&unaff_ESI->klass,bVar25) || CARRY1(bVar21,bVar27);
      *(byte *)&unaff_ESI->klass = bVar21 + bVar27;
      if ((SCARRY1(cVar26,bVar25) != SCARRY1(bVar21,bVar27)) != *(char *)&unaff_ESI->klass < '\0')
      goto code_?;
      bVar25 = (byte)((uint6)uVar22 >> 8);
      cVar26 = *(char *)&unaff_ESI->klass;
      bVar21 = *(char *)&unaff_ESI->klass + bVar25;
      bVar27 = CARRY1(*(byte *)&unaff_ESI->klass,bVar25) || CARRY1(bVar21,bVar8);
      *(byte *)&unaff_ESI->klass = bVar21 + bVar8;
      uVar28 = (int)uVar22;
      if ((SCARRY1(cVar26,bVar25) != SCARRY1(bVar21,bVar8)) == *(char *)&unaff_ESI->klass < '\0') {
        bVar21 = *(byte *)&unaff_ESI->klass;
        cVar26 = *(char *)&unaff_ESI->klass;
        bVar25 = *(char *)&unaff_ESI->klass + bVar24;
        *(byte *)&unaff_ESI->klass = bVar25 + bVar27;
        if ((SCARRY1(cVar26,bVar24) != SCARRY1(bVar25,bVar27)) == *(char *)&unaff_ESI->klass < '\0')
        {
          pcVar29 = (code *)swi(3);
          (*pcVar29)();
          return;
        }
        if (extraout_ECX == (byte *)0x1 ||
            (byte)(bVar23 + 0x68 + (CARRY1(bVar21,bVar24) || CARRY1(bVar25,bVar27))) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto code_?;
      }
    }
    else {
      unaff_EBX[0x148002e].token = unaff_EBX[0x148002e].token + 1;
      puVar30 = (undefined4 *)&stack0xffffffd8;
      puVar4 = &stack0xffffffd8;
      cVar26 = '\x10';
      do {
        puVar3 = puVar3 + -1;
        puVar30 = puVar30 + -1;
        *puVar30 = *puVar3;
        cVar26 = cVar26 + -1;
        uVar28 = uRam_?;
      } while ('\0' < cVar26);
    }
code_?:
    uRam_? = uVar28;
    func_?();
    cRam_? = '\x01';
    puVar5 = puVar4;
  }
  else {
    pcVar29 = (code *)swi(0xcc);
    (*pcVar29)();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (in_stack_13,(ExceptionArgument__Enum)in_stack_10,in_stack_6);
code_?:
    puVar4 = &stack0xfffffffc;
    uVar28 = uRam_?;
    if (cRam_? == '\0') goto code_?;
  }
  pPVar31 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar31 == (PrefabPool *)0x0) {
    func_?();
    pcVar29 = (code *)swi(3);
    (*pcVar29)();
    return;
  }
  material = (CubePickingInfo *)(pPVar31->fields).cellCursorMaterial;
  this = (SprayCursor *)func_?();
  in_stack_32 = (MethodInfo *)0x0;
  in_stack_33 = *(Vector3__Array **)(puVar5 + 0xc);
  method_00 = (MethodInfo *)0x3f800000;
  unaff_EDI = (Object *)0x3cf5c28f;
code_?:
  CellCursor::CellCursor__ctor
            ((CellCursor *)this,1,(float)unaff_EDI,(Material *)material,(float)method_00,
             in_stack_33,in_stack_32);
  unaff_EBX->invoker_method = (InvokerMethod)this;
  func_?();
  return;
}


/* SprayCursor(Vector3[]) */

void Assembly-CSharp.dll::SprayCursor::SprayCursor__ctor
               (SprayCursor *this,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CellCursor);
    cRam_? = '\x01';
  }
  (this->fields).addCubeLaserOnTime = 0.2;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
    (this->fields).sprayCursor = this_00;
    func_?(&this->fields,this_00);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

