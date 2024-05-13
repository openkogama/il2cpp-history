
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


/* Byte[] Dequeue(RuntimePrototypeCubeModel) */

Byte__Array *
Assembly-CSharp.dll::DeltaCubes::DeltaCubes_Dequeue
          (DeltaCubes *this,RuntimePrototypeCubeModel *rpcm,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)unaff_EDI >> 0x10);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Key__
                   );
    func_?(0x9528);
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
    KVar2 = mscorlib.dll::System::Collections::Generic::Queue`1[KeyValuePair`2[MV::WorldObject::
            IntVector,System::ByteEnum]]::
            Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum__Dequeue
                      (this_00,
                       MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Dequeue__
                      );
    iStack_3 = KVar2.key.z;
    uStack_4 = KVar2._6_2_;
    this_01 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor(this_01,(MethodInfo *)0x0);
    switch(uStack_4 & 0xff) {
    case 0:
      if (this_01 != (BytePacker *)0x0) {
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write
                  (this_01,KVar2.value,(MethodInfo *)0x0);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
                  (this_01,KVar2.key.x,(MethodInfo *)0x0);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
                  (this_01,KVar2.key.y,(MethodInfo *)0x0);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_4
                  (this_01,iStack_3,(MethodInfo *)0x0);
        pBVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                           (this_01,(MethodInfo *)0x0);
        return pBVar5;
      }
      break;
    default:
      return (Byte__Array *)0x0;
    case 2:
    case 3:
    case 4:
      if (rpcm != (RuntimePrototypeCubeModel *)0x0) {
        cubePos = KVar2.key;
        pCVar6 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                           (rpcm,cubePos,(MethodInfo *)0x0);
        if (pCVar6 != (Cube *)0x0) {
          pVVar7 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                             ((CubeBase *)pCVar6,(MethodInfo *)0x0);
          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Cube);
          }
          bVar8 = Cube::Cube_IsLegal(pVVar7,(MethodInfo *)0x0);
          if (bVar8 == 0) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Illegal_cube_detected_in_delta_c,(MethodInfo *)0x0);
            return (Byte__Array *)0x0;
          }
          pCVar6 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                             (rpcm,cubePos,(MethodInfo *)0x0);
          if (pCVar6 != (Cube *)0x0) {
            pVVar7 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                               ((CubeBase *)pCVar6,(MethodInfo *)0x0);
            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__Cube);
            }
            bVar8 = Cube::Cube_IsCollapsed(pVVar7,(MethodInfo *)0x0);
            if (bVar8 != 0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_IsCollapsed__cube_detected_in_de,(MethodInfo *)0x0)
              ;
              return (Byte__Array *)0x0;
            }
            if (this_01 != (BytePacker *)0x0) {
              MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write
                        (this_01,KVar2.value,(MethodInfo *)0x0);
              pCVar6 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                                 (rpcm,cubePos,(MethodInfo *)0x0);
              if (pCVar6 != (Cube *)0x0) {
                pBVar5 = (pCVar6->fields)._.byteCorners;
                pCVar6 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                                   (rpcm,cubePos,(MethodInfo *)0x0);
                if (pCVar6 != (Cube *)0x0) {
                  materials = (pCVar6->fields)._.faceMaterials;
                  if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor ==
                      0) {
                    func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
                  }
                  MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                  CubeDataPacker_WriteCompressedCube
                            (this_01,KVar2.key.x,KVar2.key.y,iStack_3,pBVar5,materials,
                             (MethodInfo *)0x0);
                  pBVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                                     (this_01,(MethodInfo *)0x0);
                  return pBVar5;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pBVar5 = (Byte__Array *)(*pcVar9)(CONCAT22(uVar1,in_ES));
  return pBVar5;
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
  (this->fields).cubeChange = this_00;
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
    func_?(0xfe3c);
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
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).cubeChange = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (cubeChangeOriginal !=
      (IEnumerable_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0) {
    piStack_6 = (int *)func_?();
    uStack_1 = 1;
    while (piStack_6 != (int *)0x0) {
      cVar7 = func_?();
      if (cVar7 == '\0') {
        uStack_1 = 0xffffffff;
        if (piStack_6 != (int *)0x0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      uStack_8._4_4_ = piStack_6;
      if (piStack_6 == (int *)0x0) break;
      iStack_9 = *piStack_6;
      uVar10 = 0;
      if (*(ushort *)(iStack_9 + 0xb6) != 0) {
        do {
          if (*(IEnumerator_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction___Class
                **)(*(int *)(iStack_9 + 0x58) + (uint)uVar10 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
             ) {
            puVar11 = (undefined4 *)
                     (*piStack_6 +
                     (*(int *)(*(int *)(*piStack_6 + 0x58) + 4 + (uint)uVar10 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(iStack_9 + 0xb6));
      }
      puVar11 = (undefined4 *)func_?();
code_?:
      uVar12 = (*(code *)*puVar11)();
      BStack_13 = CONCAT31(BStack_13._1_3_,(char)((ulonglong)uVar12 >> 0x30));
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__KeyValuePair_MV__WorldObject__IntVector__MV__WorldObject__CubeAction_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Enqueue_System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_
                       );
        cRam_? = '\x01';
      }
      uStack_8._0_2_ = 0;
      uStack_8._2_2_ = 0;
      uStack_8._4_2_ = 0;
      uStack_8._6_1_ = 0;
      uStack_8._7_1_ = 0;
      this_00 = (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)
                (this->fields).cubeChange;
      mscorlib.dll::System::Collections::Generic::KeyValuePair`2[MV::WorldObject::IntVector,System::
      ByteEnum]::KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum___ctor
                ((KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)&uStack_8,
                 SUB86(uVar12,0),BStack_13,
                 MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__KeyValuePair_MV__WorldObject__IntVector__MV__WorldObject__CubeAction_
                );
      if (this_00 == (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Queue`1[KeyValuePair`2[MV::WorldObject::
      IntVector,System::ByteEnum]]::
      Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum__Enqueue
                (this_00,uStack_8,
                 MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Enqueue_System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_
                );
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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

