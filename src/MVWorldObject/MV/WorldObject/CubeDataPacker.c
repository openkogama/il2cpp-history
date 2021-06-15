
/* Vector3[] ByteArrayToCorners(Byte[]) */

Vector3__Array *
MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteArrayToCorners
          (Byte__Array *byteArray,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVStack_1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
  uVar2 = 0;
  while ((pVStack_1 != (Vector3__Array *)0x0 && (byteArray != (Byte__Array *)0x0))) {
    if (byteArray->max_length <= uVar2) goto code_?;
    _uStack_c = CONCAT31(uStack_3,byteArray->vector[uVar2]);
    if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    pVVar4 = CubeDataPacker_ByteToVector3(&VStack_5,(uint8_t)_uStack_c,(MethodInfo *)0x0);
    uStack_6._0_4_ = pVVar4->x;
    uStack_6._4_4_ = pVVar4->y;
    fVar7 = pVVar4->z;
    puVar8 = (undefined8 *)func_?(uVar2);
    uVar2 = uVar2 + 1;
    *puVar8 = uStack_6;
    *(float *)(puVar8 + 1) = fVar7;
    if (7 < (int)uVar2) {
      return pVStack_1;
    }
  }
  func_?(0);
code_?:
  uVar9 = func_?(0,0);
  func_?(uVar9);
  pcVar10 = (code *)swi(3);
  pVVar11 = (Vector3__Array *)(*pcVar10)();
  return pVVar11;
}


/* Void ByteArrayToCorners(Byte[] ByRef, Vector3[] ByRef) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteArrayToCorners_1
               (Byte__Array **byteArray,Vector3__Array **corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (MethodInfo *)0x0;
  do {
    if ((*byteArray == (Byte__Array *)0x0) || (*corners == (Vector3__Array *)0x0)) {
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    uVar3 = func_?(pMVar1,0);
    vector = (Vector3 *)&UNK_?;
    method_00 = pMVar1;
    key = (uint8_t *)func_?(pMVar1,uVar3);
    CubeDataPacker_ByteToVector3_1(key,vector,method_00);
    pMVar1 = (MethodInfo *)((int)&pMVar1->methodPointer + 1);
  } while ((int)pMVar1 < 8);
  return;
}


/* Vector3 ByteToVector3(Byte) */

Vector3 * MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteToVector3
                    (Vector3 *__return_storage_ptr__,uint8_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
  }
  pVVar1 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->bytePositionLookUpTable;
  if (pVVar1 == (Vector3__Array *)0x0) {
    func_?(0);
  }
  else {
    uVar2 = (uint)key;
    if (uVar2 < pVVar1->max_length) {
      fVar3 = pVVar1->vector[uVar2].y;
      fVar4 = pVVar1->vector[uVar2].z;
      __return_storage_ptr__->x = pVVar1->vector[uVar2].x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
  }
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* Void ByteToVector3(Byte ByRef, Vector3 ByRef) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteToVector3_1
               (uint8_t *key,Vector3 *vector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
  }
  pVVar1 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->bytePositionLookUpTable;
  if (pVVar1 == (Vector3__Array *)0x0) {
    func_?(0);
  }
  else {
    uVar2 = (uint)*key;
    if (uVar2 < pVVar1->max_length) {
      fVar3 = pVVar1->vector[uVar2].y;
      fVar4 = pVVar1->vector[uVar2].z;
      vector->x = pVVar1->vector[uVar2].x;
      vector->y = fVar3;
      vector->z = fVar4;
      return;
    }
  }
  uVar5 = func_?(0,0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Byte[] CornersToByteArray(Vector3[]) */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_CornersToByteArray
          (Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)func_?(TypeInfo__System__Byte,8);
  uVar2 = 0;
  pVVar3 = corners->vector;
  while (corners != (Vector3__Array *)0x0) {
    if (corners->max_length <= uVar2) goto code_?;
    fVar4 = pVVar3->z;
    uVar5._0_4_ = pVVar3->x;
    uVar5._4_4_ = pVVar3->y;
    if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    corner.z = fVar4;
    corner.x = (float)(int)uVar5;
    corner.y = (float)(int)((ulonglong)uVar5 >> 0x20);
    uVar6 = CubeDataPacker_Vector3ToByte(corner,(MethodInfo *)0x0);
    if (pBVar1 == (Byte__Array *)0x0) break;
    func_?(uVar2,uVar6);
    uVar2 = uVar2 + 1;
    pVVar3 = pVVar3 + 1;
    if (7 < (int)uVar2) {
      return pBVar1;
    }
  }
  func_?(0);
code_?:
  uVar7 = func_?(0,0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar8)();
  return pBVar1;
}


/* Void GetCompressionFlags(Byte ByRef, Byte[], Byte[]) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_GetCompressionFlags
               (uint8_t *compressionFlags,Byte__Array *byteCorners,Byte__Array *materials,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  bVar2 = true;
  if (byteCorners == (Byte__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  for (; (int)uVar1 < (int)byteCorners->max_length; uVar1 = uVar1 + 1) {
    if (byteCorners->max_length <= uVar1) goto code_?;
    uVar5 = byteCorners->vector[uVar1];
    if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    if (TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->IdentityByteCorners ==
        (Byte__Array *)0x0) goto code_?;
    uVar6 = func_?(uVar1);
    if (uVar5 != uVar6) {
      bVar2 = false;
    }
  }
  bVar7 = true;
  bVar8 = true;
  iVar9 = 0;
  do {
    if (0 < iVar9) {
      if (materials == (Byte__Array *)0x0) goto code_?;
      cVar10 = func_?(iVar9 + -1);
      cVar11 = func_?(iVar9);
      bVar7 = bVar8;
      if (cVar10 != cVar11) {
        bVar7 = false;
        bVar8 = bVar7;
      }
    }
    iVar9 = iVar9 + 1;
    if (5 < iVar9) {
      if (bVar2) {
        *compressionFlags = *compressionFlags | 1;
      }
      if (bVar7) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((cubeFlags & 1) == 0) {
    if (bp == (BytePacker *)0x0) goto code_?;
    pBVar1 = BytePacker::BytePacker_ReadBytes(bp,8,(MethodInfo *)0x0);
  }
  else {
    if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    pBVar1 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->IdentityByteCorners;
  }
  *byteCorners = pBVar1;
  if (bp != (BytePacker *)0x0) {
    if ((cubeFlags & 2) == 0) {
      pBVar1 = BytePacker::BytePacker_ReadBytes(bp,6,(MethodInfo *)0x0);
      *materials = pBVar1;
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
  }
code_?:
  func_?(0);
code_?:
  func_?();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
  }
  pDVar1 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable;
  if (pDVar1 != (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)0x0) {
    key.z = corner.z;
    key.x = corner.x;
    key.y = corner.y;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::
            Byte]::Dictionary_2_UnityEngine_Vector3_System_Byte__ContainsKey
                      (pDVar1,key,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__ContainsKey_UnityEngine__Vector3_
                      );
    if (bVar2 == 0) {
      iVar3 = 0;
      do {
        fVar4 = (float10)func_?(&corner,iVar3,0);
        if ((float)fVar4 == 0.0) {
          func_?(&corner,iVar3,0,0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 3);
    }
    if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    pDVar1 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable;
    if (pDVar1 != (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)0x0) {
      key_00.z = corner.z;
      key_00.x = corner.x;
      key_00.y = corner.y;
      uVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::
              Byte]::Dictionary_2_UnityEngine_Vector3_System_Byte__get_Item
                        (pDVar1,key_00,
                         MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__get_Item_UnityEngine__Vector3_
                        );
      return uVar5;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  uVar5 = (*pcVar6)();
  return uVar5;
}


/* Void WriteCompressedCube(BytePacker, Int16, Int16, Int16, Byte[], Byte[]) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_WriteCompressedCube
               (BytePacker *bp,int16_t x,int16_t y,int16_t z,Byte__Array *byteCorners,
               Byte__Array *materials,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (bp != (BytePacker *)0x0) {
    BytePacker::BytePacker_Write_4(bp,x,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_4(bp,y,(MethodInfo *)0x0);
    BytePacker::BytePacker_Write_4(bp,z,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000) != 0
      ) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  bVar2 = 1;
  if (byteCorners != (Byte__Array *)0x0) {
    for (; (int)uVar1 < (int)byteCorners->max_length; uVar1 = uVar1 + 1) {
      if (byteCorners->max_length <= uVar1) goto code_?;
      uVar3 = byteCorners->vector[uVar1];
      if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
      }
      if (TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->IdentityByteCorners ==
          (Byte__Array *)0x0) goto code_?;
      uVar4 = func_?(uVar1);
      if (uVar3 != uVar4) {
        bVar2 = 0;
      }
    }
    bVar5 = true;
    iVar6 = 0;
    bVar7 = true;
    do {
      if (0 < iVar6) {
        if (materials == (Byte__Array *)0x0) goto code_?;
        cVar8 = func_?(iVar6 + -1);
        cVar9 = func_?(iVar6);
        bVar5 = bVar7;
        if (cVar8 != cVar9) {
          bVar5 = false;
          bVar7 = bVar5;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 6);
    if (bVar5) {
      bVar2 = bVar2 | 2;
    }
    if (bp != (BytePacker *)0x0) {
      BytePacker::BytePacker_Write(bp,bVar2 | 4,(MethodInfo *)0x0);
      if ((bVar2 & 1) == 0) {
        BytePacker::BytePacker_Write_2(bp,byteCorners,0,byteCorners->max_length,(MethodInfo *)0x0);
      }
      if (materials != (Byte__Array *)0x0) {
        uVar10 = 0;
        if ((bVar2 & 2) == 0) {
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
  func_?(0);
code_?:
  uVar10 = 0;
  uVar11 = func_?(0,0);
  func_?(uVar11);
code_?:
  uVar10 = func_?(0,uVar10);
  func_?(uVar10);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* CubeDataPacker() */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,0x7d);
  if (pVVar1 == (Vector3__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    fStack_3 = 0.0;
    uStack_4 = 0;
    func_?(&uStack_4,0xbf000000,0xbf000000,0xbf000000,0);
    if (pVVar1->max_length == 0) goto code_?;
    pVVar1->vector[0].x = (float)(undefined4)uStack_4;
    pVVar1->vector[0].y = (float)uStack_4._4_4_;
    pVVar1->vector[0].z = fStack_3;
    uStack_5 = 0;
    fStack_6 = 0.0;
    func_?(&uStack_5,0xbf000000,0xbf000000,0xbe800000,0);
    if (pVVar1->max_length < 2) goto code_?;
    pVVar1->vector[1].x = (float)(undefined4)uStack_5;
    pVVar1->vector[1].y = (float)uStack_5._4_4_;
    pVVar1->vector[1].z = fStack_6;
    uVar7 = 0;
    func_?(&stack0xffffffd8,0xbf000000,0xbf000000,0,0);
    if (pVVar1->max_length < 3) goto code_?;
    pVVar1->vector[2].x = (float)(int)uVar7;
    pVVar1->vector[2].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1->vector[2].z = 0.0;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffffcc,0xbf000000,0xbf000000,0x3e800000,0);
    if (pVVar1->max_length < 4) goto code_?;
    pVVar1->vector[3].x = (float)uVar2;
    pVVar1->vector[3].y = (float)uVar8;
    pVVar1->vector[3].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffffc0,0xbf000000,0xbf000000,0x3f000000,0);
    if (pVVar1->max_length < 5) goto code_?;
    pVVar1->vector[4].x = (float)(int)uVar7;
    pVVar1->vector[4].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1->vector[4].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffffb4,0xbf000000,0xbe800000,0xbf000000,0);
    if (pVVar1->max_length < 6) goto code_?;
    pVVar1->vector[5].x = (float)uVar2;
    pVVar1->vector[5].y = (float)uVar8;
    pVVar1->vector[5].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffffa8,0xbf000000,0xbe800000,0xbe800000,0);
    if (pVVar1->max_length < 7) goto code_?;
    pVVar1->vector[6].x = (float)(int)uVar7;
    pVVar1->vector[6].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1->vector[6].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffff9c,0xbf000000,0xbe800000,0,0);
    if (pVVar1->max_length < 8) goto code_?;
    pVVar1->vector[7].x = (float)uVar2;
    pVVar1->vector[7].y = (float)uVar8;
    pVVar1->vector[7].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffff90,0xbf000000,0xbe800000,0x3e800000,0);
    if (pVVar1->max_length < 9) goto code_?;
    pVVar1->vector[8].x = (float)(int)uVar7;
    pVVar1->vector[8].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1->vector[8].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffff84,0xbf000000,0xbe800000,0x3f000000,0);
    if (pVVar1->max_length < 10) goto code_?;
    pVVar1->vector[9].x = (float)uVar2;
    pVVar1->vector[9].y = (float)uVar8;
    pVVar1->vector[9].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffff78,0xbf000000,0,0xbf000000,0);
    if (pVVar1->max_length < 0xb) goto code_?;
    pVVar1->vector[10].x = (float)(int)uVar7;
    pVVar1->vector[10].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1->vector[10].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffff6c,0xbf000000,0,0xbe800000,0);
    if (pVVar1->max_length < 0xc) goto code_?;
    pVVar1->vector[0xb].x = (float)uVar2;
    pVVar1->vector[0xb].y = (float)uVar8;
    pVVar1->vector[0xb].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffff60,0xbf000000,0,0,0);
    if (pVVar1->max_length < 0xd) goto code_?;
    pVVar1->vector[0xc].x = (float)(int)uVar7;
    pVVar1->vector[0xc].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1->vector[0xc].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffff54,0xbf000000,0,0x3e800000,0);
    if (pVVar1->max_length < 0xe) goto code_?;
    pVVar1->vector[0xd].x = (float)uVar2;
    pVVar1->vector[0xd].y = (float)uVar8;
    pVVar1->vector[0xd].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffff48,0xbf000000,0,0x3f000000,0);
    if (pVVar1->max_length < 0xf) goto code_?;
    pVVar1->vector[0xe].x = (float)(int)uVar7;
    pVVar1->vector[0xe].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1->vector[0xe].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffff3c,0xbf000000,0x3e800000,0xbf000000,0);
    if (pVVar1->max_length < 0x10) goto code_?;
    pVVar1->vector[0xf].x = (float)uVar2;
    pVVar1->vector[0xf].y = (float)uVar8;
    pVVar1->vector[0xf].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffff30,0xbf000000,0x3e800000,0xbe800000,0);
    if (pVVar1->max_length < 0x11) goto code_?;
    pVVar1->vector[0x10].x = (float)(int)uVar7;
    pVVar1->vector[0x10].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1->vector[0x10].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffff24,0xbf000000,0x3e800000,0,0);
    if (pVVar1->max_length < 0x12) goto code_?;
    pVVar1->vector[0x11].x = (float)uVar2;
    pVVar1->vector[0x11].y = (float)uVar8;
    pVVar1->vector[0x11].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffff18,0xbf000000,0x3e800000,0x3e800000,0);
    if (pVVar1->max_length < 0x13) goto code_?;
    pVVar1->vector[0x12].x = (float)(int)uVar7;
    pVVar1->vector[0x12].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1->vector[0x12].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffff0c,0xbf000000,0x3e800000,0x3f000000,0);
    if (pVVar1->max_length < 0x14) goto code_?;
    pVVar1->vector[0x13].x = (float)uVar2;
    pVVar1->vector[0x13].y = (float)uVar8;
    pVVar1->vector[0x13].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xffffff00,0xbf000000,0x3f000000,0xbf000000,0);
    if (pVVar1->max_length < 0x15) goto code_?;
    pVVar1->vector[0x14].x = (float)(int)uVar7;
    pVVar1->vector[0x14].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1->vector[0x14].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffef4,0xbf000000,0x3f000000,0xbe800000,0);
    if (pVVar1->max_length < 0x16) goto code_?;
    pVVar1->vector[0x15].x = (float)uVar2;
    pVVar1->vector[0x15].y = (float)uVar8;
    pVVar1->vector[0x15].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffee8,0xbf000000,0x3f000000,0,0);
    if (pVVar1->max_length < 0x17) goto code_?;
    pVVar1->vector[0x16].x = (float)(int)uVar7;
    pVVar1->vector[0x16].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1->vector[0x16].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffedc,0xbf000000,0x3f000000,0x3e800000,0);
    if (pVVar1->max_length < 0x18) goto code_?;
    pVVar1->vector[0x17].x = (float)uVar2;
    pVVar1->vector[0x17].y = (float)uVar8;
    pVVar1->vector[0x17].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffed0,0xbf000000,0x3f000000,0x3f000000,0);
    if (pVVar1->max_length < 0x19) goto code_?;
    pVVar1->vector[0x18].x = (float)(int)uVar7;
    pVVar1->vector[0x18].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1->vector[0x18].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffec4,0xbe800000,0xbf000000,0xbf000000,0);
    if (pVVar1->max_length < 0x1a) goto code_?;
    pVVar1->vector[0x19].x = (float)uVar2;
    pVVar1->vector[0x19].y = (float)uVar8;
    pVVar1->vector[0x19].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffeb8,0xbe800000,0xbf000000,0xbe800000,0);
    if (pVVar1->max_length < 0x1b) goto code_?;
    pVVar1->vector[0x1a].x = (float)(int)uVar7;
    pVVar1->vector[0x1a].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1->vector[0x1a].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffeac,0xbe800000,0xbf000000,0,0);
    if (pVVar1->max_length < 0x1c) goto code_?;
    pVVar1->vector[0x1b].x = (float)uVar2;
    pVVar1->vector[0x1b].y = (float)uVar8;
    pVVar1->vector[0x1b].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffea0,0xbe800000,0xbf000000,0x3e800000,0);
    if (pVVar1->max_length < 0x1d) goto code_?;
    pVVar1->vector[0x1c].x = (float)(int)uVar7;
    pVVar1->vector[0x1c].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1->vector[0x1c].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffe94,0xbe800000,0xbf000000,0x3f000000,0);
    if (pVVar1->max_length < 0x1e) goto code_?;
    pVVar1->vector[0x1d].x = (float)uVar2;
    pVVar1->vector[0x1d].y = (float)uVar8;
    pVVar1->vector[0x1d].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffe88,0xbe800000,0xbe800000,0xbf000000,0);
    if (pVVar1->max_length < 0x1f) goto code_?;
    pVVar1->vector[0x1e].x = (float)(int)uVar7;
    pVVar1->vector[0x1e].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1->vector[0x1e].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffe7c,0xbe800000,0xbe800000,0xbe800000,0);
    if (pVVar1->max_length < 0x20) goto code_?;
    pVVar1->vector[0x1f].x = (float)uVar2;
    pVVar1->vector[0x1f].y = (float)uVar8;
    pVVar1->vector[0x1f].z = fVar9;
    uVar7 = 0;
    pIVar10 = (Il2CppArrayBounds *)0x0;
    func_?(&stack0xfffffe70,0xbe800000,0xbe800000,0,0);
    if (pVVar1->max_length < 0x21) goto code_?;
    pVVar1[1].klass = (Vector3__Array__Class *)(int)uVar7;
    pVVar1[1].monitor = (MonitorData *)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[1].bounds = pIVar10;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffe64,0xbe800000,0xbe800000,0x3e800000,0);
    if (pVVar1->max_length < 0x22) goto code_?;
    pVVar1[1].max_length = uVar2;
    pVVar1[1].vector[0].x = (float)uVar8;
    pVVar1[1].vector[0].y = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffe58,0xbe800000,0xbe800000,0x3f000000,0);
    if (pVVar1->max_length < 0x23) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0].z = uVar7;
    pVVar1[1].vector[1].y = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffe4c,0xbe800000,0,0xbf000000,0);
    if (pVVar1->max_length < 0x24) goto code_?;
    *(ulonglong *)&pVVar1[1].vector[1].z = CONCAT44(uVar8,uVar2);
    pVVar1[1].vector[2].y = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffe40,0xbe800000,0,0xbe800000,0);
    if (pVVar1->max_length < 0x25) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[2].z = uVar7;
    pVVar1[1].vector[3].y = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffe34,0xbe800000,0,0,0);
    if (pVVar1->max_length < 0x26) goto code_?;
    *(ulonglong *)&pVVar1[1].vector[3].z = CONCAT44(uVar8,uVar2);
    pVVar1[1].vector[4].y = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffe28,0xbe800000,0,0x3e800000,0);
    if (pVVar1->max_length < 0x27) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[4].z = uVar7;
    pVVar1[1].vector[5].y = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffe1c,0xbe800000,0,0x3f000000,0);
    if (pVVar1->max_length < 0x28) goto code_?;
    *(ulonglong *)&pVVar1[1].vector[5].z = CONCAT44(uVar8,uVar2);
    pVVar1[1].vector[6].y = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffe10,0xbe800000,0x3e800000,0xbf000000,0);
    if (pVVar1->max_length < 0x29) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[6].z = uVar7;
    pVVar1[1].vector[7].y = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffe04,0xbe800000,0x3e800000,0xbe800000,0);
    if (pVVar1->max_length < 0x2a) goto code_?;
    *(ulonglong *)&pVVar1[1].vector[7].z = CONCAT44(uVar8,uVar2);
    pVVar1[1].vector[8].y = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffdf8,0xbe800000,0x3e800000,0,0);
    if (pVVar1->max_length < 0x2b) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[8].z = uVar7;
    pVVar1[1].vector[9].y = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffdec,0xbe800000,0x3e800000,0x3e800000,0);
    if (pVVar1->max_length < 0x2c) goto code_?;
    *(ulonglong *)&pVVar1[1].vector[9].z = CONCAT44(uVar8,uVar2);
    pVVar1[1].vector[10].y = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffde0,0xbe800000,0x3e800000,0x3f000000,0);
    if (pVVar1->max_length < 0x2d) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[10].z = uVar7;
    pVVar1[1].vector[0xb].y = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffdd4,0xbe800000,0x3f000000,0xbf000000,0);
    if (pVVar1->max_length < 0x2e) goto code_?;
    *(ulonglong *)&pVVar1[1].vector[0xb].z = CONCAT44(uVar8,uVar2);
    pVVar1[1].vector[0xc].y = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffdc8,0xbe800000,0x3f000000,0xbe800000,0);
    if (pVVar1->max_length < 0x2f) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0xc].z = uVar7;
    pVVar1[1].vector[0xd].y = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffdbc,0xbe800000,0x3f000000,0,0);
    if (pVVar1->max_length < 0x30) goto code_?;
    *(ulonglong *)&pVVar1[1].vector[0xd].z = CONCAT44(uVar8,uVar2);
    pVVar1[1].vector[0xe].y = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffdb0,0xbe800000,0x3f000000,0x3e800000,0);
    if (pVVar1->max_length < 0x31) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0xe].z = uVar7;
    pVVar1[1].vector[0xf].y = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffda4,0xbe800000,0x3f000000,0x3f000000,0);
    if (pVVar1->max_length < 0x32) goto code_?;
    *(ulonglong *)&pVVar1[1].vector[0xf].z = CONCAT44(uVar8,uVar2);
    pVVar1[1].vector[0x10].y = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffd98,0,0xbf000000,0xbf000000,0);
    if (pVVar1->max_length < 0x33) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x10].z = uVar7;
    pVVar1[1].vector[0x11].y = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffd8c,0,0xbf000000,0xbe800000,0);
    if (pVVar1->max_length < 0x34) goto code_?;
    *(ulonglong *)&pVVar1[1].vector[0x11].z = CONCAT44(uVar8,uVar2);
    pVVar1[1].vector[0x12].y = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffd80,0,0xbf000000,0,0);
    if (pVVar1->max_length < 0x35) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x12].z = uVar7;
    pVVar1[1].vector[0x13].y = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffd74,0,0xbf000000,0x3e800000,0);
    if (pVVar1->max_length < 0x36) goto code_?;
    *(ulonglong *)&pVVar1[1].vector[0x13].z = CONCAT44(uVar8,uVar2);
    pVVar1[1].vector[0x14].y = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffd68,0,0xbf000000,0x3f000000,0);
    if (pVVar1->max_length < 0x37) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x14].z = uVar7;
    pVVar1[1].vector[0x15].y = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffd5c,0,0xbe800000,0xbf000000,0);
    if (pVVar1->max_length < 0x38) goto code_?;
    *(ulonglong *)&pVVar1[1].vector[0x15].z = CONCAT44(uVar8,uVar2);
    pVVar1[1].vector[0x16].y = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffd50,0,0xbe800000,0xbe800000,0);
    if (pVVar1->max_length < 0x39) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x16].z = uVar7;
    pVVar1[1].vector[0x17].y = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffd44,0,0xbe800000,0,0);
    if (pVVar1->max_length < 0x3a) goto code_?;
    *(ulonglong *)&pVVar1[1].vector[0x17].z = CONCAT44(uVar8,uVar2);
    pVVar1[1].vector[0x18].y = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffd38,0,0xbe800000,0x3e800000,0);
    if (pVVar1->max_length < 0x3b) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x18].z = uVar7;
    pVVar1[1].vector[0x19].y = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffd2c,0,0xbe800000,0x3f000000,0);
    if (pVVar1->max_length < 0x3c) goto code_?;
    *(ulonglong *)&pVVar1[1].vector[0x19].z = CONCAT44(uVar8,uVar2);
    pVVar1[1].vector[0x1a].y = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffd20,0,0,0xbf000000,0);
    if (pVVar1->max_length < 0x3d) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x1a].z = uVar7;
    pVVar1[1].vector[0x1b].y = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffd14,0,0,0xbe800000,0);
    if (pVVar1->max_length < 0x3e) goto code_?;
    *(ulonglong *)&pVVar1[1].vector[0x1b].z = CONCAT44(uVar8,uVar2);
    pVVar1[1].vector[0x1c].y = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffd08,0,0,0,0);
    if (pVVar1->max_length < 0x3f) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x1c].z = uVar7;
    pVVar1[1].vector[0x1d].y = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffcfc,0,0,0x3e800000,0);
    if (pVVar1->max_length < 0x40) goto code_?;
    *(ulonglong *)&pVVar1[1].vector[0x1d].z = CONCAT44(uVar8,uVar2);
    pVVar1[1].vector[0x1e].y = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffcf0,0,0,0x3f000000,0);
    if (pVVar1->max_length < 0x41) goto code_?;
    *(undefined8 *)&pVVar1[1].vector[0x1e].z = uVar7;
    pVVar1[1].vector[0x1f].y = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    pMVar11 = (MonitorData *)0x0;
    func_?(&stack0xfffffce4,0,0x3e800000,0xbf000000,0);
    if (pVVar1->max_length < 0x42) goto code_?;
    *(ulonglong *)&pVVar1[1].vector[0x1f].z = CONCAT44(uVar8,uVar2);
    pVVar1[2].monitor = pMVar11;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffcd8,0,0x3e800000,0xbe800000,0);
    if (pVVar1->max_length < 0x43) goto code_?;
    pVVar1[2].bounds = (Il2CppArrayBounds *)(int)uVar7;
    pVVar1[2].max_length = (int)((ulonglong)uVar7 >> 0x20);
    pVVar1[2].vector[0].x = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffccc,0,0x3e800000,0,0);
    if (pVVar1->max_length < 0x44) goto code_?;
    pVVar1[2].vector[0].y = (float)uVar2;
    pVVar1[2].vector[0].z = (float)uVar8;
    pVVar1[2].vector[1].x = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffcc0,0,0x3e800000,0x3e800000,0);
    if (pVVar1->max_length < 0x45) goto code_?;
    pVVar1[2].vector[1].y = (float)(int)uVar7;
    pVVar1[2].vector[1].z = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[2].vector[2].x = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffcb4,0,0x3e800000,0x3f000000,0);
    if (pVVar1->max_length < 0x46) goto code_?;
    pVVar1[2].vector[2].y = (float)uVar2;
    pVVar1[2].vector[2].z = (float)uVar8;
    pVVar1[2].vector[3].x = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffca8,0,0x3f000000,0xbf000000,0);
    if (pVVar1->max_length < 0x47) goto code_?;
    pVVar1[2].vector[3].y = (float)(int)uVar7;
    pVVar1[2].vector[3].z = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[2].vector[4].x = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffc9c,0,0x3f000000,0xbe800000,0);
    if (pVVar1->max_length < 0x48) goto code_?;
    pVVar1[2].vector[4].y = (float)uVar2;
    pVVar1[2].vector[4].z = (float)uVar8;
    pVVar1[2].vector[5].x = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffc90,0,0x3f000000,0,0);
    if (pVVar1->max_length < 0x49) goto code_?;
    pVVar1[2].vector[5].y = (float)(int)uVar7;
    pVVar1[2].vector[5].z = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[2].vector[6].x = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffc84,0,0x3f000000,0x3e800000,0);
    if (pVVar1->max_length < 0x4a) goto code_?;
    pVVar1[2].vector[6].y = (float)uVar2;
    pVVar1[2].vector[6].z = (float)uVar8;
    pVVar1[2].vector[7].x = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffc78,0,0x3f000000,0x3f000000,0);
    if (pVVar1->max_length < 0x4b) goto code_?;
    pVVar1[2].vector[7].y = (float)(int)uVar7;
    pVVar1[2].vector[7].z = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[2].vector[8].x = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffc6c,0x3e800000,0xbf000000,0xbf000000,0);
    if (pVVar1->max_length < 0x4c) goto code_?;
    pVVar1[2].vector[8].y = (float)uVar2;
    pVVar1[2].vector[8].z = (float)uVar8;
    pVVar1[2].vector[9].x = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffc60,0x3e800000,0xbf000000,0xbe800000,0);
    if (pVVar1->max_length < 0x4d) goto code_?;
    pVVar1[2].vector[9].y = (float)(int)uVar7;
    pVVar1[2].vector[9].z = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[2].vector[10].x = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffc54,0x3e800000,0xbf000000,0,0);
    if (pVVar1->max_length < 0x4e) goto code_?;
    pVVar1[2].vector[10].y = (float)uVar2;
    pVVar1[2].vector[10].z = (float)uVar8;
    pVVar1[2].vector[0xb].x = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffc48,0x3e800000,0xbf000000,0x3e800000,0);
    if (pVVar1->max_length < 0x4f) goto code_?;
    pVVar1[2].vector[0xb].y = (float)(int)uVar7;
    pVVar1[2].vector[0xb].z = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[2].vector[0xc].x = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffc3c,0x3e800000,0xbf000000,0x3f000000,0);
    if (pVVar1->max_length < 0x50) goto code_?;
    pVVar1[2].vector[0xc].y = (float)uVar2;
    pVVar1[2].vector[0xc].z = (float)uVar8;
    pVVar1[2].vector[0xd].x = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffc30,0x3e800000,0xbe800000,0xbf000000,0);
    if (pVVar1->max_length < 0x51) goto code_?;
    pVVar1[2].vector[0xd].y = (float)(int)uVar7;
    pVVar1[2].vector[0xd].z = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[2].vector[0xe].x = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffc24,0x3e800000,0xbe800000,0xbe800000,0);
    if (pVVar1->max_length < 0x52) goto code_?;
    pVVar1[2].vector[0xe].y = (float)uVar2;
    pVVar1[2].vector[0xe].z = (float)uVar8;
    pVVar1[2].vector[0xf].x = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffc18,0x3e800000,0xbe800000,0,0);
    if (pVVar1->max_length < 0x53) goto code_?;
    pVVar1[2].vector[0xf].y = (float)(int)uVar7;
    pVVar1[2].vector[0xf].z = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[2].vector[0x10].x = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffc0c,0x3e800000,0xbe800000,0x3e800000,0);
    if (pVVar1->max_length < 0x54) goto code_?;
    pVVar1[2].vector[0x10].y = (float)uVar2;
    pVVar1[2].vector[0x10].z = (float)uVar8;
    pVVar1[2].vector[0x11].x = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffc00,0x3e800000,0xbe800000,0x3f000000,0);
    if (pVVar1->max_length < 0x55) goto code_?;
    pVVar1[2].vector[0x11].y = (float)(int)uVar7;
    pVVar1[2].vector[0x11].z = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[2].vector[0x12].x = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffbf4,0x3e800000,0,0xbf000000,0);
    if (pVVar1->max_length < 0x56) goto code_?;
    pVVar1[2].vector[0x12].y = (float)uVar2;
    pVVar1[2].vector[0x12].z = (float)uVar8;
    pVVar1[2].vector[0x13].x = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffbe8,0x3e800000,0,0xbe800000,0);
    if (pVVar1->max_length < 0x57) goto code_?;
    pVVar1[2].vector[0x13].y = (float)(int)uVar7;
    pVVar1[2].vector[0x13].z = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[2].vector[0x14].x = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffbdc,0x3e800000,0,0,0);
    if (pVVar1->max_length < 0x58) goto code_?;
    pVVar1[2].vector[0x14].y = (float)uVar2;
    pVVar1[2].vector[0x14].z = (float)uVar8;
    pVVar1[2].vector[0x15].x = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffbd0,0x3e800000,0,0x3e800000,0);
    if (pVVar1->max_length < 0x59) goto code_?;
    pVVar1[2].vector[0x15].y = (float)(int)uVar7;
    pVVar1[2].vector[0x15].z = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[2].vector[0x16].x = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffbc4,0x3e800000,0,0x3f000000,0);
    if (pVVar1->max_length < 0x5a) goto code_?;
    pVVar1[2].vector[0x16].y = (float)uVar2;
    pVVar1[2].vector[0x16].z = (float)uVar8;
    pVVar1[2].vector[0x17].x = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffbb8,0x3e800000,0x3e800000,0xbf000000,0);
    if (pVVar1->max_length < 0x5b) goto code_?;
    pVVar1[2].vector[0x17].y = (float)(int)uVar7;
    pVVar1[2].vector[0x17].z = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[2].vector[0x18].x = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffbac,0x3e800000,0x3e800000,0xbe800000,0);
    if (pVVar1->max_length < 0x5c) goto code_?;
    pVVar1[2].vector[0x18].y = (float)uVar2;
    pVVar1[2].vector[0x18].z = (float)uVar8;
    pVVar1[2].vector[0x19].x = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffba0,0x3e800000,0x3e800000,0,0);
    if (pVVar1->max_length < 0x5d) goto code_?;
    pVVar1[2].vector[0x19].y = (float)(int)uVar7;
    pVVar1[2].vector[0x19].z = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[2].vector[0x1a].x = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffb94,0x3e800000,0x3e800000,0x3e800000,0);
    if (pVVar1->max_length < 0x5e) goto code_?;
    pVVar1[2].vector[0x1a].y = (float)uVar2;
    pVVar1[2].vector[0x1a].z = (float)uVar8;
    pVVar1[2].vector[0x1b].x = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffb88,0x3e800000,0x3e800000,0x3f000000,0);
    if (pVVar1->max_length < 0x5f) goto code_?;
    pVVar1[2].vector[0x1b].y = (float)(int)uVar7;
    pVVar1[2].vector[0x1b].z = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[2].vector[0x1c].x = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffb7c,0x3e800000,0x3f000000,0xbf000000,0);
    if (pVVar1->max_length < 0x60) goto code_?;
    pVVar1[2].vector[0x1c].y = (float)uVar2;
    pVVar1[2].vector[0x1c].z = (float)uVar8;
    pVVar1[2].vector[0x1d].x = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffb70,0x3e800000,0x3f000000,0xbe800000,0);
    if (pVVar1->max_length < 0x61) goto code_?;
    pVVar1[2].vector[0x1d].y = (float)(int)uVar7;
    pVVar1[2].vector[0x1d].z = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[2].vector[0x1e].x = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffb64,0x3e800000,0x3f000000,0,0);
    if (pVVar1->max_length < 0x62) goto code_?;
    pVVar1[2].vector[0x1e].y = (float)uVar2;
    pVVar1[2].vector[0x1e].z = (float)uVar8;
    pVVar1[2].vector[0x1f].x = fVar9;
    uVar7 = 0;
    pVVar12 = (Vector3__Array__Class *)0x0;
    func_?(&stack0xfffffb58,0x3e800000,0x3f000000,0x3e800000,0);
    if (pVVar1->max_length < 99) goto code_?;
    pVVar1[2].vector[0x1f].y = (float)(int)uVar7;
    pVVar1[2].vector[0x1f].z = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[3].klass = pVVar12;
    uVar2 = 0;
    uVar8 = 0;
    iVar13 = 0;
    func_?(&stack0xfffffb4c,0x3e800000,0x3f000000,0x3f000000,0);
    if (pVVar1->max_length < 100) goto code_?;
    pVVar1[3].monitor = (MonitorData *)uVar2;
    pVVar1[3].bounds = (Il2CppArrayBounds *)uVar8;
    pVVar1[3].max_length = iVar13;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffb40,0x3f000000,0xbf000000,0xbf000000,0);
    if (pVVar1->max_length < 0x65) goto code_?;
    pVVar1[3].vector[0].x = (float)(int)uVar7;
    pVVar1[3].vector[0].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[3].vector[0].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffb34,0x3f000000,0xbf000000,0xbe800000,0);
    if (pVVar1->max_length < 0x66) goto code_?;
    pVVar1[3].vector[1].x = (float)uVar2;
    pVVar1[3].vector[1].y = (float)uVar8;
    pVVar1[3].vector[1].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffb28,0x3f000000,0xbf000000,0,0);
    if (pVVar1->max_length < 0x67) goto code_?;
    pVVar1[3].vector[2].x = (float)(int)uVar7;
    pVVar1[3].vector[2].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[3].vector[2].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffb1c,0x3f000000,0xbf000000,0x3e800000,0);
    if (pVVar1->max_length < 0x68) goto code_?;
    pVVar1[3].vector[3].x = (float)uVar2;
    pVVar1[3].vector[3].y = (float)uVar8;
    pVVar1[3].vector[3].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffb10,0x3f000000,0xbf000000,0x3f000000,0);
    if (pVVar1->max_length < 0x69) goto code_?;
    pVVar1[3].vector[4].x = (float)(int)uVar7;
    pVVar1[3].vector[4].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[3].vector[4].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffb04,0x3f000000,0xbe800000,0xbf000000,0);
    if (pVVar1->max_length < 0x6a) goto code_?;
    pVVar1[3].vector[5].x = (float)uVar2;
    pVVar1[3].vector[5].y = (float)uVar8;
    pVVar1[3].vector[5].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffaf8,0x3f000000,0xbe800000,0xbe800000,0);
    if (pVVar1->max_length < 0x6b) goto code_?;
    pVVar1[3].vector[6].x = (float)(int)uVar7;
    pVVar1[3].vector[6].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[3].vector[6].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffaec,0x3f000000,0xbe800000,0,0);
    if (pVVar1->max_length < 0x6c) goto code_?;
    pVVar1[3].vector[7].x = (float)uVar2;
    pVVar1[3].vector[7].y = (float)uVar8;
    pVVar1[3].vector[7].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffae0,0x3f000000,0xbe800000,0x3e800000,0);
    if (pVVar1->max_length < 0x6d) goto code_?;
    pVVar1[3].vector[8].x = (float)(int)uVar7;
    pVVar1[3].vector[8].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[3].vector[8].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffad4,0x3f000000,0xbe800000,0x3f000000,0);
    if (pVVar1->max_length < 0x6e) goto code_?;
    pVVar1[3].vector[9].x = (float)uVar2;
    pVVar1[3].vector[9].y = (float)uVar8;
    pVVar1[3].vector[9].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffac8,0x3f000000,0,0xbf000000,0);
    if (pVVar1->max_length < 0x6f) goto code_?;
    pVVar1[3].vector[10].x = (float)(int)uVar7;
    pVVar1[3].vector[10].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[3].vector[10].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffabc,0x3f000000,0,0xbe800000,0);
    if (pVVar1->max_length < 0x70) goto code_?;
    pVVar1[3].vector[0xb].x = (float)uVar2;
    pVVar1[3].vector[0xb].y = (float)uVar8;
    pVVar1[3].vector[0xb].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffab0,0x3f000000,0,0,0);
    if (pVVar1->max_length < 0x71) goto code_?;
    pVVar1[3].vector[0xc].x = (float)(int)uVar7;
    pVVar1[3].vector[0xc].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[3].vector[0xc].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffaa4,0x3f000000,0,0x3e800000,0);
    if (pVVar1->max_length < 0x72) goto code_?;
    pVVar1[3].vector[0xd].x = (float)uVar2;
    pVVar1[3].vector[0xd].y = (float)uVar8;
    pVVar1[3].vector[0xd].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffa98,0x3f000000,0,0x3f000000,0);
    if (pVVar1->max_length < 0x73) goto code_?;
    pVVar1[3].vector[0xe].x = (float)(int)uVar7;
    pVVar1[3].vector[0xe].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[3].vector[0xe].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffa8c,0x3f000000,0x3e800000,0xbf000000,0);
    if (pVVar1->max_length < 0x74) goto code_?;
    pVVar1[3].vector[0xf].x = (float)uVar2;
    pVVar1[3].vector[0xf].y = (float)uVar8;
    pVVar1[3].vector[0xf].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffa80,0x3f000000,0x3e800000,0xbe800000,0);
    if (pVVar1->max_length < 0x75) goto code_?;
    pVVar1[3].vector[0x10].x = (float)(int)uVar7;
    pVVar1[3].vector[0x10].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[3].vector[0x10].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffa74,0x3f000000,0x3e800000,0,0);
    if (pVVar1->max_length < 0x76) goto code_?;
    pVVar1[3].vector[0x11].x = (float)uVar2;
    pVVar1[3].vector[0x11].y = (float)uVar8;
    pVVar1[3].vector[0x11].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffa68,0x3f000000,0x3e800000,0x3e800000,0);
    if (pVVar1->max_length < 0x77) goto code_?;
    pVVar1[3].vector[0x12].x = (float)(int)uVar7;
    pVVar1[3].vector[0x12].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[3].vector[0x12].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffa5c,0x3f000000,0x3e800000,0x3f000000,0);
    if (pVVar1->max_length < 0x78) goto code_?;
    pVVar1[3].vector[0x13].x = (float)uVar2;
    pVVar1[3].vector[0x13].y = (float)uVar8;
    pVVar1[3].vector[0x13].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffa50,0x3f000000,0x3f000000,0xbf000000,0);
    if (pVVar1->max_length < 0x79) goto code_?;
    pVVar1[3].vector[0x14].x = (float)(int)uVar7;
    pVVar1[3].vector[0x14].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[3].vector[0x14].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffa44,0x3f000000,0x3f000000,0xbe800000,0);
    if (pVVar1->max_length < 0x7a) goto code_?;
    pVVar1[3].vector[0x15].x = (float)uVar2;
    pVVar1[3].vector[0x15].y = (float)uVar8;
    pVVar1[3].vector[0x15].z = fVar9;
    uVar7 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffa38,0x3f000000,0x3f000000,0,0);
    if (pVVar1->max_length < 0x7b) goto code_?;
    pVVar1[3].vector[0x16].x = (float)(int)uVar7;
    pVVar1[3].vector[0x16].y = (float)(int)((ulonglong)uVar7 >> 0x20);
    pVVar1[3].vector[0x16].z = fVar9;
    uVar2 = 0;
    uVar8 = 0;
    fVar9 = 0.0;
    func_?(&stack0xfffffa2c,0x3f000000,0x3f000000,0x3e800000,0);
    if (0x7b < pVVar1->max_length) {
      pVVar1[3].vector[0x17].x = (float)uVar2;
      pVVar1[3].vector[0x17].y = (float)uVar8;
      pVVar1[3].vector[0x17].z = fVar9;
      uVar7 = 0;
      fVar9 = 0.0;
      func_?(&stack0xfffffa20,0x3f000000,0x3f000000,0x3f000000,0);
      if (pVVar1->max_length < 0x7d) goto code_?;
      pVVar1[3].vector[0x18].x = (float)(int)uVar7;
      pVVar1[3].vector[0x18].y = (float)(int)((ulonglong)uVar7 >> 0x20);
      pVVar1[3].vector[0x18].z = fVar9;
      TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->bytePositionLookUpTable = pVVar1;
      this = (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>
                            );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
                 MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Dictionary__
                );
      fVar9 = 0.0;
      uVar2 = 0;
      uVar8 = 0;
      func_?(&stack0xfffffa14,0xbf000000,0xbf000000,0xbf000000);
      if (this != (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)0x0) {
        key.y = (float)uVar8;
        key.x = (float)uVar2;
        key.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key,0,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_00.z = fVar9;
        key_00.x = (float)(int)uVar7;
        key_00.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_00,1,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_01.y = (float)uVar8;
        key_01.x = (float)uVar2;
        key_01.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_01,2,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_02.z = fVar9;
        key_02.x = (float)(int)uVar7;
        key_02.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_02,3,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        uVar2 = 0;
        uVar8 = 0;
        fVar9 = 0.0;
        func_?();
        key_03.y = (float)uVar8;
        key_03.x = (float)uVar2;
        key_03.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_03,4,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_04.z = fVar9;
        key_04.x = (float)(int)uVar7;
        key_04.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_04,5,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_05.y = (float)uVar8;
        key_05.x = (float)uVar2;
        key_05.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_05,6,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_06.z = fVar9;
        key_06.x = (float)(int)uVar7;
        key_06.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_06,7,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_07.y = (float)uVar8;
        key_07.x = (float)uVar2;
        key_07.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_07,8,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_08.z = fVar9;
        key_08.x = (float)(int)uVar7;
        key_08.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_08,9,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_09.y = (float)uVar8;
        key_09.x = (float)uVar2;
        key_09.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_09,10,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        uVar7 = 0;
        fVar9 = 0.0;
        func_?();
        key_10.z = fVar9;
        key_10.x = (float)(int)uVar7;
        key_10.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_10,0xb,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_11.y = (float)uVar8;
        key_11.x = (float)uVar2;
        key_11.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_11,0xc,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_12.z = fVar9;
        key_12.x = (float)(int)uVar7;
        key_12.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_12,0xd,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_13.y = (float)uVar8;
        key_13.x = (float)uVar2;
        key_13.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_13,0xe,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_14.z = fVar9;
        key_14.x = (float)(int)uVar7;
        key_14.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_14,0xf,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_15.y = (float)uVar8;
        key_15.x = (float)uVar2;
        key_15.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_15,0x10,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_16.z = fVar9;
        key_16.x = (float)(int)uVar7;
        key_16.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_16,0x11,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_17.y = (float)uVar8;
        key_17.x = (float)uVar2;
        key_17.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_17,0x12,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_18.z = fVar9;
        key_18.x = (float)(int)uVar7;
        key_18.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_18,0x13,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_19.y = (float)uVar8;
        key_19.x = (float)uVar2;
        key_19.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_19,0x14,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_20.z = fVar9;
        key_20.x = (float)(int)uVar7;
        key_20.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_20,0x15,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_21.y = (float)uVar8;
        key_21.x = (float)uVar2;
        key_21.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_21,0x16,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_22.z = fVar9;
        key_22.x = (float)(int)uVar7;
        key_22.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_22,0x17,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_23.y = (float)uVar8;
        key_23.x = (float)uVar2;
        key_23.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_23,0x18,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_24.z = fVar9;
        key_24.x = (float)(int)uVar7;
        key_24.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_24,0x19,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_25.y = (float)uVar8;
        key_25.x = (float)uVar2;
        key_25.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_25,0x1a,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_26.z = fVar9;
        key_26.x = (float)(int)uVar7;
        key_26.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_26,0x1b,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_27.y = (float)uVar8;
        key_27.x = (float)uVar2;
        key_27.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_27,0x1c,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_28.z = fVar9;
        key_28.x = (float)(int)uVar7;
        key_28.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_28,0x1d,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_29.y = (float)uVar8;
        key_29.x = (float)uVar2;
        key_29.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_29,0x1e,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_30.z = fVar9;
        key_30.x = (float)(int)uVar7;
        key_30.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_30,0x1f,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_31.y = (float)uVar8;
        key_31.x = (float)uVar2;
        key_31.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_31,0x20,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_32.z = fVar9;
        key_32.x = (float)(int)uVar7;
        key_32.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_32,0x21,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_33.y = (float)uVar8;
        key_33.x = (float)uVar2;
        key_33.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_33,0x22,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_34.z = fVar9;
        key_34.x = (float)(int)uVar7;
        key_34.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_34,0x23,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_35.y = (float)uVar8;
        key_35.x = (float)uVar2;
        key_35.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_35,0x24,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_36.z = fVar9;
        key_36.x = (float)(int)uVar7;
        key_36.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_36,0x25,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_37.y = (float)uVar8;
        key_37.x = (float)uVar2;
        key_37.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_37,0x26,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_38.z = fVar9;
        key_38.x = (float)(int)uVar7;
        key_38.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_38,0x27,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_39.y = (float)uVar8;
        key_39.x = (float)uVar2;
        key_39.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_39,0x28,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_40.z = fVar9;
        key_40.x = (float)(int)uVar7;
        key_40.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_40,0x29,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        puVar14 = &stack0xfffff81c;
        fVar9 = 0.25;
        uVar2 = 0xbe800000;
        func_?();
        key_41.y = (float)uVar2;
        key_41.x = (float)puVar14;
        key_41.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_41,0x2a,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_42.z = fVar9;
        key_42.x = (float)(int)uVar7;
        key_42.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_42,0x2b,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_43.y = (float)uVar8;
        key_43.x = (float)uVar2;
        key_43.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_43,0x2c,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_44.z = fVar9;
        key_44.x = (float)(int)uVar7;
        key_44.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_44,0x2d,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_45.y = (float)uVar8;
        key_45.x = (float)uVar2;
        key_45.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_45,0x2e,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_46.z = fVar9;
        key_46.x = (float)(int)uVar7;
        key_46.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_46,0x2f,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_47.y = (float)uVar8;
        key_47.x = (float)uVar2;
        key_47.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_47,0x30,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_48.z = fVar9;
        key_48.x = (float)(int)uVar7;
        key_48.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_48,0x31,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_49.y = (float)uVar8;
        key_49.x = (float)uVar2;
        key_49.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_49,0x32,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_50.z = fVar9;
        key_50.x = (float)(int)uVar7;
        key_50.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_50,0x33,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_51.y = (float)uVar8;
        key_51.x = (float)uVar2;
        key_51.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_51,0x34,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_52.z = fVar9;
        key_52.x = (float)(int)uVar7;
        key_52.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_52,0x35,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_53.y = (float)uVar8;
        key_53.x = (float)uVar2;
        key_53.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_53,0x36,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_54.z = fVar9;
        key_54.x = (float)(int)uVar7;
        key_54.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_54,0x37,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_55.y = (float)uVar8;
        key_55.x = (float)uVar2;
        key_55.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_55,0x38,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_56.z = fVar9;
        key_56.x = (float)(int)uVar7;
        key_56.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_56,0x39,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_57.y = (float)uVar8;
        key_57.x = (float)uVar2;
        key_57.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_57,0x3a,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_58.z = fVar9;
        key_58.x = (float)(int)uVar7;
        key_58.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_58,0x3b,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_59.y = (float)uVar8;
        key_59.x = (float)uVar2;
        key_59.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_59,0x3c,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_60.z = fVar9;
        key_60.x = (float)(int)uVar7;
        key_60.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_60,0x3d,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_61.y = (float)uVar8;
        key_61.x = (float)uVar2;
        key_61.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_61,0x3e,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_62.z = fVar9;
        key_62.x = (float)(int)uVar7;
        key_62.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_62,0x3f,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_63.y = (float)uVar8;
        key_63.x = (float)uVar2;
        key_63.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_63,0x40,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_64.z = fVar9;
        key_64.x = (float)(int)uVar7;
        key_64.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_64,0x41,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_65.y = (float)uVar8;
        key_65.x = (float)uVar2;
        key_65.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_65,0x42,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_66.z = fVar9;
        key_66.x = (float)(int)uVar7;
        key_66.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_66,0x43,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_67.y = (float)uVar8;
        key_67.x = (float)uVar2;
        key_67.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_67,0x44,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_68.z = fVar9;
        key_68.x = (float)(int)uVar7;
        key_68.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_68,0x45,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_69.y = (float)uVar8;
        key_69.x = (float)uVar2;
        key_69.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_69,0x46,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_70.z = fVar9;
        key_70.x = (float)(int)uVar7;
        key_70.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_70,0x47,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_71.y = (float)uVar8;
        key_71.x = (float)uVar2;
        key_71.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_71,0x48,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_72.z = fVar9;
        key_72.x = (float)(int)uVar7;
        key_72.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_72,0x49,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_73.y = (float)uVar8;
        key_73.x = (float)uVar2;
        key_73.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_73,0x4a,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_74.z = fVar9;
        key_74.x = (float)(int)uVar7;
        key_74.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_74,0x4b,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_75.y = (float)uVar8;
        key_75.x = (float)uVar2;
        key_75.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_75,0x4c,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_76.z = fVar9;
        key_76.x = (float)(int)uVar7;
        key_76.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_76,0x4d,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_77.y = (float)uVar8;
        key_77.x = (float)uVar2;
        key_77.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_77,0x4e,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_78.z = fVar9;
        key_78.x = (float)(int)uVar7;
        key_78.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_78,0x4f,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_79.y = (float)uVar8;
        key_79.x = (float)uVar2;
        key_79.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_79,0x50,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_80.z = fVar9;
        key_80.x = (float)(int)uVar7;
        key_80.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_80,0x51,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_81.y = (float)uVar8;
        key_81.x = (float)uVar2;
        key_81.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_81,0x52,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_82.z = fVar9;
        key_82.x = (float)(int)uVar7;
        key_82.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_82,0x53,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_83.y = (float)uVar8;
        key_83.x = (float)uVar2;
        key_83.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_83,0x54,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        uVar7 = 0;
        fVar9 = 0.0;
        func_?();
        key_84.z = fVar9;
        key_84.x = (float)(int)uVar7;
        key_84.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_84,0x55,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_85.y = (float)uVar8;
        key_85.x = (float)uVar2;
        key_85.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_85,0x56,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_86.z = fVar9;
        key_86.x = (float)(int)uVar7;
        key_86.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_86,0x57,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_87.y = (float)uVar8;
        key_87.x = (float)uVar2;
        key_87.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_87,0x58,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_88.z = fVar9;
        key_88.x = (float)(int)uVar7;
        key_88.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_88,0x59,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_89.y = (float)uVar8;
        key_89.x = (float)uVar2;
        key_89.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_89,0x5a,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_90.z = fVar9;
        key_90.x = (float)(int)uVar7;
        key_90.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_90,0x5b,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        uVar2 = 0;
        uVar8 = 0;
        fVar9 = 0.0;
        func_?();
        key_91.y = (float)uVar8;
        key_91.x = (float)uVar2;
        key_91.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_91,0x5c,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_92.z = fVar9;
        key_92.x = (float)(int)uVar7;
        key_92.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_92,0x5d,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_93.y = (float)uVar8;
        key_93.x = (float)uVar2;
        key_93.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_93,0x5e,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_94.z = fVar9;
        key_94.x = (float)(int)uVar7;
        key_94.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_94,0x5f,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_95.y = (float)uVar8;
        key_95.x = (float)uVar2;
        key_95.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_95,0x60,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_96.z = fVar9;
        key_96.x = (float)(int)uVar7;
        key_96.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_96,0x61,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_97.y = (float)uVar8;
        key_97.x = (float)uVar2;
        key_97.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_97,0x62,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_98.z = fVar9;
        key_98.x = (float)(int)uVar7;
        key_98.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_98,99,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_99.y = (float)uVar8;
        key_99.x = (float)uVar2;
        key_99.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_99,100,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_x00100.z = fVar9;
        key_x00100.x = (float)(int)uVar7;
        key_x00100.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00100,0x65,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_x00101.y = (float)uVar8;
        key_x00101.x = (float)uVar2;
        key_x00101.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00101,0x66,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_x00102.z = fVar9;
        key_x00102.x = (float)(int)uVar7;
        key_x00102.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00102,0x67,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_x00103.y = (float)uVar8;
        key_x00103.x = (float)uVar2;
        key_x00103.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00103,0x68,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_x00104.z = fVar9;
        key_x00104.x = (float)(int)uVar7;
        key_x00104.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00104,0x69,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_x00105.y = (float)uVar8;
        key_x00105.x = (float)uVar2;
        key_x00105.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00105,0x6a,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_x00106.z = fVar9;
        key_x00106.x = (float)(int)uVar7;
        key_x00106.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00106,0x6b,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_x00107.y = (float)uVar8;
        key_x00107.x = (float)uVar2;
        key_x00107.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00107,0x6c,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_x00108.z = fVar9;
        key_x00108.x = (float)(int)uVar7;
        key_x00108.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00108,0x6d,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_x00109.y = (float)uVar8;
        key_x00109.x = (float)uVar2;
        key_x00109.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00109,0x6e,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_x00110.z = fVar9;
        key_x00110.x = (float)(int)uVar7;
        key_x00110.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00110,0x6f,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_x00111.y = (float)uVar8;
        key_x00111.x = (float)uVar2;
        key_x00111.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00111,0x70,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_x00112.z = fVar9;
        key_x00112.x = (float)(int)uVar7;
        key_x00112.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00112,0x71,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_x00113.y = (float)uVar8;
        key_x00113.x = (float)uVar2;
        key_x00113.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00113,0x72,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_x00114.z = fVar9;
        key_x00114.x = (float)(int)uVar7;
        key_x00114.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00114,0x73,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_x00115.y = (float)uVar8;
        key_x00115.x = (float)uVar2;
        key_x00115.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00115,0x74,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_x00116.z = fVar9;
        key_x00116.x = (float)(int)uVar7;
        key_x00116.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00116,0x75,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_x00117.y = (float)uVar8;
        key_x00117.x = (float)uVar2;
        key_x00117.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00117,0x76,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_x00118.z = fVar9;
        key_x00118.x = (float)(int)uVar7;
        key_x00118.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00118,0x77,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_x00119.y = (float)uVar8;
        key_x00119.x = (float)uVar2;
        key_x00119.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00119,0x78,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_x00120.z = fVar9;
        key_x00120.x = (float)(int)uVar7;
        key_x00120.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00120,0x79,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_x00121.y = (float)uVar8;
        key_x00121.x = (float)uVar2;
        key_x00121.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00121,0x7a,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar7 = 0;
        func_?();
        key_x00122.z = fVar9;
        key_x00122.x = (float)(int)uVar7;
        key_x00122.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00122,0x7b,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        fVar9 = 0.0;
        uVar2 = 0;
        uVar8 = 0;
        func_?();
        key_x00123.y = (float)uVar8;
        key_x00123.x = (float)uVar2;
        key_x00123.z = fVar9;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::Byte]
        ::Dictionary_2_UnityEngine_Vector3_System_Byte__Add
                  (this,key_x00123,0x7c,
                   MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                  );
        TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable = this;
        array = (Byte__Array *)func_?();
        mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
        RuntimeHelpers_InitializeArray_1
                  ((Array *)array,___method0x60003e6_1_Field,(MethodInfo *)0x0);
        TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->IdentityByteCorners = array;
        TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->rowMaxLength = 0x3f;
        return;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

