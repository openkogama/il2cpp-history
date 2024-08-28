
/* Void Clear() */

void Assembly-CSharp.dll::DeltaCubes::DeltaCubes_Clear(DeltaCubes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_GameCoinStringRenderer_PriceTagString_ *)(this->fields).cubeChange;
  if (this_00 != (Queue_1_GameCoinStringRenderer_PriceTagString_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Queue`1[GameCoinStringRenderer+PriceTagString]::
    Queue_1_GameCoinStringRenderer_PriceTagString__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Clear__
              );
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Byte[] Dequeue(RuntimePrototypeCubeModel) */

Byte__Array *
Assembly-CSharp.dll::DeltaCubes::DeltaCubes_Dequeue
          (DeltaCubes *this,RuntimePrototypeCubeModel *rpcm,MethodInfo *method)

{
  puVar1 = &stack0xfffffffc;
  pQVar2 = unaff_ESI;
  uVar3 = unaff_EBX;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Key__
                   );
    func_?(0x68);
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Dequeue__
                   );
    func_?(&StringLiteral_IsCollapsed__cube_detected_in_de);
    func_?(&StringLiteral_Illegal_cube_detected_in_delta_c);
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)
            (this->fields).cubeChange;
  if (this_00 != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)0x0) {
    KVar4 = mscorlib.dll::System::Collections::Generic::Queue`1[KeyValuePair`2[MV::WorldObject::
             IntVector,System::ByteEnum]]::
             Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum__Dequeue
                       (this_00,
                        MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Dequeue__
                       );
    unaff_EBX = KVar4._4_4_;
    z = KVar4.key.z;
    in_stack_5 = KVar4._6_2_;
    in_stack_6 = z;
    unaff_ESI = (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)
                func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor
              ((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
    switch(in_stack_5 & 0xff) {
    case 0:
      if (unaff_ESI != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)0x0) {
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write
                  ((BytePacker *)unaff_ESI,(uint8_t)in_stack_5,(MethodInfo *)0x0);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
                  ((BytePacker *)unaff_ESI,KVar4.key.x,(MethodInfo *)0x0);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
                  ((BytePacker *)unaff_ESI,KVar4.key.y,(MethodInfo *)0x0);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
                  ((BytePacker *)unaff_ESI,z,(MethodInfo *)0x0);
        pBVar7 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                           ((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
        return pBVar7;
      }
      break;
    default:
      return (Byte__Array *)0x0;
    case 2:
    case 3:
    case 4:
      if (rpcm != (RuntimePrototypeCubeModel *)0x0) {
        IVar8 = KVar4.key;
        pCVar9 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                           (rpcm,IVar8,(MethodInfo *)0x0);
        if (pCVar9 != (Cube *)0x0) {
          pVVar10 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                             ((CubeBase *)pCVar9,(MethodInfo *)0x0);
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Cube);
          }
          bVar11 = Cube::Cube_IsLegal(pVVar10,(MethodInfo *)0x0);
          if (bVar11 == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Illegal_cube_detected_in_delta_c,(MethodInfo *)0x0);
            return (Byte__Array *)0x0;
          }
          pCVar9 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                             (rpcm,IVar8,(MethodInfo *)0x0);
          if (pCVar9 != (Cube *)0x0) {
            pVVar10 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                               ((CubeBase *)pCVar9,(MethodInfo *)0x0);
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Cube);
            }
            bVar11 = Cube::Cube_IsCollapsed(pVVar10,(MethodInfo *)0x0);
            if (bVar11 != 0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_IsCollapsed__cube_detected_in_de,(MethodInfo *)0x0)
              ;
              return (Byte__Array *)0x0;
            }
            if (unaff_ESI != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)0x0
               ) {
              MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write
                        ((BytePacker *)unaff_ESI,(uint8_t)in_stack_5,(MethodInfo *)0x0);
              pCVar9 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                                 (rpcm,IVar8,(MethodInfo *)0x0);
              if (pCVar9 != (Cube *)0x0) {
                pBVar7 = (pCVar9->fields)._.byteCorners;
                pCVar9 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                                   (rpcm,IVar8,(MethodInfo *)0x0);
                if (pCVar9 != (Cube *)0x0) {
                  materials = (pCVar9->fields)._.faceMaterials;
                  if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor ==
                      0) {
                    func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
                  }
                  MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                  CubeDataPacker_WriteCompressedCube
                            ((BytePacker *)unaff_ESI,KVar4.key.x,KVar4.key.y,z,pBVar7,materials,
                             (MethodInfo *)0x0);
                  pBVar7 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                                     ((BytePacker *)unaff_ESI,(MethodInfo *)0x0);
                  return pBVar7;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar12 = 0;
  func_?();
  iVar13 = CONCAT22((short)((uint)extraout_ECX >> 0x10),CONCAT11(0x76,(char)extraout_ECX));
  bVar14 = (byte)((uint)unaff_EBX >> 8);
  bVar15 = CARRY1(in_stack_16,bVar14) || CARRY1(in_stack_16 + bVar14,bVar12);
  bVar17 = CARRY1(extraout_DH,extraout_DH) || CARRY1(extraout_DH * '\x02',bVar15);
  bVar14 = extraout_DH * '\x02' + bVar15;
  if (bVar17 || bVar14 == 0) {
    puVar18 = (uint *)((int)&unaff_ESI[-4].fields._array + 3);
    uVar19 = *puVar18;
    *puVar18 = (uint)(&stack0xffffffe4 + *puVar18);
    pcVar20 = (char *)((int)&unaff_ESI[-4].fields._array + 1);
    *pcVar20 = *pcVar20 + (char)((uint)pQVar2 >> 8) + CARRY4(uVar19,(uint)&stack0xffffffe4);
    iVar13 = iVar13 + 1;
    method._0_2_ = (undefined2)CONCAT31((int3)((uint)pQVar2 >> 8),((byte)pQVar2 | 0x89) + 0x8d);
    puVar1 = &stack0xffffffff;
  }
  else {
    bVar15 = CARRY1(bVar14,bVar14) || CARRY1(bVar14 * '\x02',bVar17);
    bVar14 = bVar14 * '\x02' + bVar17;
    if (bVar15 || bVar14 == 0) {
    }
    else {
      puVar1 = &stack0xfffffffc;
      method._0_2_ = (short)pQVar2;
      if ((!CARRY1(bVar14,bVar14) && !CARRY1(bVar14 * '\x02',bVar15)) &&
          (byte)(bVar14 * '\x02' + bVar15) != '\0') {
        pcVar21 = (code *)swi(3);
        pBVar7 = (Byte__Array *)(*pcVar21)();
        return pBVar7;
      }
    }
  }
  *(undefined2 *)(iVar13 + 4) = method._0_2_;
  IVar8.z = in_stack_22;
  IVar8.x = (short)uVar3;
  IVar8.y = (short)((uint)uVar3 >> 0x10);
  mscorlib.dll::System::Collections::Generic::KeyValuePair`2[MV::WorldObject::IntVector,System::
  ByteEnum]::KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum___ctor
            ((KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)(puVar1 + -8),IVar8,
             CONCAT22(in_stack_5,in_stack_6),
             (MethodInfo *)CONCAT22(in_stack_23,in_stack_24));
  if (unaff_ESI == (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)0x0) {
    func_?();
    pcVar21 = (code *)swi(3);
    pBVar7 = (Byte__Array *)(*pcVar21)();
    return pBVar7;
  }
  mscorlib.dll::System::Collections::Generic::Queue`1[KeyValuePair`2[MV::WorldObject::
  IntVector,System::ByteEnum]]::
  Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum__Enqueue
            (unaff_ESI,*(KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)(puVar1 + -8),
             MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Enqueue_System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_
            );
  return extraout_EAX;
}


/* Void Enqueue(IntVector, CubeAction) */

void Assembly-CSharp.dll::DeltaCubes::DeltaCubes_Enqueue
               (DeltaCubes *this,IntVector iVector,CubeAction__Enum cubeAction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__KeyValuePair_MV__WorldObject__IntVector__MV__WorldObject__CubeAction_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Enqueue_System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_
                   );
    cRam_? = '\x01';
  }
  uVar1._0_2_ = 0;
  uVar1._2_2_ = 0;
  uVar2._0_2_ = 0;
  uVar2._2_1_ = 0;
  uVar2._3_1_ = 0;
  this_00 = (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)
            (this->fields).cubeChange;
  mscorlib.dll::System::Collections::Generic::KeyValuePair`2[MV::WorldObject::IntVector,System::
  ByteEnum]::KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum___ctor
            ((KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)&stack0xfffffff4,iVector,
             cubeAction,
             MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__KeyValuePair_MV__WorldObject__IntVector__MV__WorldObject__CubeAction_
            );
  if (this_00 != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)0x0) {
    item.key.z = (int16_t)uVar2;
    item.value = SUB41(uVar2,2);
    item._7_1_ = SUB41(uVar2,3);
    item.key.x = (int16_t)uVar1;
    item.key.y = SUB42(uVar1,2);
    mscorlib.dll::System::Collections::Generic::Queue`1[KeyValuePair`2[MV::WorldObject::
    IntVector,System::ByteEnum]]::
    Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum__Enqueue
              (this_00,item,
               MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Enqueue_System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_
              );
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* DeltaCubes() */

void Assembly-CSharp.dll::DeltaCubes::DeltaCubes__ctor(DeltaCubes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Queue__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                           );
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
            ((Stack_1_System_Int32_ *)this_00,
             MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Queue__
            );
  method_00 = (MethodInfo *)&this->fields;
  ((DeltaCubes__Fields *)method_00)->cubeChange = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* DeltaCubes(IEnumerable`1[KeyValuePair`2[MV.WorldObject.IntVector,MV.WorldObject.CubeAction]]) */

void Assembly-CSharp.dll::DeltaCubes::DeltaCubes__ctor_1
               (DeltaCubes *this,
               IEnumerable_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_
               *cubeChangeOriginal,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                   );
    func_?(0x5c5c);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Queue__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_01 = (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                           );
  mscorlib.dll::System::Collections::Generic::Stack`1[System::Int32]::Stack_1_System_Int32___ctor
            ((Stack_1_System_Int32_ *)this_01,
             MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Queue__
            );
  pDVar6 = &this->fields;
  pDVar6->cubeChange = this_01;
  method_00 = (MethodInfo *)pDVar6;
  func_?(pDVar6,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (cubeChangeOriginal !=
      (IEnumerable_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0) {
    piStack_7 = (int *)func_?();
    uStack_1 = 1;
    while (piStack_7 != (int *)0x0) {
      cVar8 = func_?();
      if (cVar8 == '\0') {
        uStack_1 = 0xffffffff;
        if (piStack_7 != (int *)0x0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (piStack_7 == (int *)0x0) break;
      iVar9 = *piStack_7;
      uVar10 = 0;
      uStack_11 = 0;
      uVar12 = *(ushort *)(iVar9 + 0xb6);
      KStack_13.key.z = uVar12;
      KStack_13._6_2_ = 0;
      if (uVar12 != 0) {
        do {
          if (*(IEnumerator_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction___Class
                **)(*(int *)(iVar9 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
             ) {
            puVar14 = (undefined4 *)
                     (iVar9 + (*(int *)(*(int *)(iVar9 + 0x58) + 4 + (uint)uVar10 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar12);
      }
      puVar14 = (undefined4 *)func_?();
code_?:
      uVar15 = (*(code *)*puVar14)();
      BStack_16 = CONCAT31(BStack_16._1_3_,(char)((ulonglong)uVar15 >> 0x30));
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__KeyValuePair_MV__WorldObject__IntVector__MV__WorldObject__CubeAction_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Enqueue_System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_
                       );
        cRam_? = '\x01';
      }
      KStack_13.key.x = 0;
      KStack_13.key.y = 0;
      KStack_13.key.z = 0;
      KStack_13.value = 0;
      KStack_13._7_1_ = 0;
      this_00 = (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)
                pDVar6->cubeChange;
      mscorlib.dll::System::Collections::Generic::KeyValuePair`2[MV::WorldObject::IntVector,System::
      ByteEnum]::KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum___ctor
                (&KStack_13,SUB86(uVar15,0),BStack_16,
                 MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__KeyValuePair_MV__WorldObject__IntVector__MV__WorldObject__CubeAction_
                );
      if (this_00 == (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Queue`1[KeyValuePair`2[MV::WorldObject::
      IntVector,System::ByteEnum]]::
      Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum__Enqueue
                (this_00,KStack_13,
                 MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Enqueue_System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_
                );
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::DeltaCubes::DeltaCubes_get_Count(DeltaCubes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &
                 MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__get_Count__
    ;
    func_?();
    cRam_? = '\x01';
  }
  pQVar2 = (this->fields).cubeChange;
  if (pQVar2 != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0) {
    return (pQVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

