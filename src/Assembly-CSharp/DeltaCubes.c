
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?();
    func_?(0xbf08);
    func_?(0x6c);
    func_?(200);
    func_?(0x24f0);
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
    KVar1 = mscorlib.dll::System::Collections::Generic::Queue`1[KeyValuePair`2[MV::WorldObject::
            IntVector,System::ByteEnum]]::
            Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum__Dequeue
                      (this_00,
                       MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Dequeue__
                      );
    uStack_2 = KVar1._6_2_;
    unaff_ESI = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    if (unaff_ESI != (BytePacker *)0x0) {
      MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor(unaff_ESI,(MethodInfo *)0x0);
      switch(uStack_2 & 0xff) {
      case 0:
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write
                  (unaff_ESI,KVar1.value,(MethodInfo *)0x0);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_5
                  (unaff_ESI,KVar1.key.x,(MethodInfo *)0x0);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_5
                  (unaff_ESI,KVar1.key.y,(MethodInfo *)0x0);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write_5
                  (unaff_ESI,KVar1.key.z,(MethodInfo *)0x0);
        pBVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                           (unaff_ESI,(MethodInfo *)0x0);
        return pBVar3;
      default:
        return (Byte__Array *)0x0;
      case 2:
      case 3:
      case 4:
        goto code_?;
      }
    }
  }
  goto code_?;
code_?:
  if (rpcm != (RuntimePrototypeCubeModel *)0x0) {
    cubePos = KVar1.key;
    pCVar4 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                       (rpcm,cubePos,(MethodInfo *)0x0);
    if (pCVar4 != (Cube *)0x0) {
      pVVar5 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                         ((CubeBase *)pCVar4,(MethodInfo *)0x0);
      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Cube);
      }
      bVar6 = Cube::Cube_IsLegal(pVVar5,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_Illegal_cube_detected_in_delta_c,(MethodInfo *)0x0);
        return (Byte__Array *)0x0;
      }
      pCVar4 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                         (rpcm,cubePos,(MethodInfo *)0x0);
      if (pCVar4 != (Cube *)0x0) {
        pVVar5 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                           ((CubeBase *)pCVar4,(MethodInfo *)0x0);
        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Cube);
        }
        bVar6 = Cube::Cube_IsCollapsed(pVVar5,(MethodInfo *)0x0);
        if (bVar6 != 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_IsCollapsed__cube_detected_in_de,(MethodInfo *)0x0);
          return (Byte__Array *)0x0;
        }
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_Write
                  (unaff_ESI,KVar1.value,(MethodInfo *)0x0);
        pCVar4 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                           (rpcm,cubePos,(MethodInfo *)0x0);
        if (pCVar4 != (Cube *)0x0) {
          pBVar3 = (pCVar4->fields)._.byteCorners;
          pCVar4 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                             (rpcm,cubePos,(MethodInfo *)0x0);
          if (pCVar4 != (Cube *)0x0) {
            materials = (pCVar4->fields)._.faceMaterials;
            if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
            }
            MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_WriteCompressedCube
                      (unaff_ESI,KVar1.key.x,KVar1.key.y,KVar1.key.z,pBVar3,materials,
                       (MethodInfo *)0x0);
            pBVar3 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ToArray
                               (unaff_ESI,(MethodInfo *)0x0);
            return pBVar3;
          }
        }
      }
    }
  }
code_?:
  func_?();
  puVar7 = (undefined1 *)((int)&unaff_ESI[1].klass + extraout_EDX * 2);
  *puVar7 = *puVar7;
  pcVar8 = (code *)swi(3);
  pBVar3 = (Byte__Array *)(*pcVar8)();
  return pBVar3;
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
  if (this_00 != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0)
  {
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
    Stack_1_System_Object___ctor
              ((Stack_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Queue__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).cubeChange = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Key__
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__get_Value__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Queue__
                   );
    func_?(0x158c);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_01 = (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                           );
  if (this_01 != (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0)
  {
    mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
    Stack_1_System_Object___ctor
              ((Stack_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Queue__
              );
    (this->fields).cubeChange = this_01;
    func_?(&this->fields,this_01);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_6);
    if (cubeChangeOriginal !=
        (IEnumerable_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)0x0) {
      piStack_7 = (int *)func_?(0,
                                          TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                                          ,cubeChangeOriginal);
      uStack_1 = 1;
      while (piStack_7 != (int *)0x0) {
        cVar8 = func_?(0,TypeInfo__System__Collections__IEnumerator,piStack_7);
        if (cVar8 == '\0') {
          uStack_1 = 0xffffffff;
          if (piStack_7 != (int *)0x0) {
            func_?(0,TypeInfo__System__IDisposable,piStack_7);
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        uStack_9._4_4_ = piStack_7;
        if (piStack_7 == (int *)0x0) break;
        iStack_10 = *piStack_7;
        uVar11 = 0;
        if (*(ushort *)(iStack_10 + 0xb2) != 0) {
          do {
            if (*(IEnumerator_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction___Class
                  **)(*(int *)(iStack_10 + 0x58) + (uint)uVar11 * 8) ==
                TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
               ) {
              puVar12 = (undefined4 *)
                       (*(int *)(*(int *)(iStack_10 + 0x58) + 4 + (uint)uVar11 * 8) * 8 + 0xbc +
                       iStack_10);
              goto code_?;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(ushort *)(iStack_10 + 0xb2));
        }
        puVar12 = (undefined4 *)
                 func_?(piStack_7,
                                 TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>
                                 ,0);
code_?:
        uVar13 = (*(code *)*puVar12)(uStack_9._4_4_,puVar12[1]);
        BStack_14 = CONCAT31(BStack_14._1_3_,(char)((ulonglong)uVar13 >> 0x30));
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__KeyValuePair_MV__WorldObject__IntVector__MV__WorldObject__CubeAction_
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Enqueue_System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_
                         );
          cRam_? = '\x01';
        }
        uStack_9._0_2_ = 0;
        uStack_9._2_2_ = 0;
        uStack_9._4_2_ = 0;
        uStack_9._6_1_ = 0;
        uStack_9._7_1_ = 0;
        this_00 = (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)
                  (this->fields).cubeChange;
        mscorlib.dll::System::Collections::Generic::KeyValuePair`2[MV::WorldObject::IntVector,System
        ::ByteEnum]::KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum___ctor
                  ((KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)&uStack_9,
                   SUB86(uVar13,0),BStack_14,
                   MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>__KeyValuePair_MV__WorldObject__IntVector__MV__WorldObject__CubeAction_
                  );
        if (this_00 == (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum_ *)0x0)
        break;
        mscorlib.dll::System::Collections::Generic::Queue`1[KeyValuePair`2[MV::WorldObject::
        IntVector,System::ByteEnum]]::
        Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_System_ByteEnum__Enqueue
                  (this_00,uStack_9,
                   MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__Enqueue_System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_
                  );
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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

