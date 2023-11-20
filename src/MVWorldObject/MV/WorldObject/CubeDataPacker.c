
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
    this = (IndexOutOfRangeException *)func_?(uVar4);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (this,message,method_00);
    uVar4 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
    func_?(this,uVar4);
  }
  else {
    while (uVar3 < corners->max_length) {
      VStack_1.x = pVVar2->x;
      VStack_1.y = pVVar2->y;
      fVar5 = pVVar2->z;
      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      VStack_6._0_8_ = VStack_1._0_8_;
      VStack_6.z = fVar5;
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
      pDVar7 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable;
      if (pDVar7 == (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)0x0) goto code_?;
      key.z = fVar5;
      key.x = VStack_1.x;
      key.y = VStack_1.y;
      bVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::
              Byte]::Dictionary_2_UnityEngine_Vector3_System_Byte__ContainsKey
                        (pDVar7,key,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__ContainsKey_UnityEngine__Vector3_
                        );
      if (bVar8 == 0) {
        index = 0;
        do {
          if (index == 0) {
            fVar5 = VStack_6.x;
          }
          else if (index == 1) {
            fVar5 = VStack_6.y;
          }
          else {
            fVar5 = VStack_6.z;
            if (index != 2) goto code_?;
          }
          if (fVar5 == 0.0) {
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item
                      (&VStack_6,index,0.0,(MethodInfo *)0x0);
          }
          index = index + 1;
        } while (index < 3);
        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
        }
        pDVar7 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable;
        if (pDVar7 == (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)0x0) goto code_?;
        fVar9 = VStack_6.x;
        fVar10 = VStack_6.y;
        fVar5 = VStack_6.z;
      }
      else {
        if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
          VStack_6.y = (float)TypeInfo__MV__WorldObject__CubeDataPacker;
          VStack_6.x = (float)&UNK_?;
          func_?();
        }
        pDVar7 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable;
        if (pDVar7 == (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)0x0) goto code_?;
        fVar9 = VStack_1.x;
        fVar10 = VStack_1.y;
      }
      key_00.y = fVar10;
      key_00.x = fVar9;
      key_00.z = fVar5;
      uVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::
              Byte]::Dictionary_2_UnityEngine_Vector3_System_Byte__get_Item
                        (pDVar7,key_00,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__get_Item_UnityEngine__Vector3_
                        );
      if ((Byte__Array *)VStack_1.z == (Byte__Array *)0x0) goto code_?;
      if (*(il2cpp_array_size_t *)((int)VStack_1.z + 0xc) <= uVar3) break;
      ((uint8_t *)((int)VStack_1.z + 0x10))[uVar3] = uVar11;
      pVVar2 = pVVar2 + 1;
      uVar3 = uVar3 + 1;
      if (7 < (int)uVar3) {
        return (Byte__Array *)VStack_1.z;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  pBVar13 = (Byte__Array *)(*pcVar12)();
  return pBVar13;
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


/* Int32 GetCubesInRow(Byte) */

int32_t MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_GetCubesInRow
                  (uint8_t cubeFlags,MethodInfo *method)

{
  return (uint)(cubeFlags >> 2);
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
  pDVar2 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable;
  if (pDVar2 != (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)0x0) {
    key.y = corner.y;
    key.x = corner.x;
    key.z = corner.z;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::
            Byte]::Dictionary_2_UnityEngine_Vector3_System_Byte__ContainsKey
                      (pDVar2,key,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__ContainsKey_UnityEngine__Vector3_
                      );
    if (bVar3 == 0) {
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
      pDVar2 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable;
      if (pDVar2 != (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)0x0) {
        key_01.y = corner.y;
        key_01.x = corner.x;
        key_01.z = corner.z;
        uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System
                ::Byte]::Dictionary_2_UnityEngine_Vector3_System_Byte__get_Item
                          (pDVar2,key_01,
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
      pDVar2 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable;
      if (pDVar2 != (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)0x0) {
        key_00.y = corner.y;
        key_00.x = corner.x;
        key_00.z = fVar1;
        uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System
                ::Byte]::Dictionary_2_UnityEngine_Vector3_System_Byte__get_Item
                          (pDVar2,key_00,
                           MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__get_Item_UnityEngine__Vector3_
                          );
        return uVar4;
      }
    }
  }
  func_?();
code_?:
  uVar5 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  this = (IndexOutOfRangeException *)func_?(uVar5);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
            (this,message,method_00);
  func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
  func_?(this);
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
    BytePacker::BytePacker_Write_4(bp,x,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_4(bp,y,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_4(bp,z,(MethodInfo *)0x0);
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
    this = (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>
                          );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
    Dictionary_2_UnityEngine_Vector3_System_Byte___ctor
              (this,
               MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Dictionary__
              );
    if (this != (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)0x0) {
      key_x00111.z = -0.5;
      key_x00111.x = -0.5;
      key_x00111.y = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_x00111,0,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00112.y = (float)_UNK_?;
      key_x00112.x = (float)_UNK_?;
      uVar2 = 1;
      key_x00112.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_x00112,1,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00113.y = (float)_UNK_?;
      key_x00113.x = (float)_UNK_?;
      key_x00113.z = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_x00113,2,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00114.y = (float)_UNK_?;
      key_x00114.x = (float)_UNK_?;
      key_x00114.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_x00114,3,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key.y = (float)_UNK_?;
      key.x = (float)_UNK_?;
      key.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key,4,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_00.y = (float)_UNK_?;
      key_00.x = (float)_UNK_?;
      key_00.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_00,5,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_01.y = (float)_UNK_?;
      key_01.x = (float)_UNK_?;
      key_01.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_01,6,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_02.y = (float)_UNK_?;
      key_02.x = (float)_UNK_?;
      key_02.z = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_02,7,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_03.y = (float)_UNK_?;
      key_03.x = (float)_UNK_?;
      key_03.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_03,8,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_04.y = (float)_UNK_?;
      key_04.x = (float)_UNK_?;
      key_04.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_04,9,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_05.y = 0.0;
      key_05.x = (float)_UNK_?;
      key_05.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_05,10,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_06.y = 0.0;
      key_06.x = (float)_UNK_?;
      key_06.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_06,0xb,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_07.y = 0.0;
      key_07.z = 0.0;
      key_07.x = (float)_UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_07,0xc,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_08.y = 0.0;
      key_08.x = (float)_UNK_?;
      key_08.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_08,0xd,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_09.y = 0.0;
      key_09.x = (float)_UNK_?;
      key_09.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_09,0xe,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_10.y = (float)_UNK_?;
      key_10.x = (float)_UNK_?;
      key_10.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_10,0xf,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_11.y = (float)_UNK_?;
      key_11.x = (float)_UNK_?;
      key_11.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_11,0x10,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_12.y = (float)_UNK_?;
      key_12.x = (float)_UNK_?;
      key_12.z = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_12,0x11,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_13.y = (float)_UNK_?;
      key_13.x = (float)_UNK_?;
      key_13.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_13,0x12,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_14.y = (float)_UNK_?;
      key_14.x = (float)_UNK_?;
      key_14.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_14,0x13,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_15.y = (float)uVar2;
      key_15.x = (float)_UNK_?;
      key_15.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_15,0x14,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_16.y = (float)uVar2;
      key_16.x = (float)_UNK_?;
      key_16.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_16,0x15,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_17.y = (float)uVar2;
      key_17.x = (float)_UNK_?;
      key_17.z = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_17,0x16,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_18.y = (float)uVar2;
      key_18.x = (float)_UNK_?;
      key_18.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_18,0x17,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_19.y = (float)uVar2;
      key_19.x = (float)_UNK_?;
      key_19.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_19,0x18,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_20.y = (float)_UNK_?;
      key_20.x = (float)_UNK_?;
      key_20.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_20,0x19,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_21.y = (float)_UNK_?;
      key_21.x = (float)_UNK_?;
      key_21.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_21,0x1a,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_22.y = (float)_UNK_?;
      key_22.x = (float)_UNK_?;
      key_22.z = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_22,0x1b,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_23.y = (float)_UNK_?;
      key_23.x = (float)_UNK_?;
      key_23.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_23,0x1c,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_24.y = (float)_UNK_?;
      key_24.x = (float)_UNK_?;
      key_24.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_24,0x1d,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_25.y = (float)_UNK_?;
      key_25.x = (float)_UNK_?;
      key_25.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_25,0x1e,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_26.y = (float)_UNK_?;
      key_26.x = (float)_UNK_?;
      key_26.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_26,0x1f,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_27.y = (float)_UNK_?;
      key_27.x = (float)_UNK_?;
      key_27.z = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_27,0x20,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_28.y = (float)_UNK_?;
      key_28.x = (float)_UNK_?;
      key_28.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_28,0x21,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_29.y = (float)_UNK_?;
      key_29.x = (float)_UNK_?;
      key_29.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_29,0x22,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_30.y = 0.0;
      key_30.x = (float)_UNK_?;
      key_30.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_30,0x23,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_31.y = 0.0;
      key_31.x = (float)_UNK_?;
      key_31.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_31,0x24,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_32.y = 0.0;
      key_32.z = 0.0;
      key_32.x = (float)_UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_32,0x25,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_33.y = 0.0;
      key_33.x = (float)_UNK_?;
      key_33.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_33,0x26,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_34.y = 0.0;
      key_34.x = (float)_UNK_?;
      key_34.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_34,0x27,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_35.y = (float)_UNK_?;
      key_35.x = (float)_UNK_?;
      key_35.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_35,0x28,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_36.y = (float)_UNK_?;
      key_36.x = (float)_UNK_?;
      key_36.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_36,0x29,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_37.y = (float)_UNK_?;
      key_37.x = (float)_UNK_?;
      key_37.z = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_37,0x2a,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_38.y = (float)_UNK_?;
      key_38.x = (float)_UNK_?;
      key_38.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_38,0x2b,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_39.y = (float)_UNK_?;
      key_39.x = (float)_UNK_?;
      key_39.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_39,0x2c,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_40.y = (float)uVar2;
      key_40.x = (float)_UNK_?;
      key_40.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_40,0x2d,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_41.y = (float)uVar2;
      key_41.x = (float)_UNK_?;
      key_41.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_41,0x2e,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_42.y = (float)uVar2;
      key_42.x = (float)_UNK_?;
      key_42.z = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_42,0x2f,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_43.y = (float)uVar2;
      key_43.x = (float)_UNK_?;
      key_43.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_43,0x30,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_44.y = (float)uVar2;
      key_44.x = (float)_UNK_?;
      key_44.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_44,0x31,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_45.z = -0.5;
      key_45.x = (float)(int)((ulonglong)_UNK_? << 0x20);
      key_45.y = (float)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_45,0x32,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_46.z = -0.25;
      key_46.x = (float)(int)((ulonglong)_UNK_? << 0x20);
      key_46.y = (float)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_46,0x33,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      auVar3._4_8_ = 0;
      auVar3._0_4_ = _UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,(Vector3)(auVar3 << 0x20),0x34,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_47.z = 0.25;
      key_47.x = (float)(int)((ulonglong)_UNK_? << 0x20);
      key_47.y = (float)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_47,0x35,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_48.z = 0.5;
      key_48.x = (float)(int)((ulonglong)_UNK_? << 0x20);
      key_48.y = (float)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_48,0x36,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_49.z = -0.5;
      key_49.x = (float)(int)((ulonglong)_UNK_? << 0x20);
      key_49.y = (float)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_49,0x37,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_50.z = -0.25;
      key_50.x = (float)(int)((ulonglong)_UNK_? << 0x20);
      key_50.y = (float)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_50,0x38,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      auVar4._4_8_ = 0;
      auVar4._0_4_ = _UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,(Vector3)(auVar4 << 0x20),0x39,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_51.z = 0.25;
      key_51.x = (float)(int)((ulonglong)_UNK_? << 0x20);
      key_51.y = (float)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_51,0x3a,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_52.z = 0.5;
      key_52.x = (float)(int)((ulonglong)_UNK_? << 0x20);
      key_52.y = (float)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_52,0x3b,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,(Vector3)(ZEXT412(0xbf000000) << 0x40),0x3c,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,(Vector3)(ZEXT412(0xbe800000) << 0x40),0x3d,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,(Vector3)ZEXT812(0),0x3e,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,(Vector3)(ZEXT412(0x3e800000) << 0x40),0x3f,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,(Vector3)(ZEXT412(0x3f000000) << 0x40),0x40,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_53.z = -0.5;
      key_53.x = (float)(int)((ulonglong)_UNK_? << 0x20);
      key_53.y = (float)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_53,0x41,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_54.z = -0.25;
      key_54.x = (float)(int)((ulonglong)_UNK_? << 0x20);
      key_54.y = (float)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_54,0x42,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      auVar5._4_8_ = 0;
      auVar5._0_4_ = _UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,(Vector3)(auVar5 << 0x20),0x43,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_55.z = 0.25;
      key_55.x = (float)(int)((ulonglong)_UNK_? << 0x20);
      key_55.y = (float)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_55,0x44,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_56.z = 0.5;
      key_56.x = (float)(int)((ulonglong)_UNK_? << 0x20);
      key_56.y = (float)(int)(((ulonglong)_UNK_? << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_56,0x45,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_57.z = -0.5;
      key_57.x = (float)(int)((ulonglong)uVar2 << 0x20);
      key_57.y = (float)(int)(((ulonglong)uVar2 << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_57,0x46,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_58.z = -0.25;
      key_58.x = (float)(int)((ulonglong)uVar2 << 0x20);
      key_58.y = (float)(int)(((ulonglong)uVar2 << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_58,0x47,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      auVar6._4_8_ = 0;
      auVar6._0_4_ = uVar2;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,(Vector3)(auVar6 << 0x20),0x48,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_59.z = 0.25;
      key_59.x = (float)(int)((ulonglong)uVar2 << 0x20);
      key_59.y = (float)(int)(((ulonglong)uVar2 << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_59,0x49,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_60.z = 0.5;
      key_60.x = (float)(int)((ulonglong)uVar2 << 0x20);
      key_60.y = (float)(int)(((ulonglong)uVar2 << 0x20) >> 0x20);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_60,0x4a,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_61.y = (float)_UNK_?;
      key_61.x = (float)_UNK_?;
      key_61.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_61,0x4b,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_62.y = (float)_UNK_?;
      key_62.x = (float)_UNK_?;
      key_62.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_62,0x4c,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_63.y = (float)_UNK_?;
      key_63.x = (float)_UNK_?;
      key_63.z = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_63,0x4d,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_64.y = (float)_UNK_?;
      key_64.x = (float)_UNK_?;
      key_64.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_64,0x4e,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_65.y = (float)_UNK_?;
      key_65.x = (float)_UNK_?;
      key_65.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_65,0x4f,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_66.y = (float)_UNK_?;
      key_66.x = (float)_UNK_?;
      key_66.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_66,0x50,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_67.y = (float)_UNK_?;
      key_67.x = (float)_UNK_?;
      key_67.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_67,0x51,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_68.y = (float)_UNK_?;
      key_68.x = (float)_UNK_?;
      key_68.z = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_68,0x52,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_69.y = (float)_UNK_?;
      key_69.x = (float)_UNK_?;
      key_69.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_69,0x53,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_70.y = (float)_UNK_?;
      key_70.x = (float)_UNK_?;
      key_70.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_70,0x54,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_71.y = 0.0;
      key_71.x = (float)_UNK_?;
      key_71.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_71,0x55,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_72.y = 0.0;
      key_72.x = (float)_UNK_?;
      key_72.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_72,0x56,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_73.y = 0.0;
      key_73.z = 0.0;
      key_73.x = (float)_UNK_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_73,0x57,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_74.y = 0.0;
      key_74.x = (float)_UNK_?;
      key_74.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_74,0x58,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_75.y = 0.0;
      key_75.x = (float)_UNK_?;
      key_75.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_75,0x59,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_76.y = (float)_UNK_?;
      key_76.x = (float)_UNK_?;
      key_76.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_76,0x5a,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_77.y = (float)_UNK_?;
      key_77.x = (float)_UNK_?;
      key_77.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_77,0x5b,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_78.y = (float)_UNK_?;
      key_78.x = (float)_UNK_?;
      key_78.z = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_78,0x5c,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_79.y = (float)_UNK_?;
      key_79.x = (float)_UNK_?;
      key_79.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_79,0x5d,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_80.y = (float)_UNK_?;
      key_80.x = (float)_UNK_?;
      key_80.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_80,0x5e,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_81.y = (float)uVar2;
      key_81.x = (float)_UNK_?;
      key_81.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_81,0x5f,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_82.y = (float)uVar2;
      key_82.x = (float)_UNK_?;
      key_82.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_82,0x60,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_83.y = (float)uVar2;
      key_83.x = (float)_UNK_?;
      key_83.z = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_83,0x61,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_84.y = (float)uVar2;
      key_84.x = (float)_UNK_?;
      key_84.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_84,0x62,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_85.y = (float)uVar2;
      key_85.x = (float)_UNK_?;
      key_85.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_85,99,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_86.y = (float)_UNK_?;
      key_86.x = (float)uVar2;
      key_86.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_86,100,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_87.y = (float)_UNK_?;
      key_87.x = (float)uVar2;
      key_87.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_87,0x65,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_88.y = (float)_UNK_?;
      key_88.x = (float)uVar2;
      key_88.z = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_88,0x66,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_89.y = (float)_UNK_?;
      key_89.x = (float)uVar2;
      key_89.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_89,0x67,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_90.y = (float)_UNK_?;
      key_90.x = (float)uVar2;
      key_90.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_90,0x68,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_91.y = (float)_UNK_?;
      key_91.x = (float)uVar2;
      key_91.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_91,0x69,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_92.y = (float)_UNK_?;
      key_92.x = (float)uVar2;
      key_92.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_92,0x6a,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_93.y = (float)_UNK_?;
      key_93.x = (float)uVar2;
      key_93.z = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_93,0x6b,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_94.y = (float)_UNK_?;
      key_94.x = (float)uVar2;
      key_94.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_94,0x6c,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_95.y = (float)_UNK_?;
      key_95.x = (float)uVar2;
      key_95.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_95,0x6d,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_96.y = 0.0;
      key_96.x = (float)uVar2;
      key_96.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_96,0x6e,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_97.y = 0.0;
      key_97.x = (float)uVar2;
      key_97.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_97,0x6f,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_98.y = 0.0;
      key_98.z = 0.0;
      key_98.x = (float)uVar2;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_98,0x70,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_99.y = 0.0;
      key_99.x = (float)uVar2;
      key_99.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_99,0x71,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00100.y = 0.0;
      key_x00100.x = (float)uVar2;
      key_x00100.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_x00100,0x72,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00101.y = (float)_UNK_?;
      key_x00101.x = (float)uVar2;
      key_x00101.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_x00101,0x73,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00102.y = (float)_UNK_?;
      key_x00102.x = (float)uVar2;
      key_x00102.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_x00102,0x74,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00103.y = (float)_UNK_?;
      key_x00103.x = (float)uVar2;
      key_x00103.z = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_x00103,0x75,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00104.y = (float)_UNK_?;
      key_x00104.x = (float)uVar2;
      key_x00104.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_x00104,0x76,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00105.y = (float)_UNK_?;
      key_x00105.x = (float)uVar2;
      key_x00105.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_x00105,0x77,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00106.y = (float)uVar2;
      key_x00106.x = (float)uVar2;
      key_x00106.z = -0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_x00106,0x78,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00107.y = (float)uVar2;
      key_x00107.x = (float)uVar2;
      key_x00107.z = -0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_x00107,0x79,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00108.y = (float)uVar2;
      key_x00108.x = (float)uVar2;
      key_x00108.z = 0.0;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_x00108,0x7a,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00109.y = (float)uVar2;
      key_x00109.x = (float)uVar2;
      key_x00109.z = 0.25;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_x00109,0x7b,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      key_x00110.y = (float)uVar2;
      key_x00110.x = (float)uVar2;
      key_x00110.z = 0.5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]::
      Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                (this,key_x00110,0x7c,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                );
      TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable = this;
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

