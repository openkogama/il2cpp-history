
/* Void AddCube(IntVector, Byte[], Dictionary`2[MV.WorldObject.IntVector,System.Byte[]] ByRef) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_AddCube
               (IntVector pos,Byte__Array *cubeData,
               Dictionary_2_MV_WorldObject_IntVector_System_Byte_ **cubeDict,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(0x8f2c);
    func_?(0x8fdc);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__set_Item_MV__WorldObject__IntVector__System__Byte____
                   );
    cRam_? = '\x01';
  }
  iVar1 = 0;
  if ((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)*cubeDict !=
      (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    sVar2 = pos.x;
    iVar3 = pos.y;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                        *)*cubeDict,pos,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar4 == 0) goto code_?;
    if (*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) {
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,System::Object]::
               Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                         ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)*cubeDict,pos,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                         );
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        iVar1 = -0x61c6;
        func_?();
      }
      if ((pOVar5 != (Object *)0x0) && (cubeData != (Byte__Array *)0x0)) {
        if (pOVar5[1].monitor == (MonitorData *)cubeData->max_length) {
          pMVar6 = (MonitorData *)0x1;
          while( true ) {
            if ((int)pOVar5[1].monitor <= (int)pMVar6) {
              return;
            }
            if ((pOVar5[1].monitor <= pMVar6) || ((MonitorData *)cubeData->max_length <= pMVar6))
            break;
            if ((cubeData->vector + ((int)pOVar5 - (int)cubeData))[(int)pMVar6] !=
                cubeData->vector[(int)pMVar6]) goto code_?;
            pMVar6 = pMVar6 + 1;
          }
          goto code_?;
        }
code_?:
        if ((*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) &&
           (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                     IntVector,System::Object]::
                     Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                               ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)*cubeDict,
                                pos,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                               ), pOVar5 != (Object *)0x0)) {
          if (pOVar5[1].monitor == (MonitorData *)0x0) goto code_?;
          bVar7 = *(byte *)&pOVar5[2].klass;
          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
            func_?((short)TypeInfo__MV__WorldObject__CubeDataPacker);
          }
          bVar7 = bVar7 >> 2;
          if (1 < bVar7) {
            if ((*cubeDict == (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) ||
               (key_00.y = iVar3, key_00.x = sVar2 + 1, key_00.z = pos.z,
               pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                        IntVector,System::Object]::
                        Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                  ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)*cubeDict
                                   ,key_00,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                                  ), pOVar5 == (Object *)0x0)) goto code_?;
            if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
              func_?((short)TypeInfo__MV__WorldObject__CubeDataPacker);
            }
            if (pOVar5[1].monitor == (MonitorData *)0x0) goto code_?;
            *(byte *)&pOVar5[2].klass = *(byte *)&pOVar5[2].klass & 3;
            *(byte *)&pOVar5[2].klass = *(byte *)&pOVar5[2].klass | bVar7 * '\x04' - 4;
          }
code_?:
          if (*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__set_Item
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)*cubeDict,pos,
                       (Object *)cubeData,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__set_Item_MV__WorldObject__IntVector__System__Byte____
                      );
            if ((*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) &&
               (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                         IntVector,System::Object]::
                         Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                   ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)
                                    *cubeDict,pos,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                                   ), pOVar5 != (Object *)0x0)) {
              if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              if (pOVar5[1].monitor == (MonitorData *)0x0) goto code_?;
              *(byte *)&pOVar5[2].klass = *(byte *)&pOVar5[2].klass & 3;
              *(byte *)&pOVar5[2].klass = *(byte *)&pOVar5[2].klass | 4;
              bVar4 = CubeDataPacker_GetCubeOriginal
                                (pos,1,cubeDict,(IntVector *)&stack0xffffffec,(MethodInfo *)0x0);
              if (bVar4 == 0) {
code_?:
                if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0)
                {
                  func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
                }
code_?:
                pos_01.z = pos.z;
                pos_01.x = pos.x;
                pos_01.y = pos.y;
                CubeDataPacker_CombineRows(pos_01,cubeDict,(MethodInfo *)0x0);
                return;
              }
              if (*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) {
                key_03.z = iVar1;
                key_03._0_4_ = 
                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                ;
                pMVar8 = 
                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                ;
                pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                         IntVector,System::Object]::
                         Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                   ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)
                                    *cubeDict,key_03,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                                   );
                if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0)
                {
                  func_?();
                }
                if ((cubeData != (Byte__Array *)0x0) && (pOVar5 != (Object *)0x0)) {
                  if ((MonitorData *)cubeData->max_length == pOVar5[1].monitor) {
                    for (pMVar6 = (MonitorData *)0x1; (int)pMVar6 < (int)cubeData->max_length;
                        pMVar6 = pMVar6 + 1) {
                      if (((MonitorData *)cubeData->max_length <= pMVar6) ||
                         (pOVar5[1].monitor <= pMVar6)) goto code_?;
                      if (pMVar6[(int)(pOVar5 + 2) + ((int)cubeData - (int)pOVar5)] !=
                          pMVar6[(int)&pOVar5[2].klass]) goto code_?;
                    }
                    bVar9 = true;
                  }
                  else {
code_?:
                    bVar9 = false;
                  }
                  if ((*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) &&
                     (key_01.z = iVar1, key_01._0_4_ = pMVar8,
                     pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::
                              WorldObject::IntVector,System::Object]::
                              Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)
                                         *cubeDict,key_01,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                                        ), pOVar5 != (Object *)0x0)) {
                    if (pOVar5[1].monitor == (MonitorData *)0x0) goto code_?;
                    uVar10 = (uint)(*(byte *)&pOVar5[2].klass >> 2);
                    pCStack_11 = (CubeDataPacker__Class *)((int)sVar2 - (int)(short)pMVar8);
                    if ((bVar9) || ((int)uVar10 <= (int)pCStack_11)) goto code_?;
                    iVar12 = (uVar10 - (int)pCStack_11) + -1;
                    if ((*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) &&
                       (key_02.z = iVar1, key_02._0_4_ = pMVar8,
                       pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::
                                WorldObject::IntVector,System::Object]::
                                Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)
                                           *cubeDict,key_02,
                                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                                          ), pOVar5 != (Object *)0x0)) {
                      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor
                          == 0) {
                        pCStack_11 = TypeInfo__MV__WorldObject__CubeDataPacker;
                        iVar1 = -0x5e94;
                        func_?();
                      }
                      if (pOVar5[1].monitor == (MonitorData *)0x0) goto code_?;
                      *(byte *)&pOVar5[2].klass = *(byte *)&pOVar5[2].klass & 3;
                      *(byte *)&pOVar5[2].klass = *(byte *)&pOVar5[2].klass | (char)pCStack_11 << 2;
                      pos_00.z = iVar1;
                      pos_00._0_4_ = pMVar8;
                      CubeDataPacker_CombineRows(pos_00,cubeDict,(MethodInfo *)0x0);
                      if (iVar12 < 1) {
                        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?((short)TypeInfo__MV__WorldObject__CubeDataPacker);
                        }
                        goto code_?;
                      }
                      sVar2 = sVar2 + 1;
                      if ((*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0)
                         && (key.y = iVar3, key.x = sVar2, key.z = pos.z,
                            pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::
                                     WorldObject::IntVector,System::Object]::
                                     Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                               ((Dictionary_2_MV_WorldObject_IntVector_System_Object_
                                                 *)*cubeDict,key,
                                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                                               ), pOVar5 != (Object *)0x0)) {
                        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                            cctor_finished_or_no_cctor == 0) {
                          func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
                        }
                        if (pOVar5[1].monitor == (MonitorData *)0x0) goto code_?;
                        *(byte *)&pOVar5[2].klass = *(byte *)&pOVar5[2].klass & 3;
                        pos.y = iVar3;
                        pos.x = sVar2;
                        *(byte *)&pOVar5[2].klass = *(byte *)&pOVar5[2].klass | (char)iVar12 << 2;
                        goto code_?;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Boolean AreCubesEqual(Byte[], Byte[]) */

bool MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_AreCubesEqual
               (Byte__Array *cube0,Byte__Array *cube1,MethodInfo *method)

{
  if ((cube0 == (Byte__Array *)0x0) || (cube1 == (Byte__Array *)0x0)) {
    func_?();
  }
  else {
    if (cube0->max_length != cube1->max_length) {
      return 0;
    }
    uVar1 = 1;
    while( true ) {
      if ((int)cube0->max_length <= (int)uVar1) {
        return 1;
      }
      if ((cube0->max_length <= uVar1) || (cube1->max_length <= uVar1)) break;
      if (cube0->vector[uVar1] != cube1->vector[uVar1]) {
        return 0;
      }
      uVar1 = uVar1 + 1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Vector3[] ByteArrayToCorners(Byte[]) */

Vector3__Array *
MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteArrayToCorners
          (Byte__Array *byteArray,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
  pVVar2 = pVVar1->vector;
  if ((pVVar1 == (Vector3__Array *)0x0) || (uVar3 = 0, byteArray == (Byte__Array *)0x0)) {
code_?:
    func_?();
  }
  else {
    while (uVar3 < byteArray->max_length) {
      bVar4 = byteArray->vector[uVar3];
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
        cRam_? = '\x01';
      }
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      pVVar5 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->bytePositionLookUpTable;
      if (pVVar5 == (Vector3__Array *)0x0) goto code_?;
      uVar6 = (uint)bVar4;
      if (pVVar5->max_length <= uVar6) break;
      fVar7 = pVVar5->vector[uVar6].y;
      fVar8 = pVVar5->vector[uVar6].z;
      if (pVVar1->max_length <= uVar3) break;
      pVVar2->x = pVVar5->vector[uVar6].x;
      pVVar2->y = fVar7;
      uVar3 = uVar3 + 1;
      pVVar2->z = fVar8;
      pVVar2 = pVVar2 + 1;
      if (7 < (int)uVar3) {
        return pVVar1;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar9)();
  return pVVar1;
}


/* Void ByteArrayToCorners(Byte[] ByRef, Vector3[] ByRef) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteArrayToCorners_1
               (Byte__Array **byteArray,Vector3__Array **corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  iStack_2 = 0;
  while ((pBVar3 = *byteArray, pBVar3 != (Byte__Array *)0x0 &&
         (pVVar4 = *corners, pVVar4 != (Vector3__Array *)0x0))) {
    if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    if ((pVVar4->max_length <= uVar1) || (pBVar3->max_length <= uVar1)) goto code_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      cRam_? = '\x01';
    }
    if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    pVVar5 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->bytePositionLookUpTable;
    if (pVVar5 == (Vector3__Array *)0x0) break;
    uVar6 = (uint)pBVar3->vector[uVar1];
    if (pVVar5->max_length <= uVar6) goto code_?;
    uVar1 = uVar1 + 1;
    fVar7 = pVVar5->vector[uVar6].z;
    iVar8 = iStack_2 + 0xc;
    *(undefined8 *)((int)&pVVar4->vector[0].x + iStack_2) = *(undefined8 *)(pVVar5->vector + uVar6);
    *(float *)((int)&pVVar4->vector[0].z + iStack_2) = fVar7;
    iStack_2 = iVar8;
    if (0x5f < iVar8) {
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Vector3 ByteToVector3(Byte) */

Vector3 * MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteToVector3
                    (Vector3 *__return_storage_ptr__,uint8_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CubeDataPacker__Class *)&TypeInfo__MV__WorldObject__CubeDataPacker;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__MV__WorldObject__CubeDataPacker;
    func_?();
  }
  pVVar2 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->bytePositionLookUpTable;
  if (pVVar2 != (Vector3__Array *)0x0) {
    uVar3 = (uint)key;
    if (uVar3 < pVVar2->max_length) {
      fVar4 = pVVar2->vector[uVar3].y;
      fVar5 = pVVar2->vector[uVar3].z;
      __return_storage_ptr__->x = pVVar2->vector[uVar3].x;
      __return_storage_ptr__->y = fVar4;
      __return_storage_ptr__->z = fVar5;
      return __return_storage_ptr__;
    }
    pCStack_1 = (CubeDataPacker__Class *)0x0;
    puStack_6 = (undefined *)func_?();
    func_?();
    pcVar7 = (code *)swi(3);
    pVVar8 = (Vector3 *)(*pcVar7)();
    return pVVar8;
  }
  pCStack_1 = (CubeDataPacker__Class *)&stack0xfffffffc;
  uVar9 = func_?(&puStack_10);
  func_?(uVar9);
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
}


/* Void ByteToVector3(Byte ByRef, Vector3 ByRef) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteToVector3_1
               (uint8_t *key,Vector3 *vector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pCStack_1 = (CubeDataPacker__Class *)&TypeInfo__MV__WorldObject__CubeDataPacker;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
    pCStack_1 = TypeInfo__MV__WorldObject__CubeDataPacker;
    func_?();
  }
  pVVar2 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->bytePositionLookUpTable;
  if (pVVar2 != (Vector3__Array *)0x0) {
    uVar3 = (uint)*key;
    if (uVar3 < pVVar2->max_length) {
      fVar4 = pVVar2->vector[uVar3].y;
      fVar5 = pVVar2->vector[uVar3].z;
      vector->x = pVVar2->vector[uVar3].x;
      vector->y = fVar4;
      vector->z = fVar5;
      return;
    }
    pCStack_1 = (CubeDataPacker__Class *)0x0;
    puStack_6 = (undefined *)func_?();
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pCStack_1 = (CubeDataPacker__Class *)&stack0xfffffffc;
  uVar8 = func_?(&puStack_9);
  func_?(uVar8);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CombineRows(IntVector, Dictionary`2[MV.WorldObject.IntVector,System.Byte[]] ByRef) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_CombineRows
               (IntVector pos,Dictionary_2_MV_WorldObject_IntVector_System_Byte_ **cubeDict,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(0x8fdc);
    cRam_? = '\x01';
  }
  pCVar1 = (CubeDataPacker__Class *)0x0;
  uStack_2._0_2_ = 0;
  uStack_2._2_2_ = 0;
  uStack_2._4_4_ = (undefined *)((uint)uStack_2._6_2_ << 0x10);
  if ((*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) &&
     (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,System::Object]::
               Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                         ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)*cubeDict,pos,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                         ), pOVar3 != (Object *)0x0)) {
    if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
    bVar4 = *(byte *)&pOVar3[2].klass;
    if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
      pCVar1 = TypeInfo__MV__WorldObject__CubeDataPacker;
      func_?();
    }
    uStack_5 = (uint)(bVar4 >> 2);
    bVar6 = CubeDataPacker_GetCubeOriginal
                      (pos,1,cubeDict,(IntVector *)&stack0xffffffdc,(MethodInfo *)0x0);
    bStack_7 = CubeDataPacker_GetCubeOriginal
                         (pos,0,cubeDict,(IntVector *)&uStack_2,(MethodInfo *)0x0);
    cStack_8 = '\0';
    if (bVar6 == 0) {
code_?:
      if (bStack_7 == 0) {
        return;
      }
      if (*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) {
        key_02.z = uStack_2._4_2_;
        key_02.x = (int16_t)uStack_2;
        key_02.y = uStack_2._2_2_;
        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 IntVector,System::Object]::
                 Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                           ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)*cubeDict,key_02
                            ,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                           );
        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
          pCVar1 = TypeInfo__MV__WorldObject__CubeDataPacker;
          func_?();
        }
        if (pOVar9 != (Object *)0x0) {
          pMStack_10 = pOVar3[1].monitor;
          if (pMStack_10 != pOVar9[1].monitor) {
            return;
          }
          pCStack_11 = (CubeDataPacker__Class *)pOVar9[1].monitor;
          for (pCVar12 = (CubeDataPacker__Class *)0x1; (int)pCVar12 < (int)pMStack_10;
              pCVar12 = (CubeDataPacker__Class *)((int)&(pCVar12->_0).image + 1)) {
            if (((CubeDataPacker__Class *)pOVar3[1].monitor <= pCVar12) || (pCStack_11 <= pCVar12))
            goto code_?;
            if (*(char *)((int)(pOVar9 + 2) + ((int)pOVar3 - (int)pOVar9) + (int)pCVar12) !=
                *(char *)((int)&(pCVar12->_0).image + (int)&pOVar9[2].klass)) {
              return;
            }
          }
          this = *cubeDict;
          if (cStack_8 == '\0') {
            if (this != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) {
              key_03.z = uStack_2._4_2_;
              key_03.x = (int16_t)uStack_2;
              key_03.y = uStack_2._2_2_;
              pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                       IntVector,System::Object]::
                       Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                 ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this,
                                  key_03,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                                 );
              if (pOVar3 != (Object *)0x0) {
                if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
                bVar4 = *(byte *)&pOVar3[2].klass;
                if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0)
                {
                  func_?();
                }
                bVar4 = bVar4 >> 2;
                if (TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->rowMaxLength <
                    (int)(uStack_5 + bVar4)) {
                  return;
                }
                if ((*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) &&
                   (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::
                             WorldObject::IntVector,System::Object]::
                             Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                       ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)
                                        *cubeDict,pos,
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                                       ), pOVar3 != (Object *)0x0)) {
                  if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor ==
                      0) {
                    func_?();
                  }
                  if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
                  *(byte *)&pOVar3[2].klass = *(byte *)&pOVar3[2].klass & 3;
                  cVar13 = bVar4 + (char)uStack_5;
code_?:
                  *(byte *)&pOVar3[2].klass = *(byte *)&pOVar3[2].klass | cVar13 << 2;
                  if (*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) {
                    key_04.z = uStack_2._4_2_;
                    key_04.x = (int16_t)uStack_2;
                    key_04.y = uStack_2._2_2_;
                    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::
                             WorldObject::IntVector,System::Object]::
                             Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                       ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)
                                        *cubeDict,key_04,
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                                       );
                    if (pOVar3 != (Object *)0x0) {
                      if (pOVar3[1].monitor != (MonitorData *)0x0) {
                        *(byte *)&pOVar3[2].klass = *(byte *)&pOVar3[2].klass & 3;
                        return;
                      }
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
          else if ((this != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) &&
                  (key_05.z = 0, key_05._0_4_ = pCVar1,
                  pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject
                           ::IntVector,System::Object]::
                           Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                     ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this,
                                      key_05,
                                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                                     ), pOVar3 != (Object *)0x0)) {
            if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
            bVar4 = *(byte *)&pOVar3[2].klass;
            if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            bVar4 = bVar4 >> 2;
            if (*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) {
              key_06.z = uStack_2._4_2_;
              key_06.x = (int16_t)uStack_2;
              key_06.y = uStack_2._2_2_;
              pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                       IntVector,System::Object]::
                       Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                 ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)*cubeDict,
                                  key_06,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                                 );
              if (pOVar3 != (Object *)0x0) {
                if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
                bVar14 = *(byte *)&pOVar3[2].klass >> 2;
                if (TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->rowMaxLength <
                    (int)((uint)bVar14 + (uint)bVar4)) {
                  return;
                }
                if ((*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) &&
                   (key_07.z = 0,
                   key_07._0_4_ = 
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                   , pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::
                              WorldObject::IntVector,System::Object]::
                              Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                        ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)
                                         *cubeDict,key_07,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                                        ), pOVar3 != (Object *)0x0)) {
                  if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor ==
                      0) {
                    pCStack_11 = TypeInfo__MV__WorldObject__CubeDataPacker;
                    uStack_2._4_4_ = &UNK_?;
                    func_?();
                  }
                  if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
                  *(byte *)&pOVar3[2].klass = *(byte *)&pOVar3[2].klass & 3;
                  cVar13 = bVar4 + bVar14;
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
    else if (*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) {
      key.z = 0;
      key._0_4_ = pCVar1;
      pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,System::Object]::
               Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                         ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)*cubeDict,key,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                         );
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      if (pOVar9 != (Object *)0x0) {
        if (pOVar3[1].monitor != pOVar9[1].monitor) goto code_?;
        pMStack_10 = pOVar9[1].monitor;
        for (pMVar15 = (MonitorData *)0x1; (int)pMVar15 < (int)pOVar3[1].monitor; pMVar15 = pMVar15 + 1)
        {
          if ((pOVar3[1].monitor <= pMVar15) || (pMStack_10 <= pMVar15)) goto code_?;
          if (pMVar15[(int)&pOVar3[2].klass] !=
              pMVar15[(int)pOVar3 + (int)pOVar9 + (0x10 - (int)pOVar3)]) goto code_?;
        }
        if ((*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) &&
           (key_00.z = 0, key_00._0_4_ = pCVar1,
           pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                    IntVector,System::Object]::
                    Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                              ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)*cubeDict,
                               key_00,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                              ), pOVar9 != (Object *)0x0)) {
          if (pOVar9[1].monitor == (MonitorData *)0x0) goto code_?;
          bVar4 = *(byte *)&pOVar9[2].klass;
          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
            pCVar1 = TypeInfo__MV__WorldObject__CubeDataPacker;
            func_?();
          }
          pMStack_10 = (MonitorData *)(uint)(bVar4 >> 2);
          if (TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->rowMaxLength <
              (int)(pMStack_10 + uStack_5)) goto code_?;
          if ((*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) &&
             (key_01.z = 0, key_01._0_4_ = pCVar1,
             pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                      IntVector,System::Object]::
                      Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)*cubeDict,
                                 key_01,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                                ), pOVar9 != (Object *)0x0)) {
            if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
              pCVar1 = TypeInfo__MV__WorldObject__CubeDataPacker;
              func_?();
            }
            if (pOVar9[1].monitor == (MonitorData *)0x0) goto code_?;
            *(byte *)&pOVar9[2].klass = *(byte *)&pOVar9[2].klass & 3;
            *(byte *)&pOVar9[2].klass =
                 *(byte *)&pOVar9[2].klass | ((char)uStack_5 + (char)pMStack_10) * '\x04';
            if ((*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) &&
               (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                         IntVector,System::Object]::
                         Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                   ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)
                                    *cubeDict,pos,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                                   ), pOVar9 != (Object *)0x0)) {
              if (pOVar9[1].monitor == (MonitorData *)0x0) goto code_?;
              *(byte *)&pOVar9[2].klass = *(byte *)&pOVar9[2].klass & 3;
              cStack_8 = '\x01';
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Byte[] CornersToByteArray(Vector3[]) */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_CornersToByteArray
          (Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    cRam_? = '\x01';
  }
  VStack_1.z = (float)func_?(TypeInfo__System__Byte,8);
  pVVar2 = corners->vector;
  uVar3 = 0;
  if (corners == (Vector3__Array *)0x0) {
code_?:
    func_?();
code_?:
    uVar4 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    this_00 = (IndexOutOfRangeException *)func_?(uVar4);
    func_?(this_00);
    method_00 = (MethodInfo *)0x0;
    pSVar5 = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (this_00,pSVar5,method_00);
    uVar4 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
    func_?(this_00,uVar4);
  }
  else {
    while (uVar3 < corners->max_length) {
      VStack_1.x = pVVar2->x;
      VStack_1.y = pVVar2->y;
      pSVar5 = (String *)pVVar2->z;
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      VStack_6._0_8_ = VStack_1._0_8_;
      VStack_6.z = (float)pSVar5;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__ContainsKey_UnityEngine__Vector3_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__get_Item_UnityEngine__Vector3_
                       );
        cRam_? = '\x01';
      }
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      this = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
             TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable;
      if (this == (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                   *)0x0) goto code_?;
      key._pattern = pSVar5;
      key._options = (int32_t)VStack_1.x;
      key._cultureKey = (String *)VStack_1.y;
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
              RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__ContainsKey
                        (this,key,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__ContainsKey_UnityEngine__Vector3_
                        );
      if (bVar7 == 0) {
        index = 0;
        do {
          if (index == 0) {
            pSVar5 = (String *)VStack_6.x;
          }
          else if (index == 1) {
            pSVar5 = (String *)VStack_6.y;
          }
          else {
            pSVar5 = (String *)VStack_6.z;
            if (index != 2) goto code_?;
          }
          if ((float)pSVar5 == 0.0) {
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                      (&VStack_6,index,0.0,(MethodInfo *)0x0);
          }
          index = index + 1;
        } while (index < 3);
        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
        }
        this_01 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable;
        if (this_01 == (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)0x0) goto code_?;
        fVar8 = VStack_6.x;
        fVar9 = VStack_6.y;
        pSVar5 = (String *)VStack_6.z;
      }
      else {
        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
          VStack_6.y = (float)TypeInfo__MV__WorldObject__CubeDataPacker;
          VStack_6.x = (float)&UNK_?;
          func_?();
        }
        this_01 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable;
        if (this_01 == (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)0x0) goto code_?;
        fVar8 = VStack_1.x;
        fVar9 = VStack_1.y;
      }
      key_00.y = fVar9;
      key_00.x = fVar8;
      key_00.z = (float)pSVar5;
      uVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::
              Byte]::Dictionary_2_UnityEngine_Vector3_System_Byte__get_Item
                        (this_01,key_00,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__get_Item_UnityEngine__Vector3_
                        );
      if ((Byte__Array *)VStack_1.z == (Byte__Array *)0x0) goto code_?;
      if (*(il2cpp_array_size_t *)((int)VStack_1.z + 0xc) <= uVar3) break;
      ((uint8_t *)((int)VStack_1.z + 0x10))[uVar3] = uVar10;
      pVVar2 = pVVar2 + 1;
      uVar3 = uVar3 + 1;
      if (7 < (int)uVar3) {
        return (Byte__Array *)VStack_1.z;
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pBVar12 = (Byte__Array *)(*pcVar11)();
  return pBVar12;
}


/* Void GetCompressionFlags(Byte ByRef, Byte[], Byte[]) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_GetCompressionFlags
               (uint8_t *compressionFlags,Byte__Array *byteCorners,Byte__Array *materials,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  pCVar2 = TypeInfo__MV__WorldObject__CubeDataPacker;
  bVar3 = true;
  if (byteCorners == (Byte__Array *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  while (bVar5 = bVar3, (int)uVar1 < (int)byteCorners->max_length) {
    if (byteCorners->max_length <= uVar1) goto code_?;
    uVar6 = byteCorners->vector[uVar1];
    if ((pCVar2->_1).cctor_finished_or_no_cctor == 0) {
      func_?(pCVar2);
      pCVar2 = TypeInfo__MV__WorldObject__CubeDataPacker;
    }
    pBVar7 = pCVar2->static_fields->IdentityByteCorners;
    if (pBVar7 == (Byte__Array *)0x0) goto code_?;
    if (pBVar7->max_length <= uVar1) goto code_?;
    uVar8 = uVar1 + 1;
    puVar9 = pBVar7->vector + uVar1;
    uVar1 = uVar8;
    bVar3 = false;
    if (uVar6 == *puVar9) {
      bVar3 = bVar5;
    }
  }
  uVar1 = 0;
  bVar3 = true;
  do {
    if (0 < (int)uVar1) {
      if (materials == (Byte__Array *)0x0) goto code_?;
      if ((materials->max_length <= uVar1 - 1) || (materials->max_length <= uVar1))
      goto code_?;
      if (materials->vector[uVar1 - 1] != materials->vector[uVar1]) {
        bVar3 = false;
      }
    }
    uVar1 = uVar1 + 1;
    if (5 < (int)uVar1) {
      if (bVar5) {
        *compressionFlags = *compressionFlags | 1;
      }
      if (bVar3) {
        *compressionFlags = *compressionFlags | 2;
      }
      return;
    }
  } while( true );
}


/* Byte[] GetCubeByteData(IntVector, Dictionary`2[MV.WorldObject.IntVector,System.Byte[]] ByRef) */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_GetCubeByteData
          (IntVector pos,Dictionary_2_MV_WorldObject_IntVector_System_Byte_ **cubeDict,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(0x8f2c);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                   );
    cRam_? = '\x01';
  }
  this = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)*cubeDict;
  do {
    if (this == (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0)
    {
code_?:
      func_?();
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      pBVar2 = (Byte__Array *)(*pcVar1)();
      return pBVar2;
    }
    key_01.y = pos.y;
    key_01.x = pos.x;
    key.z = pos.z;
    key.x = pos.x;
    key.y = pos.y;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                      (this,key,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar3 == 0) {
      return (Byte__Array *)0x0;
    }
    if ((*cubeDict == (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) ||
       (key_01.z = pos.z,
       pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                IntVector,System::Object]::
                Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                          ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)*cubeDict,key_01,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                          ), pOVar4 == (Object *)0x0)) goto code_?;
    if (pOVar4[1].monitor == (MonitorData *)0x0) goto code_?;
    bVar5 = *(byte *)&pOVar4[2].klass;
    if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
      pos.z = -0x5081;
      in_stack_6 = 0x10a0;
      func_?();
    }
    this = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)*cubeDict
    ;
    if (3 < bVar5) {
      if (this != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
                  0x0) {
        key_00.y = pos.y;
        key_00.x = pos.x;
        key_00.z = pos.z;
        pBVar2 = (Byte__Array *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 IntVector,System::Object]::
                 Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                           ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this,key_00,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                           );
        return pBVar2;
      }
      goto code_?;
    }
    pos.x = pos.x + -1;
  } while( true );
}


/* Boolean GetCubeOriginal(IntVector, Boolean, Dictionary`2[MV.WorldObject.IntVector,System.Byte[]]
   ByRef, IntVector ByRef) */

bool MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_GetCubeOriginal
               (IntVector pos,bool left,
               Dictionary_2_MV_WorldObject_IntVector_System_Byte_ **cubeDict,IntVector *targetCube,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(0x8f2c);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                   );
    cRam_? = '\x01';
  }
  sVar1 = (ushort)(left ^ 1) * 2 + -1;
  sVar2 = pos.x + sVar1;
  uVar3 = CONCAT22(pos.y,sVar2);
  targetCube->x = sVar2;
  targetCube->y = pos.y;
  targetCube->z = pos.z;
  this = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)*cubeDict;
  while (this != (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0
        ) {
    key.z = pos.z;
    key.x = (short)uVar3;
    key.y = (short)((uint)uVar3 >> 0x10);
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                      (this,key,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar4 == 0) {
      return 0;
    }
    if ((*cubeDict == (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) ||
       (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                 IntVector,System::Object]::
                 Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                           ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)*cubeDict,
                            *targetCube,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                           ), pOVar5 == (Object *)0x0)) break;
    if (pOVar5[1].monitor == (MonitorData *)0x0) goto code_?;
    bVar6 = *(byte *)&pOVar5[2].klass;
    if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (3 < bVar6) {
      return 1;
    }
    targetCube->x = targetCube->x + sVar1;
    uVar3._0_2_ = targetCube->x;
    uVar3._2_2_ = targetCube->y;
    pos.z = targetCube->z;
    this = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)*cubeDict
    ;
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar4 = (*pcVar7)();
  return bVar4;
}


/* Int32 GetCubesInRow(Byte) */

int32_t MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_GetCubesInRow
                  (uint8_t cubeFlags,MethodInfo *method)

{
  return (uint)(cubeFlags >> 2);
}


/* Int32 GetDataLength(BytePacker) */

int32_t MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_GetDataLength
                  (BytePacker *bp,MethodInfo *method)

{
  if (bp != (BytePacker *)0x0) {
    uVar1 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
    BytePacker::BytePacker_set_Position(bp,(bp->fields)._position + -1,(MethodInfo *)0x0);
    iVar2 = 2;
    if ((uVar1 & 2) == 0) {
      iVar2 = 7;
    }
    return iVar2 + ((byte)~uVar1 & 1) * 8;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
}


/* Void ReadCompressedCube(Byte, BytePacker, Byte[] ByRef, Byte[] ByRef) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ReadCompressedCube
               (uint8_t cubeFlags,BytePacker *bp,Byte__Array **byteCorners,Byte__Array **materials,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    cRam_? = '\x01';
  }
  if ((cubeFlags & 1) == 0) {
    if (bp == (BytePacker *)0x0) goto code_?;
    pBVar1 = BytePacker::BytePacker_ReadBytes(bp,8,(MethodInfo *)0x0);
    *byteCorners = pBVar1;
    func_?(byteCorners,pBVar1);
  }
  else {
    if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    pBVar1 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->IdentityByteCorners;
    *byteCorners = pBVar1;
    func_?(byteCorners,pBVar1);
    if (bp == (BytePacker *)0x0) goto code_?;
  }
  if ((cubeFlags & 2) == 0) {
    pBVar1 = BytePacker::BytePacker_ReadBytes(bp,6,(MethodInfo *)0x0);
    *materials = pBVar1;
    func_?(materials,pBVar1);
    return;
  }
  uVar2 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
  uVar3 = 0;
  while (pBVar1 = *materials, pBVar1 != (Byte__Array *)0x0) {
    if (pBVar1->max_length <= uVar3) goto code_?;
    pBVar1->vector[uVar3] = uVar2;
    uVar3 = uVar3 + 1;
    if (5 < (int)uVar3) {
      return;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RemoveCube(IntVector, Dictionary`2[MV.WorldObject.IntVector,System.Byte[]] ByRef) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_RemoveCube
               (IntVector pos,Dictionary_2_MV_WorldObject_IntVector_System_Byte_ **cubeDict,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(0x8f2c);
    func_?(0x8f84);
    func_?(0x8fdc);
    cRam_? = '\x01';
  }
  if ((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)*cubeDict !=
      (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,ChunkInstances+ChunkInstanceVariables]::
            Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_
                        *)*cubeDict,pos,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar1 == 0) {
      return;
    }
    if ((*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) &&
       (pCVar2 = (CubeDataPacker__Class *)
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
       , pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                  IntVector,System::Object]::
                  Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                            ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)*cubeDict,pos,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                            ), pOVar3 != (Object *)0x0)) {
      if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
      bVar4 = *(byte *)&pOVar3[2].klass;
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this = *cubeDict;
      bVar4 = bVar4 >> 2;
      if (bVar4 < 2) {
        if (this != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System
          ::Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Remove
                    ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this,pos,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__Remove_MV__WorldObject__IntVector_
                    );
          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
            pCVar2 = TypeInfo__MV__WorldObject__CubeDataPacker;
            func_?();
          }
          bVar1 = CubeDataPacker_GetCubeOriginal
                            (pos,1,cubeDict,(IntVector *)&stack0xfffffff0,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            return;
          }
          if ((*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) &&
             (key.z = 0, key._0_4_ = pCVar2,
             pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                      IntVector,System::Object]::
                      Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)*cubeDict,
                                 key,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                                ), pOVar3 != (Object *)0x0)) {
            if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
            bVar4 = *(byte *)&pOVar3[2].klass;
            if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
            }
            uVar5 = (uint)(bVar4 >> 2);
            iVar6 = (int)pos.x - (int)(short)pCVar2;
            if ((int)uVar5 <= iVar6) {
              return;
            }
            iVar7 = (uVar5 - iVar6) + -1;
            if ((*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) &&
               (key_00.z = 0, key_00._0_4_ = pCVar2,
               pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                        IntVector,System::Object]::
                        Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                  ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)*cubeDict
                                   ,key_00,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                                  ), pOVar3 != (Object *)0x0)) {
              if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
                pCVar2 = TypeInfo__MV__WorldObject__CubeDataPacker;
                func_?();
              }
              if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
              *(byte *)&pOVar3[2].klass = *(byte *)&pOVar3[2].klass & 3;
              *(byte *)&pOVar3[2].klass = *(byte *)&pOVar3[2].klass | (char)iVar6 << 2;
              pos_01.z = 0;
              pos_01._0_4_ = pCVar2;
              CubeDataPacker_CombineRows(pos_01,cubeDict,(MethodInfo *)0x0);
              if (iVar7 < 1) {
                return;
              }
              if ((*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) &&
                 (key_02.z = pos.z,
                 key_02._0_4_ = 
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                 , pMVar8 = 
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                 , pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject
                            ::IntVector,System::Object]::
                            Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)
                                       *cubeDict,key_02,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                                      ), pOVar3 != (Object *)0x0)) {
                if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0)
                {
                  func_?();
                }
                pbVar9 = (byte *)func_?(0);
                *pbVar9 = *pbVar9 & 3;
                *pbVar9 = *pbVar9 | (char)iVar7 << 2;
                pos_00.z = pos.z;
                pos_00._0_4_ = pMVar8;
                CubeDataPacker_CombineRows(pos_00,cubeDict,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else {
        sVar10 = pos.x + 1;
        pCVar2 = (CubeDataPacker__Class *)CONCAT22(pos.y,sVar10);
        if ((this != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) &&
           (key_01.y = pos.y, key_01.x = sVar10, key_01.z = pos.z,
           pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
                    IntVector,System::Object]::
                    Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                              ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this,key_01,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__get_Item_MV__WorldObject__IntVector_
                              ), pOVar3 != (Object *)0x0)) {
          if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
            pCVar2 = TypeInfo__MV__WorldObject__CubeDataPacker;
            func_?();
          }
          if (pOVar3[1].monitor == (MonitorData *)0x0) goto code_?;
          *(byte *)&pOVar3[2].klass = *(byte *)&pOVar3[2].klass & 3;
          *(byte *)&pOVar3[2].klass = *(byte *)&pOVar3[2].klass | bVar4 * '\x04' - 4;
          if (*cubeDict != (Dictionary_2_MV_WorldObject_IntVector_System_Byte_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Remove
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)*cubeDict,pos,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_System::Byte_[]>__Remove_MV__WorldObject__IntVector_
                      );
            pos_02.z = pos.z;
            pos_02._0_4_ = pCVar2;
            CubeDataPacker_CombineRows(pos_02,cubeDict,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetCubesInRow(Byte ByRef, Int32) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_SetCubesInRow
               (uint8_t *cubeFlags,int32_t cubesInRow,MethodInfo *method)

{
  *cubeFlags = *cubeFlags & 3;
  *cubeFlags = *cubeFlags | (char)cubesInRow << 2;
  return;
}


/* Byte Vector3ToByte(Vector3) */

uint8_t MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_Vector3ToByte
                  (Vector3 corner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__ContainsKey_UnityEngine__Vector3_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__get_Item_UnityEngine__Vector3_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
  }
  fVar1 = corner.z;
  this = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
         TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable;
  if (this != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )0x0) {
    key._cultureKey = (String *)corner.y;
    key._options = (int32_t)corner.x;
    key._pattern = (String *)corner.z;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__ContainsKey
                      (this,key,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__ContainsKey_UnityEngine__Vector3_
                      );
    if (bVar2 == 0) {
      index = 0;
      do {
        fVar1 = corner.x;
        if (((index != 0) && (fVar1 = corner.y, index != 1)) && (fVar1 = corner.z, index != 2))
        goto code_?;
        if (fVar1 == 0.0) {
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                    (&corner,index,0.0,(MethodInfo *)0x0);
        }
        index = index + 1;
      } while (index < 3);
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      pDVar3 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable;
      if (pDVar3 != (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)0x0) {
        key_01.y = corner.y;
        key_01.x = corner.x;
        key_01.z = corner.z;
        uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System
                ::Byte]::Dictionary_2_UnityEngine_Vector3_System_Byte__get_Item
                          (pDVar3,key_01,
                           MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__get_Item_UnityEngine__Vector3_
                          );
        return uVar4;
      }
    }
    else {
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        corner.y = (float)TypeInfo__MV__WorldObject__CubeDataPacker;
        corner.x = (float)&UNK_?;
        func_?();
      }
      pDVar3 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable;
      if (pDVar3 != (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)0x0) {
        key_00.y = corner.y;
        key_00.x = corner.x;
        key_00.z = fVar1;
        uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System
                ::Byte]::Dictionary_2_UnityEngine_Vector3_System_Byte__get_Item
                          (pDVar3,key_00,
                           MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__get_Item_UnityEngine__Vector3_
                          );
        return uVar4;
      }
    }
  }
  func_?();
code_?:
  uVar5 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this_00 = (IndexOutOfRangeException *)func_?(uVar5);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this_00,message,method_00);
  func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
  func_?(this_00);
  pcVar6 = (code *)swi(3);
  uVar4 = (*pcVar6)();
  return uVar4;
}


/* Void WriteCompressedCube(BytePacker, Int16, Int16, Int16, Byte[], Byte[]) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_WriteCompressedCube
               (BytePacker *bp,int16_t x,int16_t y,int16_t z,Byte__Array *byteCorners,
               Byte__Array *materials,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    cRam_? = '\x01';
  }
  if (bp != (BytePacker *)0x0) {
    BytePacker::BytePacker_Write_5(bp,x,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_5(bp,y,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_5(bp,z,(MethodInfo *)0x0);
    if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    CubeDataPacker_WriteCompressedCubeData
              (bp,(Byte__Array *)0x0,(Byte__Array *)0x0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WriteCompressedCubeData(BytePacker, Byte[], Byte[]) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_WriteCompressedCubeData
               (BytePacker *bp,Byte__Array *byteCorners,Byte__Array *materials,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__MV__WorldObject__CubeDataPacker;
  uVar2 = 0;
  bVar3 = true;
  if (byteCorners != (Byte__Array *)0x0) {
    while (value = bVar3, (int)uVar2 < (int)byteCorners->max_length) {
      if (byteCorners->max_length <= uVar2) goto code_?;
      uVar4 = byteCorners->vector[uVar2];
      if ((pCVar1->_1).cctor_finished_or_no_cctor == 0) {
        func_?(pCVar1);
        pCVar1 = TypeInfo__MV__WorldObject__CubeDataPacker;
      }
      pBVar5 = pCVar1->static_fields->IdentityByteCorners;
      if (pBVar5 == (Byte__Array *)0x0) goto code_?;
      if (pBVar5->max_length <= uVar2) goto code_?;
      uVar6 = uVar2 + 1;
      puVar7 = pBVar5->vector + uVar2;
      uVar2 = uVar6;
      bVar3 = false;
      if (uVar4 == *puVar7) {
        bVar3 = value;
      }
    }
    uVar2 = 0;
    bVar3 = true;
    do {
      if (0 < (int)uVar2) {
        if (materials == (Byte__Array *)0x0) goto code_?;
        if ((materials->max_length <= uVar2 - 1) || (materials->max_length <= uVar2))
        goto code_?;
        if (materials->vector[uVar2 - 1] != materials->vector[uVar2]) {
          bVar3 = false;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 6);
    bVar8 = value;
    if (bVar3) {
      bVar8 = 2;
    }
    if (bp != (BytePacker *)0x0) {
      BytePacker::BytePacker_Write(bp,value,(MethodInfo *)0x0);
      if (!value) {
        BytePacker::BytePacker_Write_2(bp,byteCorners,0,byteCorners->max_length,(MethodInfo *)0x0);
      }
      if (materials != (Byte__Array *)0x0) {
        if ((bVar8 & 2) == 0) {
          BytePacker::BytePacker_Write_2(bp,materials,0,materials->max_length,(MethodInfo *)0x0);
          return;
        }
        if (materials->max_length != 0) {
          BytePacker::BytePacker_Write(bp,materials->vector[0],(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* CubeDataPacker() */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>
                   );
    func_?(&__method0x60003ee_1_Field);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,0x7d);
  if (pVVar1 != (Vector3__Array *)0x0) {
    if (pVVar1->max_length == 0) goto code_?;
    pVVar1->vector[0].x = -0.5;
    pVVar1->vector[0].y = -0.5;
    pVVar1->vector[0].z = -0.5;
    if (pVVar1->max_length < 2) goto code_?;
    pVVar1->vector[1].x = -0.5;
    pVVar1->vector[1].y = -0.5;
    pVVar1->vector[1].z = -0.25;
    if (pVVar1->max_length < 3) goto code_?;
    pVVar1->vector[2].x = -0.5;
    pVVar1->vector[2].y = -0.5;
    pVVar1->vector[2].z = 0.0;
    if (pVVar1->max_length < 4) goto code_?;
    pVVar1->vector[3].x = -0.5;
    pVVar1->vector[3].y = -0.5;
    pVVar1->vector[3].z = 0.25;
    if (pVVar1->max_length < 5) goto code_?;
    pVVar1->vector[4].x = -0.5;
    pVVar1->vector[4].y = -0.5;
    pVVar1->vector[4].z = 0.5;
    if (pVVar1->max_length < 6) goto code_?;
    pVVar1->vector[5].x = -0.5;
    pVVar1->vector[5].y = -0.25;
    pVVar1->vector[5].z = -0.5;
    if (pVVar1->max_length < 7) goto code_?;
    pVVar1->vector[6].x = -0.5;
    pVVar1->vector[6].y = -0.25;
    pVVar1->vector[6].z = -0.25;
    if (pVVar1->max_length < 8) goto code_?;
    pVVar1->vector[7].x = -0.5;
    pVVar1->vector[7].y = -0.25;
    pVVar1->vector[7].z = 0.0;
    if (pVVar1->max_length < 9) goto code_?;
    pVVar1->vector[8].x = -0.5;
    pVVar1->vector[8].y = -0.25;
    pVVar1->vector[8].z = 0.25;
    if (pVVar1->max_length < 10) goto code_?;
    pVVar1->vector[9].x = -0.5;
    pVVar1->vector[9].y = -0.25;
    pVVar1->vector[9].z = 0.5;
    if (pVVar1->max_length < 0xb) goto code_?;
    pVVar1->vector[10].x = -0.5;
    pVVar1->vector[10].y = 0.0;
    pVVar1->vector[10].z = -0.5;
    if (pVVar1->max_length < 0xc) goto code_?;
    pVVar1->vector[0xb].x = -0.5;
    pVVar1->vector[0xb].y = 0.0;
    pVVar1->vector[0xb].z = -0.25;
    if (pVVar1->max_length < 0xd) goto code_?;
    pVVar1->vector[0xc].x = -0.5;
    pVVar1->vector[0xc].y = 0.0;
    pVVar1->vector[0xc].z = 0.0;
    if (pVVar1->max_length < 0xe) goto code_?;
    pVVar1->vector[0xd].x = -0.5;
    pVVar1->vector[0xd].y = 0.0;
    pVVar1->vector[0xd].z = 0.25;
    if (pVVar1->max_length < 0xf) goto code_?;
    pVVar1->vector[0xe].x = -0.5;
    pVVar1->vector[0xe].y = 0.0;
    pVVar1->vector[0xe].z = 0.5;
    if (pVVar1->max_length < 0x10) goto code_?;
    pVVar1->vector[0xf].x = -0.5;
    pVVar1->vector[0xf].y = 0.25;
    pVVar1->vector[0xf].z = -0.5;
    if (pVVar1->max_length < 0x11) goto code_?;
    pVVar1->vector[0x10].x = -0.5;
    pVVar1->vector[0x10].y = 0.25;
    pVVar1->vector[0x10].z = -0.25;
    if (pVVar1->max_length < 0x12) goto code_?;
    pVVar1->vector[0x11].x = -0.5;
    pVVar1->vector[0x11].y = 0.25;
    pVVar1->vector[0x11].z = 0.0;
    if (pVVar1->max_length < 0x13) goto code_?;
    pVVar1->vector[0x12].x = -0.5;
    pVVar1->vector[0x12].y = 0.25;
    pVVar1->vector[0x12].z = 0.25;
    if (pVVar1->max_length < 0x14) goto code_?;
    pVVar1->vector[0x13].x = -0.5;
    pVVar1->vector[0x13].y = 0.25;
    pVVar1->vector[0x13].z = 0.5;
    if (pVVar1->max_length < 0x15) goto code_?;
    pVVar1->vector[0x14].x = -0.5;
    pVVar1->vector[0x14].y = 0.5;
    pVVar1->vector[0x14].z = -0.5;
    if (pVVar1->max_length < 0x16) goto code_?;
    pVVar1->vector[0x15].x = -0.5;
    pVVar1->vector[0x15].y = 0.5;
    pVVar1->vector[0x15].z = -0.25;
    if (pVVar1->max_length < 0x17) goto code_?;
    pVVar1->vector[0x16].x = -0.5;
    pVVar1->vector[0x16].y = 0.5;
    pVVar1->vector[0x16].z = 0.0;
    if (pVVar1->max_length < 0x18) goto code_?;
    pVVar1->vector[0x17].x = -0.5;
    pVVar1->vector[0x17].y = 0.5;
    pVVar1->vector[0x17].z = 0.25;
    if (pVVar1->max_length < 0x19) goto code_?;
    pVVar1->vector[0x18].x = -0.5;
    pVVar1->vector[0x18].y = 0.5;
    pVVar1->vector[0x18].z = 0.5;
    if (pVVar1->max_length < 0x1a) goto code_?;
    pVVar1->vector[0x19].x = -0.25;
    pVVar1->vector[0x19].y = -0.5;
    pVVar1->vector[0x19].z = -0.5;
    if (pVVar1->max_length < 0x1b) goto code_?;
    pVVar1->vector[0x1a].x = -0.25;
    pVVar1->vector[0x1a].y = -0.5;
    pVVar1->vector[0x1a].z = -0.25;
    if (pVVar1->max_length < 0x1c) goto code_?;
    pVVar1->vector[0x1b].x = -0.25;
    pVVar1->vector[0x1b].y = -0.5;
    pVVar1->vector[0x1b].z = 0.0;
    if (pVVar1->max_length < 0x1d) goto code_?;
    pVVar1->vector[0x1c].x = -0.25;
    pVVar1->vector[0x1c].y = -0.5;
    pVVar1->vector[0x1c].z = 0.25;
    if (pVVar1->max_length < 0x1e) goto code_?;
    pVVar1->vector[0x1d].x = -0.25;
    pVVar1->vector[0x1d].y = -0.5;
    pVVar1->vector[0x1d].z = 0.5;
    if (pVVar1->max_length < 0x1f) goto code_?;
    pVVar1->vector[0x1e].x = -0.25;
    pVVar1->vector[0x1e].y = -0.25;
    pVVar1->vector[0x1e].z = -0.5;
    if (pVVar1->max_length < 0x20) goto code_?;
    pVVar1->vector[0x1f].x = -0.25;
    pVVar1->vector[0x1f].y = -0.25;
    pVVar1->vector[0x1f].z = -0.25;
    if (pVVar1->max_length < 0x21) goto code_?;
    pVVar1[1].klass = (Vector3__Array__Class *)0xbe800000;
    pVVar1[1].monitor = (MonitorData *)0xbe800000;
    pVVar1[1].bounds = (Il2CppArrayBounds *)0x0;
    if (pVVar1->max_length < 0x22) goto code_?;
    pVVar1[1].max_length = 0xbe800000;
    pVVar1[1].vector[0].x = -0.25;
    pVVar1[1].vector[0].y = 0.25;
    if (pVVar1->max_length < 0x23) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0].z = 0xbe800000be800000;
    pVVar1[1].vector[1].y = 0.5;
    if (pVVar1->max_length < 0x24) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[1].z = 0xbe800000;
    pVVar1[1].vector[2].y = -0.5;
    if (pVVar1->max_length < 0x25) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[2].z = 0xbe800000;
    pVVar1[1].vector[3].y = -0.25;
    if (pVVar1->max_length < 0x26) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[3].z = 0xbe800000;
    pVVar1[1].vector[4].y = 0.0;
    if (pVVar1->max_length < 0x27) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[4].z = 0xbe800000;
    pVVar1[1].vector[5].y = 0.25;
    if (pVVar1->max_length < 0x28) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[5].z = 0xbe800000;
    pVVar1[1].vector[6].y = 0.5;
    if (pVVar1->max_length < 0x29) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[6].z = 0x3e800000be800000;
    pVVar1[1].vector[7].y = -0.5;
    if (pVVar1->max_length < 0x2a) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[7].z = 0x3e800000be800000;
    pVVar1[1].vector[8].y = -0.25;
    if (pVVar1->max_length < 0x2b) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[8].z = 0x3e800000be800000;
    pVVar1[1].vector[9].y = 0.0;
    if (pVVar1->max_length < 0x2c) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[9].z = 0x3e800000be800000;
    pVVar1[1].vector[10].y = 0.25;
    if (pVVar1->max_length < 0x2d) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[10].z = 0x3e800000be800000;
    pVVar1[1].vector[0xb].y = 0.5;
    if (pVVar1->max_length < 0x2e) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0xb].z = 0x3f000000be800000;
    pVVar1[1].vector[0xc].y = -0.5;
    if (pVVar1->max_length < 0x2f) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0xc].z = 0x3f000000be800000;
    pVVar1[1].vector[0xd].y = -0.25;
    if (pVVar1->max_length < 0x30) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0xd].z = 0x3f000000be800000;
    pVVar1[1].vector[0xe].y = 0.0;
    if (pVVar1->max_length < 0x31) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0xe].z = 0x3f000000be800000;
    pVVar1[1].vector[0xf].y = 0.25;
    if (pVVar1->max_length < 0x32) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0xf].z = 0x3f000000be800000;
    pVVar1[1].vector[0x10].y = 0.5;
    if (pVVar1->max_length < 0x33) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x10].z = 0xbf00000000000000;
    pVVar1[1].vector[0x11].y = -0.5;
    if (pVVar1->max_length < 0x34) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x11].z = 0xbf00000000000000;
    pVVar1[1].vector[0x12].y = -0.25;
    if (pVVar1->max_length < 0x35) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x12].z = 0xbf00000000000000;
    pVVar1[1].vector[0x13].y = 0.0;
    if (pVVar1->max_length < 0x36) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x13].z = 0xbf00000000000000;
    pVVar1[1].vector[0x14].y = 0.25;
    if (pVVar1->max_length < 0x37) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x14].z = 0xbf00000000000000;
    pVVar1[1].vector[0x15].y = 0.5;
    if (pVVar1->max_length < 0x38) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x15].z = 0xbe80000000000000;
    pVVar1[1].vector[0x16].y = -0.5;
    if (pVVar1->max_length < 0x39) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x16].z = 0xbe80000000000000;
    pVVar1[1].vector[0x17].y = -0.25;
    if (pVVar1->max_length < 0x3a) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x17].z = 0xbe80000000000000;
    pVVar1[1].vector[0x18].y = 0.0;
    if (pVVar1->max_length < 0x3b) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x18].z = 0xbe80000000000000;
    pVVar1[1].vector[0x19].y = 0.25;
    if (pVVar1->max_length < 0x3c) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x19].z = 0xbe80000000000000;
    pVVar1[1].vector[0x1a].y = 0.5;
    if (pVVar1->max_length < 0x3d) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x1a].z = 0;
    pVVar1[1].vector[0x1b].y = -0.5;
    if (pVVar1->max_length < 0x3e) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x1b].z = 0;
    pVVar1[1].vector[0x1c].y = -0.25;
    if (pVVar1->max_length < 0x3f) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x1c].z = 0;
    pVVar1[1].vector[0x1d].y = 0.0;
    if (pVVar1->max_length < 0x40) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x1d].z = 0;
    pVVar1[1].vector[0x1e].y = 0.25;
    if (pVVar1->max_length < 0x41) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x1e].z = 0;
    pVVar1[1].vector[0x1f].y = 0.5;
    if (pVVar1->max_length < 0x42) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x1f].z = 0x3e80000000000000;
    pVVar1[2].monitor = (MonitorData *)0xbf000000;
    if (pVVar1->max_length < 0x43) goto code_?;
    pVVar1[2].bounds = (Il2CppArrayBounds *)0x0;
    pVVar1[2].max_length = 0x3e800000;
    pVVar1[2].vector[0].x = -0.25;
    if (pVVar1->max_length < 0x44) goto code_?;
    pVVar1[2].vector[0].y = 0.0;
    pVVar1[2].vector[0].z = 0.25;
    pVVar1[2].vector[1].x = 0.0;
    if (pVVar1->max_length < 0x45) goto code_?;
    pVVar1[2].vector[1].y = 0.0;
    pVVar1[2].vector[1].z = 0.25;
    pVVar1[2].vector[2].x = 0.25;
    if (pVVar1->max_length < 0x46) goto code_?;
    pVVar1[2].vector[2].y = 0.0;
    pVVar1[2].vector[2].z = 0.25;
    pVVar1[2].vector[3].x = 0.5;
    if (pVVar1->max_length < 0x47) goto code_?;
    pVVar1[2].vector[3].y = 0.0;
    pVVar1[2].vector[3].z = 0.5;
    pVVar1[2].vector[4].x = -0.5;
    if (pVVar1->max_length < 0x48) goto code_?;
    pVVar1[2].vector[4].y = 0.0;
    pVVar1[2].vector[4].z = 0.5;
    pVVar1[2].vector[5].x = -0.25;
    if (pVVar1->max_length < 0x49) goto code_?;
    pVVar1[2].vector[5].y = 0.0;
    pVVar1[2].vector[5].z = 0.5;
    pVVar1[2].vector[6].x = 0.0;
    if (pVVar1->max_length < 0x4a) goto code_?;
    pVVar1[2].vector[6].y = 0.0;
    pVVar1[2].vector[6].z = 0.5;
    pVVar1[2].vector[7].x = 0.25;
    if (pVVar1->max_length < 0x4b) goto code_?;
    pVVar1[2].vector[7].y = 0.0;
    pVVar1[2].vector[7].z = 0.5;
    pVVar1[2].vector[8].x = 0.5;
    if (pVVar1->max_length < 0x4c) goto code_?;
    pVVar1[2].vector[8].y = 0.25;
    pVVar1[2].vector[8].z = -0.5;
    pVVar1[2].vector[9].x = -0.5;
    if (pVVar1->max_length < 0x4d) goto code_?;
    pVVar1[2].vector[9].y = 0.25;
    pVVar1[2].vector[9].z = -0.5;
    pVVar1[2].vector[10].x = -0.25;
    if (pVVar1->max_length < 0x4e) goto code_?;
    pVVar1[2].vector[10].y = 0.25;
    pVVar1[2].vector[10].z = -0.5;
    pVVar1[2].vector[0xb].x = 0.0;
    if (pVVar1->max_length < 0x4f) goto code_?;
    pVVar1[2].vector[0xb].y = 0.25;
    pVVar1[2].vector[0xb].z = -0.5;
    pVVar1[2].vector[0xc].x = 0.25;
    if (pVVar1->max_length < 0x50) goto code_?;
    pVVar1[2].vector[0xc].y = 0.25;
    pVVar1[2].vector[0xc].z = -0.5;
    pVVar1[2].vector[0xd].x = 0.5;
    if (pVVar1->max_length < 0x51) goto code_?;
    pVVar1[2].vector[0xd].y = 0.25;
    pVVar1[2].vector[0xd].z = -0.25;
    pVVar1[2].vector[0xe].x = -0.5;
    if (pVVar1->max_length < 0x52) goto code_?;
    pVVar1[2].vector[0xe].y = 0.25;
    pVVar1[2].vector[0xe].z = -0.25;
    pVVar1[2].vector[0xf].x = -0.25;
    if (pVVar1->max_length < 0x53) goto code_?;
    pVVar1[2].vector[0xf].y = 0.25;
    pVVar1[2].vector[0xf].z = -0.25;
    pVVar1[2].vector[0x10].x = 0.0;
    if (pVVar1->max_length < 0x54) goto code_?;
    pVVar1[2].vector[0x10].y = 0.25;
    pVVar1[2].vector[0x10].z = -0.25;
    pVVar1[2].vector[0x11].x = 0.25;
    if (pVVar1->max_length < 0x55) goto code_?;
    pVVar1[2].vector[0x11].y = 0.25;
    pVVar1[2].vector[0x11].z = -0.25;
    pVVar1[2].vector[0x12].x = 0.5;
    if (pVVar1->max_length < 0x56) goto code_?;
    pVVar1[2].vector[0x12].y = 0.25;
    pVVar1[2].vector[0x12].z = 0.0;
    pVVar1[2].vector[0x13].x = -0.5;
    if (pVVar1->max_length < 0x57) goto code_?;
    pVVar1[2].vector[0x13].y = 0.25;
    pVVar1[2].vector[0x13].z = 0.0;
    pVVar1[2].vector[0x14].x = -0.25;
    if (pVVar1->max_length < 0x58) goto code_?;
    pVVar1[2].vector[0x14].y = 0.25;
    pVVar1[2].vector[0x14].z = 0.0;
    pVVar1[2].vector[0x15].x = 0.0;
    if (pVVar1->max_length < 0x59) goto code_?;
    pVVar1[2].vector[0x15].y = 0.25;
    pVVar1[2].vector[0x15].z = 0.0;
    pVVar1[2].vector[0x16].x = 0.25;
    if (pVVar1->max_length < 0x5a) goto code_?;
    pVVar1[2].vector[0x16].y = 0.25;
    pVVar1[2].vector[0x16].z = 0.0;
    pVVar1[2].vector[0x17].x = 0.5;
    if (pVVar1->max_length < 0x5b) goto code_?;
    pVVar1[2].vector[0x17].y = 0.25;
    pVVar1[2].vector[0x17].z = 0.25;
    pVVar1[2].vector[0x18].x = -0.5;
    if (pVVar1->max_length < 0x5c) goto code_?;
    pVVar1[2].vector[0x18].y = 0.25;
    pVVar1[2].vector[0x18].z = 0.25;
    pVVar1[2].vector[0x19].x = -0.25;
    if (pVVar1->max_length < 0x5d) goto code_?;
    pVVar1[2].vector[0x19].y = 0.25;
    pVVar1[2].vector[0x19].z = 0.25;
    pVVar1[2].vector[0x1a].x = 0.0;
    if (pVVar1->max_length < 0x5e) goto code_?;
    pVVar1[2].vector[0x1a].y = 0.25;
    pVVar1[2].vector[0x1a].z = 0.25;
    pVVar1[2].vector[0x1b].x = 0.25;
    if (pVVar1->max_length < 0x5f) goto code_?;
    pVVar1[2].vector[0x1b].y = 0.25;
    pVVar1[2].vector[0x1b].z = 0.25;
    pVVar1[2].vector[0x1c].x = 0.5;
    if (pVVar1->max_length < 0x60) goto code_?;
    pVVar1[2].vector[0x1c].y = 0.25;
    pVVar1[2].vector[0x1c].z = 0.5;
    pVVar1[2].vector[0x1d].x = -0.5;
    if (pVVar1->max_length < 0x61) goto code_?;
    pVVar1[2].vector[0x1d].y = 0.25;
    pVVar1[2].vector[0x1d].z = 0.5;
    pVVar1[2].vector[0x1e].x = -0.25;
    if (pVVar1->max_length < 0x62) goto code_?;
    pVVar1[2].vector[0x1e].y = 0.25;
    pVVar1[2].vector[0x1e].z = 0.5;
    pVVar1[2].vector[0x1f].x = 0.0;
    if (pVVar1->max_length < 99) goto code_?;
    pVVar1[2].vector[0x1f].y = 0.25;
    pVVar1[2].vector[0x1f].z = 0.5;
    pVVar1[3].klass = (Vector3__Array__Class *)0x3e800000;
    if (pVVar1->max_length < 100) goto code_?;
    pVVar1[3].monitor = (MonitorData *)0x3e800000;
    pVVar1[3].bounds = (Il2CppArrayBounds *)0x3f000000;
    pVVar1[3].max_length = 0x3f000000;
    if (pVVar1->max_length < 0x65) goto code_?;
    pVVar1[3].vector[0].x = 0.5;
    pVVar1[3].vector[0].y = -0.5;
    pVVar1[3].vector[0].z = -0.5;
    if (pVVar1->max_length < 0x66) goto code_?;
    pVVar1[3].vector[1].x = 0.5;
    pVVar1[3].vector[1].y = -0.5;
    pVVar1[3].vector[1].z = -0.25;
    if (pVVar1->max_length < 0x67) goto code_?;
    pVVar1[3].vector[2].x = 0.5;
    pVVar1[3].vector[2].y = -0.5;
    pVVar1[3].vector[2].z = 0.0;
    if (pVVar1->max_length < 0x68) goto code_?;
    pVVar1[3].vector[3].x = 0.5;
    pVVar1[3].vector[3].y = -0.5;
    pVVar1[3].vector[3].z = 0.25;
    if (pVVar1->max_length < 0x69) goto code_?;
    pVVar1[3].vector[4].x = 0.5;
    pVVar1[3].vector[4].y = -0.5;
    pVVar1[3].vector[4].z = 0.5;
    if (pVVar1->max_length < 0x6a) goto code_?;
    pVVar1[3].vector[5].x = 0.5;
    pVVar1[3].vector[5].y = -0.25;
    pVVar1[3].vector[5].z = -0.5;
    if (pVVar1->max_length < 0x6b) goto code_?;
    pVVar1[3].vector[6].x = 0.5;
    pVVar1[3].vector[6].y = -0.25;
    pVVar1[3].vector[6].z = -0.25;
    if (pVVar1->max_length < 0x6c) goto code_?;
    pVVar1[3].vector[7].x = 0.5;
    pVVar1[3].vector[7].y = -0.25;
    pVVar1[3].vector[7].z = 0.0;
    if (pVVar1->max_length < 0x6d) goto code_?;
    pVVar1[3].vector[8].x = 0.5;
    pVVar1[3].vector[8].y = -0.25;
    pVVar1[3].vector[8].z = 0.25;
    if (pVVar1->max_length < 0x6e) goto code_?;
    pVVar1[3].vector[9].x = 0.5;
    pVVar1[3].vector[9].y = -0.25;
    pVVar1[3].vector[9].z = 0.5;
    if (pVVar1->max_length < 0x6f) goto code_?;
    pVVar1[3].vector[10].x = 0.5;
    pVVar1[3].vector[10].y = 0.0;
    pVVar1[3].vector[10].z = -0.5;
    if (pVVar1->max_length < 0x70) goto code_?;
    pVVar1[3].vector[0xb].x = 0.5;
    pVVar1[3].vector[0xb].y = 0.0;
    pVVar1[3].vector[0xb].z = -0.25;
    if (pVVar1->max_length < 0x71) goto code_?;
    pVVar1[3].vector[0xc].x = 0.5;
    pVVar1[3].vector[0xc].y = 0.0;
    pVVar1[3].vector[0xc].z = 0.0;
    if (pVVar1->max_length < 0x72) goto code_?;
    pVVar1[3].vector[0xd].x = 0.5;
    pVVar1[3].vector[0xd].y = 0.0;
    pVVar1[3].vector[0xd].z = 0.25;
    if (pVVar1->max_length < 0x73) goto code_?;
    pVVar1[3].vector[0xe].x = 0.5;
    pVVar1[3].vector[0xe].y = 0.0;
    pVVar1[3].vector[0xe].z = 0.5;
    if (pVVar1->max_length < 0x74) goto code_?;
    pVVar1[3].vector[0xf].x = 0.5;
    pVVar1[3].vector[0xf].y = 0.25;
    pVVar1[3].vector[0xf].z = -0.5;
    if (pVVar1->max_length < 0x75) goto code_?;
    pVVar1[3].vector[0x10].x = 0.5;
    pVVar1[3].vector[0x10].y = 0.25;
    pVVar1[3].vector[0x10].z = -0.25;
    if (pVVar1->max_length < 0x76) goto code_?;
    pVVar1[3].vector[0x11].x = 0.5;
    pVVar1[3].vector[0x11].y = 0.25;
    pVVar1[3].vector[0x11].z = 0.0;
    if (pVVar1->max_length < 0x77) goto code_?;
    pVVar1[3].vector[0x12].x = 0.5;
    pVVar1[3].vector[0x12].y = 0.25;
    pVVar1[3].vector[0x12].z = 0.25;
    if (pVVar1->max_length < 0x78) goto code_?;
    pVVar1[3].vector[0x13].x = 0.5;
    pVVar1[3].vector[0x13].y = 0.25;
    pVVar1[3].vector[0x13].z = 0.5;
    if (pVVar1->max_length < 0x79) goto code_?;
    pVVar1[3].vector[0x14].x = 0.5;
    pVVar1[3].vector[0x14].y = 0.5;
    pVVar1[3].vector[0x14].z = -0.5;
    if (pVVar1->max_length < 0x7a) goto code_?;
    pVVar1[3].vector[0x15].x = 0.5;
    pVVar1[3].vector[0x15].y = 0.5;
    pVVar1[3].vector[0x15].z = -0.25;
    if (pVVar1->max_length < 0x7b) goto code_?;
    pVVar1[3].vector[0x16].x = 0.5;
    pVVar1[3].vector[0x16].y = 0.5;
    pVVar1[3].vector[0x16].z = 0.0;
    if (pVVar1->max_length < 0x7c) goto code_?;
    pVVar1[3].vector[0x17].x = 0.5;
    pVVar1[3].vector[0x17].y = 0.5;
    pVVar1[3].vector[0x17].z = 0.25;
    if (pVVar1->max_length < 0x7d) goto code_?;
    pVVar1[3].vector[0x18].x = 0.5;
    pVVar1[3].vector[0x18].y = 0.5;
    pVVar1[3].vector[0x18].z = 0.5;
    TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->bytePositionLookUpTable = pVVar1;
    func_?(TypeInfo__MV__WorldObject__CubeDataPacker->static_fields,pVVar1);
    this = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>
                          );
    if (this != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Dictionary__
                );
      key_x00110._cultureKey = (String *)_UNK_?;
      key_x00110._options = _UNK_?;
      key_x00110._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_x00110,(Object *)0x0,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00111._cultureKey = (String *)_UNK_?;
      key_x00111._options = _UNK_?;
      key_x00111._pattern = (String *)0xbe800000;
      uVar2 = _UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_x00111,(Object *)0x1,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00112._cultureKey = (String *)_UNK_?;
      key_x00112._options = _UNK_?;
      key_x00112._pattern = (String *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_x00112,(Object *)0x2,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      method = (MethodInfo *)0x3e800000;
      pSVar3 = (String *)_UNK_?;
      RVar4._options = _UNK_?;
      RVar4 = (Regex_CachedCodeEntryKey)CONCAT84(uVar5,RVar4._options);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,RVar4,(Object *)0x3,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      RVar4._cultureKey = (String *)_UNK_?;
      RVar4._options = _UNK_?;
      RVar4._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,RVar4,(Object *)0x4,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key._cultureKey = (String *)_UNK_?;
      key._options = _UNK_?;
      key._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key,(Object *)0x5,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_00._cultureKey = (String *)_UNK_?;
      key_00._options = _UNK_?;
      key_00._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_00,(Object *)0x6,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_01._cultureKey = (String *)_UNK_?;
      key_01._options = _UNK_?;
      key_01._pattern = (String *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_01,(Object *)0x7,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_02._cultureKey = (String *)_UNK_?;
      key_02._options = _UNK_?;
      key_02._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_02,(Object *)0x8,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_03._cultureKey = (String *)_UNK_?;
      key_03._options = _UNK_?;
      key_03._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_03,(Object *)0x9,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_04._cultureKey = (String *)0x0;
      key_04._options = _UNK_?;
      key_04._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_04,(Object *)0xa,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_05._cultureKey = (String *)0x0;
      key_05._options = _UNK_?;
      key_05._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_05,(Object *)0xb,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_06._cultureKey = (String *)0x0;
      key_06._pattern = (String *)0x0;
      key_06._options = _UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_06,(Object *)0xc,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_07._cultureKey = (String *)0x0;
      key_07._options = _UNK_?;
      key_07._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_07,(Object *)0xd,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_08._cultureKey = (String *)0x0;
      key_08._options = _UNK_?;
      key_08._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_08,(Object *)0xe,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_09._cultureKey = (String *)_UNK_?;
      key_09._options = _UNK_?;
      key_09._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_09,(Object *)0xf,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_10._cultureKey = (String *)_UNK_?;
      key_10._options = _UNK_?;
      key_10._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_10,(Object *)0x10,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_11._cultureKey = (String *)_UNK_?;
      key_11._options = _UNK_?;
      key_11._pattern = (String *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_11,(Object *)0x11,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_12._cultureKey = (String *)_UNK_?;
      key_12._options = _UNK_?;
      key_12._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_12,(Object *)0x12,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_13._cultureKey = (String *)_UNK_?;
      key_13._options = _UNK_?;
      key_13._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_13,(Object *)0x13,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_14._cultureKey = (String *)uVar2;
      key_14._options = _UNK_?;
      key_14._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_14,(Object *)0x14,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_15._cultureKey = (String *)uVar2;
      key_15._options = _UNK_?;
      key_15._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_15,(Object *)0x15,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_16._cultureKey = (String *)uVar2;
      key_16._options = _UNK_?;
      key_16._pattern = (String *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_16,(Object *)0x16,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_17._cultureKey = (String *)uVar2;
      key_17._options = _UNK_?;
      key_17._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_17,(Object *)0x17,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_18._cultureKey = (String *)uVar2;
      key_18._options = _UNK_?;
      key_18._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_18,(Object *)0x18,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_19._cultureKey = (String *)_UNK_?;
      key_19._options = _UNK_?;
      key_19._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_19,(Object *)0x19,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_20._cultureKey = (String *)_UNK_?;
      key_20._options = _UNK_?;
      key_20._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_20,(Object *)0x1a,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_21._cultureKey = (String *)_UNK_?;
      key_21._options = _UNK_?;
      key_21._pattern = (String *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_21,(Object *)0x1b,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_22._cultureKey = (String *)_UNK_?;
      key_22._options = _UNK_?;
      key_22._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_22,(Object *)0x1c,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_23._cultureKey = (String *)_UNK_?;
      key_23._options = _UNK_?;
      key_23._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_23,(Object *)0x1d,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_24._cultureKey = (String *)_UNK_?;
      key_24._options = _UNK_?;
      key_24._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_24,(Object *)0x1e,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_25._cultureKey = (String *)_UNK_?;
      key_25._options = _UNK_?;
      key_25._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_25,(Object *)0x1f,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_26._cultureKey = (String *)_UNK_?;
      key_26._options = _UNK_?;
      key_26._pattern = (String *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_26,(Object *)0x20,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_27._cultureKey = (String *)_UNK_?;
      key_27._options = _UNK_?;
      key_27._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_27,(Object *)0x21,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_28._cultureKey = (String *)_UNK_?;
      key_28._options = _UNK_?;
      key_28._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_28,(Object *)0x22,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_29._cultureKey = (String *)0x0;
      key_29._options = _UNK_?;
      key_29._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_29,(Object *)0x23,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_30._cultureKey = (String *)0x0;
      key_30._options = _UNK_?;
      key_30._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_30,(Object *)0x24,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_31._cultureKey = (String *)0x0;
      key_31._pattern = (String *)0x0;
      key_31._options = _UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_31,(Object *)0x25,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_32._cultureKey = (String *)0x0;
      key_32._options = _UNK_?;
      key_32._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_32,(Object *)0x26,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_33._cultureKey = (String *)0x0;
      key_33._options = _UNK_?;
      key_33._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_33,(Object *)0x27,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_34._cultureKey = (String *)_UNK_?;
      key_34._options = _UNK_?;
      key_34._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_34,(Object *)0x28,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_35._cultureKey = (String *)_UNK_?;
      key_35._options = _UNK_?;
      key_35._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_35,(Object *)0x29,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_36._cultureKey = (String *)_UNK_?;
      key_36._options = _UNK_?;
      key_36._pattern = (String *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_36,(Object *)0x2a,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_37._cultureKey = (String *)_UNK_?;
      key_37._options = _UNK_?;
      key_37._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_37,(Object *)0x2b,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_38._cultureKey = (String *)_UNK_?;
      key_38._options = _UNK_?;
      key_38._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_38,(Object *)0x2c,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_39._cultureKey = (String *)uVar2;
      key_39._options = _UNK_?;
      key_39._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_39,(Object *)0x2d,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_40._cultureKey = (String *)uVar2;
      key_40._options = _UNK_?;
      key_40._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_40,(Object *)0x2e,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_41._cultureKey = (String *)uVar2;
      key_41._options = _UNK_?;
      key_41._pattern = (String *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_41,(Object *)0x2f,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_42._cultureKey = (String *)uVar2;
      key_42._options = _UNK_?;
      key_42._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_42,(Object *)0x30,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_43._cultureKey = (String *)uVar2;
      key_43._options = _UNK_?;
      key_43._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_43,(Object *)0x31,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_44._pattern = (String *)0xbf000000;
      key_44._options = (int)((ulonglong)_UNK_? << 0x20);
      key_44._cultureKey = (String *)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_44,(Object *)0x32,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_45._pattern = (String *)0xbe800000;
      key_45._options = (int)((ulonglong)_UNK_? << 0x20);
      key_45._cultureKey = (String *)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_45,(Object *)0x33,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      auVar6._4_8_ = 0;
      auVar6._0_4_ = _UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,(Regex_CachedCodeEntryKey)(auVar6 << 0x20),(Object *)0x34,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_46._pattern = (String *)0x3e800000;
      key_46._options = (int)((ulonglong)_UNK_? << 0x20);
      key_46._cultureKey = (String *)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_46,(Object *)0x35,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_47._pattern = (String *)0x3f000000;
      key_47._options = (int)((ulonglong)_UNK_? << 0x20);
      key_47._cultureKey = (String *)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_47,(Object *)0x36,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_48._pattern = (String *)0xbf000000;
      key_48._options = (int)((ulonglong)_UNK_? << 0x20);
      key_48._cultureKey = (String *)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_48,(Object *)0x37,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_49._pattern = (String *)0xbe800000;
      key_49._options = (int)((ulonglong)_UNK_? << 0x20);
      key_49._cultureKey = (String *)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_49,(Object *)0x38,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      auVar7._4_8_ = 0;
      auVar7._0_4_ = _UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,(Regex_CachedCodeEntryKey)(auVar7 << 0x20),(Object *)0x39,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_50._pattern = (String *)0x3e800000;
      key_50._options = (int)((ulonglong)_UNK_? << 0x20);
      key_50._cultureKey = (String *)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_50,(Object *)0x3a,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_51._pattern = (String *)0x3f000000;
      key_51._options = (int)((ulonglong)_UNK_? << 0x20);
      key_51._cultureKey = (String *)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_51,(Object *)0x3b,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,(Regex_CachedCodeEntryKey)(ZEXT412(0xbf000000) << 0x40),(Object *)0x3c,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,(Regex_CachedCodeEntryKey)(ZEXT412(0xbe800000) << 0x40),(Object *)0x3d,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,(Regex_CachedCodeEntryKey)ZEXT812(0),(Object *)0x3e,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,(Regex_CachedCodeEntryKey)(ZEXT412(0x3e800000) << 0x40),(Object *)0x3f,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,(Regex_CachedCodeEntryKey)(ZEXT412(0x3f000000) << 0x40),(Object *)0x40,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_52._pattern = (String *)0xbf000000;
      key_52._options = (int)((ulonglong)_UNK_? << 0x20);
      key_52._cultureKey = (String *)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_52,(Object *)0x41,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_53._pattern = (String *)0xbe800000;
      key_53._options = (int)((ulonglong)_UNK_? << 0x20);
      key_53._cultureKey = (String *)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_53,(Object *)0x42,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      auVar8._4_8_ = 0;
      auVar8._0_4_ = _UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,(Regex_CachedCodeEntryKey)(auVar8 << 0x20),(Object *)0x43,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_54._pattern = (String *)0x3e800000;
      key_54._options = (int)((ulonglong)_UNK_? << 0x20);
      key_54._cultureKey = (String *)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_54,(Object *)0x44,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_55._pattern = (String *)0x3f000000;
      key_55._options = (int)((ulonglong)_UNK_? << 0x20);
      key_55._cultureKey = (String *)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_55,(Object *)0x45,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_56._pattern = (String *)0xbf000000;
      key_56._options = (int)((ulonglong)uVar2 << 0x20);
      key_56._cultureKey = (String *)(int)(((ulonglong)uVar2 << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_56,(Object *)0x46,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_57._pattern = (String *)0xbe800000;
      key_57._options = (int)((ulonglong)uVar2 << 0x20);
      key_57._cultureKey = (String *)(int)(((ulonglong)uVar2 << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_57,(Object *)0x47,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      auVar9._4_8_ = 0;
      auVar9._0_4_ = uVar2;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,(Regex_CachedCodeEntryKey)(auVar9 << 0x20),(Object *)0x48,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_58._pattern = (String *)0x3e800000;
      key_58._options = (int)((ulonglong)uVar2 << 0x20);
      key_58._cultureKey = (String *)(int)(((ulonglong)uVar2 << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_58,(Object *)0x49,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_59._pattern = (String *)0x3f000000;
      key_59._options = (int)((ulonglong)uVar2 << 0x20);
      key_59._cultureKey = (String *)(int)(((ulonglong)uVar2 << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_59,(Object *)0x4a,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_60._cultureKey = (String *)_UNK_?;
      key_60._options = _UNK_?;
      key_60._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_60,(Object *)0x4b,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_61._cultureKey = (String *)_UNK_?;
      key_61._options = _UNK_?;
      key_61._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_61,(Object *)0x4c,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_62._cultureKey = (String *)_UNK_?;
      key_62._options = _UNK_?;
      key_62._pattern = (String *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_62,(Object *)0x4d,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_63._cultureKey = (String *)_UNK_?;
      key_63._options = _UNK_?;
      key_63._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_63,(Object *)0x4e,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_64._cultureKey = (String *)_UNK_?;
      key_64._options = _UNK_?;
      key_64._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_64,(Object *)0x4f,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_65._cultureKey = (String *)_UNK_?;
      key_65._options = _UNK_?;
      key_65._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_65,(Object *)0x50,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_66._cultureKey = (String *)_UNK_?;
      key_66._options = _UNK_?;
      key_66._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_66,(Object *)0x51,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_67._cultureKey = (String *)_UNK_?;
      key_67._options = _UNK_?;
      key_67._pattern = (String *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_67,(Object *)0x52,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_68._cultureKey = (String *)_UNK_?;
      key_68._options = _UNK_?;
      key_68._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_68,(Object *)0x53,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_69._cultureKey = (String *)_UNK_?;
      key_69._options = _UNK_?;
      key_69._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_69,(Object *)0x54,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_70._cultureKey = (String *)0x0;
      key_70._options = _UNK_?;
      key_70._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_70,(Object *)0x55,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_71._cultureKey = (String *)0x0;
      key_71._options = _UNK_?;
      key_71._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_71,(Object *)0x56,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_72._cultureKey = (String *)0x0;
      key_72._pattern = (String *)0x0;
      key_72._options = _UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_72,(Object *)0x57,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_73._cultureKey = (String *)0x0;
      key_73._options = _UNK_?;
      key_73._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_73,(Object *)0x58,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_74._cultureKey = (String *)0x0;
      key_74._options = _UNK_?;
      key_74._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_74,(Object *)0x59,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_75._cultureKey = (String *)_UNK_?;
      key_75._options = _UNK_?;
      key_75._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_75,(Object *)0x5a,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_76._cultureKey = (String *)_UNK_?;
      key_76._options = _UNK_?;
      key_76._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_76,(Object *)0x5b,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_77._cultureKey = (String *)_UNK_?;
      key_77._options = _UNK_?;
      key_77._pattern = (String *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_77,(Object *)0x5c,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_78._cultureKey = (String *)_UNK_?;
      key_78._options = _UNK_?;
      key_78._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_78,(Object *)0x5d,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_79._cultureKey = (String *)_UNK_?;
      key_79._options = _UNK_?;
      key_79._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_79,(Object *)0x5e,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_80._cultureKey = (String *)uVar2;
      key_80._options = _UNK_?;
      key_80._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_80,(Object *)0x5f,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_81._cultureKey = (String *)uVar2;
      key_81._options = _UNK_?;
      key_81._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_81,(Object *)0x60,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_82._cultureKey = (String *)uVar2;
      key_82._options = _UNK_?;
      key_82._pattern = (String *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_82,(Object *)0x61,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_83._cultureKey = (String *)uVar2;
      key_83._options = _UNK_?;
      key_83._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_83,(Object *)0x62,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_84._cultureKey = (String *)uVar2;
      key_84._options = _UNK_?;
      key_84._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_84,(Object *)0x63,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_85._cultureKey = (String *)_UNK_?;
      key_85._options = uVar2;
      key_85._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_85,(Object *)0x64,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_86._cultureKey = (String *)_UNK_?;
      key_86._options = uVar2;
      key_86._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_86,(Object *)0x65,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_87._cultureKey = (String *)_UNK_?;
      key_87._options = uVar2;
      key_87._pattern = (String *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_87,(Object *)0x66,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_88._cultureKey = (String *)_UNK_?;
      key_88._options = uVar2;
      key_88._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_88,(Object *)0x67,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_89._cultureKey = (String *)_UNK_?;
      key_89._options = uVar2;
      key_89._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_89,(Object *)0x68,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_90._cultureKey = (String *)_UNK_?;
      key_90._options = uVar2;
      key_90._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_90,(Object *)0x69,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_91._cultureKey = (String *)_UNK_?;
      key_91._options = uVar2;
      key_91._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_91,(Object *)0x6a,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_92._cultureKey = (String *)_UNK_?;
      key_92._options = uVar2;
      key_92._pattern = (String *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_92,(Object *)0x6b,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_93._cultureKey = (String *)_UNK_?;
      key_93._options = uVar2;
      key_93._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_93,(Object *)0x6c,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_94._cultureKey = (String *)_UNK_?;
      key_94._options = uVar2;
      key_94._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_94,(Object *)0x6d,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_95._cultureKey = (String *)0x0;
      key_95._options = uVar2;
      key_95._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_95,(Object *)0x6e,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_96._cultureKey = (String *)0x0;
      key_96._options = uVar2;
      key_96._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_96,(Object *)0x6f,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_97._cultureKey = (String *)0x0;
      key_97._pattern = (String *)0x0;
      key_97._options = uVar2;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_97,(Object *)0x70,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_98._cultureKey = (String *)0x0;
      key_98._options = uVar2;
      key_98._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_98,(Object *)0x71,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_99._cultureKey = (String *)0x0;
      key_99._options = uVar2;
      key_99._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_99,(Object *)0x72,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00100._cultureKey = (String *)_UNK_?;
      key_x00100._options = uVar2;
      key_x00100._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_x00100,(Object *)0x73,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00101._cultureKey = (String *)_UNK_?;
      key_x00101._options = uVar2;
      key_x00101._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_x00101,(Object *)0x74,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00102._cultureKey = (String *)_UNK_?;
      key_x00102._options = uVar2;
      key_x00102._pattern = (String *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_x00102,(Object *)0x75,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00103._cultureKey = (String *)_UNK_?;
      key_x00103._options = uVar2;
      key_x00103._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_x00103,(Object *)0x76,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00104._cultureKey = (String *)_UNK_?;
      key_x00104._options = uVar2;
      key_x00104._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_x00104,(Object *)0x77,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00105._cultureKey = (String *)uVar2;
      key_x00105._options = uVar2;
      key_x00105._pattern = (String *)0xbf000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_x00105,(Object *)0x78,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00106._cultureKey = (String *)uVar2;
      key_x00106._options = uVar2;
      key_x00106._pattern = (String *)0xbe800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_x00106,(Object *)0x79,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00107._cultureKey = (String *)uVar2;
      key_x00107._options = uVar2;
      key_x00107._pattern = (String *)0x0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_x00107,(Object *)0x7a,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00108._cultureKey = (String *)uVar2;
      key_x00108._options = uVar2;
      key_x00108._pattern = (String *)0x3e800000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_x00108,(Object *)0x7b,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00109._cultureKey = (String *)uVar2;
      key_x00109._options = uVar2;
      key_x00109._pattern = (String *)0x3f000000;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
      Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Add
                (this,key_x00109,(Object *)0x7c,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable =
           (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)this;
      func_?();
      array = (Byte__Array *)func_?();
      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
      RuntimeHelpers_InitializeArray_1((Array *)array,___method0x60003ee_1_Field,(MethodInfo *)0x0);
      TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->IdentityByteCorners = array;
      func_?();
      TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->rowMaxLength = 0x3f;
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

