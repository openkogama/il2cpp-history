
/* Vector3[] ByteArrayToCorners(Byte[]) */

Vector3__Array *
MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteArrayToCorners
          (Byte__Array *byteArray,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,8);
  uVar2 = 0;
  lVar3 = 0;
  pVVar4 = pVVar1->vector;
  while (byteArray != (Byte__Array *)0x0) {
    if ((uint)byteArray->max_length <= uVar2) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      pVVar1 = (Vector3__Array *)(*pcVar5)();
      return pVVar1;
    }
    bVar6 = byteArray->vector[lVar3];
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar7 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->bytePositionLookUpTable;
    if (pVVar7 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar7->max_length <= (uint)bVar6) goto code_?;
    if (pVVar1 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar1->max_length <= uVar2) goto code_?;
    fVar8 = pVVar7->vector[bVar6].y;
    uVar2 = uVar2 + 1;
    pVVar4->x = pVVar7->vector[bVar6].x;
    pVVar4->y = fVar8;
    lVar3 = lVar3 + 1;
    pVVar4->z = pVVar7->vector[bVar6].z;
    pVVar4 = pVVar4 + 1;
    if (7 < lVar3) {
      return pVVar1;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3__Array *)(*pcVar5)();
  return pVVar1;
}


/* Void ByteArrayToCorners(Byte[] ByRef, Vector3[] ByRef) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteArrayToCorners_1
               (Byte__Array **byteArray,Vector3__Array **corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  lVar2 = 0;
  lVar3 = 0;
  while ((pBVar4 = *byteArray, pBVar4 != (Byte__Array *)0x0 &&
         (pVVar5 = *corners, pVVar5 != (Vector3__Array *)0x0))) {
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (((uint)pVVar5->max_length <= uVar1) || ((uint)pBVar4->max_length <= uVar1)) {
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar7 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->bytePositionLookUpTable;
    if (pVVar7 == (Vector3__Array *)0x0) break;
    bVar8 = pBVar4->vector[lVar2];
    if ((uint)pVVar7->max_length <= (uint)bVar8) goto code_?;
    uVar1 = uVar1 + 1;
    lVar2 = lVar2 + 1;
    fVar9 = pVVar7->vector[bVar8].z;
    *(undefined8 *)((longlong)&pVVar5->vector[0].x + lVar3) =
         *(undefined8 *)(pVVar7->vector + bVar8);
    *(float *)((longlong)&pVVar5->vector[0].z + lVar3) = fVar9;
    lVar3 = lVar3 + 0xc;
    if (0x5f < lVar3) {
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Vector3 ByteToVector3(Byte) */

Vector3 * MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteToVector3
                    (Vector3 *__return_storage_ptr__,uint8_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__CubeDataPacker);
  }
  pVVar1 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->bytePositionLookUpTable;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if ((uint)key < (uint)pVVar1->max_length) {
      fVar2 = pVVar1->vector[key].z;
      fVar3 = pVVar1->vector[key].y;
      __return_storage_ptr__->x = pVVar1->vector[key].x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar2;
      return __return_storage_ptr__;
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    pVVar5 = (Vector3 *)(*pcVar4)();
    return pVVar5;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Void ByteToVector3(Byte ByRef, Vector3 ByRef) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_ByteToVector3_1
               (uint8_t *key,Vector3 *vector,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__CubeDataPacker);
  }
  pVVar1 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->bytePositionLookUpTable;
  if (pVVar1 != (Vector3__Array *)0x0) {
    bVar2 = *key;
    if ((uint)bVar2 < (uint)pVVar1->max_length) {
      fVar3 = pVVar1->vector[bVar2].y;
      fVar4 = pVVar1->vector[bVar2].z;
      vector->x = pVVar1->vector[bVar2].x;
      vector->y = fVar3;
      vector->z = fVar4;
      return;
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Byte[] CornersToByteArray(Vector3[]) */

Byte__Array *
MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_CornersToByteArray
          (Vector3__Array *corners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (Byte__Array *)FUN_?(TypeInfo__System__Byte);
  uVar2 = 0;
  lVar3 = 0;
  pVVar4 = corners->vector;
  while (corners != (Vector3__Array *)0x0) {
    if ((uint)corners->max_length <= uVar2) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      pBVar1 = (Byte__Array *)(*pcVar5)();
      return pBVar1;
    }
    uVar6._0_4_ = pVVar4->x;
    uVar6._4_4_ = pVVar4->y;
    fVar7 = pVVar4->z;
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_8._0_8_ = uVar6;
    VStack_8.z = fVar7;
    uVar9 = CubeDataPacker_Vector3ToByte(&VStack_8,(MethodInfo *)0x0);
    if (pBVar1 == (Byte__Array *)0x0) break;
    if ((uint)pBVar1->max_length <= uVar2) goto code_?;
    pBVar1->vector[lVar3] = uVar9;
    uVar2 = uVar2 + 1;
    lVar3 = lVar3 + 1;
    pVVar4 = pVVar4 + 1;
    if (7 < lVar3) {
      return pBVar1;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pBVar1 = (Byte__Array *)(*pcVar5)();
  return pBVar1;
}


/* Void GetCompressionFlags(Byte ByRef, Byte[], Byte[]) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_GetCompressionFlags
               (uint8_t *compressionFlags,Byte__Array *byteCorners,Byte__Array *materials,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = true;
  uVar2 = 0;
  if (byteCorners != (Byte__Array *)0x0) {
    lVar3 = 0;
    pCVar4 = TypeInfo__MV__WorldObject__CubeDataPacker;
    for (; (int)uVar2 < (int)byteCorners->max_length; uVar2 = uVar2 + 1) {
      if ((uint)byteCorners->max_length <= uVar2) goto code_?;
      uVar5 = byteCorners->vector[lVar3];
      if (*(int *)&(pCVar4->_1).field_0x1c == 0) {
        FUN_?(pCVar4);
        pCVar4 = TypeInfo__MV__WorldObject__CubeDataPacker;
      }
      pBVar6 = pCVar4->static_fields->IdentityByteCorners;
      if (pBVar6 == (Byte__Array *)0x0) goto code_?;
      if ((uint)pBVar6->max_length <= uVar2) goto code_?;
      bVar7 = false;
      if (uVar5 == pBVar6->vector[lVar3]) {
        bVar7 = bVar1;
      }
      bVar1 = bVar7;
      lVar3 = lVar3 + 1;
    }
    bVar7 = true;
    pcVar8 = (char *)((longlong)&materials->max_length + 7);
    uVar2 = 0;
    do {
      if (0 < (int)uVar2) {
        if (materials == (Byte__Array *)0x0) break;
        if (((uint)materials->max_length <= uVar2 - 1) || ((uint)materials->max_length <= uVar2)) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*pcVar8 != pcVar8[1]) {
          bVar7 = false;
        }
      }
      uVar2 = uVar2 + 1;
      pcVar8 = pcVar8 + 1;
      if (5 < (int)uVar2) {
        if (bVar1) {
          *compressionFlags = *compressionFlags | 1;
        }
        if (bVar7) {
          *compressionFlags = *compressionFlags | 2;
        }
        return;
      }
    } while( true );
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
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
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((cubeFlags & 1) == 0) {
    if (bp == (BytePacker *)0x0) goto code_?;
    pBVar1 = BytePacker::BytePacker_ReadBytes(bp,8,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    *byteCorners = pBVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)byteCorners >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
      goto code_?;
    }
  }
  else {
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    bVar2 = iRam_? != 0;
    *byteCorners = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->IdentityByteCorners;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)byteCorners >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
  }
  if (bp != (BytePacker *)0x0) {
code_?:
    if ((cubeFlags & 2) == 0) {
      pBVar1 = BytePacker::BytePacker_ReadBytes(bp,6,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      *materials = pBVar1;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)materials >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
    }
    else {
      uVar7 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
      uVar8 = 0;
      uVar5 = uVar8;
      do {
        pBVar1 = *materials;
        if (pBVar1 == (Byte__Array *)0x0) goto code_?;
        if ((uint)pBVar1->max_length <= (uint)uVar5) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pBVar1->vector[uVar8] = uVar7;
        uVar5 = (ulonglong)((uint)uVar5 + 1);
        uVar8 = uVar8 + 1;
      } while ((longlong)uVar8 < 6);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Byte Vector3ToByte(Vector3) */

uint8_t MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_Vector3ToByte
                  (Vector3 *corner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__ContainsKey_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__get_Item_UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__CubeDataPacker);
  }
  pDVar1 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable;
  if (pDVar1 != (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)0x0) {
    aVStack_2[0].z = corner->z;
    aVStack_2[0].x = corner->x;
    aVStack_2[0].y = corner->y;
    iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::Vector3,System::
            Byte]::Dictionary_2_UnityEngine_Vector3_System_Byte__FindEntry
                      (pDVar1,aVStack_2,
                       MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__ContainsKey_UnityEngine__Vector3_
                       ->klass->rgctx_data[0x21].method);
    if (iVar3 < 0) {
      index = 0;
      do {
        if (index == 0) {
          fVar4 = corner->x;
        }
        else if (index == 1) {
          fVar4 = corner->y;
        }
        else {
          if (index != 2) {
            uVar5 = func_?(&TypeInfo__System__IndexOutOfRangeException);
            this = (IndexOutOfRangeException *)func_?(uVar5);
            message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
            mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                      (this,message,(MethodInfo *)0x0);
            uVar5 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
            FUN_?(this,uVar5);
            pcVar6 = (code *)swi(3);
            uVar7 = (*pcVar6)();
            return uVar7;
          }
          fVar4 = corner->z;
        }
        if (fVar4 == 0.0) {
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_set_Item(corner,index,0.0,in_R9)
          ;
        }
        index = index + 1;
      } while (index < 3);
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__WorldObject__CubeDataPacker);
    }
    pDVar1 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->positionByteLookUpTable;
    if (pDVar1 != (Dictionary_2_UnityEngine_Vector3_System_Byte_ *)0x0) {
      aVStack_2[0].x = corner->x;
      aVStack_2[0].y = corner->y;
      aVStack_2[0].z = corner->z;
      uVar7 = FUN_?(pDVar1,aVStack_2);
      return uVar7;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  uVar7 = (*pcVar6)();
  return uVar7;
}


/* Void WriteCompressedCube(BytePacker, Int16, Int16, Int16, Byte[], Byte[]) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_WriteCompressedCube
               (BytePacker *bp,int16_t x,int16_t y,int16_t z,Byte__Array *byteCorners,
               Byte__Array *materials,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bp == (BytePacker *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  BytePacker::BytePacker_Write_4(bp,x,(MethodInfo *)0x0);
  BytePacker::BytePacker_Write_4(bp,y,(MethodInfo *)0x0);
  BytePacker::BytePacker_Write_4(bp,z,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker,byteCorners,materials,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__CubeDataPacker);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar2 = 0;
  bVar3 = 1;
  pCVar4 = TypeInfo__MV__WorldObject__CubeDataPacker;
  uVar5 = uVar2;
  uVar6 = uVar2;
  if (byteCorners != (Byte__Array *)0x0) {
    while (uVar7 = (uint)uVar5, (int)uVar7 < (int)byteCorners->max_length) {
      if ((uint)byteCorners->max_length <= uVar7) goto code_?;
      uVar8 = byteCorners->vector[uVar6];
      if (*(int *)&(pCVar4->_1).field_0x1c == 0) {
        FUN_?(pCVar4);
        pCVar4 = TypeInfo__MV__WorldObject__CubeDataPacker;
      }
      pBVar9 = pCVar4->static_fields->IdentityByteCorners;
      if (pBVar9 == (Byte__Array *)0x0) goto code_?;
      if ((uint)pBVar9->max_length <= uVar7) goto code_?;
      bVar10 = 0;
      if (uVar8 == pBVar9->vector[uVar6]) {
        bVar10 = bVar3;
      }
      bVar3 = bVar10;
      uVar6 = uVar6 + 1;
      uVar5 = (ulonglong)(uVar7 + 1);
    }
    uVar6 = 1;
    pcVar11 = (char *)((longlong)&materials->max_length + 7);
    uVar5 = uVar2;
    do {
      uVar7 = (uint)uVar5;
      if (0 < (int)uVar7) {
        if (materials == (Byte__Array *)0x0) goto code_?;
        if (((uint)materials->max_length <= uVar7 - 1) || ((uint)materials->max_length <= uVar7))
        goto code_?;
        if (*pcVar11 != pcVar11[1]) {
          uVar6 = uVar2;
        }
      }
      uVar5 = (ulonglong)(uVar7 + 1);
      pcVar11 = pcVar11 + 1;
    } while ((int)(uVar7 + 1) < 6);
    if ((char)uVar6 != '\0') {
      bVar3 = bVar3 | 2;
    }
    if (bp != (BytePacker *)0x0) {
      BytePacker::BytePacker_Write(bp,bVar3 | 4,(MethodInfo *)0x0);
      if ((bVar3 & 1) == 0) {
        BytePacker::BytePacker_Write_2
                  (bp,byteCorners,0,(int32_t)byteCorners->max_length,(MethodInfo *)0x0);
      }
      if (materials != (Byte__Array *)0x0) {
        if ((bVar3 & 2) == 0) {
          BytePacker::BytePacker_Write_2
                    (bp,materials,0,(int32_t)materials->max_length,(MethodInfo *)0x0);
        }
        else {
          if ((int)materials->max_length == 0) {
code_?:
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          BytePacker::BytePacker_Write(bp,materials->vector[0],(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WriteCompressedCubeData(BytePacker, Byte[], Byte[]) */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker_WriteCompressedCubeData
               (BytePacker *bp,Byte__Array *byteCorners,Byte__Array *materials,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__CubeDataPacker);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  bVar2 = 1;
  pCVar3 = TypeInfo__MV__WorldObject__CubeDataPacker;
  uVar4 = uVar1;
  uVar5 = uVar1;
  if (byteCorners != (Byte__Array *)0x0) {
    while (uVar6 = (uint)uVar4, (int)uVar6 < (int)byteCorners->max_length) {
      if ((uint)byteCorners->max_length <= uVar6) goto code_?;
      uVar7 = byteCorners->vector[uVar5];
      if (*(int *)&(pCVar3->_1).field_0x1c == 0) {
        FUN_?(pCVar3);
        pCVar3 = TypeInfo__MV__WorldObject__CubeDataPacker;
      }
      pBVar8 = pCVar3->static_fields->IdentityByteCorners;
      if (pBVar8 == (Byte__Array *)0x0) goto code_?;
      if ((uint)pBVar8->max_length <= uVar6) goto code_?;
      bVar9 = 0;
      if (uVar7 == pBVar8->vector[uVar5]) {
        bVar9 = bVar2;
      }
      bVar2 = bVar9;
      uVar5 = uVar5 + 1;
      uVar4 = (ulonglong)(uVar6 + 1);
    }
    uVar5 = 1;
    pcVar10 = (char *)((longlong)&materials->max_length + 7);
    uVar4 = uVar1;
    do {
      uVar6 = (uint)uVar4;
      if (0 < (int)uVar6) {
        if (materials == (Byte__Array *)0x0) goto code_?;
        if (((uint)materials->max_length <= uVar6 - 1) || ((uint)materials->max_length <= uVar6))
        goto code_?;
        if (*pcVar10 != pcVar10[1]) {
          uVar5 = uVar1;
        }
      }
      uVar4 = (ulonglong)(uVar6 + 1);
      pcVar10 = pcVar10 + 1;
    } while ((int)(uVar6 + 1) < 6);
    if ((char)uVar5 != '\0') {
      bVar2 = bVar2 | 2;
    }
    if (bp != (BytePacker *)0x0) {
      BytePacker::BytePacker_Write(bp,bVar2 | 4,(MethodInfo *)0x0);
      if ((bVar2 & 1) == 0) {
        BytePacker::BytePacker_Write_2
                  (bp,byteCorners,0,(int32_t)byteCorners->max_length,(MethodInfo *)0x0);
      }
      if (materials != (Byte__Array *)0x0) {
        if ((bVar2 & 2) == 0) {
          BytePacker::BytePacker_Write_2
                    (bp,materials,0,(int32_t)materials->max_length,(MethodInfo *)0x0);
        }
        else {
          if ((int)materials->max_length == 0) {
code_?:
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          BytePacker::BytePacker_Write(bp,materials->vector[0],(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* CubeDataPacker() */

void MVWorldObject.dll::MV::WorldObject::CubeDataPacker::CubeDataPacker__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                 );
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Dictionary__
                 );
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>
                 );
    FUN_?(&_21F45DB14C222566A3A1BE2C7F8536AF243B32111E7A19F53DB8FDAEC2D3162B_Field);
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,0x7d);
  y = _UNK_?;
  z = _UNK_?;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if ((int)pVVar1->max_length != 0) {
      pVVar1->vector[0].x = _UNK_?;
      pVVar1->vector[0].y = y;
      pVVar1->vector[0].z = y;
      if (1 < (uint)pVVar1->max_length) {
        pVVar1->vector[1].x = y;
        pVVar1->vector[1].y = y;
        pVVar1->vector[1].z = z;
        x = _UNK_?;
        if (2 < (uint)pVVar1->max_length) {
          pVVar1->vector[2].x = y;
          pVVar1->vector[2].y = y;
          pVVar1->vector[2].z = 0.0;
          x_00 = _UNK_?;
          if (3 < (uint)pVVar1->max_length) {
            pVVar1->vector[3].x = y;
            pVVar1->vector[3].y = y;
            pVVar1->vector[3].z = x;
            if (4 < (uint)pVVar1->max_length) {
              pVVar1->vector[4].x = y;
              pVVar1->vector[4].y = y;
              pVVar1->vector[4].z = x_00;
              if (5 < (uint)pVVar1->max_length) {
                pVVar1->vector[5].x = y;
                pVVar1->vector[5].y = z;
                pVVar1->vector[5].z = y;
                if (6 < (uint)pVVar1->max_length) {
                  pVVar1->vector[6].x = y;
                  pVVar1->vector[6].y = z;
                  pVVar1->vector[6].z = z;
                  if (7 < (uint)pVVar1->max_length) {
                    pVVar1->vector[7].x = y;
                    pVVar1->vector[7].y = z;
                    pVVar1->vector[7].z = 0.0;
                    if (8 < (uint)pVVar1->max_length) {
                      pVVar1->vector[8].x = y;
                      pVVar1->vector[8].y = z;
                      pVVar1->vector[8].z = x;
                      if (9 < (uint)pVVar1->max_length) {
                        pVVar1->vector[9].x = y;
                        pVVar1->vector[9].y = z;
                        pVVar1->vector[9].z = x_00;
                        if (10 < (uint)pVVar1->max_length) {
                          pVVar1->vector[10].x = (float)(int)(ulonglong)(uint)y;
                          pVVar1->vector[10].y = (float)(int)((ulonglong)(uint)y >> 0x20);
                          pVVar1->vector[10].z = y;
                          if (0xb < (uint)pVVar1->max_length) {
                            pVVar1->vector[0xb].x = (float)(int)(ulonglong)(uint)y;
                            pVVar1->vector[0xb].y = (float)(int)((ulonglong)(uint)y >> 0x20);
                            pVVar1->vector[0xb].z = z;
                            if (0xc < (uint)pVVar1->max_length) {
                              pVVar1->vector[0xc].x = (float)(int)(ulonglong)(uint)y;
                              pVVar1->vector[0xc].y = (float)(int)((ulonglong)(uint)y >> 0x20);
                              pVVar1->vector[0xc].z = 0.0;
                              if (0xd < (uint)pVVar1->max_length) {
                                pVVar1->vector[0xd].x = (float)(int)(ulonglong)(uint)y;
                                pVVar1->vector[0xd].y = (float)(int)((ulonglong)(uint)y >> 0x20);
                                pVVar1->vector[0xd].z = x;
                                if (0xe < (uint)pVVar1->max_length) {
                                  pVVar1->vector[0xe].x = (float)(int)(ulonglong)(uint)y;
                                  pVVar1->vector[0xe].y = (float)(int)((ulonglong)(uint)y >> 0x20);
                                  pVVar1->vector[0xe].z = x_00;
                                  if (0xf < (uint)pVVar1->max_length) {
                                    pVVar1->vector[0xf].x = y;
                                    pVVar1->vector[0xf].y = x;
                                    pVVar1->vector[0xf].z = y;
                                    if (0x10 < (uint)pVVar1->max_length) {
                                      pVVar1->vector[0x10].x = y;
                                      pVVar1->vector[0x10].y = x;
                                      pVVar1->vector[0x10].z = z;
                                      if (0x11 < (uint)pVVar1->max_length) {
                                        pVVar1->vector[0x11].x = y;
                                        pVVar1->vector[0x11].y = x;
                                        pVVar1->vector[0x11].z = 0.0;
                                        if (0x12 < (uint)pVVar1->max_length) {
                                          pVVar1->vector[0x12].x = y;
                                          pVVar1->vector[0x12].y = x;
                                          pVVar1->vector[0x12].z = x;
                                          if (0x13 < (uint)pVVar1->max_length) {
                                            pVVar1->vector[0x13].x = y;
                                            pVVar1->vector[0x13].y = x;
                                            pVVar1->vector[0x13].z = x_00;
                                            if (0x14 < (uint)pVVar1->max_length) {
                                              pVVar1->vector[0x14].x = y;
                                              pVVar1->vector[0x14].y = x_00;
                                              pVVar1->vector[0x14].z = y;
                                              if (0x15 < (uint)pVVar1->max_length) {
                                                pVVar1->vector[0x15].x = y;
                                                pVVar1->vector[0x15].y = x_00;
                                                pVVar1->vector[0x15].z = z;
                                                if (0x16 < (uint)pVVar1->max_length) {
                                                  pVVar1->vector[0x16].x = y;
                                                  pVVar1->vector[0x16].y = x_00;
                                                  pVVar1->vector[0x16].z = 0.0;
                                                  if (0x17 < (uint)pVVar1->max_length) {
                                                    pVVar1->vector[0x17].x = y;
                                                    pVVar1->vector[0x17].y = x_00;
                                                    pVVar1->vector[0x17].z = x;
                                                    if (0x18 < (uint)pVVar1->max_length) {
                                                      pVVar1->vector[0x18].x = y;
                                                      pVVar1->vector[0x18].y = x_00;
                                                      pVVar1->vector[0x18].z = x_00;
                                                      if (0x19 < (uint)pVVar1->max_length) {
                                                        pVVar1->vector[0x19].x = z;
                                                        pVVar1->vector[0x19].y = y;
                                                        pVVar1->vector[0x19].z = y;
                                                        if (0x1a < (uint)pVVar1->max_length) {
                                                          pVVar1->vector[0x1a].x = z;
                                                          pVVar1->vector[0x1a].y = y;
                                                          pVVar1->vector[0x1a].z = z;
                                                          if (0x1b < (uint)pVVar1->max_length) {
                                                            pVVar1->vector[0x1b].x = z;
                                                            pVVar1->vector[0x1b].y = y;
                                                            pVVar1->vector[0x1b].z = 0.0;
                                                            if (0x1c < (uint)pVVar1->max_length) {
                                                              pVVar1->vector[0x1c].x = z;
                                                              pVVar1->vector[0x1c].y = y;
                                                              pVVar1->vector[0x1c].z = x;
                                                              if (0x1d < (uint)pVVar1->max_length) {
                                                                pVVar1->vector[0x1d].x = z;
                                                                pVVar1->vector[0x1d].y = y;
                                                                pVVar1->vector[0x1d].z = x_00;
                                                                if (0x1e < (uint)pVVar1->max_length)
                                                                {
                                                                  pVVar1->vector[0x1e].x = z;
                                                                  pVVar1->vector[0x1e].y = z;
                                                                  pVVar1->vector[0x1e].z = y;
                                                                  if (0x1f < (uint)pVVar1->
                                                  max_length) {
                                                    pVVar1->vector[0x1f].x = z;
                                                    pVVar1->vector[0x1f].y = z;
                                                    pVVar1->vector[0x1f].z = z;
                                                    if (0x20 < (uint)pVVar1->max_length) {
                                                      pVVar1[1].klass =
                                                           (Vector3__Array__Class *)CONCAT44(z,z);
                                                      *(undefined4 *)&pVVar1[1].monitor = 0;
                                                      if (0x21 < (uint)pVVar1->max_length) {
                                                        *(ulonglong *)
                                                         ((longlong)&pVVar1[1].monitor + 4) =
                                                             CONCAT44(z,z);
                                                        *(float *)((longlong)&pVVar1[1].bounds + 4)
                                                             = x;
                                                        if (0x22 < (uint)pVVar1->max_length) {
                                                          pVVar1[1].max_length = CONCAT44(z,z);
                                                          pVVar1[1].vector[0].x = x_00;
                                                          if (0x23 < (uint)pVVar1->max_length) {
                                                            pVVar1[1].vector[0].y =
                                                                 (float)(int)(ulonglong)(uint)z;
                                                            pVVar1[1].vector[0].z =
                                                                 (float)(int)((ulonglong)(uint)z >>
                                                                             0x20);
                                                            pVVar1[1].vector[1].x = y;
                                                            if (0x24 < (uint)pVVar1->max_length) {
                                                              pVVar1[1].vector[1].y =
                                                                   (float)(int)(ulonglong)(uint)z;
                                                              pVVar1[1].vector[1].z =
                                                                   (float)(int)((ulonglong)(uint)z
                                                                               >> 0x20);
                                                              pVVar1[1].vector[2].x = z;
                                                              if (0x25 < (uint)pVVar1->max_length) {
                                                                pVVar1[1].vector[2].y =
                                                                     (float)(int)(ulonglong)(uint)z;
                                                                pVVar1[1].vector[2].z =
                                                                     (float)(int)((ulonglong)(uint)z
                                                                                 >> 0x20);
                                                                pVVar1[1].vector[3].x = 0.0;
                                                                if (0x26 < (uint)pVVar1->max_length)
                                                                {
                                                                  pVVar1[1].vector[3].y =
                                                                       (float)(int)(ulonglong)
                                                                                   (uint)z;
                                                                  pVVar1[1].vector[3].z =
                                                                       (float)(int)((ulonglong)
                                                                                    (uint)z >> 0x20)
                                                                  ;
                                                                  pVVar1[1].vector[4].x = x;
                                                                  if (0x27 < (uint)pVVar1->
                                                  max_length) {
                                                    pVVar1[1].vector[4].y =
                                                         (float)(int)(ulonglong)(uint)z;
                                                    pVVar1[1].vector[4].z =
                                                         (float)(int)((ulonglong)(uint)z >> 0x20);
                                                    pVVar1[1].vector[5].x = x_00;
                                                    if (0x28 < (uint)pVVar1->max_length) {
                                                      pVVar1[1].vector[5].y = z;
                                                      pVVar1[1].vector[5].z = x;
                                                      pVVar1[1].vector[6].x = y;
                                                      if (0x29 < (uint)pVVar1->max_length) {
                                                        pVVar1[1].vector[6].y = z;
                                                        pVVar1[1].vector[6].z = x;
                                                        pVVar1[1].vector[7].x = z;
                                                        if (0x2a < (uint)pVVar1->max_length) {
                                                          pVVar1[1].vector[7].y = z;
                                                          pVVar1[1].vector[7].z = x;
                                                          pVVar1[1].vector[8].x = 0.0;
                                                          if (0x2b < (uint)pVVar1->max_length) {
                                                            pVVar1[1].vector[8].y = z;
                                                            pVVar1[1].vector[8].z = x;
                                                            pVVar1[1].vector[9].x = x;
                                                            if (0x2c < (uint)pVVar1->max_length) {
                                                              pVVar1[1].vector[9].y = z;
                                                              pVVar1[1].vector[9].z = x;
                                                              pVVar1[1].vector[10].x = x_00;
                                                              if (0x2d < (uint)pVVar1->max_length) {
                                                                pVVar1[1].vector[10].y = z;
                                                                pVVar1[1].vector[10].z = x_00;
                                                                pVVar1[1].vector[0xb].x = y;
                                                                if (0x2e < (uint)pVVar1->max_length)
                                                                {
                                                                  pVVar1[1].vector[0xb].y = z;
                                                                  pVVar1[1].vector[0xb].z = x_00;
                                                                  pVVar1[1].vector[0xc].x = z;
                                                                  if (0x2f < (uint)pVVar1->
                                                  max_length) {
                                                    pVVar1[1].vector[0xc].y = z;
                                                    pVVar1[1].vector[0xc].z = x_00;
                                                    pVVar1[1].vector[0xd].x = 0.0;
                                                    if (0x30 < (uint)pVVar1->max_length) {
                                                      pVVar1[1].vector[0xd].y = z;
                                                      pVVar1[1].vector[0xd].z = x_00;
                                                      pVVar1[1].vector[0xe].x = x;
                                                      if (0x31 < (uint)pVVar1->max_length) {
                                                        pVVar1[1].vector[0xe].y = z;
                                                        pVVar1[1].vector[0xe].z = x_00;
                                                        pVVar1[1].vector[0xf].x = x_00;
                                                        if (0x32 < (uint)pVVar1->max_length) {
                                                          pVVar1[1].vector[0xf].y =
                                                               (float)(int)((ulonglong)(uint)y <<
                                                                           0x20);
                                                          pVVar1[1].vector[0xf].z =
                                                               (float)(int)(((ulonglong)(uint)y <<
                                                                            0x20) >> 0x20);
                                                          pVVar1[1].vector[0x10].x = y;
                                                          if (0x33 < (uint)pVVar1->max_length) {
                                                            pVVar1[1].vector[0x10].y =
                                                                 (float)(int)((ulonglong)(uint)y <<
                                                                             0x20);
                                                            pVVar1[1].vector[0x10].z =
                                                                 (float)(int)(((ulonglong)(uint)y <<
                                                                              0x20) >> 0x20);
                                                            pVVar1[1].vector[0x11].x = z;
                                                            if (0x34 < (uint)pVVar1->max_length) {
                                                              pVVar1[1].vector[0x11].y =
                                                                   (float)(int)((ulonglong)(uint)y
                                                                               << 0x20);
                                                              pVVar1[1].vector[0x11].z =
                                                                   (float)(int)(((ulonglong)(uint)y
                                                                                << 0x20) >> 0x20);
                                                              pVVar1[1].vector[0x12].x = 0.0;
                                                              if (0x35 < (uint)pVVar1->max_length) {
                                                                pVVar1[1].vector[0x12].y =
                                                                     (float)(int)((ulonglong)(uint)y
                                                                                 << 0x20);
                                                                pVVar1[1].vector[0x12].z =
                                                                     (float)(int)(((ulonglong)
                                                                                   (uint)y << 0x20)
                                                                                 >> 0x20);
                                                                pVVar1[1].vector[0x13].x = x;
                                                                if (0x36 < (uint)pVVar1->max_length)
                                                                {
                                                                  pVVar1[1].vector[0x13].y =
                                                                       (float)(int)((ulonglong)
                                                                                    (uint)y << 0x20)
                                                                  ;
                                                                  pVVar1[1].vector[0x13].z =
                                                                       (float)(int)(((ulonglong)
                                                                                     (uint)y << 0x20
                                                                                    ) >> 0x20);
                                                                  pVVar1[1].vector[0x14].x = x_00;
                                                                  if (0x37 < (uint)pVVar1->
                                                  max_length) {
                                                    pVVar1[1].vector[0x14].y =
                                                         (float)(int)((ulonglong)(uint)z << 0x20);
                                                    pVVar1[1].vector[0x14].z =
                                                         (float)(int)(((ulonglong)(uint)z << 0x20)
                                                                     >> 0x20);
                                                    pVVar1[1].vector[0x15].x = y;
                                                    if (0x38 < (uint)pVVar1->max_length) {
                                                      pVVar1[1].vector[0x15].y =
                                                           (float)(int)((ulonglong)(uint)z << 0x20);
                                                      pVVar1[1].vector[0x15].z =
                                                           (float)(int)(((ulonglong)(uint)z << 0x20)
                                                                       >> 0x20);
                                                      pVVar1[1].vector[0x16].x = z;
                                                      if (0x39 < (uint)pVVar1->max_length) {
                                                        pVVar1[1].vector[0x16].y =
                                                             (float)(int)((ulonglong)(uint)z << 0x20
                                                                         );
                                                        pVVar1[1].vector[0x16].z =
                                                             (float)(int)(((ulonglong)(uint)z <<
                                                                          0x20) >> 0x20);
                                                        pVVar1[1].vector[0x17].x = 0.0;
                                                        if (0x3a < (uint)pVVar1->max_length) {
                                                          pVVar1[1].vector[0x17].y =
                                                               (float)(int)((ulonglong)(uint)z <<
                                                                           0x20);
                                                          pVVar1[1].vector[0x17].z =
                                                               (float)(int)(((ulonglong)(uint)z <<
                                                                            0x20) >> 0x20);
                                                          pVVar1[1].vector[0x18].x = x;
                                                          if (0x3b < (uint)pVVar1->max_length) {
                                                            pVVar1[1].vector[0x18].y =
                                                                 (float)(int)((ulonglong)(uint)z <<
                                                                             0x20);
                                                            pVVar1[1].vector[0x18].z =
                                                                 (float)(int)(((ulonglong)(uint)z <<
                                                                              0x20) >> 0x20);
                                                            pVVar1[1].vector[0x19].x = x_00;
                                                            if (0x3c < (uint)pVVar1->max_length) {
                                                              pVVar1[1].vector[0x19].y = 0.0;
                                                              pVVar1[1].vector[0x19].z = 0.0;
                                                              pVVar1[1].vector[0x1a].x = y;
                                                              if (0x3d < (uint)pVVar1->max_length) {
                                                                pVVar1[1].vector[0x1a].y = 0.0;
                                                                pVVar1[1].vector[0x1a].z = 0.0;
                                                                pVVar1[1].vector[0x1b].x = z;
                                                                if (0x3e < (uint)pVVar1->max_length)
                                                                {
                                                                  pVVar1[1].vector[0x1b].y = 0.0;
                                                                  pVVar1[1].vector[0x1b].z = 0.0;
                                                                  pVVar1[1].vector[0x1c].x = 0.0;
                                                                  if (0x3f < (uint)pVVar1->
                                                  max_length) {
                                                    pVVar1[1].vector[0x1c].y = 0.0;
                                                    pVVar1[1].vector[0x1c].z = 0.0;
                                                    pVVar1[1].vector[0x1d].x = x;
                                                    if (0x40 < (uint)pVVar1->max_length) {
                                                      pVVar1[1].vector[0x1d].y = 0.0;
                                                      pVVar1[1].vector[0x1d].z = 0.0;
                                                      pVVar1[1].vector[0x1e].x = x_00;
                                                      if (0x41 < (uint)pVVar1->max_length) {
                                                        pVVar1[1].vector[0x1e].y =
                                                             (float)(int)((ulonglong)(uint)x << 0x20
                                                                         );
                                                        pVVar1[1].vector[0x1e].z =
                                                             (float)(int)(((ulonglong)(uint)x <<
                                                                          0x20) >> 0x20);
                                                        pVVar1[1].vector[0x1f].x = y;
                                                        if (0x42 < (uint)pVVar1->max_length) {
                                                          pVVar1[1].vector[0x1f].y =
                                                               (float)(int)((ulonglong)(uint)x <<
                                                                           0x20);
                                                          pVVar1[1].vector[0x1f].z =
                                                               (float)(int)(((ulonglong)(uint)x <<
                                                                            0x20) >> 0x20);
                                                          *(float *)&pVVar1[2].klass = z;
                                                          if (0x43 < (uint)pVVar1->max_length) {
                                                            *(ulonglong *)
                                                             ((longlong)&pVVar1[2].klass + 4) =
                                                                 (ulonglong)(uint)x << 0x20;
                                                            *(undefined4 *)
                                                             ((longlong)&pVVar1[2].monitor + 4) = 0;
                                                            if (0x44 < (uint)pVVar1->max_length) {
                                                              pVVar1[2].bounds =
                                                                   (Il2CppArrayBounds *)
                                                                   ((ulonglong)(uint)x << 0x20);
                                                              *(float *)&pVVar1[2].max_length = x;
                                                              if (0x45 < (uint)pVVar1->max_length) {
                                                                *(ulonglong *)
                                                                 ((longlong)&pVVar1[2].max_length +
                                                                 4) = (ulonglong)(uint)x << 0x20;
                                                                pVVar1[2].vector[0].y = x_00;
                                                                if (0x46 < (uint)pVVar1->max_length)
                                                                {
                                                                  *(ulonglong *)
                                                                   &pVVar1[2].vector[0].z =
                                                                       (ulonglong)(uint)x_00 << 0x20
                                                                  ;
                                                                  pVVar1[2].vector[1].y = y;
                                                                  if (0x47 < (uint)pVVar1->
                                                  max_length) {
                                                    *(ulonglong *)&pVVar1[2].vector[1].z =
                                                         (ulonglong)(uint)x_00 << 0x20;
                                                    pVVar1[2].vector[2].y = z;
                                                    if (0x48 < (uint)pVVar1->max_length) {
                                                      *(ulonglong *)&pVVar1[2].vector[2].z =
                                                           (ulonglong)(uint)x_00 << 0x20;
                                                      pVVar1[2].vector[3].y = 0.0;
                                                      if (0x49 < (uint)pVVar1->max_length) {
                                                        *(ulonglong *)&pVVar1[2].vector[3].z =
                                                             (ulonglong)(uint)x_00 << 0x20;
                                                        pVVar1[2].vector[4].y = x;
                                                        if (0x4a < (uint)pVVar1->max_length) {
                                                          *(ulonglong *)&pVVar1[2].vector[4].z =
                                                               (ulonglong)(uint)x_00 << 0x20;
                                                          pVVar1[2].vector[5].y = x_00;
                                                          if (0x4b < (uint)pVVar1->max_length) {
                                                            *(ulonglong *)&pVVar1[2].vector[5].z =
                                                                 CONCAT44(y,x);
                                                            pVVar1[2].vector[6].y = y;
                                                            if (0x4c < (uint)pVVar1->max_length) {
                                                              *(ulonglong *)&pVVar1[2].vector[6].z =
                                                                   CONCAT44(y,x);
                                                              pVVar1[2].vector[7].y = z;
                                                              if (0x4d < (uint)pVVar1->max_length) {
                                                                *(ulonglong *)&pVVar1[2].vector[7].z
                                                                     = CONCAT44(y,x);
                                                                pVVar1[2].vector[8].y = 0.0;
                                                                if (0x4e < (uint)pVVar1->max_length)
                                                                {
                                                                  *(ulonglong *)
                                                                   &pVVar1[2].vector[8].z =
                                                                       CONCAT44(y,x);
                                                                  pVVar1[2].vector[9].y = x;
                                                                  if (0x4f < (uint)pVVar1->
                                                  max_length) {
                                                    *(ulonglong *)&pVVar1[2].vector[9].z =
                                                         CONCAT44(y,x);
                                                    pVVar1[2].vector[10].y = x_00;
                                                    if (0x50 < (uint)pVVar1->max_length) {
                                                      *(ulonglong *)&pVVar1[2].vector[10].z =
                                                           CONCAT44(z,x);
                                                      pVVar1[2].vector[0xb].y = y;
                                                      if (0x51 < (uint)pVVar1->max_length) {
                                                        *(ulonglong *)&pVVar1[2].vector[0xb].z =
                                                             CONCAT44(z,x);
                                                        pVVar1[2].vector[0xc].y = z;
                                                        if (0x52 < (uint)pVVar1->max_length) {
                                                          *(ulonglong *)&pVVar1[2].vector[0xc].z =
                                                               CONCAT44(z,x);
                                                          pVVar1[2].vector[0xd].y = 0.0;
                                                          if (0x53 < (uint)pVVar1->max_length) {
                                                            *(ulonglong *)&pVVar1[2].vector[0xd].z =
                                                                 CONCAT44(z,x);
                                                            pVVar1[2].vector[0xe].y = x;
                                                            if (0x54 < (uint)pVVar1->max_length) {
                                                              *(ulonglong *)&pVVar1[2].vector[0xe].z
                                                                   = CONCAT44(z,x);
                                                              pVVar1[2].vector[0xf].y = x_00;
                                                              if (0x55 < (uint)pVVar1->max_length) {
                                                                *(ulonglong *)
                                                                 &pVVar1[2].vector[0xf].z =
                                                                     (ulonglong)(uint)x;
                                                                pVVar1[2].vector[0x10].y = y;
                                                                if (0x56 < (uint)pVVar1->max_length)
                                                                {
                                                                  *(ulonglong *)
                                                                   &pVVar1[2].vector[0x10].z =
                                                                       (ulonglong)(uint)x;
                                                                  pVVar1[2].vector[0x11].y = z;
                                                                  if (0x57 < (uint)pVVar1->
                                                  max_length) {
                                                    *(ulonglong *)&pVVar1[2].vector[0x11].z =
                                                         (ulonglong)(uint)x;
                                                    pVVar1[2].vector[0x12].y = 0.0;
                                                    if (0x58 < (uint)pVVar1->max_length) {
                                                      *(ulonglong *)&pVVar1[2].vector[0x12].z =
                                                           (ulonglong)(uint)x;
                                                      pVVar1[2].vector[0x13].y = x;
                                                      if (0x59 < (uint)pVVar1->max_length) {
                                                        *(ulonglong *)&pVVar1[2].vector[0x13].z =
                                                             (ulonglong)(uint)x;
                                                        pVVar1[2].vector[0x14].y = x_00;
                                                        if (0x5a < (uint)pVVar1->max_length) {
                                                          *(ulonglong *)&pVVar1[2].vector[0x14].z =
                                                               CONCAT44(x,x);
                                                          pVVar1[2].vector[0x15].y = y;
                                                          if (0x5b < (uint)pVVar1->max_length) {
                                                            *(ulonglong *)&pVVar1[2].vector[0x15].z
                                                                 = CONCAT44(x,x);
                                                            pVVar1[2].vector[0x16].y = z;
                                                            if (0x5c < (uint)pVVar1->max_length) {
                                                              *(ulonglong *)
                                                               &pVVar1[2].vector[0x16].z =
                                                                   CONCAT44(x,x);
                                                              pVVar1[2].vector[0x17].y = 0.0;
                                                              if (0x5d < (uint)pVVar1->max_length) {
                                                                *(ulonglong *)
                                                                 &pVVar1[2].vector[0x17].z =
                                                                     CONCAT44(x,x);
                                                                pVVar1[2].vector[0x18].y = x;
                                                                if (0x5e < (uint)pVVar1->max_length)
                                                                {
                                                                  *(ulonglong *)
                                                                   &pVVar1[2].vector[0x18].z =
                                                                       CONCAT44(x,x);
                                                                  pVVar1[2].vector[0x19].y = x_00;
                                                                  if (0x5f < (uint)pVVar1->
                                                  max_length) {
                                                    *(ulonglong *)&pVVar1[2].vector[0x19].z =
                                                         CONCAT44(x_00,x);
                                                    pVVar1[2].vector[0x1a].y = y;
                                                    if (0x60 < (uint)pVVar1->max_length) {
                                                      *(ulonglong *)&pVVar1[2].vector[0x1a].z =
                                                           CONCAT44(x_00,x);
                                                      pVVar1[2].vector[0x1b].y = z;
                                                      if (0x61 < (uint)pVVar1->max_length) {
                                                        *(ulonglong *)&pVVar1[2].vector[0x1b].z =
                                                             CONCAT44(x_00,x);
                                                        pVVar1[2].vector[0x1c].y = 0.0;
                                                        if (0x62 < (uint)pVVar1->max_length) {
                                                          *(ulonglong *)&pVVar1[2].vector[0x1c].z =
                                                               CONCAT44(x_00,x);
                                                          pVVar1[2].vector[0x1d].y = x;
                                                          if (99 < (uint)pVVar1->max_length) {
                                                            *(ulonglong *)&pVVar1[2].vector[0x1d].z
                                                                 = CONCAT44(x_00,x);
                                                            pVVar1[2].vector[0x1e].y = x_00;
                                                            if (100 < (uint)pVVar1->max_length) {
                                                              *(ulonglong *)
                                                               &pVVar1[2].vector[0x1e].z =
                                                                   CONCAT44(y,x_00);
                                                              pVVar1[2].vector[0x1f].y = y;
                                                              if (0x65 < (uint)pVVar1->max_length) {
                                                                *(ulonglong *)
                                                                 &pVVar1[2].vector[0x1f].z =
                                                                     CONCAT44(y,x_00);
                                                                *(float *)((longlong)
                                                                           &pVVar1[3].klass + 4) = z
                                                                ;
                                                                if (0x66 < (uint)pVVar1->max_length)
                                                                {
                                                                  pVVar1[3].monitor =
                                                                       (MonitorData *)
                                                                       CONCAT44(y,x_00);
                                                                  *(undefined4 *)&pVVar1[3].bounds =
                                                                       0;
                                                                  if (0x67 < (uint)pVVar1->
                                                  max_length) {
                                                    *(ulonglong *)((longlong)&pVVar1[3].bounds + 4)
                                                         = CONCAT44(y,x_00);
                                                    *(float *)((longlong)&pVVar1[3].max_length + 4)
                                                         = x;
                                                    if (0x68 < (uint)pVVar1->max_length) {
                                                      pVVar1[3].vector[0].x = x_00;
                                                      pVVar1[3].vector[0].y = y;
                                                      pVVar1[3].vector[0].z = x_00;
                                                      if (0x69 < (uint)pVVar1->max_length) {
                                                        pVVar1[3].vector[1].x = x_00;
                                                        pVVar1[3].vector[1].y = z;
                                                        pVVar1[3].vector[1].z = y;
                                                        if (0x6a < (uint)pVVar1->max_length) {
                                                          pVVar1[3].vector[2].x = x_00;
                                                          pVVar1[3].vector[2].y = z;
                                                          pVVar1[3].vector[2].z = z;
                                                          if (0x6b < (uint)pVVar1->max_length) {
                                                            pVVar1[3].vector[3].x = x_00;
                                                            pVVar1[3].vector[3].y = z;
                                                            pVVar1[3].vector[3].z = 0.0;
                                                            if (0x6c < (uint)pVVar1->max_length) {
                                                              pVVar1[3].vector[4].x = x_00;
                                                              pVVar1[3].vector[4].y = z;
                                                              pVVar1[3].vector[4].z = x;
                                                              if (0x6d < (uint)pVVar1->max_length) {
                                                                pVVar1[3].vector[5].x = x_00;
                                                                pVVar1[3].vector[5].y = z;
                                                                pVVar1[3].vector[5].z = x_00;
                                                                if (0x6e < (uint)pVVar1->max_length)
                                                                {
                                                                  pVVar1[3].vector[6].x =
                                                                       (float)(int)(ulonglong)
                                                                                   (uint)x_00;
                                                                  pVVar1[3].vector[6].y =
                                                                       (float)(int)((ulonglong)
                                                                                    (uint)x_00 >>
                                                                                   0x20);
                                                                  pVVar1[3].vector[6].z = y;
                                                                  if (0x6f < (uint)pVVar1->
                                                  max_length) {
                                                    pVVar1[3].vector[7].x =
                                                         (float)(int)(ulonglong)(uint)x_00;
                                                    pVVar1[3].vector[7].y =
                                                         (float)(int)((ulonglong)(uint)x_00 >> 0x20)
                                                    ;
                                                    pVVar1[3].vector[7].z = z;
                                                    if (0x70 < (uint)pVVar1->max_length) {
                                                      pVVar1[3].vector[8].x =
                                                           (float)(int)(ulonglong)(uint)x_00;
                                                      pVVar1[3].vector[8].y =
                                                           (float)(int)((ulonglong)(uint)x_00 >>
                                                                       0x20);
                                                      pVVar1[3].vector[8].z = 0.0;
                                                      if (0x71 < (uint)pVVar1->max_length) {
                                                        pVVar1[3].vector[9].x =
                                                             (float)(int)(ulonglong)(uint)x_00;
                                                        pVVar1[3].vector[9].y =
                                                             (float)(int)((ulonglong)(uint)x_00 >>
                                                                         0x20);
                                                        pVVar1[3].vector[9].z = x;
                                                        if (0x72 < (uint)pVVar1->max_length) {
                                                          pVVar1[3].vector[10].x =
                                                               (float)(int)(ulonglong)(uint)x_00;
                                                          pVVar1[3].vector[10].y =
                                                               (float)(int)((ulonglong)(uint)x_00 >>
                                                                           0x20);
                                                          pVVar1[3].vector[10].z = x_00;
                                                          if (0x73 < (uint)pVVar1->max_length) {
                                                            pVVar1[3].vector[0xb].x = x_00;
                                                            pVVar1[3].vector[0xb].y = x;
                                                            pVVar1[3].vector[0xb].z = y;
                                                            if (0x74 < (uint)pVVar1->max_length) {
                                                              pVVar1[3].vector[0xc].x = x_00;
                                                              pVVar1[3].vector[0xc].y = x;
                                                              pVVar1[3].vector[0xc].z = z;
                                                              if (0x75 < (uint)pVVar1->max_length) {
                                                                pVVar1[3].vector[0xd].x = x_00;
                                                                pVVar1[3].vector[0xd].y = x;
                                                                pVVar1[3].vector[0xd].z = 0.0;
                                                                if (0x76 < (uint)pVVar1->max_length)
                                                                {
                                                                  pVVar1[3].vector[0xe].x = x_00;
                                                                  pVVar1[3].vector[0xe].y = x;
                                                                  pVVar1[3].vector[0xe].z = x;
                                                                  if (0x77 < (uint)pVVar1->
                                                  max_length) {
                                                    pVVar1[3].vector[0xf].x = x_00;
                                                    pVVar1[3].vector[0xf].y = x;
                                                    pVVar1[3].vector[0xf].z = x_00;
                                                    if (0x78 < (uint)pVVar1->max_length) {
                                                      pVVar1[3].vector[0x10].x = x_00;
                                                      pVVar1[3].vector[0x10].y = x_00;
                                                      pVVar1[3].vector[0x10].z = y;
                                                      if (0x79 < (uint)pVVar1->max_length) {
                                                        pVVar1[3].vector[0x11].x = x_00;
                                                        pVVar1[3].vector[0x11].y = x_00;
                                                        pVVar1[3].vector[0x11].z = z;
                                                        if (0x7a < (uint)pVVar1->max_length) {
                                                          pVVar1[3].vector[0x12].x = x_00;
                                                          pVVar1[3].vector[0x12].y = x_00;
                                                          pVVar1[3].vector[0x12].z = 0.0;
                                                          if (0x7b < (uint)pVVar1->max_length) {
                                                            pVVar1[3].vector[0x13].x = x_00;
                                                            pVVar1[3].vector[0x13].y = x_00;
                                                            pVVar1[3].vector[0x13].z = x;
                                                            if (0x7c < (uint)pVVar1->max_length) {
                                                              bVar2 = iRam_? != 0;
                                                              pVVar1[3].vector[0x14].x = x_00;
                                                              pVVar1[3].vector[0x14].y = x_00;
                                                              pVVar1[3].vector[0x14].z = x_00;
                                                                                                                            
                                                  TypeInfo__MV__WorldObject__CubeDataPacker->
                                                  static_fields->bytePositionLookUpTable = pVVar1;
                                                  if (bVar2) {
                                                    func_?(
                                                  TypeInfo__MV__WorldObject__CubeDataPacker->
                                                  static_fields);
                                                  }
                                                  this = (
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte_ *)
                                                  FUN_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>
                                                  );
                                                  method_00 = 
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Dictionary__
                                                  ->klass->rgctx_data->method;
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte___ctor_5
                                                            (this,0,(
                                                  IEqualityComparer_1_UnityEngine_Vector3_ *)0x0,
                                                  method_00);
                                                  if (this != (
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte_ *)
                                                  0x0) {
                                                    VStack_3.z = y;
                                                    VStack_3.y = y;
                                                    VStack_3.x = y;
                                                    uVar4 = CONCAT71((int7)((ulonglong)method_00 >>
                                                                           8),2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[UnityEngine::Vector3,System::Byte]
                                                    ::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = z;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,1,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = 0.0;
                                                  uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  uVar4 = 0;
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,2,
                                                             (InsertionBehavior__Enum)uVar5,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x;
                                                  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
                                                  uVar6 = (undefined7)((ulonglong)uVar4 >> 8);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,3,
                                                             (InsertionBehavior__Enum)uVar5,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x_00;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,4,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.y = z;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  VStack_3.z = y;
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,5,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = z;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,6,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = 0.0;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,7,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,8,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x_00;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,9,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = y;
                                                  VStack_3._0_8_ = ZEXT48((uint)y);
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,10,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3._0_8_ = ZEXT48((uint)y);
                                                  VStack_3.z = z;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0xb,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = 0.0;
                                                  VStack_3._0_8_ = ZEXT48((uint)y);
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0xc,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x;
                                                  VStack_3._0_8_ = ZEXT48((uint)y);
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0xd,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x_00;
                                                  VStack_3._0_8_ = ZEXT48((uint)y);
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0xe,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = y;
                                                  VStack_3.y = x;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0xf,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = z;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x10,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = 0.0;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x11,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x12,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x_00;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x13,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = y;
                                                  VStack_3.y = x_00;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x14,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = z;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x15,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = 0.0;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x16,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  VStack_3.z = x;
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x17,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x_00;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x18,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = y;
                                                  VStack_3.y = y;
                                                  VStack_3.x = z;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x19,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = z;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x1a,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = 0.0;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x1b,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x1c,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x_00;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x1d,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = y;
                                                  VStack_3.y = z;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x1e,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = z;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x1f,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = 0.0;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x20,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x21,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x_00;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x22,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = y;
                                                  VStack_3._0_8_ = ZEXT48((uint)z);
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x23,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = z;
                                                  VStack_3._0_8_ = ZEXT48((uint)z);
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x24,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = 0.0;
                                                  VStack_3._0_8_ = ZEXT48((uint)z);
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x25,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x;
                                                  VStack_3._0_8_ = ZEXT48((uint)z);
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x26,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x_00;
                                                  VStack_3._0_8_ = ZEXT48((uint)z);
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x27,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.y = x;
                                                  VStack_3.z = y;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x28,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = z;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x29,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = 0.0;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x2a,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x2b,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x_00;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x2c,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = y;
                                                  VStack_3.y = x_00;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x2d,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  VStack_3.z = z;
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x2e,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = 0.0;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x2f,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x30,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x_00;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x31,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = y;
                                                  VStack_3._0_8_ = (ulonglong)(uint)y << 0x20;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x32,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = z;
                                                  VStack_3._0_8_ = (ulonglong)(uint)y << 0x20;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x33,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = 0.0;
                                                  VStack_3._0_8_ = (ulonglong)(uint)y << 0x20;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x34,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x;
                                                  VStack_3._0_8_ = (ulonglong)(uint)y << 0x20;
                                                  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x35,
                                                             (InsertionBehavior__Enum)uVar4,
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_3.z = x_00;
                                                  VStack_3._0_8_ = (ulonglong)(uint)y << 0x20;
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[UnityEngine::Vector3,System::Byte]::
                                                  Dictionary_2_UnityEngine_Vector3_System_Byte__TryInsert
                                                            (this,&VStack_3,0x36,
                                                             (InsertionBehavior__Enum)
                                                             CONCAT71((int7)((ulonglong)uVar4 >> 8),
                                                                      2),
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  ->klass->rgctx_data[0x22].method);
                                                  VStack_7.x = 0.0;
                                                  VStack_7.y = 0.0;
                                                  VStack_7.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_7,0.0,z,y,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_7.x;
                                                  VStack_3.y = VStack_7.y;
                                                  VStack_3.z = VStack_7.z;
                                                  FUN_?(this,&VStack_3,
                                                                CONCAT71(uVar6,0x37),
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_8.x = 0.0;
                                                  VStack_8.y = 0.0;
                                                  VStack_8.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_8,0.0,z,z,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_8.x;
                                                  VStack_3.y = VStack_8.y;
                                                  VStack_3.z = VStack_8.z;
                                                  FUN_?(this,&VStack_3,0x38,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_9.x = 0.0;
                                                  VStack_9.y = 0.0;
                                                  VStack_9.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_9,0.0,z,0.0,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_9.x;
                                                  VStack_3.y = VStack_9.y;
                                                  VStack_3.z = VStack_9.z;
                                                  FUN_?(this,&VStack_3,0x39,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_10.x = 0.0;
                                                  VStack_10.y = 0.0;
                                                  VStack_10.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_10,0.0,z,x,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_10.x;
                                                  VStack_3.y = VStack_10.y;
                                                  VStack_3.z = VStack_10.z;
                                                  FUN_?(this,&VStack_3,0x3a,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_11.x = 0.0;
                                                  VStack_11.y = 0.0;
                                                  VStack_11.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_11,0.0,z,x_00,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_11.x;
                                                  VStack_3.y = VStack_11.y;
                                                  VStack_3.z = VStack_11.z;
                                                  FUN_?(this,&VStack_3,0x3b,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_12.x = 0.0;
                                                  VStack_12.y = 0.0;
                                                  VStack_12.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_12,0.0,0.0,y,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_12.x;
                                                  VStack_3.y = VStack_12.y;
                                                  VStack_3.z = VStack_12.z;
                                                  FUN_?(this,&VStack_3,0x3c,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_13.x = 0.0;
                                                  VStack_13.y = 0.0;
                                                  VStack_13.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_13,0.0,0.0,z,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_13.x;
                                                  VStack_3.y = VStack_13.y;
                                                  VStack_3.z = VStack_13.z;
                                                  FUN_?(this,&VStack_3,0x3d,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_14.x = 0.0;
                                                  VStack_14.y = 0.0;
                                                  VStack_14.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_14,0.0,0.0,0.0,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_14.x;
                                                  VStack_3.y = VStack_14.y;
                                                  VStack_3.z = VStack_14.z;
                                                  FUN_?(this,&VStack_3,0x3e,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_15.x = 0.0;
                                                  VStack_15.y = 0.0;
                                                  VStack_15.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_15,0.0,0.0,x,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_15.x;
                                                  VStack_3.y = VStack_15.y;
                                                  VStack_3.z = VStack_15.z;
                                                  FUN_?(this,&VStack_3,0x3f,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_16.x = 0.0;
                                                  VStack_16.y = 0.0;
                                                  VStack_16.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_16,0.0,0.0,x_00,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_16.x;
                                                  VStack_3.y = VStack_16.y;
                                                  VStack_3.z = VStack_16.z;
                                                  FUN_?(this,&VStack_3,0x40,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_17.x = 0.0;
                                                  VStack_17.y = 0.0;
                                                  VStack_17.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_17,0.0,x,y,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_17.x;
                                                  VStack_3.y = VStack_17.y;
                                                  VStack_3.z = VStack_17.z;
                                                  FUN_?(this,&VStack_3,0x41,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_18.x = 0.0;
                                                  VStack_18.y = 0.0;
                                                  VStack_18.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_18,0.0,x,z,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_18.x;
                                                  VStack_3.y = VStack_18.y;
                                                  VStack_3.z = VStack_18.z;
                                                  FUN_?(this,&VStack_3,0x42,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_19.x = 0.0;
                                                  VStack_19.y = 0.0;
                                                  VStack_19.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_19,0.0,x,0.0,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_19.x;
                                                  VStack_3.y = VStack_19.y;
                                                  VStack_3.z = VStack_19.z;
                                                  FUN_?(this,&VStack_3,0x43,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_20.x = 0.0;
                                                  VStack_20.y = 0.0;
                                                  VStack_20.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_20,0.0,x,x,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_20.x;
                                                  VStack_3.y = VStack_20.y;
                                                  VStack_3.z = VStack_20.z;
                                                  FUN_?(this,&VStack_3,0x44,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_21.x = 0.0;
                                                  VStack_21.y = 0.0;
                                                  VStack_21.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_21,0.0,x,x_00,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_21.x;
                                                  VStack_3.y = VStack_21.y;
                                                  VStack_3.z = VStack_21.z;
                                                  FUN_?(this,&VStack_3,0x45,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_22.x = 0.0;
                                                  VStack_22.y = 0.0;
                                                  VStack_22.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_22,0.0,x_00,y,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_22.x;
                                                  VStack_3.y = VStack_22.y;
                                                  VStack_3.z = VStack_22.z;
                                                  FUN_?(this,&VStack_3,0x46,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_23.x = 0.0;
                                                  VStack_23.y = 0.0;
                                                  VStack_23.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_23,0.0,x_00,z,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_23.x;
                                                  VStack_3.y = VStack_23.y;
                                                  VStack_3.z = VStack_23.z;
                                                  FUN_?(this,&VStack_3,0x47,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_24.x = 0.0;
                                                  VStack_24.y = 0.0;
                                                  VStack_24.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_24,0.0,x_00,0.0,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_24.x;
                                                  VStack_3.y = VStack_24.y;
                                                  VStack_3.z = VStack_24.z;
                                                  FUN_?(this,&VStack_3,0x48,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_25.x = 0.0;
                                                  VStack_25.y = 0.0;
                                                  VStack_25.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_25,0.0,x_00,x,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_25.x;
                                                  VStack_3.y = VStack_25.y;
                                                  VStack_3.z = VStack_25.z;
                                                  FUN_?(this,&VStack_3,0x49,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_26.x = 0.0;
                                                  VStack_26.y = 0.0;
                                                  VStack_26.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_26,0.0,x_00,x_00,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_26.x;
                                                  VStack_3.y = VStack_26.y;
                                                  VStack_3.z = VStack_26.z;
                                                  FUN_?(this,&VStack_3,0x4a,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_27.x = 0.0;
                                                  VStack_27.y = 0.0;
                                                  VStack_27.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_27,x,y,y,(MethodInfo *)0x0)
                                                  ;
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_27.x;
                                                  VStack_3.y = VStack_27.y;
                                                  VStack_3.z = VStack_27.z;
                                                  FUN_?(this,&VStack_3,0x4b,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_28.x = 0.0;
                                                  VStack_28.y = 0.0;
                                                  VStack_28.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_28,x,y,z,(MethodInfo *)0x0)
                                                  ;
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_28.x;
                                                  VStack_3.y = VStack_28.y;
                                                  VStack_3.z = VStack_28.z;
                                                  FUN_?(this,&VStack_3,0x4c,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_29.x = 0.0;
                                                  VStack_29.y = 0.0;
                                                  VStack_29.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_29,x,y,0.0,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_29.x;
                                                  VStack_3.y = VStack_29.y;
                                                  VStack_3.z = VStack_29.z;
                                                  FUN_?(this,&VStack_3,0x4d,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_30.x = 0.0;
                                                  VStack_30.y = 0.0;
                                                  VStack_30.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_30,x,y,x,(MethodInfo *)0x0)
                                                  ;
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_30.x;
                                                  VStack_3.y = VStack_30.y;
                                                  VStack_3.z = VStack_30.z;
                                                  FUN_?(this,&VStack_3,0x4e,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_31.x = 0.0;
                                                  VStack_31.y = 0.0;
                                                  VStack_31.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_31,x,y,x_00,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_31.x;
                                                  VStack_3.y = VStack_31.y;
                                                  VStack_3.z = VStack_31.z;
                                                  FUN_?(this,&VStack_3,0x4f,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_32.x = 0.0;
                                                  VStack_32.y = 0.0;
                                                  VStack_32.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_32,x,z,y,(MethodInfo *)0x0)
                                                  ;
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_32.x;
                                                  VStack_3.y = VStack_32.y;
                                                  VStack_3.z = VStack_32.z;
                                                  FUN_?(this,&VStack_3,0x50,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_33.x = 0.0;
                                                  VStack_33.y = 0.0;
                                                  VStack_33.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_33,x,z,z,(MethodInfo *)0x0)
                                                  ;
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_33.x;
                                                  VStack_3.y = VStack_33.y;
                                                  VStack_3.z = VStack_33.z;
                                                  FUN_?(this,&VStack_3,0x51,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_34.x = 0.0;
                                                  VStack_34.y = 0.0;
                                                  VStack_34.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_34,x,z,0.0,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_34.x;
                                                  VStack_3.y = VStack_34.y;
                                                  VStack_3.z = VStack_34.z;
                                                  FUN_?(this,&VStack_3,0x52,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_35.x = 0.0;
                                                  VStack_35.y = 0.0;
                                                  VStack_35.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_35,x,z,x,(MethodInfo *)0x0)
                                                  ;
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_35.x;
                                                  VStack_3.y = VStack_35.y;
                                                  VStack_3.z = VStack_35.z;
                                                  FUN_?(this,&VStack_3,0x53,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_36.x = 0.0;
                                                  VStack_36.y = 0.0;
                                                  VStack_36.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_36,x,z,x_00,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_36.x;
                                                  VStack_3.y = VStack_36.y;
                                                  VStack_3.z = VStack_36.z;
                                                  FUN_?(this,&VStack_3,0x54,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_37.x = 0.0;
                                                  VStack_37.y = 0.0;
                                                  VStack_37.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_37,x,0.0,y,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_37.x;
                                                  VStack_3.y = VStack_37.y;
                                                  VStack_3.z = VStack_37.z;
                                                  FUN_?(this,&VStack_3,0x55,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_38.x = 0.0;
                                                  VStack_38.y = 0.0;
                                                  VStack_38.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_38,x,0.0,z,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_38.x;
                                                  VStack_3.y = VStack_38.y;
                                                  VStack_3.z = VStack_38.z;
                                                  FUN_?(this,&VStack_3,0x56,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_39.x = 0.0;
                                                  VStack_39.y = 0.0;
                                                  VStack_39.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_39,x,0.0,0.0,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_39.x;
                                                  VStack_3.y = VStack_39.y;
                                                  VStack_3.z = VStack_39.z;
                                                  FUN_?(this,&VStack_3,0x57,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_40.x = 0.0;
                                                  VStack_40.y = 0.0;
                                                  VStack_40.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_40,x,0.0,x,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_40.x;
                                                  VStack_3.y = VStack_40.y;
                                                  VStack_3.z = VStack_40.z;
                                                  FUN_?(this,&VStack_3,0x58,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_41.x = 0.0;
                                                  VStack_41.y = 0.0;
                                                  VStack_41.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_41,x,0.0,x_00,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_41.x;
                                                  VStack_3.y = VStack_41.y;
                                                  VStack_3.z = VStack_41.z;
                                                  FUN_?(this,&VStack_3,0x59,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_42.x = 0.0;
                                                  VStack_42.y = 0.0;
                                                  VStack_42.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_42,x,x,y,(MethodInfo *)0x0)
                                                  ;
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_42.x;
                                                  VStack_3.y = VStack_42.y;
                                                  VStack_3.z = VStack_42.z;
                                                  FUN_?(this,&VStack_3,0x5a,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_43.x = 0.0;
                                                  VStack_43.y = 0.0;
                                                  VStack_43.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_43,x,x,z,(MethodInfo *)0x0)
                                                  ;
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_43.x;
                                                  VStack_3.y = VStack_43.y;
                                                  VStack_3.z = VStack_43.z;
                                                  FUN_?(this,&VStack_3,0x5b,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_44.x = 0.0;
                                                  VStack_44.y = 0.0;
                                                  VStack_44.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_44,x,x,0.0,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_44.x;
                                                  VStack_3.y = VStack_44.y;
                                                  VStack_3.z = VStack_44.z;
                                                  FUN_?(this,&VStack_3,0x5c,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_45.x = 0.0;
                                                  VStack_45.y = 0.0;
                                                  VStack_45.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_45,x,x,x,(MethodInfo *)0x0)
                                                  ;
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_45.x;
                                                  VStack_3.y = VStack_45.y;
                                                  VStack_3.z = VStack_45.z;
                                                  FUN_?(this,&VStack_3,0x5d,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_46.x = 0.0;
                                                  VStack_46.y = 0.0;
                                                  VStack_46.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_46,x,x,x_00,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_46.x;
                                                  VStack_3.y = VStack_46.y;
                                                  VStack_3.z = VStack_46.z;
                                                  FUN_?(this,&VStack_3,0x5e,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_47.x = 0.0;
                                                  VStack_47.y = 0.0;
                                                  VStack_47.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_47,x,x_00,y,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_47.x;
                                                  VStack_3.y = VStack_47.y;
                                                  VStack_3.z = VStack_47.z;
                                                  FUN_?(this,&VStack_3,0x5f,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_48.x = 0.0;
                                                  VStack_48.y = 0.0;
                                                  VStack_48.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_48,x,x_00,z,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_48.x;
                                                  VStack_3.y = VStack_48.y;
                                                  VStack_3.z = VStack_48.z;
                                                  FUN_?(this,&VStack_3,0x60,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_49.x = 0.0;
                                                  VStack_49.y = 0.0;
                                                  VStack_49.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_49,x,x_00,0.0,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_49.x;
                                                  VStack_3.y = VStack_49.y;
                                                  VStack_3.z = VStack_49.z;
                                                  FUN_?(this,&VStack_3,0x61,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_50.x = 0.0;
                                                  VStack_50.y = 0.0;
                                                  VStack_50.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_50,x,x_00,x,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_50.x;
                                                  VStack_3.y = VStack_50.y;
                                                  VStack_3.z = VStack_50.z;
                                                  FUN_?(this,&VStack_3,0x62,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_51.x = 0.0;
                                                  VStack_51.y = 0.0;
                                                  VStack_51.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_51,x,x_00,x_00,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_51.x;
                                                  VStack_3.y = VStack_51.y;
                                                  VStack_3.z = VStack_51.z;
                                                  FUN_?(this,&VStack_3,99,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_52.x = 0.0;
                                                  VStack_52.y = 0.0;
                                                  VStack_52.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_52,x_00,y,y,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_52.x;
                                                  VStack_3.y = VStack_52.y;
                                                  VStack_3.z = VStack_52.z;
                                                  FUN_?(this,&VStack_3,100,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_53.x = 0.0;
                                                  VStack_53.y = 0.0;
                                                  VStack_53.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_53,x_00,y,z,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_53.x;
                                                  VStack_3.y = VStack_53.y;
                                                  VStack_3.z = VStack_53.z;
                                                  FUN_?(this,&VStack_3,0x65,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_54.x = 0.0;
                                                  VStack_54.y = 0.0;
                                                  VStack_54.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_54,x_00,y,0.0,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_54.x;
                                                  VStack_3.y = VStack_54.y;
                                                  VStack_3.z = VStack_54.z;
                                                  FUN_?(this,&VStack_3,0x66,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_55.x = 0.0;
                                                  VStack_55.y = 0.0;
                                                  VStack_55.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_55,x_00,y,x,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_55.x;
                                                  VStack_3.y = VStack_55.y;
                                                  VStack_3.z = VStack_55.z;
                                                  FUN_?(this,&VStack_3,0x67,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_56.x = 0.0;
                                                  VStack_56.y = 0.0;
                                                  VStack_56.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_56,x_00,y,x_00,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_56.x;
                                                  VStack_3.y = VStack_56.y;
                                                  VStack_3.z = VStack_56.z;
                                                  FUN_?(this,&VStack_3,0x68,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_57.x = 0.0;
                                                  VStack_57.y = 0.0;
                                                  VStack_57.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_57,x_00,z,y,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_57.x;
                                                  VStack_3.y = VStack_57.y;
                                                  VStack_3.z = VStack_57.z;
                                                  FUN_?(this,&VStack_3,0x69,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_58.x = 0.0;
                                                  VStack_58.y = 0.0;
                                                  VStack_58.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_58,x_00,z,z,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_58.x;
                                                  VStack_3.y = VStack_58.y;
                                                  VStack_3.z = VStack_58.z;
                                                  FUN_?(this,&VStack_3,0x6a,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_59.x = 0.0;
                                                  VStack_59.y = 0.0;
                                                  VStack_59.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_59,x_00,z,0.0,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_59.x;
                                                  VStack_3.y = VStack_59.y;
                                                  VStack_3.z = VStack_59.z;
                                                  FUN_?(this,&VStack_3,0x6b,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_60.x = 0.0;
                                                  VStack_60.y = 0.0;
                                                  VStack_60.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_60,x_00,z,x,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_60.x;
                                                  VStack_3.y = VStack_60.y;
                                                  VStack_3.z = VStack_60.z;
                                                  FUN_?(this,&VStack_3,0x6c,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_61.x = 0.0;
                                                  VStack_61.y = 0.0;
                                                  VStack_61.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_61,x_00,z,x_00,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_61.x;
                                                  VStack_3.y = VStack_61.y;
                                                  VStack_3.z = VStack_61.z;
                                                  FUN_?(this,&VStack_3,0x6d,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_62.x = 0.0;
                                                  VStack_62.y = 0.0;
                                                  VStack_62.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_62,x_00,0.0,y,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_62.x;
                                                  VStack_3.y = VStack_62.y;
                                                  VStack_3.z = VStack_62.z;
                                                  FUN_?(this,&VStack_3,0x6e,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_63.x = 0.0;
                                                  VStack_63.y = 0.0;
                                                  VStack_63.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_63,x_00,0.0,z,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_63.x;
                                                  VStack_3.y = VStack_63.y;
                                                  VStack_3.z = VStack_63.z;
                                                  FUN_?(this,&VStack_3,0x6f,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_64.x = 0.0;
                                                  VStack_64.y = 0.0;
                                                  VStack_64.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_64,x_00,0.0,0.0,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_64.x;
                                                  VStack_3.y = VStack_64.y;
                                                  VStack_3.z = VStack_64.z;
                                                  FUN_?(this,&VStack_3,0x70,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_65.x = 0.0;
                                                  VStack_65.y = 0.0;
                                                  VStack_65.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_65,x_00,0.0,x,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.z = VStack_65.z;
                                                  VStack_3.x = VStack_65.x;
                                                  VStack_3.y = VStack_65.y;
                                                  FUN_?(this,&VStack_3,0x71,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_66.x = 0.0;
                                                  VStack_66.y = 0.0;
                                                  VStack_66.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_66,x_00,0.0,x_00,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_66.x;
                                                  VStack_3.y = VStack_66.y;
                                                  VStack_3.z = VStack_66.z;
                                                  FUN_?(this,&VStack_3,0x72,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_67.x = 0.0;
                                                  VStack_67.y = 0.0;
                                                  VStack_67.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_67,x_00,x,y,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_67.x;
                                                  VStack_3.y = VStack_67.y;
                                                  VStack_3.z = VStack_67.z;
                                                  FUN_?(this,&VStack_3,0x73,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_68.x = 0.0;
                                                  VStack_68.y = 0.0;
                                                  VStack_68.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_68,x_00,x,z,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_68.x;
                                                  VStack_3.y = VStack_68.y;
                                                  VStack_3.z = VStack_68.z;
                                                  FUN_?(this,&VStack_3,0x74,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  aVStack_69[0].x = 0.0;
                                                  aVStack_69[0].y = 0.0;
                                                  aVStack_69[0].z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(aVStack_69,x_00,x,0.0,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = aVStack_69[0].x;
                                                  VStack_3.y = aVStack_69[0].y;
                                                  VStack_3.z = aVStack_69[0].z;
                                                  FUN_?(this,&VStack_3,0x75,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_70.x = 0.0;
                                                  VStack_70.y = 0.0;
                                                  VStack_70.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_70,x_00,x,x,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_70.x;
                                                  VStack_3.y = VStack_70.y;
                                                  VStack_3.z = VStack_70.z;
                                                  FUN_?(this,&VStack_3,0x76,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_71.x = 0.0;
                                                  VStack_71.y = 0.0;
                                                  VStack_71.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_71,x_00,x,x_00,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_71.x;
                                                  VStack_3.y = VStack_71.y;
                                                  VStack_3.z = VStack_71.z;
                                                  FUN_?(this,&VStack_3,0x77,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_72.x = 0.0;
                                                  VStack_72.y = 0.0;
                                                  VStack_72.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_72,x_00,x_00,y,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_72.x;
                                                  VStack_3.y = VStack_72.y;
                                                  VStack_3.z = VStack_72.z;
                                                  FUN_?(this,&VStack_3,0x78,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_73.x = 0.0;
                                                  VStack_73.y = 0.0;
                                                  VStack_73.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_73,x_00,x_00,z,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_73.x;
                                                  VStack_3.y = VStack_73.y;
                                                  VStack_3.z = VStack_73.z;
                                                  FUN_?(this,&VStack_3,0x79,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_74.x = 0.0;
                                                  VStack_74.y = 0.0;
                                                  VStack_74.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_74,x_00,x_00,0.0,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_74.x;
                                                  VStack_3.y = VStack_74.y;
                                                  VStack_3.z = VStack_74.z;
                                                  FUN_?(this,&VStack_3,0x7a,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_75.x = 0.0;
                                                  VStack_75.y = 0.0;
                                                  VStack_75.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_75,x_00,x_00,x,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_75.x;
                                                  VStack_3.y = VStack_75.y;
                                                  VStack_3.z = VStack_75.z;
                                                  FUN_?(this,&VStack_3,0x7b,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  VStack_76.x = 0.0;
                                                  VStack_76.y = 0.0;
                                                  VStack_76.z = 0.0;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                                  Vector3__ctor(&VStack_76,x_00,x_00,x_00,
                                                                (MethodInfo *)0x0);
                                                  FUN_?(this);
                                                  VStack_3.x = VStack_76.x;
                                                  VStack_3.y = VStack_76.y;
                                                  VStack_3.z = VStack_76.z;
                                                  FUN_?(this,&VStack_3,0x7c,
                                                                                                                                
                                                  MethodInfo__System__Collections__Generic__Dictionary<UnityEngine::Vector3,_unsigned_char>__Add_UnityEngine__Vector3__unsigned_char_
                                                  );
                                                  lVar77 = func_?(
                                                  TypeInfo__MV__WorldObject__CubeDataPacker);
                                                  *(Dictionary_2_UnityEngine_Vector3_System_Byte_ **
                                                   )(lVar77 + 8) = this;
                                                  lVar77 = func_?(
                                                  TypeInfo__MV__WorldObject__CubeDataPacker);
                                                  if (iRam_? != 0) {
                                                    func_?(lVar77 + 8);
                                                  }
                                                  array = (Byte__Array *)
                                                          FUN_?(TypeInfo__System__Byte,8);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            ((Array *)array,
                                                                                                                          
                                                  __21F45DB14C222566A3A1BE2C7F8536AF243B32111E7A19F53DB8FDAEC2D3162B_Field
                                                  ,(MethodInfo *)0x0);
                                                  bVar2 = iRam_? != 0;
                                                  TypeInfo__MV__WorldObject__CubeDataPacker->
                                                  static_fields->IdentityByteCorners = array;
                                                  if (bVar2) {
                                                    func_?(&
                                                  TypeInfo__MV__WorldObject__CubeDataPacker->
                                                  static_fields->IdentityByteCorners);
                                                  }
                                                  TypeInfo__MV__WorldObject__CubeDataPacker->
                                                  static_fields->rowMaxLength = 0x3f;
                                                  return;
                                                  }
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
          }
        }
      }
    }
    FUN_?();
    pcVar78 = (code *)swi(3);
    (*pcVar78)();
    return;
  }
code_?:
  FUN_?();
  pcVar78 = (code *)swi(3);
  (*pcVar78)();
  return;
}

